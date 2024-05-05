#include "stdafx.h"
#include <d3d9.h>
#include "SA2ModLoader.h"
#include "magic.h"

struct WeirdChunkTexIndexThing {
	Magic::RenderCore::Texture* texturePointer;
	int ADDRESSU;
	int ADDRESSV;
	int MINFilter;
	int MAGFilter;
	int tes5;
	int bank;
};

#pragma pack(push, 8)
struct __declspec(align(4)) TexlistThing
{
	int gap0;
	int field_4;
	NJS_TEXSURFACE* surface;
	int blendmode;
	int field_10;
	int gidx;
	int field_18;
	int field_1C;
	NJS_TEXLIST* texlistPtr;
	int field_24;
	int texID;
};
#pragma pack(pop)

DataPointer(TexlistThing*, _nj_current_ctx_, 0x02670544);
DataPointer(WeirdChunkTexIndexThing, ChunkTexIndex, 0x01A275A8); // this is most likely some sort of GX Texture struct

FunctionPointer(void*, sub_433930, (void* texture, uint8_t* data, int pixelformat, int dataformatmaybe), 0x433930);

#define PALETTE_MAX 256
#define PALETTE_COLOR_COUNT 16

static int PaletteCount = 0; // this can overflow, or atleast it does on SADX lol
static int PaletteNumList[PALETTE_MAX];
static Uint16 PaletteBuffer[PALETTE_MAX][PALETTE_COLOR_COUNT];

static
unsigned char paletteTest[512] = {
	0xFA, 0x32, 0xFA, 0x11, 0xFA, 0x31, 0xFA, 0x32, 0xFA, 0x32, 0xFA, 0x2F,
	0xF9, 0xAA, 0xFA, 0x0E, 0xFA, 0x52, 0xFA, 0x52, 0xF9, 0x26, 0xF9, 0x89,
	0xF9, 0xED, 0xFA, 0x30, 0xFA, 0x51, 0xFA, 0x52, 0xF8, 0xE4, 0xF9, 0x05,
	0xF9, 0x68, 0xF9, 0xCB, 0xF8, 0xC3, 0xF8, 0xC3, 0xF9, 0x05, 0xFA, 0x52,
	0xF8, 0xC3, 0xF8, 0xE4, 0xF9, 0x47, 0xFA, 0x52, 0xFA, 0x72, 0xFA, 0x51,
	0xF9, 0x26, 0xF8, 0xE4, 0xFA, 0x71, 0xFA, 0x71, 0xFA, 0x72, 0xFA, 0x72,
	0xFA, 0x72, 0xF8, 0xE4, 0xF8, 0xC3, 0xF8, 0xC3, 0xFA, 0x50, 0xFA, 0x92,
	0xFA, 0x92, 0xFA, 0xB2, 0xFA, 0xB1, 0xFA, 0x91, 0xFA, 0x4E, 0xFA, 0x8F,
	0xFA, 0xB1, 0xFA, 0x2C, 0xFA, 0xB1, 0xFA, 0xB1, 0xF9, 0xC9, 0xFA, 0x90,
	0xFA, 0xD1, 0xFA, 0xD1, 0xFA, 0xD1, 0xFA, 0xD1, 0xFA, 0xF1, 0xFA, 0xF1,
	0xFA, 0xD0, 0xFA, 0xF1, 0xFA, 0xCE, 0xF8, 0xE3, 0xFA, 0x09, 0xF8, 0xE3,
	0xF9, 0x04, 0xF9, 0x45, 0xFB, 0x11, 0xF9, 0x04, 0xF9, 0x25, 0xFB, 0x10,
	0xFB, 0x10, 0xF9, 0xC8, 0xFA, 0xEF, 0xF9, 0x24, 0xFB, 0x10, 0xFA, 0x8D,
	0xF9, 0x24, 0xF9, 0xA7, 0xFA, 0x4B, 0xFB, 0x30, 0xF9, 0x86, 0xF9, 0x45,
	0xFB, 0x30, 0xF9, 0x65, 0xF9, 0x45, 0xFB, 0x30, 0xF9, 0x65, 0xFB, 0x2F,
	0xFB, 0x50, 0xF9, 0x86, 0xFB, 0x50, 0xF9, 0xC7, 0xF9, 0x65, 0xF9, 0x86,
	0xFB, 0x50, 0xFA, 0xCD, 0xF9, 0x86, 0xF9, 0xA6, 0xFB, 0x70, 0xFB, 0x70,
	0xF9, 0xA6, 0xFB, 0x70, 0xFA, 0x08, 0xFA, 0xAC, 0xF9, 0xC7, 0xFA, 0x69,
	0xFB, 0x90, 0xFB, 0x4E, 0xF9, 0xE7, 0xFB, 0x90, 0xFB, 0x90, 0xFA, 0x08,
	0xFB, 0x70, 0xFB, 0x90, 0xFA, 0x28, 0xFB, 0xB0, 0xFA, 0xEC, 0xFA, 0x28,
	0xFB, 0xB1, 0xFA, 0x49, 0xFA, 0x69, 0xFB, 0xD1, 0xFB, 0xB0, 0xFB, 0xD1,
	0xFA, 0x8A, 0xFB, 0x8F, 0xFB, 0xF0, 0xFB, 0x2D, 0xFA, 0xAA, 0xFA, 0xEB,
	0xFB, 0xD0, 0xFB, 0xF1, 0xFA, 0xAA, 0xFA, 0xCB, 0xFB, 0x4D, 0xFB, 0xF1,
	0xFB, 0xAF, 0xFB, 0x2C, 0xFB, 0x0C, 0xFB, 0x6E, 0xFA, 0xEB, 0xFB, 0x4D,
	0xFB, 0x2C, 0xFB, 0xF1, 0xFA, 0xEB, 0xFB, 0x0C, 0xFB, 0x6D, 0xFC, 0x11,
	0xFC, 0x11, 0xFB, 0x0C, 0xFC, 0x11, 0xFC, 0x31, 0xFB, 0x4D, 0xFB, 0xAE,
	0xFC, 0x31, 0xFB, 0x4D, 0xFC, 0x32, 0xFB, 0xCF, 0xFC, 0x52, 0xFB, 0x8E,
	0xFB, 0x8E, 0xFC, 0x52, 0xFB, 0xEF, 0xFC, 0x72, 0xFC, 0x51, 0xFC, 0x72,
	0xFC, 0x92, 0xFB, 0xEF, 0xFC, 0x92, 0xFC, 0x92, 0xFC, 0xB3, 0xFC, 0x10,
	0xFC, 0x71, 0xFC, 0xB3, 0xFC, 0x30, 0xFC, 0x30, 0xFC, 0xB3, 0xFC, 0x51,
	0xFC, 0x72, 0xFC, 0xD3, 0xFC, 0x51, 0xFC, 0x92, 0xFC, 0x71, 0xFC, 0xB2,
	0xFC, 0xF4, 0xFC, 0x92, 0xFC, 0xB2, 0xFC, 0xF3, 0xFC, 0xF4, 0xFC, 0xD3,
	0xFD, 0x14, 0xFD, 0x14, 0xFC, 0xB2, 0xFC, 0xF3, 0xFD, 0x14, 0xFD, 0x34,
	0xFC, 0xD3, 0xFC, 0xD3, 0xFC, 0xF4, 0xFD, 0x35, 0xFC, 0xF3, 0xFD, 0x14,
	0xFD, 0x34, 0xFD, 0x34, 0xFD, 0x55, 0xFD, 0x55, 0xFD, 0x55, 0xFD, 0x75,
	0xFD, 0x75, 0xFD, 0x75, 0xFD, 0x96, 0xFD, 0x96, 0xFD, 0xB6, 0xFD, 0x96,
	0xFD, 0xB6, 0xFD, 0xB7, 0xFD, 0x96, 0xFD, 0xD7, 0xFD, 0xD7, 0xFD, 0xB6,
	0xFD, 0xD7, 0xFD, 0xF7, 0xFD, 0xF7, 0xFD, 0xF7, 0xFE, 0x18, 0xFE, 0x38,
	0xFE, 0x38, 0xFE, 0x59, 0xFE, 0x59, 0xFE, 0x79, 0xFE, 0x79, 0xFE, 0x9A,
	0xFE, 0xBA, 0xFE, 0xBA, 0xFE, 0xDB, 0xFE, 0xDB, 0xFE, 0xFB, 0xFE, 0xFB,
	0xFF, 0x1C, 0xFF, 0x3C, 0xFF, 0x5D, 0xFF, 0x5D, 0xFF, 0x7D, 0xFF, 0x9E,
	0xFF, 0x9E, 0xFF, 0xBE, 0xFF, 0xBE, 0xFF, 0xDF, 0xFF, 0xDF, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00
};

static void UpdatePalettizeTexture(NJS_TEXSURFACE* pTexSurface, Uint32 bank) {
	Magic::RenderCore::Texture* texData = (Magic::RenderCore::Texture*)pTexSurface->pSurface;
	IDirect3DTexture9* tex = (IDirect3DTexture9*)texData->m_pUserData;
	D3DLOCKED_RECT texRect;

	const unsigned short* pPaletteBytes = (Uint16*)paletteTest; // PaletteBuffer[bank]; // palette is R5G6B5

	size_t size = pTexSurface->nWidth * pTexSurface->nHeight;
	int* memlistDummy = (int*)(pTexSurface->BitDepth);
	const unsigned char* pPhysical = (unsigned char*)(pTexSurface->BitDepth + 4); // "pPhysical"

	// since the 3 njSetPaletteData calls are once per chao render, this is how SADX's implementation ensures 
	// that the palettization code only runs once per render
	if (*memlistDummy == PaletteNumList[bank]) {
		return;
	}

	*memlistDummy = PaletteNumList[bank];

	tex->LockRect(0, &texRect, 0, D3DLOCK_DISCARD);

	unsigned short* pTexBytes = (unsigned short*)(texRect.pBits); // texture is created as R5G6B5 (more info in sub_433930Hook)
	
	// we have to use surface type instead of pixelformat because they ignore index8 for that (0x4307A0)
	if (pTexSurface->Type == 9) { // index8
		for (size_t i = 0; i < size; i++) {
			Uint16 conv = pPaletteBytes[pPhysical[i]];
			pTexBytes[i] = (conv >> 8) | (conv << 8);
		}
	}
	else { //index4
		for (size_t i = 0; i < size; i++) {
			pTexBytes[i] = PaletteBuffer[bank][pPhysical[i] & 15];
		}
	}
	

	tex->UnlockRect(0);
}

static void __stdcall njSetPaletteDataHook(int index) {
	PaletteNumList[index] = PaletteCount++;
	memcpy(PaletteBuffer[index], *(void**)0x01DBED80, sizeof(PaletteBuffer[index]));
}

static const int GXLoadTexObjPtr = 0x041FA60;
static void GXLoadTexObj(WeirdChunkTexIndexThing* a1, signed int index) {
	__asm {
		mov edi, a1
		push index
		call GXLoadTexObjPtr
		add esp, 4
	}
}

static void SetChunkTexIndexPrimary(int index, int a2, int a3) {
	NJS_TEXLIST* pTexlist = _nj_current_ctx_->texlistPtr;
	NJS_TEXMANAGE* pManage = (NJS_TEXMANAGE*)pTexlist->textures[index].texaddr;
	NJS_TEXSURFACE* pTexSurface = &pManage->texsys->texsurface;
	Uint32 somethingMagFilter = pTexSurface->fSurfaceFlags >> 31;

	if (pManage->bank != -1) {
		UpdatePalettizeTexture(pTexSurface, pManage->bank);
	}

	// some sort of inlined GXInitTexObj?
	ChunkTexIndex.texturePointer = (Magic::RenderCore::Texture*)pTexSurface->pSurface;
	ChunkTexIndex.bank = -1;
	ChunkTexIndex.MINFilter = 1;
	ChunkTexIndex.MAGFilter = 1;
	ChunkTexIndex.ADDRESSV = a2;
	ChunkTexIndex.ADDRESSU = a3;
	ChunkTexIndex.tes5 = somethingMagFilter != 0;

	GXLoadTexObj(&ChunkTexIndex, 0);
}

static void __declspec(naked) SetChunkTexIndexPrimaryHook() {
	__asm
	{
		push[esp + 04h] // a3
		push ebx // a2
		push eax // index

		// Call your __cdecl function here:
		call SetChunkTexIndexPrimary

		pop eax // index
		pop ebx // a2
		add esp, 4 // a3
		retn
	}
}

static const int sub_433770Ptr = 0x433770;
static void sub_433770(signed int a1, int a2, int a3, int a4, signed int a5) {
	__asm {
		mov eax, a1
		mov ecx, a2
		mov ebx, a3
		push a5
		push a4
		call sub_433770Ptr
		add esp, 8
	}
}

static void Decode8Bpp(uint8_t* data, uint8_t* output, int width, int height) {
	// code from puyotools
	for (int y = 0; y < height; y += 4) {
		for (int x = 0; x < width; x += 8) {
			for (int y2 = 0; y2 < 4; y2++) {
				for (int x2 = 0; x2 < 8; x2++) {
					output[((y + y2) * width) + (x + x2)] = *(data++);
				}
			}
		}
	}
}


static void* sub_433930Hook(NJS_TEXMANAGE* texture, uint8_t* data, int pixelformat, int dataformatmaybe) {
	NJS_TEXSYSTEM* texsys = texture->texsys;
	NJS_TEXSURFACE* surface = &texsys->texsurface;

	// we do this to not mipmap the indexed texture that gets created (temporarily remove the flag if the pixelformat is indexed)
	int backupSurfFlag = surface->fSurfaceFlags;
	//PrintDebug("%d", pixelformat);
	if (pixelformat == 8 || pixelformat == 9) { // 8 = FMT_8_A in magic enums (the format used for indexed textures)
		// we're gonna use bitdepth as our "pPhysical" equivalent (pPhysical from SADX's texture implementation)
		// we add 4 because we put an extra field at the start that we'll use for storing the palette cache number ("memlist->1dummy" in sadx)
		surface->BitDepth = (int)malloc(4 + surface->nWidth * surface->nHeight);

		// this is the texture decoding function but we pass in our pPhysical thing instead
		// pitch is set to width (3rd argument), we'll see if it's good or not when we try other resolution textures
		if (pixelformat == 8) {
			sub_433770(surface->nHeight, (int)data, surface->nWidth, surface->BitDepth + 4, surface->nWidth);
		}
		else {
			Decode8Bpp(data, (uint8_t*)(surface->BitDepth + 4), surface->nWidth, surface->nHeight);
		}
		// pixelformat is -1 so that no decoding happens to prevent a crash (it's the value that gets checked for decoding)
		// dataformat is GPUTEXTUREFORMAT_5_6_5 = 0x4
		pixelformat = -1;
		dataformatmaybe = 4;

		// remove mipmap flag temporarily
		surface->fSurfaceFlags &= ~0x80000000;
	}

	void* retval = sub_433930(texture, data, pixelformat, dataformatmaybe);

	// restore surface flag (incase we changed it to not be mipmapped)
	surface->fSurfaceFlags = backupSurfFlag;

	return retval;
}

void sub_433BD0(NJS_TEXMANAGE* a1, int a2)
{
	NJS_TEXSYSTEM* v2; // eax
	int v3; // ebx
	int v4; // edi
	double v5; // st7
	Uint32 v6; // ebp
	float v7; // [esp+10h] [ebp-8h]

	if (a1)
	{
		v2 = a1->texsys;
		v3 = v2->texsurface.Type;
		v7 = 0.0;
		v4 = 0;
		
		switch (v3)
		{
		case 14:
			v5 = 0.5;
			v4 = 14;
			break;
		case 5:
			v5 = 4.0;
			v4 = 2;
			break;
		case 6:
			v5 = 4.0;
			v4 = 2;
			break;
		case 8:
		case 9: // the only thing that changed in this function is this case added, to not ignore loading type 9 (index8)
			v5 = 1.0;
			v4 = 8;
			break;
		default:
			goto LABEL_11;
		}
		v7 = v5;
	LABEL_11:
		v6 = (int)((double)(v2->texsurface.nWidth * v2->texsurface.nHeight) * v7);
		if (v4)
		{
			a1->texsys->texsurface.pSurface = (Uint32*)sub_433930Hook(a1, (uint8_t*)a2, v3, v4);
			a1->texsys->texsurface.TextureSize = v6;
		}
	}
}

static void __declspec(naked) sub_433BD0AsmHook()
{
	__asm
	{
		push[esp + 04h] // a2
		push esi // a1

		// Call your __cdecl function here:
		call sub_433BD0

		pop esi // a1
		add esp, 4 // a2
		retn
	}
}


static void njReleaseTextureTexSystem(NJS_TEXSYSTEM* pSystem) {
	pSystem->globalIndex = -1;
	pSystem->texsurface.Type = 0;

	// the pPhysical alloc hack, allocated in sub_433930Hook
	if (pSystem->texsurface.BitDepth) {
		free((void*)pSystem->texsurface.BitDepth);
	}

	pSystem->texsurface.BitDepth = 0;
	pSystem->texsurface.PixelFormat = 0;
	pSystem->texsurface.nWidth = 0;
	pSystem->texsurface.nHeight = 0;
	pSystem->texsurface.TextureSize = 0;
	pSystem->texsurface.fSurfaceFlags = 0;
	pSystem->texsurface.pSurface = 0;
}

static void __declspec(naked) njReleaseTextureAllTexSystemHook() {
	__asm
	{
		push ebx // index

		// Call your __cdecl function here:
		call njReleaseTextureTexSystem

		pop ebx // index
		retn
	}
}

static void __declspec(naked) njReleaseTextureTexSystemHook() {
	__asm
	{
		push eax // index

		// Call your __cdecl function here:
		call njReleaseTextureTexSystem

		pop eax // index
		retn
	}
}

void PaletteFix_Init() {
	// njReleaseTexture fix to not memleak pPhysical
	WriteCall((void*)0x0077FA86, njReleaseTextureTexSystemHook);
	WriteJump((void*)0x0077FA8B, (void*)0x77FAA4);

	// njReleaseTextureAll fix to not memleak pPhysical
	WriteCall((void*)0x0042F9D4, njReleaseTextureAllTexSystemHook);
	WriteJump((void*)0x0042F9D9, (void*)0x0042F9EB);

	// hook for the texture creation of GVRs
	WriteJump((void*)0x433BD0, sub_433BD0AsmHook);
	//WriteCall((void*)0x00433C5C, sub_433930Hook);

	// hook for applying the palettization on texture sets
	WriteJump((void*)0x0056E3D0, SetChunkTexIndexPrimaryHook);

	// hook to get the palette colors
	WriteJump((void*)0x41AB40, njSetPaletteDataHook);
}