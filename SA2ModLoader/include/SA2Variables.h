#pragma once

#include "MemAccess.h"
#include "SA2Structs.h"

DataArray(int, CommonActionWindowTextIndexes, 0x96EBF8, 34);
DataArray(int, SonicActionWindowTextIndexes, 0x96EC80, 20);
DataArray(int, AmyActionWindowTextIndexes, 0x96ECD0, 18);
DataArray(int, ShadowActionWindowTextIndexes, 0x96ED18, 16);
DataArray(int, KnucklesActionWindowTextIndexes, 0x96ED58, 24);
DataArray(int, TikalActionWindowTextIndexes, 0x96EDB8, 22);
DataArray(int, RougeActionWindowTextIndexes, 0x96EE10, 28);
DataArray(int, ChaosActionWindowTextIndexes, 0x96EE80, 22);
DataArray(int, MechEggmanActionWindowTextIndexes, 0x96EED8, 12);
DataArray(int, DarkChaoWalkerActionWindowTextIndexes, 0x96EF08, 12);
DataArray(int, MechTailsActionWindowTextIndexes, 0x96EF38, 12);
DataArray(int, ChaoWalkerActionWindowTextIndexes, 0x96EF68, 12);
DataArray(int, EggmanActionWindowTextIndexes, 0x96EF98, 4);
DataArray(int, TailsActionWindowTextIndexes, 0x96EFA8, 4);
DataArray(ObjectListEntry, MissionStreet2P_ObjectArray, 0x96F6A0, 51);
DataPointer(ObjectListHead, MissionStreet2P_ObjectList, 0x96F9D0);
DataPointer(LevelHeader, MissionStreet2PHeader, 0x9709F8);
DataPointer(LevelHeader, EndingHeader, 0x970A10);
DataPointer(LevelHeader, DeckRaceHeader, 0x9721D0);
DataPointer(LevelHeader, OtherPrintHeader, 0x972400);
DataPointer(LevelHeader, EternalEngineHeader, 0x9A15B8);
DataPointer(LevelHeader, TestLevelHeader, 0x9A2044);
DataArray(ButtonMapping, ButtonMappings, 0x9A2088, 12);
DataPointer(LevelHeader, CrazyGadgetHeader, 0x9C8208);
DataPointer(LevelHeader, WeaponsBedHeader, 0x9ED990);
DataPointer(LevelHeader, LostColonyHeader, 0xA06D18);
DataPointer(NJS_TEXLIST, Texlist_SonEff, 0xA08B94);
DataPointer(NJS_TEXLIST, Texlist_ShadEff, 0xA08D94);
DataPointer(NJS_TEXLIST, Texlist_AmyEff, 0xA08F94);
DataPointer(NJS_TEXLIST, Texlist_MetEff, 0xA0917C);
DataArray(AnimationInfo, TailsAnimList, 0xA0D608, 118);
DataArray(AnimationInfo, MechEggmanAnimList, 0xA0E1F0, 139);
DataArray(AnimationInfo, MechTailsAnimList, 0xA0EAA0, 190);
DataArray(AnimationInfo, ChaoWalkerAnimList, 0xA0F680, 198);
DataArray(AnimationInfo, DarkChaoWalkerAnimList, 0xA102E0, 202);
DataPointer(NJS_SPRITE, ConsoleSpriteIGuess, 0xA12710);
DataArray(AnimationInfo, EggmanAnimList, 0xA12750, 164);
DataArray(AnimationInfo, KnucklesAnimList, 0xA13320, 217);
DataArray(AnimationInfo, TikalAnimList, 0xA140B0, 260);
DataArray(AnimationInfo, RougeAnimList, 0xA150F0, 217);
DataArray(AnimationInfo, ChaosAnimList, 0xA15E80, 272);
DataArray(AnimationInfo, SonicAnimList, 0xA17C18, 203);
DataArray(AnimationInfo, ShadowAnimList, 0xA188C8, 249);
DataArray(AnimationInfo, AmyAnimList, 0xA19858, 249);
DataArray(AnimationInfo, MetalSonicAnimList, 0xA1A7E8, 249);
DataArray(AnimationIndex, HiddenBaseCharAnims, 0xA93F28, 3);
DataPointer(LevelHeader, HiddenBaseHeader, 0xA985A8);
DataPointer(LevelHeader, PyramidCaveHeader, 0xAE0500);
DataPointer(LevelHeader, MetalHarborHeader, 0xB065C0);
DataArray(ObjectListEntry, PoolQuestObjectList, 0xB06750, 111);
DataPointer(LevelHeader, PoolQuestHeader, 0xB09550);
DataArray(char, LanguageChars, 0xB09590, 7);
DataArray(ItemBoxItem, SGItemBox_Items, 0xB0AFA0, 11);
DataArray(ItemBoxItem, ItemBoxBalloon_Items, 0xB19928, 11);
DataArray(LevelItemData, LevelItems, 0xB35390, 28);
DataArray(ItemBoxItem, ItemBoxAir_Items, 0xB493A0, 11);
DataArray(ItemBoxItem, ItemBox_Items, 0xB4D120, 11);
DataPointer(ObjectListEntry, DeathChamberObjectList, 0xBA5130);
DataPointer(LevelHeader, DeathChamberHeader, 0xBAFDF0);
DataPointer(LevelHeader, WildCanyonHeader, 0xBED568);
DataPointer(LevelHeader, IronGateHeader, 0xC04130);
DataArray(AnimationIndex, EggQuartersCharAnims, 0xC3DE88, 15);
DataPointer(LevelHeader, EggQuartersHeader, 0xC4F090);
DataPointer(LevelHeader, LostColony2PHeader, 0xC50A48);
DataPointer(NJS_TEXNAME, twoPVS_TEXNAME, 0xC65EE0);
DataPointer(NJS_TEXLIST, twoPVS_TEXLIST, 0xC65FC4);
DataPointer(NJS_TEXNAME, twoPVSBG_TEXNAME, 0xC65FD0);
DataPointer(NJS_TEXLIST, twoPVSBG_TEXLIST, 0xC66030);
DataArray(char *, BattleOptions_ptr, 0xC711D8, 4);
DataArray(StageSelectLevel, StageSelectLevels, 0xC75078, 33);
DataArray(int, ChaoWorldCharacters, 0xC75368, 6);
DataPointer(LevelHeader, AdvertiseHeader, 0xC76914);
DataPointer(int*, CharacterFromCostume, 0xC77448);
DataPointer(MenuData *, MainMenuData, 0xC77F14);
DataPointer(LevelHeader, PlanetQuestHeader, 0xC86DA8);
DataArray(ObjectListEntry, TailsVsEggman2_ObjectArray, 0xC87138, 39);
DataPointer(ObjectListHead, TailsVsEggman2_ObjectList, 0xC873A8);
DataPointer(LevelHeader, TailsVsEggman2Header, 0xC8A888);
DataArray(AnimationIndex, CannonsCoreKCharAnims, 0xCCDEB8, 7);
DataPointer(LevelHeader, CannonsCoreKHeader, 0xCCE828);
DataArray(AnimationIndex, SandOceanCharAnims, 0xCF9980, 3);
DataPointer(LevelHeader, SandOceanHeader, 0xD02328);
DataPointer(LevelHeader, HiddenBase2PHeader, 0xD86718);
DataPointer(LevelHeader, MadSpaceHeader, 0xDBB168);
DataPointer(LevelHeader, MetalHarbor2PHeader, 0xDBDC60);
DataPointer(LevelHeader, DeathChamber2PHeader, 0xDC8E08);
DataPointer(LevelHeader, WeaponsBed2PHeader, 0xDCB6E4);
DataPointer(LevelHeader, KnucklesVsRougeHeader, 0xDDA168);
DataArray(AnimationIndex, DryLagoonCharAnims, 0xDEA388, 11);
DataPointer(LevelHeader, DryLagoonHeader, 0xE5DDF0);
DataPointer(LevelHeader, CannonsCoreTHeader, 0xE71314);
DataPointer(LevelHeader, SecurityHallHeader, 0xE8FA00);
DataPointer(LevelHeader, WhiteJungleHeader, 0xEAE5F0);
DataPointer(LevelHeader, CosmicWallHeader, 0xEDCD80);
DataPointer(LevelHeader, CosmicWall2PHeader, 0xEF2F78);
DataPointer(LevelHeader, TailsVsEggman1Header, 0xEF4710);
DataPointer(LevelHeader, CartHeader, 0x100ACF0);
DataPointer(LevelHeader, SonicVsShadow1Header, 0x100BDA8);
DataPointer(NJS_TEXLIST, modeltex_bossbogy_TEXLIST, 0x100CA44);
DataPointer(NJS_TEXLIST, efftex_bossbogy_TEXLIST, 0x1032040);
DataPointer(NJS_TEXLIST, titletex_bossbogy_TEXLIST, 0x1036064);
DataPointer(LevelHeader, KingBoomBooHeader, 0x10367B8);
DataPointer(LevelHeader, PrisonLaneHeader, 0x104C750);
DataPointer(LevelHeader, EmblemGetHeader, 0x104C7D0);
DataArray(NJS_TEXLIST, texlist_objtex_common, 0x104DC2C, 8);
DataPointer(LevelHeader, EventHeader, 0x104DCC4);
DataPointer(LevelHeader, MCWarnHeader, 0x104DCE0);
DataPointer(LevelHeader, GreenForestHeader, 0x10892F8);
DataArray(ObjectListEntry, CityEscape_ObjectArray, 0x109E830, 102);
DataPointer(ObjectListHead, CityEscape_ObjectList, 0x109EE90);
DataPointer(LevelHeader, CityEscapeHeader, 0x10DC6D8);
DataPointer(LevelHeader, GreenHillHeader, 0x10F2FE0);
DataPointer(LevelHeader, FlyingDogHeader, 0x113AA80);
DataPointer(LevelHeader, BigFootHeader, 0x113AAF8);
DataPointer(LevelHeader, HotShotHeader, 0x113AB10);
DataPointer(LevelHeader, MeteorHerdHeader, 0x11652A0);
DataPointer(LevelHeader, SkyRailHeader, 0x117F750);
DataPointer(LevelHeader, MissionStreetHeader, 0x11BA4A8);
DataPointer(ObjectListEntry, AL_HeroGardenMaster_ObjectArray, 0x121ADB0);
DataPointer(ObjectListHead, AL_HeroGardenMaster_ObjectList, 0x121AE90);
DataPointer(ObjectListEntry, AL_NeutGardenMaster_ObjectArray, 0x121C7F0);
DataPointer(ObjectListHead, AL_NeutGardenMaster_ObjectList, 0x121C8B0);
DataPointer(CollisionData, ALO_LobbyGateDarkExecutor_collision, 0x122C028);
DataPointer(CollisionData, ALO_LobbyGate_collision, 0x123F070);
DataPointer(CollisionData, ALO_LobbyGateKinderExecutor_collision, 0x12562E0);
DataPointer(ObjectListEntry, AL_DarkGardenMaster_ObjectArray, 0x125B3D0);
DataPointer(ObjectListHead, AL_DarkGardenMaster_ObjectList, 0x125B4F0);
DataArray(struct_a1, ChaoKarateOpponents, 0x1296C10, 28);
DataPointer(int, ChaosDrive_RotationIncrement, 0x12E94A8);
DataPointer(__int16, ChaoTimescale, 0x1312DE4);
DataPointer(CollisionData*, ChaoCollisionData, 0x13134D0);
DataPointer(int, LastChaoArea, 0x13402AC);
DataPointer(int, CurrentChaoArea, 0x134046C);
DataPointer(int, NextChaoArea, 0x134062C);
DataPointer(ObjectListEntry, AL_RaceMaster_ObjectArray, 0x1353338);
DataPointer(ObjectListHead, AL_RaceMaster_ObjectList, 0x13533F8);
DataPointer(NJS_VECTOR*, ProbablyChaoSpawnPoints, 0x1366260);
DataPointer(ChaoSegmentData*, ChaoSegments, 0x1366580);
DataPointer(LevelHeader, ChaoHeader, 0x1367380);
DataPointer(ObjectListEntry, IronGate2P_ObjectArray, 0x1368EB0);
DataPointer(ObjectListHead, IronGate2P_ObjectList, 0x1369480);
DataPointer(LevelHeader, IronGate2PHeader, 0x1369770);
DataPointer(ObjectListEntry, Biolizard_ObjectArray, 0x1404980);
DataPointer(ObjectListHead, Biolizard_ObjectList, 0x1404C80);
DataPointer(NJS_TEXLIST, efftex2_bosslast1_TEXLIST, 0x1406F40);
DataPointer(LevelHeader, BiolizardHeader, 0x1406FE8);
DataPointer(ObjectListEntry, DowntownRace_ObjectArray, 0x14079D8);
DataPointer(ObjectListHead, DowntownRace_ObjectList, 0x1408038);
DataPointer(LevelHeader, DowntownRaceHeader, 0x14090E0);
DataArray(AnimationIndex, SandOcean2PCharAnims, 0x1413218, 3);
DataPointer(ObjectListEntry, SandOcean2P_ObjectArray, 0x1415158);
DataPointer(ObjectListHead, SandOcean2P_ObjectList, 0x1415428);
DataPointer(LevelHeader, SandOcean2PHeader, 0x141580C);
DataArray(int, DebugCharacterList, 0x1415D18, 8);
DataArray(int, DebugLevelLists, 0x1415FB8, 17);
DataArray(int, DebugCharacterList2, 0x1416018, 8);
DataPointer(int*, Debug2PLevelLists, 0x1416108);
DataPointer(LevelHeader, TitleHeader, 0x14161A0);
DataPointer(ObjectListEntry, GrindRace_ObjectArray, 0x141BF18);
DataPointer(ObjectListHead, GrindRace_ObjectList, 0x141C3A8);
DataPointer(LevelHeader, GrindRaceHeader, 0x1445800);
DataPointer(ObjectListEntry, CannonsCoreEggman_ObjectArray, 0x1445A98);
DataPointer(ObjectListHead, CannonsCoreEggman_ObjectList, 0x1445FB8);
DataPointer(LevelHeader, CannonsCoreEHeader, 0x145D364);
DataPointer(NJS_TEXLIST, E_SHOTEX_TEXLIST, 0x14CD9F0);
DataPointer(NJS_TEXLIST, E_NAMITEX_TEXLIST, 0x14D1598);
DataPointer(NJS_TEXLIST, E_EXPTEX_TEXLIST, 0x14D7BF4);
DataPointer(NJS_TEXLIST, E_BIGTEX_TEXLIST, 0x1521D38);
DataPointer(ObjectListHead, FinalChase_ObjectList, 0x1536FD8);
DataPointer(LevelHeader, FinalChaseHeader, 0x1553B58);
DataArray(AnimationIndex, DryLagoon2PPoolQuestCharAnims, 0x15623B8, 13);
DataPointer(ObjectListEntry, DryLagoon2P_ObjectArray, 0x1564770);
DataPointer(ObjectListHead, DryLagoon2P_ObjectList, 0x1564DB0);
DataPointer(LevelHeader, DryLagoon2PHeader, 0x156C138);
DataPointer(ObjectListEntry, RadicalHighway_ObjectArray, 0x158D750);
DataPointer(ObjectListHead, RadicalHighway_ObjectList, 0x158DD10);
DataPointer(LevelHeader, RadicalHighwayHeader, 0x15A2968);
DataPointer(ObjectListEntry, PyramidRace_ObjecArray, 0x15A7120);
DataPointer(ObjectListHead, PyramidRace_ObjecList, 0x15A76B0);
DataPointer(LevelHeader, PyramidRaceHeader, 0x15A87F0);
DataArray(AnimationIndex, CannonsCoreRCharAnims, 0x15AFBC8, 7);
DataPointer(ObjectListEntry, CannonsCoreRouge_ObjectArray, 0x16132C8);
DataPointer(ObjectListHead, CannonsCoreRouge_ObjectList, 0x16137C8);
DataPointer(LevelHeader, CannonsCoreRHeader, 0x1613B88);
DataArray(AnimationIndex, AquaticMineCharAnims, 0x16383A0, 8);
DataPointer(ObjectListHead, AquaticMine_ObjectList, 0x1638E50);
DataPointer(LevelHeader, AquaticMineHeader, 0x163B560);
DataPointer(char **, texlist_stg34_water2, 0x164A350);
DataPointer(ObjectListEntry, CannonsCoreSonic_ObjectArray, 0x164A570);
DataPointer(ObjectListHead, CannonsCoreSonic_ObjectList, 0x164AAA0);
DataPointer(LevelHeader, CannonsCoreSHeader, 0x1650EC0);
DataPointer(NJS_TEXLIST, TITLETEX_SONIC_TEXLIST, 0x165436C);
DataPointer(NJS_TEXLIST, TITLETEX_SHADOW_TEXLIST, 0x16543C0);
DataPointer(ObjectListEntry, SonicVsShadow2_ObjectArray, 0x1654538);
DataPointer(ObjectListHead, SonicVsShadow2_ObjectList, 0x16546E8);
DataPointer(LevelHeader, SonicVsShadow2Header, 0x165DF5C);
DataPointer(ObjectListEntry, EggGolem_ObjectArray, 0x165E368);
DataPointer(ObjectListHead, EggGolem_ObjectList, 0x165E648);
DataPointer(LevelHeader, EggGolemHeader, 0x166F0D8);
DataPointer(LevelHeader, EternalEngine2PHeader, 0x16725E0);
DataArray(ObjectListEntry, WildCanyon2P_ObjectArray, 0x1672740, 85);
DataPointer(ObjectListHead, WildCanyon2P_ObjectList, 0x1672C90);
DataPointer(LevelHeader, WildCanyon2PHeader, 0x16765C0);
DataArray(ObjectListEntry, PumpkinHill_ObjectArray, 0x1689818, 88);
DataPointer(ObjectListHead, PumpkinHill_ObjectList, 0x1689D98);
DataPointer(LevelHeader, PumpkinHillHeader, 0x168B9A0);
DataArray(ObjectListEntry, FinalRush_ObjectArray, 0x16A3D30, 87);
DataPointer(ObjectListHead, FinalRush_ObjectList, 0x16A42A0);
DataPointer(LevelHeader, FinalRushHeader, 0x16C6D48);
DataArray(ObjectListEntry, EggGolemE_ObjectArray, 0x16CD9C8, 46);
DataPointer(ObjectListHead, EggGolemE_ObjectList, 0x16CDCA8);
DataArray(AnimationIndex, EggGolemECharAnims, 0x16D1E30, 2);
DataPointer(LevelHeader, EggGolemEHeader, 0x16D2AC8);
DataPointer(NJS_TEXLIST, titletex_bosslast2_TEXLIST, 0x16D52D0);
DataPointer(NJS_TEXLIST, modeltex_bosslast2_TEXLIST, 0x17049D8);
DataPointer(NJS_TEXLIST, efftex_bosslast2_TEXLIST, 0x1708688);
DataPointer(NJS_TEXLIST, SSONEFFTEX_TEXLIST, 0x170ACD4);
DataArray(AnimationInfo, SuperSonicAnimList, 0x170D228, 110);
DataArray(AnimationInfo, SuperShadowAnimList, 0x170D908, 117);
DataPointer(LevelHeader, FinalHazardHeader, 0x170EDB0);
DataPointer(NJS_TEXLIST, CHAOSDRIVE_TEXLIST, 0x1717DAC);
DataArray(char *, MusicList, 0x171A2B0, 156);
DataPointer(NJS_TEXLIST, CONSOLE_TEXLIST, 0x171A64C);
DataPointer(NJS_TEXLIST, TexList_SonicLife, 0x171A654);
DataArray(NJS_TEXLIST, TexList_ShadowLife, 0x171A65C, 2);
DataArray(NJS_TEXLIST, TexList_TailsLife, 0x171A670, 4);
DataArray(NJS_TEXLIST, TexList_EggmanLife, 0x171A690, 2);
DataArray(NJS_TEXLIST, TexList_KnucklesLife, 0x171A6A4, 2);
DataArray(NJS_TEXLIST, TexList_RougeLife, 0x171A6B8, 2);
DataArray(NJS_TEXLIST, TexList_AmyLife, 0x171A6CC, 2);
DataArray(NJS_TEXLIST, TexList_MetalLife, 0x171A6E0, 2);
DataArray(NJS_TEXLIST, TexList_ChaoLife, 0x171A6F4, 2);
DataArray(NJS_TEXLIST, TexList_DarkChaoLife, 0x171A708, 2);
DataArray(NJS_TEXLIST, TexList_TikalLife, 0x171A71C, 2);
DataArray(NJS_TEXLIST, TexList_ChaosLife, 0x171A730, 2);
DataPointer(NJS_TEXLIST, RESULT_TEXLIST, 0x171A95C);
DataPointer(NJS_TEXLIST, GAME2PTEX_TEXLIST, 0x171A988);
DataPointer(NJS_COLOR, ScreenFadeARGB, 0x171CDA0);
DataPointer(NJS_TEXLIST, MISSIONTEX_XX_TEXLIST, 0x1738D90);
DataPointer(NJS_TEXLIST, MISSIONTEX_XX2_TEXLIST, 0x1738DB0);
DataArray(PhysicsData, PhysicsArray, 0x17391E8, 19);
DataPointer(TexPackInfo *, CommonTextureInfoPtr, 0x1739BD4);
DataArray(RELFileInfo, RELFiles, 0x173A9A0, 77);
DataArray(LevelRankScores, Mission1Scores, 0x173AD40, 30);
DataArray(LevelRankScores, Mission4Scores, 0x173AE70, 30);
DataArray(LevelRankScores, Mission5Scores, 0x173AFA0, 30);
DataArray(LevelRankTimes, Mission2Times, 0x173B0D0, 34);
DataArray(LevelRankTimes, Mission3Times, 0x173B208, 30);
DataArray(NJS_TEXLIST, LifeIconTexs, 0x173B3D8, 17);
DataPointer(NJS_TEXLIST, bossResult_TEXLIST, 0x173CAF0);
DataPointer(TexPackInfo, CommonTextureInfo, 0x173CE90);
DataPointer(unsigned int, ChaoSaveIndexThing, 0x173D06C);
DataPointer(char *, CurrentSavePath, 0x173D070);
DataArray(int, PortNumbers, 0x173D158, 4);
DataArray(StartPosition, SonicStartArray, 0x1746F20, 21);
DataArray(StartPosition, ShadowStartArray, 0x17472C0, 18);
DataArray(StartPosition, KnucklesStartArray, 0x17475D8, 18);
DataArray(StartPosition, RougeStartArray, 0x17478F0, 17);
DataArray(StartPosition, TailsStartArray, 0x1747BE8, 2);
DataArray(StartPosition, MechEggmanStartArray, 0x1747C40, 22);
DataArray(StartPosition, MechTailsStartArray, 0x1748008, 20);
DataArray(StartPosition, SuperSonicStartArray, 0x1748378, 3);
DataArray(StartPosition, SuperShadowStartArray, 0x1748400, 3);
DataArray(StartPosition, SonicStartArray2, 0x1748488, 22);
DataArray(StartPosition, ShadowStartArray2, 0x1748850, 19);
DataPointer(int, isFirstStageLoad, 0x1748B94);
DataArray(StartPosition, KnucklesStartArray2, 0x1748B98, 18);
DataArray(StartPosition, RougeStartArray2, 0x1748EB0, 18);
DataArray(StartPosition, MechEggmanStartArray2, 0x17491C8, 21);
DataPointer(int, negative_2, 0x1749564);
DataPointer(StartPosition, MechTailsStartArray2, 0x1749568);
DataArray(StartPosition, SuperSonicStartArray2, 0x17498B0, 3);
DataArray(StartPosition, SuperShadowStartArray2, 0x1749938, 3);
DataArray(LevelEndPosition, Sonic2PIntroArray, 0x17499C0, 12);
DataArray(LevelEndPosition, Shadow2PIntroArray, 0x1749B40, 12);
DataArray(LevelEndPosition, Knuckles2PIntroArray, 0x1749CC0, 12);
DataArray(LevelEndPosition, Rouge2PIntroArray, 0x1749E40, 12);
DataArray(LevelEndPosition, MechEggman2PIntroArray, 0x1749FC0, 11);
DataArray(LevelEndPosition, MechTails2PIntroArray, 0x174A120, 11);
DataArray(LevelEndPosition, SonicEndArray, 0x174A280, 9);
DataArray(LevelEndPosition, ShadowEndArray, 0x174A3A0, 6);
DataArray(LevelEndPosition, KnucklesEndArray, 0x174A460, 7);
DataArray(LevelEndPosition, RougeEndArray, 0x174A540, 6);
DataArray(LevelEndPosition, MechEggmanEndArray, 0x174A600, 7);
DataArray(LevelEndPosition, MechTailsEndArray, 0x174A6E0, 6);
DataPointer(NJS_TEXLIST, PRESSSTART_TEXLIST, 0x174A9E0);
DataPointer(char, isLoading, 0x174AFC0);
DataPointer(char, TextLanguage, 0x174AFD1);
DataPointer(char, PlayerPaused, 0x174AFD7);
DataPointer(char, TimerMinutes, 0x174AFDB);
DataPointer(char, TimerSeconds, 0x174AFDC);
DataPointer(char, TimerFrames, 0x174AFDD);
DataPointer(char, TwoPlayerMode, 0x174AFDE);
DataPointer(char, Current2PLevelGroup, 0x174AFDF);
DataPointer(char, MissionNum, 0x174AFE3);
DataPointer(char*, SpecialActivateTimer, 0x174AFF3);
DataPointer(char*, RoundsWon, 0x174AFF5);
DataPointer(char, TimeStopped, 0x174AFF7);
DataPointer(char*, ControllerEnabled, 0x174AFFF);
DataPointer(char, HaveChaoKey, 0x174B004);
DataPointer(char, isEnglishIGuess, 0x174B008);
DataPointer(char, Pose2PStart_PlayerNum, 0x174B009);
DataPointer(char, RumbleEnabled, 0x174B00A);
DataArray(char, AltCostume, 0x174B013, 2);
DataArray(char, AltCharacter, 0x174B015, 2);
DataPointer(char, HandicapSettingMaybe, 0x174B01F);
DataPointer(char, TwoPlayerTimed, 0x174B020);
DataArray(__int16, Life_Count, 0x174B024, 2);
DataArray(__int16, RingCount, 0x174B028, 2);
DataPointer(__int16, LastRingCount, 0x174B02C);
DataPointer(__int16, PerfectRings, 0x174B02E);
DataArray(__int16, BattleWinCount, 0x174B034, 2);
DataPointer(int, FrameCount, 0x174B038);
DataPointer(int, FrameCountIngame, 0x174B03C);
DataPointer(int, GameMode, 0x174B040);
DataPointer(int, NextGameMode, 0x174B044);
DataPointer(int, ScoreP1, 0x174B050);
DataPointer(int, LastScoreP1, 0x174B054);
DataPointer(int, TotalRings, 0x174B05C);
DataPointer(float, HorizontalResolution, 0x174BA64);
DataPointer(float, VerticalResolution, 0x174BA68);
DataPointer(UINT, uID, 0x174F570);
DataPointer(int, WindowActive, 0x174F5AC);
DataPointer(LPVOID, lpTlsValue, 0x1751B28);
DataPointer(HANDLE, hHeap, 0x1751FF4);
DataPointer(struct _TIME_ZONE_INFORMATION, TimeZoneInformation, 0x17521D0);
DataPointer(volatile LONG, Target, 0x1752390);
DataPointer(int, nPriority, 0x17523A0);
DataPointer(DWORD, ThreadId, 0x17523D8);
DataPointer(HANDLE, hThread, 0x17523EC);
DataPointer(struct _RTL_CRITICAL_SECTION, CriticalSection, 0x17694C8);
DataPointer(HWND, MainWindowHandle, 0x1933EA8);
DataPointer(int, IsFullscreen, 0x1933EAC);
DataPointer(char, PauseSelection, 0x1933EB1);
DataPointer(char, PauseOptionCount, 0x1933EB2);
DataPointer(char, IsNotPauseHide, 0x1934B06);
DataPointer(__int16, CurrentLevel, 0x1934B70);
DataPointer(int, CurrentCharacter, 0x1934B80);
DataPointer(__int16, LastLevel, 0x1934B84);
DataPointer(__int16, GameState, 0x1934BE0);
DataPointer(int, CurrentCharacter2P, 0x1934BE4);
DataPointer(__int16, NextLevel, 0x1934BEC);
DataPointer(int*, MenuButtons_RepeatTimer, 0x1934BF0);
DataPointer(char*, CurrentSongName, 0x1936268);
DataPointer(NJS_TEXLIST *, LastTexList, 0x1942070);
DataPointer(LevelHeader *, CurrentLevelHeader, 0x19420FC);
DataPointer(LandTable *, CurrentLandTable, 0x19459DC);
DataPointer(ObjectMaster *, LandManagerPtr, 0x1945A04);
DataPointer(DWORD, ChaoSaveStart, 0x19F6460);
DataPointer(int, ChaoGardensUnlocked, 0x19F646C);
DataArray(int, ChaoToysUnlocked, 0x19F6470, 3);
DataArray(char, ChaoFruitSlots, 0x19F6528, 480);
DataArray(char, ChaoSeedSlots, 0x19F6848, 240);
DataArray(char, ChaoHatSlots, 0x19F6938, 480);
DataArray(char, ChaoAnimalSlots, 0x19F6B18, 200);
DataPointer(ChaoData*, ChaoSlots, 0x19F6EC4);
DataPointer(int, ALO_EntranceLampManager_ptr, 0x1A2771C);
DataPointer(int, SomeObjectPointers_Index, 0x1A2835C);
DataPointer(ObjectMaster **, SomeObjectPointers, 0x1A28360);
DataPointer(int*, CharacterSelection, 0x1A3D8E0);
DataArray(int, character_whyaretheresomany, 0x1A3D8E8, 2);
DataPointer(int, Old2PBattleTimerThing, 0x1A4A910);
DataPointer(DWORD, dwMilliseconds, 0x1A51638);
DataPointer(int, SonicGravityAngle_Z, 0x1A51644);
DataPointer(int, SonicGravityAngle_X, 0x1A51960);
DataPointer(NJS_VECTOR, SonicGravity, 0x1A51A30);
DataPointer(Angle, KnucklesGravityAngle_Z, 0x1A51B78);
DataPointer(Angle, KnucklesGravityAngle_X, 0x1A51BB8);
DataPointer(NJS_VECTOR, KnucklesGravity, 0x1A51C4C);
DataArray(FogData, stg27_fog, 0x1A521F0, 33);
DataArray(PDS_PERIPHERAL, ControllersRaw, 0x1A52918, 4);
DataArray(PDS_PERIPHERALINFO, PeripheralInfo, 0x1A52A68, 4);
DataPointer(int, HaveBattleDLC, 0x1A556F4);
DataPointer(int, HaveBattleDLC2, 0x1A556F8);
DataPointer(int, CheatsEnabled, 0x1A55770);
DataPointer(int, Cheats_GiveMaxRings, 0x1A55774);
DataPointer(int, Cheats_GiveAllUpgrades, 0x1A55778);
DataPointer(int, Cheats_GiveMaxLives, 0x1A5577C);
DataPointer(int, P2Start, 0x1A557C4);
DataArray(ObjectMaster *, VibTasks, 0x1A5588C, 4);
DataPointer(__int16, Cheats_ExitStage, 0x1A558A4);
DataPointer(int, MenuButtons_SomethingWasPressed, 0x1A558C0);
DataPointer(__int16, IsDPadPressed, 0x1A5592C);
DataPointer(PDS_PERIPHERAL, NullController, 0x1A55954);
DataPointer(s_effect2 *, effect2, 0x1A559C4);
DataPointer(ObjectMaster *, CounterOfDestructedEnemy_ptr, 0x1A5A1F0);
DataPointer(ObjectMaster *, CardIndicatorExec_ptr, 0x1A5A220);
DataPointer(ObjectMaster *, DeathZoneObject_ptr, 0x1A5A24C);
DataPointer(DeathZone *, CurrentDeathZones, 0x1A5A250);
DataArray(ObjectMaster *, ObjectLists, 0x1A5A254, 8);
DataPointer(ObjectFuncPtr, CurrentObjectSub, 0x1A5A274);
DataPointer(void*, DropRingsFunc_ptr, 0x1A5A28C);
DataPointer(void*, ParticleFunc_ptr, 0x1A5A290);
DataPointer(void*, DisplayItemBoxItemFunc_ptr, 0x1A5A294);
DataPointer(void*, EmeraldPieceFunc_ptr, 0x1A5A298);
DataPointer(void*, EmeraldGetSignFunc_ptr, 0x1A5A29C);
DataPointer(void*, ExpManExecFunc_ptr, 0x1A5A2A0);
DataPointer(void*, ObjectSkullObjFunc_ptr, 0x1A5A2A4);
DataPointer(void*, WaterRippleFunc_ptr, 0x1A5A2A8);
DataPointer(void*, WeatherFunc_ptr, 0x1A5A2AC);
DataPointer(void*, ExecFunc_ptr, 0x1A5A2B0);
DataPointer(void*, SomethingFunc_ptr, 0x1A5A2B4);
DataPointer(void*, SomethingFuncB_ptr, 0x1A5A2B8);
DataPointer(void*, SomethingFuncC_ptr, 0x1A5A2C0);
DataPointer(int, LandTableSA2BModels, 0x1A5A2D8);
DataPointer(ObjectMaster *, SetObject_ptr, 0x1A5A340);
DataPointer(FogData **, FogDataPtrPtr, 0x1A5A34C);
DataPointer(ObjectMaster *, ParticleCoreTask, 0x1A5A3B8);
DataPointer(ObjectMaster *, Super_ManTex_ptr, 0x1A5A42C);
DataPointer(ObjectMaster **, ManGCylExecutor_ptr, 0x1A5A768);
DataPointer(ObjectMaster *, cameraCons_ptr, 0x1A5A77C);
DataPointer(ChaoSegmentData *, ChaoSegmentPtr, 0x1A5BE1C);
DataPointer(AL_GBAManagerExecutor_Data *, AL_GBAManagerExecutor_ptr, 0x1A5CB54);
DataPointer(ObjectMaster *, ALO_RadicaseExecutor_ptr, 0x1AED2E0);
DataPointer(int, CrappyReplacementDepartureMachine, 0x1AED320);
DataPointer(ObjectMaster *, ALO_BoxExecutor_ptr, 0x1AED32C);
DataPointer(int, LastMenu, 0x1AEE300);
DataArray(int, PlayerReady, 0x1AEE598, 2);
DataPointer(int, CharacterSelectTimer, 0x1AEE5B0);
DataPointer(ObjectMaster *, StageMapExecInstance, 0x1AEE758);
DataPointer(ObjectMaster *, RingModelExec_ptr, 0x1AEFD88);
DataPointer(int, ExpManExec_ptr, 0x1AEFDB0);
DataPointer(ObjectMaster **, itemBoxManager_ptrs, 0x1AEFE98);
DataPointer(ObjectMaster *, FogTaskExec_ptr, 0x1AEFEA0);
DataPointer(FogData *, FogDataPtr, 0x1AEFEA4);
DataPointer(ObjectMaster *, FogtaskManExec_ptr, 0x1AEFEB4);
DataPointer(ObjectMaster *, PauseHintExec_ptr, 0x1AEFF60);
DataPointer(ObjectMaster *, ChaoKeyTaskObj, 0x1AEFF64);
DataPointer(ObjectMaster *, PosBar2PMan_ptr, 0x1AF0148);
DataPointer(EmeManObj2 *, EmeraldManagerObj2, 0x1AF014C);
DataPointer(ObjectMaster *, ObjSetManExec_ptr, 0x1AF0208);
DataPointer(HMODULE **, datadllhandle, 0x1AF0220);
DataPointer(LaunchConfig *, MainUserConfig, 0x1AF19EC);
DataPointer(SOCControllerAll *, Global_SOCControllerAll, 0x1AF1A90);
DataPointer(MemManFuncs *, MemoryManager, 0x1D19CAC);
DataArray(char, CharacterToCostumeIndex, 0x1D1B8B0, 2);
DataPointer(char*, CharacterSelected, 0x1D1B8B2);
DataPointer(CharSelectThing*, CharSelectThings, 0x1D1B8C5);
DataArray(Uint8, character_copy_becauseweneedatleast7copiesofeveryvariable, 0x1D1B9E0, 2);
DataPointer(char, BattleSelection, 0x1D1B9F4);
DataPointer(MenuData*, MainMenu, 0x1D1BBC0);
DataPointer(char, SelectedMissionCharacter, 0x1D1BF05);
DataPointer(char, StageSelectLevelSelection, 0x1D1BF08);
DataArray(int, StageSelection2P, 0x1D1C060, 2);
DataArray(char, BattleOptions, 0x1D1C080, 4);
DataPointer(char, BattleOptionsSelection, 0x1D1C084);
DataPointer(char, BattleOptionsBack, 0x1D1C085);
DataPointer(int, BattleOptionsButton, 0x1D1C08C);
DataPointer(int, twoPVS_TexturesLoaded, 0x1D1C0CC);
DataPointer(char*, BattleWinCount_Copy, 0x1D1C114);
DataPointer(int, CurrentMenu, 0x1D7BB10);
DataPointer(int, CurrentSubMenu, 0x1D7BB14);
DataPointer(char*, SomeSFDStrings, 0x1DB0C00);
DataPointer(int, BlackMarketItemCount, 0x1DBED90);
DataPointer(BlackMarketItem*, BlackMarketInventory, 0x1DBEDC0);
DataArray(char, MemoryCard, 0x1DBEE00, 104);
DataPointer(ChaoData **, ChaoDataArray, 0x1DC0FC8);
DataPointer(ObjectMaster **, ChaoObjectArray, 0x1DC0FFC);
DataPointer(int, SplitscreenMode, 0x1DD946C);
DataArray(FogData, stg27_fogB, 0x1DDA160, 34);
DataPointer(LandTable, BasicLandTable, 0x1DDA3C0);
DataPointer(LandTable, ChunkLandTable, 0x1DDA3E0);
DataPointer(ObjectListHead *, CurrentObjectList, 0x1DDE268);
DataPointer(__int16, SETObjectCount, 0x1DDE270);
DataPointer(void *, SETFile, 0x1DDE274);
DataPointer(SETEntry *, SETEntries, 0x1DDE278);
DataArray(SETObjectData, SETObjects, 0x1DDE280, 1535);
DataArray(float, ProbablyFogTable, 0x1DE4280, 96);
DataPointer(void*, GetCurrentChaoStage_ptr, 0x1DE4698);
DataPointer(int, ArbitraryGravityAngle_X, 0x1DE9480);
DataPointer(NJS_VECTOR, ArbitraryGravity, 0x1DE9490);
DataPointer(Angle, GravityAngle_X, 0x1DE949C);
DataPointer(NJS_VECTOR, Gravity, 0x1DE94A0);
DataPointer(int, GravityAngle_Z, 0x1DE94AC);
DataPointer(int, ArbitraryGravityAngle_Z, 0x1DE94B0);
DataPointer(int, Pose2PStart_Frames_SkyRailMetalHarbor, 0x1DE95C0);
DataPointer(int, Pose2PStart_PlayerNum_dupe, 0x1DE95C4);
DataPointer(int, Pose2PStart_Frames, 0x1DE95C8);
DataPointer(CharObj2Base **, MainCharObj2, 0x1DE9600);
DataArray(ModelIndex, CharacterModels, 0x1DE9620, 532);
DataArray(EntityData1 *, MainCharObj1, 0x1DEA6C0, 2);
DataArray(ObjectMaster *, MainCharacter, 0x1DEA6E0, 2);
DataArray(AnimationIndex, CharacterAnimations, 0x1DEA700, 300);
DataPointer(char, SonicLightShoesGot, 0x1DEB300);
DataPointer(char, SonicAncientLightGot, 0x1DEB301);
DataPointer(char, SonicMagicGlovesGot, 0x1DEB302);
DataPointer(char, SonicFlameRingGot, 0x1DEB303);
DataPointer(char, SonicBounceBraceletGot, 0x1DEB304);
DataPointer(char, SonicMysticMelodyGot, 0x1DEB305);
DataPointer(char, TailsBoosterGot, 0x1DEB306);
DataPointer(char, TailsBazookaGot, 0x1DEB307);
DataPointer(char, TailsLaserBlasterGot, 0x1DEB308);
DataPointer(char, TailsMysticMelodyGot, 0x1DEB309);
DataPointer(char, KnucklesShovelClawGot, 0x1DEB30A);
DataPointer(char, KnucklesSunglassesGot, 0x1DEB30B);
DataPointer(char, KnucklesHammerGlovesGot, 0x1DEB30C);
DataPointer(char, KnucklesAirNecklaceGot, 0x1DEB30D);
DataPointer(char, KnucklesMysticMelodyGot, 0x1DEB30E);
DataPointer(char, ShadowAirShoesGot, 0x1DEB310);
DataPointer(char, ShadowAncientLightGot, 0x1DEB311);
DataPointer(char, ShadowFlameRingGot, 0x1DEB312);
DataPointer(char, ShadowMysticMelodyGot, 0x1DEB313);
DataPointer(char, EggmanJetEngineGot, 0x1DEB314);
DataPointer(char, EggmanLargeCannonGot, 0x1DEB315);
DataPointer(char, EggmanLaserBlasterGot, 0x1DEB316);
DataPointer(char, EggmanProtectiveArmorGot, 0x1DEB317);
DataPointer(char, EggmanMysticMelodyGot, 0x1DEB318);
DataPointer(char, RougePickNailsGot, 0x1DEB319);
DataPointer(char, RougeTreasureScopeGot, 0x1DEB31A);
DataPointer(char, RougeIronBootsGot, 0x1DEB31B);
DataPointer(__int16, RougeMysticMelodyGot, 0x1DEB31C);
DataPointer(int, FrameIncrement, 0x1DEB50C);
DataPointer(int*, SaveFile, 0x1DEC600);
DataPointer(char, TextLanguage_Save, 0x1DEC609);
DataPointer(unsigned __int8, EmblemCount, 0x1DEC60E);
DataPointer(char, RumbleEnabled_Save, 0x1DEC60F);
DataArray(__int16, Life_Count_Save, 0x1DEC61C, 2);
DataArray(__int16, BattleWinCount_Save, 0x1DEC620, 2);
DataPointer(int, TotalRings_Save, 0x1DEC630);
DataPointer(char*, SomeStoryUnlocksOrSomething, 0x1DEFA93);
DataArray(int, MenuButtons_Pressed, 0x1DEFAB0, 2);
DataPointer(AnalogThing*, UnusedAnalogThings, 0x1DEFAC0);
DataPointer(int*, MenuButtons_Held, 0x1DEFB10);
DataPointer(int*, PortValid, 0x1DEFB30);
DataPointer(int*, MenuButtons_Pressed_Old2, 0x1DEFB50);
DataArray(PDS_PERIPHERAL *, ControllerPointers, 0x1DEFB60, 4);
DataPointer(AnalogThing*, AnalogThings, 0x1DEFBA0);
DataPointer(int*, MenuButtons_Pressed_Old, 0x1DEFBE0);
DataArray(PDS_PERIPHERAL, Controllers, 0x1DEFC00, 4);
DataPointer(byte*, IsThings, 0x1DEFDA0);
DataPointer(int*, RumblePort_A, 0x1DEFDB0);
DataPointer(int, SomeBuffer, 0x1DEFE20);
DataPointer(int, Has_texlist_batadvPlayerChara_in_it, 0x2670544);
