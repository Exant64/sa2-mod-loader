#include "stdafx.h"
#include "json.hpp"
#include "IniFile.hpp"
#include "FileSystem.h"

using json = nlohmann::json;
using std::string;
using std::wstring;
using std::vector;
using std::unique_ptr;

std::wstring currentProfilePath; // Used for crash dumps
vector<std::string> ModList;

std::string GetModName(int index)
{
	return ModList.at(index - 1);
}

int GetModCount()
{
	return ModList.size();
}

char inilangs[]{
	Language_English,
	Language_German,
	Language_Spanish,
	Language_French,
	Language_Italian,
	Language_Japanese
};

void DisplaySettingsLoadError(wstring gamePath, wstring appPath, wstring errorFile)
{
	wstring gamepatherror = L"\n\nGame path: " + gamePath;
	wstring appdataerror = L"\n\nManager data path: " + appPath;
	wstring missingerror = L"\n\nThe following file was missing: " + errorFile;
	wstring error = L"Mod Loader settings could not be read. Please run the Mod Manager, save settings and try again." + gamepatherror + appdataerror + missingerror;
	MessageBox(MainWindowHandle, error.c_str(), L"SA2 Mod Loader", MB_ICONERROR);
	OnExit(0, 0, 0);
	ExitProcess(0);
}


void LoadModLoaderSettings(LoaderSettings* loaderSettings, std::wstring appPath, std::wstring gamePath)
{
	std::wstring profileFolderName = L"profiles\\";
	std::wstring profilesPath = appPath + profileFolderName + L"Profiles.json";

	if (!Exists(profilesPath)) // If Profiles.json doesn't exist, assume the old paths system that adds "SA2" instead of "profiles"
	{
		profileFolderName = L"SA2\\";
		profilesPath = appPath + profileFolderName + L"Profiles.json";

		// If that doesn't exist either, display an error and quit
		if (!Exists(profilesPath))
		{
			DisplaySettingsLoadError(gamePath, appPath, profilesPath);
		}
	}

	// Load profiles JSON file
	std::ifstream ifs(profilesPath);
	json json_profiles = json::parse(ifs);
	ifs.close();

	// Get current profile index
	int ind_profile = json_profiles.value("ProfileIndex", 0);

	// Get current profile filename
	json proflist = json_profiles["ProfilesList"];
	std::string profname = proflist.at(ind_profile)["Filename"];

	// Convert profile name from UTF8 stored in JSON to wide string
	int count = MultiByteToWideChar(CP_UTF8, 0, profname.c_str(), profname.length(), NULL, 0);
	std::wstring profname_w(count, 0);
	MultiByteToWideChar(CP_UTF8, 0, profname.c_str(), profname.length(), &profname_w[0], count);

	// Load the current profile
	currentProfilePath = appPath + profileFolderName + profname_w;
	std::ifstream ifs_p(currentProfilePath);
	json json_config = json::parse(ifs_p);
	int settingsVersion = json_config.value("SettingsVersion", 0);

	// Graphics settings
	json json_graphics = json_config["Graphics"];
	const uint8_t BFOWTF = json_graphics.value("ScreenMode", 1);
	loaderSettings->ScreenMode = BFOWTF;
	loaderSettings->ScreenNum = json_graphics.value("SelectedScreen", 0);
	loaderSettings->HorizontalResolution = json_graphics.value("HorizontalResolution", 640);
	loaderSettings->VerticalResolution = json_graphics.value("VerticalResolution", 480);
	loaderSettings->PauseWhenInactive = json_graphics.value("EnablePauseOnInactive", true);
	loaderSettings->CustomWindowSize = json_graphics.value("EnableCustomWindow", false);
	loaderSettings->WindowWidth = json_graphics.value("CustomWindowWidth", 640);
	loaderSettings->WindowHeight = json_graphics.value("CustomWindowHeight", 480);
	loaderSettings->ResizableWindow = json_graphics.value("EnableResizableWindow", true);
	loaderSettings->StretchToWindow = json_graphics.value("StretchToWindow", false);
	loaderSettings->MaintainAspectRatio = loaderSettings->KeepAspectWhenResizing = !loaderSettings->StretchToWindow;
	loaderSettings->SkipIntro = json_graphics.value("SkipIntro", false);
	loaderSettings->DisableBorderImage = json_graphics.value("DisableBorderImage", false);

	// Patches settings
	json json_patches = json_config["Patches"];
	loaderSettings->FramerateLimiter = json_patches.value("FramerateLimiter", true);
	loaderSettings->DisableExitPrompt = json_patches.value("DisableExitPrompt", true);
	loaderSettings->SyncLoad = json_patches.value("SyncLoad", true);
	loaderSettings->ExtendVertexBuffer = json_patches.value("ExtendVertexBuffer", true);
	loaderSettings->EnvMapFix = json_patches.value("EnvMapFix", true);
	loaderSettings->ScreenFadeFix = json_patches.value("ScreenFadeFix", true);
	loaderSettings->CECarFix = json_patches.value("CECarFix", true);
	loaderSettings->ParticlesFix = json_patches.value("ParticlesFix", true);

	// Debug settings
	json json_debug = json_config["DebugSettings"];
	loaderSettings->DebugConsole = json_debug.value("EnableDebugConsole", false);
	loaderSettings->DebugScreen = json_debug.value("EnableDebugScreen", false);
	loaderSettings->DebugFile = json_debug.value("EnableDebugFile", false);
	loaderSettings->DebugCrashLog = json_debug.value("EnableDebugCrashLog", true);

	// Testspawn settings 
	json json_testspawn = json_config["TestSpawn"];
	loaderSettings->TextLanguage = json_testspawn.value("GameTextLanguage", 1);
	loaderSettings->VoiceLanguage = json_testspawn.value("GameVoiceLanguage", 1);


	// Mods
	json json_mods = json_config["EnabledMods"];
	for (unsigned int i = 1; i <= json_mods.size(); i++)
	{
		std::string mod_fname = json_mods.at(i - 1);
		ModList.push_back(mod_fname);
	}
}