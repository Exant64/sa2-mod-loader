#include "stdafx.h"
#include <dbghelp.h> 
#include <windows.h>
#include <direct.h>
#include <Psapi.h>
#include <shlwapi.h>
#include <time.h>
#include "config.h"
#include <filesystem>  // For std::filesystem on C++17 and above
#include <iostream>
#include <iomanip>


using namespace std;

const string eyeTrackCrash = "The game failed to load the Eyes tracker for the character. If you are making a skin mod, this usually means the hierarchy of your character is wrong.\n\nAlso make sure to NOT rename or delete the bones.";
const string jiggleCrash = "The game failed to load the Jiggle function of the character (quills, tail physics etc.).\nIf you are making a skin mod, you should disable the jiggle for this character using a DLL mod.";

static const unordered_map<intptr_t, string> crashes_addresses_map = {
	{ 0x42C304, "Animation error: the game failed to play one or more animations."  },
	{ 0x42C4F1, "Texture error: the game failed to apply one or more textures."  },
	{ 0x459851, "Animation error: the game failed to load the motion file of a character."  },
	{ 0x46A1CA, "Animation error: the game failed to play a character animation."  },
	{ 0x42EF3A, "Draw Model error: the game failed to draw a model.\nIf you are making a character mod, this might be the jiggle.\nDisable the jiggle or make the head mesh 100% weighted to the head bone."  },
};

struct addressRange
{
	intptr_t start = 0;
	intptr_t end = 0;
	string crashMsg = "";
};

static const addressRange Range_Addresses_list[] =
{
	{ 0x476530, 0x476692, eyeTrackCrash },
	{ 0x447580, 0x447907, jiggleCrash} ,
};

static const string GetRangeAddressesCrash(const intptr_t address)
{
	for (uint8_t i = 0; i < LengthOfArray(Range_Addresses_list); i++)
	{
		if (address >= Range_Addresses_list[i].start && address <= Range_Addresses_list[i].end)
		{
			return Range_Addresses_list[i].crashMsg;
		}
	}

	return "NULL";
}

static const string getErrorMSG(intptr_t address)
{
	if ((crashes_addresses_map.find(address) == crashes_addresses_map.end()))
	{
		return "NULL";
	}

	return crashes_addresses_map.find(address)->second; //return a custom error message if the address is known
}

void SetErrorMessage(string& fullMsg, const string address, const string dllName, const intptr_t crashID)
{
	string errorCommon = getErrorMSG(crashID); //get error message if the crash address is common
	fullMsg = "SA2 has crashed at " + address + " (" + dllName + ").\n";

	if (errorCommon != "NULL")
	{
		fullMsg += "\n" + errorCommon + "\n"; //add the common error message if it exists
	}
	else
	{
		//if the crash isn't in the list, check if it's a common crash from addresses from a whole function...
		auto charcrash = GetRangeAddressesCrash(crashID);

		if (charcrash != "NULL")
		{
			fullMsg += "\n" + charcrash + "\n";
		}
	}

	fullMsg += "\nA crash dump and a mod list have been added to your game's CrashDumps folder.\n\nIf you want to report this crash, please include the dump (.dmp file) and the mod list (.json file) in your report.\n";
}

void CopyAndRename_SA2LoaderProfile()
{
	std::time_t t = std::time(nullptr);
	tm tM;
	localtime_s(&tM, &t);

	// Format the time string
	std::wstringstream oss;
	oss << std::put_time(&tM, L"%m_%d_%Y_%H_%M_%S");
	std::wstring timeStr = oss.str();

	std::filesystem::path directory = std::filesystem::current_path();
	std::filesystem::path sourcePath = currentProfilePath;
	std::filesystem::path destinationPath = directory / L"CrashDump" / (L"ModList_" + timeStr + L".json");

	try 
	{
		std::filesystem::copy_file(sourcePath, destinationPath, std::filesystem::copy_options::overwrite_existing);
		PrintDebug("CrashDump: Successfully copied and renamed SA2 Profile.\n");
	}
	catch (const std::exception& e) 
	{
		PrintDebug("CrashDump: Failed to copy and rename SA2 Profile. Error: %s\n", e.what());
	}
}

bool IsPathExist(const string& s)
{
	struct stat buffer;
	return (stat(s.c_str(), &buffer) == 0);
}

#pragma comment(lib, "dbghelp.lib") 
#pragma comment(lib, "Psapi.lib")
LONG WINAPI HandleException(struct _EXCEPTION_POINTERS* apExceptionInfo)
{
	char timeStr[255];
	time_t t = time(NULL);
	tm tM;
	localtime_s(&tM, &t);
	strftime(timeStr, 255, "CrashDump_%d_%m_%Y_%H_%M_%S.dmp", &tM);
	std::string s = "CrashDump\\";
	s.append(timeStr);

	const char* crashFolder = "CrashDump";

	if (!IsPathExist(crashFolder))
	{
		_mkdir(crashFolder);
	}

	//generate crash dump
	HANDLE hFile = CreateFileA(
		s.c_str(),
		GENERIC_WRITE | GENERIC_READ,
		0,
		NULL,
		CREATE_ALWAYS,
		0,
		NULL
	);

	HANDLE hProcess = GetCurrentProcess();
	PrintDebug("SA2 HAS CRASHED!\n");

	if (hFile != NULL)
	{
		PrintDebug("Generating Crash Dump file...\n");
		MINIDUMP_EXCEPTION_INFORMATION info =
		{
		 GetCurrentThreadId(),
		 apExceptionInfo,
		 TRUE
		};

		MiniDumpWriteDump(
			hProcess,
			GetCurrentProcessId(),
			hFile,
			MiniDumpWithIndirectlyReferencedMemory,
			&info,
			NULL,
			NULL
		);

		CloseHandle(hFile);

		PrintDebug("Done.\n");

		//get crash address
		intptr_t crashID = (intptr_t)info.ExceptionPointers->ExceptionRecord->ExceptionAddress;
		char hex[MAX_PATH];
		sprintf_s(hex, "%x", crashID);
		string address = hex;

		PrintDebug("Get fault module name...\n");

		string dllName;
		HMODULE handle;

		if (GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT, (LPCSTR)crashID, &handle))
		{
			char path[MAX_PATH];
			if (GetModuleFileNameA(handle, path, MAX_PATH))
			{
				auto filename = PathFindFileNameA(path);
				dllName = filename;
			}
		}

		string fullMsg = "";
		SetErrorMessage(fullMsg, address, dllName, crashID);
		CopyAndRename_SA2LoaderProfile(); //copy JSON Profile file to the Crash Dump folder so we know what mods and cheat were used
		string text = "Crash Address: " + address + "\n";
		PrintDebug("\nFault module name: %s \n", dllName.c_str());
		PrintDebug(text.c_str());

		PrintDebug("Crash Dump Done.\n");
		MessageBoxA(0, fullMsg.c_str(), "SA2 Has Crashed", MB_ICONERROR);
	}

	return EXCEPTION_EXECUTE_HANDLER;
}


void initCrashDump()
{
	SetUnhandledExceptionFilter(HandleException);
}