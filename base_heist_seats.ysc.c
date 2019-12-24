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
	var uLocal_46 = 0;
	struct<14> Local_47[30];
	var uLocal_48 = 0;
	var uLocal_49 = -1;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = -1;
	var uLocal_54 = -1;
	var uLocal_55 = -1;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
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
	if (func_78())
	{
		while (!func_64())
		{
			func_11();
			wait(0);
		}
	}
	func_1();
}

void func_1()
{
	CLEAR_BIT(&Global_1573975, 1);
	func_3(&Local_47);
	func_2();
}

void func_2()
{
	TERMINATE_THIS_THREAD();
}

void func_3(int iParam0)
{
	func_9(&(iParam0->f_421.f_5));
	func_4(iParam0, 1);
}

void func_4(var uParam0, bool bParam1)
{
	if (func_5(uParam0))
	{
		CLEAR_HELP(1);
	}
	if (bParam1)
	{
		func_9(&(uParam0->f_421.f_5));
	}
}

bool func_5(var uParam0)
{
	char* sVar0;
	char* sVar1;
	
	func_7(uParam0, uParam0->f_421.f_2, &sVar0);
	func_7(uParam0, uParam0->f_421.f_2, &sVar1);
	return (func_6(&sVar0) || func_6(&sVar1));
}

int func_6(char* sParam0)
{
	BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_7(var uParam0, int iParam1, char* sParam2)
{
	if (func_8(&(uParam0->f_421), 7))
	{
		Stack.Push(uParam0[iParam1 /*14*/]);
		Stack.Push(iParam1);
		Stack.Push(sParam2);
		Call_Loc(uParam0->f_421.f_14);
	}
	else
	{
		StringCopy(sParam2, "MPJAC_EXIT", 16);
	}
}

bool func_8(var uParam0, int iParam1)
{
	return IS_BIT_SET(*uParam0, iParam1);
}

void func_9(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_10(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42116[iVar0 /*32*/])
		{
			Global_42116[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_10(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42116[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_11()
{
	func_19(&Local_47);
	if (Global_1590291 == PLAYER_ID() && !PLAYER_ID(Global_1692918[PLAYER_ID() /*39*/].f_27, 5))
	{
		if (func_18(&Local_47, 1, 1))
		{
			func_17(&Local_47);
		}
		if (func_18(&Local_47, 0, 0))
		{
			SET_BIT(&Global_1573975, 1);
			if ((((((iLocal_64 == 0 && !IS_BIT_SET(Global_1692918[IS_BIT_SET() /*39*/].f_27, 3)) && !func_16()) && !IS_BIT_SET()) && !func_15(0)) && !func_14()) && IS_BIT_SET(0, 225))
			{
				func_12(&Local_47);
			}
		}
		else
		{
			CLEAR_BIT(&Global_1573975, 1);
		}
	}
	else
	{
		CLEAR_BIT(&Global_1573975, 1);
	}
	iLocal_64 = 0;
	if (IS_BIT_SET(Global_1692918[IS_BIT_SET() /*39*/].f_27, 3))
	{
		SET_BIT(&iLocal_64, 0);
	}
	if (func_16())
	{
		SET_BIT(&iLocal_64, 1);
	}
	if (IS_PAUSE_MENU_ACTIVE())
	{
		SET_BIT(&iLocal_64, 2);
	}
	if (func_14())
	{
		SET_BIT(&iLocal_64, 4);
	}
	if (func_15(0))
	{
		SET_BIT(&iLocal_64, 3);
	}
}

void func_12(int iParam0)
{
	func_13(&(iParam0->f_421), 10);
}

void func_13(int iParam0, int iParam1)
{
	SET_BIT(iParam0, iParam1);
}

bool func_14()
{
	return Global_73784;
}

int func_15(int iParam0)
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

int func_16()
{
	if (Global_2437549.f_1155.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_17(int iParam0)
{
	func_13(&(iParam0->f_421), 9);
}

bool func_18(int iParam0, int iParam1, int iParam2)
{
	return ((iParam0->f_421.f_4 > 2 && (iParam1 || func_8(&(iParam0->f_421), 11))) && (iParam2 || iParam0->f_421.f_4 < 8));
}

void func_19(int iParam0)
{
	char* sVar0;
	char* sVar1;
	struct<14> Var2;
	vector3 vVar3;
	vector3 vVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	func_62(iParam0);
	func_60(iParam0);
	Var2.f_1.f_6 = 1061158912;
	Var2 = { *(iParam0[iParam0->f_421.f_2 /*14*/]) };
	switch (iParam0->f_421.f_4)
	{
		case 0:
			func_59(&(iParam0->f_421), 11);
			func_58(iParam0, 1);
			break;
		
		case 1:
			if (func_57(iParam0))
			{
				iParam0->f_421.f_6 = GET_GAME_TIMER();
				func_58(iParam0, 2);
			}
			break;
		
		case 2:
			if (func_56(PLAYER_PED_ID(), iParam0[iParam0->f_421.f_2 /*14*/]))
			{
				if ((func_55(iParam0) || func_53(iParam0)) || !func_52(iParam0))
				{
					func_4(iParam0, 1);
					func_58(iParam0, 1);
				}
				else if (iParam0->f_421.f_5 == -1)
				{
					if ((GET_GAME_TIMER() - iParam0->f_421.f_6) > 150)
					{
						func_51(&(iParam0->f_421.f_5), 4, "MPJAC_SIT", 0, 0, 0, 0);
					}
				}
				else if (IS_CONTROL_JUST_PRESSED(0, 51))
				{
					func_9(&(iParam0->f_421.f_5));
					func_48(iParam0);
					func_58(iParam0, 3);
				}
			}
			else
			{
				func_4(iParam0, 1);
				func_58(iParam0, 1);
			}
			break;
		
		case 3:
			func_47(iParam0, &sVar0);
			REQUEST_ANIM_DICT(&sVar0);
			if (HAS_ANIM_DICT_LOADED(&sVar0))
			{
				func_58(iParam0, 4);
			}
			break;
		
		case 4:
			func_47(iParam0, &sVar0);
			func_46(iParam0, &sVar1);
			if (Var2 != 3)
			{
				vVar3 = { GET_ANIM_INITIAL_OFFSET_POSITION(&sVar0, &sVar1, func_45(iParam0), func_44(iParam0), 0, 2) };
				vVar4 = { GET_ANIM_INITIAL_OFFSET_ROTATION(&sVar0, &sVar1, func_45(iParam0), func_44(iParam0), 0f, 2) };
				iVar5 = vVar4.z;
				TASK_GO_STRAIGHT_TO_COORD(TASK_GO_STRAIGHT_TO_COORD(), vVar3, 1f, 500, iVar5, 0.15f);
			}
			func_58(iParam0, 5);
			break;
		
		case 5:
			func_33(iParam0);
			func_47(iParam0, &sVar0);
			func_46(iParam0, &sVar1);
			if (Var2 == 3)
			{
				iVar6 = GET_SCRIPT_TASK_STATUS(GET_SCRIPT_TASK_STATUS(), 1920390111);
			}
			else
			{
				iVar6 = GET_SCRIPT_TASK_STATUS(GET_SCRIPT_TASK_STATUS(), 2106541073);
			}
			if (iVar6 != 1 && iVar6 != 0)
			{
				iParam0->f_421.f_1 = _0x77758139EC9B66C7(func_45(iParam0), func_44(iParam0), 2, true, false, 1065353216, 0, 1065353216);
				NETWORK_CREATE_SYNCHRONISED_SCENE(NETWORK_CREATE_SYNCHRONISED_SCENE(), iParam0->f_421.f_1, &sVar0, &sVar1, 2f, -1000f, 13, 16, 1.5f, 0);
				NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(iParam0->f_421.f_1);
				iParam0->f_421.f_8.f_4 = GET_GAME_TIMER();
				func_13(&(iParam0->f_421), 8);
				func_58(iParam0, 6);
			}
			break;
		
		case 6:
			if (func_8(&(iParam0->f_421), 10))
			{
				func_59(&(iParam0->f_421), 10);
				func_32(iParam0);
			}
			func_33(iParam0);
			func_26(iParam0);
			iVar7 = NETWORK_STOP_SYNCHRONISED_SCENE(iParam0->f_421.f_1);
			if (IS_SYNCHRONIZED_SCENE_RUNNING(iVar7))
			{
				if (GET_SYNCHRONIZED_SCENE_PHASE(iVar7) >= 1f)
				{
					func_20(iParam0, 0);
					func_47(iParam0, &sVar0);
					func_46(iParam0, &sVar1);
					iParam0->f_421.f_1 = _0x77758139EC9B66C7(func_45(iParam0), func_44(iParam0), 2, true, false, 1065353216, 0, 1065353216);
					NETWORK_CREATE_SYNCHRONISED_SCENE(NETWORK_CREATE_SYNCHRONISED_SCENE(), iParam0->f_421.f_1, &sVar0, &sVar1, 4f, -1.5f, 13, 16, 1000f, 0);
					NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(iParam0->f_421.f_1);
					func_13(&(iParam0->f_421), 8);
					func_13(&(iParam0->f_421), 11);
				}
				else
				{
					func_59(&(iParam0->f_421), 8);
				}
			}
			else if (!func_8(&(iParam0->f_421), 8))
			{
				func_58(iParam0, 8);
			}
			break;
		
		case 7:
			NETWORK_START_SYNCHRONISED_SCENE(iParam0->f_421.f_1);
			func_58(iParam0, 8);
			break;
		
		case 8:
			iVar8 = NETWORK_STOP_SYNCHRONISED_SCENE(iParam0->f_421.f_1);
			if (IS_SYNCHRONIZED_SCENE_RUNNING(iVar8))
			{
				if ((GET_SYNCHRONIZED_SCENE_PHASE(iVar8) >= 1f || GET_SYNCHRONIZED_SCENE_PHASE(GET_SYNCHRONIZED_SCENE_PHASE(), 364629851)) || GET_SYNCHRONIZED_SCENE_PHASE(GET_SYNCHRONIZED_SCENE_PHASE(), 2116425869))
				{
					NETWORK_START_SYNCHRONISED_SCENE(iParam0->f_421.f_1);
					func_4(iParam0, 1);
					func_58(iParam0, 0);
				}
			}
			else
			{
				func_4(iParam0, 1);
				func_58(iParam0, 0);
			}
			break;
	}
}

void func_20(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam1)
	{
		iVar1 = func_21(uParam0);
		if (iVar1 != uParam0->f_421.f_8.f_1)
		{
			if (iVar1 == 0)
			{
				iVar0 = (11 + uParam0->f_421.f_8.f_1);
			}
			else
			{
				iVar0 = (6 + iVar1);
			}
		}
		else
		{
			iVar0 = uParam0->f_421.f_8.f_2;
		}
		iVar1 = uParam0->f_421.f_8.f_1;
	}
	else if (uParam0->f_421.f_8.f_2 == 5)
	{
		iVar1 = uParam0->f_421.f_8.f_1;
		iVar2 = 3;
		iVar0 = GET_RANDOM_INT_IN_RANGE(0, iVar2);
		if (iVar0 == uParam0->f_421.f_8.f_3)
		{
			iVar0 = (iVar0 + 1 % iVar2);
		}
	}
	else
	{
		if (uParam0->f_421.f_8.f_2 > 6)
		{
			iVar1 = func_21(uParam0);
			uParam0->f_421.f_8.f_4 = GET_GAME_TIMER();
		}
		else
		{
			iVar1 = uParam0->f_421.f_8.f_1;
		}
		if ((GET_GAME_TIMER() - uParam0->f_421.f_8.f_4) >= 90000)
		{
			iVar1 = func_21(uParam0);
			if (iVar1 != uParam0->f_421.f_8.f_1)
			{
				if (iVar1 == 0)
				{
					iVar0 = (11 + uParam0->f_421.f_8.f_1);
				}
				else
				{
					iVar0 = (6 + iVar1);
				}
			}
			iVar1 = uParam0->f_421.f_8.f_1;
		}
		else
		{
			iVar0 = 5;
		}
	}
	uParam0->f_421.f_8.f_3 = uParam0->f_421.f_8.f_2;
	uParam0->f_421.f_8.f_2 = iVar0;
	uParam0->f_421.f_8.f_1 = iVar1;
}

int func_21(var uParam0)
{
	if (uParam0->f_421.f_8 == 2)
	{
		return uParam0->f_421.f_8.f_1;
	}
	return (uParam0->f_421.f_8.f_1 + 1 % func_22(uParam0->f_421.f_8));
}

int func_22(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		
		case 1:
			return func_23(func_24(), 4, 5);
		
		case 2:
			return 5;
		
		default:
	}
	return 0;
}

int func_23(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_24()
{
	return func_25(PLAYER_ID());
}

int func_25(int iParam0)
{
	if (GET_ENTITY_MODEL(GET_ENTITY_MODEL(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

void func_26(var uParam0)
{
	vector3 vVar0;
	float fVar1;
	
	if (uParam0->f_421.f_4 == 6)
	{
		vVar0 = { GET_CONTROL_NORMAL(0, 218), GET_CONTROL_NORMAL(0, 219), 0f };
		fVar1 = vmag(vVar0);
		if ((uParam0->f_421.f_4 == 6 && !HAS_ANIM_EVENT_FIRED(HAS_ANIM_EVENT_FIRED(), -1322051853)) && !func_8(&(uParam0->f_421), 12))
		{
			if (fVar1 >= 0.35f)
			{
				func_31(uParam0);
			}
		}
		if (HAS_ANIM_EVENT_FIRED(HAS_ANIM_EVENT_FIRED(), -1322051853))
		{
			func_4(uParam0, 1);
		}
		else if (func_30(uParam0))
		{
			func_4(uParam0, 1);
		}
		else
		{
			_DISABLE_INPUT_GROUP(2);
			DISABLE_CONTROL_ACTION(0, 24, 1);
			DISABLE_CONTROL_ACTION(0, 257, 1);
			DISABLE_CONTROL_ACTION(0, 142, 1);
			DISABLE_CONTROL_ACTION(0, 141, 1);
			DISABLE_CONTROL_ACTION(0, 140, 1);
			DISABLE_CONTROL_ACTION(0, 263, 1);
			DISABLE_CONTROL_ACTION(0, 264, 1);
			DISABLE_CONTROL_ACTION(0, 143, 1);
			DISABLE_CONTROL_ACTION(2, 200, 1);
			if (((((!IS_PAUSE_MENU_ACTIVE() && !func_8(&(uParam0->f_421), 0)) && !func_8(&(uParam0->f_421), 4)) && !func_29()) && !func_27(1)) && uParam0->f_421.f_8.f_2 != 3)
			{
				if (uParam0->f_421.f_5 == -1)
				{
					func_51(&(uParam0->f_421.f_5), 4, "MPJAC_EXIT", 0, 0, 0, 0);
				}
				if (uParam0->f_421.f_4 == 6)
				{
					if (IS_CONTROL_JUST_PRESSED(0, 51))
					{
						func_32(uParam0);
					}
				}
			}
		}
	}
	func_59(&(uParam0->f_421), 9);
}

int func_27(bool bParam0)
{
	if (_0xFC859E2374407556())
	{
		if (!IS_PED_INJURED(IS_PED_INJURED()))
		{
			if (func_28(PLAYER_PED_ID()))
			{
				if (IS_CONTROL_PRESSED(0, 25) || IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22211.f_130)
	{
		return 0;
	}
	if (IS_CONTROL_PRESSED(0, 19) || (!bParam0 && IS_CONTROL_PRESSED(0, 19)))
	{
		return 1;
	}
	if (IS_PC_VERSION())
	{
		if (((IS_CONTROL_PRESSED(0, 166) || IS_CONTROL_PRESSED(0, 167)) || IS_CONTROL_PRESSED(0, 168)) || IS_CONTROL_PRESSED(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((IS_DISABLED_CONTROL_PRESSED(0, 166) || IS_DISABLED_CONTROL_PRESSED(0, 167)) || IS_DISABLED_CONTROL_PRESSED(0, 168)) || IS_DISABLED_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_28(int iParam0)
{
	int iVar0;
	
	if (IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!IS_PED_INJURED(iParam0))
		{
			GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_29()
{
	if (Global_2437549.f_1155.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_30(var uParam0)
{
	return func_8(&(uParam0->f_421), 9);
}

void func_31(var uParam0)
{
	char* sVar0;
	char* sVar1;
	
	if (((func_21(uParam0) != uParam0->f_421.f_8.f_1 && uParam0->f_421.f_8.f_2 < 6) && uParam0->f_421.f_8.f_2 != 3) && uParam0->f_421.f_8.f_2 != 4)
	{
		func_20(uParam0, 1);
		func_47(uParam0, &sVar0);
		func_46(uParam0, &sVar1);
		uParam0->f_421.f_1 = _0x77758139EC9B66C7(func_45(uParam0), func_44(uParam0), 2, true, false, 1065353216, 0, 1065353216);
		NETWORK_CREATE_SYNCHRONISED_SCENE(NETWORK_CREATE_SYNCHRONISED_SCENE(), uParam0->f_421.f_1, &sVar0, &sVar1, 4f, -1.5f, 13, 16, 1000f, 0);
		NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(uParam0->f_421.f_1);
		func_13(&(uParam0->f_421), 8);
		_0x2208438012482A1A(_0x2208438012482A1A(), 0, 0);
	}
}

void func_32(var uParam0)
{
	char* sVar0;
	
	uParam0->f_421.f_1 = _0x77758139EC9B66C7(func_45(uParam0), func_44(uParam0), 2, true, false, 1065353216, 0, 1065353216);
	func_47(uParam0, &sVar0);
	NETWORK_CREATE_SYNCHRONISED_SCENE(NETWORK_CREATE_SYNCHRONISED_SCENE(), uParam0->f_421.f_1, &sVar0, "exit", 4f, -4f, 13, 16, 1000f, 0);
	NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(uParam0->f_421.f_1);
	func_9(&(uParam0->f_421.f_5));
	func_58(uParam0, 8);
}

void func_33(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_421.f_4)
	{
		case 4:
		case 8:
			func_38(1);
		
		case 6:
			_F4F2C0D4EE209E20();
			_SHOW_WEAPON_WHEEL(0);
			DISPLAY_AMMO_THIS_FRAME(0);
			HIDE_HUD_COMPONENT_THIS_FRAME(19);
			HIDE_HUD_COMPONENT_THIS_FRAME(2);
			_BLOCK_WEAPON_WHEEL_THIS_FRAME();
			func_37();
			if (GET_CURRENT_PED_WEAPON(GET_CURRENT_PED_WEAPON(), &iVar0, 1) && iVar0 != joaat("weapon_unarmed"))
			{
				SET_CURRENT_PED_WEAPON(SET_CURRENT_PED_WEAPON(), joaat("weapon_unarmed"), true);
			}
			DISABLE_CONTROL_ACTION(0, 37, 1);
			func_35(1);
			func_34();
			break;
	}
}

void func_34()
{
	Global_22211.f_6 = 1;
}

void func_35(bool bParam0)
{
	if (bParam0)
	{
		if (func_36())
		{
			Global_2448961.f_37 = 1;
		}
	}
	else
	{
		Global_2448961.f_37 = 0;
	}
}

bool func_36()
{
	return IS_BIT_SET(Global_2448961.f_2, 11);
}

void func_37()
{
	SET_BIT(&Global_7357, 4);
}

void func_38(int iParam0)
{
	if (func_43())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_15(0))
		{
			func_39(iParam0);
		}
		SET_BIT(&Global_7357, 2);
	}
}

void func_39(int iParam0)
{
	if (func_43())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_42())
		{
			func_41(1, 1);
		}
		else
		{
			func_41(0, 0);
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
	if (!func_40())
	{
		Global_19486.f_1 = 3;
	}
}

int func_40()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_41(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_15(0))
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

bool func_42()
{
	return IS_BIT_SET(Global_1687880, 5);
}

bool func_43()
{
	return IS_BIT_SET(Global_1687880, 19);
}

Vector3 func_44(var uParam0)
{
	vector3 vVar0;
	
	vVar0 = { (uParam0[uParam0->f_421.f_2 /*14*/])->f_8.f_3 };
	if (func_24() && uParam0->f_421.f_8 == 0)
	{
		vVar0.z = (vVar0.z - 4f);
	}
	return vVar0;
}

Vector3 func_45(var uParam0)
{
	return (uParam0[uParam0->f_421.f_2 /*14*/])->f_8;
}

void func_46(var uParam0, char* sParam1)
{
	switch (uParam0->f_421.f_8.f_2)
	{
		case 0:
			StringCopy(sParam1, "IDLE_A", 16);
			break;
		
		case 1:
			StringCopy(sParam1, "IDLE_B", 16);
			break;
		
		case 2:
			StringCopy(sParam1, "IDLE_C", 16);
			break;
		
		case 3:
			StringCopy(sParam1, "ENTER", 16);
			break;
		
		case 5:
			StringCopy(sParam1, "BASE", 16);
			break;
		
		case 4:
			StringCopy(sParam1, "EXIT", 16);
			break;
		
		case 7:
			StringCopy(sParam1, "A_TO_B", 16);
			break;
		
		case 8:
			StringCopy(sParam1, "B_TO_C", 16);
			break;
		
		case 9:
			StringCopy(sParam1, "C_TO_D", 16);
			break;
		
		case 10:
			StringCopy(sParam1, "D_TO_E", 16);
			break;
		
		case 12:
			StringCopy(sParam1, "B_TO_E", 16);
			break;
		
		case 13:
			StringCopy(sParam1, "C_TO_A", 16);
			break;
		
		case 14:
			StringCopy(sParam1, "D_TO_A", 16);
			break;
		
		case 15:
			StringCopy(sParam1, "E_TO_A", 16);
			break;
		
		default:
			StringCopy(sParam1, "invalid_clip", 16);
	}
}

void func_47(var uParam0, char* sParam1)
{
	switch (uParam0->f_421.f_8)
	{
		case 0:
			StringCopy(sParam1, "ANIM@AMB@CLUBHOUSE@SEATING", 64);
			break;
		
		case 1:
			StringCopy(sParam1, "ANIM@AMB@OFFICE@SEATING", 64);
			break;
		
		case 2:
			StringCopy(sParam1, "ANIM@AMB@FACILITY@BRIEFING_ROOM@SEATING", 64);
			break;
	}
	if (func_24())
	{
		StringConCat(sParam1, "@FEMALE", 64);
	}
	else
	{
		StringConCat(sParam1, "@MALE", 64);
	}
	switch (uParam0->f_421.f_8)
	{
		case 1:
		case 0:
			switch (uParam0->f_421.f_8.f_1)
			{
				case 0:
					StringConCat(sParam1, "@VAR_A@BASE@", 64);
					break;
				
				case 1:
					StringConCat(sParam1, "@VAR_B@BASE@", 64);
					break;
				
				case 2:
					StringConCat(sParam1, "@VAR_C@BASE@", 64);
					break;
				
				case 3:
					StringConCat(sParam1, "@VAR_D@BASE@", 64);
					break;
				
				case 4:
					StringConCat(sParam1, "@VAR_E@BASE@", 64);
					break;
			}
			break;
		
		case 2:
			switch (uParam0->f_421.f_8.f_1)
			{
				case 0:
					StringConCat(sParam1, "@VAR_A@", 64);
					break;
				
				case 1:
					StringConCat(sParam1, "@VAR_B@", 64);
					break;
				
				case 2:
					StringConCat(sParam1, "@VAR_C@", 64);
					break;
				
				case 3:
					StringConCat(sParam1, "@VAR_D@", 64);
					break;
				
				case 4:
					StringConCat(sParam1, "@VAR_E@", 64);
					break;
			}
			break;
	}
}

void func_48(var uParam0)
{
	uParam0->f_421.f_8 = func_50((*uParam0)[uParam0->f_421.f_2 /*14*/]);
	uParam0->f_421.f_8.f_1 = func_49(uParam0);
	uParam0->f_421.f_8.f_2 = 3;
	uParam0->f_421.f_8.f_3 = 3;
}

int func_49(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_421.f_8)
	{
		case 2:
			iVar0 = GET_RANDOM_INT_IN_RANGE(0, 4);
			if (iVar0 >= 1)
			{
				iVar0++;
			}
			break;
		
		default:
			iVar0 = GET_RANDOM_INT_IN_RANGE(0, func_22(uParam0->f_421.f_8));
	}
	return iVar0;
}

int func_50(int iParam0)
{
	if (iParam0 >= 11)
	{
		return 0;
	}
	else if (iParam0 >= 9)
	{
		return 0;
	}
	else if (iParam0 >= 7)
	{
		return 0;
	}
	else if (iParam0 >= 4)
	{
		return 0;
	}
	else if (iParam0 > 1)
	{
		return 2;
	}
	return 0;
}

void func_51(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*uParam0 == -1)
		{
			func_9(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_42116[iVar0 /*32*/])
		{
			Global_42116[iVar0 /*32*/] = 1;
			Global_42116[iVar0 /*32*/].f_1 = Global_42317;
			Global_42317++;
			Global_42116[iVar0 /*32*/].f_4 = 0;
			Global_42116[iVar0 /*32*/].f_29 = 0;
			Global_42116[iVar0 /*32*/].f_5 = 0;
			Global_42116[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_42116[iVar0 /*32*/].f_8), sParam2, 16);
			Global_42116[iVar0 /*32*/].f_6 = iParam3;
			Global_42116[iVar0 /*32*/].f_31 = GET_ID_OF_THIS_THREAD();
			Global_42116[iVar0 /*32*/].f_7 = 0;
			Global_42116[iVar0 /*32*/].f_3 = iParam5;
			if (!IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_42116[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_42116[iVar0 /*32*/].f_13), sParam4, 64);
				Global_42116[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_42116[iVar0 /*32*/].f_12 = 0;
				Global_42116[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_42116[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_52(var uParam0)
{
	Stack.Push(!func_8(&(uParam0->f_421), 5));
	Stack.Push(uParam0[uParam0->f_421.f_2 /*14*/]);
	Stack.Push(uParam0->f_421.f_2);
	Call_Loc(uParam0->f_421.f_13);
	return (StackVal || StackVal);
}

int func_53(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(iVar0)))
		{
			iVar1 = NETWORK_GET_PLAYER_INDEX(NETWORK_GET_PLAYER_INDEX(iVar0));
			if ((iVar1 != PLAYER_ID() && func_54(iVar1, 1, 1)) && func_56(PLAYER_ID(iVar1), uParam0[uParam0->f_421.f_2 /*14*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_54(int iParam0, bool bParam1, bool bParam2)
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

bool func_55(var uParam0)
{
	return uParam0->f_421 & 31 > 0;
}

bool func_56(int iParam0, var uParam1)
{
	return IS_ENTITY_IN_ANGLED_AREA(iParam0, uParam1->f_1, uParam1->f_1.f_3, uParam1->f_1.f_6, 0, true, 0);
}

int func_57(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_56(PLAYER_PED_ID(), uParam0[uParam0->f_421.f_2 /*14*/]))
		{
			return 1;
		}
		else
		{
			uParam0->f_421.f_2 = (uParam0->f_421.f_2 + 1 % 30);
		}
		iVar0++;
	}
	return 0;
}

void func_58(var uParam0, int iParam1)
{
	uParam0->f_421.f_4 = iParam1;
}

void func_59(int iParam0, int iParam1)
{
	CLEAR_BIT(iParam0, iParam1);
}

void func_60(var uParam0)
{
	if (uParam0->f_421.f_4 == 6)
	{
	}
	else if (uParam0->f_421.f_4 > 4)
	{
		_0x2AED6301F67007D5(_0x2AED6301F67007D5());
		SET_PED_CAPSULE(SET_PED_CAPSULE(), func_61(uParam0));
		uParam0->f_421.f_7 = GET_FRAME_COUNT();
	}
	else if (uParam0->f_421.f_4 > 1)
	{
		SET_PED_CAPSULE(SET_PED_CAPSULE(), func_61(uParam0));
		uParam0->f_421.f_7 = GET_FRAME_COUNT();
	}
	else if ((GET_FRAME_COUNT() - uParam0->f_421.f_7) < 5)
	{
		SET_PED_CAPSULE(SET_PED_CAPSULE(), func_61(uParam0));
	}
}

float func_61(var uParam0)
{
	switch ((*uParam0)[uParam0->f_421.f_2 /*14*/])
	{
		case 12:
		case 10:
		case 6:
			return 0.24f;
		
		case 2:
			return 0.16f;
		
		case 3:
			return 0.18f;
		
		default:
	}
	return 0.13f;
}

void func_62(var uParam0)
{
	func_63(&(uParam0->f_421), 4, func_14());
	func_63(&(uParam0->f_421), 1, IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0));
	func_63(&(uParam0->f_421), 3, IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 1));
	func_63(&(uParam0->f_421), 0, func_15(0));
	func_63(&(uParam0->f_421), 2, IS_PED_RUNNING(IS_PED_RUNNING()));
}

void func_63(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (bParam2)
	{
		SET_BIT(iParam0, iVar0);
	}
	else
	{
		CLEAR_BIT(iParam0, iVar0);
	}
}

int func_64()
{
	if (!func_77(PLAYER_PED_ID()))
	{
		return 1;
	}
	if (func_66())
	{
		return 1;
	}
	if (Global_1590291 == func_65())
	{
		return 1;
	}
	return 0;
}

int func_65()
{
	return -1;
}

int func_66()
{
	var uVar0;
	
	func_74(&uVar0);
	if (Global_1312850 == 0)
	{
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_73())
	{
		return 1;
	}
	if (Global_2461241)
	{
		return 1;
	}
	if (func_72())
	{
		return 1;
	}
	if (func_71(159))
	{
		if (!func_70())
		{
			return 1;
		}
	}
	if (func_71(157))
	{
		return 1;
	}
	if (!NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_67() != 0)
	{
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_67()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_67()
{
	switch (func_69())
	{
		case 0:
			return func_68();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_68()
{
	switch (Global_2461343)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_69()
{
	return Global_30736;
}

bool func_70()
{
	return Global_2448961.f_598;
}

int func_71(int iParam0)
{
	if (GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_72()
{
	return Global_2458999;
}

bool func_73()
{
	return Global_2448961.f_593;
}

void func_74(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0;
	while (iVar0 < GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 174)
		{
			GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1773456834:
					func_75(iVar0);
					break;
				
				case -498955166:
					GET_EVENT_DATA(1, iVar0, &vVar3, 4);
					if (vVar3.z == 1934809180)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_75(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_54(vVar0.y, 1, 1))
		{
			iVar1 = GET_PLAYER_PED(vVar0.y);
			if (DOES_ENTITY_EXIST(iVar1))
			{
				if (IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && IS_VEHICLE_WINDOW_INTACT())
					{
						if (func_76(iVar2, &bVar3))
						{
							REMOVE_VEHICLE_WINDOW(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_76(int iParam0, var uParam1)
{
	if (DOES_ENTITY_EXIST(iParam0))
	{
		if (!IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!IS_THIS_MODEL_A_TRAIN(IS_THIS_MODEL_A_TRAIN(iParam0)))
				{
					SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, 1);
					*uParam1 = 1;
				}
			}
		}
		if (DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, 0))
		{
			if (NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_77(int iParam0)
{
	return IS_ENTITY_IN_ANGLED_AREA(iParam0, 354.4375f, 4877.2f, -62.34054f, 345.1211f, 4864.095f, -55.11187f, 16f, 0, true, 0);
}

int func_78()
{
	if (Global_1590291 != func_65())
	{
		if (NETWORK_IS_SCRIPT_ACTIVE("base_heist_seats", Global_1590291, 1, 0))
		{
			return 0;
		}
		NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, Global_1590291);
		func_90(0, -1, 0);
		SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		func_79();
		return 1;
	}
	return 0;
}

void func_79()
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { func_89() };
	vVar1 = { func_88() };
	func_85(0, func_87(343.93f, 4875.389f, -60.44f, -90f), -90f, vVar0, vVar1);
	func_85(1, func_87(344.08f, 4874.239f, -60.44f, -86f), -86f, vVar0, vVar1);
	func_85(2, func_87(344.33f, 4873.189f, -60.44f, -78f), -78f, vVar0, vVar1);
	func_85(3, func_87(344.7f, 4872.239f, -60.44f, -72f), -72f, vVar0, vVar1);
	func_85(4, func_87(345.06f, 4871.48f, -60.44f, -67f), -67f, vVar0, vVar1);
	func_85(5, func_87(345.86f, 4870.289f, -60.44f, -60f), -60f, vVar0, vVar1);
	func_85(6, func_87(350.41f, 4867.05f, -60.44f, -26f), -26f, vVar0, vVar1);
	func_85(7, func_87(351.51f, 4866.75f, -60.44f, -17f), -17f, vVar0, vVar1);
	func_85(8, func_87(352.66f, 4866.6f, -60.44f, -10f), -10f, vVar0, vVar1);
	func_85(9, func_87(353.6f, 4866.58f, -60.44f, -4f), -4f, vVar0, vVar1);
	func_85(10, func_87(354.7f, 4866.68f, -60.44f, 4f), 4f, vVar0, vVar1);
	func_85(11, func_87(355.85f, 4866.91f, -60.44f, 10f), 10f, vVar0, vVar1);
	func_85(12, func_87(346.02f, 4876.871f, -60.838f, -102f), -102f, vVar0, vVar1);
	func_85(13, func_87(345.97f, 4875.721f, -60.838f, -93f), -93f, vVar0, vVar1);
	func_85(14, func_87(346.19f, 4874.21f, -60.838f, -81f), -81f, vVar0, vVar1);
	func_85(15, func_87(346.62f, 4873.01f, -60.838f, -73f), -73f, vVar0, vVar1);
	func_85(16, func_87(347.27f, 4871.86f, -60.838f, -62f), -62f, vVar0, vVar1);
	func_85(17, func_87(351.57f, 4868.86f, -60.838f, -20f), -20f, vVar0, vVar1);
	func_85(18, func_87(352.89f, 4868.65f, -60.838f, -9f), -9f, vVar0, vVar1);
	func_85(19, func_87(354.17f, 4868.68f, -60.838f, 0f), 0f, vVar0, vVar1);
	func_85(20, func_87(355.12f, 4868.85f, -60.838f, 10f), 8f, vVar0, vVar1);
	func_85(21, func_87(356.58f, 4869.38f, -60.838f, 10f), 20f, vVar0, vVar1);
	func_85(22, func_87(348.2f, 4876.56f, -61.24f, -101f), -101f, vVar0, vVar1);
	func_85(23, func_87(348.2f, 4875.31f, -61.24f, -88f), -88f, vVar0, vVar1);
	func_85(24, func_87(348.47f, 4874.28f, -61.24f, -76f), -76f, vVar0, vVar1);
	func_85(25, func_87(349.17f, 4872.97f, -61.24f, -60f), -60f, vVar0, vVar1);
	func_85(26, func_87(352.12f, 4870.98f, -61.24f, -20f), -20f, vVar0, vVar1);
	func_85(27, func_87(353.42f, 4870.84f, -61.24f, -6f), -6f, vVar0, vVar1);
	func_85(28, func_87(354.67f, 4870.995f, -61.24f, 8f), 8f, vVar0, vVar1);
	func_85(29, func_87(356.02f, 4871.545f, -61.24f, 25f), 25f, vVar0, vVar1);
	func_80(&Local_47, 8404);
}

void func_80(int iParam0, int iParam1)
{
	iParam0->f_421.f_13 = iParam1;
	func_13(&(iParam0->f_421), 5);
}

bool func_81(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	bool bVar5;
	
	if (iParam1 < 22)
	{
		return 1;
	}
	if (!DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()) || DOES_ENTITY_EXIST(DOES_ENTITY_EXIST(), 0))
	{
		return 0;
	}
	if (func_84(PLAYER_ID()) || PLAYER_ID(iLocal_64, 0))
	{
		return 0;
	}
	vVar0 = { uParam0->f_1 };
	vVar1 = { uParam0->f_1.f_3 };
	vVar0.z = 0f;
	vVar1.z = 0f;
	vVar2 = { func_83(vVar0 - vVar1) };
	vVar3 = { GET_ENTITY_FORWARD_VECTOR(GET_ENTITY_FORWARD_VECTOR()) };
	fVar4 = func_82(vVar2, vVar3);
	bVar5 = fVar4 > 0.36f;
	return bVar5;
}

float func_82(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_83(vector3 vParam0)
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

int func_84(int iParam0)
{
	if (iParam0 != func_65())
	{
		if (func_54(iParam0, 1, 1))
		{
			if (IS_BIT_SET(Global_1692918[iParam0 /*39*/].f_27, 3))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_85(int iParam0, vector3 vParam1, float fParam2, vector3 vParam3, vector3 vParam4)
{
	Local_47[iParam0 /*14*/] = 3;
	Local_47[iParam0 /*14*/].f_1 = { vParam1 + func_86(vParam3, (fParam2 - 180f)) };
	Local_47[iParam0 /*14*/].f_1.f_3 = { vParam1 + func_86(vParam4, (fParam2 - 180f)) };
	Local_47[iParam0 /*14*/].f_1.f_6 = 1f;
	Local_47[iParam0 /*14*/].f_8 = { vParam1 };
	Local_47[iParam0 /*14*/].f_8.f_3 = { 0f, 0f, fParam2 };
}

Vector3 func_86(vector3 vParam0, float fParam1)
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

Vector3 func_87(vector3 vParam0, float fParam1)
{
	return vParam0 + func_86(0f, 0.01f, 0.015f, fParam1);
}

Vector3 func_88()
{
	return 0f, -0.7f, -1f;
}

Vector3 func_89()
{
	return 0f, 0.1f, 1f;
}

int func_90(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_2();
			}
			else
			{
				return 0;
			}
		}
		if (!func_91())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_73())
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
				if (func_71(157))
				{
					if (!bParam2)
					{
						func_2();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_2();
				}
				else
				{
					return 0;
				}
			}
		}
		wait(0);
		iVar0 = NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_2();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_2();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_91()
{
	return Global_1312850;
}

__________________________
Native Named by Reliency
1577160419
__________________________
