#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	struct<4> Local_37[10];
	bool bLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	var uLocal_59 = 0;
	struct<2> Local_60 = { 0, 5 } ;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 5;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
#endregion

void __EntryFunction__()
{
	struct<42> Var0;
	vector3 vVar1;
	int iVar2[3];
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_42 = 1;
	iLocal_43 = 65;
	iLocal_44 = 49;
	iLocal_45 = 64;
	iLocal_49 = _0x4A9923385BDB9DAD();
	iLocal_50 = _GET_BLIP_INFO_ID_ITERATOR();
	iLocal_52 = func_293(56);
	iLocal_53 = func_293(57);
	iLocal_54 = func_293(59);
	iLocal_55 = joaat("pranger");
	iLocal_56 = -1;
	_0x6F2135B6129620C1(1);
	func_292();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	vVar1 = { 0f, 0f, 0f };
	func_291(&Var0);
	vVar1 = { ScriptParam_60.f_1[0 /*3*/] };
	iVar2[0] = 32;
	iVar2[1] = 33;
	iVar2[2] = 34;
	if (HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_290("Force cleanup [TERMINATING]");
		if (Var0 != -1)
		{
			if (Global_110647[Var0 /*10*/].f_9 != -1)
			{
				func_290("Relinquishing candidate id...");
				func_289(&(Global_110647[Var0 /*10*/].f_9));
			}
		}
		func_273(&Var0, 1);
	}
	if (!func_270(&iVar2, &Var0, vVar1, 1f))
	{
		func_269();
		func_290("SCRIPT TERMINATED");
		TERMINATE_THIS_THREAD();
	}
	if (!func_261(Var0))
	{
		func_269();
		func_290("SCRIPT TERMINATED");
		TERMINATE_THIS_THREAD();
	}
	if (func_260(Var0))
	{
		func_269();
		func_290("SCRIPT TERMINATED");
		TERMINATE_THIS_THREAD();
	}
	while (!func_246(&Var0))
	{
		wait(0);
		if (!IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			func_290("Player out of range [TERMINATING]");
			func_273(&Var0, 1);
		}
	}
	if (Var0 == 32)
	{
		SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(35f, 3409f, 322f) - Vector(20f, 20f, 20f), Vector(35f, 3409f, 322f) + Vector(20f, 20f, 20f), false, 1);
		REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Vector(35f, 3409f, 322f) - Vector(20f, 20f, 20f), Vector(35f, 3409f, 322f) + Vector(20f, 20f, 20f), 0);
		CLEAR_AREA(vVar1, 40f, 1, 0, 0, false);
	}
	else if (Var0 == 34)
	{
		iLocal_57 = func_245();
	}
	CLEAR_AREA(vVar1, Var0.f_15, 1, 0, 0, false);
	while (true)
	{
		wait(0);
		if (!func_210(&Var0, 1))
		{
			func_273(&Var0, 1);
		}
		if (Var0 == 32)
		{
			func_209();
			if (func_208(Var0.f_35[1]))
			{
				if (!func_207(329.513f, 3402.691f, 36.258f, GET_ENTITY_COORDS(Var0.f_35[1], true), 1056964608))
				{
					func_290("Player has moved SURFER2 vehicle [TERMINATING]");
					func_204(&Var0);
					func_273(&Var0, 1);
				}
			}
		}
		func_203(Var0);
		func_196(&iLocal_56, &(Var0.f_9), vVar1);
		if (Var0 == 32)
		{
			func_192(&Var0, vVar1, "MIN1AUD", "MIN1_AMB", 3, "JOE", 4, "JOSEF", &uLocal_59);
		}
		else if (Var0 == 34)
		{
			func_187(&Var0, vVar1, "MIN3AUD", "MIN3_AMB", 3, "MANUEL", 5000, 1101004800);
		}
		if (func_173(&Var0, 0))
		{
			if (func_172(Var0))
			{
				func_169(Var0, &iLocal_58);
			}
			if (!func_2(&Var0))
			{
				func_273(&Var0, 1);
			}
			if (func_1(&Var0))
			{
				func_273(&Var0, 0);
			}
		}
	}
}

int func_1(int iParam0)
{
	while (!Global_110647[*iParam0 /*10*/])
	{
		wait(0);
	}
	return 1;
}

int func_2(int iParam0)
{
	struct<4> Var0;
	char* sVar1;
	
	if (!func_168())
	{
		while (!func_159(*iParam0))
		{
			if (func_158(*iParam0))
			{
				func_147();
			}
			if (!func_210(iParam0, *iParam0 != 2))
			{
				func_290("LAUNCH_RC_MISSION - NOT IS_RC_FINE_AND_IN_RANGE() [TERMINATING]");
				return 0;
			}
			wait(0);
		}
	}
	if (func_146())
	{
		func_144();
	}
	if (!func_113(iParam0))
	{
		func_290("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
		return 0;
	}
	func_110(*iParam0, &Var0);
	MemCopy(&sVar1, {func_109(*iParam0)}, 4);
	func_107(&sVar1, Var0.f_3, 0);
	func_106(*iParam0);
	if (!func_168())
	{
		if (iParam0->f_16 == 2)
		{
			func_22(&(iParam0->f_1), 0);
		}
		else
		{
			func_22(&(iParam0->f_1), 1);
		}
	}
	func_3(*iParam0, Var0);
	return 1;
}

void func_3(int iParam0, char* sParam1)
{
	func_21(sParam1);
	CLEAR_BIT(&(Global_111560.f_18569[iParam0 /*6*/]), 5);
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher")) > 0)
	{
		while (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher")) > 0)
		{
			func_19();
			wait(0);
		}
	}
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher")) < 1)
	{
		Global_61472 = 0;
		REQUEST_SCRIPT("mission_stat_watcher");
		while (!HAS_SCRIPT_LOADED("mission_stat_watcher"))
		{
			wait(0);
		}
		start_new_script("mission_stat_watcher", 1828);
		SET_SCRIPT_AS_NO_LONGER_NEEDED("mission_stat_watcher");
	}
	while (!IS_BIT_SET(Global_111560.f_18569[iParam0 /*6*/], 5))
	{
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher")) > 0)
		{
			SET_BIT(&(Global_111560.f_18569[iParam0 /*6*/]), 5);
		}
	}
	func_4(iParam0);
}

void func_4(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_61469 == 1)
	{
		func_18();
		Global_61469 = 0;
		if (Global_61464)
		{
			return;
		}
	}
	if (Global_3)
	{
		Global_61472 = 1;
		func_10();
		return;
	}
	MemCopy(&Global_61486, {func_9(iParam0)}, 4);
	Global_61474 = 0;
	Global_61473 = 0;
	switch (iParam0)
	{
		case 1:
		case 9:
			Global_61461 = 1;
			Global_61464 = 1;
			Global_61467 = 1;
			break;
		
		case 0:
		case 4:
		case 7:
		case 10:
		case 11:
		case 13:
		case 15:
		case 27:
		case 31:
		case 35:
		case 36:
		case 37:
		case 48:
		case 44:
		case 45:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			Global_61472 = 1;
			Global_61473 = 1;
			func_10();
			func_19();
			return;
			break;
	}
	iVar0 = Global_73716;
	Global_73716 = 1;
	iVar1 = Global_73717;
	Global_73717 = iParam0;
	if (!Global_61461)
	{
		if ((Global_73717 != iVar1 || Global_73566 == 0) || iVar0 != Global_73716)
		{
			Global_30986 = 0;
			func_10();
			func_6(iParam0);
		}
		else
		{
			Global_61464 = 1;
		}
	}
	Global_61499 = GET_GAME_TIMER();
	func_5();
	Global_61471 = 0;
}

void func_5()
{
	int iVar0;
	
	if (!Global_61468)
	{
		return;
	}
	if (Global_73566 == 0)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_73566)
	{
		switch (Global_61696[Global_73567[iVar0 /*9*/] /*13*/])
		{
			case 1:
			case 9:
				Global_73567[iVar0 /*9*/].f_3 = 1;
				break;
			
			case 4:
				if (Global_61479)
				{
					Global_73567[iVar0 /*9*/].f_3 = 1;
				}
				break;
			
			case 6:
				if (Global_61696[Global_73567[iVar0 /*9*/] /*13*/].f_3)
				{
					if (Global_73567[iVar0 /*9*/].f_1 != 0)
					{
						Global_73567[iVar0 /*9*/].f_3 = 1;
					}
				}
				break;
		}
		iVar0++;
	}
	Global_61468 = 0;
}

void func_6(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			func_7(741);
			func_7(742);
			return;
		
		case 3:
			func_7(743);
			func_7(744);
			return;
		
		case 5:
			func_7(745);
			func_7(746);
			return;
		
		case 6:
			func_7(747);
			func_7(748);
			return;
		
		case 8:
			func_7(749);
			return;
		
		case 12:
			func_7(750);
			return;
		
		case 14:
			func_7(751);
			func_7(752);
			return;
		
		case 16:
			func_7(753);
			func_7(754);
			return;
		
		case 17:
			func_7(755);
			func_7(756);
			func_7(757);
			return;
		
		case 18:
			func_7(758);
			func_7(759);
			return;
		
		case 19:
			func_7(760);
			func_7(761);
			return;
		
		case 20:
			func_7(762);
			return;
		
		case 21:
			func_7(763);
			return;
		
		case 22:
			func_7(764);
			func_7(765);
			return;
		
		case 23:
			func_7(766);
			return;
		
		case 25:
			func_7(767);
			func_7(768);
			func_7(769);
			return;
		
		case 26:
			func_7(770);
			func_7(771);
			return;
		
		case 28:
			func_7(772);
			func_7(773);
			return;
		
		case 29:
			func_7(774);
			func_7(775);
			return;
		
		case 30:
			func_7(776);
			func_7(777);
			return;
		
		case 32:
			func_7(778);
			func_7(779);
			return;
		
		case 33:
			func_7(780);
			func_7(781);
			func_7(782);
			return;
		
		case 34:
			func_7(783);
			func_7(784);
			return;
		
		case 38:
			func_7(785);
			func_7(786);
			return;
		
		case 39:
			func_7(787);
			func_7(788);
			return;
		
		case 40:
			func_7(789);
			return;
		
		case 41:
			func_7(790);
			func_7(791);
			func_7(792);
			return;
		
		case 42:
			func_7(793);
			func_7(794);
			func_7(795);
			return;
		
		case 43:
			func_7(796);
			func_7(797);
			return;
		
		case 46:
			func_7(798);
			func_7(799);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 47:
			func_7(800);
			func_7(801);
			return;
		
		case 49:
			func_7(802);
			func_7(803);
			return;
		
		case 50:
			func_7(804);
			func_7(805);
			return;
		
		case 51:
			func_7(806);
			return;
		
		case 57:
			func_7(807);
			func_7(808);
			func_7(809);
			return;
		
		case 58:
			func_7(828);
			func_7(829);
			func_7(830);
			return;
		
		case 59:
			func_7(831);
			func_7(832);
			func_7(833);
			return;
		
		case 60:
			func_7(834);
			func_7(835);
			func_7(836);
			return;
		
		case 61:
			func_7(837);
			func_7(838);
			func_7(839);
			return;
		
		case 62:
			func_7(840);
			func_7(841);
			func_7(842);
			return;
		
		case 24:
			func_7(843);
			func_7(844);
			func_7(845);
			return;
		
		default:
	}
}

void func_7(int iParam0)
{
	Global_61464 = 1;
	Global_61467 = 1;
	if (Global_73566 > 15)
	{
		return;
	}
	func_8(Global_73566);
	Global_73567[Global_73566 /*9*/] = iParam0;
	Global_73566++;
	if (Global_61696[iParam0 /*13*/] == 16)
	{
		Global_73718 = 1;
	}
}

void func_8(int iParam0)
{
	Global_73567[iParam0 /*9*/].f_1 = 0;
	Global_73567[iParam0 /*9*/].f_2 = 0f;
	Global_73567[iParam0 /*9*/].f_3 = 0;
	Global_73567[iParam0 /*9*/].f_4 = 0;
}

struct<2> func_9(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_109(iParam0) };
	if (IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

void func_10()
{
	if (Global_61471)
	{
		return;
	}
	Global_61480 = 0;
	Global_73566 = 0;
	Global_61482 = 0;
	if (Global_61479)
	{
	}
	Global_61479 = 0;
	func_17(0);
	func_16();
	Global_73718 = 0;
	Global_61470 = 1;
	func_14();
	func_13();
	func_12();
	func_11();
	Global_61461 = 0;
	Global_61491 = 0;
	Global_61499 = -1;
}

void func_11()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_73753[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_73762 = 0;
}

void func_12()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_73719[iVar0 /*2*/] = 0;
		Global_73719[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_73752 = 0;
}

void func_13()
{
	Global_61630 = 0;
}

void func_14()
{
	Global_61490 = 0;
	Global_61494 = func_15(joaat("sp0_shots"));
	Global_61493 = func_15(joaat("sp0_hits"));
	Global_61496 = func_15(joaat("sp1_shots"));
	Global_61495 = func_15(joaat("sp1_hits"));
	Global_61498 = func_15(joaat("sp2_shots"));
	Global_61497 = func_15(joaat("sp2_hits"));
}

var func_15(int iParam0)
{
	var uVar0;
	
	STAT_GET_INT(iParam0, &uVar0, -1);
	return uVar0;
}

void func_16()
{
	int iVar0;
	
	Global_61500 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_61501[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

void func_17(int iParam0)
{
	Global_76837 = iParam0;
	Global_76838 = iParam0;
}

void func_18()
{
	int iVar0;
	
	Global_61469 = 1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_73566)
	{
		Global_73567[iVar0 /*9*/].f_3 = 2;
		iVar0++;
	}
	if (Global_61479)
	{
	}
	Global_61479 = 0;
}

void func_19()
{
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher")) > 0)
	{
		if (func_20())
		{
			if (Global_61466 && !Global_61465)
			{
				Global_61466 = 0;
				TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("mission_stat_watcher");
			}
		}
		else
		{
			TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("mission_stat_watcher");
		}
	}
}

int func_20()
{
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher")) < 1)
	{
		return 0;
	}
	if (!Global_61464)
	{
		return 0;
	}
	return Global_61476;
}

void func_21(char* sParam0)
{
	if (ARE_STRINGS_EQUAL(sParam0, sParam0))
	{
	}
}

void func_22(char[4] cParam0, int iParam1)
{
	CLEAR_BIT(&(Global_98669.f_20), 17);
	func_23(cParam0, iParam1, 0);
}

void func_23(char[4] cParam0, int iParam1, int iParam2)
{
	if (Global_98669 != 10 && Global_98669 != 9)
	{
		StringCopy(&Global_102117, cParam0, 32);
		func_25(&Global_102125, cParam0, 0, "Start", iParam1, iParam2);
		func_24();
		Global_92877 = 0;
	}
}

void func_24()
{
	int iVar0;
	int iVar1;
	
	Global_105109 = Global_102125;
	Global_105109.f_1 = Global_102125.f_1;
	Global_105109.f_6 = Global_102125.f_6;
	Global_105109.f_7 = Global_102125.f_7;
	Global_105109.f_8 = Global_102125.f_8;
	Global_105109.f_2 = Global_102125.f_2;
	Global_105109.f_3 = Global_102125.f_3;
	Global_105109.f_4 = Global_102125.f_4;
	Global_105109.f_5 = Global_102125.f_5;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Global_105109.f_9[iVar1] = Global_102125.f_9[iVar1];
		Global_105109.f_13[iVar1] = Global_102125.f_13[iVar1];
		Global_105109.f_17[iVar1] = Global_102125.f_17[iVar1];
		Global_105109.f_21[iVar1] = Global_102125.f_21[iVar1];
		Global_105109.f_25[0 /*295*/][iVar1 /*98*/] = { Global_102125.f_25[0 /*295*/][iVar1 /*98*/] };
		Global_105109.f_25[1 /*295*/][iVar1 /*98*/] = { Global_102125.f_25[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 < 12)
		{
			Global_105109.f_616[iVar1 /*65*/][iVar0] = Global_102125.f_616[iVar1 /*65*/][iVar0];
			Global_105109.f_616[iVar1 /*65*/].f_13[iVar0] = Global_102125.f_616[iVar1 /*65*/].f_13[iVar0];
			Global_105109.f_616[iVar1 /*65*/].f_26[iVar0] = Global_102125.f_616[iVar1 /*65*/].f_26[iVar0];
			iVar0++;
		}
		Global_105109.f_616[iVar1 /*65*/].f_59 = Global_102125.f_616[iVar1 /*65*/].f_59;
		Global_105109.f_616[iVar1 /*65*/].f_60 = Global_102125.f_616[iVar1 /*65*/].f_60;
		Global_105109.f_616[iVar1 /*65*/].f_61 = Global_102125.f_616[iVar1 /*65*/].f_61;
		Global_105109.f_616[iVar1 /*65*/].f_62 = Global_102125.f_616[iVar1 /*65*/].f_62;
		Global_105109.f_616[iVar1 /*65*/].f_63 = Global_102125.f_616[iVar1 /*65*/].f_63;
		Global_105109.f_616[iVar1 /*65*/].f_64 = Global_102125.f_616[iVar1 /*65*/].f_64;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Global_105109.f_616[iVar1 /*65*/].f_39[iVar0] = Global_102125.f_616[iVar1 /*65*/].f_39[iVar0];
			Global_105109.f_616[iVar1 /*65*/].f_49[iVar0] = Global_102125.f_616[iVar1 /*65*/].f_49[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			Global_105109.f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_102125.f_812[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			Global_105109.f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_102125.f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			Global_105109.f_2244[iVar1 /*32*/][iVar0] = Global_102125.f_2244[iVar1 /*32*/][iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_105109.f_2244[iVar1 /*32*/].f_5[iVar0] = Global_102125.f_2244[iVar1 /*32*/].f_5[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			Global_105109.f_2244[iVar1 /*32*/].f_16[iVar0] = Global_102125.f_2244[iVar1 /*32*/].f_16[iVar0];
			iVar0++;
		}
		Global_105109.f_2341[iVar1] = Global_102125.f_2341[iVar1];
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_105109.f_2838[iVar1 /*15*/][iVar0] = Global_102125.f_2838[iVar1 /*15*/][iVar0];
			Global_105109.f_2838[iVar1 /*15*/].f_5[iVar0] = Global_102125.f_2838[iVar1 /*15*/].f_5[iVar0];
			Global_105109.f_2838[iVar1 /*15*/].f_10[iVar0] = Global_102125.f_2838[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			Global_105109.f_2345[iVar1 /*164*/][iVar0] = Global_102125.f_2345[iVar1 /*164*/][iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_4[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_4[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_8[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_8[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_12[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_12[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_16[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_16[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_20[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_20[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_24[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_24[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_28[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_28[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_32[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_32[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_36[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_36[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_40[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_40[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_44[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_44[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_48[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_48[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_52[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_52[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_56[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_56[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_60[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_60[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_64[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_64[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_68[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_68[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_72[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_72[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_76[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_76[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_80[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_80[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_84[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_84[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_88[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_88[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_92[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_92[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_96[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_96[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_100[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_100[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_104[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_104[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_108[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_108[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_112[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_112[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_116[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_116[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_120[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_120[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_124[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_124[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_128[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_128[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_132[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_132[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_136[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_136[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_140[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_140[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_144[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_144[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_148[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_148[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_152[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_152[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_156[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_156[iVar0];
			Global_105109.f_2345[iVar1 /*164*/].f_160[iVar0] = Global_102125.f_2345[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	Global_105109.f_2884 = { Global_102125.f_2884 };
	Global_105109.f_2884.f_3 = Global_102125.f_2884.f_3;
	Global_105109.f_2890 = { Global_102125.f_2890 };
	Global_105109.f_2890.f_3 = { Global_102125.f_2890.f_3 };
	Global_105109.f_2890.f_6 = Global_102125.f_2890.f_6;
	Global_105109.f_2890.f_8 = Global_105109.f_2890.f_8;
	Global_105109.f_2890.f_7 = Global_102125.f_2890.f_7;
	Global_105109.f_2890.f_9 = Global_102125.f_2890.f_9;
	Global_105109.f_2890.f_11 = Global_102125.f_2890.f_11;
	Global_105109.f_2890.f_10 = Global_102125.f_2890.f_10;
	Global_105109.f_2890.f_12 = Global_102125.f_2890.f_12;
	Global_105109.f_2890.f_12.f_1 = { Global_102125.f_2890.f_12.f_1 };
	Global_105109.f_2890.f_12.f_5 = Global_102125.f_2890.f_12.f_5;
	Global_105109.f_2890.f_12.f_6 = Global_102125.f_2890.f_12.f_6;
	Global_105109.f_2890.f_12.f_7 = Global_102125.f_2890.f_12.f_7;
	Global_105109.f_2890.f_12.f_8 = Global_102125.f_2890.f_12.f_8;
	Global_105109.f_2890.f_12.f_9 = { Global_102125.f_2890.f_12.f_9 };
	Global_105109.f_2890.f_12.f_59 = { Global_102125.f_2890.f_12.f_59 };
	Global_105109.f_2890.f_12.f_62 = Global_102125.f_2890.f_12.f_62;
	Global_105109.f_2890.f_12.f_63 = Global_102125.f_2890.f_12.f_63;
	Global_105109.f_2890.f_12.f_64 = Global_102125.f_2890.f_12.f_64;
	Global_105109.f_2890.f_12.f_65 = Global_102125.f_2890.f_12.f_65;
	Global_105109.f_2890.f_12.f_77 = Global_102125.f_2890.f_12.f_77;
	Global_105109.f_2890.f_12.f_66 = Global_102125.f_2890.f_12.f_66;
	Global_105109.f_2890.f_12.f_67 = Global_102125.f_2890.f_12.f_67;
	Global_105109.f_2890.f_12.f_68 = Global_102125.f_2890.f_12.f_68;
	Global_105109.f_2890.f_12.f_69 = Global_102125.f_2890.f_12.f_69;
	Global_105109.f_2890.f_12.f_71 = Global_102125.f_2890.f_12.f_71;
	Global_105109.f_2890.f_12.f_72 = Global_102125.f_2890.f_12.f_72;
	Global_105109.f_2890.f_12.f_73 = Global_102125.f_2890.f_12.f_73;
	Global_105109.f_2890.f_12.f_74 = Global_102125.f_2890.f_12.f_74;
	Global_105109.f_2890.f_12.f_75 = Global_102125.f_2890.f_12.f_75;
	Global_105109.f_2890.f_12.f_76 = Global_102125.f_2890.f_12.f_76;
	Global_105109.f_2980 = Global_102125.f_2980;
	Global_105109.f_2980.f_1 = Global_102125.f_2980.f_1;
	Global_105109.f_2980.f_2 = Global_102125.f_2980.f_2;
	Global_105109.f_2980.f_3 = Global_102125.f_2980.f_3;
}

void func_25(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_105();
	uParam0->f_1 = func_94();
	_GET_WEATHER_TYPE_TRANSITION(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!IS_PED_INJURED(IS_PED_INJURED()))
	{
		func_66(&(uParam0->f_2884), 0);
		func_65(PLAYER_PED_ID());
		func_58(PLAYER_PED_ID(), 0);
		GET_CURRENT_PED_WEAPON(GET_CURRENT_PED_WEAPON(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_111560.f_2358.f_539.f_294[iVar1];
		if (iVar1 == func_55())
		{
			func_48(PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_98394[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_98394[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_98394[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_98394[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_98394[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_98394[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_98394[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_98394[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_98394[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_98394[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_111560.f_2358.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_111560.f_2358.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				STAT_GET_INT(joaat("sp0_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STAT_GET_INT(joaat("sp0_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STAT_GET_INT(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STAT_GET_INT(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STAT_GET_INT(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STAT_GET_INT(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STAT_GET_INT(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STAT_GET_INT(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STAT_GET_INT(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STAT_GET_INT(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STAT_GET_INT(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STAT_GET_INT(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STAT_GET_INT(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STAT_GET_INT(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STAT_GET_INT(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STAT_GET_INT(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STAT_GET_INT(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STAT_GET_INT(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STAT_GET_INT(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				STAT_GET_INT(joaat("sp1_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STAT_GET_INT(joaat("sp1_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STAT_GET_INT(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STAT_GET_INT(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STAT_GET_INT(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STAT_GET_INT(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STAT_GET_INT(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STAT_GET_INT(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STAT_GET_INT(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STAT_GET_INT(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STAT_GET_INT(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STAT_GET_INT(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STAT_GET_INT(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STAT_GET_INT(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STAT_GET_INT(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STAT_GET_INT(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STAT_GET_INT(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STAT_GET_INT(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STAT_GET_INT(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				STAT_GET_INT(joaat("sp2_weap_purch_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STAT_GET_INT(joaat("sp2_weap_purch_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STAT_GET_INT(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STAT_GET_INT(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STAT_GET_INT(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STAT_GET_INT(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STAT_GET_INT(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STAT_GET_INT(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STAT_GET_INT(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STAT_GET_INT(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STAT_GET_INT(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STAT_GET_INT(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STAT_GET_INT(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STAT_GET_INT(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STAT_GET_INT(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STAT_GET_INT(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STAT_GET_INT(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STAT_GET_INT(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STAT_GET_INT(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_111560.f_20559.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_58645[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_111560.f_2358.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_111560.f_2358.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_111560.f_2358.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_111560.f_2358.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_111560.f_2358.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_111560.f_2358[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_111560.f_2358[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	STAT_GET_INT(joaat("sp0_special_ability"), &(uParam0->f_2341[0]), -1);
	STAT_GET_INT(joaat("sp1_special_ability"), &(uParam0->f_2341[1]), -1);
	STAT_GET_INT(joaat("sp2_special_ability"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_27(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	func_26(&(uParam0->f_2980));
	sParam3 = sParam3;
	iParam2 = iParam2;
}

int func_26(var uParam0)
{
	*uParam0 = Global_94548;
	uParam0->f_1 = Global_94549;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_27(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = PLAYER_PED_ID();
	}
	if (DOES_ENTITY_EXIST(iParam2))
	{
		uParam1->f_5 = func_45(iParam2);
	}
	if (func_42(iParam2, &iVar0, iParam3, iParam5))
	{
		func_28(uParam0, uParam1, iVar0, iParam4);
	}
	else if (DOES_ENTITY_EXIST(iVar0))
	{
		if (!IS_ENTITY_DEAD(iVar0, 0))
		{
			if (IS_VEHICLE_MODEL(iVar0, joaat("skylift")) && IS_VEHICLE_MODEL(IS_VEHICLE_MODEL(), iVar0, 0))
			{
				func_28(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_28(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (IS_VEHICLE_DRIVEABLE(iParam2, 0))
	{
		func_30(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_29(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_29(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_98669.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_30(var uParam0, int iParam1, int iParam2)
{
	func_37(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_33(iParam1, 145, 0);
	uParam0->f_11 = func_32(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_31(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { GET_ENTITY_COORDS(iParam1, true) };
		uParam0->f_6 = GET_ENTITY_HEADING(iParam1);
		uParam0->f_3 = { GET_ENTITY_VELOCITY(iParam1) };
		if (IS_ENTITY_IN_ANGLED_AREA(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_76301 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_31(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (DOES_ENTITY_EXIST(Global_75396.f_484[iVar0]))
		{
			if (iParam0 == Global_75396.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_32(int iParam0)
{
	int iVar0;
	
	if (!DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (DOES_ENTITY_EXIST(Global_96030[iVar0]))
		{
			if (Global_96030[iVar0] == iParam0)
			{
				return Global_96040[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_33(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (DOES_ENTITY_EXIST(Global_96030[iVar0]))
		{
			if (Global_96030[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_96040[iVar0])
				{
					if (iParam2 == 0 || GET_ENTITY_MODEL(iParam0) == func_34(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_34(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_36(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_35(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_35(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_111560.f_9080.f_99.f_58[128] && !Global_111560.f_9080.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_111560.f_9080.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_111560.f_9080.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_36(int iParam0)
{
	return iParam0 < 3;
}

void func_37(int iParam0, var uParam1)
{
	int iVar0;
	
	if (IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_41(uParam1);
		uParam1->f_66 = GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_67 = GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_69 = GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_70 = GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			SET_BIT(&(uParam1->f_77), 28);
		}
		if (_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			SET_BIT(&(uParam1->f_77), 29);
		}
		if (_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			SET_BIT(&(uParam1->f_77), 30);
		}
		if (_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_40(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			uParam1->f_68 = GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (_VEHICLE_HAS_LANDING_GEAR(iParam0))
			{
				switch (GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						CLEAR_BIT(&(uParam1->f_77), 23);
						SET_BIT(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						CLEAR_BIT(&(uParam1->f_77), 23);
						CLEAR_BIT(&(uParam1->f_77), 22);
						break;
					
					case 5:
						SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				SET_BIT(&(uParam1->f_77), 23);
			}
		}
		if (!GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			SET_BIT(&(uParam1->f_77), 9);
		}
		if (IS_VEHICLE_STOLEN(iParam0))
		{
			SET_BIT(&(uParam1->f_77), 10);
		}
		if (GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			SET_BIT(&(uParam1->f_77), 13);
			GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			SET_BIT(&(uParam1->f_77), 12);
		}
		func_39(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				SET_BIT(&(uParam1->f_77), func_38(iVar0 + 1));
			}
			iVar0++;
		}
		if (_DOES_VEHICLE_HAVE_DECAL(iParam0, 0))
		{
			SET_BIT(&(uParam1->f_77), 11);
		}
		else
		{
			CLEAR_BIT(&(uParam1->f_77), 11);
		}
		if (DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave"))
		{
			SET_BIT(&(uParam1->f_77), 27);
		}
		else
		{
			CLEAR_BIT(&(uParam1->f_77), 27);
		}
	}
}

int func_38(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_39(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		return 0;
	}
	if (GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				switch (0x3DFF319A831E0CDB(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case -998177792:
			return 1;
		
		default:
	}
	return 0;
}

void func_41(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_42(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (DOES_ENTITY_EXIST(iParam0))
	{
		if (!IS_PED_INJURED(iParam0))
		{
			if (iParam0 == PLAYER_PED_ID())
			{
				*uParam1 = GET_PLAYERS_LAST_VEHICLE();
			}
			else
			{
				*uParam1 = GET_VEHICLE_PED_IS_IN(iParam0, 1);
			}
			if (DOES_ENTITY_EXIST(*uParam1))
			{
				if (IS_VEHICLE_DRIVEABLE(*uParam1, 0))
				{
					if (iParam2 == 0 || GET_DISTANCE_BETWEEN_COORDS(GET_DISTANCE_BETWEEN_COORDS(*uParam1, true), GET_DISTANCE_BETWEEN_COORDS(iParam0, true), true) < 100f)
					{
						if (IS_VEHICLE_MODEL(*uParam1, joaat("taxi")))
						{
							if (GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, 0) != iParam0 && GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_43(*uParam1, func_105(), 1))
						{
							sVar0 = GET_THIS_SCRIPT_NAME();
							if (!ARE_STRINGS_EQUAL(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!IS_PED_IN_ANY_VEHICLE(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (DECOR_EXIST_ON(*uParam1, "IgnoredByQuickSave"))
							{
								if (DECOR_GET_BOOL(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (IS_VEHICLE_MODEL(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_43(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!DOES_ENTITY_EXIST(iParam0) || !DOES_ENTITY_EXIST(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_44(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || IS_BIT_SET(Global_111560.f_7224[iVar2], 0))
		{
			if (IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_44(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_45(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_46(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_46(int iParam0)
{
	if (func_36(iParam0))
	{
		return func_47(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_47(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_48(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!IS_PED_INJURED(iParam0))
	{
		iVar0 = func_45(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_54(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_53(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_36(iVar0))
		{
			uParam1->f_59 = Global_111560.f_2358.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_111560.f_2358.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_111560.f_2358.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_111560.f_2358.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_111560.f_2358.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_111560.f_2358.f_539[iVar0 /*65*/].f_64;
		}
		else if (NETWORK_IS_GAME_IN_PROGRESS() && NETWORK_IS_GAME_IN_PROGRESS(iParam0) == NETWORK_IS_GAME_IN_PROGRESS(NETWORK_IS_GAME_IN_PROGRESS()))
		{
			if (func_52(161, iParam3))
			{
				uParam1->f_59 = func_49(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_49(752, iParam3, 0);
			}
			uParam1->f_60 = func_49(753, iParam3, 0);
			uParam1->f_61 = func_49(754, iParam3, 0);
		}
		if (NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (func_52(161, iParam3))
			{
				uParam1->f_59 = func_49(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_49(752, iParam3, 0);
			}
		}
	}
}

int func_49(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_50(iParam1)];
	if (STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_50(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_51();
		if (iVar1 > -1)
		{
			Global_2542240 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2542240 = 1;
		}
	}
	return iVar0;
}

int func_51()
{
	return Global_1312745;
}

int func_52(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2576213[iParam0 /*3*/][func_50(iParam1)];
	if (STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_53(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_45(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = GET_PED_PROP_INDEX(iParam0, iParam1);
		*uParam3 = GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (IS_PED_WEARING_HELMET(iParam0) && IS_PED_WEARING_HELMET(iParam0) != -1)
				{
					*uParam2 = _0x451294E859ECC018(iParam0);
					*uParam3 = _0x9D728C1E12BF5518(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_54(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_45(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = GET_PED_DRAWABLE_VARIATION(iParam0, iParam1);
		*uParam3 = GET_PED_TEXTURE_VARIATION(iParam0, iParam1);
		*uParam4 = GET_PED_PALETTE_VARIATION(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_55()
{
	func_56();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_56()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()))
	{
		if (func_46(Global_111560.f_2358.f_539.f_4321) != GET_ENTITY_MODEL(GET_ENTITY_MODEL()))
		{
			iVar0 = func_45(PLAYER_PED_ID());
			if (func_36(iVar0) && (!func_57(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_36(Global_111560.f_2358.f_539.f_4321))
				{
					Global_111560.f_2358.f_539.f_4322 = Global_111560.f_2358.f_539.f_4321;
				}
				Global_111560.f_2358.f_539.f_4323 = iVar0;
				Global_111560.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111560.f_2358.f_539.f_4321 != 145)
			{
				Global_111560.f_2358.f_539.f_4323 = Global_111560.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111560.f_2358.f_539.f_4321 = 145;
}

bool func_57(int iParam0)
{
	return Global_41396 == iParam0;
}

void func_58(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_45(iParam0);
	if (func_36(iVar0) && !IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER_PED_ID())
		{
			func_59(iParam0, &(Global_111560.f_2358.f_539.f_298[iVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_111560.f_2358.f_539.f_1730[iVar2 /*4*/][iVar0] = _0xA13E93403F26C812(iVar2);
				if (bParam1)
				{
					iVar1 = _0xA48931185F0536FE();
					if (Global_111560.f_2358.f_539.f_1730[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_111560.f_2358.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(), &iVar3);
			if (iVar0 == 0)
			{
				STAT_SET_INT(joaat("sp0_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 1)
			{
				STAT_SET_INT(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				STAT_SET_INT(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

void func_59(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	int iVar10;
	
	if (!IS_PED_INJURED(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_64(iVar0);
			if (iVar3 != 0)
			{
				Var4 = GET_PED_WEAPONTYPE_IN_SLOT(iParam0, func_64(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4 != 0 && Var4 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = GET_AMMO_IN_PED_WEAPON(iParam0, Var4);
					if (Var4 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = GET_PED_WEAPON_TINT_INDEX(iParam0, Var4);
					Var4.f_4 = 0xA2C9AC24B4061285(iParam0, Var4);
					if (Var4.f_1 == -1)
					{
						if (!GET_MAX_AMMO(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_62(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4, iVar2))
						{
							SET_BIT(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_62(Var4, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar6 = GET_NUM_DLC_WEAPONS();
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if ((GET_DLC_WEAPON_DATA(iVar5, &Var7) && !func_61(Var7.f_1)) && iVar9 < 51)
			{
				if (!_IS_DLC_DATA_EMPTY(Var7))
				{
					Var4 = Var7.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = GET_AMMO_IN_PED_WEAPON(iParam0, Var4);
					if (HAS_PED_GOT_WEAPON(iParam0, Var4, 0))
					{
						Var4.f_3 = GET_PED_WEAPON_TINT_INDEX(iParam0, Var4);
						Var4.f_4 = 0xA2C9AC24B4061285(iParam0, Var4);
					}
					if (Var4.f_1 == -1)
					{
						if (!GET_MAX_AMMO(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar9 /*5*/].f_1 = Var4.f_1;
					iVar10 = 0;
					iVar1 = 0;
					while (iVar1 < GET_NUM_DLC_WEAPON_COMPONENTS(iVar5))
					{
						if (GET_DLC_WEAPON_COMPONENT_DATA(iVar5, iVar1, &Var8))
						{
							if (!func_60(Var8.f_3))
							{
								if (HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4, Var8.f_3))
								{
									SET_BIT(&(Var4.f_2), iVar10);
								}
								iVar10++;
							}
						}
						iVar1++;
					}
				}
				if (Var4 != 0)
				{
					if (!HAS_PED_GOT_WEAPON(iParam0, Var4, 0))
					{
						Var4 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar9 /*5*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

int func_60(int iParam0)
{
	switch (iParam0)
	{
		case -1258515792:
		case 438243936:
		case -455079056:
		case 740920107:
		case -541616347:
		case 1809261196:
		case -1646538868:
		case -1290164948:
		case -964465134:
		case 1135718771:
		case 1253942266:
		case -403805974:
		case 691432737:
		case 987648331:
		case -431680535:
		case -847582310:
		case -92592218:
		case -494548326:
		case 730876697:
		case 583159708:
		case -1928503603:
		case 520557834:
			return 1;
			break;
	}
	return 0;
}

int func_61(int iParam0)
{
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case -947031628:
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case 317205821:
			case -1121678507:
			case 125959754:
			case -853065399:
			case -1169823560:
			case -1810795771:
			case 419712736:
			case -1746263880:
			case 1198256469:
			case -1238556825:
			case -1355376991:
			case -1853920116:
			case 727643628:
				return 1;
				break;
			}
	}
	return 0;
}

int func_62(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var5;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case -1121678507:
			switch (iParam1)
			{
				case 0:
					iVar0 = -2067221805;
					break;
				
				case 1:
					iVar0 = -1820405577;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_63(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < GET_NUM_DLC_WEAPON_COMPONENTS(iVar1))
					{
						if (GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var5))
						{
							if (!func_60(Var5.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_63(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = GET_NUM_DLC_WEAPONS();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (GET_DLC_WEAPON_DATA(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_64(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_65(int iParam0)
{
	int iVar0;
	
	iVar0 = func_45(iParam0);
	if (func_36(iVar0) && !IS_PED_INJURED(iParam0))
	{
		Global_111560.f_2358.f_539.f_294[iVar0] = GET_PED_ARMOUR(iParam0);
	}
}

void func_66(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	
	*uParam0 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true) };
	uParam0->f_3 = GET_ENTITY_HEADING(GET_ENTITY_HEADING());
	uParam0->f_5 = GET_PED_PARACHUTE_STATE(GET_PED_PARACHUTE_STATE());
	if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
	{
		uParam0->f_4 = GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL());
	}
	if (vdist(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (vdist(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (vdist(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (IS_BIT_SET(Global_76825, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (IS_BIT_SET(Global_76825, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (IS_BIT_SET(Global_76825, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (IS_BIT_SET(Global_76825, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (GET_INTERIOR_FROM_ENTITY(GET_INTERIOR_FROM_ENTITY()) == GET_INTERIOR_FROM_ENTITY(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, true, 0) || IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, true, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (vdist(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (vdist(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (vdist(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_70(&iVar0))
		{
			if (func_68(iVar0, &vVar1, &uVar2))
			{
				vVar1.z = (vVar1.z + 1f);
				*uParam0 = { vVar1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0))
		{
			iVar3 = func_105();
			if (iVar3 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar3 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar3 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, true, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, true, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_67(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_67(vector3 vParam0, char* sParam1, vector3 vParam2)
{
	int iVar0;
	int iVar1;
	
	if (!_ARE_COORDS_COLLIDING_WITH_EXTERIOR(vParam0))
	{
		iVar0 = GET_INTERIOR_AT_COORDS_WITH_TYPE(vParam2, sParam1);
		if (!IS_VALID_INTERIOR(iVar0))
		{
			return 0;
		}
		iVar1 = GET_INTERIOR_FROM_COLLISION(vParam0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_68(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_69(*uParam1, 0f, 0f, 0f, 0);
}

bool func_69(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_70(var uParam0)
{
	if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0) && !IS_ENTITY_DEAD(IS_ENTITY_DEAD()))
	{
		if (func_93())
		{
			*uParam0 = func_76(GET_ENTITY_COORDS(GET_ENTITY_COORDS(), false), 6, -1, 0, 1, -1);
			if (func_75(*uParam0) && !func_71(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_71(int iParam0)
{
	return func_72(iParam0, 0, 1);
}

int func_72(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return IS_BIT_SET(Global_98721.f_1357[iParam0], iParam1);
	}
	else if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_74() == 0)
		{
			return IS_BIT_SET(func_49(func_73(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return IS_BIT_SET(Global_111560.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_73(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 9470;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		case 52:
			return 8912;
			break;
		
		case 50:
			return 8265;
			break;
		
		case 51:
			return 8267;
			break;
		
		default:
			break;
	}
	return 10999;
}

int func_74()
{
	return Global_30736;
}

int func_75(int iParam0)
{
	return func_72(iParam0, 5, 1);
}

int func_76(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 52)
	{
		if (iParam1 == 6 || iParam1 == func_92(iVar0))
		{
			if (!bParam3 || func_91(iVar0))
			{
				fVar1 = GET_DISTANCE_BETWEEN_COORDS(vParam0, func_77(iVar0, 0), true);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == -1)) && (iParam4 || iVar0 != 21)) && iVar0 != iParam5)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_77(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_88(Global_100764);
			break;
		
		case 46:
			if (Global_1590285 != func_87())
			{
				if (func_86(Global_1590285))
				{
					return func_79(2, 2);
				}
				else if (func_78(Global_1590285))
				{
					return func_79(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 52:
			return 2714.547f, -354.2701f, -55.1867f;
			break;
		
		case 50:
			return Global_1696181;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_78(int iParam0)
{
	if (iParam0 != func_87())
	{
		if ((IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 0) || IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 1)) || IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_79(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 1000000f, 1000000f, 1000000f };
	if (Global_1590285 != func_87())
	{
		if (iParam1 == 3)
		{
			if (func_80(iParam0, 1, &vVar0, 0, 0))
			{
				vVar1 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (IS_BIT_SET(Global_1590446[Global_1590285 /*871*/].f_273.f_255, 4))
			{
				if (func_80(iParam0, 1, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
			else if (IS_BIT_SET(Global_1590446[Global_1590285 /*871*/].f_273.f_255, 5))
			{
				if (func_80(iParam0, 2, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
		}
	}
	return vVar1;
}

int func_80(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	vector3 vVar1;
	struct<4> Var2;
	vector3 vVar3;
	
	if (!func_85(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_85(iParam1, &vVar1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_83(iParam0) };
	}
	else
	{
		Var2 = { func_82(iParam0) };
	}
	vVar3 = { Var2 - Var0 };
	vVar3 = { func_81(vVar3, -Var0.f_3.f_2) };
	vVar3 = { func_81(vVar3, vVar1.f_3.f_2) };
	*uParam2 = { _GET_OBJECT_OFFSET_FROM_COORDS(vVar1, 0f, vVar3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_81(vector3 vParam0, float fParam1)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = sin(fParam1);
	fVar2 = cos(fParam1);
	vVar0.x = ((vParam0.x * fVar2) - (vParam0.y * fVar1));
	vVar0.y = ((vParam0.x * fVar1) + (vParam0.y * fVar2));
	vVar0.z = vParam0.z;
	return vVar0;
}

struct<6> func_82(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_83(int iParam0)
{
	return func_84(iParam0);
}

struct<6> func_84(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_85(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_86(int iParam0)
{
	if (iParam0 != func_87())
	{
		if ((IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 3) || IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 4)) || IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_87()
{
	return -1;
}

Vector3 func_88(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 17:
			if (func_89() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_89()
{
	return func_90(PLAYER_ID());
}

int func_90(int iParam0)
{
	return GET_BITS_IN_RANGE(Global_2424073[iParam0 /*421*/].f_309.f_3, 28, 31);
}

int func_91(int iParam0)
{
	return func_72(iParam0, 0, 0);
}

int func_92(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
	}
	return 6;
}

bool func_93()
{
	return Global_98721.f_345 > 0;
}

var func_94()
{
	var uVar0;
	
	func_104(&uVar0, GET_CLOCK_SECONDS());
	func_103(&uVar0, GET_CLOCK_MINUTES());
	func_102(&uVar0, GET_CLOCK_HOURS());
	func_97(&uVar0, GET_CLOCK_DAY_OF_MONTH());
	func_96(&uVar0, GET_CLOCK_MONTH());
	func_95(&uVar0, GET_CLOCK_YEAR());
	return uVar0;
}

void func_95(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || shift_left((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_96(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_97(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_101(*uParam0);
	iVar1 = func_99(*uParam0);
	if (iParam1 < 1 || iParam1 > func_98(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_98(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_99(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_100(IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_100(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_101(var uParam0)
{
	return uParam0 & 15;
}

void func_102(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_103(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_104(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_105()
{
	func_56();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_106(int iParam0)
{
	var uVar0;
	vector3 vVar1[24];
	
	if (IS_XBOX360_VERSION() || IS_XBOX360_VERSION())
	{
		uVar0 = iParam0;
		NETWORK_SET_RICH_PRESENCE(9, &uVar0, 1, 1);
	}
	else if (IS_PS3_VERSION() || IS_PS3_VERSION())
	{
		StringCopy(&cVar1, "SPRC_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		_NETWORK_SET_RICH_PRESENCE_2(9, &cVar1);
	}
}

void func_107(char* sParam0, int iParam1, int iParam2)
{
	if (!IS_STRING_NULL_OR_EMPTY(&Global_95769))
	{
		PLAYSTATS_MISSION_OVER(&Global_95769, 0, 0, 0, 1, 0);
		StringCopy(&Global_95769, "", 64);
	}
	StringCopy(&Global_95769, sParam0, 64);
	PLAYSTATS_MISSION_STARTED(sParam0, iParam1, iParam2, func_108(0));
}

bool func_108(bool bParam0)
{
	if (!bParam0 && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return IS_BIT_SET(Global_76825, 0);
}

struct<2> func_109(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

void func_110(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_111(uParam1, "Abigail1", func_9(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_112(iParam0), 1, 0);
			break;
		
		case 1:
			func_111(uParam1, "Abigail2", func_9(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_112(iParam0), 1, 0);
			break;
		
		case 2:
			func_111(uParam1, "Barry1", func_9(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_112(iParam0), 1, 0);
			break;
		
		case 3:
			func_111(uParam1, "Barry2", func_9(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_112(iParam0), 1, 1);
			break;
		
		case 4:
			func_111(uParam1, "Barry3", func_9(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 5:
			func_111(uParam1, "Barry3A", func_9(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 6:
			func_111(uParam1, "Barry3C", func_9(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 7:
			func_111(uParam1, "Barry4", func_9(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_112(iParam0), 0, 0);
			break;
		
		case 8:
			func_111(uParam1, "Dreyfuss1", func_9(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 9:
			func_111(uParam1, "Epsilon1", func_9(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 10:
			func_111(uParam1, "Epsilon2", func_9(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_112(iParam0), 1, 0);
			break;
		
		case 11:
			func_111(uParam1, "Epsilon3", func_9(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 12:
			func_111(uParam1, "Epsilon4", func_9(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 13:
			func_111(uParam1, "Epsilon5", func_9(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_112(iParam0), 1, 0);
			break;
		
		case 14:
			func_111(uParam1, "Epsilon6", func_9(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 15:
			func_111(uParam1, "Epsilon7", func_9(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 16:
			func_111(uParam1, "Epsilon8", func_9(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_112(iParam0), 1, 0);
			break;
		
		case 17:
			func_111(uParam1, "Extreme1", func_9(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 18:
			func_111(uParam1, "Extreme2", func_9(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 19:
			func_111(uParam1, "Extreme3", func_9(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 20:
			func_111(uParam1, "Extreme4", func_9(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 21:
			func_111(uParam1, "Fanatic1", func_9(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_112(iParam0), 1, 0);
			break;
		
		case 22:
			func_111(uParam1, "Fanatic2", func_9(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_112(iParam0), 1, 0);
			break;
		
		case 23:
			func_111(uParam1, "Fanatic3", func_9(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_112(iParam0), 0, 1);
			break;
		
		case 24:
			func_111(uParam1, "Hao1", func_9(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_112(iParam0), 0, 1);
			break;
		
		case 25:
			func_111(uParam1, "Hunting1", func_9(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 26:
			func_111(uParam1, "Hunting2", func_9(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 27:
			func_111(uParam1, "Josh1", func_9(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_112(iParam0), 1, 0);
			break;
		
		case 28:
			func_111(uParam1, "Josh2", func_9(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_112(iParam0), 1, 1);
			break;
		
		case 29:
			func_111(uParam1, "Josh3", func_9(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_112(iParam0), 1, 1);
			break;
		
		case 30:
			func_111(uParam1, "Josh4", func_9(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_112(iParam0), 1, 0);
			break;
		
		case 31:
			func_111(uParam1, "Maude1", func_9(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 32:
			func_111(uParam1, "Minute1", func_9(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 33:
			func_111(uParam1, "Minute2", func_9(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 34:
			func_111(uParam1, "Minute3", func_9(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 35:
			func_111(uParam1, "MrsPhilips1", func_9(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 36:
			func_111(uParam1, "MrsPhilips2", func_9(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 37:
			func_111(uParam1, "Nigel1", func_9(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_112(iParam0), 1, 0);
			break;
		
		case 38:
			func_111(uParam1, "Nigel1A", func_9(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_112(iParam0), 1, 1);
			break;
		
		case 39:
			func_111(uParam1, "Nigel1B", func_9(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_112(iParam0), 1, 1);
			break;
		
		case 40:
			func_111(uParam1, "Nigel1C", func_9(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_112(iParam0), 1, 1);
			break;
		
		case 41:
			func_111(uParam1, "Nigel1D", func_9(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_112(iParam0), 1, 1);
			break;
		
		case 42:
			func_111(uParam1, "Nigel2", func_9(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_112(iParam0), 1, 1);
			break;
		
		case 43:
			func_111(uParam1, "Nigel3", func_9(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_112(iParam0), 1, 1);
			break;
		
		case 44:
			func_111(uParam1, "Omega1", func_9(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 45:
			func_111(uParam1, "Omega2", func_9(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 46:
			func_111(uParam1, "Paparazzo1", func_9(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 47:
			func_111(uParam1, "Paparazzo2", func_9(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 48:
			func_111(uParam1, "Paparazzo3", func_9(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 49:
			func_111(uParam1, "Paparazzo3A", func_9(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 50:
			func_111(uParam1, "Paparazzo3B", func_9(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 51:
			func_111(uParam1, "Paparazzo4", func_9(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 52:
			func_111(uParam1, "Rampage1", func_9(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 54:
			func_111(uParam1, "Rampage3", func_9(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_112(iParam0), 1, 0);
			break;
		
		case 55:
			func_111(uParam1, "Rampage4", func_9(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_112(iParam0), 1, 0);
			break;
		
		case 56:
			func_111(uParam1, "Rampage5", func_9(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_112(iParam0), 0, 0);
			break;
		
		case 53:
			func_111(uParam1, "Rampage2", func_9(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_112(iParam0), 1, 0);
			break;
		
		case 57:
			func_111(uParam1, "TheLastOne", func_9(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 58:
			func_111(uParam1, "Tonya1", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 59:
			func_111(uParam1, "Tonya2", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 60:
			func_111(uParam1, "Tonya3", func_9(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 61:
			func_111(uParam1, "Tonya4", func_9(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		case 62:
			func_111(uParam1, "Tonya5", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_112(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_111(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { vParam6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_10), sParam8, 16);
	uParam0->f_14 = iParam9;
	uParam0->f_15 = iParam10;
	StringCopy(&(uParam0->f_16), sParam11, 24);
	uParam0->f_22 = iParam12;
	uParam0->f_23 = iParam13;
	uParam0->f_24 = iParam14;
	uParam0->f_25 = iParam15;
	uParam0->f_26 = iParam16;
	uParam0->f_27 = iParam17;
	uParam0->f_28 = iParam18;
	uParam0->f_29 = uParam19;
	uParam0->f_30 = iParam20;
	uParam0->f_31 = iParam21;
}

int func_112(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_113(int iParam0)
{
	int iVar0;
	
	if (func_143(&(iParam0->f_1)))
	{
		if (!IS_STRING_NULL_OR_EMPTY(&(iParam0->f_9)))
		{
			func_133(1);
			func_131(iParam0, 1, func_132(*iParam0));
		}
		if (iParam0->f_27)
		{
			if (func_130(*iParam0))
			{
				while (!IS_PED_ON_FOOT(IS_PED_ON_FOOT()))
				{
					func_147();
					wait(0);
				}
			}
		}
		func_114(*iParam0);
		iVar0 = start_new_script_with_args(&(iParam0->f_1), iParam0, 61, 29500);
		SET_SCRIPT_AS_NO_LONGER_NEEDED(&(iParam0->f_1));
		if (HAS_CUTSCENE_LOADED())
		{
			func_290("Initial cutscene loaded and passing to RC mission.");
			_0x8D9DF6ECA8768583(iVar0);
		}
		else
		{
			func_290("Initial cutscene wasn't loaded in time to pass to RC mission.");
			REMOVE_CUTSCENE();
		}
		return 1;
	}
	return 0;
}

void func_114(int iParam0)
{
	struct<2> Var0;
	
	func_129();
	if (!IS_PED_INJURED(IS_PED_INJURED()))
	{
		SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 32, false);
		SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 250, false);
	}
	if (func_128(iParam0))
	{
		REMOVE_PED_HELMET(REMOVE_PED_HELMET(), 0);
	}
	SET_ALL_RANDOM_PEDS_FLEE(SET_ALL_RANDOM_PEDS_FLEE(), 1);
	CLEAR_ADDITIONAL_TEXT(0, true);
	CLEAR_ADDITIONAL_TEXT(3, true);
	CLEAR_ADDITIONAL_TEXT(2, true);
	if (Global_42561 == 1)
	{
		if (func_126(PLAYER_PED_ID()))
		{
			func_117(PLAYER_PED_ID());
		}
	}
	if (!func_168())
	{
		if (iParam0 < 63)
		{
			func_115(iParam0);
			Var0 = { func_9(iParam0) };
			SET_MISSION_NAME(1, &Var0);
		}
	}
}

void func_115(int iParam0)
{
	if (iParam0 < 63)
	{
		func_116();
		Global_76832 = iParam0;
		Global_76831 = 0;
		Global_76834 = 7;
	}
}

void func_116()
{
	if (Global_76831 != 6)
	{
	}
	if (Global_76836)
	{
		RESET_HUD_COMPONENT_VALUES(15);
		Global_76836 = 0;
		Global_22350.f_8385 = 0;
	}
	Global_76831 = 6;
	Global_76833 = -1;
	Global_76832 = -1;
}

void func_117(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_125(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_42348[iVar0 /*5*/];
		func_120(1, iVar1, 1);
		return;
	}
	iVar2 = func_119(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_118(iVar2);
}

void func_118(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_42322[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_42322[iParam0 /*5*/].f_1 == PLAYER_PED_ID())
		{
			Global_42559 = 0;
		}
	}
	Global_42322[iParam0 /*5*/] = 13;
	Global_42322[iParam0 /*5*/].f_1 = 0;
	Global_42322[iParam0 /*5*/].f_2 = 0;
	Global_42322[iParam0 /*5*/].f_3 = 0;
	Global_42322[iParam0 /*5*/].f_4 = 0;
	Global_42320 = (Global_42320 - 1);
	if (Global_42320 < 0)
	{
		Global_42320 = 0;
	}
}

int func_119(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_42322[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_120(int iParam0, int iParam1, int iParam2)
{
	func_121(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_121(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_123(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_122();
	if (iVar0 == -1)
	{
		return;
	}
	Global_42429[iVar0 /*6*/] = iParam0;
	Global_42429[iVar0 /*6*/].f_1 = iParam1;
	Global_42429[iVar0 /*6*/].f_2 = iParam2;
	Global_42429[iVar0 /*6*/].f_3 = iParam3;
	Global_42429[iVar0 /*6*/].f_4 = iParam4;
	Global_42429[iVar0 /*6*/].f_5 = iParam5;
}

int func_122()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42429[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_123(int iParam0, int iParam1, int iParam2)
{
	if (func_124(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_124(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_42429[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_42429[iVar0 /*6*/])
			{
				if (iParam1 == Global_42429[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_125(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_42348[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_42348[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_126(int iParam0)
{
	if (func_127(iParam0))
	{
		if (!IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_127(int iParam0)
{
	if (DOES_ENTITY_EXIST(iParam0))
	{
		if (!IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_128(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 60:
		case 61:
			return 0;
			break;
	}
	return 1;
}

void func_129()
{
	if (Global_8161[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8161[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8161[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8161[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8161[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8161[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	CLEAR_BIT(&Global_7356, 25);
	SET_BIT(&Global_7357, 11);
}

int func_130(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 16:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
			return 0;
			break;
	}
	return 1;
}

void func_131(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_127(uParam0->f_28[iVar0]))
		{
			SET_ENTITY_PROOFS(uParam0->f_28[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, 0, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_127(uParam0->f_35[iVar0]))
		{
			SET_ENTITY_PROOFS(uParam0->f_35[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, 0, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_127(uParam0->f_41[iVar0]))
		{
			SET_ENTITY_PROOFS(uParam0->f_41[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, false, 0, false);
		}
		iVar0++;
	}
	if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
	{
		SET_ENTITY_PROOFS(SET_ENTITY_PROOFS(), bParam1, bParam1, bParam1, bParam1, bParam1, false, 0, false);
		SET_ENTITY_INVINCIBLE(SET_ENTITY_INVINCIBLE(), bParam1);
		if (bParam2)
		{
			SET_CURRENT_PED_WEAPON(SET_CURRENT_PED_WEAPON(), joaat("weapon_unarmed"), true);
		}
	}
}

int func_132(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			return 0;
			break;
	}
	return 1;
}

void func_133(bool bParam0)
{
	int iVar0;
	
	iVar0 = GET_PLAYER_INDEX();
	if (!IS_PLAYER_DEAD(iVar0))
	{
		if (bParam0)
		{
		}
		SET_PLAYER_CONTROL(iVar0, bParam0, 16);
		SET_PLAYER_CONTROL(iVar0, bParam0, 32);
	}
	func_134(1, 1, 0, 0, 0, 0);
}

void func_134(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		SPECIAL_ABILITY_DEACTIVATE_FAST(SPECIAL_ABILITY_DEACTIVATE_FAST());
		SET_ALL_RANDOM_PEDS_FLEE(SET_ALL_RANDOM_PEDS_FLEE(), 1);
		SET_POLICE_IGNORE_PLAYER(SET_POLICE_IGNORE_PLAYER(), 1);
		func_142(1);
		_0xA8FDB297A8D25FBA();
		THEFEED_PAUSE();
		if (Global_19486.f_1 > 3)
		{
			if (IS_MOBILE_PHONE_CALL_ONGOING())
			{
				STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_141())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_140(1, iParam3, iParam2, 0);
		Global_61477 = 1;
		Global_73787 = 1;
		Global_76575 = 1;
	}
	else
	{
		func_142(0);
		THEFEED_RESUME();
		Global_61477 = 0;
		if (bParam1)
		{
			_0x03FC694AE06C5A20();
		}
		SET_ALL_RANDOM_PEDS_FLEE(SET_ALL_RANDOM_PEDS_FLEE(), 0);
		SET_POLICE_IGNORE_PLAYER(SET_POLICE_IGNORE_PLAYER(), 0);
		func_140(0, iParam3, iParam2, 0);
		if (NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!IS_PED_INJURED(IS_PED_INJURED()) && !func_138(IS_PED_INJURED())) && !func_136(IS_PED_INJURED(), 0)) && !func_135()) && !bParam4) && !bParam5)
			{
				SET_ENTITY_INVINCIBLE(SET_ENTITY_INVINCIBLE(), false);
			}
		}
		else if (((!IS_PED_INJURED(IS_PED_INJURED()) && !func_138(IS_PED_INJURED())) && !bParam4) && !bParam5)
		{
			SET_ENTITY_INVINCIBLE(SET_ENTITY_INVINCIBLE(), false);
		}
		Global_76575 = 0;
	}
}

bool func_135()
{
	return IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_39.f_18, 14);
}

bool func_136(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER_ID())
	{
		bVar0 = func_137(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590446[iParam0 /*871*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_137(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_51();
	}
	if (Global_1312853[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_138(int iParam0)
{
	if (func_136(iParam0, 0))
	{
		return 1;
	}
	if (func_139())
	{
		if (iParam0 == PLAYER_ID())
		{
			return 1;
		}
	}
	if (IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_139()
{
	return IS_BIT_SET(Global_2359302, 3);
}

int func_140(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_PC_VERSION())
	{
		if (_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_141()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_142(int iParam0)
{
	if (iParam0 == 1)
	{
		SET_BIT(&Global_7356, 13);
	}
	else
	{
		CLEAR_BIT(&Global_7356, 13);
	}
}

int func_143(char* sParam0)
{
	if (!IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		REQUEST_SCRIPT(sParam0);
		while (!HAS_SCRIPT_LOADED(sParam0))
		{
			REQUEST_SCRIPT(sParam0);
			wait(0);
		}
		return 1;
	}
	func_290("Attempting to launch invalid script file [TERMINATING]");
	return 0;
}

void func_144()
{
	Global_19671 = 0;
	func_145();
}

void func_145()
{
	RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if ((IS_MOBILE_PHONE_CALL_ONGOING() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		STOP_SCRIPTED_CONVERSATION(false);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		STOP_SCRIPTED_CONVERSATION(true);
		Global_20805 = 6;
		return;
	}
}

int func_146()
{
	if (Global_20805 != 0 || IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_147()
{
	func_152(0);
	func_151();
	func_148();
}

void func_148()
{
	if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
	{
		if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
		{
			if (func_149(GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0), 10.5f, 1, 1056964608, 0, 1, 0))
			{
				if (GET_SCRIPT_TASK_STATUS(GET_SCRIPT_TASK_STATUS(), -828834893) != 1)
				{
					TASK_LEAVE_ANY_VEHICLE(TASK_LEAVE_ANY_VEHICLE(), 0, 0);
				}
			}
		}
	}
}

int func_149(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	DISABLE_CONTROL_ACTION(0, 71, 1);
	DISABLE_CONTROL_ACTION(0, 72, 1);
	DISABLE_CONTROL_ACTION(0, 76, 1);
	DISABLE_CONTROL_ACTION(0, 73, 1);
	DISABLE_CONTROL_ACTION(0, 59, 1);
	DISABLE_CONTROL_ACTION(0, 60, 1);
	if (bParam5)
	{
		DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	DISABLE_CONTROL_ACTION(0, 80, 1);
	if (!bParam6)
	{
		DISABLE_CONTROL_ACTION(0, 69, 1);
		DISABLE_CONTROL_ACTION(0, 70, 1);
		DISABLE_CONTROL_ACTION(0, 68, 1);
	}
	DISABLE_CONTROL_ACTION(0, 74, 1);
	DISABLE_CONTROL_ACTION(0, 86, 1);
	DISABLE_CONTROL_ACTION(0, 81, 1);
	DISABLE_CONTROL_ACTION(0, 82, 1);
	DISABLE_CONTROL_ACTION(0, 138, 1);
	DISABLE_CONTROL_ACTION(0, 136, 1);
	DISABLE_CONTROL_ACTION(0, 114, 1);
	DISABLE_CONTROL_ACTION(0, 107, 1);
	DISABLE_CONTROL_ACTION(0, 110, 1);
	DISABLE_CONTROL_ACTION(0, 89, 1);
	DISABLE_CONTROL_ACTION(0, 89, 1);
	DISABLE_CONTROL_ACTION(0, 87, 1);
	DISABLE_CONTROL_ACTION(0, 88, 1);
	DISABLE_CONTROL_ACTION(0, 113, 1);
	DISABLE_CONTROL_ACTION(0, 115, 1);
	DISABLE_CONTROL_ACTION(0, 116, 1);
	DISABLE_CONTROL_ACTION(0, 117, 1);
	DISABLE_CONTROL_ACTION(0, 118, 1);
	DISABLE_CONTROL_ACTION(0, 119, 1);
	DISABLE_CONTROL_ACTION(0, 131, 1);
	DISABLE_CONTROL_ACTION(0, 132, 1);
	DISABLE_CONTROL_ACTION(0, 123, 1);
	DISABLE_CONTROL_ACTION(0, 126, 1);
	DISABLE_CONTROL_ACTION(0, 129, 1);
	DISABLE_CONTROL_ACTION(0, 130, 1);
	DISABLE_CONTROL_ACTION(0, 133, 1);
	DISABLE_CONTROL_ACTION(0, 134, 1);
	_0x17FCA7199A530203();
	func_150(iParam0);
	if ((GET_GAME_TIMER() - Global_29) > 500)
	{
		BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = GET_GAME_TIMER();
	if (!IS_ENTITY_DEAD(iParam0, 0))
	{
		if (ABSF(ABSF(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_150(int iParam0)
{
	if (!IS_ENTITY_DEAD(iParam0, 0))
	{
		if (0x36D782F68B309BDA(iParam0))
		{
			if (0x3D34E80EED4AE3BE(iParam0))
			{
				0x81E1552E35DC3839(iParam0, 0);
			}
		}
	}
}

void func_151()
{
	DISABLE_CONTROL_ACTION(0, 21, 1);
	DISABLE_CONTROL_ACTION(0, 37, 1);
	DISABLE_CONTROL_ACTION(0, 25, 1);
	DISABLE_CONTROL_ACTION(0, 141, 1);
	DISABLE_CONTROL_ACTION(0, 140, 1);
	DISABLE_CONTROL_ACTION(0, 24, 1);
	DISABLE_CONTROL_ACTION(0, 257, 1);
	DISABLE_CONTROL_ACTION(0, 22, 1);
	DISABLE_CONTROL_ACTION(0, 23, 1);
}

void func_152(int iParam0)
{
	if (func_157())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_156(0))
		{
			func_153(iParam0);
		}
		SET_BIT(&Global_7357, 2);
	}
}

void func_153(int iParam0)
{
	if (func_157())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_155())
		{
			func_154(1, 1);
		}
		else
		{
			func_154(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		SET_BIT(&Global_7357, 16);
	}
	if (IS_MOBILE_PHONE_CALL_ONGOING())
	{
		STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		SET_BIT(&Global_7356, 30);
	}
	else
	{
		CLEAR_BIT(&Global_7356, 30);
	}
	if (!func_141())
	{
		Global_19486.f_1 = 3;
	}
}

void func_154(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_156(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				GET_MOBILE_PHONE_POSITION(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431 /*3*/] };
			SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431 /*3*/] };
		if (bParam1)
		{
			SET_MOBILE_PHONE_POSITION(Global_19423);
		}
		else
		{
			SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
}

bool func_155()
{
	return IS_BIT_SET(Global_1687880, 5);
}

int func_156(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (IS_BIT_SET(Global_7356, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_157()
{
	return IS_BIT_SET(Global_1687880, 19);
}

int func_158(int iParam0)
{
	if ((((iParam0 == 52 || iParam0 == 53) || iParam0 == 54) || iParam0 == 55) || iParam0 == 56)
	{
		return 1;
	}
	return 0;
}

int func_159(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_166();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_161(&(Global_110647[iParam0 /*10*/].f_9), 1, 4, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	func_160(iParam0);
	return 1;
}

void func_160(int iParam0)
{
	Global_110647[iParam0 /*10*/].f_4 = 1;
	Global_110647[iParam0 /*10*/].f_5 = 0;
	Global_110647[iParam0 /*10*/].f_6 = 0;
	Global_110647[iParam0 /*10*/] = 0;
}

int func_161(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_96177.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_165(0))
		{
			return 0;
		}
		Global_41360++;
		*uParam0 = Global_41360;
		SET_PLAYER_INVINCIBLE(SET_PLAYER_INVINCIBLE(), 0);
		Global_22211.f_5 = 0;
		if (iParam2 != 5)
		{
			FORCE_CLEANUP(8);
		}
		Global_41396 = iParam2;
		Global_41358 = *uParam0;
		Global_41359 = iParam4;
		Global_41357 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_41357 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41357)
			{
				if (Global_41363[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41358 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_163(iParam2))
		{
			return 0;
		}
		if (Global_41357 == 8)
		{
			return 0;
		}
		Global_41360++;
		*uParam0 = Global_41360;
		Global_41363[Global_41357 /*4*/] = Global_41360;
		Global_41363[Global_41357 /*4*/].f_1 = iParam1;
		Global_41363[Global_41357 /*4*/].f_2 = iParam2;
		Global_41363[Global_41357 /*4*/].f_3 = 0;
		Global_41357++;
		if (iParam4 != 0)
		{
			func_162(uParam0, iParam4);
		}
	}
	return 2;
}

void func_162(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_41357 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41357)
	{
		if (Global_41363[iVar0 /*4*/] == *uParam0)
		{
			Global_41363[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_163(int iParam0)
{
	return func_164(iParam0, Global_41396);
}

int func_164(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_165(int iParam0)
{
	if (Global_41396 == 15)
	{
		return 0;
	}
	if (func_163(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_166()
{
	return func_167(GET_THIS_SCRIPT_NAME(), 0);
}

int func_167(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = GET_HASH_KEY(sParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 63)
	{
		iVar0 = iVar3;
		func_110(iVar0, &sVar1);
		if (GET_HASH_KEY(sVar1) == iVar2)
		{
			return iVar0;
		}
		iVar3++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

int func_168()
{
	if (Global_98669 == 10 || Global_98669 == 9)
	{
		return 1;
	}
	return 0;
}

void func_169(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = func_170(-1604.668f, 5239.1f, 3.01f, 0);
			SET_BLIP_SPRITE(*iParam1, 66);
			SET_BLIP_COLOUR(*iParam1, 42);
			break;
		
		case 1:
			*iParam1 = func_170(-1592.84f, 5214.04f, 3.01f, 0);
			SET_BLIP_SPRITE(*iParam1, 400);
			SET_BLIP_COLOUR(*iParam1, 42);
			break;
		
		case 2:
		case 3:
			*iParam1 = func_170(190.26f, -956.35f, 29.63f, 0);
			if ((IS_BIT_SET(Global_111560.f_18569[2 /*6*/], 3) || IS_BIT_SET(Global_111560.f_18569[4 /*6*/], 3)) || IS_BIT_SET(Global_111560.f_18569[4 /*6*/], 3))
			{
				SET_BLIP_SPRITE(*iParam1, 381);
			}
			else
			{
				SET_BLIP_SPRITE(*iParam1, 66);
			}
			if (iParam0 == 2)
			{
				SET_BLIP_COLOUR(*iParam1, 42);
			}
			else
			{
				SET_BLIP_COLOUR(*iParam1, 44);
			}
			break;
		
		case 4:
			*iParam1 = func_170(414f, -761f, 29f, 0);
			if (IS_BIT_SET(Global_111560.f_18569[2 /*6*/], 3) || IS_BIT_SET(Global_111560.f_18569[3 /*6*/], 3))
			{
				SET_BLIP_SPRITE(*iParam1, 381);
			}
			else
			{
				SET_BLIP_SPRITE(*iParam1, 66);
			}
			SET_BLIP_COLOUR(*iParam1, 43);
			break;
		
		case 9:
			*iParam1 = func_170(-1622.89f, 4204.87f, 83.3f, 0);
			SET_BLIP_SPRITE(*iParam1, 66);
			SET_BLIP_COLOUR(*iParam1, 42);
			break;
		
		case 11:
		case 12:
		case 13:
			if (iParam0 == 11)
			{
				*iParam1 = func_170(1835.53f, 4705.86f, 38.1f, 0);
			}
			else if (iParam0 == 12)
			{
				*iParam1 = func_170(1826.13f, 4698.88f, 38.92f, 0);
			}
			else
			{
				*iParam1 = func_170(637.02f, 119.7093f, 89.5f, 0);
			}
			SET_BLIP_SPRITE(*iParam1, 206);
			SET_BLIP_COLOUR(*iParam1, 42);
			break;
		
		case 18:
		case 19:
			if (iParam0 == 18)
			{
				*iParam1 = func_170(-954.19f, -2760.05f, 14.64f, 0);
			}
			else
			{
				*iParam1 = func_170(-63.8f, -809.5f, 321.8f, 0);
			}
			SET_BLIP_SPRITE(*iParam1, 382);
			SET_BLIP_COLOUR(*iParam1, 43);
			break;
		
		case 21:
		case 23:
			if (iParam0 == 21)
			{
				*iParam1 = func_170(-1877.82f, -440.649f, 45.05f, 0);
			}
			else
			{
				*iParam1 = func_170(-915.6f, 6139.2f, 5.5f, 0);
			}
			if ((IS_BIT_SET(Global_111560.f_18569[21 /*6*/], 3) || IS_BIT_SET(Global_111560.f_18569[22 /*6*/], 3)) || IS_BIT_SET(Global_111560.f_18569[23 /*6*/], 3))
			{
				SET_BLIP_SPRITE(*iParam1, 405);
			}
			else
			{
				SET_BLIP_SPRITE(*iParam1, 66);
			}
			if (iParam0 == 21)
			{
				SET_BLIP_COLOUR(*iParam1, 42);
			}
			else
			{
				SET_BLIP_COLOUR(*iParam1, 43);
			}
			break;
		
		case 27:
			*iParam1 = func_170(-1104.93f, 291.25f, 64.3f, 0);
			SET_BLIP_SPRITE(*iParam1, 66);
			SET_BLIP_COLOUR(*iParam1, 44);
			break;
		
		case 30:
			*iParam1 = func_170(-1104.93f, 291.25f, 64.3f, 0);
			SET_BLIP_SPRITE(*iParam1, 385);
			SET_BLIP_COLOUR(*iParam1, 44);
			break;
		
		case 34:
			*iParam1 = func_170(-303.82f, 6211.29f, 31.05f, 0);
			SET_BLIP_SPRITE(*iParam1, 386);
			SET_BLIP_COLOUR(*iParam1, 44);
			break;
		
		case 43:
			*iParam1 = func_170(-44.75f, -1288.67f, 28.21f, 0);
			SET_BLIP_SPRITE(*iParam1, 149);
			SET_BLIP_COLOUR(*iParam1, 44);
			break;
		
		case 46:
			*iParam1 = func_170(-149.75f, 285.81f, 93.67f, 0);
			SET_BLIP_SPRITE(*iParam1, 66);
			SET_BLIP_COLOUR(*iParam1, 43);
			break;
		
		case 47:
		case 48:
			if (iParam0 == 47)
			{
				*iParam1 = func_170(-70.71f, 301.43f, 106.79f, 0);
			}
			else
			{
				*iParam1 = func_170(-257.22f, 292.85f, 90.63f, 0);
			}
			SET_BLIP_SPRITE(*iParam1, 389);
			SET_BLIP_COLOUR(*iParam1, 43);
			break;
	}
}

int func_170(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = ADD_BLIP_FOR_COORD(vParam0);
	SET_BLIP_SCALE(iVar0, func_171(SET_BLIP_SCALE(), 1f, 1f));
	SET_BLIP_ROUTE(iVar0, bParam1);
	return iVar0;
}

float func_171(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_172(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 9:
		case 11:
		case 12:
		case 13:
		case 18:
		case 19:
		case 21:
		case 23:
		case 27:
		case 30:
		case 34:
		case 43:
		case 46:
		case 47:
		case 48:
			return 1;
			break;
	}
	return 0;
}

int func_173(int iParam0, int iParam1)
{
	switch (iParam0->f_16)
	{
		case 0:
			if (*iParam0 == 12)
			{
				if (IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), 1826.631f, 4699.115f, 35.38089f, 1812.878f, 4710.457f, 42.05354f, 23.75f, 0, true, 0))
				{
					if (func_127(iParam0->f_28[0]))
					{
						if (GET_DISTANCE_BETWEEN_COORDS(GET_DISTANCE_BETWEEN_COORDS(GET_DISTANCE_BETWEEN_COORDS(), true), GET_DISTANCE_BETWEEN_COORDS(iParam0->f_28[0], true), true) < 3f)
						{
							if (func_178(2))
							{
								if (func_177(iParam0->f_27))
								{
									func_176(iParam0->f_27, *iParam0);
									func_290("ARE_RC_TRIGGER_CONDITIONS_MET: RC_TRIG_CHAR - Used special case Eps 4 trigger.");
									return 1;
								}
							}
						}
					}
					else
					{
						return 0;
					}
				}
				else if (func_127(iParam0->f_28[0]))
				{
					if (func_175(iParam0))
					{
						if (func_178(2))
						{
							if (func_177(iParam0->f_27))
							{
								func_176(iParam0->f_27, *iParam0);
								return 1;
							}
						}
					}
				}
				else
				{
					return 0;
				}
			}
			else if (*iParam0 == 21)
			{
				if ((((!IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), -1895.788f, -434.0192f, 40.30126f, -1883.038f, -444.0811f, 50.24509f, 8.5f, 0, true, 0) && !IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), -1883.576f, -443.6434f, 36.40581f, -1874.826f, -448.0797f, 49.15162f, 8.5f, 0, true, 0)) && !IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), -1876.343f, -446.2214f, 35.64637f, -1866.952f, -456.5601f, 49.0442f, 8.5f, 0, true, 0)) && !IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), -1882.997f, -438.9922f, 44.17246f, -1874.079f, -443.342f, 48.69179f, 0.75f, 0, true, 0)) || IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), -1878.822f, -441.7655f, 44.9175f, -1877.941f, -439.9522f, 47.28982f, 1.25f, 0, true, 0))
				{
					if (func_127(iParam0->f_28[0]))
					{
						if (func_175(iParam0))
						{
							if (func_178(2))
							{
								if (func_177(iParam0->f_27))
								{
									func_176(iParam0->f_27, *iParam0);
									return 1;
								}
							}
						}
					}
					else
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (*iParam0 == 22)
			{
				if (!IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), 837.0731f, 1261.086f, 366.1592f, 780.8383f, 1260.829f, 351.405f, 17.75f, 0, true, 0))
				{
					if (func_127(iParam0->f_28[0]))
					{
						if (func_175(iParam0))
						{
							if (func_178(2))
							{
								if (func_177(iParam0->f_27))
								{
									func_176(iParam0->f_27, *iParam0);
									return 1;
								}
							}
						}
					}
					else
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else if (func_127(iParam0->f_28[0]))
			{
				if (func_175(iParam0))
				{
					if (func_178(2))
					{
						if (func_177(iParam0->f_27))
						{
							func_176(iParam0->f_27, *iParam0);
							return 1;
						}
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_127(iParam0->f_35[0]))
			{
				if (IS_PED_IN_VEHICLE(IS_PED_IN_VEHICLE(), iParam0->f_35[0], 0))
				{
					if (func_178(3))
					{
						func_176(iParam0->f_27, *iParam0);
						return 1;
					}
				}
				else if (iParam1 == 1)
				{
					func_174();
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (DOES_ENTITY_EXIST(iParam0->f_35[0]))
			{
				if (!IS_ENTITY_DEAD(iParam0->f_35[0], 0))
				{
					if (GET_DISTANCE_BETWEEN_COORDS(GET_DISTANCE_BETWEEN_COORDS(GET_DISTANCE_BETWEEN_COORDS(), true), GET_DISTANCE_BETWEEN_COORDS(iParam0->f_35[0], true), true) < iParam0->f_15)
					{
						if (func_178(2))
						{
							if (func_177(iParam0->f_27))
							{
								func_176(iParam0->f_27, *iParam0);
								return 1;
							}
						}
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 3:
			if (GET_DISTANCE_BETWEEN_COORDS(GET_DISTANCE_BETWEEN_COORDS(GET_DISTANCE_BETWEEN_COORDS(), true), iParam0->f_17[0 /*3*/], true) < iParam0->f_15)
			{
				if (func_178(2))
				{
					if (func_177(iParam0->f_27))
					{
						func_176(iParam0->f_27, *iParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 4:
			if (IS_ENTITY_AT_COORD(IS_ENTITY_AT_COORD(), iParam0->f_17[0 /*3*/], iParam0->f_17[1 /*3*/], false, true, 0))
			{
				if (func_178(2))
				{
					if (func_177(iParam0->f_27))
					{
						func_176(iParam0->f_27, *iParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 5:
			if (*iParam0 == 6)
			{
				if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
				{
					if (func_127(GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0)))
					{
						if (IS_VEHICLE_MODEL(IS_VEHICLE_MODEL(IS_VEHICLE_MODEL(), 0), joaat("towtruck")) || IS_VEHICLE_MODEL(IS_VEHICLE_MODEL(IS_VEHICLE_MODEL(), 0), joaat("towtruck2")))
						{
							if (IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(), 0), iParam0->f_35[0]))
							{
								if (func_178(3))
								{
									return 1;
								}
							}
						}
						else if ((IS_VEHICLE_MODEL(IS_VEHICLE_MODEL(IS_VEHICLE_MODEL(), 0), joaat("cargobob")) || IS_VEHICLE_MODEL(IS_VEHICLE_MODEL(IS_VEHICLE_MODEL(), 0), joaat("cargobob2"))) || IS_VEHICLE_MODEL(IS_VEHICLE_MODEL(IS_VEHICLE_MODEL(), 0), joaat("cargobob3")))
						{
							if (DOES_CARGOBOB_HAVE_PICK_UP_ROPE(DOES_CARGOBOB_HAVE_PICK_UP_ROPE(DOES_CARGOBOB_HAVE_PICK_UP_ROPE(), 0)) && DOES_CARGOBOB_HAVE_PICK_UP_ROPE(DOES_CARGOBOB_HAVE_PICK_UP_ROPE(DOES_CARGOBOB_HAVE_PICK_UP_ROPE(), 0), iParam0->f_35[0]))
							{
								if (func_178(3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
			else if (*iParam0 == 10)
			{
				if (GET_PED_DESIRED_MOVE_BLEND_RATIO(GET_PED_DESIRED_MOVE_BLEND_RATIO()) >= 2f)
				{
					if (IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), 245.8885f, 371.9034f, 103.9884f, 241.5898f, 359.6458f, 107.3461f, 1.25f, 0, true, 0))
					{
						if (func_178(2))
						{
							if (func_177(iParam0->f_27))
							{
								func_176(iParam0->f_27, *iParam0);
								func_290("RC5_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - Eps 2 special case trigger used");
								return 1;
							}
						}
					}
				}
			}
			else if (*iParam0 == 46)
			{
				if (IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), -164.2046f, 277.4866f, 91.55322f, -153.6f, 277.4061f, 97.33813f, 10f, 0, true, 0))
				{
					return 0;
				}
			}
			else if (*iParam0 == 31)
			{
				if (IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), 2728.948f, 4143.44f, 42.29295f, 2722.213f, 4144.521f, 45.43182f, 10f, 0, true, 0))
				{
					if (func_178(2))
					{
						if (func_177(1))
						{
							func_176(1, *iParam0);
							func_290("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_MAUDE_1 special case vehicle launch area");
							return 1;
						}
					}
				}
			}
			else if (*iParam0 == 39)
			{
				if (IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), -992.4995f, 358.7455f, 96.3735f, -1021.94f, 361.8888f, 65.36148f, 30f, 0, true, 0))
				{
					if (!IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), -983.5426f, 369.1104f, 68.46017f, -1028.566f, 395.4613f, 94.57245f, 15f, 0, true, 0))
					{
						if (!IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), -983.875f, 346.7556f, 68.02096f, -1021.451f, 336.3458f, 93.18714f, 14.5f, 0, true, 0))
						{
							if (func_178(2))
							{
								if (func_177(iParam0->f_27))
								{
									func_176(iParam0->f_27, *iParam0);
									func_290("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_NIGEL_1B special case vehicle launch area");
									return 1;
								}
							}
						}
					}
				}
			}
			if (IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), iParam0->f_17[0 /*3*/], iParam0->f_17[1 /*3*/], iParam0->f_24, 0, true, 0))
			{
				if (*iParam0 == 45)
				{
					if (IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), 2338.697f, 2597.037f, 45.39052f, 2324.003f, 2597.185f, 47.74961f, 8.5f, 0, true, 0))
					{
						return 0;
					}
				}
				if (func_178(2))
				{
					if (func_177(iParam0->f_27))
					{
						func_176(iParam0->f_27, *iParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 6:
			break;
	}
	return 0;
}

void func_174()
{
	func_27(&(Global_102125.f_2890), &Global_102125, 0, 1, 1, 0);
}

int func_175(var uParam0)
{
	float fVar0;
	
	if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0) && uParam0->f_27)
	{
		if (*uParam0 == 27 || *uParam0 == 30)
		{
			fVar0 = 1f;
		}
		else
		{
			fVar0 = 5f;
		}
		if (GET_DISTANCE_BETWEEN_COORDS(GET_DISTANCE_BETWEEN_COORDS(GET_DISTANCE_BETWEEN_COORDS(), true), GET_DISTANCE_BETWEEN_COORDS(uParam0->f_28[0], true), true) < (uParam0->f_15 + fVar0))
		{
			return 1;
		}
	}
	else if (GET_DISTANCE_BETWEEN_COORDS(GET_DISTANCE_BETWEEN_COORDS(GET_DISTANCE_BETWEEN_COORDS(), true), GET_DISTANCE_BETWEEN_COORDS(uParam0->f_28[0], true), true) < uParam0->f_15)
	{
		return 1;
	}
	return 0;
}

void func_176(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		if (!func_130(iParam1))
		{
			return;
		}
		if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
		{
			func_290("RC_STOP_PLAYER_VEHICLE_CHECK: Stopping player's vehicle.");
			if (IS_PED_IN_ANY_HELI(IS_PED_IN_ANY_HELI()) || IS_PED_IN_ANY_HELI(IS_PED_IN_ANY_HELI()))
			{
				func_290("RC_STOP_PLAYER_VEHICLE_CHECK: Turning off engine for plane or helicopter.");
				SET_VEHICLE_ENGINE_ON(SET_VEHICLE_ENGINE_ON(SET_VEHICLE_ENGINE_ON(), 0), false, true, 0);
			}
			func_147();
		}
	}
}

int func_177(bool bParam0)
{
	int iVar0;
	
	if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
	{
		if (IS_PED_ON_FOOT(IS_PED_ON_FOOT()))
		{
			return 1;
		}
		else if (bParam0)
		{
			if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
			{
				iVar0 = GET_PLAYERS_LAST_VEHICLE();
				if (func_208(iVar0))
				{
					if (IS_PED_IN_ANY_HELI(IS_PED_IN_ANY_HELI()) || IS_PED_IN_ANY_HELI(IS_PED_IN_ANY_HELI()))
					{
						if ((!HAS_ENTITY_COLLIDED_WITH_ANYTHING(iVar0) && !HAS_ENTITY_COLLIDED_WITH_ANYTHING(iVar0)) && HAS_ENTITY_COLLIDED_WITH_ANYTHING(iVar0) < 1f)
						{
							return 1;
						}
					}
					else if (!IS_ENTITY_IN_AIR(iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_178(int iParam0)
{
	int iVar0;
	
	if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
	{
		if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()))
		{
			if (!IS_PED_INJURED(IS_PED_INJURED()))
			{
				iVar0 = func_105();
				if (!func_36(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!IS_PLAYER_READY_FOR_CUTSCENE(IS_PLAYER_READY_FOR_CUTSCENE()) || IS_PLAYER_READY_FOR_CUTSCENE(IS_PLAYER_READY_FOR_CUTSCENE())) || IS_PLAYER_READY_FOR_CUTSCENE(IS_PLAYER_READY_FOR_CUTSCENE())) || IS_PLAYER_READY_FOR_CUTSCENE(IS_PLAYER_READY_FOR_CUTSCENE())) || IS_PLAYER_READY_FOR_CUTSCENE(IS_PLAYER_READY_FOR_CUTSCENE())) || IS_PLAYER_READY_FOR_CUTSCENE(IS_PLAYER_READY_FOR_CUTSCENE(), 1)) || IS_PLAYER_READY_FOR_CUTSCENE(IS_PLAYER_READY_FOR_CUTSCENE())) || IS_PLAYER_READY_FOR_CUTSCENE(IS_PLAYER_READY_FOR_CUTSCENE(), 0)) || func_186()) || Global_110607) || Global_30738) || func_185()) || func_184(8, -1)) || func_93()) || func_183()) || func_182()) || func_181()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((IS_PLAYER_BEING_ARRESTED(IS_PLAYER_BEING_ARRESTED(), 1) || func_186()) || Global_30738) || func_185()) || func_184(8, -1)) || func_182()) || func_93()) || func_183()) || func_181()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!IS_PLAYER_READY_FOR_CUTSCENE(IS_PLAYER_READY_FOR_CUTSCENE()) || IS_PLAYER_READY_FOR_CUTSCENE(IS_PLAYER_READY_FOR_CUTSCENE())) || IS_PLAYER_READY_FOR_CUTSCENE(IS_PLAYER_READY_FOR_CUTSCENE())) || IS_PLAYER_READY_FOR_CUTSCENE(IS_PLAYER_READY_FOR_CUTSCENE())) || IS_PLAYER_READY_FOR_CUTSCENE(IS_PLAYER_READY_FOR_CUTSCENE())) || IS_PLAYER_READY_FOR_CUTSCENE(IS_PLAYER_READY_FOR_CUTSCENE(), 1)) || IS_PLAYER_READY_FOR_CUTSCENE(IS_PLAYER_READY_FOR_CUTSCENE())) || IS_PLAYER_READY_FOR_CUTSCENE(IS_PLAYER_READY_FOR_CUTSCENE(), 0)) || func_186()) || Global_110607) || Global_30738) || func_185()) || func_184(8, -1)) || func_182()) || func_93()) || func_183()) || func_181()) || Global_111560.f_7683.f_919[iVar0] == 5) || Global_41943 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((IS_PED_RAGDOLL(IS_PED_RAGDOLL()) || IS_PED_RAGDOLL(IS_PED_RAGDOLL())) || IS_PED_RAGDOLL(IS_PED_RAGDOLL(), 1)) || IS_PED_RAGDOLL(IS_PED_RAGDOLL(), 0)) || func_186()) || Global_110607) || Global_30738) || func_185()) || func_184(8, -1)) || func_93()) || func_183()) || func_181()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_186() || GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) > 0) || func_184(8, -1)) || func_181()) || func_180()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_184(8, -1) || func_93()) || func_183()) || func_180()) || func_179())
						{
							return 0;
						}
						if ((IS_PLAYER_SWITCH_IN_PROGRESS() && IS_PLAYER_SWITCH_IN_PROGRESS() != 3) && IS_PLAYER_SWITCH_IN_PROGRESS() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()))
						{
							if ((((((((((((((IS_PED_IN_COMBAT(IS_PED_IN_COMBAT(), 0) || IS_PED_IN_COMBAT(IS_PED_IN_COMBAT()) > 0) || IS_PED_IN_COMBAT(IS_PED_IN_COMBAT())) || IS_PED_IN_COMBAT(IS_PED_IN_COMBAT())) || IS_PED_IN_COMBAT(IS_PED_IN_COMBAT())) || IS_PED_IN_COMBAT(IS_PED_IN_COMBAT(), 1)) || IS_PED_IN_COMBAT(IS_PED_IN_COMBAT())) || func_186()) || Global_30738) || func_185()) || func_184(8, -1)) || func_183()) || func_182()) || func_181()) || Global_111560.f_7683.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((IS_PED_IN_COMBAT(IS_PED_IN_COMBAT(), 0) || !IS_PED_IN_COMBAT(IS_PED_IN_COMBAT())) || !IS_PED_IN_COMBAT(IS_PED_IN_COMBAT())) || !IS_PED_IN_COMBAT()) || IS_PED_IN_COMBAT(IS_PED_IN_COMBAT())) || IS_PED_IN_COMBAT(IS_PED_IN_COMBAT())) || IS_PED_IN_COMBAT(IS_PED_IN_COMBAT())) || IS_PED_IN_COMBAT(IS_PED_IN_COMBAT(), 1)) || func_186()) || func_183()) || Global_110607) || Global_30738) || func_185()) || Global_42561) || func_184(8, -1)) || func_182()) || func_180()) || func_181()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((IS_PED_IN_COMBAT(IS_PED_IN_COMBAT(), 0) || !IS_PED_IN_COMBAT(IS_PED_IN_COMBAT())) || !IS_PED_IN_COMBAT(IS_PED_IN_COMBAT())) || !IS_PED_IN_COMBAT()) || IS_PED_IN_COMBAT(IS_PED_IN_COMBAT(), 0)) || IS_PED_IN_COMBAT(IS_PED_IN_COMBAT())) || IS_PED_IN_COMBAT(IS_PED_IN_COMBAT(), 1)) || IS_PED_IN_COMBAT(IS_PED_IN_COMBAT())) || IS_PED_IN_COMBAT(IS_PED_IN_COMBAT())) || IS_PED_IN_COMBAT(IS_PED_IN_COMBAT())) || IS_PED_IN_COMBAT(IS_PED_IN_COMBAT(), 1)) || IS_PED_IN_COMBAT(IS_PED_IN_COMBAT())) || func_186()) || Global_110607) || Global_30738) || func_185()) || func_184(8, -1)) || func_182()) || func_180()) || func_93()) || func_183()) || func_181())
						{
							return 0;
						}
						break;
				}
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

var func_179()
{
	return Global_98708.f_1;
}

int func_180()
{
	if (Global_95621 != -1)
	{
		return IS_BIT_SET(Global_89487[Global_95621 /*34*/].f_15, 13);
	}
	return 0;
}

int func_181()
{
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_182()
{
	if (Global_76837)
	{
		return 1;
	}
	else if (Global_61465 && !Global_61471)
	{
		return 1;
	}
	return 0;
}

bool func_183()
{
	return Global_98721.f_346 > 0;
}

bool func_184(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1373500.f_203[iParam1];
			}
			break;
	}
	return IS_BIT_SET(Global_1373500.f_1048, iParam0);
}

var func_185()
{
	return Global_1312873;
}

int func_186()
{
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_96177.f_44 == 1;
	}
	return 0;
}

int func_187(int iParam0, vector3 vParam1, char[4] cParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	var uVar0;
	
	if ((((func_127(PLAYER_PED_ID()) && func_127(iParam0->f_28[0])) && !func_146()) && (PLAYER_PED_ID() - iParam0->f_60) > iParam6) && func_191(PLAYER_PED_ID(), vParam1, 1) < fParam7)
	{
		uVar0 = 16;
		func_190(&uVar0, iParam4, iParam0->f_28[0], sParam5, 0, 1);
		func_188(&uVar0, cParam2, sParam3, 7, 0, 0);
		iParam0->f_60 = GET_GAME_TIMER();
		return 1;
	}
	return 0;
}

void func_188(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_189(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	SET_BIT(&Global_19671, 0);
	Global_20808 = iParam3;
	StringCopy(&Global_20795, sParam2, 24);
}

void func_189(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = iParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

void func_190(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76577)
	{
		if (!IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

float func_191(int iParam0, vector3 vParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (!IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = { GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		vVar0 = { GET_ENTITY_COORDS(iParam0, false) };
	}
	return GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, bParam2);
}

int func_192(int iParam0, vector3 vParam1, char[4] cParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, char* sParam7, var uParam8)
{
	var uVar0;
	
	if (!*uParam8 == 3)
	{
		if (func_178(2))
		{
			if (!func_146())
			{
				if (((func_127(PLAYER_PED_ID()) && func_127(iParam0->f_28[0])) && func_127(iParam0->f_28[1])) && func_191(PLAYER_PED_ID(), vParam1, 1) < 20f)
				{
					func_290("start conversation");
					uVar0 = 16;
					if (*uParam8 == 0)
					{
						func_190(&uVar0, iParam4, iParam0->f_28[0], sParam5, 0, 1);
						func_190(&uVar0, iParam6, iParam0->f_28[1], sParam7, 0, 1);
						func_188(&uVar0, cParam2, sParam3, 7, 0, 0);
						*uParam8 = 2;
					}
					else if (*uParam8 == 2)
					{
						func_290("conversation ended");
						*uParam8 = 3;
						return 1;
					}
				}
			}
			else if (((func_194(sParam3) && !*uParam8 == 1) && func_127(PLAYER_PED_ID())) && func_191(PLAYER_PED_ID(), vParam1, 1) >= 20f)
			{
				func_290("pause conversation");
				func_193(1);
				*uParam8 = 1;
			}
			if (func_191(PLAYER_PED_ID(), vParam1, 1) < 20f && *uParam8 == 1)
			{
				func_290("unpause conversation");
				func_193(0);
				*uParam8 = 2;
			}
		}
	}
	return 0;
}

void func_193(int iParam0)
{
	Global_21816 = iParam0;
}

int func_194(char* sParam0)
{
	struct<6> Var0;
	
	Var0 = { func_195() };
	if (ARE_STRINGS_EQUAL(&Var0, sParam0))
	{
		return 1;
	}
	return 0;
}

struct<6> func_195()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		return Global_20424;
	}
	return Var0;
}

void func_196(int iParam0, char* sParam1, vector3 vParam2)
{
	if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
	{
		if (!IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			if (Global_41396 == 17)
			{
				if (*iParam0 != -1)
				{
					func_201(iParam0);
				}
			}
			else if (func_200())
			{
				if (*iParam0 != -1)
				{
					func_201(iParam0);
				}
			}
			else if (*iParam0 == -1)
			{
				if (func_191(PLAYER_PED_ID(), vParam2, 1) <= 100f)
				{
					func_199(iParam0, 1);
				}
			}
			else
			{
				switch (func_198(*iParam0))
				{
					case 1:
						if (ARE_STRINGS_EQUAL(sParam1, "JOSH_1_INT_CONCAT"))
						{
							_REQUEST_CUTSCENE_EX(sParam1, 14, 8);
						}
						else
						{
							REQUEST_CUTSCENE(sParam1, 8);
						}
						_0xF8155A7F03DDFC8E(2);
						func_197(*iParam0, 1);
						break;
					
					case 2:
						STOP_CUTSCENE(0);
						REMOVE_CUTSCENE();
						_0xF8155A7F03DDFC8E(0);
						func_197(*iParam0, 0);
						break;
				}
				if (func_191(PLAYER_PED_ID(), vParam2, 1) > 120f)
				{
					func_201(iParam0);
				}
			}
		}
	}
}

void func_197(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (Global_76573 == iParam0)
		{
			Global_76574 = iParam0;
		}
	}
	else if (Global_76574 == iParam0)
	{
		Global_76574 = -1;
	}
}

int func_198(int iParam0)
{
	if (Global_76573 == iParam0)
	{
		if (Global_76574 == -1)
		{
			if (Global_76572 < GET_FRAME_COUNT())
			{
				return 1;
			}
		}
	}
	else if (Global_76574 == iParam0)
	{
		return 2;
	}
	return 0;
}

void func_199(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	
	if (Global_76570 < 5)
	{
		Global_76559[Global_76570 /*2*/] = 0;
		Global_76559[Global_76570 /*2*/].f_1 = iParam1;
		bVar0 = false;
		while (!bVar0)
		{
			bVar0 = true;
			iVar1 = 0;
			while (iVar1 < Global_76570)
			{
				if (Global_76559[iVar1 /*2*/] == Global_76559[Global_76570 /*2*/])
				{
					Global_76559[Global_76570 /*2*/]++;
					bVar0 = false;
				}
				iVar1++;
			}
		}
		*iParam0 = Global_76559[Global_76570 /*2*/];
		Global_76570++;
		Global_76571 = 1;
	}
	else
	{
		*iParam0 = -1;
	}
}

bool func_200()
{
	return Global_96008;
}

void func_201(int iParam0)
{
	STOP_CUTSCENE(0);
	REMOVE_CUTSCENE();
	func_202(iParam0);
}

void func_202(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (*iParam0 == -1)
	{
		return;
	}
	if (Global_76574 == *iParam0)
	{
		func_197(*iParam0, 0);
	}
	if (Global_76573 == *iParam0)
	{
		Global_76573 = -1;
	}
	bVar0 = false;
	iVar1 = 0;
	while (!bVar0 && iVar1 < Global_76570)
	{
		if (Global_76559[iVar1 /*2*/] == *iParam0)
		{
			bVar0 = true;
		}
		else
		{
			iVar1++;
		}
	}
	if (!bVar0)
	{
		return;
	}
	iVar2 = iVar1;
	while (iVar2 <= (Global_76570 - 2))
	{
		Global_76559[iVar2 /*2*/] = Global_76559[iVar2 + 1 /*2*/];
		Global_76559[iVar2 /*2*/].f_1 = Global_76559[iVar2 + 1 /*2*/].f_1;
		iVar2++;
	}
	Global_76559[(Global_76570 - 1) /*2*/] = -1;
	Global_76559[(Global_76570 - 1) /*2*/].f_1 = 3;
	Global_76570 = (Global_76570 - 1);
	Global_76571 = 1;
	Global_76572 = GET_FRAME_COUNT();
	*iParam0 = -1;
}

void func_203(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_166();
	}
	if (iParam0 == -1)
	{
		return;
	}
	Global_110647[iParam0 /*10*/].f_1 = 1;
}

void func_204(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 52)
	{
		func_206(&(uParam0->f_41[1]));
		func_206(&(uParam0->f_41[2]));
	}
	if (func_127(PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_28 - 1))
		{
			if (func_126(uParam0->f_28[iVar0]))
			{
				if (!IS_PED_IN_ANY_VEHICLE(uParam0->f_28[iVar0], 0))
				{
					SET_ENTITY_COLLISION(uParam0->f_28[iVar0], true, 0);
					FREEZE_ENTITY_POSITION(uParam0->f_28[0], false);
				}
				SET_PED_KEEP_TASK(uParam0->f_28[iVar0], true);
				if (*uParam0 == 34)
				{
					if (func_127(uParam0->f_41[0]))
					{
						SET_ENTITY_COLLISION(uParam0->f_41[0], true, 0);
						FREEZE_ENTITY_POSITION(uParam0->f_41[0], false);
					}
				}
				switch (*uParam0)
				{
					case 19:
						func_205(uParam0->f_28[iVar0]);
						break;
					
					case 8:
						REQUEST_ANIM_DICT("rcmcollect_paperleadinout@");
						while (!HAS_ANIM_DICT_LOADED("rcmcollect_paperleadinout@"))
						{
							wait(0);
						}
						OPEN_SEQUENCE_TASK(&iVar1);
						TASK_PLAY_ANIM(0, "rcmcollect_paperleadinout@", "meditate_getup", 8f, -8f, -1, 8, 0, 0, 0, 0);
						TASK_SMART_FLEE_PED(0, TASK_SMART_FLEE_PED(), 10000f, -1, 0, 0);
						CLOSE_SEQUENCE_TASK(iVar1);
						TASK_PERFORM_SEQUENCE(uParam0->f_28[iVar0], iVar1);
						CLEAR_SEQUENCE_TASK(&iVar1);
						break;
					
					case 0:
					case 1:
						REQUEST_ANIM_DICT("rcmabigail");
						while (!HAS_ANIM_DICT_LOADED("rcmabigail"))
						{
							wait(0);
						}
						OPEN_SEQUENCE_TASK(&iVar1);
						TASK_PLAY_ANIM(0, "rcmabigail", "breakout_base", 8f, -8f, -1, 8, 0, 0, 0, 0);
						TASK_SMART_FLEE_PED(0, TASK_SMART_FLEE_PED(), 10000f, -1, 0, 0);
						CLOSE_SEQUENCE_TASK(iVar1);
						TASK_PERFORM_SEQUENCE(uParam0->f_28[iVar0], iVar1);
						CLEAR_SEQUENCE_TASK(&iVar1);
						break;
					
					case 32:
						REQUEST_ANIM_DICT("rcmminute1");
						while (!HAS_ANIM_DICT_LOADED("rcmminute1"))
						{
							wait(0);
						}
						OPEN_SEQUENCE_TASK(&iVar1);
						if (iVar0 == 0)
						{
							TASK_PLAY_ANIM(0, "rcmminute1", "base_to_idle_joe", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						else
						{
							TASK_PLAY_ANIM(0, "rcmminute1", "base_to_idle_josef", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						TASK_SMART_FLEE_PED(0, TASK_SMART_FLEE_PED(), 10000f, -1, 0, 0);
						CLOSE_SEQUENCE_TASK(iVar1);
						TASK_PERFORM_SEQUENCE(uParam0->f_28[iVar0], iVar1);
						CLEAR_SEQUENCE_TASK(&iVar1);
						break;
					
					case 24:
						REQUEST_ANIM_DICT("special_ped@hao@base");
						while (!HAS_ANIM_DICT_LOADED("special_ped@hao@base"))
						{
							wait(0);
						}
						OPEN_SEQUENCE_TASK(&iVar1);
						TASK_PLAY_ANIM(0, "special_ped@hao@base", "hao_exit", 8f, -8f, -1, 520, 0, 0, 0, 0);
						TASK_SMART_FLEE_PED(0, TASK_SMART_FLEE_PED(), 10000f, -1, 0, 0);
						CLOSE_SEQUENCE_TASK(iVar1);
						TASK_PERFORM_SEQUENCE(uParam0->f_28[iVar0], iVar1);
						CLEAR_SEQUENCE_TASK(&iVar1);
						break;
					
					default:
						CLEAR_PED_SECONDARY_TASK(uParam0->f_28[iVar0]);
						TASK_SMART_FLEE_PED(uParam0->f_28[iVar0], TASK_SMART_FLEE_PED(), 10000f, -1, 0, 0);
						break;
					}
			}
			iVar0++;
		}
	}
}

void func_205(int iParam0)
{
	int iVar0;
	
	if (func_127(PLAYER_PED_ID()) && func_127(iParam0))
	{
		REQUEST_ANIM_DICT("rcmextreme3");
		while (!HAS_ANIM_DICT_LOADED("rcmextreme3"))
		{
			wait(0);
		}
		OPEN_SEQUENCE_TASK(&iVar0);
		TASK_PLAY_ANIM(0, "rcmextreme3", "jump_fall", 1000f, -8f, -1, 8, 0, 0, 0, 0);
		TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
		TASK_PARACHUTE_TO_TARGET(0, 64.6f, -737.8f, 44.2f);
		TASK_SMART_FLEE_PED(0, TASK_SMART_FLEE_PED(), 10000f, -1, 0, 0);
		CLOSE_SEQUENCE_TASK(iVar0);
		TASK_PERFORM_SEQUENCE(iParam0, iVar0);
		CLEAR_SEQUENCE_TASK(&iVar0);
	}
}

void func_206(int iParam0)
{
	if (DOES_ENTITY_EXIST(*iParam0))
	{
		if (IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
		{
			DETACH_ENTITY(*iParam0, 1, true);
		}
		DELETE_OBJECT(iParam0);
	}
}

int func_207(struct<2> Param0, float fParam1, struct<2> Param2, float fParam3, float fParam4)
{
	if (fParam4 < 0f)
	{
		fParam4 = 0f;
	}
	if (ABSF((Param0 - Param2)) <= fParam4)
	{
		if (ABSF((Param0.f_1 - Param2.f_1)) <= fParam4)
		{
			return 1;
		}
	}
	return 0;
}

int func_208(int iParam0)
{
	if (func_127(iParam0))
	{
		if (IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (!IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_209()
{
	if (_0xB56BBBCC2955D9CB())
	{
		SET_CUTSCENE_PED_PROP_VARIATION("Joe", 1, 0, 0, 0);
		SET_CUTSCENE_PED_PROP_VARIATION("Josef", 0, 0, 0, 0);
		SET_CUTSCENE_PED_PROP_VARIATION("Josef", 1, 0, 0, 0);
	}
}

int func_210(var uParam0, bool bParam1)
{
	struct<27> Var0;
	
	if (Global_76577)
	{
		func_290("IS_RC_FINE_AND_IN_RANGE(): The game is running Multiplayer [TERMINATING]");
		return 0;
	}
	func_110(*uParam0, &Var0);
	if ((func_244(*uParam0) || func_242(*uParam0)) || Global_76822 == 1)
	{
		return 1;
	}
	if (!IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
	{
		func_290("IS_RC_FINE_AND_IN_RANGE(): Player out of range [TERMINATING]");
		return 0;
	}
	if (func_238(*uParam0))
	{
		if (*uParam0 == 19)
		{
			func_205(uParam0->f_28[0]);
		}
		func_290("IS_RC_FINE_AND_IN_RANGE(): Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (uParam0->f_25 == 1)
	{
		if (!func_218(uParam0, 1, 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_16 == 0)
	{
		if (!func_218(uParam0, 0, 0))
		{
			return 0;
		}
	}
	if (((((*uParam0 == 16 || *uParam0 == 9) || *uParam0 == 18) || *uParam0 == 22) || *uParam0 == 32) || *uParam0 == 51)
	{
		if (!func_216(uParam0, 1, 1))
		{
			if (*uParam0 == 16)
			{
				func_215(uParam0);
			}
			else
			{
				func_204(uParam0);
			}
			return 0;
		}
	}
	else if (*uParam0 == 24)
	{
		if (!func_216(uParam0, 0, 1))
		{
			func_204(uParam0);
			return 0;
		}
	}
	else if (*uParam0 == 6)
	{
		if (!func_216(uParam0, 0, 1))
		{
			return 0;
		}
	}
	else if (uParam0->f_26 == 1)
	{
		if (!func_216(uParam0, 1, 0))
		{
			func_204(uParam0);
			return 0;
		}
	}
	else if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (!func_216(uParam0, 0, 0))
		{
			func_204(uParam0);
			return 0;
		}
	}
	if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (func_127(uParam0->f_35[0]))
		{
			if (!IS_ENTITY_AT_COORD(uParam0->f_35[0], Var0.f_6, 8f, 8f, 8f, false, true, 0))
			{
				return 0;
			}
		}
	}
	if (*uParam0 == 10)
	{
		if (IS_EXPLOSION_IN_SPHERE(-1, uParam0->f_17[0 /*3*/], 8f))
		{
			func_290("IS_RC_FINE_AND_IN_RANGE(): Explosion near mission trigger [TERMINATING]");
			return 0;
		}
	}
	if (Var0.f_4 != 17)
	{
		if (!IS_BIT_SET(Var0.f_26, func_105()))
		{
			func_290("IS_RC_FINE_AND_IN_RANGE(): No longer a valid player character to launch mission");
			return 0;
		}
	}
	if (func_214(&(uParam0->f_48)) && bParam1)
	{
		func_211(uParam0->f_28[0], &(uParam0->f_48), *uParam0);
	}
	return 1;
}

void func_211(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_127(iParam0))
	{
		switch (uParam1->f_3)
		{
			case 1:
				if (func_214(uParam1))
				{
					if (HAS_ANIM_DICT_LOADED(*uParam1))
					{
						CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
						if (iParam2 != 21)
						{
							if (func_69(uParam1->f_5, 0f, 0f, 0f, 0))
							{
								TASK_PLAY_ANIM(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
							}
							else
							{
								OPEN_SEQUENCE_TASK(&iVar0);
								if (func_213(uParam1))
								{
									TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
								}
								else
								{
									TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
								}
								TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
								CLOSE_SEQUENCE_TASK(iVar0);
								TASK_PERFORM_SEQUENCE(iParam0, iVar0);
								CLEAR_SEQUENCE_TASK(&iVar0);
							}
						}
						else
						{
							TASK_PLAY_ANIM_ADVANCED(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 3);
						}
						uParam1->f_3 = 2;
					}
					else
					{
						uParam1->f_3 = 0;
					}
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			
			case 2:
				if (!func_213(uParam1) || !IS_ENTITY_PLAYING_ANIM(iParam0, *uParam1, uParam1->f_2, 3))
				{
					if (func_212(iParam2) && !IS_PED_FACING_PED(iParam0, IS_PED_FACING_PED(), 25f))
					{
						TASK_TURN_PED_TO_FACE_ENTITY(iParam0, TASK_TURN_PED_TO_FACE_ENTITY(), 0);
						uParam1->f_3 = 5;
					}
					else if ((func_213(uParam1) && uParam1->f_4 == 0) && GET_DISTANCE_BETWEEN_COORDS(GET_DISTANCE_BETWEEN_COORDS(GET_DISTANCE_BETWEEN_COORDS(), true), GET_DISTANCE_BETWEEN_COORDS(iParam0, true), true) < 20f)
					{
						uParam1->f_3 = 3;
					}
				}
				break;
			
			case 3:
				OPEN_SEQUENCE_TASK(&iVar1);
				if (func_69(uParam1->f_5, 0f, 0f, 0f, 0))
				{
					TASK_PLAY_ANIM(0, *uParam1, uParam1->f_2, 4f, -4f, -1, 262144, 0, 0, 0, 0);
					TASK_PLAY_ANIM(0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
				}
				else
				{
					TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 4f, -4f, -1, 262152, 0, 2, 0);
					TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
				}
				CLOSE_SEQUENCE_TASK(iVar1);
				TASK_PERFORM_SEQUENCE(iParam0, iVar1);
				CLEAR_SEQUENCE_TASK(&iVar1);
				uParam1->f_4 = 1;
				if (func_212(iParam2))
				{
					uParam1->f_3 = 2;
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			
			case 5:
				if (!func_212(iParam2) || IS_PED_FACING_PED(iParam0, IS_PED_FACING_PED(), 10f))
				{
					if (func_69(uParam1->f_5, 0f, 0f, 0f, 0))
					{
						TASK_PLAY_ANIM(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
					}
					else
					{
						TASK_PLAY_ANIM_ADVANCED(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
					}
					uParam1->f_3 = 2;
				}
				break;
			}
	}
}

int func_212(int iParam0)
{
	if (iParam0 == 17 || iParam0 == 20)
	{
		return 1;
	}
	return 0;
}

int func_213(var uParam0)
{
	if (IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
	{
		return 0;
	}
	return 1;
}

int func_214(var uParam0)
{
	if (IS_STRING_NULL_OR_EMPTY(*uParam0) || IS_STRING_NULL_OR_EMPTY(uParam0->f_1))
	{
		return 0;
	}
	return 1;
}

void func_215(var uParam0)
{
	int iVar0;
	
	if (func_127(PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_28 - 1))
		{
			if (func_126(uParam0->f_28[iVar0]))
			{
				SET_PED_COMBAT_ATTRIBUTES(uParam0->f_28[iVar0], 1, false);
				SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[iVar0], false);
				SET_PED_KEEP_TASK(uParam0->f_28[iVar0], true);
				TASK_COMBAT_PED(uParam0->f_28[iVar0], TASK_COMBAT_PED(), 0, 16);
				SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_28[iVar0]));
			}
			iVar0++;
		}
	}
}

int func_216(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam1)
	{
		iVar1 = (uParam0->f_35 - 1);
	}
	else
	{
		iVar1 = 0;
	}
	if (func_126(PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (DOES_ENTITY_EXIST(uParam0->f_35[iVar0]))
			{
				if (IS_ENTITY_DEAD(uParam0->f_35[iVar0], 0))
				{
					func_290("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is dead [TERMINATING]");
					return 0;
				}
				if (!IS_VEHICLE_DRIVEABLE(uParam0->f_35[iVar0], 0))
				{
					func_290("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is not driveable [TERMINATING]");
					return 0;
				}
				if (HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_35[iVar0], HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(), 0))
				{
					func_290("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has been damaged by player [TERMINATING]");
					return 0;
				}
				if (GET_ENTITY_HEALTH(uParam0->f_35[iVar0]) < 850)
				{
					func_290("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle health is less than 850 [TERMINATING]");
					return 0;
				}
				if (bParam2)
				{
					if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
					{
						if (IS_ENTITY_TOUCHING_ENTITY(uParam0->f_35[iVar0], IS_ENTITY_TOUCHING_ENTITY()) && IS_ENTITY_TOUCHING_ENTITY(IS_ENTITY_TOUCHING_ENTITY()) > 5f)
						{
							func_290("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player vehicle at speed [TERMINATING]");
							return 0;
						}
						iVar2 = GET_PLAYERS_LAST_VEHICLE();
						if (func_208(iVar2))
						{
							if (GET_ENTITY_MODEL(iVar2) == joaat("towtruck") || GET_ENTITY_MODEL(iVar2) == joaat("towtruck2"))
							{
								if (func_208(uParam0->f_35[iVar0]))
								{
									if (IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar2, uParam0->f_35[iVar0]))
									{
										func_290("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is being towed by player [TERMINATING]");
										return 0;
									}
								}
							}
						}
					}
					else
					{
						iVar3 = GET_PLAYERS_LAST_VEHICLE();
						if (func_208(iVar3))
						{
							if (IS_ENTITY_TOUCHING_ENTITY(uParam0->f_35[iVar0], iVar3) && IS_ENTITY_TOUCHING_ENTITY(iVar3) > 6f)
							{
								func_290("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player's last known vehicle at speed (player bailed out?) [TERMINATING]");
								return 0;
							}
						}
						if (*uParam0 == 16)
						{
							if (func_217(PLAYER_PED_ID(), uParam0->f_35[iVar0]))
							{
								func_290("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Player attempting to jack Epsilon vehicle [TERMINATING]");
								return 0;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_217(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!IS_PED_INJURED(iParam0))
	{
		if (IS_VEHICLE_DRIVEABLE(iParam1, 0))
		{
			iVar0 = GET_VEHICLE_PED_IS_USING(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_218(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = (uParam0->f_28 - 1);
	}
	else
	{
		iVar1 = 0;
	}
	if (*uParam0 == 16)
	{
		iParam2 = 1;
	}
	if (*uParam0 == 30)
	{
		iParam2 = 1;
	}
	if (func_126(PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (DOES_ENTITY_EXIST(uParam0->f_28[iVar0]))
			{
				if (!IS_PED_INJURED(uParam0->f_28[iVar0]))
				{
					if (IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE()))
					{
						if (IS_ENTITY_TOUCHING_ENTITY(IS_ENTITY_TOUCHING_ENTITY(), uParam0->f_28[iVar0]))
						{
							if (iParam2 == 0)
							{
								func_204(uParam0);
							}
							else
							{
								func_215(uParam0);
							}
							if (func_146())
							{
								func_144();
							}
							func_290("STEP_5_COMMON_RCfineAndInRange - Random character is being pushed by car [TERMINATING]");
							return 0;
						}
					}
					if ((HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(uParam0->f_28[iVar0]) || HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(uParam0->f_28[iVar0])) || HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(uParam0->f_28[iVar0]))
					{
						if (iParam2 == 0)
						{
							func_204(uParam0);
						}
						else
						{
							func_215(uParam0);
						}
						func_290("STEP_5_COMMON_RCfineAndInRange - Random character has been damaged by something [TERMINATING]");
						return 0;
					}
					if (IS_PED_RAGDOLL(uParam0->f_28[iVar0]))
					{
						if (IS_ENTITY_AT_ENTITY(uParam0->f_28[iVar0], IS_ENTITY_AT_ENTITY(), 3f, 3f, 3f, 0, 1, 0))
						{
							if (iParam2 == 0)
							{
								func_204(uParam0);
							}
							else
							{
								func_215(uParam0);
							}
							func_290("STEP_5_COMMON_RCfineAndInRange - Random character is in ragdoll [TERMINATING]");
							return 0;
						}
					}
					if (func_237(*uParam0))
					{
						if (!func_158(*uParam0))
						{
							if (func_232(uParam0->f_28[iVar0], 1, 0, 0, 0))
							{
								if (iParam2 == 0)
								{
									func_204(uParam0);
								}
								else
								{
									func_215(uParam0);
								}
								func_290("STEP_5_COMMON_RCfineAndInRange - Player is shooting near the Random Character [TERMINATING]");
								return 0;
							}
						}
						if (IS_EXPLOSION_IN_SPHERE(-1, IS_EXPLOSION_IN_SPHERE(uParam0->f_28[iVar0], true), 15f))
						{
							if (iParam2 == 0)
							{
								func_204(uParam0);
							}
							else
							{
								func_215(uParam0);
							}
							func_290("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (func_220(uParam0->f_28[iVar0], 1126825984))
						{
							if (iParam2 == 0)
							{
								func_204(uParam0);
							}
							else
							{
								func_215(uParam0);
							}
							func_290("STEP_5_COMMON_RCfineAndInRange - Random character is in combat [TERMINATING]");
							return 0;
						}
					}
					if (!func_219(*uParam0))
					{
						if (IS_EXPLOSION_IN_SPHERE(-1, IS_EXPLOSION_IN_SPHERE(uParam0->f_28[iVar0], true), 5f))
						{
							if (iParam2 == 0)
							{
								func_204(uParam0);
							}
							else
							{
								func_215(uParam0);
							}
							func_290("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) > 0)
						{
							if (iParam2 == 0)
							{
								func_204(uParam0);
							}
							else
							{
								func_215(uParam0);
							}
							func_290("STEP_5_COMMON_RCfineAndInRange - Player has a wanted level [TERMINATING]");
							return 0;
						}
					}
				}
				else
				{
					func_290("STEP_5_COMMON_RCfineAndInRange - Random character injured / dead [TERMINATING]");
					if (*uParam0 == 34)
					{
						if (func_127(uParam0->f_41[0]))
						{
							SET_ENTITY_COLLISION(uParam0->f_41[0], true, 0);
							FREEZE_ENTITY_POSITION(uParam0->f_41[0], false);
						}
					}
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_219(int iParam0)
{
	if (((iParam0 == 2 || iParam0 == 3) || iParam0 == 52) || iParam0 == 53)
	{
		return 1;
	}
	return 0;
}

int func_220(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_127(PLAYER_PED_ID()) && func_127(iParam0))
	{
		if (func_231(iParam0) || IS_PLAYER_TARGETTING_ENTITY(IS_PLAYER_TARGETTING_ENTITY(), iParam0))
		{
			if (IS_PED_ARMED(IS_PED_ARMED(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (IS_ENTITY_AT_ENTITY(IS_ENTITY_AT_ENTITY(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_221(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_221(int iParam0, float fParam1)
{
	return func_222(iParam0, PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_222(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	vector3 vVar1;
	int iVar2;
	
	iVar2 = func_230(iParam0, iParam1);
	if (!func_127(iParam0) || !func_127(iParam1))
	{
		if (iVar2 != -1)
		{
			func_229(&(Local_37[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_226(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_225();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_37[iVar2 /*4*/].f_1 = iParam0;
		Local_37[iVar2 /*4*/].f_2 = iParam1;
	}
	vVar1 = { GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_223(&(Local_37[iVar2 /*4*/]), vVar1, iParam1, &(Local_37[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (GET_GAME_TIMER() - Local_37[iVar2 /*4*/].f_3) < iParam4);
}

int func_223(var uParam0, vector3 vParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	var uVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	if (!func_127(iParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		vVar1 = { func_224(iParam2, iParam5) };
		*uParam0 = START_SHAPE_TEST_LOS_PROBE(vParam1, vVar1 + vVar1 - vParam1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam4, 7);
		return 0;
	}
	iVar4 = GET_SHAPE_TEST_RESULT(*uParam0, &uVar0, &vVar1, &uVar2, &iVar3);
	if (iVar4 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar4 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (IS_ENTITY_A_PED(iVar3))
	{
		func_127(iVar3);
		if (GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3) == iParam2)
		{
			if (bLocal_38)
			{
				DRAW_DEBUG_LINE_WITH_TWO_COLOURS(vParam1, DRAW_DEBUG_LINE_WITH_TWO_COLOURS(iParam2, true), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam3 = GET_GAME_TIMER();
			return 1;
		}
		return 0;
	}
	if (IS_ENTITY_A_VEHICLE(iVar3))
	{
		func_127(iVar3);
		if (IS_PED_IN_ANY_VEHICLE(iParam2, 0))
		{
			if (GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar3) == GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam2, 0))
			{
				if (bLocal_38)
				{
					DRAW_DEBUG_LINE_WITH_TWO_COLOURS(vParam1, DRAW_DEBUG_LINE_WITH_TWO_COLOURS(iParam2, true), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam3 = GET_GAME_TIMER();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_224(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = GET_RANDOM_INT_IN_RANGE(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return GET_ENTITY_COORDS(iParam0, true);
	}
	else if (iParam1 == 1)
	{
		return GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return GET_PED_BONE_COORDS(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return GET_PED_BONE_COORDS(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return GET_PED_BONE_COORDS(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return GET_PED_BONE_COORDS(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return GET_PED_BONE_COORDS(iParam0, 36864, 0f, 0f, 0f);
	}
	return GET_ENTITY_COORDS(iParam0, true);
}

int func_225()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37)
	{
		if ((Local_37[iVar0 /*4*/] == 0 && Local_37[iVar0 /*4*/].f_1 == 0) && Local_37[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_226(int iParam0, int iParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_228(GET_ENTITY_COORDS(iParam1, true) - GET_ENTITY_COORDS(iParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		vVar1 = { GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	else
	{
		vVar1 = { func_228(GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_227(vVar1, vVar0);
	if (fVar2 <= cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_227(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_228(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

void func_229(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_230(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37)
	{
		if (Local_37[iVar0 /*4*/].f_1 == iParam0 && Local_37[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_231(int iParam0)
{
	if (IS_PLAYER_FREE_AIMING_AT_ENTITY(IS_PLAYER_FREE_AIMING_AT_ENTITY(), iParam0) && IS_PLAYER_FREE_AIMING_AT_ENTITY(IS_PLAYER_FREE_AIMING_AT_ENTITY(), 6))
	{
		return 1;
	}
	return 0;
}

int func_232(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_127(PLAYER_PED_ID()) && func_127(iParam0))
	{
		GET_CURRENT_PED_WEAPON(GET_CURRENT_PED_WEAPON(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_236(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_233(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (IS_PED_CURRENT_WEAPON_SILENCED(IS_PED_CURRENT_WEAPON_SILENCED()))
			{
				if (IS_PED_SHOOTING(IS_PED_SHOOTING()))
				{
					if (IS_BULLET_IN_AREA(IS_BULLET_IN_AREA(iParam0, true), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_236(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_233(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_233(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { GET_ENTITY_COORDS(iParam0, true) };
	vVar1 = { vVar0 };
	vVar0.x = (vVar0.x - fParam1);
	vVar0.y = (vVar0.y - fParam1);
	vVar0.z = (vVar0.z - fParam1);
	vVar1.x = (vVar1.x + fParam1);
	vVar1.y = (vVar1.y + fParam1);
	vVar1.z = (vVar1.z + fParam1);
	if (bParam2)
	{
		if (((IS_PROJECTILE_TYPE_WITHIN_DISTANCE(IS_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, true), joaat("weapon_grenade"), fParam1, 1) || IS_PROJECTILE_TYPE_WITHIN_DISTANCE(IS_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, true), joaat("weapon_molotov"), fParam1, 1)) || IS_PROJECTILE_TYPE_WITHIN_DISTANCE(IS_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, true), joaat("weapon_smokegrenade"), fParam1, 1)) || IS_PROJECTILE_TYPE_WITHIN_DISTANCE(IS_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, true), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_234(iParam0, fParam1))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_234(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (IS_PROJECTILE_IN_AREA(vVar0, vVar1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_234(int iParam0, float fParam1)
{
	var uVar0;
	vector3 vVar1;
	
	if ((((_GET_PROJECTILE_NEAR_PED(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0) || _GET_PROJECTILE_NEAR_PED(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0)) || _GET_PROJECTILE_NEAR_PED(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0)) || _GET_PROJECTILE_NEAR_PED(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0)) || _GET_PROJECTILE_NEAR_PED(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0))
	{
		if (func_235(iParam0, vVar1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_235(int iParam0, vector3 vParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_228(vParam1 - GET_ENTITY_COORDS(iParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		vVar1 = { GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	else
	{
		vVar1 = { func_228(GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_227(vVar1, vVar0);
	if (fVar2 <= cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_236(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (IS_PED_SHOOTING(IS_PED_SHOOTING()))
		{
			if (IS_ENTITY_AT_ENTITY(IS_ENTITY_AT_ENTITY(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (IS_BULLET_IN_AREA(IS_BULLET_IN_AREA(iParam0, true), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_237(int iParam0)
{
	if (((((iParam0 == 2 || iParam0 == 3) || iParam0 == 34) || iParam0 == 11) || iParam0 == 52) || iParam0 == 53)
	{
		return 0;
	}
	return 1;
}

int func_238(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_166();
	}
	if (iParam0 == -1)
	{
		return 1;
	}
	if (func_244(iParam0))
	{
		return 0;
	}
	if (!func_163(4))
	{
		if (func_242(iParam0))
		{
		}
		else
		{
			return 1;
		}
	}
	if (func_241() && !func_240())
	{
		return 1;
	}
	if (!func_239(iParam0))
	{
		if (!IS_PED_INJURED(IS_PED_INJURED()))
		{
			if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) != 0)
			{
				return 1;
			}
		}
	}
	if (!IS_BIT_SET(Global_111560.f_18569[iParam0 /*6*/], 2))
	{
		return 1;
	}
	return 0;
}

int func_239(int iParam0)
{
	if ((((iParam0 == 5 || iParam0 == 6) || iParam0 == 41) || iParam0 == 60) || iParam0 == 61)
	{
		return 1;
	}
	return 0;
}

int func_240()
{
	if (IS_PC_VERSION())
	{
		if (_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_241()
{
	if (Global_95621 != -1)
	{
		return IS_BIT_SET(Global_89487[Global_95621 /*34*/].f_15, 20);
	}
	return 0;
}

int func_242(int iParam0)
{
	if ((func_243() && Global_98669.f_11 == 6) && iParam0 == func_167(&(Global_98669.f_3), 0))
	{
		return 1;
	}
	return 0;
}

int func_243()
{
	if (((Global_98669 == 13 || Global_98669 == 10) || Global_98669 == 11) || Global_98669 == 12)
	{
		return 0;
	}
	return 1;
}

int func_244(int iParam0)
{
	if (func_108(0))
	{
		if (Global_76823.f_1 == 7)
		{
			if (Global_76823 == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_245()
{
	return ADD_SCENARIO_BLOCKING_AREA(-309.1f, 6205.4f, 30f, -279.33f, 6217.98f, 40f, 0, 1, 1, 1);
}

int func_246(int iParam0)
{
	switch (*iParam0)
	{
		case 32:
			if (!func_258(iParam0))
			{
				return 0;
			}
			break;
		
		case 33:
			if (!func_257(iParam0))
			{
				return 0;
			}
			break;
		
		case 34:
			if (!func_247(iParam0))
			{
				return 0;
			}
			break;
	}
	func_290("Created initial scene");
	return 1;
}

int func_247(var uParam0)
{
	int iVar0[5];
	int iVar1;
	bool bVar2;
	
	iVar0[0] = joaat("sabregt");
	iVar0[1] = joaat("bison");
	iVar0[2] = iLocal_54;
	iVar0[3] = -741944541;
	iVar0[4] = joaat("prop_cs_rolled_paper");
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 4;
			uParam0->f_27 = 0;
			StringCopy(&(uParam0->f_9), "MMB_3_RCM", 24);
			uParam0->f_25 = 1;
			uParam0->f_17[0 /*3*/] = { -303.512f, 6211.81f, 30.48759f };
			uParam0->f_17[1 /*3*/] = { 20f, 20f, 3f };
			func_256(&(uParam0->f_48), "rcmminute3base", "base", "beckon");
			uParam0->f_48.f_5 = { -303.73f, 6211.56f, 31.49f };
			uParam0->f_48.f_8 = { 0f, 0f, -2.8f };
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			iLocal_51 = 1;
			return 0;
			break;
		
		case 1:
			if (!func_255(&iVar0) || !func_254(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_51 = 2;
			return 0;
			break;
		
		case 2:
			bVar2 = true;
			if (!DOES_ENTITY_EXIST(uParam0->f_41[0]))
			{
				func_253(&(uParam0->f_41[0]), iVar0[3], -303.74f, 6211.56f, 30.49f, -176.77f);
				SET_ENTITY_COLLISION(uParam0->f_41[0], false, 0);
				FREEZE_ENTITY_POSITION(uParam0->f_41[0], true);
				return 0;
			}
			if (!DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (func_250(&(uParam0->f_28[0]), 59, uParam0->f_48.f_5, -2.8f, "RCM MINUTE - MANUEL", 1))
				{
					SET_PED_PROP_INDEX(uParam0->f_28[0], 0, 0, 0, false);
					SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uParam0->f_28[0], 0);
					if (func_126(PLAYER_PED_ID()))
					{
						TASK_LOOK_AT_ENTITY(uParam0->f_28[0], TASK_LOOK_AT_ENTITY(), -1, 2050, 4);
					}
				}
				else
				{
					bVar2 = false;
				}
			}
			if (!DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				func_248(&(uParam0->f_35[0]), iVar0[0], -281.93f, 6198.32f, 30.77f, -135.32f);
				SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 1);
				SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar0[0], true);
			}
			if (!DOES_ENTITY_EXIST(uParam0->f_35[1]))
			{
				func_248(&(uParam0->f_35[1]), iVar0[1], -291.72f, 6208.33f, 30.87f, -134.5016f);
				SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[1], 0);
				SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar0[1], true);
			}
			if (!DOES_ENTITY_EXIST(uParam0->f_41[1]))
			{
				func_253(&(uParam0->f_41[1]), iVar0[4], -303.74f, 6211.56f, 30.49f, -176.77f);
				ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[1], uParam0->f_28[0], ATTACH_ENTITY_TO_ENTITY(uParam0->f_28[0], 18905), 0.12f, 0f, 0.03f, 90f, 0f, 90f, 0, 0, 0, 0, 2, 1);
			}
			if (bVar2)
			{
				iLocal_51 = 3;
			}
			break;
		
		case 3:
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar1]);
				iVar1++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_248(int iParam0, int iParam1, vector3 vParam2, float fParam3)
{
	func_249(iParam0);
	*iParam0 = CREATE_VEHICLE(iParam1, vParam2, fParam3, true, true, false);
	if (DOES_ENTITY_EXIST(*iParam0))
	{
		SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 1084227584);
		SET_ENTITY_HEALTH(*iParam0, 1000, 0);
	}
}

void func_249(int iParam0)
{
	if (DOES_ENTITY_EXIST(*iParam0))
	{
		if (!IS_ENTITY_A_MISSION_ENTITY(*iParam0))
		{
			SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, 0);
		}
		if (func_208(*iParam0))
		{
			if (IS_ENTITY_A_MISSION_ENTITY(*iParam0) && IS_ENTITY_A_MISSION_ENTITY(*iParam0, 1))
			{
				if (func_127(PLAYER_PED_ID()))
				{
					if (IS_PED_IN_VEHICLE(IS_PED_IN_VEHICLE(), *iParam0, 0))
					{
						SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
						return;
					}
				}
				DELETE_VEHICLE(iParam0);
			}
		}
		else
		{
			if (func_127(PLAYER_PED_ID()))
			{
				if (IS_PED_IN_VEHICLE(IS_PED_IN_VEHICLE(), *iParam0, 0))
				{
					SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
					return;
				}
			}
			DELETE_VEHICLE(iParam0);
		}
	}
}

int func_250(int iParam0, int iParam1, vector3 vParam2, float fParam3, char* sParam4, int iParam5)
{
	if (func_251(iParam0, iParam1, vParam2, fParam3, 1))
	{
		if (DOES_ENTITY_EXIST(*iParam0))
		{
			if (!IS_ENTITY_DEAD(*iParam0, 0))
			{
				SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
				SET_PED_MONEY(*iParam0, 0);
				if (iParam5 == 1)
				{
					SET_PED_CAN_BE_TARGETTED(*iParam0, false);
				}
			}
			SET_PED_NAME_DEBUG(*iParam0, sParam4);
		}
		return 1;
	}
	return 0;
}

int func_251(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_36(iParam1))
	{
		iVar0 = func_293(iParam1);
		REQUEST_MODEL(iVar0);
		if (HAS_MODEL_LOADED(iVar0))
		{
			if (DOES_ENTITY_EXIST(*iParam0))
			{
				DELETE_PED(iParam0);
			}
			*iParam0 = CREATE_PED(26, iVar0, vParam2, fParam3, 0, false);
			SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (GET_PED_DRAWABLE_VARIATION(*iParam0, 3) == 0)
				{
					SET_PED_COMPONENT_VARIATION(*iParam0, 5, 2, 0, 0);
				}
			}
			func_252(*iParam0, iParam1);
			if (bParam4)
			{
				SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_252(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_94533[(iVar0 - 3)] = uParam0;
	return 1;
}

void func_253(int iParam0, int iParam1, vector3 vParam2, float fParam3)
{
	func_206(iParam0);
	*iParam0 = CREATE_OBJECT(iParam1, vParam2, true, true, false);
	SET_ENTITY_HEADING(*iParam0, fParam3);
}

int func_254(var uParam0)
{
	if (func_214(uParam0))
	{
		REQUEST_ANIM_DICT(*uParam0);
		if (HAS_ANIM_DICT_LOADED(*uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_255(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (!HAS_MODEL_LOADED((*iParam0)[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_256(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	*uParam0 = sParam1;
	uParam0->f_1 = sParam2;
	uParam0->f_2 = sParam3;
	REQUEST_ANIM_DICT(*uParam0);
	uParam0->f_5 = { 0f, 0f, 0f };
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_3 = 1;
	uParam0->f_4 = 0;
}

int func_257(var uParam0)
{
	int iVar0[1];
	int iVar1;
	
	iVar0[0] = iLocal_55;
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 1;
			uParam0->f_15 = 7f;
			uParam0->f_27 = 0;
			StringCopy(&(uParam0->f_9), "MMB_2_RCM", 24);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			iLocal_51 = 1;
			return 0;
			break;
		
		case 1:
			if (!func_255(&iVar0))
			{
				return 0;
			}
			iLocal_51 = 2;
			return 0;
			break;
		
		case 2:
			func_248(&(uParam0->f_35[0]), iVar0[0], 20.8f, 4532.65f, 104.66f, 284.7f);
			if (DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 2);
				_SET_VEHICLE_DOOR_CAN_BREAK(uParam0->f_35[0], 5, false);
				SET_VEHICLE_DIRT_LEVEL(uParam0->f_35[0], 14f);
				SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar0[0], true);
			}
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar1]);
				iVar1++;
			}
			return 1;
			break;
	}
	return 0;
}

int func_258(var uParam0)
{
	int iVar0[4];
	int iVar1;
	bool bVar2;
	
	iVar0[0] = iLocal_55;
	iVar0[1] = joaat("surfer2");
	iVar0[2] = iLocal_52;
	iVar0[3] = iLocal_53;
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 15f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			uParam0->f_26 = 1;
			StringCopy(&(uParam0->f_9), "MMB_1_RCM", 24);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			REQUEST_ANIM_DICT("rcmminute1");
			CLEAR_AREA(321.69f, 3408.64f, 35.34f, 10f, 1, 0, 0, false);
			iLocal_51 = 1;
			break;
		
		case 1:
			CLEAR_AREA(321.69f, 3408.64f, 35.34f, 10f, 1, 0, 0, false);
			if (!func_255(&iVar0) || !HAS_ANIM_DICT_LOADED("rcmminute1"))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		
		case 2:
			bVar2 = true;
			if (!DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (func_250(&(uParam0->f_28[0]), 56, 329.3f, 3404.2f, 35.8f, -174.9f, "RCM MINUTE - JOE", 1))
				{
					SET_PED_PROP_INDEX(uParam0->f_28[0], 1, 0, 0, false);
				}
				else
				{
					bVar2 = false;
				}
			}
			if (!DOES_ENTITY_EXIST(uParam0->f_28[1]))
			{
				if (func_250(&(uParam0->f_28[1]), 57, 328.1f, 3403.8f, 35.8f, -149.6f, "RCM MINUTE - JOSEF", 1))
				{
					SET_PED_PROP_INDEX(uParam0->f_28[1], 0, 0, 0, false);
					SET_PED_PROP_INDEX(uParam0->f_28[1], 1, 0, 0, false);
				}
				else
				{
					bVar2 = false;
				}
			}
			if (!DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				func_248(&(uParam0->f_35[0]), iVar0[0], 321.69f, 3408.64f, 35.34f, -105.8f);
				func_259(uParam0->f_35[0], iVar0[0]);
			}
			if (!DOES_ENTITY_EXIST(uParam0->f_35[1]))
			{
				func_248(&(uParam0->f_35[1]), iVar0[1], 329.49f, 3402.71f, 36.29f, 284.36f);
				func_259(uParam0->f_35[1], iVar0[1]);
				SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uParam0->f_35[1], 0);
			}
			if (bVar2)
			{
				iLocal_51 = 3;
			}
			break;
		
		case 3:
			if (HAS_ANIM_DICT_LOADED("rcmminute1"))
			{
				if (func_127(uParam0->f_28[0]))
				{
					if (!IS_ENTITY_PLAYING_ANIM(uParam0->f_28[0], "rcmminute1", "base_joe", 3))
					{
						CLEAR_PED_TASKS(uParam0->f_28[0]);
						TASK_PLAY_ANIM(uParam0->f_28[0], "rcmminute1", "base_joe", 8f, -8f, -1, 1, 0, 0, 0, 0);
						SET_PED_CONFIG_FLAG(uParam0->f_28[0], 185, true);
					}
				}
				if (func_127(uParam0->f_28[1]))
				{
					CLEAR_PED_TASKS(uParam0->f_28[1]);
					TASK_PLAY_ANIM(uParam0->f_28[1], "rcmminute1", "base_josef", 8f, -8f, -1, 1, 0, 0, 0, 0);
					SET_PED_CONFIG_FLAG(uParam0->f_28[1], 185, true);
				}
			}
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar1]);
				iVar1++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_259(int iParam0, int iParam1)
{
	if (DOES_ENTITY_EXIST(iParam0))
	{
		SET_VEHICLE_ALARM(iParam0, 0);
		SET_VEHICLE_DOORS_LOCKED(iParam0, 2);
		SET_VEHICLE_MODEL_IS_SUPPRESSED(iParam1, true);
		SET_VEHICLE_AUTOMATICALLY_ATTACHES(iParam0, false, 0);
		_0x2B6747FAA9DB9D6B(iParam0, 1);
	}
}

int func_260(int iParam0)
{
	struct<27> Var0;
	int iVar1;
	
	func_110(iParam0, &Var0);
	iVar1 = func_105();
	if (iVar1 == 145)
	{
		return 1;
	}
	else if ((iVar1 != 1 && iVar1 != 0) && iVar1 != 2)
	{
		return 1;
	}
	if (!IS_BIT_SET(Var0.f_26, iVar1))
	{
		return 1;
	}
	return 0;
}

int func_261(int iParam0)
{
	char* sVar0;
	
	if (Global_76577)
	{
		func_290("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
		return 0;
	}
	if (!Global_111560.f_9080 && !func_108(1))
	{
		func_290("STEP_3_COMMON_CanRCLaunch - Script denied, game flow is not active");
		return 0;
	}
	if (!func_262(iParam0))
	{
		Global_110647[iParam0 /*10*/].f_1 = 1;
		func_290("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (Global_98669.f_11 == 6)
	{
		if (Global_98669 < 9)
		{
			func_110(iParam0, &sVar0);
			if (ARE_STRINGS_EQUAL(&(Global_98669.f_3), sVar0))
			{
				func_290("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
				return 0;
			}
		}
	}
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("candidate_controller")) == 0)
	{
		Global_110647[iParam0 /*10*/].f_1 = 1;
		func_290("STEP_3_COMMON_CanRCLaunch - Script denied as candidate_controller is not running. [TERMINATING]");
		return 0;
	}
	return 1;
}

int func_262(int iParam0)
{
	var uVar0;
	
	func_110(iParam0, &uVar0);
	if (!func_163(4))
	{
		if (func_242(iParam0))
		{
		}
		else
		{
			return 0;
		}
	}
	if (func_241() && !func_240())
	{
		return 0;
	}
	if (func_268(iParam0))
	{
		return 0;
	}
	if (iParam0 == -1)
	{
		iParam0 = func_166();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_244(iParam0))
	{
		if (!func_267(iParam0))
		{
			return 0;
		}
		if (!func_266(iParam0))
		{
			return 0;
		}
		if (func_265(iParam0))
		{
			return 0;
		}
	}
	if (iParam0 == 58)
	{
		if (func_263(5))
		{
			Global_110647[iParam0 /*10*/].f_3 = 0;
		}
	}
	if (Global_110647[iParam0 /*10*/].f_3 == 1)
	{
		return 0;
	}
	return 1;
}

int func_263(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (Global_98721.f_343 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_263(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!IS_PED_INJURED(IS_PED_INJURED()))
	{
		func_264(iParam0, &sVar1);
		iVar2 = GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_93737[iParam0 /*10*/].f_3, &sVar1);
		if (iVar2 != 0 && Global_98721.f_343 == iVar2)
		{
			return 1;
		}
	}
	return 0;
}

bool func_264(int iParam0, char* sParam1)
{
	StringCopy(sParam1, "", 32);
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "v_michael", 32);
			break;
		
		case 5:
			StringCopy(sParam1, "v_franklins", 32);
			break;
		
		case 6:
			StringCopy(sParam1, "v_franklinshouse", 32);
			break;
		
		case 2:
		case 1:
			if (IS_IPL_ACTIVE("TrevorsTrailer"))
			{
				StringCopy(sParam1, "v_trailer", 32);
			}
			else if (IS_IPL_ACTIVE("TrevorsTrailerTidy"))
			{
				StringCopy(sParam1, "V_TrailerTIDY", 32);
			}
			else if (IS_IPL_ACTIVE("TrevorsTrailerTrash"))
			{
				StringCopy(sParam1, "V_TrailerTRASH", 32);
			}
			break;
		
		case 3:
			StringCopy(sParam1, "v_trevors", 32);
			break;
		
		case 4:
			StringCopy(sParam1, "v_strip3", 32);
			break;
		
		case 8:
		case 7:
		case 9:
			StringCopy(sParam1, "v_psycheoffice", 32);
			break;
	}
	return !ARE_STRINGS_EQUAL(sParam1, "");
}

bool func_265(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return IS_BIT_SET(Global_111560.f_18569[iParam0 /*6*/], 3);
}

bool func_266(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return IS_BIT_SET(Global_111560.f_18569[iParam0 /*6*/], 2);
}

bool func_267(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return IS_BIT_SET(Global_111560.f_18569[iParam0 /*6*/], 0);
}

int func_268(int iParam0)
{
	if (func_239(iParam0))
	{
		return 0;
	}
	else if (!IS_PED_INJURED(IS_PED_INJURED()))
	{
		if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_269()
{
	func_290("Running end routines.");
	Global_111278 = (Global_111278 - 1);
}

int func_270(int iParam0, int iParam1, vector3 vParam2, float fParam3)
{
	int iVar0;
	
	if (*iParam0 == 1)
	{
		if (func_271((*iParam0)[0], vParam2, fParam3, iParam1))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			if (func_271((*iParam0)[iVar0], vParam2, fParam3, iParam1))
			{
				iVar0 = *iParam0;
				return 1;
			}
			iVar0++;
		}
	}
	func_290("DETERMINE_RC_TO_LAUNCH - Unable to find mission to launch [TERMINATING]");
	return 0;
}

int func_271(int iParam0, vector3 vParam1, float fParam2, var uParam3)
{
	int iVar0;
	struct<7> Var1;
	
	iVar0 = 0;
	func_110(iParam0, &Var1);
	if (func_272(Var1.f_6, vParam1, fParam2, 0))
	{
		if (IS_BIT_SET(Global_111560.f_18569[iParam0 /*6*/], 0))
		{
			if (!IS_BIT_SET(Global_111560.f_18569[iParam0 /*6*/], 3))
			{
				iVar0 = 1;
			}
		}
		if (func_244(iParam0))
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 1)
	{
		*uParam3 = iParam0;
		StringCopy(&(uParam3->f_1), Var1, 32);
		return 1;
	}
	return 0;
}

int func_272(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (ABSF((vParam0.x - vParam1.x)) <= fParam2)
		{
			if (ABSF((vParam0.y - vParam1.y)) <= fParam2)
			{
				if (ABSF((vParam0.z - vParam1.z)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (ABSF((vParam0.x - vParam1.x)) <= fParam2)
	{
		if (ABSF((vParam0.y - vParam1.y)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

void func_273(int iParam0, bool bParam1)
{
	char* sVar0;
	
	if (bParam1)
	{
		func_290("SCRIPT TERMINATING: Cleaning up entities in Launcher");
		func_278(iParam0, 0, 0, 0);
	}
	if (DOES_BLIP_EXIST(iLocal_58))
	{
		REMOVE_BLIP(&iLocal_58);
	}
	if (*iParam0 == 32)
	{
		SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(35f, 3409f, 322f) - Vector(20f, 20f, 20f), Vector(35f, 3409f, 322f) + Vector(20f, 20f, 20f), true, 1);
	}
	else if (*iParam0 == 34)
	{
		REMOVE_SCENARIO_BLOCKING_AREA(iLocal_57, 0);
	}
	func_277(&(iParam0->f_48));
	if (iLocal_56 != -1)
	{
		func_290("SCRIPT TERMINATING: Ending off-mission cutscene request");
		func_202(&iLocal_56);
	}
	switch (*iParam0)
	{
		case 32:
			sVar0 = "MIN1_AMB";
			break;
		
		case 34:
			sVar0 = "MIN3_AMB";
			break;
	}
	func_274(sVar0);
	if (bParam1)
	{
		func_203(*iParam0);
	}
	func_269();
	func_290("SCRIPT TERMINATED");
	TERMINATE_THIS_THREAD();
}

void func_274(char* sParam0)
{
	if (!IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (func_194(sParam0))
		{
			func_275();
		}
	}
}

void func_275()
{
	Global_19671 = 0;
	func_276();
}

void func_276()
{
	RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		STOP_SCRIPTED_CONVERSATION(false);
		Global_20805 = 6;
	}
}

int func_277(var uParam0)
{
	if (func_214(uParam0))
	{
		if (HAS_ANIM_DICT_LOADED(*uParam0))
		{
			REMOVE_ANIM_DICT(*uParam0);
			*uParam0 = "";
			uParam0->f_1 = "";
			return 1;
		}
	}
	return 0;
}

void func_278(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_285(uParam0, iParam1);
	func_282(uParam0, bParam2);
	func_279(uParam0, bParam3);
}

void func_279(var uParam0, bool bParam1)
{
	func_280(&(uParam0->f_41), bParam1);
}

void func_280(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_206(uParam0[iVar0]);
		}
		else
		{
			func_281(uParam0[iVar0], 0);
		}
		iVar0++;
	}
}

void func_281(int iParam0, bool bParam1)
{
	if (DOES_ENTITY_EXIST(*iParam0))
	{
		if (IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
		{
			DETACH_ENTITY(*iParam0, 1, true);
		}
		if (!bParam1)
		{
			SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
		}
		else
		{
			_MARK_OBJECT_FOR_DELETION(*iParam0);
		}
	}
}

void func_282(var uParam0, bool bParam1)
{
	func_283(&(uParam0->f_35), bParam1);
}

void func_283(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_249(uParam0[iVar0]);
		}
		else
		{
			func_284(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_284(int iParam0)
{
	if (DOES_ENTITY_EXIST(*iParam0))
	{
		IS_ENTITY_DEAD(*iParam0, 0);
		if (IS_ENTITY_A_MISSION_ENTITY(*iParam0) && IS_ENTITY_A_MISSION_ENTITY(*iParam0, 1))
		{
			SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_285(var uParam0, int iParam1)
{
	func_286(&(uParam0->f_28), iParam1);
}

void func_286(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (iParam1 == 1)
		{
			func_288(uParam0[iVar0]);
		}
		else
		{
			func_287(uParam0[iVar0], 0, 1, 0);
		}
		iVar0++;
	}
}

void func_287(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (DOES_ENTITY_EXIST(*iParam0))
	{
		if (!IS_PED_INJURED(*iParam0))
		{
			SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false, 1);
			if (iParam3 == 0)
			{
				CLEAR_PED_SECONDARY_TASK(*iParam0);
			}
			SET_PED_KEEP_TASK(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
			}
		}
		SET_PED_AS_NO_LONGER_NEEDED(iParam0);
	}
}

void func_288(int iParam0)
{
	if (DOES_ENTITY_EXIST(*iParam0))
	{
		if (!IS_ENTITY_DEAD(*iParam0, 0))
		{
			SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false, 1);
		}
		if (!IS_ENTITY_A_MISSION_ENTITY(*iParam0))
		{
			SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, 0);
		}
		DELETE_PED(iParam0);
	}
}

void func_289(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_41358)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_41357 = 0;
	Global_41359 = 0;
	Global_41396 = 15;
	Global_61468 = 0;
	Global_61469 = 0;
}

void func_290(char* sParam0)
{
	if (!IS_STRING_NULL_OR_EMPTY(sParam0))
	{
	}
}

void func_291(var uParam0)
{
	*uParam0 = -1;
	StringCopy(&(uParam0->f_1), "", 32);
	uParam0->f_15 = 12f;
	uParam0->f_16 = 6;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
}

void func_292()
{
	func_290("Running start routines.");
	Global_111278++;
}

int func_293(int iParam0)
{
	if (!func_36(iParam0))
	{
		return func_47(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

__________________________
Native Named by Reliency
1577161211
__________________________
