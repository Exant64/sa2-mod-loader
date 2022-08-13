#pragma once

// SA2 Enums
#define makemask(enumname,membername) enumname##_##membername = (1 << enumname##Bits_##membername)
#define makemasks(enumname,membername) enumname##s_##membername = (1 << enumname##Bits_##membername)

enum Characters
{
	Characters_Sonic,
	Characters_Shadow,
	Characters_Tails,
	Characters_Eggman,
	Characters_Knuckles,
	Characters_Rouge,
	Characters_MechTails,
	Characters_MechEggman,
	Characters_Amy,
	Characters_SuperSonic,
	Characters_SuperShadow,
	Characters_B,
	Characters_MetalSonic,
	Characters_ChaoWalker,
	Characters_DarkChaoWalker,
	Characters_Tikal,
	Characters_Chaos
};

#define chfl(name) CharacterFlags_##name = (1 << Characters_##name)
enum CharacterFlags
{
	chfl(Sonic),
	chfl(Shadow),
	chfl(Tails),
	chfl(Eggman),
	chfl(Knuckles),
	chfl(Rouge),
	chfl(MechTails),
	chfl(MechEggman),
	chfl(Amy),
	chfl(SuperSonic),
	chfl(SuperShadow),
	chfl(B),
	chfl(MetalSonic),
	chfl(ChaoWalker),
	chfl(DarkChaoWalker),
	chfl(Tikal),
	chfl(Chaos)
};
#undef chfl

enum LevelIDs
{
	LevelIDs_BasicTest,
	LevelIDs_KnucklesTest,
	LevelIDs_SonicTest,
	LevelIDs_GreenForest,
	LevelIDs_WhiteJungle,
	LevelIDs_PumpkinHill,
	LevelIDs_SkyRail,
	LevelIDs_AquaticMine,
	LevelIDs_SecurityHall,
	LevelIDs_PrisonLane,
	LevelIDs_MetalHarbor,
	LevelIDs_IronGate,
	LevelIDs_WeaponsBed,
	LevelIDs_CityEscape,
	LevelIDs_RadicalHighway,
	LevelIDs_WeaponsBed2P,
	LevelIDs_WildCanyon,
	LevelIDs_MissionStreet,
	LevelIDs_DryLagoon,
	LevelIDs_SonicVsShadow1,
	LevelIDs_TailsVsEggman1,
	LevelIDs_SandOcean,
	LevelIDs_CrazyGadget,
	LevelIDs_HiddenBase,
	LevelIDs_EternalEngine,
	LevelIDs_DeathChamber,
	LevelIDs_EggQuarters,
	LevelIDs_LostColony,
	LevelIDs_PyramidCave,
	LevelIDs_TailsVsEggman2,
	LevelIDs_FinalRush,
	LevelIDs_GreenHill,
	LevelIDs_MeteorHerd,
	LevelIDs_KnucklesVsRouge,
	LevelIDs_CannonsCoreS,
	LevelIDs_CannonsCoreE,
	LevelIDs_CannonsCoreT,
	LevelIDs_CannonsCoreR,
	LevelIDs_CannonsCoreK,
	LevelIDs_MissionStreet2P,
	LevelIDs_FinalChase,
	LevelIDs_WildCanyon2P,
	LevelIDs_SonicVsShadow2,
	LevelIDs_CosmicWall,
	LevelIDs_MadSpace,
	LevelIDs_SandOcean2P,
	LevelIDs_DryLagoon2P,
	LevelIDs_PyramidRace,
	LevelIDs_HiddenBase2P,
	LevelIDs_PoolQuest,
	LevelIDs_PlanetQuest,
	LevelIDs_DeckRace,
	LevelIDs_DowntownRace,
	LevelIDs_CosmicWall2P,
	LevelIDs_GrindRace,
	LevelIDs_LostColony2P,
	LevelIDs_EternalEngine2P,
	LevelIDs_MetalHarbor2P,
	LevelIDs_IronGate2P,
	LevelIDs_DeathChamber2P,
	LevelIDs_BigFoot,
	LevelIDs_HotShot,
	LevelIDs_FlyingDog,
	LevelIDs_KingBoomBoo,
	LevelIDs_EggGolemS,
	LevelIDs_Biolizard,
	LevelIDs_FinalHazard,
	LevelIDs_EggGolemE,
	LevelIDs_Route101280 = 70,
	LevelIDs_KartRace,
	LevelIDs_ChaoWorld = 90,
	LevelIDs_Invalid
};

enum UpgradeBits : int
{
	UpgradeBits_SonicLightShoes,
	UpgradeBits_SonicAncientLight,
	UpgradeBits_SonicMagicGloves,
	UpgradeBits_SonicFlameRing,
	UpgradeBits_SonicBounceBracelet,
	UpgradeBits_SonicMysticMelody,
	UpgradeBits_TailsBooster,
	UpgradeBits_TailsBazooka,
	UpgradeBits_TailsLaserBlaster,
	UpgradeBits_TailsMysticMelody,
	UpgradeBits_KnucklesShovelClaw,
	UpgradeBits_KnucklesSunglasses,
	UpgradeBits_KnucklesHammerGloves,
	UpgradeBits_KnucklesAirNecklace,
	UpgradeBits_KnucklesMysticMelody,
	UpgradeBits_SuperSonic,
	UpgradeBits_ShadowAirShoes,
	UpgradeBits_ShadowAncientLight,
	UpgradeBits_ShadowFlameRing,
	UpgradeBits_ShadowMysticMelody,
	UpgradeBits_EggmanJetEngine,
	UpgradeBits_EggmanLargeCannon,
	UpgradeBits_EggmanLaserBlaster,
	UpgradeBits_EggmanProtectiveArmor,
	UpgradeBits_EggmanMysticMelody,
	UpgradeBits_RougePickNails,
	UpgradeBits_RougeTreasureScope,
	UpgradeBits_RougeIronBoots,
	UpgradeBits_RougeMysticMelody
};

enum Upgrades : int
{
	makemasks(Upgrade, SonicLightShoes),
	makemasks(Upgrade, SonicAncientLight),
	makemasks(Upgrade, SonicMagicGloves),
	makemasks(Upgrade, SonicFlameRing),
	makemasks(Upgrade, SonicBounceBracelet),
	makemasks(Upgrade, SonicMysticMelody),
	makemasks(Upgrade, TailsBooster),
	makemasks(Upgrade, TailsBazooka),
	makemasks(Upgrade, TailsLaserBlaster),
	makemasks(Upgrade, TailsMysticMelody),
	makemasks(Upgrade, KnucklesShovelClaw),
	makemasks(Upgrade, KnucklesSunglasses),
	makemasks(Upgrade, KnucklesHammerGloves),
	makemasks(Upgrade, KnucklesAirNecklace),
	makemasks(Upgrade, KnucklesMysticMelody),
	makemasks(Upgrade, SuperSonic),
	makemasks(Upgrade, ShadowAirShoes),
	makemasks(Upgrade, ShadowAncientLight),
	makemasks(Upgrade, ShadowFlameRing),
	makemasks(Upgrade, ShadowMysticMelody),
	makemasks(Upgrade, EggmanJetEngine),
	makemasks(Upgrade, EggmanLargeCannon),
	makemasks(Upgrade, EggmanLaserBlaster),
	makemasks(Upgrade, EggmanProtectiveArmor),
	makemasks(Upgrade, EggmanMysticMelody),
	makemasks(Upgrade, RougePickNails),
	makemasks(Upgrade, RougeTreasureScope),
	makemasks(Upgrade, RougeIronBoots),
	makemasks(Upgrade, RougeMysticMelody)
};

enum ChaoType : __int8
{
	ChaoType_Empty = 0x0,
	ChaoType_Egg = 0x1,
	ChaoType_Child = 0x2,
	ChaoType_Good = 0x3,
	ChaoType_Bad = 0x4,
	ChaoType_Neutral_Normal = 0x5,
	ChaoType_Hero_Normal = 0x6,
	ChaoType_Dark_Normal = 0x7,
	ChaoType_Neutral_Swim = 0x8,
	ChaoType_Hero_Swim = 0x9,
	ChaoType_Dark_Swim = 0xA,
	ChaoType_Neutral_Fly = 0xB,
	ChaoType_Hero_Fly = 0xC,
	ChaoType_Dark_Fly = 0xD,
	ChaoType_Neutral_Run = 0xE,
	ChaoType_Hero_Run = 0xF,
	ChaoType_Dark_Run = 0x10,
	ChaoType_Neutral_Power = 0x11,
	ChaoType_Hero_Power = 0x12,
	ChaoType_Dark_Power = 0x13,
	ChaoType_Neutral_Chaos = 0x14,
	ChaoType_Hero_Chaos = 0x15,
	ChaoType_Dark_Chaos = 0x16,
	ChaoType_Tails = 0x17,
	ChaoType_Knuckles = 0x18,
	ChaoType_Amy = 0x19,
};

enum SADXBodyType : __int8
{
	SADXBodyType_Normal = 0x0,
	SADXBodyType_EggChao = 0x1,
	SADXBodyType_Omochao = 0x2,
	SADXBodyType_None = 0x3,
};

enum SA2BAnimal : __int8
{
	SA2BAnimal_None = -1,
	SA2BAnimal_Penguin = 0x0,
	SA2BAnimal_Seal = 0x1,
	SA2BAnimal_Otter = 0x2,
	SA2BAnimal_Rabbit = 0x3,
	SA2BAnimal_Cheetah = 0x4,
	SA2BAnimal_Warthog = 0x5,
	SA2BAnimal_Bear = 0x6,
	SA2BAnimal_Tiger = 0x7,
	SA2BAnimal_Gorilla = 0x8,
	SA2BAnimal_Peacock = 0x9,
	SA2BAnimal_Parrot = 0xA,
	SA2BAnimal_Condor = 0xB,
	SA2BAnimal_Skunk = 0xC,
	SA2BAnimal_Sheep = 0xD,
	SA2BAnimal_Raccoon = 0xE,
	SA2BAnimal_HalfFish = 0xF,
	SA2BAnimal_SkeletonDog = 0x10,
	SA2BAnimal_Bat = 0x11,
	SA2BAnimal_Dragon = 0x12,
	SA2BAnimal_Unicorn = 0x13,
	SA2BAnimal_Phoenix = 0x14,
	SA2BAnimal_YellowChaosDrive = 0x15,
	SA2BAnimal_GreenChaosDrive = 0x16,
	SA2BAnimal_RedChaosDrive = 0x17,
	SA2BAnimal_PurpleChaosDrive = 0x18,
};

enum LoadObj : __int8
{
	LoadObj_Data2 = 0x1,
	LoadObj_Data1 = 0x2,
	LoadObj_UnknownA = 0x4,
	LoadObj_UnknownB = 0x8,
};

enum PowerupBits
{
	PowerupBits_Barrier,
	PowerupBits_MagneticBarrier,
	PowerupBits_Unknown1,
	PowerupBits_Unknown2,
	PowerupBits_Unknown3,
	PowerupBits_Unknown4,
	PowerupBits_Unknown5,
	PowerupBits_Unknown6,
	PowerupBits_Unknown7,
	PowerupBits_Unknown8,
	PowerupBits_Unknown9,
	PowerupBits_Unknown10,
	PowerupBits_Unknown11,
	PowerupBits_Unknown12,
	PowerupBits_Dead,
	PowerupBits_Invincibility
};

enum Powerups : unsigned short
{
	makemasks(Powerup, Barrier),
	makemasks(Powerup, MagneticBarrier),
	makemasks(Powerup, Unknown1),
	makemasks(Powerup, Unknown2),
	makemasks(Powerup, Unknown3),
	makemasks(Powerup, Unknown4),
	makemasks(Powerup, Unknown5),
	makemasks(Powerup, Unknown6),
	makemasks(Powerup, Unknown7),
	makemasks(Powerup, Unknown8),
	makemasks(Powerup, Unknown9),
	makemasks(Powerup, Unknown10),
	makemasks(Powerup, Unknown11),
	makemasks(Powerup, Unknown12),
	makemasks(Powerup, Dead),
	makemasks(Powerup, Invincibility)
};

enum ChaoItemCategory : __int8
{
	ChaoItemCategory_Egg = 0x1,
	ChaoItemCategory_Fruit = 0x3,
	ChaoItemCategory_Seed = 0x7,
	ChaoItemCategory_Hat = 0x9,
	ChaoItemCategory_MenuTheme = 0x10,
};

enum PDD_DEV_SUPPORT
{
	PDD_DEV_SUPPORT_AY2 = 0x200000,
	PDD_DEV_SUPPORT_AX2 = 0x100000,
	PDD_DEV_SUPPORT_AY1 = 0x80000,
	PDD_DEV_SUPPORT_AX1 = 0x40000,
	PDD_DEV_SUPPORT_AL = 0x20000,
	PDD_DEV_SUPPORT_AR = 0x10000,
	PDD_DEV_SUPPORT_KRB = 0x8000,
	PDD_DEV_SUPPORT_KLB = 0x4000,
	PDD_DEV_SUPPORT_KDB = 0x2000,
	PDD_DEV_SUPPORT_KUB = 0x1000,
	PDD_DEV_SUPPORT_TD = 0x800,
	PDD_DEV_SUPPORT_TX = 0x400,
	PDD_DEV_SUPPORT_TY = 0x200,
	PDD_DEV_SUPPORT_TZ = 0x100,
	PDD_DEV_SUPPORT_KR = 0x80,
	PDD_DEV_SUPPORT_KL = 0x40,
	PDD_DEV_SUPPORT_KD = 0x20,
	PDD_DEV_SUPPORT_KU = 0x10,
	PDD_DEV_SUPPORT_ST = 0x8,
	PDD_DEV_SUPPORT_TA = 0x4,
	PDD_DEV_SUPPORT_TB = 0x2,
	PDD_DEV_SUPPORT_TC = 0x1,
};

enum PDD_DGT
{
	PDD_DGT_TL = 0x20000,
	PDD_DGT_TR = 0x10000,
	PDD_DGT_KRB = 0x8000,
	PDD_DGT_KLB = 0x4000,
	PDD_DGT_KDB = 0x2000,
	PDD_DGT_KUB = 0x1000,
	PDD_DGT_TD = 0x800,
	PDD_DGT_TX = 0x400,
	PDD_DGT_TY = 0x200,
	PDD_DGT_TZ = 0x100,
	PDD_DGT_KR = 0x80,
	PDD_DGT_KL = 0x40,
	PDD_DGT_KD = 0x20,
	PDD_DGT_KU = 0x10,
	PDD_DGT_ST = 0x8,
	PDD_DGT_TA = 0x4,
	PDD_DGT_TB = 0x2,
	PDD_DGT_TC = 0x1,
};

enum PDD_DEVTYPE
{
	PDD_DEVTYPE_CONTROLLER = 0x1,
	PDD_DEVTYPE_STORAGE = 0x2,
	PDD_DEVTYPE_LCD = 0x4,
	PDD_DEVTYPE_TIMER = 0x8,
	PDD_DEVTYPE_SOUNDINPUT = 0x10,
	PDD_DEVTYPE_KEYBOARD = 0x40,
	PDD_DEVTYPE_LIGHTGUN = 0x80,
	PDD_DEVTYPE_VIBRATION = 0x100,
};

enum PDD_DEVAREA
{
	PDD_DEVAREA_USA = 0x1,
	PDD_DEVAREA_JAPAN = 0x2,
	PDD_DEVAREA_ASIA = 0x4,
	PDD_DEVAREA_EUROPE = 0x8,
	PDD_DEVAREA_RESERVED1 = 0x10,
	PDD_DEVAREA_RESERVED2 = 0x20,
	PDD_DEVAREA_RESERVED3 = 0x40,
	PDD_DEVAREA_RESERVED4 = 0x80,
};

enum PDD_CONDIR
{
	PDD_CONDIR_TOPSIDE = 0x0,
	PDD_CONDIR_BOTTOMSIDE = 0x1,
	PDD_CONDIR_LEFTSIDE = 0x2,
	PDD_CONDIR_RIGHTSIDE = 0x3,
};

enum ButtonBits
{
	ButtonBits_C,
	ButtonBits_B,
	ButtonBits_A,
	ButtonBits_Start,
	ButtonBits_Up,
	ButtonBits_Down,
	ButtonBits_Left,
	ButtonBits_Right,
	ButtonBits_Z,
	ButtonBits_Y,
	ButtonBits_X,
	ButtonBits_D,
	ButtonBits_Up2,
	ButtonBits_Down2,
	ButtonBits_Left2,
	ButtonBits_Right2,
	ButtonBits_R,
	ButtonBits_L
};

enum Buttons : int
{
	makemasks(Button, C),
	makemasks(Button, B),
	makemasks(Button, A),
	makemasks(Button, Start),
	makemasks(Button, Up),
	makemasks(Button, Down),
	makemasks(Button, Left),
	makemasks(Button, Right),
	makemasks(Button, Z),
	makemasks(Button, Y),
	makemasks(Button, X),
	makemasks(Button, D),
	makemasks(Button, Up2),
	makemasks(Button, Down2),
	makemasks(Button, Left2),
	makemasks(Button, Right2),
	makemasks(Button, R),
	makemasks(Button, L)
};

enum GameMode
{
	GameMode_Initialize,
	GameMode_StartLevel = 4,
	GameMode_Level,
	GameMode_ResetLevel,
	GameMode_StartEvent,
	GameMode_Event,
	GameMode_LoadStory = 12,
	GameMode_LoadAdvertise,
	GameMode_Advertise,
	GameMode_LoadEnding,
	GameMode_Ending,
	GameMode_LoadEmblemScreen,
	GameMode_EmblemScreen,
	GameMode_LoadIntro = 21,
	GameMode_Intro
};

enum GameStates : __int16
{
	GameStates_Inactive = 0,
	GameStates_Loading = 1,
	GameStates_LoadItems = 2,
	GameStates_LoadLevel = 3,
	GameStates_ReturnToMenu_1 = 4,
	GameStates_ReloadCharacter = 5,
	GameStates_ReturnToMenu_2 = 6,
	GameStates_LoadFinished = 7,
	GameStates_Exit_1 = 8,
	GameStates_RestartLevel_NoLifeLost = 9,
	GameStates_Exit_2 = 10,
	GameStates_Exit_3 = 11,
	GameStates_RestartLevel_1 = 12,
	GameStates_NormalRestart = 13,
	GameStates_NormalExit = 14,
	GameStates_ReturnRing = 15,
	GameStates_Ingame = 16,
	GameStates_Pause = 17,
	GameStates_MemoryCard = 18,
	GameStates_GoToNextLevel = 19,
	GameStates_14 = 20,
	GameStates_15 = 21,
	GameStates_16 = 22,
	GameStates_17 = 23,
	GameStates_18 = 24,
	GameStates_19 = 25,
	GameStates_1A = 26,
	GameStates_1B = 27,
	GameStates_1C = 28,
	GameStates_1D = 29,
	GameStates_1E = 30,
	GameStates_1F = 31,
	GameStates_20 = 32,
	GameStates_21 = 33,
	GameStates_22 = 34,
	GameStates_23 = 35,
	GameStates_24 = 36,
	GameStates_25 = 37,
	GameStates_26 = 38,
	GameStates_27 = 39,
	GameStates_28 = 40,
	GameStates_29 = 41,
	GameStates_2A = 42,
	GameStates_2B = 43,
	GameStates_2C = 44,
	GameStates_2D = 45,
	GameStates_2E = 46,
	GameStates_2F = 47,
	GameStates_30 = 48,
	GameStates_31 = 49,
	GameStates_32 = 50,
};

enum StatusBits
{
	StatusBits_Ground,
	StatusBits_OnObjectColli,
	StatusBits_Hurt,
	StatusBits_ObjectInteract,
	StatusBits_Unknown2,
	StatusBits_Unknown3,
	StatusBits_Unknown4,
	StatusBits_Unknown5,
	StatusBits_Ball,
	StatusBits_LightDash,
	StatusBits_Attack,
	StatusBits_HoldObject,
	StatusBits_DoNextAction,
	StatusBits_OnPath,
	StatusBits_DisableControl,
	StatusBits_Unknown6
};

enum Status : uint16_t
{
	makemask(Status, Ground),
	makemask(Status, OnObjectColli),
	makemask(Status, Hurt),
	makemask(Status, ObjectInteract),
	makemask(Status, Unknown2),
	makemask(Status, Unknown3),
	makemask(Status, Unknown4),
	makemask(Status, Unknown5),
	makemask(Status, Ball),
	makemask(Status, LightDash),
	makemask(Status, Attack),
	makemask(Status, HoldObject),
	makemask(Status, DoNextAction),
	makemask(Status, OnPath),
	makemask(Status, DisableControl),
	makemask(Status, Unknown6)
};

enum SpecialTier
{
	SpecialTier_None = 0x0,
	SpecialTier_1 = 0x1,
	SpecialTier_2 = 0x2,
	SpecialTier_3 = 0x4,
};

enum ChaoArea
{
	ChaoArea_Lobby,
	ChaoArea_NeutralGarden,
	ChaoArea_HeroGarden,
	ChaoArea_DarkGarden,
	ChaoArea_Race,
	ChaoArea_Entrance,
	ChaoArea_Kindergarten,
	ChaoArea_Stadium = 9,
	ChaoArea_Karate,
	ChaoArea_NameMachine = 12,
};

enum SADXChaoArea : __int8
{
	SADXChaoArea_None = -1,
	SADXChaoArea_Race = 0x1,
	SADXChaoArea_RaceEntry = 0x2,
	SADXChaoArea_ChaoTransporter = 0x3,
	SADXChaoArea_StationSquare = 0x4,
	SADXChaoArea_EggCarrier = 0x5,
	SADXChaoArea_MysticRuins = 0x6,
	SADXChaoArea_BlackMarket = 0x7,
};

enum SA2BChaoGarden : __int8
{
	SA2BChaoGarden_None = -1,
	SA2BChaoGarden_ChaoGarden = 0x1,
	SA2BChaoGarden_HeroGarden = 0x2,
	SA2BChaoGarden_DarkGarden = 0x3,
};

enum ChaoGrade : __int8
{
	ChaoGrade_E = 0x0,
	ChaoGrade_D = 0x1,
	ChaoGrade_C = 0x2,
	ChaoGrade_B = 0x3,
	ChaoGrade_A = 0x4,
	ChaoGrade_S = 0x5,
};

enum ChaoEmotiball : __int8
{
	ChaoEmotiball_Normal = 0x0,
	ChaoEmotiball_Flame = 0x1,
	ChaoEmotiball_None = 0x2,
};

enum ChaoEyes : __int8
{
	ChaoEyes_Normal = 0x0,
	ChaoEyes_Painful = 0x1,
	ChaoEyes_ClosedStraight = 0x2,
	ChaoEyes_ClosedHappy = 0x3,
	ChaoEyes_ClosedUp = 0x4,
	ChaoEyes_Tiny = 0x5,
	ChaoEyes_Circles = 0x6,
	ChaoEyes_ClosedDown = 0x7,
	ChaoEyes_Tiny2 = 0x8,
	ChaoEyes_HalfClosed = 0x9,
	ChaoEyes_Mean = 0xA,
	ChaoEyes_GreenChaos = 0xB,
	ChaoEyes_BlueChaos = 0xC,
	ChaoEyes_YellowChaos = 0xD,
};

enum ChaoMedal : __int8
{
	ChaoMedal_None = 0x0,
	ChaoMedal_Aquamarine = 0x1,
	ChaoMedal_Topaz = 0x2,
	ChaoMedal_Peridot = 0x3,
	ChaoMedal_Garnet = 0x4,
	ChaoMedal_Onyx = 0x5,
	ChaoMedal_Diamond = 0x6,
	ChaoMedal_Beginner = 0x7,
	ChaoMedal_Challenge = 0x8,
	ChaoMedal_Hero = 0x9,
	ChaoMedal_Dark = 0xA,
	ChaoMedal_Pearl = 0xB,
	ChaoMedal_Amethyst = 0xC,
	ChaoMedal_Emerald = 0xD,
	ChaoMedal_Ruby = 0xE,
	ChaoMedal_Sapphire = 0xF,
};

enum ChaoMouth : __int8
{
	ChaoMouth_ToothySmile = 0x1,
	ChaoMouth_Open = 0x2,
	ChaoMouth_ClosedSmile = 0x3,
	ChaoMouth_ClosedFrown = 0x4,
	ChaoMouth_OpenSmile = 0x5,
	ChaoMouth_OpenFrown = 0x6,
	ChaoMouth_ClosedSmile2 = 0x7,
	ChaoMouth_Squiggly = 0x8,
	ChaoMouth_ToothyFrown = 0x9,
	ChaoMouth_ClosedFrown2 = 0xA,
	ChaoMouth_WideOpen = 0xB,
	ChaoMouth_ClosedFrown3 = 0xC,
	ChaoMouth_StraightMoustache = 0xD,
	ChaoMouth_SquigglyMoustache1 = 0xE,
	ChaoMouth_SquigglyMoustache2 = 0xF,
};

enum SA2BBodyType : __int8
{
	SA2BBodyType_Normal = 0x0,
	SA2BBodyType_EggChao = 0x1,
	SA2BBodyType_Omochao = 0x2,
	SA2BBodyType_Animal = 0x3,
	SA2BBodyType_None = 0x5,
};

enum SADXRetailColour : __int8
{
	SADXRetailColour_Normal = 0x0,
	SADXRetailColour_Yellow = 0x1,
	SADXRetailColour_White = 0x2,
	SADXRetailColour_Brown = 0x3,
	SADXRetailColour_Aqua = 0x4,
	SADXRetailColour_Pink = 0x5,
	SADXRetailColour_Blue = 0x6,
	SADXRetailColour_Grey = 0x7,
	SADXRetailColour_Green = 0x8,
	SADXRetailColour_Red = 0x9,
	SADXRetailColour_LightGreen = 0xA,
	SADXRetailColour_Purple = 0xB,
	SADXRetailColour_Orange = 0xC,
	SADXRetailColour_Black = 0xD,
	SADXRetailColour_TransparentRed = 0xE,
	SADXRetailColour_TransparentPurple = 0xF,
	SADXRetailColour_Invisible = 0x10,
};

enum SADXSteamColour : __int8
{
	SADXSteamColour_Normal = 0x0,
	SADXSteamColour_Yellow = 0x1,
	SADXSteamColour_White = 0x2,
	SADXSteamColour_Brown = 0x3,
	SADXSteamColour_Aqua = 0x4,
	SADXSteamColour_Pink = 0x5,
	SADXSteamColour_Blue = 0x6,
	SADXSteamColour_Grey = 0x7,
	SADXSteamColour_Green = 0x8,
	SADXSteamColour_Red = 0x9,
	SADXSteamColour_LightGreen = 0xA,
	SADXSteamColour_Purple = 0xB,
	SADXSteamColour_Orange = 0xC,
	SADXSteamColour_Black = 0xD,
	SADXSteamColour_Invisible = 0xE,
	SADXSteamColour_TransparentGrey = 0x10,
};

enum SA2BColour : __int8
{
	SA2BColour_Normal = 0x0,
	SA2BColour_Yellow = 0x1,
	SA2BColour_White = 0x2,
	SA2BColour_Brown = 0x3,
	SA2BColour_SkyBlue = 0x4,
	SA2BColour_Pink = 0x5,
	SA2BColour_Blue = 0x6,
	SA2BColour_Grey = 0x7,
	SA2BColour_Green = 0x8,
	SA2BColour_Red = 0x9,
	SA2BColour_LimeGreen = 0xA,
	SA2BColour_Purple = 0xB,
	SA2BColour_Orange = 0xC,
	SA2BColour_Black = 0xD,
};

enum SADXEggColour : __int8
{
	SADXEggColour_Normal = 0x0,
	SADXEggColour_Yellow_MonoTone = 0x1,
	SADXEggColour_White_MonoTone = 0x2,
	SADXEggColour_Brown_MonoTone = 0x3,
	SADXEggColour_Aqua_MonoTone = 0x4,
	SADXEggColour_Pink_MonoTone = 0x5,
	SADXEggColour_Blue_MonoTone = 0x6,
	SADXEggColour_Grey_MonoTone = 0x7,
	SADXEggColour_Green_MonoTone = 0x8,
	SADXEggColour_Red_MonoTone = 0x9,
	SADXEggColour_LightGreen_MonoTone = 0xA,
	SADXEggColour_Purple_MonoTone = 0xB,
	SADXEggColour_Orange_MonoTone = 0xC,
	SADXEggColour_Black_MonoTone = 0xD,
	SADXEggColour_Yellow_TwoTone = 0xE,
	SADXEggColour_White_TwoTone = 0xF,
	SADXEggColour_Brown_TwoTone = 0x10,
	SADXEggColour_Aqua_TwoTone = 0x11,
	SADXEggColour_Pink_TwoTone = 0x12,
	SADXEggColour_Blue_TwoTone = 0x13,
	SADXEggColour_Grey_TwoTone = 0x14,
	SADXEggColour_Green_TwoTone = 0x15,
	SADXEggColour_Red_TwoTone = 0x16,
	SADXEggColour_LightGreen_TwoTone = 0x17,
	SADXEggColour_Purple_TwoTone = 0x18,
	SADXEggColour_Orange_TwoTone = 0x19,
	SADXEggColour_Black_TwoTone = 0x1A,
	SADXEggColour_NormalShiny = 0x1B,
	SADXEggColour_YellowShiny_MonoTone = 0x1C,
	SADXEggColour_WhiteShiny_MonoTone = 0x1D,
	SADXEggColour_BrownShiny_MonoTone = 0x1E,
	SADXEggColour_AquaShiny_MonoTone = 0x1F,
	SADXEggColour_PinkShiny_MonoTone = 0x20,
	SADXEggColour_BlueShiny_MonoTone = 0x21,
	SADXEggColour_GreyShiny_MonoTone = 0x22,
	SADXEggColour_GreenShiny_MonoTone = 0x23,
	SADXEggColour_RedShiny_MonoTone = 0x24,
	SADXEggColour_LightGreenShiny_MonoTone = 0x25,
	SADXEggColour_PurpleShiny_MonoTone = 0x26,
	SADXEggColour_OrangeShiny_MonoTone = 0x27,
	SADXEggColour_BlackShiny_MonoTone = 0x28,
	SADXEggColour_YellowShiny_TwoTone = 0x29,
	SADXEggColour_WhiteShiny_TwoTone = 0x2A,
	SADXEggColour_BrownShiny_TwoTone = 0x2B,
	SADXEggColour_AquaShiny_TwoTone = 0x2C,
	SADXEggColour_PinkShiny_TwoTone = 0x2D,
	SADXEggColour_BlueShiny_TwoTone = 0x2E,
	SADXEggColour_GreyShiny_TwoTone = 0x2F,
	SADXEggColour_GreenShiny_TwoTone = 0x30,
	SADXEggColour_RedShiny_TwoTone = 0x31,
	SADXEggColour_LightGreenShiny_TwoTone = 0x32,
	SADXEggColour_PurpleShiny_TwoTone = 0x33,
	SADXEggColour_OrangeShiny_TwoTone = 0x34,
	SADXEggColour_BlackShiny_TwoTone = 0x35,
	SADXEggColour_YellowJewel = 0x36,
	SADXEggColour_WhiteJewel = 0x37,
	SADXEggColour_PinkJewel = 0x38,
	SADXEggColour_BlueJewel = 0x39,
	SADXEggColour_GreenJewel = 0x3A,
	SADXEggColour_PurpleJewel = 0x3B,
	SADXEggColour_AquaJewel = 0x3C,
	SADXEggColour_RedJewel = 0x3D,
	SADXEggColour_BlackJewel = 0x3E,
	SADXEggColour_LightGreenJewel = 0x3F,
	SADXEggColour_OrangeJewel = 0x40,
	SADXEggColour_Pearl = 0x41,
	SADXEggColour_Metal1 = 0x42,
	SADXEggColour_Metal2 = 0x43,
	SADXEggColour_Glass = 0x44,
};

enum SA2BEggColour : __int8
{
	SA2BEggColour_Normal = 0x0,
	SA2BEggColour_Yellow_MonoTone = 0x1,
	SA2BEggColour_White_MonoTone = 0x2,
	SA2BEggColour_Brown_MonoTone = 0x3,
	SA2BEggColour_SkyBlue_MonoTone = 0x4,
	SA2BEggColour_Pink_MonoTone = 0x5,
	SA2BEggColour_Blue_MonoTone = 0x6,
	SA2BEggColour_Grey_MonoTone = 0x7,
	SA2BEggColour_Green_MonoTone = 0x8,
	SA2BEggColour_Red_MonoTone = 0x9,
	SA2BEggColour_LimeGreen_MonoTone = 0xA,
	SA2BEggColour_Purple_MonoTone = 0xB,
	SA2BEggColour_Orange_MonoTone = 0xC,
	SA2BEggColour_Black_MonoTone = 0xD,
	SA2BEggColour_Yellow_TwoTone = 0xE,
	SA2BEggColour_White_TwoTone = 0xF,
	SA2BEggColour_Brown_TwoTone = 0x10,
	SA2BEggColour_SkyBlue_TwoTone = 0x11,
	SA2BEggColour_Pink_TwoTone = 0x12,
	SA2BEggColour_Blue_TwoTone = 0x13,
	SA2BEggColour_Grey_TwoTone = 0x14,
	SA2BEggColour_Green_TwoTone = 0x15,
	SA2BEggColour_Red_TwoTone = 0x16,
	SA2BEggColour_LimeGreen_TwoTone = 0x17,
	SA2BEggColour_Purple_TwoTone = 0x18,
	SA2BEggColour_Orange_TwoTone = 0x19,
	SA2BEggColour_Black_TwoTone = 0x1A,
	SA2BEggColour_NormalShiny = 0x1B,
	SA2BEggColour_YellowShiny_MonoTone = 0x1C,
	SA2BEggColour_WhiteShiny_MonoTone = 0x1D,
	SA2BEggColour_BrownShiny_MonoTone = 0x1E,
	SA2BEggColour_SkyBlueShiny_MonoTone = 0x1F,
	SA2BEggColour_PinkShiny_MonoTone = 0x20,
	SA2BEggColour_BlueShiny_MonoTone = 0x21,
	SA2BEggColour_GreyShiny_MonoTone = 0x22,
	SA2BEggColour_GreenShiny_MonoTone = 0x23,
	SA2BEggColour_RedShiny_MonoTone = 0x24,
	SA2BEggColour_LimeGreenShiny_MonoTone = 0x25,
	SA2BEggColour_PurpleShiny_MonoTone = 0x26,
	SA2BEggColour_OrangeShiny_MonoTone = 0x27,
	SA2BEggColour_BlackShiny_MonoTone = 0x28,
	SA2BEggColour_YellowShiny_TwoTone = 0x29,
	SA2BEggColour_WhiteShiny_TwoTone = 0x2A,
	SA2BEggColour_BrownShiny_TwoTone = 0x2B,
	SA2BEggColour_SkyBlueShiny_TwoTone = 0x2C,
	SA2BEggColour_PinkShiny_TwoTone = 0x2D,
	SA2BEggColour_BlueShiny_TwoTone = 0x2E,
	SA2BEggColour_GreyShiny_TwoTone = 0x2F,
	SA2BEggColour_GreenShiny_TwoTone = 0x30,
	SA2BEggColour_RedShiny_TwoTone = 0x31,
	SA2BEggColour_LimeGreenShiny_TwoTone = 0x32,
	SA2BEggColour_PurpleShiny_TwoTone = 0x33,
	SA2BEggColour_OrangeShiny_TwoTone = 0x34,
	SA2BEggColour_BlackShiny_TwoTone = 0x35,
	SA2BEggColour_GlitchyNormal = 0x36,
};

enum SADXTexture : __int8
{
	SADXTexture_None = 0x0,
	SADXTexture_YellowJewel = 0x1,
	SADXTexture_WhiteJewel = 0x2,
	SADXTexture_PinkJewel = 0x3,
	SADXTexture_BlueJewel = 0x4,
	SADXTexture_GreenJewel = 0x5,
	SADXTexture_PurpleJewel = 0x6,
	SADXTexture_AquaJewel = 0x7,
	SADXTexture_RedJewel = 0x8,
	SADXTexture_BlackJewel = 0x9,
	SADXTexture_LightGreenJewel = 0xA,
	SADXTexture_OrangeJewel = 0xB,
	SADXTexture_Pearl = 0xC,
	SADXTexture_Metal1 = 0xD,
	SADXTexture_Metal2 = 0xE,
	SADXTexture_Glass = 0xF,
	SADXTexture_Moon = 0x10,
};

enum SA2BTexture : __int8
{
	SA2BTexture_None = 0x0,
	SA2BTexture_YellowJewel = 0x1,
	SA2BTexture_WhiteJewel = 0x2,
	SA2BTexture_PinkJewel = 0x3,
	SA2BTexture_BlueJewel = 0x4,
	SA2BTexture_GreenJewel = 0x5,
	SA2BTexture_PurpleJewel = 0x6,
	SA2BTexture_SkyBlueJewel = 0x7,
	SA2BTexture_RedJewel = 0x8,
	SA2BTexture_BlackJewel = 0x9,
	SA2BTexture_LimeGreenJewel = 0xA,
	SA2BTexture_OrangeJewel = 0xB,
	SA2BTexture_Pearl = 0xC,
	SA2BTexture_Metal1 = 0xD,
	SA2BTexture_Metal2 = 0xE,
	SA2BTexture_Glass = 0xF,
	SA2BTexture_Moon = 0x10,
};

enum ChaoFavouriteFruit : __int8
{
	ChaoFavouriteFruit_RoundFruit1 = 0x0,
	ChaoFavouriteFruit_RoundFruit2 = 0x1,
	ChaoFavouriteFruit_TriangleFruit1 = 0x2,
	ChaoFavouriteFruit_TriangleFruit2 = 0x3,
	ChaoFavouriteFruit_SquareFruit1 = 0x4,
	ChaoFavouriteFruit_SquareFruit2 = 0x5,
	ChaoFavouriteFruit_None1 = 0x6,
	ChaoFavouriteFruit_None2 = 0x7,
};

enum ChaoClassroomLessonFlags
{
	ChaoClassroomLessonFlags_None = 0x0,
	ChaoClassroomLessonFlags_DrawingLevel1 = 0x1,
	ChaoClassroomLessonFlags_DrawingLevel2 = 0x2,
	ChaoClassroomLessonFlags_DrawingLevel3 = 0x4,
	ChaoClassroomLessonFlags_DrawingLevel4 = 0x8,
	ChaoClassroomLessonFlags_DrawingLevel5 = 0x10,
	ChaoClassroomLessonFlags_ShakeDance = 0x100,
	ChaoClassroomLessonFlags_SpinDance = 0x200,
	ChaoClassroomLessonFlags_StepDance = 0x400,
	ChaoClassroomLessonFlags_GoGoDance = 0x800,
	ChaoClassroomLessonFlags_Exercise = 0x1000,
	ChaoClassroomLessonFlags_SongLevel1 = 0x10000,
	ChaoClassroomLessonFlags_SongLevel2 = 0x20000,
	ChaoClassroomLessonFlags_SongLevel3 = 0x40000,
	ChaoClassroomLessonFlags_SongLevel4 = 0x80000,
	ChaoClassroomLessonFlags_SongLevel5 = 0x100000,
	ChaoClassroomLessonFlags_Bell = 0x1000000,
	ChaoClassroomLessonFlags_Castanets = 0x2000000,
	ChaoClassroomLessonFlags_Cymbals = 0x4000000,
	ChaoClassroomLessonFlags_Drum = 0x8000000,
	ChaoClassroomLessonFlags_Flute = 0x10000000,
	ChaoClassroomLessonFlags_Maracas = 0x20000000,
	ChaoClassroomLessonFlags_Trumpet = 0x40000000,
	ChaoClassroomLessonFlags_Tambourine = 0x80000000,
};

enum SADXAnimalFlags : __int16
{
	SADXAnimalFlags_None = 0x0,
	SADXAnimalFlags_Seal = 0x1,
	SADXAnimalFlags_Penguin = 0x2,
	SADXAnimalFlags_Otter = 0x4,
	SADXAnimalFlags_Peacock = 0x8,
	SADXAnimalFlags_Swallow = 0x10,
	SADXAnimalFlags_Parrot = 0x20,
	SADXAnimalFlags_Deer = 0x40,
	SADXAnimalFlags_Rabbit = 0x80,
	SADXAnimalFlags_Kangaroo = 0x100,
	SADXAnimalFlags_Gorilla = 0x200,
	SADXAnimalFlags_Lion = 0x400,
	SADXAnimalFlags_Elephant = 0x800,
	SADXAnimalFlags_Mole = 0x1000,
	SADXAnimalFlags_Koala = 0x2000,
	SADXAnimalFlags_Skunk = 0x4000,
};

enum SA2BAnimalFlags : int
{
	SA2BAnimalFlags_None = 0x0,
	SA2BAnimalFlags_Penguin = 0x1,
	SA2BAnimalFlags_Seal = 0x2,
	SA2BAnimalFlags_Otter = 0x4,
	SA2BAnimalFlags_Rabbit = 0x8,
	SA2BAnimalFlags_Cheetah = 0x10,
	SA2BAnimalFlags_Warthog = 0x20,
	SA2BAnimalFlags_Bear = 0x40,
	SA2BAnimalFlags_Tiger = 0x80,
	SA2BAnimalFlags_Gorilla = 0x100,
	SA2BAnimalFlags_Peacock = 0x200,
	SA2BAnimalFlags_Parrot = 0x400,
	SA2BAnimalFlags_Condor = 0x800,
	SA2BAnimalFlags_Skunk = 0x1000,
	SA2BAnimalFlags_Sheep = 0x2000,
	SA2BAnimalFlags_Raccoon = 0x4000,
	SA2BAnimalFlags_HalfFish = 0x8000,
	SA2BAnimalFlags_SkeletonDog = 0x10000,
	SA2BAnimalFlags_Bat = 0x20000,
	SA2BAnimalFlags_Dragon = 0x40000,
	SA2BAnimalFlags_Unicorn = 0x80000,
	SA2BAnimalFlags_Phoenix = 0x100000
};

enum ChaoToyFlags : __int16
{
	ChaoToyFlags_None = 0x0,
	ChaoToyFlags_Rattle = 0x1,
	ChaoToyFlags_Car = 0x2,
	ChaoToyFlags_PictureBook = 0x4,
	ChaoToyFlags_SonicDoll = 0x10,
	ChaoToyFlags_Broomstick = 0x20,
	ChaoToyFlags_Unknown = 0x40,
	ChaoToyFlags_PogoStick = 0x80,
	ChaoToyFlags_Crayons = 0x100,
	ChaoToyFlags_BubbleWand = 0x200,
	ChaoToyFlags_Shovel = 0x400,
	ChaoToyFlags_WateringCan = 0x800,
};

enum SADXAnimal : __int8
{
	SADXAnimal_None = -1,
	SADXAnimal_Seal = 0x0,
	SADXAnimal_Penguin = 0x1,
	SADXAnimal_Otter = 0x2,
	SADXAnimal_Peacock = 0x3,
	SADXAnimal_Swallow = 0x4,
	SADXAnimal_Parrot = 0x5,
	SADXAnimal_Deer = 0x6,
	SADXAnimal_Rabbit = 0x7,
	SADXAnimal_Kangaroo = 0x8,
	SADXAnimal_Gorilla = 0x9,
	SADXAnimal_Lion = 0xA,
	SADXAnimal_Elephant = 0xB,
	SADXAnimal_Mole = 0xC,
	SADXAnimal_Koala = 0xD,
	SADXAnimal_Skunk = 0xE,
};

enum SADXFruit : __int8
{
	SADXFruit_None = -1,
	SADXFruit_RegularFruit = 0x18,
	SADXFruit_StrongFruit = 0x3,
	SADXFruit_TastyFruit = 0x4,
	SADXFruit_HeroFruit = 0x5,
	SADXFruit_DarkFruit = 0x6,
	SADXFruit_RoundFruit = 0x7,
	SADXFruit_TriangularFruit = 0x8,
	SADXFruit_CubicleFruit = 0x9,
	SADXFruit_HeartFruit = 0xA,
	SADXFruit_ChaoFruit = 0xB,
	SADXFruit_Mushroom = 0x14,
	SADXFruit_MushroomAlt = 0x15,
	SADXFruit_OrangeFruit = 0xD,
	SADXFruit_BlueFruit = 0xE,
	SADXFruit_PinkFruit = 0xF,
	SADXFruit_GreenFruit = 0x10,
	SADXFruit_PurpleFruit = 0x11,
	SADXFruit_YellowFruit = 0x12,
	SADXFruit_RedFruit = 0x13,
	SADXFruit_SmartFruit = 0xC,
};

enum SA2BFruit : __int8
{
	SA2BFruit_None = -1,
	SA2BFruit_ChaoGardenFruit = 0x0,
	SA2BFruit_HeroGardenFruit = 0x1,
	SA2BFruit_DarkGardenFruit = 0x2,
	SA2BFruit_StrongFruit = 0x3,
	SA2BFruit_TastyFruit = 0x4,
	SA2BFruit_HeroFruit = 0x5,
	SA2BFruit_DarkFruit = 0x6,
	SA2BFruit_RoundFruit = 0x7,
	SA2BFruit_TriangleFruit = 0x8,
	SA2BFruit_SquareFruit = 0x9,
	SA2BFruit_HeartFruit = 0xA,
	SA2BFruit_ChaoFruit = 0xB,
	SA2BFruit_Mushroom = 0x14,
	SA2BFruit_MushroomAlt = 0x15,
	SA2BFruit_OrangeFruit = 0xD,
	SA2BFruit_BlueFruit = 0xE,
	SA2BFruit_PinkFruit = 0xF,
	SA2BFruit_GreenFruit = 0x10,
	SA2BFruit_PurpleFruit = 0x11,
	SA2BFruit_YellowFruit = 0x12,
	SA2BFruit_RedFruit = 0x13,
	SA2BFruit_SmartFruit = 0xC,
	SA2BFruit_MintCandy = 0x16,
	SA2BFruit_Grapes = 0x17,
};

enum SADXHat : __int8
{
	SADXHat_None = 0x0,
	SADXHat_Pumpkin = 0x1,
	SADXHat_Skull = 0x2,
	SADXHat_Apple = 0x3,
	SADXHat_Bucket = 0x4,
	SADXHat_EmptyCan = 0x5,
	SADXHat_CardboardBox = 0x6,
	SADXHat_FlowerPot = 0x7,
	SADXHat_PaperBag = 0x8,
	SADXHat_Pan = 0x9,
	SADXHat_Stump = 0xA,
	SADXHat_Watermelon = 0xB,
	SADXHat_RedWoolBeanie = 0xC,
	SADXHat_BlueWoolBeanie = 0xD,
	SADXHat_BlackWoolBeanie = 0xE,
	SADXHat_Pacifier = 0xF,
	SADXHat_NormalEggShell = 0x10,
	SADXHat_Yellow_MonoTone_EggShell = 0x11,
	SADXHat_White_MonoTone_EggShell = 0x12,
	SADXHat_Brown_MonoTone_EggShell = 0x13,
	SADXHat_Aqua_MonoTone_EggShell = 0x14,
	SADXHat_Pink_MonoTone_EggShell = 0x15,
	SADXHat_Blue_MonoTone_EggShell = 0x16,
	SADXHat_Grey_MonoTone_EggShell = 0x17,
	SADXHat_Green_MonoTone_EggShell = 0x18,
	SADXHat_Red_MonoTone_EggShell = 0x19,
	SADXHat_LightGreen_MonoTone_EggShell = 0x1A,
	SADXHat_Purple_MonoTone_EggShell = 0x1B,
	SADXHat_Orange_MonoTone_EggShell = 0x1C,
	SADXHat_Black_MonoTone_EggShell = 0x1D,
	SADXHat_Yellow_TwoTone_EggShell = 0x1E,
	SADXHat_White_TwoTone_EggShell = 0x1F,
	SADXHat_Brown_TwoTone_EggShell = 0x20,
	SADXHat_Aqua_TwoTone_EggShell = 0x21,
	SADXHat_Pink_TwoTone_EggShell = 0x22,
	SADXHat_Blue_TwoTone_EggShell = 0x23,
	SADXHat_Grey_TwoTone_EggShell = 0x24,
	SADXHat_Green_TwoTone_EggShell = 0x25,
	SADXHat_Red_TwoTone_EggShell = 0x26,
	SADXHat_LightGreen_TwoTone_EggShell = 0x27,
	SADXHat_Purple_TwoTone_EggShell = 0x28,
	SADXHat_Orange_TwoTone_EggShell = 0x29,
	SADXHat_Black_TwoTone_EggShell = 0x2A,
	SADXHat_NormalShinyEggShell = 0x2B,
	SADXHat_YellowShiny_MonoTone_EggShell = 0x2C,
	SADXHat_WhiteShiny_MonoTone_EggShell = 0x2D,
	SADXHat_BrownShiny_MonoTone_EggShell = 0x2E,
	SADXHat_AquaShiny_MonoTone_EggShell = 0x2F,
	SADXHat_PinkShiny_MonoTone_EggShell = 0x30,
	SADXHat_BlueShiny_MonoTone_EggShell = 0x31,
	SADXHat_GreyShiny_MonoTone_EggShell = 0x32,
	SADXHat_GreenShiny_MonoTone_EggShell = 0x33,
	SADXHat_RedShiny_MonoTone_EggShell = 0x34,
	SADXHat_LightGreenShiny_MonoTone_EggShell = 0x35,
	SADXHat_PurpleShiny_MonoTone_EggShell = 0x36,
	SADXHat_OrangeShiny_MonoTone_EggShell = 0x37,
	SADXHat_BlackShiny_MonoTone_EggShell = 0x38,
	SADXHat_YellowShiny_TwoTone_EggShell = 0x39,
	SADXHat_WhiteShiny_TwoTone_EggShell = 0x3A,
	SADXHat_BrownShiny_TwoTone_EggShell = 0x3B,
	SADXHat_AquaShiny_TwoTone_EggShell = 0x3C,
	SADXHat_PinkShiny_TwoTone_EggShell = 0x3D,
	SADXHat_BlueShiny_TwoTone_EggShell = 0x3E,
	SADXHat_GreyShiny_TwoTone_EggShell = 0x3F,
	SADXHat_GreenShiny_TwoTone_EggShell = 0x40,
	SADXHat_RedShiny_TwoTone_EggShell = 0x41,
	SADXHat_LightGreenShiny_TwoTone_EggShell = 0x42,
	SADXHat_PurpleShiny_TwoTone_EggShell = 0x43,
	SADXHat_OrangeShiny_TwoTone_EggShell = 0x44,
	SADXHat_BlackShiny_TwoTone_EggShell = 0x45,
	SADXHat_YellowJewelEggShell = 0x46,
	SADXHat_WhiteJewelEggShell = 0x47,
	SADXHat_PinkJewelEggShell = 0x48,
	SADXHat_BlueJewelEggShell = 0x49,
	SADXHat_GreenJewelEggShell = 0x4A,
	SADXHat_PurpleJewelEggShell = 0x4B,
	SADXHat_AquaJewelEggShell = 0x4C,
	SADXHat_RedJewelEggShell = 0x4D,
	SADXHat_BlackJewelEggShell = 0x4E,
	SADXHat_LightGreenJewelEggShell = 0x4F,
	SADXHat_OrangeJewelEggShell = 0x50,
	SADXHat_PearlEggShell = 0x51,
	SADXHat_Metal1EggShell = 0x52,
	SADXHat_Metal2EggShell = 0x53,
	SADXHat_GlassEggShell = 0x54,
};

enum SA2BHat : __int8
{
	SA2BHat_None = 0x0,
	SA2BHat_Pumpkin = 0x1,
	SA2BHat_Skull = 0x2,
	SA2BHat_Apple = 0x3,
	SA2BHat_Bucket = 0x4,
	SA2BHat_EmptyCan = 0x5,
	SA2BHat_CardboardBox = 0x6,
	SA2BHat_FlowerPot = 0x7,
	SA2BHat_PaperBag = 0x8,
	SA2BHat_Pan = 0x9,
	SA2BHat_Stump = 0xA,
	SA2BHat_Watermelon = 0xB,
	SA2BHat_RedWoolBeanie = 0xC,
	SA2BHat_BlueWoolBeanie = 0xD,
	SA2BHat_BlackWoolBeanie = 0xE,
	SA2BHat_Pacifier = 0xF,
	SA2BHat_NormalEggShell = 0x10,
	SA2BHat_Yellow_MonoTone_EggShell = 0x11,
	SA2BHat_White_MonoTone_EggShell = 0x12,
	SA2BHat_Brown_MonoTone_EggShell = 0x13,
	SA2BHat_SkyBlue_MonoTone_EggShell = 0x14,
	SA2BHat_Pink_MonoTone_EggShell = 0x15,
	SA2BHat_Blue_MonoTone_EggShell = 0x16,
	SA2BHat_Grey_MonoTone_EggShell = 0x17,
	SA2BHat_Green_MonoTone_EggShell = 0x18,
	SA2BHat_Red_MonoTone_EggShell = 0x19,
	SA2BHat_LimeGreen_MonoTone_EggShell = 0x1A,
	SA2BHat_Purple_MonoTone_EggShell = 0x1B,
	SA2BHat_Orange_MonoTone_EggShell = 0x1C,
	SA2BHat_Black_MonoTone_EggShell = 0x1D,
	SA2BHat_Yellow_TwoTone_EggShell = 0x1E,
	SA2BHat_White_TwoTone_EggShell = 0x1F,
	SA2BHat_Brown_TwoTone_EggShell = 0x20,
	SA2BHat_SkyBlue_TwoTone_EggShell = 0x21,
	SA2BHat_Pink_TwoTone_EggShell = 0x22,
	SA2BHat_Blue_TwoTone_EggShell = 0x23,
	SA2BHat_Grey_TwoTone_EggShell = 0x24,
	SA2BHat_Green_TwoTone_EggShell = 0x25,
	SA2BHat_Red_TwoTone_EggShell = 0x26,
	SA2BHat_LimeGreen_TwoTone_EggShell = 0x27,
	SA2BHat_Purple_TwoTone_EggShell = 0x28,
	SA2BHat_Orange_TwoTone_EggShell = 0x29,
	SA2BHat_Black_TwoTone_EggShell = 0x2A,
	SA2BHat_NormalShinyEggShell = 0x2B,
	SA2BHat_YellowShiny_MonoTone_EggShell = 0x2C,
	SA2BHat_WhiteShiny_MonoTone_EggShell = 0x2D,
	SA2BHat_BrownShiny_MonoTone_EggShell = 0x2E,
	SA2BHat_SkyBlueShiny_MonoTone_EggShell = 0x2F,
	SA2BHat_PinkShiny_MonoTone_EggShell = 0x30,
	SA2BHat_BlueShiny_MonoTone_EggShell = 0x31,
	SA2BHat_GreyShiny_MonoTone_EggShell = 0x32,
	SA2BHat_GreenShiny_MonoTone_EggShell = 0x33,
	SA2BHat_RedShiny_MonoTone_EggShell = 0x34,
	SA2BHat_LimeGreenShiny_MonoTone_EggShell = 0x35,
	SA2BHat_PurpleShiny_MonoTone_EggShell = 0x36,
	SA2BHat_OrangeShiny_MonoTone_EggShell = 0x37,
	SA2BHat_BlackShiny_MonoTone_EggShell = 0x38,
	SA2BHat_YellowShiny_TwoTone_EggShell = 0x39,
	SA2BHat_WhiteShiny_TwoTone_EggShell = 0x3A,
	SA2BHat_BrownShiny_TwoTone_EggShell = 0x3B,
	SA2BHat_SkyBlueShiny_TwoTone_EggShell = 0x3C,
	SA2BHat_PinkShiny_TwoTone_EggShell = 0x3D,
	SA2BHat_BlueShiny_TwoTone_EggShell = 0x3E,
	SA2BHat_GreyShiny_TwoTone_EggShell = 0x3F,
	SA2BHat_GreenShiny_TwoTone_EggShell = 0x40,
	SA2BHat_RedShiny_TwoTone_EggShell = 0x41,
	SA2BHat_LimeGreenShiny_TwoTone_EggShell = 0x42,
	SA2BHat_PurpleShiny_TwoTone_EggShell = 0x43,
	SA2BHat_OrangeShiny_TwoTone_EggShell = 0x44,
	SA2BHat_BlackShiny_TwoTone_EggShell = 0x45,
	SA2BHat_GlitchyNormalEggShell = 0x46,
};

enum ChaoSeed : __int8
{
	ChaoSeed_None = -1,
	ChaoSeed_StrongSeed = 0x0,
	ChaoSeed_TastySeed = 0x1,
	ChaoSeed_HeroSeed = 0x2,
	ChaoSeed_DarkTheme = 0x3,
	ChaoSeed_RoundSeed = 0x4,
	ChaoSeed_TriangleTheme = 0x5,
	ChaoSeed_SquareSeed = 0x6,
};

enum Theme : __int8
{
	Theme_Omochao = 0x0,
	Theme_Amy = 0x1,
	Theme_Maria = 0x2,
};

enum Menus : __int32
{
	Menus_TitleScreen = 0x0,
	Menus_Main = 0x1,
	Menus_StorySelect = 0x2,
	Menus_StageSelect = 0x3,
	Menus_Old2PBattle = 0x4,
	Menus_Unknown_5 = 0x5,
	Menus_Settings = 0x6,
	Menus_Unknown_7 = 0x7,
	Menus_SoundTest = 0x8,
	Menus_FileSelect = 0x9,
	Menus_Kart = 0xA,
	Menus_DownloadEventMaybe = 0xB,
	Menus_BossAttack = 0xC,
	Menus_Tutorial = 0xD,
	Menus_Unknown_E = 0xE,
	Menus_Emblems = 0xF,
	Menus_Battle = 0x10,
	Menus_Unknown_11 = 0x11,
	Menus_Unknown_12 = 0x12,
	Menus_Unknown_13 = 0x13,
	Menus_Unknown_14 = 0x14,
	Menus_Controls = 0x15,
	Menus_BonusVideo = 0x16,
	Menus_HowToPlay = 0x17,
	Menus_Unknown_18 = 0x18,
};

enum DispAction : __int8
{
	DispAction_Initialize = 0x0,
	DispAction_Transition = 0x1,
	DispAction_YesNo = 0x2,
	DispAction_Exit = 0x3,
	DispAction_Continue = 0x4,
	DispAction_Restart = 0x5,
};

enum SA2BLobbyUnlocks
{
	SA2BLobbyUnlocks_Unknown_A = 0x1,
	SA2BLobbyUnlocks_NeutralGarden = 0x2,
	SA2BLobbyUnlocks_Kindergarten = 0x4,
	SA2BLobbyUnlocks_Unknown_B = 0x8,
	SA2BLobbyUnlocks_HeroGarden = 0x10,
	SA2BLobbyUnlocks_Unknown_C = 0x20,
	SA2BLobbyUnlocks_DarkGarden = 0x40,
	SA2BLobbyUnlocks_Unknown_D = 0x80,
};

enum Actions
{
	Action_None,
	Action_Run,
	Action_SpiralLoop,  // Used at the end of Radical Highway
	Action_SpinCharge = 3,
	Action_SpinRelease,
	Action_Jump = 6,
	Action_Spring, // Movement via stick input is allowed
	Action_SpringLock, // Trajectory cannot be influenced until the set path is finished
	Action_Launch, // Used for the rocket in Metal Harbor and the vines in Green Forest/White Jungle
	Action_Fall, // The panels that make you soar in Metal Harbor (black, blue, and red ones) use this, as well. Also pit floating.
	Action_Balancing,
	Action_Skid,
	Action_HomingAttack,
	Action_Push,
	Action_Pain,
	Action_WallBump,
	Action_SlideGrounded, // Used when neutral sticking on surfaces where you can't stand still on (CW's pyramids, DL's underwater columns, IG's elevator's ramps and MH's starting ramp)
	Action_ObjectControl = 18,
	Action_PickUp,
	Action_PutDown,
	Action_HoldObject,
	Action_GrabObject, // Pushable/pullable boxes in Wild Canyon. Only set when facing toward the object.
	Action_GrabObject2, // Only set when facing away from the object
	Action_ReleaseObject,
	Action_MoveWithObject = 25,
	Action_ThrowGrounded,
	Action_SkidWithObject = 27,
	Action_FallWithObject,
	Action_JumpWithObject,
	Action_SpringWithObject, // Movement via stick input is allowed
	Action_SpringLockWithObject, // Trajectory cannot be influenced until the set path is finished
	Action_PullObject = 32, // Boxes in Wild Canyon, like Action_GrabObject
	Action_ThrowMidair,
	Action_ShakeTree,
	Action_ShakeObject = 35,
	Action_Bound = 38, // Caught by ghost or blue shot from GUN robot
	Action_LedgeGrab,
	Action_StepUp = 40, // Stepping up to ledges
	Action_Whistle = 42,
	Action_Pet,
	Action_ThrowChaoOnMachine,
	Action_ActivateMM,
	Action_ActivateMMFail,
	Action_MysticMelodyFail = 47,
	Action_LookAtMMShrine,
	Action_MonitorLook = 50,
	Action_Pulley,
	Action_WaterSlide,
	Action_MysticMelody = 53, // These actions disable player inputs until the associated animation finishes
	Action_Sunglasses = Action_MysticMelody,
	Action_GhostScare = Action_Sunglasses,
	Action_AirBubble = Action_GhostScare,
	Action_CutsceneAnimation, // Used before 2p matches, using powerups on 2p mode and mini-event cutscenes
	Action_Drown,
	Action_Quicksand,
	Action_Death = 57,
	Action_Noclip, // Doesn't work for Knuckles.
	Action_LightDash,
	Action_Glide = Action_LightDash,
	Action_TailsFly = Action_Glide,
	Action_SuperStand = Action_TailsFly,
	Action_MechHover,
	Action_LightAttack = Action_MechHover,
	Action_MechlessAttack = Action_LightAttack,
	Action_SuperMove = Action_MechlessAttack,
	Action_Somersault1,
	Action_Dig = Action_Somersault1,
	Action_SuperMoveUp = Action_Dig, // pressing A while standing still
	Action_MechPunch,
	Action_DigFinish = Action_MechPunch,
	Action_SuperMoveDown = Action_DigFinish,
	Action_Somersault2,
	Action_SuperBoostUp = Action_Somersault2, // pressing A while moving
	Action_SomersaultFinish,
	Action_SuperBoostDown = Action_SomersaultFinish,
	Action_DigOnWall,
	Action_SomersaultCancel = Action_DigOnWall,
	Action_MovingSomersault1,
	Action_DigFinishOnWall = Action_MovingSomersault1,
	Action_MovingSomersault2,
	Action_DigFailOnWall,
	Action_MovingSomersaultFinish = Action_DigFailOnWall, // This pops up before Action_SomersaultFinish if you somersault while moving. Kinda weird.
	Action_BounceDown,
	Action_Climb = Action_BounceDown,
	Action_BounceUp,
	Action_ClimbUpLedge = Action_BounceUp,
	Action_Grind,
	Action_Punch = Action_Grind,
	Action_Hang,
	Action_Punch2 = Action_Hang,
	Action_Punch3,
	Action_RailTrick = Action_Punch3,
	Action_MagicHands,
	Action_Punch1Run = Action_MagicHands,
	Action_Trick,
	Action_Punch2Run = Action_Trick,
	Action_Board,
	Action_Punch3Run = Action_Board,
	Action_SpiralUpper,
	Action_BoardBrake,
	Action_DrillClaw = Action_BoardBrake,
	Action_BoardFall,
	Action_Swim = Action_BoardFall,
	Action_BoardJump,
	Action_SwimMove = Action_BoardJump,
	Action_BoardTrick,
	Action_SwimSink = Action_BoardTrick,
	Action_BoardBump,
	Action_GravitySwitch,
	Action_TurtleDive = 86,
	Action_TurtleGrab,
	Action_BlackShield = Action_TurtleGrab,
};

enum StoryEntryType
{
	StoryEntryType_Event = 0x0,
	StoryEntryType_Level = 0x1,
	StoryEntryType_End = 0x2,
	StoryEntryType_Credits = 0x3,
};

enum SurfaceFlags : uint32_t
{
	SurfaceFlag_Solid = 0x1,
	SurfaceFlag_Water = 0x2,
	SurfaceFlag_Diggable = 0x20,
	SurfaceFlag_Unclimbable = 0x80,
	SurfaceFlag_Stairs = 0x100, // treat the surface as flat
	SurfaceFlag_Hurt = 0x400,
	SurfaceFlag_FeetSound = 0x800,
	SurfaceFlag_CannotLand = 0x1000,
	SurfaceFlag_WaterNoAlpha = 0x2000,
	SurfaceFlag_NoShadow = 0x8000,
	SurfaceFlag_Accelerate = 0x100000,
	SurfaceFlag_NoFog = 0x400000,
	SurfaceFlag_Dynamic = 0x8000000,
	SurfaceFlag_Unknown1 = 0x20000000, // Usually medium-sized collisions
	SurfaceFlag_Unknown2 = 0x40000000, // Usually small-sized collisions
	SurfaceFlag_Visible = 0x80000000
};

enum CollisionShapes : unsigned __int8
{
	CollisionShape_Sphere,
	CollisionShape_Cyl1,
	CollisionShape_Cyl2,
	CollisionShape_Cube1,
	CollisionShape_Cube2,
	CollisionShape_Capsule = 0x6,
	CollisionShape_Wall = 0x9
};

enum CollisionLists
{
	CollisionList_Players,
	CollisionList_Projectiles,
	CollisionList_Targetable,
	CollisionList_Enemies,
	CollisionList_Regular,
	CollisionList_Unknown_5,
	CollisionList_Rings,
	CollisionList_Unknown_7,
	CollisionList_Unknown_8,
	CollisionList_Chao
};

enum DemoState : unsigned __int8
{
	DemoState_None,
	DemoState_Playback,
	DemoState_Recording
};

enum GravityDirectionType
{
	DownwardX,
	UpwardX,
	DownwardY,
	UpwardY,
	DownwardZ,
	UpwardZ
};

enum SoundFlags : unsigned __int16
{
	SndFlag_Unknown1 = 0x1,
	SndFlag_Unknown2 = 0x2,
	SndFlag_Remove = 0x4,
	SndFlag_Unknown8 = 0x8,
	SndFlag_AutoVolume = 0x10,
	SndFlag_ForceVolume = 0x20,
	SndFlag_AutoPanning = 0x40,
	SndFlag_ForcePanning = 0x80,
	SndFlag_AutoDist = 0x100,
	SndFlag_ForceDist = 0x200,
	SndFlag_Unknown400 = 0x400,
	SndFlag_Unknown800 = 0x800,
	SndFlag_Unknown1000 = 0x1000,
	SndFlag_Unknown2000 = 0x2000,
	SndFlag_SecondaryTimer = 0x4000
};

enum CameraModes
{
	CameraMode_None,
	CameraMode_User,
	CameraMode_Follow,
	CameraMode_Knuckles,
	CameraMode_Editor,
	CameraMode_Editor2,
	CameraMode_Snapshot,
	CameraMode_Klamath,
	CameraMode_Point,
	CameraMode_Ashland,
	CameraMode_Fix,
	CameraMode_Leave,
	CameraMode_Space,
	CameraMode_Carmel,
	CameraMode_Motion,
	CameraMode_BossInit,
	CameraMode_BossPoint,
	CameraMode_Collision,
	CameraMode_Pstone,
	CameraMode_Init,
	CameraMode_Easyset,
	CameraMode_BossKlamath,
	CameraMode_Gakugaku,
	CameraMode_Knuckles_L,
	CameraMode_Fix2,
	CameraMode_Pstone2,
	CameraMode_SS,
	CameraMode_Colli_LR
};

enum CameraAdjust
{
	CameraAdjust_None,
	CameraAdjust_User,
	CameraAdjust_Half,
	CameraAdjust_Three1,
	CameraAdjust_Three2,
	CameraAdjust_Three3,
	CameraAdjust_Three4,
	CameraAdjust_Three5,
	CameraAdjust_Relative1,
	CameraAdjust_Relative2,
	CameraAdjust_Relative3,
	CameraAdjust_Relative4,
	CameraAdjust_Relative5,
	CameraAdjust_Relative6
};

enum Languages
{
	Language_Japanese,
	Language_English,
	Language_French,
	Language_Spanish,
	Language_German,
	Language_Italian
};

enum SP_FLAG
{
	SP_FLAG_BLEND_ONE    = 0x1,
	SP_FLAG_BLEND_SRC    = 0x2,
	SP_FLAG_USE_ALPHA    = 0x8,   /* Set alpha pipeline */
	SP_FLAG_10           = 0x10,
	SP_FLAG_20           = 0x20,
	SP_FLAG_40           = 0x40,
	SP_FLAG_COLOR_FILTER = 0x80,  /* Multiply sprite color with white color (useless) */
	SP_FLAG_USE_OFFSET   = 0x100, /* Wheter or not to use the offset value of a particule */
	SP_FLAG_400          = 0x400
};

enum SP_TASK_FLAG
{
	SP_TASK_EXIT = 0x1 /* Destroy task next frame */
};
