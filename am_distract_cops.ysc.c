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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 10;
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
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	struct<19> Local_103 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300000, 0, 0, 30000, 2, 0, 0 } ;
	var uLocal_104 = 0;
	struct<4> Local_105[32];
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	struct<21> Local_114 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	if (NETWORK_IS_GAME_IN_PROGRESS() && func_275(NETWORK_IS_GAME_IN_PROGRESS(), 0, 1))
	{
		func_267(ScriptParam_114);
	}
	else
	{
		func_264();
	}
	while (true)
	{
		func_263();
		if (func_252() || func_248(16))
		{
			func_264();
		}
		if (NETWORK_END_TUTORIAL_SESSION())
		{
			func_264();
		}
		switch (func_247(PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_246() == 1)
				{
					func_245();
					Local_105[PARTICIPANT_ID_TO_INT() /*4*/] = 1;
				}
				else if (func_246() == 4)
				{
					Local_105[PARTICIPANT_ID_TO_INT() /*4*/] = 3;
				}
				break;
			
			case 1:
				if (func_246() == 1)
				{
					func_128();
				}
				else if (func_246() == 4)
				{
					func_14();
					Local_105[PARTICIPANT_ID_TO_INT() /*4*/] = 3;
				}
				break;
			
			case 3:
				func_13(&(Local_103.f_18));
				if (func_12(&(Local_103.f_18)))
				{
					Local_105[PARTICIPANT_ID_TO_INT() /*4*/] = 4;
				}
				break;
			
			case 2:
				Local_105[PARTICIPANT_ID_TO_INT() /*4*/] = 4;
			
			case 4:
				func_264();
				break;
		}
		if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_246())
			{
				case 0:
					Local_103 = 1;
					break;
				
				case 1:
					func_11();
					func_3();
					if (func_1())
					{
						Local_103 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	if (Local_103.f_7 == 2)
	{
		return 1;
	}
	return 0;
}

void func_3()
{
	struct<14> Var0;
	
	switch (Local_103.f_7)
	{
		case 0:
			if (IS_BIT_SET(Local_103.f_1, 0))
			{
				Local_103.f_7 = 1;
			}
			else if (func_9(&(Local_103.f_8), 480000, 0))
			{
				Var0.f_2 = -1093032816;
				func_7(Var0, func_8(1));
				SET_BIT(&(Local_103.f_1), 1);
				Local_103.f_7 = 2;
			}
			break;
		
		case 1:
			func_4();
			break;
		
		case 2:
			break;
	}
}

void func_4()
{
	if (!func_9(&(Local_103.f_10), Local_103.f_12, 0))
	{
		if (func_9(&(Local_103.f_13), Local_103.f_15, 0))
		{
			Local_103.f_17++;
			Local_103.f_16 = func_6();
			func_5(&(Local_103.f_13));
		}
	}
	else
	{
		Local_103.f_7 = 2;
	}
}

void func_5(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_6()
{
	switch (Local_103.f_17)
	{
		case 0:
		case 1:
			return 2;
		
		case 2:
		case 3:
		case 4:
		case 5:
			return 3;
		
		case 6:
		case 7:
		case 8:
			return 4;
		
		case 9:
			return 5;
		
		default:
	}
	return Local_103.f_16;
}

void func_7(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 564131320;
	Param0.f_1 = PLAYER_ID();
	if (!iParam13 == 0)
	{
		TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam13);
	}
}

int func_8(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(iVar1)))
		{
			iVar2 = NETWORK_GET_PLAYER_INDEX(NETWORK_GET_PLAYER_INDEX(iVar1));
			if (func_275(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER_ID() || iParam0)
				{
					SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_9(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_10(uParam0, bParam2, 0);
	if (NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (ABSI(ABSI(ABSI(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (ABSI(ABSI(ABSI(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_10(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = 0xBA7F0B77D80A4EB7();
			}
			else
			{
				*uParam0 = GET_NETWORK_TIME();
			}
		}
		else
		{
			*uParam0 = GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

void func_11()
{
	int iVar0;
	
	if (Local_103 == 1)
	{
		if (NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(iLocal_112)))
		{
			iVar0 = NETWORK_GET_PLAYER_INDEX(NETWORK_GET_PLAYER_INDEX(iLocal_112));
			if (func_275(iVar0, 1, 1))
			{
				if (!IS_BIT_SET(Local_103.f_1, 0))
				{
					if (IS_BIT_SET(Local_105[iLocal_112 /*4*/].f_1, 0))
					{
						iLocal_113 = 1;
						SET_BIT(&(Local_103.f_1), 0);
					}
				}
			}
		}
	}
	iLocal_112++;
	if (iLocal_112 == _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (iLocal_113 == 0)
		{
			if (IS_BIT_SET(Local_103.f_1, 0))
			{
				CLEAR_BIT(&(Local_103.f_1), 0);
			}
		}
		else
		{
			iLocal_113 = 0;
		}
		iLocal_112 = 0;
	}
}

int func_12(var uParam0)
{
	if (uParam0->f_1)
	{
		if (ABSI(ABSI(ABSI(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_13(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_10(uParam0, 0, 0);
		}
	}
}

void func_14()
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (!IS_BIT_SET(iLocal_106, 1))
	{
		if ((IS_BIT_SET(Local_105[IS_BIT_SET() /*4*/].f_1, 0) && IS_BIT_SET(IS_BIT_SET()) >= (Local_103.f_16 - 1)) && Local_105[IS_BIT_SET() /*4*/].f_2 < 10)
		{
			Local_105[PARTICIPANT_ID_TO_INT() /*4*/].f_2++;
		}
		if (Local_105[PARTICIPANT_ID_TO_INT() /*4*/].f_2 > 0)
		{
			iVar0 = (Local_105[PARTICIPANT_ID_TO_INT() /*4*/].f_2 * Global_262145.f_8101);
			Global_2461199 = iVar0;
			func_106(&iVar0, 1);
			if (iVar0 > 0)
			{
				func_103(iVar0, 1, 1, 0);
				if (func_102())
				{
					func_90(-2043695058, iVar0, &uVar2, 0, 0, 0);
				}
				else
				{
					_NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_DISTRACT_COPS", &uVar1);
				}
			}
			if (func_89())
			{
				func_76(12, "DSC_PASS0", 0, 0, -99);
			}
			else
			{
				func_76(12, "DSC_PASS1", 0, 0, -99);
			}
			func_20(51, iVar0, "DSC_CASH", "DSC_BIGM", 1, -1, -1082130432, 2);
			if (IS_BIT_SET(iLocal_106, 4))
			{
				if (!IS_BIT_SET(iLocal_106, 5))
				{
					func_15(66, 1, -1);
				}
			}
		}
		SET_BIT(&iLocal_106, 1);
	}
}

void func_15(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_17(iParam0, func_18(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_16(iParam0, iVar0, iParam2);
}

void func_16(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2577831[iParam0 /*3*/][func_18(iParam2)];
	STAT_SET_INT(iVar0, iParam1, 1);
}

int func_17(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2577831[iParam0 /*3*/][func_18(iParam1)];
	if (STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_18(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

int func_19()
{
	return Global_1312745;
}

int func_20(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_75(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_72 = iParam7;
	return func_21(&Var0);
}

int func_21(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2437549.f_3030)
		{
			return 0;
		}
	}
	func_38(uParam0, uParam0->f_17);
	func_35(uParam0);
	if (func_34())
	{
		func_35(uParam0);
	}
	if (func_33(uParam0->f_1))
	{
		func_26();
		if (Global_2437549.f_2708[0 /*80*/].f_2 == 0)
		{
			Global_2437549.f_2708[0 /*80*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2437549.f_2708[0 /*80*/].f_1 == 13 || Global_2437549.f_2708[0 /*80*/].f_1 == 53) || Global_2437549.f_2708[0 /*80*/].f_1 == 54) || Global_2437549.f_2708[0 /*80*/].f_1 == 58)
		{
			Global_2437549.f_2708[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2437549.f_2708[iVar0 + 1 /*80*/] = { Global_2437549.f_2708[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2437549.f_2708[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2437549.f_2708[iVar0 /*80*/].f_2 == 0)
		{
			Global_2437549.f_2708[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_26();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_24(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 2);
				Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_23(uParam0->f_69, 128))
			{
				if (func_22(Global_2437549.f_2708[iVar0 /*80*/].f_1))
				{
					Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
					func_24(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_22(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

bool func_23(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_24(var uParam0, int iParam1)
{
	func_25(uParam0, iParam1);
}

void func_25(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_26()
{
	bool bVar0;
	
	if (Global_2437549.f_3031)
	{
		return;
	}
	if (!Global_76845)
	{
		Global_76845 = 1;
		bVar0 = true;
	}
	func_27();
	if (bVar0)
	{
		Global_76845 = 0;
	}
}

void func_27()
{
	Global_2437549.f_3032 = 0;
	Global_2437549.f_3032.f_578 = 0;
	func_31(&(Global_2437549.f_3032.f_1));
	Global_2437549.f_3032.f_1.f_1 = 0;
	func_28(&(Global_2437549.f_3032.f_1));
}

void func_28(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (IS_PC_VERSION())
		{
			BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(false);
			END_SCALEFORM_MOVIE_METHOD();
		}
		SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		SET_NO_LOADING_SCREEN(false);
		uParam0->f_564 = 0;
	}
	if (!Global_76845)
	{
		if (!IS_PLAYER_DEAD(IS_PLAYER_DEAD()))
		{
			if (!Global_76846)
			{
				if (IS_SCREEN_FADED_OUT() && !func_30(0))
				{
					DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_29(0);
}

void func_29(int iParam0)
{
	Global_76837 = iParam0;
	Global_76838 = iParam0;
}

bool func_30(bool bParam0)
{
	if (!bParam0 && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return IS_BIT_SET(Global_76825, 0);
}

void func_31(var uParam0)
{
	func_32(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_32(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_33(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

bool func_34()
{
	return Global_2448961.f_17;
}

void func_35(var uParam0)
{
	if (func_37(uParam0->f_1))
	{
		uParam0->f_72 = func_36();
	}
}

int func_36()
{
	return 21;
}

int func_37(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_38(var uParam0, int iParam1)
{
	if (func_37(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_74() || !func_275(iParam1, 0, 1))
	{
		return;
	}
	if (func_22(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_39(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_39(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_70(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_149437[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_70(PLAYER_ID()) || (func_69() && func_68())) && !PLAYER_ID(Global_2531497.f_4591, 31)) && !bParam4)
	{
		iVar1 = func_67();
		if (DOES_ENTITY_EXIST(iVar1))
		{
			if (IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_275(NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_149437[iParam1] != -1)
							{
								return func_65(iParam1, iParam0, 0);
							}
							else
							{
								return func_52(iParam0, NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_52(iParam0, NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_149437[iParam1] != -1)
				{
					return func_65(iParam1, iParam0, 0);
				}
				else
				{
					return func_40(0, -1, 0);
				}
			}
			else
			{
				return func_40(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_149437[iParam1] != -1)
		{
			return func_65(iParam1, iParam0, 0);
		}
		else
		{
			return func_52(iParam0, PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_52(iParam0, PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_40(bool bParam0, int iParam1, bool bParam2)
{
	return func_41(PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_41(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = GET_PLAYER_TEAM(iParam0);
	if ((func_51() || (func_50() && func_48())) && Global_1384328.f_1)
	{
		if (bParam1)
		{
			return func_47(iParam2, iVar0);
		}
		else
		{
			return func_47(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_46(iVar0, iParam2, 0) && !IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_45(1);
				}
				else
				{
					return func_45(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_42(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_42(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_45(1);
	}
	return func_45(0);
}

int func_42(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_44(iParam0, iParam1, iParam3);
	if (func_43(Global_4456448.f_154360, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_43(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_190930 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9019[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_44(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_46(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_45(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_46(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4456448.f_56, 0);
				
				case 1:
					return IS_BIT_SET(Global_4456448.f_56, 1);
				
				case 2:
					return IS_BIT_SET(Global_4456448.f_56, 2);
				
				case 3:
					return IS_BIT_SET(Global_4456448.f_56, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4456448.f_56, 4);
				
				case 1:
					return IS_BIT_SET(Global_4456448.f_56, 5);
				
				case 2:
					return IS_BIT_SET(Global_4456448.f_56, 6);
				
				case 3:
					return IS_BIT_SET(Global_4456448.f_56, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4456448.f_56, 8);
				
				case 1:
					return IS_BIT_SET(Global_4456448.f_56, 9);
				
				case 2:
					return IS_BIT_SET(Global_4456448.f_56, 10);
				
				case 3:
					return IS_BIT_SET(Global_4456448.f_56, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4456448.f_56, 12);
				
				case 1:
					return IS_BIT_SET(Global_4456448.f_56, 13);
				
				case 2:
					return IS_BIT_SET(Global_4456448.f_56, 14);
				
				case 3:
					return IS_BIT_SET(Global_4456448.f_56, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_47(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_44(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

bool func_48()
{
	if (func_49())
	{
		return 1;
	}
	return IS_BIT_SET(Global_4456448.f_195024, 4);
}

bool func_49()
{
	return IS_BIT_SET(Global_4456448.f_184550, 12);
}

bool func_50()
{
	if (NETWORK_IS_ACTIVITY_SESSION())
	{
		return IS_BIT_SET(Global_4456448.f_195024, 0);
	}
	return ((IS_BIT_SET(Global_4456448.f_195024, 0) || Global_1654024) && IS_BIT_SET(joaat("fm_deathmatch_creator")) > 0);
}

int func_51()
{
	if (func_49() && NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_52(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590446[PLAYER_ID() /*871*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1590446[iVar2 /*871*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_61())
			{
				iVar3 = func_57(iParam0);
				if (!iVar3 == -1)
				{
					return func_55(iVar3);
				}
			}
			if ((func_54(iParam1, iParam0, iVar0, 0) && !IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_46(IS_BIT_SET(iParam1), IS_BIT_SET(iParam0), 0) && IS_BIT_SET(Global_4456448.f_15, 23)) && !IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_45(1);
			}
			else if (IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_53(1);
			}
			else
			{
				return func_41(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574407 || Global_1574398) || Global_1590446[iParam0 /*871*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574407 == 1 && Global_1574417 == 0))
			{
				return func_45(1);
			}
			else
			{
				return func_41(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574402 && Global_1573899.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_57(iParam0);
	if (!iVar4 == -1)
	{
		return func_55(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_53(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_54(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (GET_PLAYER_TEAM(iParam0) == -1 && GET_PLAYER_TEAM(iParam1) == -1)
			{
				return 0;
			}
		}
		return GET_PLAYER_TEAM(iParam0) == GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_55(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_56(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_56(int iParam0)
{
	return Global_2417783.f_2105.f_44[iParam0 /*2*/].f_1;
}

int func_57(int iParam0)
{
	if (!iParam0 == func_74())
	{
		if (func_59(iParam0, 1))
		{
			return Global_2417783.f_2105.f_11[func_58(iParam0)];
		}
	}
	return -1;
}

int func_58(int iParam0)
{
	if (iParam0 != func_74())
	{
		return Global_1628955[iParam0 /*614*/].f_11;
	}
	return func_74();
}

bool func_59(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_60(iParam0))
		{
			return 0;
		}
	}
	return Global_1628955[iParam0 /*614*/].f_11 != func_74();
}

int func_60(int iParam0)
{
	if (iParam0 != func_74())
	{
		if (Global_1628955[iParam0 /*614*/].f_11 != func_74())
		{
			return Global_1628955[iParam0 /*614*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_61()
{
	if (((func_64() || func_63()) || func_34()) || func_62())
	{
		return 1;
	}
	return 0;
}

bool func_62()
{
	return Global_2448961.f_19;
}

var func_63()
{
	return Global_2448961.f_16;
}

var func_64()
{
	return Global_2448961.f_15;
}

int func_65(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969029.f_13[iParam0];
	if (func_61())
	{
		iVar2 = func_57(iParam1);
		if (!iVar2 == -1)
		{
			return func_55(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (IS_BIT_SET(Global_4456448.f_106[iParam0 /*11610*/].f_5831[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_74())
	{
		if (Global_4456448.f_149437[iParam0] != -1 && Global_4456448.f_149437[iParam0] <= 4)
		{
			if (Global_4456448.f_149437[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_149437[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_149437[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_149437[iParam0] == 4)
			{
				if (IS_BIT_SET(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_149437[iParam0];
			}
		}
		else
		{
			iVar0 = func_41(iParam1, !bParam2, iParam0, 0);
		}
		if (IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_66(iParam0);
		}
		if (IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (IS_BIT_SET(Global_4456448.f_15, 26) && !func_46(iParam0, IS_BIT_SET(iParam1), 0))
		{
			iVar0 = func_53(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_66(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_191014;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_191015;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_191016;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_191017;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_67()
{
	return Global_2359302.f_2;
}

bool func_68()
{
	return IS_BIT_SET(Global_2359302, 4);
}

bool func_69()
{
	return IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_39.f_18, 14);
}

int func_70(int iParam0)
{
	if (func_72(iParam0, 0))
	{
		return 1;
	}
	if (func_71())
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

bool func_71()
{
	return IS_BIT_SET(Global_2359302, 3);
}

bool func_72(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER_ID())
	{
		bVar0 = func_73(-1, 0) == 8;
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

int func_73(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

int func_74()
{
	return -1;
}

void func_75(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_74();
	uParam1->f_18 = func_74();
	uParam1->f_19 = func_74();
	uParam1->f_20 = func_74();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = uParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

void func_76(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)
{
	func_77(1, iParam0, sParam1, sParam2, bParam3, iParam4);
}

void func_77(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	var uVar0;
	bool bVar1;
	
	uVar0 = uParam1;
	bVar1 = false;
	func_78(iParam0, sParam2, uVar0, bVar1, sParam3, bParam4, iParam5);
}

void func_78(var uParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	if (IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (_GET_LENGTH_OF_STRING(sParam1) > 15)
	{
		return;
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		if (_GET_LENGTH_OF_STRING(sParam4) > 31)
		{
			return;
		}
	}
	iVar0 = func_87();
	if (iVar0 == -1)
	{
		return;
	}
	func_86(iVar0);
	func_85(iVar0, uParam0);
	func_84(iVar0, uParam2, bParam3);
	func_83(iVar0, sParam1);
	if (IS_STRING_NULL_OR_EMPTY(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_82(iVar0);
	if (!IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_80(iVar0, sParam4, bParam5);
	}
	if (!iParam6 == -99)
	{
		func_79(iVar0, iParam6);
	}
}

void func_79(int iParam0, int iParam1)
{
	Global_1366857.f_59[iParam0 /*16*/].f_15 = iParam1;
}

void func_80(int iParam0, char* sParam1, bool bParam2)
{
	StringCopy(&(Global_1366857.f_59[iParam0 /*16*/].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_81(iParam0);
}

void func_81(int iParam0)
{
	SET_BIT(&(Global_1366857.f_59[iParam0 /*16*/]), 5);
}

void func_82(int iParam0)
{
	SET_BIT(&(Global_1366857.f_59[iParam0 /*16*/]), 4);
}

void func_83(int iParam0, char* sParam1)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam1, 16);
	Global_1366857.f_59[iParam0 /*16*/].f_3 = { Var0 };
}

void func_84(int iParam0, var uParam1, bool bParam2)
{
	Global_1366857.f_59[iParam0 /*16*/].f_2 = uParam1;
	if (bParam2)
	{
		SET_BIT(&(Global_1366857.f_59[iParam0 /*16*/]), 2);
		CLEAR_BIT(&(Global_1366857.f_59[iParam0 /*16*/]), 3);
	}
	else
	{
		SET_BIT(&(Global_1366857.f_59[iParam0 /*16*/]), 3);
		CLEAR_BIT(&(Global_1366857.f_59[iParam0 /*16*/]), 2);
	}
}

void func_85(int iParam0, var uParam1)
{
	Global_1366857.f_59[iParam0 /*16*/].f_1 = uParam1;
}

void func_86(int iParam0)
{
	SET_BIT(&(Global_1366857.f_59[iParam0 /*16*/]), 0);
}

int func_87()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_88(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_88(int iParam0)
{
	return IS_BIT_SET(Global_1366857.f_59[iParam0 /*16*/], 0);
}

int func_89()
{
	if (IS_BIT_SET(IS_BIT_SET(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_90(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_102())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_27520)
			{
				func_91(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_91(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
			if (iParam1 > 0 || Global_262145.f_27520)
			{
				func_91(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
			func_91(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_91(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_102())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!_NETWORK_SHOP_GET_TRANSACTIONS_ENABLED_FOR_CHARACTER(func_19()) || _NETWORK_SHOP_GET_TRANSACTIONS_ENABLED_FOR_CHARACTER())
		{
			Global_4264386 = 1;
			return 0;
		}
		if (Global_2460158)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4264387 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4263810[iVar2 /*84*/].f_65.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || _NETWORK_SHOP_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || _NETWORK_SHOP_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_98(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4263810[*uParam0 /*84*/].f_65.f_8 = 1;
					Global_4263810[*uParam0 /*84*/].f_65.f_12 = 1;
				}
			}
			Global_4264371 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4264385 = 1;
			Global_4264388 = iParam4;
			Global_4264390 = iParam3;
			Global_4264391 = 1;
			Global_4264389 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4264388 = iParam4;
			Global_4264390 = iParam3;
			Global_4264391 = 1;
			Global_4264389 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_97(1, iParam4);
			Global_4264385 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_92(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_92(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			SET_BIT(&(Global_2424073[SET_BIT() /*421*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_93(iParam0);
	}
}

void func_93(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_102())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_96(iParam0))
		{
			if (!bVar0)
			{
				0xFA336E7F40C0A0D0();
			}
		}
		else if (!bVar0)
		{
			_NETWORK_SHOP_TERMINATE_SERVICE(Global_4263810[iParam0 /*84*/].f_65);
		}
		func_94(&(Global_4263810[iParam0 /*84*/]));
	}
}

void func_94(var uParam0)
{
	uParam0->f_65 = 0;
	uParam0->f_65 = 2147483647;
	uParam0->f_65.f_1 = 0;
	uParam0->f_65.f_2 = 0;
	uParam0->f_65.f_3 = -1593119440;
	uParam0->f_65.f_4 = -2085313189;
	uParam0->f_65.f_5 = 0;
	uParam0->f_65.f_6 = 1227573907;
	uParam0->f_65.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_95(&(uParam0->f_13));
	func_95(&(uParam0->f_13.f_13));
	StringCopy(&(uParam0->f_13.f_26), "", 32);
	StringCopy(&(uParam0->f_13.f_34), "", 24);
	StringCopy(&(uParam0->f_13.f_40), "", 16);
	StringCopy(&(uParam0->f_13.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_65.f_8 = 0;
	uParam0->f_65.f_9 = 0;
	uParam0->f_65.f_10 = 0;
	uParam0->f_65.f_11 = 0;
	uParam0->f_65.f_13 = 0;
	uParam0->f_65.f_12 = 0;
	uParam0->f_65.f_14 = 0;
	uParam0->f_65.f_15 = 0;
	uParam0->f_65.f_16 = 0;
	uParam0->f_65.f_18 = 0;
}

void func_95(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_96(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263810[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

void func_97(int iParam0, int iParam1)
{
	Global_2461338 = iParam1;
	Global_2461337 = iParam0;
}

int func_98(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263810[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_102())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263810[iVar0 /*84*/].f_65.f_2 = 1;
			Global_4263810[iVar0 /*84*/].f_65.f_1 = iParam5;
			Global_4263810[iVar0 /*84*/].f_65.f_3 = iParam1;
			Global_4263810[iVar0 /*84*/].f_65.f_4 = iParam2;
			Global_4263810[iVar0 /*84*/].f_65.f_7 = iParam3;
			Global_4263810[iVar0 /*84*/].f_65.f_5 = 0;
			Global_4263810[iVar0 /*84*/].f_65 = iParam0;
			Global_4263810[iVar0 /*84*/].f_65.f_6 = iParam4;
			Global_4263810[iVar0 /*84*/].f_65.f_11 = uParam8;
			Global_4263810[iVar0 /*84*/].f_65.f_10 = iParam7;
			Global_4263810[iVar0 /*84*/].f_65.f_13 = iParam9;
			Global_4263810[iVar0 /*84*/].f_65.f_12 = 0;
			Global_4263810[iVar0 /*84*/].f_65.f_14 = GET_FRAME_COUNT();
			Global_4263810[iVar0 /*84*/].f_65.f_18 = 0;
			Global_4264371 = 0;
			if (bParam6)
			{
				Global_4263810[iVar0 /*84*/].f_65.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_99(Global_4263810[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_99(struct<66> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	vector3 vVar0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = -1969967074;
	vVar0.y = PLAYER_ID();
	vVar0.f_2 = { Param0.f_65 };
	vVar0.f_2.f_32 = iParam19;
	iVar1 = func_101(vVar0.y);
	if ((Global_262145.f_23556 && !Global_262145.f_23557) && !Global_262145.f_23558)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_100();
		TRIGGER_SCRIPT_EVENT(1, &vVar0, 35, iVar1);
	}
}

void func_100()
{
	REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_101(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_102()
{
	if (IS_PC_VERSION())
	{
		return 0x7D2708796355B20B();
	}
	return 0;
}

void func_103(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_104(iParam0, iParam1, iParam2, fParam3);
}

void func_104(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = floor((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1590446[PLAYER_ID() /*871*/].f_211.f_4 = iVar1;
	Global_1590446[PLAYER_ID() /*871*/].f_211.f_3 = (Global_1590446[PLAYER_ID() /*871*/].f_211.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_105(iVar1, 0);
	}
}

void func_105(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_106(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_127())
		{
			if (func_126(0))
			{
				if (!func_122(0))
				{
					if (NETWORK_IS_PLAYER_ACTIVE(func_121()))
					{
						if (func_120() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_120());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_118(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_111("GB_BCUT_TICK1", func_121(), iVar0, 0, 0, 1, 1);
						}
						func_110(20);
						func_107(func_121(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_107(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_275(iParam0, 0, 1))
	{
		Var0 = -1590759069;
		Var0.f_1 = PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_109(iParam0);
		func_108(&(Var0.f_6), &(Var0.f_7));
		TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_101(iParam0));
	}
}

void func_108(var uParam0, var uParam1)
{
	*uParam0 = Global_1651198.f_9;
	*uParam1 = Global_1651198.f_10;
}

var func_109(int iParam0)
{
	return Global_1628955[iParam0 /*614*/].f_532;
}

void func_110(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	SET_BIT(&(Global_2531497.f_4898.f_7[iVar0]), iVar1);
}

int func_111(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (_0x3B39236746714134(_0x3B39236746714134(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, GET_PLAYER_NAME(iParam1), 64);
		}
		if (IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
		_SET_NOTIFICATION_COLOR_NEXT(func_39(iParam1, -2, 1, 0, 0));
		ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_116(&Var1));
		if (!iParam3 == 0)
		{
			_SET_NOTIFICATION_COLOR_NEXT(iParam3);
		}
		ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
		func_112(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_112(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_115() || !NETWORK_IS_ACTIVITY_SESSION()) || !func_72(NETWORK_IS_ACTIVITY_SESSION(), 0))
	{
		return;
	}
	iVar0 = func_113(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1671392.f_5[iVar0 /*53*/] = iParam0;
		Global_1671392.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1671392.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1671392.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1671392.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1671392.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1671392.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1671392.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1671392.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1671392.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1671392.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1671392.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_113(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1671392 - 1))
	{
		if (iParam0 > Global_1671392.f_5[iVar0 /*53*/].f_1)
		{
			func_114(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1671392++;
	if (Global_1671392 > 5)
	{
		Global_1671392 = 5;
		return Global_1671392;
	}
	return (Global_1671392 - 1);
}

void func_114(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1671392.f_5[iVar0 /*53*/] = { Global_1671392.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_115()
{
	return IS_DLC_PRESENT(-1762644250);
}

var func_116(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_117(&cVar0);
}

var func_117(char[4] cParam0)
{
	return cParam0;
}

void func_118(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_119(1);
	}
	else
	{
		iVar1 = func_119(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_119(bool bParam0)
{
	if (bParam0)
	{
		return round((0.05f * 100f));
	}
	return Global_262145.f_12390;
}

int func_120()
{
	return Global_262145.f_12389;
}

int func_121()
{
	return Global_1628955[PLAYER_ID() /*614*/].f_11;
}

bool func_122(bool bParam0)
{
	return func_123(PLAYER_ID(), bParam0);
}

int func_123(int iParam0, bool bParam1)
{
	return func_124(iParam0, bParam1, 1);
}

int func_124(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_74())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_125(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628955[iParam0 /*614*/].f_11;
	if (iVar0 != func_74() && Global_1628955[iVar0 /*614*/].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_125(int iParam0, int iParam1)
{
	if (iParam0 != func_74())
	{
		if (Global_1628955[iParam0 /*614*/].f_11 != func_74())
		{
			if (Global_1628955[iParam0 /*614*/].f_11 == iParam0 && Global_1628955[iParam0 /*614*/].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_126(bool bParam0)
{
	return func_59(PLAYER_ID(), bParam0);
}

bool func_127()
{
	return func_60(PLAYER_ID());
}

void func_128()
{
	func_243();
	if (DOES_BLIP_EXIST(iLocal_107))
	{
		if (func_241() || func_240())
		{
			SET_BLIP_DISPLAY(iLocal_107, 0);
		}
		else
		{
			SET_BLIP_DISPLAY(iLocal_107, 4);
		}
	}
	switch (Local_105[PARTICIPANT_ID_TO_INT() /*4*/].f_3)
	{
		case 0:
			if (IS_ENTITY_AT_COORD(IS_ENTITY_AT_COORD(), Local_103.f_2, Local_103.f_5, Local_103.f_5, 1000f, false, true, 0))
			{
				func_218();
				SET_BIT(&(Local_105[SET_BIT() /*4*/].f_1), 0);
				SET_BIT(&(Global_2531497.f_4592), 0);
				Local_105[PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 1;
			}
			if (Local_103.f_7 > 1)
			{
				Local_105[PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 2;
			}
			break;
		
		case 1:
			func_196();
			func_129();
			if (Local_103.f_7 > 1)
			{
				Local_105[PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 2;
			}
			break;
		
		case 2:
			func_14();
			break;
	}
}

void func_129()
{
	func_195();
	func_138();
	func_131();
	func_130();
}

void func_130()
{
	if (!IS_BIT_SET(iLocal_106, 5))
	{
		if (!IS_BIT_SET(iLocal_106, 4))
		{
			if (Local_103.f_17 == 0)
			{
				SET_BIT(&iLocal_106, 4);
			}
			else
			{
				SET_BIT(&iLocal_106, 5);
			}
		}
		else if (!func_275(PLAYER_ID(), 1, 1))
		{
			SET_BIT(&iLocal_106, 5);
		}
	}
}

void func_131()
{
	if ((((_GET_CURRENT_LANGUAGE_ID() == 7 || _GET_CURRENT_LANGUAGE_ID() == 8) || _GET_CURRENT_LANGUAGE_ID() == 9) || _GET_CURRENT_LANGUAGE_ID() == 10) || _GET_CURRENT_LANGUAGE_ID() == 12)
	{
		func_137();
	}
	else
	{
		func_136();
	}
	if ((Local_103.f_12 - func_135(&(Local_103.f_10), 0, 0)) >= 0)
	{
		func_132((Local_103.f_12 - func_135(&(Local_103.f_10), 0, 0)), "DCP_TIMER", 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	else
	{
		func_132(0, "DCP_TIMER", 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
}

void func_132(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_134(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1375006.f_1 = 1;
		func_133(7, iVar0);
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

void func_133(int iParam0, int iParam1)
{
	SET_BIT(&(Global_1375006.f_6184[iParam0]), iParam1);
}

bool func_134(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_1375006.f_6184[iParam0], iParam1);
}

int func_135(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return IS_TIME_EQUAL_TO(IS_TIME_EQUAL_TO(), *uParam0);
		}
		else
		{
			return IS_TIME_EQUAL_TO(IS_TIME_EQUAL_TO(), *uParam0);
		}
	}
	return IS_TIME_EQUAL_TO(IS_TIME_EQUAL_TO(), *uParam0);
}

void func_136()
{
	Global_1375006.f_1110 = 1;
}

void func_137()
{
	Global_1375006.f_1109 = 1;
}

void func_138()
{
	if (func_9(&uLocal_108, 30000, 0))
	{
		switch (Local_103.f_16)
		{
			case 2:
				func_192(2105, 1, -1);
				break;
			
			case 3:
				func_192(2106, 1, -1);
				break;
			
			case 4:
				func_192(2107, 1, -1);
				break;
			
			case 5:
				func_192(2108, 1, -1);
				break;
		}
		func_139(0, PLAYER_PED_ID(), "XPT_DSC", -1636175450, 2048546661, (Global_262145.f_8102 * Local_103.f_16), 1, -1, 0, 0, 0);
		Local_105[PARTICIPANT_ID_TO_INT() /*4*/].f_2++;
		func_5(&uLocal_108);
	}
}

int func_139(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_140(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_140(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_150(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (DOES_ENTITY_EXIST(iParam1))
		{
			if (IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_146(GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_141(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_141(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0 = { func_144(iParam0, 1) };
	if (iParam0 == func_143(PLAYER_PED_ID()))
	{
		func_142(1);
	}
	func_146(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_142(int iParam0)
{
	Global_2437549.f_1890 = iParam0;
}

int func_143(int iParam0)
{
	return iParam0;
}

Vector3 func_144(int iParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (IS_GAMEPLAY_CAM_RENDERING())
	{
		vVar1 = { GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_145(PLAYER_PED_ID()) && PLAYER_PED_ID(PLAYER_PED_ID()) == 4)
	{
		vVar0 = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { GET_ENTITY_COORDS(iParam0, false) };
	}
	fVar2 = 0f;
	if (!IS_ENTITY_DEAD(iParam0, 0))
	{
		fVar2 = GET_ENTITY_HEADING(iParam0);
		if (_0xEE778F8C7E1142E2(_0xEE778F8C7E1142E2()) == 4)
		{
			fVar2 = vVar1.z;
		}
	}
	GET_MODEL_DIMENSIONS(GET_MODEL_DIMENSIONS(iParam0), &vVar3, &vVar4);
	if (bParam1)
	{
		fVar5 = (vVar4.z + 0.18f);
	}
	else
	{
		fVar5 = (vVar3.z + 0.18f);
	}
	vVar0 = { _GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar2, 0f, 0f, fVar5) };
	return vVar0;
}

int func_145(int iParam0)
{
	return iParam0;
}

void func_146(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2437549.f_1289[iVar0 /*30*/].f_6 == 0 || Global_2437549.f_1289[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2437549.f_1289[iVar1 /*30*/] = { vParam0 };
			Global_2437549.f_1289[iVar1 /*30*/].f_6 = 1;
			Global_2437549.f_1289[iVar1 /*30*/].f_4 = func_149(Global_2437549.f_1289[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2437549.f_1289[iVar1 /*30*/].f_7 = 0xBA7F0B77D80A4EB7();
			Global_2437549.f_1289[iVar1 /*30*/].f_3 = iParam1;
			Global_2437549.f_1289[iVar1 /*30*/].f_8 = iParam2;
			Global_2437549.f_1289[iVar1 /*30*/].f_9 = func_148();
			Global_2437549.f_1289[iVar1 /*30*/].f_10 = func_147();
			StringCopy(&(Global_2437549.f_1289[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2437549.f_1289[iVar1 /*30*/].f_26 = HAS_NETWORK_TIME_STARTED(HAS_NETWORK_TIME_STARTED(), iParam4);
		}
	}
}

int func_147()
{
	if (Global_2437549.f_1890)
	{
		Global_2437549.f_1890 = 0;
		return 1;
	}
	Global_2437549.f_1890 = 0;
	return 0;
}

var func_148()
{
	var uVar0;
	
	uVar0 = Global_2437549.f_1892;
	Global_2437549.f_1892 = 1;
	return uVar0;
}

float func_149(vector3 vParam0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = GET_DISTANCE_BETWEEN_COORDS(GET_DISTANCE_BETWEEN_COORDS(), vParam0, true);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

var func_150(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_151(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_151(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (iParam1 == 0)
	{
		if (func_191(PLAYER_ID()) || func_190(PLAYER_ID()))
		{
			if (Global_262145.f_9635 > 16000)
			{
				iVar2 = 16000;
			}
			else
			{
				iVar2 = Global_262145.f_9635;
			}
		}
		else if (func_188() || func_184(PLAYER_ID()))
		{
			if (Global_262145.f_22762 > 16000)
			{
				iVar2 = 16000;
			}
			else
			{
				iVar2 = Global_262145.f_22762;
			}
		}
		else if (func_62())
		{
			if (Global_262145.f_27882 > 16000)
			{
				iVar2 = 16000;
			}
			else
			{
				iVar2 = Global_262145.f_27882;
			}
		}
		else if (Global_262145.f_6635 > 10000)
		{
			iVar2 = 10000;
		}
		else
		{
			iVar2 = Global_262145.f_6635;
		}
	}
	if (func_183(sParam2))
	{
	}
	if (func_182())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_180(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_179(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_176(0, &iVar1);
					break;
				
				case 3:
					func_176(1, &iVar1);
					break;
				
				case 1:
					func_173(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1686907)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_192(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_162((func_171(PLAYER_ID(), 1) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1590446[PLAYER_ID() /*871*/].f_39.f_2 != -1)
				{
					func_192(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_156(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_152((func_154(PLAYER_ID()) + iVar1));
			}
			else
			{
				func_152((func_154(PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_152(int iParam0)
{
	if (func_182())
	{
		Global_1590446[PLAYER_ID() /*871*/].f_211.f_5 = iParam0;
		func_153(joaat("mpply_globalxp"), iParam0);
	}
}

void func_153(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_154(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_275(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER_ID())
			{
				return func_155(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1590446[iParam0 /*871*/].f_211.f_5;
			}
		}
		else
		{
			return func_155(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_155(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_156(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_161(PLAYER_ID()) };
	if (_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_159(func_160(&Var0));
			if (iVar1 == 0)
			{
				func_158(&Global_1384134, iParam0);
				func_157(joaat("mpply_crew_local_xp_0"), Global_1384134);
			}
			else if (iVar1 == 1)
			{
				func_158(&Global_1384135, iParam0);
				func_157(joaat("mpply_crew_local_xp_1"), Global_1384135);
			}
			else if (iVar1 == 2)
			{
				func_158(&Global_1384136, iParam0);
				func_157(joaat("mpply_crew_local_xp_2"), Global_1384136);
			}
			else if (iVar1 == 3)
			{
				func_158(&Global_1384137, iParam0);
				func_157(joaat("mpply_crew_local_xp_3"), Global_1384137);
			}
			else if (iVar1 == 4)
			{
				func_158(&Global_1384138, iParam0);
				func_157(joaat("mpply_crew_local_xp_4"), Global_1384138);
			}
		}
	}
}

void func_157(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1384129 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1384131 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1384131 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1384132 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1384133 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1384134 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1384135 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1384136 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1384137 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1384138 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1384139 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1384140 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1384141 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1384142 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1384143 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1384144 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1384145 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_158(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_159(int iParam0)
{
	if (iParam0 == Global_1384129)
	{
		return 0;
	}
	else if (iParam0 == Global_1384130)
	{
		return 1;
	}
	else if (iParam0 == Global_1384131)
	{
		return 2;
	}
	else if (iParam0 == Global_1384132)
	{
		return 3;
	}
	else if (iParam0 == Global_1384133)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_160(var uParam0)
{
	if (_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2458924;
		}
	}
	return Global_2458924;
}

struct<13> func_161(int iParam0)
{
	struct<13> Var0;
	
	NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_162(int iParam0, int iParam1, int iParam2)
{
	if (func_182())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1384279[func_18(-1)])
				{
					PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1384279[func_18(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 == 0)
			{
				PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 < 0)
			{
				PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_170(PLAYER_ID()))
		{
			Global_1590446[PLAYER_ID() /*871*/].f_211.f_1 = iParam0;
			Global_1590446[PLAYER_ID() /*871*/].f_211.f_6 = func_168(iParam0, 1);
		}
		func_167(639, iParam0, -1, 1);
		func_166(640, func_168(iParam0, 1), -1, 1, 0);
		Global_1384279[func_18(-1)] = iParam0;
		func_163(-1109644434, 7, 0);
	}
}

void func_163(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_165(iParam1, iParam2))
	{
		iVar0 = func_164();
		Global_2458876[iVar0] = iParam1;
		Global_2458887[iVar0] = iParam0;
	}
}

int func_164()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2458876[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_165(int iParam0, var uParam1)
{
	if (Global_1312861)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312873) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_166(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_18(iParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_167(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2542527[iParam0 /*3*/][func_18(iParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1384207[func_18(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1384213[func_18(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1384219[func_18(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1384225[func_18(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1384177[func_18(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1384183[func_18(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1384189[func_18(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1384195[func_18(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1384147[func_18(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1384153[func_18(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1384159[func_18(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1384165[func_18(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1384237[func_18(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1384243[func_18(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1384249[func_18(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1384255[func_18(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1384267[func_18(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1384273[func_18(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1384279[func_18(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1384285[func_18(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2578592[0 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2578592[1 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2578592[2 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2578592[3 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 9509:
			Global_2578729[func_18(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1384291[func_18(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1384297[func_18(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1384303[func_18(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1384315[func_18(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2578659[0 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2578659[1 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2578659[2 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2578659[3 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2578659[4 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2578732[0 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2578732[1 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2578732[2 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2578732[3 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2578732[4 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2578748[0 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2578748[1 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2578748[2 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2578748[3 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2578748[4 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2578659[5 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2578592[4 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2578764[func_18(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2578773[func_18(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2578767[func_18(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2578776[func_18(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2578770[func_18(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2578779[func_18(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2578782[func_18(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2578659[6 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2578592[5 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2578659[7 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2578592[6 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2578659[8 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2578592[7 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2578659[9 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2578592[8 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2578659[10 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2578592[9 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2578659[11 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2578592[10 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2578659[12 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2578592[11 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2578659[13 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2578592[12 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2578659[14 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2578592[13 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2578659[15 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2578592[14 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2578659[16 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2578592[15 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2578659[17 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2578592[16 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2578592[17 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2578592[18 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2578592[19 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2578592[20 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2578785[func_18(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2578788[func_18(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2578791[func_18(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2578794[func_18(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2578797[func_18(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2578800[func_18(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2578803[func_18(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2578806[func_18(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2578809[func_18(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2578812[func_18(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2578815[func_18(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2578818[func_18(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2578821[func_18(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2578824[func_18(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2578592[21 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_168(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_169(iParam0, 0);
}

int func_169(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_290594[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_290594[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((to_float(iVar1) - to_float(iVar2)) / 2f) + to_float(iVar2));
		iVar3 = round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_170(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return IS_BIT_SET(Global_2437549.f_1, iParam0);
	}
	return 1;
}

int func_171(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_172(iParam0);
}

int func_172(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER_ID())
			{
				return Global_1384279[func_18(-1)];
			}
			else if (func_170(iParam0))
			{
				return Global_1590446[iParam0 /*871*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1384279[func_18(-1)];
	}
	return 0;
}

void func_173(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = GET_PLAYER_TEAM(GET_PLAYER_TEAM());
	iVar0 = 0;
	while (iVar0 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		iVar4 = INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK_GET_PLAYER_INDEX(iVar4);
			if (GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (GET_PLAYER_TEAM(iVar5) == iVar1 || func_46(GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER_ID())
					{
						if (func_175(PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = round((func_174(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_174(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_174(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_175(int iParam0, int iParam1)
{
	if (_NETWORK_PLAYER_IS_IN_CLAN())
	{
		Global_2507671 = { func_161(iParam0) };
		Global_2507684 = { func_161(iParam1) };
		if (NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2507671))
		{
			if (NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2507684))
			{
				NETWORK_CLAN_PLAYER_GET_DESC(&Global_2507601, 35, &Global_2507671);
				NETWORK_CLAN_PLAYER_GET_DESC(&Global_2507636, 35, &Global_2507684);
				if (Global_2507601 == Global_2507636)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_176(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			iVar3 = iVar0;
			if (NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_275(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER_ID())
					{
						iVar1++;
						if (func_175(PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_275(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER_ID())
				{
					if (func_177(PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_175(PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = round((func_174(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_174(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_177(int iParam0, int iParam1)
{
	return vdist(func_178(iParam0), func_178(iParam1));
	return 0f;
}

Vector3 func_178(int iParam0)
{
	return GET_ENTITY_COORDS(GET_ENTITY_COORDS(iParam0), false);
}

int func_179(int iParam0)
{
	int iVar0;
	
	if (GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_174(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_180(int iParam0)
{
	if (iParam0 < 0)
	{
		if (ABSI(iParam0) > func_171(ABSI(), 1))
		{
			iParam0 = -func_171(PLAYER_ID(), 1);
		}
	}
	if (func_181(8000, 0, 0) > 0)
	{
		if (func_181(8000, 0, 0) < (iParam0 + func_171(PLAYER_ID(), 1)))
		{
			iParam0 = (func_181(8000, 0, 0) - func_171(PLAYER_ID(), 1));
		}
	}
	return iParam0;
}

int func_181(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_290594[iParam0];
}

int func_182()
{
	return 1;
}

int func_183(char* sParam0)
{
	if (IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (ARE_STRINGS_EQUAL(sParam0, "") || ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_184(int iParam0)
{
	return func_185(func_186(iParam0));
}

int func_185(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_186(int iParam0)
{
	if (func_187(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_33;
	}
	return -1;
}

int func_187(int iParam0, int iParam1)
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 || (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_188()
{
	if (NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_34();
	}
	return func_189(Global_4456448.f_154360);
}

int func_189(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5008[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_190(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 2;
}

bool func_191(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 7;
}

void func_192(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_194(iParam0, func_18(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_193(iParam0))
	{
		func_166(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_167(iParam0, iVar0, iParam2, 1);
	}
}

int func_193(int iParam0)
{
	if (Global_1384128)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 9509:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
			case 8282:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8010:
			case 8534:
				return 1;
				break;
			}
	}
	return 0;
}

int func_194(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_18(iParam1)];
	if (STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_195()
{
	if (func_9(&uLocal_110, 10000, 0))
	{
		if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) < Local_103.f_16)
		{
			SET_PLAYER_WANTED_LEVEL(SET_PLAYER_WANTED_LEVEL(), Local_103.f_16, 0);
			SET_PLAYER_WANTED_LEVEL_NOW(SET_PLAYER_WANTED_LEVEL_NOW(), 0);
		}
		_0xBC9490CA15AEA8FB(_0xBC9490CA15AEA8FB());
	}
}

void func_196()
{
	if (!IS_ENTITY_AT_COORD(IS_ENTITY_AT_COORD(), Local_103.f_2, Local_103.f_5, Local_103.f_5, 1000f, false, true, 0))
	{
		func_199();
		Local_105[PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 0;
	}
	else if (!IS_ENTITY_AT_COORD(IS_ENTITY_AT_COORD(), Local_103.f_2, Local_103.f_6, Local_103.f_6, 950f, false, true, 0))
	{
		if (!IS_BIT_SET(iLocal_106, 0) && IS_BIT_SET(iLocal_106, 3))
		{
			if (!IS_HELP_MESSAGE_BEING_DISPLAYED() && !func_198())
			{
				if (!func_241())
				{
					func_197("DCP_LEAVE", -1);
				}
				SET_BIT(&iLocal_106, 0);
			}
		}
	}
	else
	{
		if (!IS_BIT_SET(iLocal_106, 3))
		{
			SET_BIT(&iLocal_106, 3);
		}
		if (IS_BIT_SET(iLocal_106, 0))
		{
			CLEAR_BIT(&iLocal_106, 0);
		}
	}
}

void func_197(char* sParam0, int iParam1)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

bool func_198()
{
	return GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

void func_199()
{
	func_5(&uLocal_108);
	func_5(&uLocal_110);
	func_200();
	CLEAR_BIT(&(Local_105[CLEAR_BIT() /*4*/].f_1), 0);
	CLEAR_BIT(&iLocal_106, 3);
	SET_BIT(&(Global_2531497.f_4592), 0);
	if (!IS_BIT_SET(iLocal_106, 5))
	{
		SET_BIT(&iLocal_106, 5);
	}
}

void func_200()
{
	if (IS_BIT_SET(iLocal_106, 2))
	{
		func_201(1, 1, 0);
		CLEAR_BIT(&iLocal_106, 2);
	}
}

void func_201(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		0x213AEB2B90CBA7AC(&(Global_2405071.f_45), &Global_2409345, 318);
	}
	else
	{
		Global_2405071.f_45 = { Global_2409345 };
		Global_2405071.f_45.f_49 = { Global_2409345.f_49 };
		Global_2405071.f_45.f_52 = Global_2409345.f_52;
		Global_2405071.f_45.f_53 = Global_2409345.f_53;
	}
	if (bParam0)
	{
		func_217();
	}
	if (!bParam2)
	{
		func_204(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_203(0);
	func_202();
}

void func_202()
{
	struct<6> Var0;
	
	if (Global_2405071.f_485.f_1 == GET_ID_OF_THIS_THREAD())
	{
		Global_2405071.f_485 = { Var0 };
	}
}

void func_203(bool bParam0)
{
	if (bParam0)
	{
		Global_2405071.f_703 = 0;
	}
	else
	{
		Global_2405071.f_703 = 1;
	}
}

void func_204(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_216())
		{
			func_215();
		}
		Global_2405071.f_704.f_518 = GET_ID_OF_THIS_THREAD();
		Global_2405071.f_704.f_504 = iParam1;
		Global_2405071.f_704.f_505 = iParam2;
		Global_2405071.f_704.f_506 = iParam10;
		func_213();
		func_208(8, 0, 0, 0, 0);
		Global_2405071.f_704.f_507 = iParam11;
		Global_2405071.f_704.f_512 = iParam3;
		Global_2405071.f_704.f_513 = iParam4;
		Global_2405071.f_704.f_510 = iParam5;
		Global_2405071.f_704.f_511 = iParam6;
		Global_2405071.f_704.f_514 = iParam7;
		Global_2405071.f_704.f_515 = iParam8;
		Global_2405071.f_704.f_516 = iParam9;
		Global_2405071.f_704.f_517 = iParam14;
		Global_2405071.f_704.f_508 = iParam12;
		Global_2405071.f_704.f_509 = iParam13;
		Global_2405071.f_1743 = 1;
	}
	else
	{
		func_205();
	}
}

void func_205()
{
	if (func_216() && !func_207())
	{
		func_215();
	}
	if (func_207())
	{
		func_206();
	}
	else
	{
		func_213();
		func_208(0, 0, 0, 0, 0);
		Global_2405071.f_1743 = 0;
		Global_2405071.f_1742 = 0;
	}
}

void func_206()
{
	0x213AEB2B90CBA7AC(&(Global_2405071.f_704), &(Global_2405071.f_1223), 519);
	Global_2405071.f_485 = { Global_2405071.f_491 };
	if (GET_ID_OF_THIS_THREAD() == Global_2405071.f_704.f_518)
	{
		Global_2405071.f_1742 = 0;
	}
}

int func_207()
{
	if ((Global_2405071.f_1742 && !GET_ID_OF_THIS_THREAD() == Global_2405071.f_1223.f_518) && GET_ID_OF_THIS_THREAD(Global_2405071.f_1223.f_518))
	{
		return 1;
	}
	return 0;
}

void func_208(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2437549.f_1893.f_690.f_16 != func_74())
	{
		if (IS_BIT_SET(Global_2424073[Global_2437549.f_1893.f_690.f_16 /*421*/].f_402, 0) && func_209())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412637 = 0;
	}
	Global_2405071.f_485 = iParam0;
	Global_2405071.f_485.f_1 = GET_ID_OF_THIS_THREAD();
	Global_2405071.f_485.f_2 = iParam1;
	Global_2405071.f_485.f_3 = iParam2;
	Global_2405071.f_485.f_4 = iParam3;
	Global_2405071.f_485.f_5 = iParam4;
}

int func_209()
{
	if (((((func_186(PLAYER_ID()) == 229 || func_186(PLAYER_ID()) == 191) || func_212()) || func_211()) || func_210(PLAYER_ID())) || Global_2508349.f_226 == 1)
	{
		return 0;
	}
	return 1;
}

int func_210(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER_ID())
	{
		return Global_2508348;
	}
	else
	{
		iVar0 = GET_PLAYER_PED(iParam0);
		if (DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

var func_211()
{
	return Global_1574402;
}

int func_212()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_213()
{
	if (func_216() && !func_207())
	{
		func_215();
	}
	func_214();
	Global_2405071.f_704 = 0;
}

void func_214()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405071.f_704.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_215()
{
	if (func_207())
	{
		if (Global_2405071.f_704.f_518 == Global_2405071.f_1223.f_518)
		{
			return;
		}
	}
	if (!GET_ID_OF_THIS_THREAD() == Global_2405071.f_704.f_518)
	{
		0x213AEB2B90CBA7AC(&(Global_2405071.f_1223), &(Global_2405071.f_704), 519);
		Global_2405071.f_491 = { Global_2405071.f_485 };
		Global_2405071.f_1742 = 1;
	}
}

int func_216()
{
	if ((Global_2405071.f_1743 && !GET_ID_OF_THIS_THREAD() == Global_2405071.f_704.f_518) && GET_ID_OF_THIS_THREAD(Global_2405071.f_704.f_518))
	{
		return 1;
	}
	return 0;
}

void func_217()
{
	0x213AEB2B90CBA7AC(&(Global_2405071.f_363), &Global_2409663, 121);
}

void func_218()
{
	if (!IS_BIT_SET(iLocal_106, 2))
	{
		func_237(Local_103.f_2, (Local_103.f_6 * 1.5f), 0, 0, 1, 0);
		func_220(Local_103.f_2, Local_103.f_6, 0, 1);
		func_219(Local_103.f_2, 1, 0);
		SET_BIT(&iLocal_106, 2);
	}
}

void func_219(vector3 vParam0, int iParam1, int iParam2)
{
	Global_2405071.f_45.f_49 = { vParam0 };
	Global_2405071.f_45.f_52 = iParam1;
	Global_2405071.f_45.f_53 = iParam2;
}

void func_220(vector3 vParam0, var uParam1, int iParam2, int iParam3)
{
	func_221(vParam0, 0f, 0f, 0f, uParam1, 0, iParam2, iParam3);
}

void func_221(vector3 vParam0, vector3 vParam1, var uParam2, int iParam3, int iParam4, var uParam5)
{
	struct<12> Var0;
	
	if (func_230(PLAYER_ID()) || uParam5)
	{
		if (Var0.f_10 == 1)
		{
			func_229(&vParam0, &vParam1);
		}
		Var0 = { vParam0 };
		Var0.f_3 = { vParam1 };
		Var0.f_6 = uParam2;
		Var0.f_10 = iParam3;
		if (func_224(Var0))
		{
			Global_2405071.f_45.f_64 = func_223(PLAYER_ID());
			func_222(Var0, iParam4);
		}
	}
}

void func_222(struct<12> Param0, int iParam1)
{
	Global_2405071.f_363[iParam1 /*12*/] = { Param0 };
	Global_2405071.f_363[iParam1 /*12*/].f_9 = 1;
}

int func_223(int iParam0)
{
	if (func_275(iParam0, 0, 1))
	{
		return Global_2424073[iParam0 /*421*/].f_1;
	}
	return 0;
}

int func_224(struct<12> Param0)
{
	struct<12> Var0[1];
	int iVar1;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Global_2405071.f_45[iVar1 /*12*/].f_9 == 1)
		{
			if (!func_225(Global_2405071.f_45[iVar1 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

int func_225(vector3 vParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if ((uParam10[iVar0 /*12*/])->f_9)
		{
			switch ((uParam10[iVar0 /*12*/])->f_10)
			{
				case 0:
					switch (vParam0.f_10)
					{
						case 0:
							if (func_228(vParam0, vParam0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_226(vParam0, vParam0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 1:
					switch (vParam0.f_10)
					{
						case 0:
							if (func_228(vParam0, vParam0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_226(vParam0, vParam0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 2:
					break;
				}
		}
		iVar0++;
	}
	if (vmag(vParam0) == 0f)
	{
		return 0;
	}
	return 1;
}

bool func_226(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	fVar2 = (fParam3 * 0.7071068f);
	vVar0 = { vParam2 - Vector(fVar2, fVar2, fVar2) };
	vVar1 = { vParam2 + Vector(fVar2, fVar2, fVar2) };
	return func_227(vParam0, vParam1, vVar0, vVar1);
}

int func_227(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3)
{
	if (((((vParam0.x >= vParam2.x && vParam0.y >= vParam2.y) && vParam0.z >= vParam2.z) && vParam1.x <= vParam3.x) && vParam1.y <= vParam3.y) && vParam1.z <= vParam3.z)
	{
		return 1;
	}
	return 0;
}

int func_228(vector3 vParam0, float fParam1, vector3 vParam2, float fParam3)
{
	vector3 vVar0;
	
	vVar0 = { vParam2 - vParam0 };
	if ((vmag(vVar0) + fParam1) < fParam3)
	{
		return 1;
	}
	return 0;
}

void func_229(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (*uParam0 <= *uParam1)
	{
		vVar0.x = *uParam0;
		vVar1.x = *uParam1;
	}
	else
	{
		vVar0.x = *uParam1;
		vVar1.x = *uParam0;
	}
	if (uParam0->f_1 <= uParam1->f_1)
	{
		vVar0.y = uParam0->f_1;
		vVar1.y = uParam1->f_1;
	}
	else
	{
		vVar0.y = uParam1->f_1;
		vVar1.y = uParam0->f_1;
	}
	if (uParam0->f_2 <= uParam1->f_2)
	{
		vVar0.z = uParam0->f_2;
		vVar1.z = uParam1->f_2;
	}
	else
	{
		vVar0.z = uParam1->f_2;
		vVar1.z = uParam0->f_2;
	}
	*uParam0 = { vVar0 };
	*uParam1 = { vVar1 };
}

int func_230(int iParam0)
{
	if (((func_233(iParam0, 1) || func_232(iParam0)) || func_187(iParam0, 0)) || func_231(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_231(int iParam0)
{
	if (!func_275(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590446[iParam0 /*871*/].f_35;
}

int func_232(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628955[iVar0 /*614*/] != -1;
	}
	return 0;
}

bool func_233(int iParam0, bool bParam1)
{
	if (Global_1312448 != 0)
	{
		return func_223(iParam0) != 0;
	}
	return func_234(iParam0, bParam1, 0);
}

int func_234(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_235(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590446[iParam0 /*871*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_235(int iParam0)
{
	return func_236(iParam0);
}

bool func_236(int iParam0)
{
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_13.f_1, 0);
}

void func_237(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	func_238(vParam0, 0f, 0f, 0f, fParam1, 0, iParam2, iParam4, iParam3, iParam5);
}

void func_238(vector3 vParam0, vector3 vParam1, var uParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7)
{
	struct<12> Var0;
	
	if (func_230(PLAYER_ID()) || uParam5)
	{
		if (Global_2405071.f_1743)
		{
			func_205();
		}
		if (Var0.f_10 == 1)
		{
			func_229(&vParam0, &vParam1);
		}
		Var0 = { vParam0 };
		Var0.f_3 = { vParam1 };
		Var0.f_6 = uParam2;
		Var0.f_10 = iParam3;
		Var0.f_11 = uParam6;
		Var0.f_8 = uParam7;
		if (Var0.f_8 < 0f)
		{
			Var0.f_8 = 0f;
		}
		Global_2405071.f_45.f_64 = func_223(PLAYER_ID());
		func_239(Var0, iParam4);
	}
}

void func_239(struct<12> Param0, int iParam1)
{
	Global_2405071.f_45[iParam1 /*12*/] = { Param0 };
	Global_2405071.f_45[iParam1 /*12*/].f_9 = 1;
}

var func_240()
{
	return Global_2416074.f_1703;
}

int func_241()
{
	if (func_242(21))
	{
		return 1;
	}
	if (func_242(0))
	{
		return 1;
	}
	return 0;
}

bool func_242(int iParam0)
{
	int iVar0;
	
	iVar0 = func_194(2480, -1, 0);
	return IS_BIT_SET(iVar0, iParam0);
}

void func_243()
{
	if (!IS_BIT_SET(iLocal_106, 6))
	{
		if (((((((func_244(60000) && func_246() == 1) && Local_103.f_7 <= 1) && !IS_HELP_MESSAGE_BEING_DISPLAYED()) && !IS_HELP_MESSAGE_BEING_DISPLAYED()) && func_275(IS_HELP_MESSAGE_BEING_DISPLAYED(), 1, 1)) && !func_198()) && Local_103.f_16 != 5)
		{
			if (!func_241())
			{
				func_197("DCP_HELP1", -1);
			}
			SET_BIT(&iLocal_106, 6);
		}
	}
}

bool func_244(int iParam0)
{
	return ABSI(ABSI(Global_2413890, ABSI())) > iParam0;
}

void func_245()
{
	if (DOES_BLIP_EXIST(iLocal_107))
	{
		if (func_241() || func_240())
		{
			SET_BLIP_DISPLAY(iLocal_107, 0);
		}
		else
		{
			SET_BLIP_DISPLAY(iLocal_107, 4);
		}
	}
	else
	{
		iLocal_107 = ADD_BLIP_FOR_RADIUS(Local_103.f_2, Local_103.f_5);
		SET_BLIP_COLOUR(iLocal_107, 50);
		SET_BLIP_ALPHA(iLocal_107, 220);
		_0x75A16C3DA34F1245(iLocal_107, false);
		SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_107, "DCP_BLIPN");
		if (func_241())
		{
			SET_BLIP_DISPLAY(iLocal_107, 0);
		}
	}
}

int func_246()
{
	return Local_103;
}

int func_247(int iParam0)
{
	return Local_105[iParam0 /*4*/];
}

bool func_248(int iParam0)
{
	return !func_249(iParam0);
}

int func_249(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_6660)
			{
				return 0;
			}
			if (func_251(PLAYER_ID(), 7))
			{
				return 0;
			}
			if (IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_24, 0) || IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_24, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_6661)
			{
				return 0;
			}
			if (func_251(PLAYER_ID(), 7))
			{
				return 0;
			}
			if (IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_24, 0) || IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_24, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_6662)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_6663)
			{
				return 0;
			}
			if (func_251(PLAYER_ID(), 7))
			{
				return 0;
			}
			if (IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_24, 0) || IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_24, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_250(4))
			{
				return 0;
			}
			if (func_251(PLAYER_ID(), 7))
			{
				return 0;
			}
			if (IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_24, 0) || IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_24, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_250(4))
			{
				return 0;
			}
			if (func_251(PLAYER_ID(), 7))
			{
				return 0;
			}
			if (IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_24, 0) || IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_24, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_250(4))
			{
				return 0;
			}
			if (func_251(PLAYER_ID(), 7))
			{
				return 0;
			}
			if (IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_24, 0) || IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_24, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_250(4))
			{
				return 0;
			}
			if (func_251(PLAYER_ID(), 7))
			{
				return 0;
			}
			if (IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_24, 0) || IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_24, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_250(4))
			{
				return 0;
			}
			if (func_251(PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_250(4))
			{
				return 0;
			}
			if (func_251(PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_250(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_275(INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (IS_BIT_SET(Global_2424073[iVar0 /*421*/].f_208, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_251(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_208, iParam1);
}

int func_252()
{
	var uVar0;
	
	func_260(&uVar0);
	if (Global_1312850 == 0)
	{
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_259())
	{
		return 1;
	}
	if (Global_2461241)
	{
		return 1;
	}
	if (func_258())
	{
		return 1;
	}
	if (func_257(159))
	{
		if (!func_256())
		{
			return 1;
		}
	}
	if (func_257(157))
	{
		return 1;
	}
	if (!NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_253() != 0)
	{
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_253()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_253()
{
	switch (func_255())
	{
		case 0:
			return func_254();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_254()
{
	switch (Global_2461343)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_255()
{
	return Global_30736;
}

bool func_256()
{
	return Global_2448961.f_598;
}

int func_257(int iParam0)
{
	if (GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_258()
{
	return Global_2458999;
}

bool func_259()
{
	return Global_2448961.f_593;
}

void func_260(var uParam0)
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
					func_261(iVar0);
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

void func_261(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_275(vVar0.y, 1, 1))
		{
			iVar1 = GET_PLAYER_PED(vVar0.y);
			if (DOES_ENTITY_EXIST(iVar1))
			{
				if (IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && IS_VEHICLE_WINDOW_INTACT())
					{
						if (func_262(iVar2, &bVar3))
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

int func_262(int iParam0, var uParam1)
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

void func_263()
{
	wait(0);
}

void func_264()
{
	if (DOES_BLIP_EXIST(iLocal_107))
	{
		REMOVE_BLIP(&iLocal_107);
	}
	if (IS_BIT_SET(Local_103.f_1, 1))
	{
		func_76(12, "DSC_FAIL", 0, 0, -99);
	}
	func_200();
	func_266(16, 0);
	SET_BIT(&(Global_2531497.f_4592), 0);
	func_265();
}

void func_265()
{
	TERMINATE_THIS_THREAD();
}

void func_266(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!IS_BIT_SET(Global_2424073[IS_BIT_SET() /*421*/].f_208, iParam0))
		{
			SET_BIT(&(Global_2424073[SET_BIT() /*421*/].f_208), iParam0);
		}
	}
	else if (IS_BIT_SET(Global_2424073[IS_BIT_SET() /*421*/].f_208, iParam0))
	{
		CLEAR_BIT(&(Global_2424073[CLEAR_BIT() /*421*/].f_208), iParam0);
	}
}

void func_267(struct<21> Param0)
{
	func_273(func_274(Param0), Param0);
	func_271(0, -1, 0);
	NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_103, 20);
	NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_105, 129);
	if (!func_270())
	{
		func_264();
	}
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_268();
		}
		func_266(16, 1);
		Local_105[PARTICIPANT_ID_TO_INT() /*4*/] = 0;
	}
	else
	{
		func_264();
	}
}

void func_268()
{
	Local_103.f_2 = { func_269() };
	Local_103.f_5 = 200f;
	Local_103.f_6 = 180f;
}

Vector3 func_269()
{
	switch (GET_RANDOM_INT_IN_RANGE(0, 10))
	{
		case 0:
			return 1440f, -2135f, 60f;
		
		case 1:
			return 233f, -1725f, 30f;
		
		case 2:
			return -403f, -1207f, 38f;
		
		case 3:
			return -1060f, -1028f, 3f;
		
		case 4:
			return -2152f, -329f, 14f;
		
		case 5:
			return -1651f, 214f, 61f;
		
		case 6:
			return -527f, 662f, 142f;
		
		case 7:
			return -27f, -747f, 45f;
		
		case 8:
			return 1292f, -649f, 68f;
		
		case 9:
			return 978f, -3143f, 6f;
		
		default:
	}
	return 978f, -3143f, 6f;
}

int func_270()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (_0x5D10B3795F3FC886())
		{
			return 1;
		}
		if (func_259())
		{
			return 0;
		}
		if (func_257(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		wait(0);
	}
	return 0;
}

int func_271(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_265();
			}
			else
			{
				return 0;
			}
		}
		if (!func_272())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_265();
					}
					else
					{
						return 0;
					}
				}
				if (func_259())
				{
					if (!bParam2)
					{
						func_265();
					}
					else
					{
						return 0;
					}
				}
				if (func_257(157))
				{
					if (!bParam2)
					{
						func_265();
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
					func_265();
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
				func_265();
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
			func_265();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_272()
{
	return Global_1312850;
}

void func_273(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_265();
	}
	NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_16);
}

int func_274(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 32;
		
		case 114:
			return 8;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 8;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 126:
			return 32;
		
		case 127:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 133:
			return 32;
		
		case 131:
			return 32;
		
		case 132:
			return 32;
		
		case 136:
			return 32;
		
		case 137:
			return 32;
		
		case 134:
			return 32;
		
		case 135:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 32;
		
		case 144:
			return 2;
		
		case 149:
			return 1;
		
		case 145:
			return 2;
		
		case 146:
			return 4;
		
		case 147:
			return 2;
		
		case 148:
			return 2;
		
		case 130:
			return 1;
		
		case 150:
			return 2;
		
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
			return 0;
		
		case 170:
			return 1;
		
		case 157:
			return 4;
		
		case 160:
			return 4;
		
		case 161:
			return 1;
		
		case 162:
			return 1;
		
		case 168:
			return 1;
		
		case 164:
			return 2;
		
		case 169:
			return 1;
		
		case 165:
			return 1;
		
		case 163:
			return 2;
		
		case 166:
			return 8;
		
		case 167:
			return 8;
		
		case 158:
			return 16;
		
		case 159:
			return 32;
		
		default:
	}
	return 0;
}

int func_275(int iParam0, bool bParam1, bool bParam2)
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

__________________________
Native Named by Reliency
1577160150
__________________________
