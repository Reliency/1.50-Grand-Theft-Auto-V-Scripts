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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
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
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	float fLocal_78 = 0f;
	int iLocal_79 = 0;
	int iLocal_80[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
#endregion

void __EntryFunction__()
{
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_46 = 1;
	iLocal_47 = 1;
	iLocal_48 = 1;
	iLocal_49 = 1;
	iLocal_50 = 1;
	iLocal_51 = 1;
	iLocal_52 = 1;
	iLocal_53 = 1;
	iLocal_54 = 1;
	iLocal_55 = 1;
	iLocal_56 = 1;
	iLocal_57 = 1;
	iLocal_58 = 1;
	iLocal_59 = 1;
	iLocal_60 = 1;
	iLocal_61 = 1;
	iLocal_62 = 1;
	iLocal_63 = 1;
	iLocal_64 = 1;
	iLocal_65 = 1;
	iLocal_66 = 1;
	iLocal_67 = joaat("bmx");
	iLocal_73 = 300000;
	fLocal_78 = 1f;
	if (HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		func_113();
	}
	Global_30982 = 0;
	Global_30981 = 0;
	Global_30983 = 0;
	Global_30984 = 0;
	Global_30986 = 0;
	Global_30985 = 0;
	func_112();
	while (true)
	{
		func_2();
		if (((NETWORK_IS_GAME_IN_PROGRESS() && func_1(NETWORK_IS_GAME_IN_PROGRESS(), 1, 1)) && !Global_1574198) && Global_30736 == 0)
		{
			func_113();
		}
		wait(0);
	}
}

int func_1(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437549.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_2()
{
	func_88();
	func_68();
	func_22();
	func_3(iLocal_67);
}

void func_3(int iParam0)
{
	switch (iLocal_46)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (IS_INTERIOR_SCENE())
			{
				func_21("CHEAT_VEHICLE_SPAWN_DENIED");
				iLocal_46 = 1;
			}
			else
			{
				func_20(iParam0);
			}
			break;
		
		case 4:
			func_4(iParam0);
			break;
		
		default:
			break;
	}
}

void func_4(int iParam0)
{
	vector3 vVar0;
	float fVar1;
	bool bVar2;
	
	bVar2 = false;
	if (HAS_MODEL_LOADED(iParam0))
	{
		if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
		{
			if (DOES_ENTITY_EXIST(iLocal_68))
			{
				if (!IS_ENTITY_DEAD(iLocal_68, 0))
				{
					if (IS_PED_IN_VEHICLE(IS_PED_IN_VEHICLE(), iLocal_68, 0))
					{
						vVar0 = { GET_ENTITY_COORDS(iLocal_68, true) };
						fVar1 = GET_ENTITY_HEADING(iLocal_68);
						SET_ENTITY_COORDS(SET_ENTITY_COORDS(), vVar0.x, vVar0.y, (vVar0.z + 4f), 1, false, 0, 1);
						bVar2 = true;
					}
				}
				DELETE_VEHICLE(&iLocal_68);
			}
			if (!bVar2)
			{
				if (iParam0 == joaat("duster") || iParam0 == joaat("stunt"))
				{
					vVar0 = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(), -1.5f, 3.5f, 1f) };
				}
				else if (iParam0 == joaat("buzzard"))
				{
					vVar0 = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(), 0f, 6f, 2f) };
				}
				else
				{
					vVar0 = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(), 0f, 3.5f, 1f) };
				}
				fVar1 = (GET_ENTITY_HEADING(GET_ENTITY_HEADING()) + 90f);
			}
			if (func_18(iParam0, vVar0, fVar1))
			{
				iLocal_68 = CREATE_VEHICLE(iParam0, vVar0, fVar1, false, true, false);
				SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_68, 1084227584);
				SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
				SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_68);
				func_16(iLocal_70);
				func_5(20);
			}
			else
			{
				SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
				func_21("CHEAT_VEHICLE_SPAWN_DENIED");
			}
			iLocal_46 = 1;
		}
	}
}

void func_5(int iParam0)
{
	if (!func_15(14) && !func_14(""))
	{
		SET_BIT(&Global_30983, iParam0);
		Global_30986 = 1;
		func_6();
	}
}

void func_6()
{
	int iVar0;
	
	iVar0 = func_8();
	switch (iVar0)
	{
		case 0:
			func_7(joaat("sp0_times_cheated"), 1);
			break;
		
		case 1:
			func_7(joaat("sp1_times_cheated"), 1);
			break;
		
		case 2:
			func_7(joaat("sp2_times_cheated"), 1);
			break;
	}
}

void func_7(int iParam0, int iParam1)
{
	int iVar0;
	
	STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STAT_SET_INT(iParam0, iVar0, 1);
}

int func_8()
{
	func_9();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_9()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()))
	{
		if (func_12(Global_111560.f_2358.f_539.f_4321) != GET_ENTITY_MODEL(GET_ENTITY_MODEL()))
		{
			iVar0 = func_11(PLAYER_PED_ID());
			if (func_10(iVar0) && (!func_15(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_10(Global_111560.f_2358.f_539.f_4321))
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

bool func_10(int iParam0)
{
	return iParam0 < 3;
}

int func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_12(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_12(int iParam0)
{
	if (func_10(iParam0))
	{
		return func_13(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_13(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

int func_14(char* sParam0)
{
	if (iLocal_84 != 0)
	{
		if (func_15(14) && IS_SCREEN_FADED_IN())
		{
			if (ARE_STRINGS_EQUAL(sParam0, "CHEAT_SUPER_JUMP") && ARE_STRINGS_EQUAL())
			{
				return 0;
			}
			if ((ARE_STRINGS_EQUAL(sParam0, "CHEAT_GRAVITY_MOON") && !ARE_STRINGS_EQUAL(ARE_STRINGS_EQUAL(), 0)) && ARE_STRINGS_EQUAL(ARE_STRINGS_EQUAL()))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

bool func_15(int iParam0)
{
	return Global_41396 == iParam0;
}

void func_16(int iParam0)
{
	if (func_14(""))
	{
	}
	else
	{
		_SET_NOTIFICATION_TEXT_ENTRY("CHEAT_ACTIVATED");
		ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam0);
		func_17(END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1));
		PLAYSTATS_CHEAT_APPLIED(iParam0);
	}
}

void func_17(int iParam0)
{
	iLocal_80[iLocal_81] = iParam0;
	iLocal_81++;
	if (iLocal_81 >= 10)
	{
		iLocal_81 = 0;
	}
}

int func_18(int iParam0, vector3 vParam1, float fParam2)
{
	vector3 vVar0[9];
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	
	GET_MODEL_DIMENSIONS(iParam0, &vVar1, &vVar2);
	vVar3.x = (ABSF((vVar2.x - vVar1.x)) / 2f);
	vVar3.y = (ABSF((vVar2.y - vVar1.y)) / 2f);
	vVar3.z = (ABSF((vVar2.z - vVar1.z)) / 2f);
	vVar0[0 /*3*/] = { vParam1 };
	vVar0[1 /*3*/] = { _GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam2, -vVar3.x, -vVar3.y, -vVar3.z) };
	vVar0[2 /*3*/] = { _GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam2, vVar3.x, -vVar3.y, -vVar3.z) };
	vVar0[3 /*3*/] = { _GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam2, vVar3.x, vVar3.y, -vVar3.z) };
	vVar0[4 /*3*/] = { _GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam2, -vVar3.x, vVar3.y, -vVar3.z) };
	vVar0[5 /*3*/] = { _GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam2, -vVar3.x, -vVar3.y, vVar3.z) };
	vVar0[6 /*3*/] = { _GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam2, vVar3.x, -vVar3.y, vVar3.z) };
	vVar0[7 /*3*/] = { _GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam2, vVar3.x, vVar3.y, vVar3.z) };
	vVar0[8 /*3*/] = { _GET_OBJECT_OFFSET_FROM_COORDS(vParam1, fParam2, -vVar3.x, vVar3.y, vVar3.z) };
	if (!_ARE_COORDS_COLLIDING_WITH_EXTERIOR(vParam1))
	{
		return 0;
	}
	iVar13 = _START_SHAPE_TEST_RAY(func_19(_START_SHAPE_TEST_RAY()) + Vector(1f, 0f, 0f), vParam1, 87, _START_SHAPE_TEST_RAY(), 0);
	GET_SHAPE_TEST_RESULT(iVar13, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar7 = _START_SHAPE_TEST_RAY(vVar0[1 /*3*/], vVar0[3 /*3*/], 87, _START_SHAPE_TEST_RAY(), 0);
	GET_SHAPE_TEST_RESULT(iVar7, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar8 = _START_SHAPE_TEST_RAY(vVar0[2 /*3*/], vVar0[4 /*3*/], 87, _START_SHAPE_TEST_RAY(), 0);
	GET_SHAPE_TEST_RESULT(iVar8, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar9 = _START_SHAPE_TEST_RAY(vVar0[5 /*3*/], vVar0[7 /*3*/], 87, _START_SHAPE_TEST_RAY(), 0);
	GET_SHAPE_TEST_RESULT(iVar9, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar10 = _START_SHAPE_TEST_RAY(vVar0[6 /*3*/], vVar0[8 /*3*/], 87, _START_SHAPE_TEST_RAY(), 0);
	GET_SHAPE_TEST_RESULT(iVar10, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar11 = _START_SHAPE_TEST_RAY(vVar0[1 /*3*/], vVar0[8 /*3*/], 87, _START_SHAPE_TEST_RAY(), 0);
	GET_SHAPE_TEST_RESULT(iVar11, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	iVar12 = _START_SHAPE_TEST_RAY(vVar0[2 /*3*/], vVar0[7 /*3*/], 87, _START_SHAPE_TEST_RAY(), 0);
	GET_SHAPE_TEST_RESULT(iVar12, &iVar6, &uVar4, &uVar5, &uVar14);
	if (iVar6 != 0)
	{
		return 0;
	}
	return 1;
}

Vector3 func_19(int iParam0)
{
	return GET_ENTITY_COORDS(GET_ENTITY_COORDS(iParam0), false);
}

void func_20(int iParam0)
{
	if (IS_MODEL_IN_CDIMAGE(iParam0))
	{
		REQUEST_MODEL(iParam0);
		if (HAS_MODEL_LOADED(iParam0))
		{
			iLocal_46 = 4;
		}
	}
}

void func_21(int iParam0)
{
	if (!func_15(14))
	{
		_SET_NOTIFICATION_TEXT_ENTRY("CHEAT_DENIED");
		ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam0);
		func_17(END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1));
	}
}

void func_22()
{
	func_65();
	func_64();
	func_45();
	func_44();
	func_43();
	func_39();
	func_36();
	func_32();
	func_23();
}

void func_23()
{
	switch (iLocal_66)
	{
		case 1:
			break;
		
		case 4:
			func_31(19, 1);
			func_30();
			break;
		
		case 5:
			if ((((!IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()) || func_28()) || func_27(23)) || func_27(21)) || func_27(19))
			{
				iLocal_66 = 9;
				return;
			}
			func_25();
			break;
		
		case 9:
			func_24("CHEAT_AIM_SLOW_MO");
			func_31(19, 0);
			SET_TIME_SCALE(1f);
			iLocal_77 = 0;
			iLocal_66 = 1;
			break;
		
		default:
			break;
	}
}

void func_24(char* sParam0)
{
	if (func_14(sParam0))
	{
	}
	else
	{
		_SET_NOTIFICATION_TEXT_ENTRY("CHEAT_DEACTIVATED");
		ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam0);
		func_17(END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1));
	}
}

void func_25()
{
	if (IS_PED_ON_FOOT(IS_PED_ON_FOOT()))
	{
		if (IS_CONTROL_PRESSED(2, 25))
		{
			if (func_26(PLAYER_PED_ID()) != joaat("weapon_unarmed") && func_26(PLAYER_PED_ID()) != joaat("object"))
			{
				SET_TIME_SCALE(fLocal_78);
			}
			else
			{
				SET_TIME_SCALE(1f);
			}
		}
		else
		{
			SET_TIME_SCALE(1f);
		}
	}
}

int func_26(int iParam0)
{
	var uVar0;
	
	GET_CURRENT_PED_WEAPON(iParam0, &uVar0, 1);
	return uVar0;
}

int func_27(int iParam0)
{
	if (IS_BIT_SET(Global_30981, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_28()
{
	if (((((((func_15(0) || func_15(11)) || func_15(4)) || func_15(9)) || func_15(10)) || func_15(3)) || func_15(2)) || func_29(35))
	{
		return 1;
	}
	return 0;
}

int func_29(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111560.f_9080.f_99.f_58[iParam0];
}

void func_30()
{
	iLocal_77++;
	if (iLocal_77 > 3)
	{
		iLocal_77 = 0;
		iLocal_66 = 9;
		return;
	}
	switch (iLocal_77)
	{
		case 1:
			func_16("CHEAT_AIM_SLOW_MO1");
			fLocal_78 = 0.6f;
			break;
		
		case 2:
			func_16("CHEAT_AIM_SLOW_MO2");
			fLocal_78 = 0.4f;
			break;
		
		case 3:
			func_16("CHEAT_AIM_SLOW_MO3");
			fLocal_78 = 0.2f;
			break;
		
		default:
			break;
	}
	iLocal_66 = 5;
}

void func_31(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		SET_BIT(&Global_30982, iParam0);
		func_5(iParam0);
	}
	else
	{
		CLEAR_BIT(&Global_30982, iParam0);
	}
}

void func_32()
{
	switch (iLocal_63)
	{
		case 1:
			break;
		
		case 4:
			func_31(16, 1);
			func_35();
			break;
		
		case 5:
			DISABLE_CONTROL_ACTION(2, 37, 1);
			DISABLE_CONTROL_ACTION(2, 19, 1);
			if ((((((((!IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()) || func_28()) || func_34()) || func_33(1)) || IS_PLAYER_PLAYING(2, 37)) || IS_PLAYER_PLAYING(2, 19)) || func_27(23)) || func_27(21)) || func_27(16))
			{
				iLocal_63 = 9;
			}
			break;
		
		case 9:
			DISABLE_CONTROL_ACTION(2, 37, 1);
			DISABLE_CONTROL_ACTION(2, 19, 1);
			func_24("CHEAT_SLOW_MO");
			func_31(16, 0);
			iLocal_76 = 0;
			SET_TIME_SCALE(1f);
			iLocal_63 = 1;
			break;
		
		default:
			break;
	}
}

bool func_33(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

int func_34()
{
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_96177.f_44 == 1;
	}
	return 0;
}

void func_35()
{
	iLocal_76++;
	if (iLocal_76 > 3)
	{
		iLocal_63 = 9;
		return;
	}
	switch (iLocal_76)
	{
		case 1:
			func_16("CHEAT_SLOW_MO1");
			SET_TIME_SCALE(0.6f);
			break;
		
		case 2:
			func_16("CHEAT_SLOW_MO2");
			SET_TIME_SCALE(0.4f);
			break;
		
		case 3:
			func_16("CHEAT_SLOW_MO3");
			SET_TIME_SCALE(0.2f);
			break;
		
		default:
			break;
	}
	iLocal_63 = 5;
}

void func_36()
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	switch (iLocal_64)
	{
		case 1:
			break;
		
		case 2:
			func_31(17, 1);
			FREEZE_ENTITY_POSITION(FREEZE_ENTITY_POSITION(), true);
			SET_PLAYER_INVINCIBLE(SET_PLAYER_INVINCIBLE(), 1);
			SET_ENTITY_PROOFS(SET_ENTITY_PROOFS(), true, true, true, true, true, false, 0, false);
			GIVE_WEAPON_TO_PED(GIVE_WEAPON_TO_PED(), joaat("gadget_parachute"), 1, false, true);
			vVar0 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true) };
			fVar1 = GET_ENTITY_HEADING(GET_ENTITY_HEADING());
			GET_GROUND_Z_FOR_3D_COORD(vVar0, &fVar2, 0, 0);
			fVar2 = (fVar2 + 500f);
			SET_ENTITY_COORDS(SET_ENTITY_COORDS(), vVar0.x, vVar0.y, fVar2, 1, false, 0, 1);
			SET_ENTITY_HEADING(SET_ENTITY_HEADING(), fVar1);
			iLocal_72 = GET_GAME_TIMER();
			DO_SCREEN_FADE_OUT(0);
			iLocal_64 = 3;
			break;
		
		case 3:
			if (func_38(1000, iLocal_72))
			{
				FREEZE_ENTITY_POSITION(FREEZE_ENTITY_POSITION(), false);
				SET_PLAYER_CONTROL(SET_PLAYER_CONTROL(), true, 0);
				iLocal_72 = GET_GAME_TIMER();
				iLocal_64 = 4;
			}
			break;
		
		case 4:
			if (func_38(1000, iLocal_72))
			{
				DISABLE_CONTROL_ACTION(0, 144, 1);
				DISABLE_CONTROL_ACTION(0, 149, 1);
				if (func_8() == 0)
				{
					SET_PED_COMPONENT_VARIATION(SET_PED_COMPONENT_VARIATION(), 9, 0, 0, 0);
				}
				else
				{
					SET_PED_COMPONENT_VARIATION(SET_PED_COMPONENT_VARIATION(), 8, 0, 0, 0);
				}
				DO_SCREEN_FADE_IN(250);
				iLocal_72 = GET_GAME_TIMER();
				func_16("CHEAT_SKYFALL");
				_SET_UNK_MAP_FLAG(2);
				iLocal_64 = 5;
			}
			break;
		
		case 5:
			if ((((!IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()) || func_28()) || func_27(23)) || func_27(21)) || func_27(17))
			{
				iLocal_64 = 9;
				break;
			}
			DISABLE_CONTROL_ACTION(0, 144, 1);
			HIDE_HUD_COMPONENT_THIS_FRAME(2);
			if (IS_PED_IN_PARACHUTE_FREE_FALL(IS_PED_IN_PARACHUTE_FREE_FALL()))
			{
				APPLY_FORCE_TO_ENTITY(APPLY_FORCE_TO_ENTITY(), 1, 0f, 200f, 2.5f, 0f, 0f, 0f, 0, 1, 0, 0, 0, 1);
				if (HAS_ENTITY_COLLIDED_WITH_ANYTHING(HAS_ENTITY_COLLIDED_WITH_ANYTHING()))
				{
					iLocal_64 = 9;
				}
			}
			else
			{
				iLocal_64 = 9;
			}
			break;
		
		case 9:
			func_37();
			func_24("CHEAT_SKYFALL");
			func_31(17, 0);
			iLocal_64 = 1;
			break;
		
		default:
			break;
	}
}

void func_37()
{
	if (!IS_PED_INJURED(IS_PED_INJURED()))
	{
		REMOVE_WEAPON_FROM_PED(REMOVE_WEAPON_FROM_PED(), joaat("gadget_parachute"));
	}
	if (iLocal_62 != 5)
	{
		SET_PLAYER_INVINCIBLE(SET_PLAYER_INVINCIBLE(), 0);
		SET_ENTITY_PROOFS(SET_ENTITY_PROOFS(), false, false, false, false, false, false, 0, false);
	}
	_SET_UNK_MAP_FLAG(0);
}

int func_38(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_GAME_TIMER();
	iVar1 = (iVar0 - iParam0);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_39()
{
	vector3 vVar0;
	
	switch (iLocal_62)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_INVINCIBILITY");
			func_31(15, 1);
			iLocal_62 = 5;
			iLocal_74 = GET_GAME_TIMER();
			SET_PLAYER_INVINCIBLE(SET_PLAYER_INVINCIBLE(), 1);
			SET_ENTITY_PROOFS(SET_ENTITY_PROOFS(), true, true, true, true, true, false, 0, false);
			break;
		
		case 5:
			if (!IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()) || IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
			{
				iLocal_62 = 9;
				return;
			}
			vVar0 = { func_19(PLAYER_ID()) };
			if (((((func_28() || func_34()) || func_27(23)) || func_27(21)) || func_27(15)) || vVar0.z <= -170f)
			{
				iLocal_62 = 9;
				return;
			}
			iLocal_75 = (GET_GAME_TIMER() - iLocal_74);
			if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) == 0)
			{
				func_40((iLocal_73 - iLocal_75), "CHEAT_INV", 0, 0, 1000, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			if (iLocal_75 >= (iLocal_73 - 1000))
			{
				iLocal_62 = 9;
				return;
			}
			SET_PLAYER_INVINCIBLE(SET_PLAYER_INVINCIBLE(), 1);
			SET_ENTITY_PROOFS(SET_ENTITY_PROOFS(), true, true, true, true, true, false, 0, false);
			_0x047CBED6F6F8B63C();
			break;
		
		case 9:
			func_24("CHEAT_INVINCIBILITY_OFF");
			func_31(15, 0);
			iLocal_62 = 1;
			if (!IS_PED_INJURED(IS_PED_INJURED()))
			{
				SET_PLAYER_INVINCIBLE(SET_PLAYER_INVINCIBLE(), 0);
				SET_ENTITY_PROOFS(SET_ENTITY_PROOFS(), false, false, false, false, false, false, 0, false);
			}
			break;
		
		default:
			break;
	}
}

void func_40(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_42(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1375006.f_1 = 1;
		func_41(7, iVar0);
		Global_1375006.f_4453[iVar0] = iParam0;
		StringCopy(&(Global_1375006.f_4453.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1375006.f_4453.f_172[iVar0] = iParam2;
		Global_1375006.f_4453.f_216[iVar0] = iParam3;
		Global_1375006.f_4453.f_183[iVar0] = iParam4;
		Global_1375006.f_4453.f_194[iVar0] = iParam5;
		Global_1375006.f_4453.f_249[iVar0] = iParam6;
		Global_1375006.f_4453.f_260[iVar0] = iParam7;
		Global_1375006.f_4453.f_205[iVar0] = iParam8;
		Global_1375006.f_4453.f_314[iVar0] = iParam9;
		Global_1375006.f_4453.f_325[iVar0] = iParam10;
		Global_1375006.f_4453.f_357[iVar0] = iParam11;
		Global_1375006.f_4453.f_238[iVar0] = iParam12;
		Global_1375006.f_4453.f_271[iVar0] = iParam13;
		Global_1375006.f_4453.f_368[iVar0] = iParam14;
		Global_1375006.f_4453.f_379[iVar0] = iParam15;
		Global_1375006.f_4453.f_390[iVar0] = iParam16;
		Global_1375006.f_4453.f_227[iVar0] = iParam17;
	}
}

void func_41(int iParam0, int iParam1)
{
	SET_BIT(&(Global_1375006.f_6184[iParam0]), iParam1);
}

bool func_42(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_1375006.f_6184[iParam0], iParam1);
}

void func_43()
{
	switch (iLocal_59)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_FLAMING_BULLETS");
			func_31(12, 1);
			iLocal_59 = 5;
			break;
		
		case 5:
			if (((!IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()) || func_27(23)) || func_27(21)) || func_27(12))
			{
				iLocal_59 = 9;
				return;
			}
			if (func_28())
			{
				iLocal_59 = 9;
				return;
			}
			SET_FIRE_AMMO_THIS_FRAME(SET_FIRE_AMMO_THIS_FRAME());
			break;
		
		case 9:
			func_24("CHEAT_FLAMING_BULLETS");
			func_31(12, 0);
			iLocal_59 = 1;
			break;
		
		default:
			break;
	}
}

void func_44()
{
	switch (iLocal_60)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_EXPLOSIVE_MELEE");
			func_31(13, 1);
			iLocal_60 = 5;
			break;
		
		case 5:
			if ((((!IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()) || func_27(23)) || func_27(21)) || func_27(13)) || func_28())
			{
				iLocal_60 = 9;
				return;
			}
			SET_EXPLOSIVE_MELEE_THIS_FRAME(SET_EXPLOSIVE_MELEE_THIS_FRAME());
			break;
		
		case 9:
			func_24("CHEAT_EXPLOSIVE_MELEE");
			func_31(13, 0);
			iLocal_60 = 1;
			break;
		
		default:
			break;
	}
}

void func_45()
{
	switch (iLocal_65)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_DRUNK");
			func_31(18, 1);
			func_60(PLAYER_PED_ID());
			func_58(30000, 1050253722, 1065353216, 0);
			iLocal_65 = 5;
			break;
		
		case 5:
			if ((((func_28() || !IS_PLAYER_PLAYING(IS_PLAYER_PLAYING())) || func_27(23)) || func_27(21)) || func_27(18))
			{
				iLocal_65 = 9;
			}
			break;
		
		case 9:
			func_24("CHEAT_DRUNK");
			func_31(18, 0);
			func_49(PLAYER_PED_ID());
			func_48(1000);
			iLocal_65 = 1;
			break;
		
		case 10:
			func_46(1);
			func_31(18, 0);
			iLocal_65 = 1;
			break;
		
		default:
			break;
	}
}

void func_46(bool bParam0)
{
	CUSTOM_MENU_COORDINATES(0f);
	_0x0225778816FDC28C(0f);
	SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(0f);
	STOP_GAMEPLAY_CAM_SHAKING(true);
	SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(0f);
	STOP_CINEMATIC_CAM_SHAKING(1);
	_0x12561FCBB62D5B9C(0);
	if (IS_AUDIO_SCENE_ACTIVE("SAFEHOUSE_STONED_MICHAEL"))
	{
		STOP_AUDIO_SCENE("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!IS_STRING_NULL_OR_EMPTY(&Global_42539))
	{
		if (IS_AUDIO_SCENE_ACTIVE(&Global_42539))
		{
			STOP_AUDIO_SCENE(&Global_42539);
		}
	}
	if (DOES_CAM_EXIST(Global_42528))
	{
		if (IS_CAM_SHAKING(Global_42528))
		{
			SET_CAM_SHAKE_AMPLITUDE(Global_42528, 0f);
			STOP_CAM_SHAKING(Global_42528, 1);
		}
	}
	if (IS_SCRIPT_GLOBAL_SHAKING())
	{
		STOP_SCRIPT_GLOBAL_SHAKING(0);
	}
	if (bParam0)
	{
		if (GET_TIMECYCLE_MODIFIER_INDEX() != -1 || GET_TIMECYCLE_MODIFIER_INDEX() != -1)
		{
			CLEAR_TIMECYCLE_MODIFIER();
		}
		else if (IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			CLEAR_TIMECYCLE_MODIFIER();
		}
	}
	Global_42534 = 0f;
	StringCopy(&Global_42535, "", 16);
	StringCopy(&Global_42539, "", 64);
	StringCopy(&Global_42555, "", 16);
	func_47();
}

void func_47()
{
	Global_42527 = 0;
	Global_42528 = 0;
	Global_42529 = 0;
	Global_42530 = 30000;
	Global_42531 = 0f;
	Global_42533 = 0f;
	Global_42532 = 0f;
	Global_42534 = 0f;
	StringCopy(&Global_42535, "", 16);
}

void func_48(int iParam0)
{
	int iVar0;
	
	if (!Global_42527)
	{
		return;
	}
	iVar0 = GET_GAME_TIMER();
	Global_42529 = (iVar0 + iParam0);
	Global_42530 = iParam0;
}

void func_49(int iParam0)
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
	iVar0 = func_57(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_42348[iVar0 /*5*/];
		func_52(1, iVar1, 1);
		return;
	}
	iVar2 = func_51(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_50(iVar2);
}

void func_50(int iParam0)
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

int func_51(int iParam0)
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

void func_52(int iParam0, int iParam1, int iParam2)
{
	func_53(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_53(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_55(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_54();
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

int func_54()
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

int func_55(int iParam0, int iParam1, int iParam2)
{
	if (func_56(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_56(int iParam0, int iParam1, int iParam2)
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

int func_57(int iParam0)
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

void func_58(int iParam0, float fParam1, float fParam2, int iParam3)
{
	func_59(-1, iParam0, fParam1, fParam2, iParam3, 1);
}

void func_59(int iParam0, var uParam1, float fParam2, float fParam3, int iParam4, bool bParam5)
{
	int iVar0;
	
	if (Global_3)
	{
		return;
	}
	if (Global_42527)
	{
		return;
	}
	if (!bParam5)
	{
		if (iParam0 < 0)
		{
			return;
		}
	}
	if (fParam2 < 0f || fParam2 > 5f)
	{
		return;
	}
	if (!IS_GAMEPLAY_CAM_SHAKING())
	{
		SHAKE_GAMEPLAY_CAM("DRUNK_SHAKE", fParam3);
	}
	if (!IS_CINEMATIC_CAM_SHAKING())
	{
		SHAKE_CINEMATIC_CAM("DRUNK_SHAKE", (fParam3 * Global_42526));
	}
	if (DOES_CAM_EXIST(iParam4))
	{
		SHAKE_CAM(iParam4, "DRUNK_SHAKE", fParam3);
		Global_42528 = iParam4;
	}
	else
	{
		Global_42528 = 0;
	}
	Global_42527 = 1;
	iVar0 = GET_GAME_TIMER();
	Global_42529 = (iVar0 + iParam0);
	if (bParam5)
	{
		if (iParam0 == -1)
		{
			Global_42529 = -1;
		}
	}
	Global_42530 = uParam1;
	Global_42531 = fParam2;
	Global_42533 = fParam3;
	Global_42532 = fParam3;
}

int func_60(int iParam0)
{
	return func_61(iParam0, -1, 1);
}

int func_61(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_63(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_51(iParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_62();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_42322[iVar2 /*5*/] = 0;
	Global_42322[iVar2 /*5*/].f_1 = iParam0;
	Global_42322[iVar2 /*5*/].f_2 = iParam1;
	Global_42322[iVar2 /*5*/].f_3 = iParam1;
	Global_42322[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == PLAYER_PED_ID())
	{
		Global_42559 = 1;
	}
	Global_42320++;
	return 1;
}

int func_62()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_42322[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_63(int iParam0)
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
		if (iParam0 == Global_42348[iVar0 /*5*/].f_1)
		{
			return Global_42348[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

void func_64()
{
	switch (iLocal_58)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_BANG_BANG");
			func_31(11, 1);
			iLocal_58 = 5;
			break;
		
		case 5:
			if (((!IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()) || func_27(23)) || func_27(21)) || func_27(11))
			{
				iLocal_58 = 9;
				return;
			}
			if (func_28())
			{
				iLocal_58 = 9;
				return;
			}
			SET_EXPLOSIVE_AMMO_THIS_FRAME(SET_EXPLOSIVE_AMMO_THIS_FRAME());
			break;
		
		case 9:
			func_24("CHEAT_BANG_BANG");
			func_31(11, 0);
			iLocal_58 = 1;
			break;
		
		default:
			break;
	}
}

void func_65()
{
	switch (iLocal_61)
	{
		case 1:
			break;
		
		case 4:
			func_5(14);
			func_31(14, 1);
			func_67();
			break;
		
		case 5:
			if (!IS_PED_INJURED(IS_PED_INJURED()))
			{
				if ((((((!IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()) || func_28()) || func_27(23)) || func_27(21)) || func_27(14)) || func_66(17)) || IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
				{
					iLocal_61 = 9;
				}
			}
			else
			{
				iLocal_61 = 9;
			}
			break;
		
		case 9:
			func_24("CHEAT_GRAVITY_MOON");
			func_31(14, 0);
			SET_GRAVITY_LEVEL(0);
			iLocal_79 = 0;
			iLocal_61 = 1;
			break;
		
		default:
			break;
	}
}

int func_66(int iParam0)
{
	if (IS_BIT_SET(Global_30982, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_67()
{
	iLocal_79++;
	if (iLocal_79 > 1)
	{
		iLocal_61 = 9;
		return;
	}
	switch (iLocal_79)
	{
		case 1:
			func_16("CHEAT_GRAVITY_MOON");
			SET_GRAVITY_LEVEL(1);
			break;
		
		default:
			break;
	}
	iLocal_61 = 5;
}

void func_68()
{
	func_87();
	func_81();
	func_80();
	func_79();
	func_78();
	func_77();
	func_76();
	func_74();
	func_73();
	func_72();
	func_69();
}

void func_69()
{
	if (iLocal_57 == 4)
	{
		iLocal_57 = 1;
		if ((func_27(23) || func_27(22)) || func_27(10))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
		{
			func_16("CHEAT_GIVE_PARACHUTE");
			GIVE_WEAPON_TO_PED(GIVE_WEAPON_TO_PED(), joaat("gadget_parachute"), 1, true, true);
			func_5(10);
		}
	}
}

int func_70()
{
	if (iLocal_83)
	{
		iLocal_83 = 0;
		return 0;
	}
	if (func_71(0))
	{
		return 1;
	}
	return 0;
}

int func_71(int iParam0)
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

void func_72()
{
	int iVar0;
	
	if (iLocal_56 == 4)
	{
		iLocal_56 = 1;
		if ((func_27(23) || func_27(22)) || func_27(9))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
		{
			if (GET_MAX_WANTED_LEVEL() == 0)
			{
				func_21("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL());
			if (iVar0 > 0)
			{
				func_16("CHEAT_WANTED_DOWN");
				SET_PLAYER_WANTED_LEVEL(SET_PLAYER_WANTED_LEVEL(), (iVar0 - 1), 0);
				func_5(9);
			}
			else
			{
				func_21("CHEAT_WANTED_DOWN_DENIED");
			}
		}
	}
}

void func_73()
{
	int iVar0;
	
	if (iLocal_55 == 4)
	{
		iLocal_55 = 1;
		if ((func_27(23) || func_27(22)) || func_27(8))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
		{
			if (GET_MAX_WANTED_LEVEL() == 0)
			{
				func_21("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL());
			if (iVar0 < GET_MAX_WANTED_LEVEL())
			{
				SET_PLAYER_WANTED_LEVEL(SET_PLAYER_WANTED_LEVEL(), iVar0 + 1, 0);
				SET_PLAYER_WANTED_LEVEL_NOW(SET_PLAYER_WANTED_LEVEL_NOW(), 0);
				func_16("CHEAT_WANTED_UP");
				func_5(8);
			}
			else
			{
				func_21("CHEAT_WANTED_UP_DENIED");
			}
		}
	}
}

void func_74()
{
	if (iLocal_54 == 4)
	{
		iLocal_54 = 1;
		if ((((((func_27(23) || func_27(22)) || func_27(7)) || func_15(9)) || func_15(10)) || !IS_SPECIAL_ABILITY_UNLOCKED(func_75())) || !IS_SPECIAL_ABILITY_UNLOCKED(IS_SPECIAL_ABILITY_UNLOCKED()))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
		{
			SPECIAL_ABILITY_FILL_METER(SPECIAL_ABILITY_FILL_METER(), 1);
			func_16("CHEAT_SPECIAL_ABILITY");
			func_5(7);
		}
	}
}

int func_75()
{
	return GET_ENTITY_MODEL(GET_ENTITY_MODEL());
}

void func_76()
{
	int iVar0;
	
	if (iLocal_53 == 4)
	{
		iLocal_53 = 1;
		if ((((func_27(23) || func_27(22)) || func_27(6)) || func_15(9)) || func_15(10))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
		{
			func_16("CHEAT_HEALTH_ARMOR");
			func_5(6);
			SET_ENTITY_HEALTH(SET_ENTITY_HEALTH(), SET_ENTITY_HEALTH(SET_ENTITY_HEALTH()), 0);
			ADD_ARMOUR_TO_PED(ADD_ARMOUR_TO_PED(), (ADD_ARMOUR_TO_PED(ADD_ARMOUR_TO_PED()) - ADD_ARMOUR_TO_PED(ADD_ARMOUR_TO_PED())));
			if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
			{
				iVar0 = GET_VEHICLE_PED_IS_USING(GET_VEHICLE_PED_IS_USING());
				if (DOES_ENTITY_EXIST(iVar0))
				{
					if (!IS_ENTITY_DEAD(iVar0, 0))
					{
						SET_VEHICLE_FIXED(iVar0);
					}
				}
			}
		}
	}
}

void func_77()
{
	if (iLocal_52 == 4)
	{
		iLocal_52 = 1;
		if ((func_27(23) || func_27(22)) || func_27(5))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		func_5(5);
		switch (iLocal_71)
		{
			case 0:
				iLocal_71 = 1;
			
			case 1:
				SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
				CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_EXTRA_SUNNY");
				iLocal_71 = 2;
				break;
			
			case 2:
				SET_WEATHER_TYPE_NOW_PERSIST("CLEAR");
				CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_CLEAR");
				iLocal_71 = 3;
				break;
			
			case 3:
				SET_WEATHER_TYPE_NOW_PERSIST("CLOUDS");
				CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_CLOUDY");
				iLocal_71 = 4;
				break;
			
			case 4:
				SET_WEATHER_TYPE_NOW_PERSIST("SMOG");
				CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_SMOGGY");
				iLocal_71 = 6;
				break;
			
			case 6:
				SET_WEATHER_TYPE_NOW_PERSIST("OVERCAST");
				CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_OVERCAST");
				iLocal_71 = 7;
				break;
			
			case 7:
				SET_WEATHER_TYPE_NOW_PERSIST("RAIN");
				CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_RAIN");
				func_31(5, 1);
				iLocal_71 = 8;
				break;
			
			case 8:
				SET_WEATHER_TYPE_NOW_PERSIST("THUNDER");
				CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_THUNDER");
				iLocal_71 = 9;
				break;
			
			case 9:
				SET_WEATHER_TYPE_NOW_PERSIST("CLEARING");
				CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_CLEARING");
				iLocal_71 = 11;
				break;
			
			case 11:
				SET_WEATHER_TYPE_NOW_PERSIST("XMAS");
				CLEAR_WEATHER_TYPE_PERSIST();
				func_16("CHEAT_ADVANCE_WEATHER_SNOW");
				iLocal_71 = 0;
				break;
			
			default:
				break;
			}
	}
}

void func_78()
{
	if (iLocal_51 == 4)
	{
		iLocal_51 = 1;
		if ((func_27(23) || func_27(22)) || func_27(4))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		func_16("CHEAT_GIVE_WEAPONS");
		func_5(4);
		if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
		{
			GIVE_DELAYED_WEAPON_TO_PED(GIVE_DELAYED_WEAPON_TO_PED(), joaat("weapon_knife"), -1, false);
			GIVE_DELAYED_WEAPON_TO_PED(GIVE_DELAYED_WEAPON_TO_PED(), joaat("weapon_smg"), 300, false);
			GIVE_DELAYED_WEAPON_TO_PED(GIVE_DELAYED_WEAPON_TO_PED(), joaat("weapon_assaultrifle"), 300, true);
			GIVE_DELAYED_WEAPON_TO_PED(GIVE_DELAYED_WEAPON_TO_PED(), joaat("weapon_pumpshotgun"), 150, false);
			GIVE_DELAYED_WEAPON_TO_PED(GIVE_DELAYED_WEAPON_TO_PED(), joaat("weapon_sniperrifle"), 30, false);
			GIVE_DELAYED_WEAPON_TO_PED(GIVE_DELAYED_WEAPON_TO_PED(), joaat("weapon_grenade"), 5, false);
			GIVE_DELAYED_WEAPON_TO_PED(GIVE_DELAYED_WEAPON_TO_PED(), joaat("weapon_rpg"), 5, false);
		}
	}
}

void func_79()
{
	switch (iLocal_50)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_FAST_SWIM");
			func_31(3, 1);
			iLocal_50 = 5;
			break;
		
		case 5:
			if (((!IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()) || func_27(23)) || func_27(22)) || func_27(3))
			{
				iLocal_50 = 9;
			}
			else
			{
				SET_SWIM_MULTIPLIER_FOR_PLAYER(SET_SWIM_MULTIPLIER_FOR_PLAYER(), 1.49f);
				_0x047CBED6F6F8B63C();
			}
			break;
		
		case 9:
			SET_SWIM_MULTIPLIER_FOR_PLAYER(SET_SWIM_MULTIPLIER_FOR_PLAYER(), 1f);
			func_24("CHEAT_FAST_SWIM");
			func_31(3, 0);
			iLocal_50 = 1;
			break;
		
		default:
			break;
	}
}

void func_80()
{
	switch (iLocal_49)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_FAST_RUN");
			func_31(2, 1);
			iLocal_49 = 5;
			break;
		
		case 5:
			if ((((!IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()) || IS_PLAYER_PLAYING(IS_PLAYER_PLAYING())) || func_27(23)) || func_27(22)) || func_27(2))
			{
				iLocal_49 = 9;
			}
			else
			{
				if (IS_PED_RUNNING(IS_PED_RUNNING()) || (IS_PED_RUNNING(IS_PED_RUNNING()) && !IS_PED_RUNNING(IS_PED_RUNNING())))
				{
					SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(), 1.49f);
				}
				else
				{
					SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(), 1f);
				}
				_0x047CBED6F6F8B63C();
			}
			break;
		
		case 9:
			SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(), 1f);
			func_24("CHEAT_FAST_RUN");
			func_31(2, 0);
			iLocal_49 = 1;
			break;
		
		default:
			break;
	}
}

void func_81()
{
	int iVar0;
	
	switch (iLocal_48)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_SLIDEY_CARS");
			func_31(1, 1);
			iLocal_48 = 5;
			break;
		
		case 5:
			if (((!IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()) || func_27(23)) || func_27(22)) || func_27(1))
			{
				iLocal_48 = 9;
			}
			if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
			{
				iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
				if (!IS_ENTITY_DEAD(iVar0, 0))
				{
					if (GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) == GET_PED_IN_VEHICLE_SEAT())
					{
						if (iLocal_69 == 0)
						{
							iLocal_69 = iVar0;
							if (!IS_ENTITY_DEAD(iLocal_69, 0))
							{
								if (func_82(1))
								{
									SET_VEHICLE_REDUCE_GRIP(iLocal_69, 1);
								}
								else
								{
									iLocal_69 = 0;
								}
							}
						}
						else if (iLocal_69 != iVar0)
						{
							if (!IS_ENTITY_DEAD(iLocal_69, 0))
							{
								SET_VEHICLE_REDUCE_GRIP(iLocal_69, 0);
							}
							iLocal_69 = 0;
						}
					}
				}
			}
			break;
		
		case 9:
			func_24("CHEAT_SLIDEY_CARS");
			iLocal_48 = 10;
			break;
		
		case 10:
			if (!IS_ENTITY_DEAD(iLocal_69, 0))
			{
				SET_VEHICLE_REDUCE_GRIP(iLocal_69, 0);
				iLocal_69 = 0;
			}
			func_31(1, 0);
			iLocal_48 = 1;
			break;
		
		default:
			break;
	}
}

int func_82(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	char* sVar4;
	
	if (!IS_PED_INJURED(IS_PED_INJURED()))
	{
		iVar0 = GET_PLAYERS_LAST_VEHICLE();
		if (DOES_ENTITY_EXIST(iVar0))
		{
			if (IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				iVar1 = GET_ENTITY_MODEL(iVar0);
				iVar2 = func_8();
				if (iParam0 & 1 != 0)
				{
					if (!IS_THIS_MODEL_A_CAR(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 2 != 0)
				{
					if (!IS_THIS_MODEL_A_BIKE(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 4 != 0)
				{
					if (!IS_THIS_MODEL_A_HELI(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 8 != 0)
				{
					if (!IS_THIS_MODEL_A_BOAT(iVar1))
					{
						return 0;
					}
				}
				if (iParam0 & 16 != 0)
				{
					if (GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "door_dside_r") != -1 || GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "door_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 32 != 0)
				{
					if (GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "door_dside_r") == -1 || GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "door_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 64 != 0)
				{
					if (IS_THIS_MODEL_A_BIKE(iVar1))
					{
						if (GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "seat_r") == -1)
						{
							return 0;
						}
					}
					else if (GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "seat_dside_r") != -1 || GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "seat_pside_r") != -1)
					{
						return 0;
					}
				}
				if (iParam0 & 128 != 0)
				{
					if (GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "seat_dside_r") == -1 || GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "seat_pside_r") == -1)
					{
						return 0;
					}
				}
				if (iParam0 & 256 != 0)
				{
					if (!func_10(iVar2))
					{
						return 0;
					}
					if (func_85(iVar2, 0) != iVar1)
					{
						return 0;
					}
				}
				if (iParam0 & 512 != 0)
				{
					if (!IS_THIS_MODEL_A_CAR(iVar1) && !IS_THIS_MODEL_A_CAR(iVar1))
					{
						return 0;
					}
					if (IS_BIG_VEHICLE(iVar0))
					{
						return 0;
					}
					sVar4 = GET_ENTITY_SCRIPT(iVar0, &uVar3);
					if (!IS_STRING_NULL_OR_EMPTY(sVar4))
					{
						if (GET_HASH_KEY(sVar4) == GET_HASH_KEY("taxiService"))
						{
							return 0;
						}
					}
					if (func_83(iVar0, iVar2, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_83(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!DOES_ENTITY_EXIST(iParam0) || !DOES_ENTITY_EXIST(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_84(iParam1, iVar0, &sVar1, &iVar2))
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

int func_84(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_85(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_10(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_86(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_86(int iParam0, var uParam1, int iParam2)
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

void func_87()
{
	switch (iLocal_47)
	{
		case 1:
			break;
		
		case 4:
			func_16("CHEAT_SUPER_JUMP");
			func_31(0, 1);
			iLocal_47 = 5;
			break;
		
		case 5:
			if ((((!IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()) || func_27(23)) || func_27(22)) || func_27(0)) || IS_PLAYER_PLAYING())
			{
				iLocal_47 = 9;
				return;
			}
			SET_SUPER_JUMP_THIS_FRAME(SET_SUPER_JUMP_THIS_FRAME());
			SET_PED_RESET_FLAG(SET_PED_RESET_FLAG(), 217, true);
			break;
		
		case 9:
			func_24("CHEAT_SUPER_JUMP");
			func_31(0, 0);
			iLocal_47 = 1;
			break;
		
		default:
			break;
	}
}

void func_88()
{
	if ((func_111() || iLocal_84 != 0) || func_15(14))
	{
		DISABLE_CONTROL_ACTION(2, 243, 1);
	}
	func_110();
	if (IS_PED_INJURED(IS_PED_INJURED()))
	{
		return;
	}
	if (IS_PED_BEING_ARRESTED(IS_PED_BEING_ARRESTED()))
	{
		return;
	}
	if (!IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
	{
		return;
	}
	if (!IS_PLAYER_CONTROL_ON(IS_PLAYER_CONTROL_ON()))
	{
		return;
	}
	if (func_34() || IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return;
	}
	if (func_109())
	{
		if (!iLocal_82)
		{
			func_108();
			iLocal_82 = 1;
		}
		return;
	}
	iLocal_82 = 0;
	iLocal_83 = 0;
	if ((func_107(988027572, 12) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("buzzoff"))) || func_106(20, joaat("buzzard")))
	{
		func_103(joaat("buzzard"), "CHEAT_SPAWN_VEH1");
	}
	if ((func_107(-1134279030, 11) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("bandit"))) || func_106(20, joaat("bmx")))
	{
		func_103(joaat("bmx"), "CHEAT_SPAWN_VEH2");
	}
	if ((func_107(971352167, 10) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("holein1"))) || func_106(20, joaat("caddy")))
	{
		func_103(joaat("caddy"), "CHEAT_SPAWN_VEH3");
	}
	if ((func_107(-269863225, 10) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("comet"))) || func_106(20, joaat("comet2")))
	{
		func_103(joaat("comet2"), "CHEAT_SPAWN_VEH4");
	}
	if ((func_107(458579068, 12) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("flyspray"))) || func_106(20, joaat("duster")))
	{
		func_103(joaat("duster"), "CHEAT_SPAWN_VEH5");
	}
	if ((func_107(-666513193, 12) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("rocket"))) || func_106(20, joaat("pcj")))
	{
		func_103(joaat("pcj"), "CHEAT_SPAWN_VEH6");
	}
	if ((func_107(-1245984749, 10) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("rapidgt"))) || func_106(20, joaat("rapidgt")))
	{
		func_103(joaat("rapidgt"), "CHEAT_SPAWN_VEH7");
	}
	if ((func_107(2076774618, 12) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("offroad"))) || func_106(20, joaat("sanchez")))
	{
		func_103(joaat("sanchez"), "CHEAT_SPAWN_VEH8");
	}
	if ((func_107(855685457, 9) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("vinewood"))) || func_106(20, joaat("stretch")))
	{
		func_103(joaat("stretch"), "CHEAT_SPAWN_VEH9");
	}
	if ((func_107(-591395876, 12) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("barnstorm"))) || func_106(20, joaat("stunt")))
	{
		func_103(joaat("stunt"), "CHEAT_SPAWN_VEH10");
	}
	if ((func_107(-1399217582, 10) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("trashed"))) || func_106(20, joaat("trash")))
	{
		func_103(joaat("trash"), "CHEAT_SPAWN_VEH11");
	}
	if (func_102())
	{
		if ((func_107(-375917581, 10) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("extinct"))) || func_106(20, joaat("dodo")))
		{
			func_103(joaat("dodo"), "CHEAT_SPAWN_VEH12");
		}
		if ((func_107(-2124307881, 10) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("deathcar"))) || func_106(20, joaat("dukes2")))
		{
			func_103(joaat("dukes2"), "CHEAT_SPAWN_VEH13");
		}
		if ((func_107(1028964594, 9) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("bubbles"))) || func_106(20, joaat("submersible2")))
		{
			func_103(joaat("submersible2"), "CHEAT_SPAWN_VEH14");
		}
	}
	if ((func_107(-393416581, 11) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("hoptoit"))) || func_106(0, 0))
	{
		func_101();
	}
	if ((func_107(-296509791, 8) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("snowday"))) || func_106(1, 0))
	{
		func_100();
	}
	if ((func_107(1120820643, 7) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("catchme"))) || func_106(2, 0))
	{
		func_99();
	}
	if ((func_107(-421458016, 9) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("gotgills"))) || func_106(3, 0))
	{
		func_98();
	}
	if ((func_107(372390926, 12) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("toolup"))) || func_106(4, 0))
	{
		iLocal_51 = 4;
	}
	if ((func_107(606506837, 8) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("makeitrain"))) || func_106(5, 0))
	{
		iLocal_52 = 4;
	}
	if ((func_107(453014206, 12) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("turtle"))) || func_106(6, 0))
	{
		iLocal_53 = 4;
	}
	if ((func_107(1773187142, 9) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("powerup"))) || func_106(7, 0))
	{
		iLocal_54 = 4;
	}
	if ((func_107(1173296014, 10) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("fugitive"))) || func_106(8, 0))
	{
		iLocal_55 = 4;
	}
	if ((func_107(-381269753, 10) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("lawyerup"))) || func_106(9, 0))
	{
		iLocal_56 = 4;
	}
	if ((func_107(-2023988698, 11) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("skydive"))) || func_106(10, 0))
	{
		iLocal_57 = 4;
	}
	if ((func_107(-835863906, 12) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("highex"))) || func_106(11, 0))
	{
		func_97();
	}
	if ((func_107(1958387485, 12) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("incendiary"))) || func_106(12, 0))
	{
		func_96();
	}
	if ((func_107(-903985180, 9) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("hothands"))) || func_106(13, 0))
	{
		func_95();
	}
	if ((func_107(2087642905, 9) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("floater"))) || func_106(14, 0))
	{
		func_94();
	}
	if ((func_107(1257820019, 10) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("painkiller"))) || func_106(15, 0))
	{
		func_93();
	}
	if ((func_107(1540206179, 7) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("slowmo"))) || func_106(16, 0))
	{
		func_92();
	}
	if ((func_107(115565392, 16) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("skyfall"))) || func_106(17, 0))
	{
		func_91();
	}
	if ((func_107(-1276513277, 8) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("liquor"))) || func_106(18, 0))
	{
		func_90();
	}
	if ((func_107(2040433593, 9) || _HAS_CHEAT_STRING_JUST_BEEN_ENTERED(joaat("deadeye"))) || func_106(19, 0))
	{
		func_89();
	}
}

void func_89()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(16))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_63 != 1)
	{
		func_21("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_66 = 4;
	}
}

void func_90()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		iLocal_65 = 1;
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		iLocal_65 = 1;
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(18))
	{
		func_21("CHEAT_NOT_NOW");
		iLocal_65 = 1;
		return;
	}
	if (iLocal_65 == 1)
	{
		iLocal_65 = 4;
	}
	else if (iLocal_65 == 5)
	{
		iLocal_65 = 9;
	}
}

void func_91()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (IS_INTERIOR_SCENE())
	{
		func_21("CHEAT_NOT_HERE");
		return;
	}
	if (iLocal_64 != 1)
	{
		func_21("CHEAT_ALREADY_ACTIVE");
		return;
	}
	if (((((func_27(23) || func_27(21)) || func_27(17)) || func_66(0)) || IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0)) || !IS_PED_IN_ANY_VEHICLE())
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if ((IS_PED_INJURED(IS_PED_INJURED()) || IS_PED_INJURED(IS_PED_INJURED(), 0)) || IS_PED_INJURED(joaat("respawn_controller")) > 0)
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	iLocal_64 = 2;
}

void func_92()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(16))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_66 != 1)
	{
		func_21("CHEAT_NOT_NOW");
	}
	else
	{
		iLocal_63 = 4;
	}
}

void func_93()
{
	vector3 vVar0;
	
	vVar0 = { func_19(PLAYER_ID()) };
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (((func_27(23) || func_27(21)) || func_27(15)) || vVar0.z <= -170f)
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_62 == 1)
	{
		iLocal_62 = 4;
	}
	else if (iLocal_62 == 5)
	{
		iLocal_62 = 9;
	}
}

void func_94()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if ((((func_27(23) || func_27(21)) || func_27(14)) || func_66(17)) || IS_ENTITY_IN_WATER(IS_ENTITY_IN_WATER()))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	iLocal_61 = 4;
}

void func_95()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		iLocal_60 = 1;
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		iLocal_60 = 1;
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(13))
	{
		func_21("CHEAT_NOT_NOW");
		iLocal_60 = 1;
		return;
	}
	if (iLocal_60 == 1)
	{
		iLocal_60 = 4;
	}
	else if (iLocal_60 == 5)
	{
		iLocal_60 = 9;
	}
}

void func_96()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		iLocal_59 = 1;
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		iLocal_59 = 1;
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(12))
	{
		func_21("CHEAT_NOT_NOW");
		iLocal_59 = 1;
		return;
	}
	if (iLocal_59 == 1)
	{
		iLocal_59 = 4;
	}
	else if (iLocal_59 == 5)
	{
		iLocal_59 = 9;
	}
}

void func_97()
{
	if (func_28())
	{
		func_21("CHEAT_MISSION_DENIED");
		iLocal_58 = 1;
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		iLocal_58 = 1;
		return;
	}
	if ((func_27(23) || func_27(21)) || func_27(11))
	{
		func_21("CHEAT_NOT_NOW");
		iLocal_58 = 1;
		return;
	}
	if (iLocal_58 == 1)
	{
		iLocal_58 = 4;
	}
	else if (iLocal_58 == 5)
	{
		iLocal_58 = 9;
	}
}

void func_98()
{
	if ((((func_27(23) || func_27(22)) || func_27(3)) || func_15(9)) || func_15(10))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_50 == 1)
	{
		iLocal_50 = 4;
	}
	else if (iLocal_50 == 5)
	{
		iLocal_50 = 9;
	}
}

void func_99()
{
	if ((((func_27(23) || func_27(22)) || func_27(2)) || func_15(9)) || func_15(10))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_49 == 1)
	{
		iLocal_49 = 4;
	}
	else if (iLocal_49 == 5)
	{
		iLocal_49 = 9;
	}
}

void func_100()
{
	if ((func_27(23) || func_27(22)) || func_27(1))
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_48 == 1)
	{
		iLocal_48 = 4;
	}
	else if (iLocal_48 == 5)
	{
		iLocal_48 = 9;
	}
}

void func_101()
{
	if (((func_27(23) || func_27(22)) || func_27(0)) || IS_INTERIOR_SCENE())
	{
		func_21("CHEAT_NOT_NOW");
		return;
	}
	if (func_70())
	{
		func_21("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_47 == 1)
	{
		iLocal_47 = 4;
	}
	else if (iLocal_47 == 5)
	{
		iLocal_47 = 9;
	}
}

int func_102()
{
	int iVar0;
	
	if (NETWORK_IS_SIGNED_IN())
	{
		if (_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (_0x593570C289A77688())
			{
				STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				SET_BIT(&iVar0, 2);
				SET_BIT(&iVar0, 4);
				SET_BIT(&iVar0, 6);
				SET_BIT(&Global_25, 2);
				SET_BIT(&Global_25, 4);
				SET_BIT(&Global_25, 6);
				STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (_0x5AA3BEFA29F03AD4())
				{
					iVar0 = GET_PROFILE_SETTING(866);
					SET_BIT(&iVar0, 0);
					_UNLOCK_EXCLUS_CONTENT(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_150394 == 2)
	{
		return 1;
	}
	else if (Global_150394 == 3)
	{
		return 0;
	}
	if (_0x5AA3BEFA29F03AD4())
	{
		if (IS_BIT_SET(IS_BIT_SET(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_103(int iParam0, char* sParam1)
{
	if (iLocal_46 == 1)
	{
		if (((((func_15(9) || _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("barry1")) > 0) || _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tennis")) > 0) || func_27(23)) || func_27(22)) || func_27(20))
		{
			func_21("CHEAT_NOT_NOW");
			return;
		}
		if (func_70())
		{
			func_21("CHEAT_PHONE_DENIED");
			return;
		}
		if (!func_104(iParam0))
		{
			func_21("CHEAT_VEHICLE_LOCKED_DENIED");
			return;
		}
		iLocal_67 = iParam0;
		iLocal_70 = sParam1;
		iLocal_46 = 2;
	}
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case joaat("dodo"):
			if (func_105(66, 0) == 0)
			{
				return 0;
			}
			break;
		
		case joaat("dukes2"):
			if (func_105(64, 0) == 0)
			{
				return 0;
			}
			break;
		
		case joaat("submersible2"):
			if (func_105(63, 0) == 0)
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_105(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return IS_BIT_SET(Global_111560.f_32744[iParam0], iParam1);
}

int func_106(int iParam0, int iParam1)
{
	if (IS_BIT_SET(Global_30984, iParam0))
	{
		if (iParam1 != 0)
		{
			if (iParam1 == Global_30985)
			{
				CLEAR_BIT(&Global_30984, iParam0);
				iLocal_83 = 1;
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			CLEAR_BIT(&Global_30984, iParam0);
			iLocal_83 = 1;
			return 1;
		}
	}
	return 0;
}

int func_107(int iParam0, int iParam1)
{
	if (!func_15(14))
	{
		return _HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(iParam0, iParam1);
	}
	return 0;
}

void func_108()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_80[iVar0] != -1)
		{
			_REMOVE_NOTIFICATION(iLocal_80[iVar0]);
			iLocal_80[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_109()
{
	if (((Global_98669 == 13 || Global_98669 == 10) || Global_98669 == 11) || Global_98669 == 12)
	{
		return 0;
	}
	return 1;
}

void func_110()
{
	if (func_15(14) || (!IS_SCREEN_FADED_IN() && iLocal_84 != 0))
	{
		iLocal_84 = GET_GAME_TIMER();
	}
	if (iLocal_84 != 0)
	{
		if (!func_15(14))
		{
			if ((GET_GAME_TIMER() - iLocal_84) > 1000)
			{
				iLocal_84 = 0;
			}
		}
	}
}

int func_111()
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

void func_112()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_80[iVar0] = -1;
		iVar0++;
	}
	iLocal_82 = 0;
	iLocal_81 = 0;
}

void func_113()
{
	_0x2587A48BC88DFADF(0);
	if (iLocal_64 == 5)
	{
		func_37();
	}
	if (iLocal_65 == 5)
	{
		func_46(1);
	}
	if (iLocal_63 == 5 || iLocal_66 == 5)
	{
		SET_TIME_SCALE(1f);
	}
	if (!IS_PED_INJURED(IS_PED_INJURED()))
	{
		if (iLocal_62 == 5)
		{
			SET_PLAYER_INVINCIBLE(SET_PLAYER_INVINCIBLE(), 0);
			SET_ENTITY_PROOFS(SET_ENTITY_PROOFS(), false, false, false, false, false, false, 0, false);
		}
		SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(), 1f);
		SET_SWIM_MULTIPLIER_FOR_PLAYER(SET_SWIM_MULTIPLIER_FOR_PLAYER(), 1f);
	}
	SET_GRAVITY_LEVEL(0);
	Global_30982 = 0;
	Global_30981 = 0;
	Global_30983 = 0;
	Global_30984 = 0;
	Global_30986 = 0;
	Global_30985 = 0;
	TERMINATE_THIS_THREAD();
}

__________________________
Native Named by Reliency
1577160490
__________________________
