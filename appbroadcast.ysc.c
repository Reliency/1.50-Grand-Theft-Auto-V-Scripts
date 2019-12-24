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
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	struct<2> Local_30 = { 0, 0 } ;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	struct<2> Local_33 = { 0, 0 } ;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	struct<2> Local_36 = { 0, 0 } ;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	struct<2> Local_39 = { 0, 0 } ;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	struct<2> Local_42 = { 0, 0 } ;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	struct<2> Local_45 = { 0, 0 } ;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
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
	StringCopy(&Local_30, "CELL_212", 16);
	StringCopy(&Local_33, "CELL_213", 16);
	StringCopy(&Local_36, "CELL_39", 16);
	StringCopy(&Local_39, "CELL_MP_300", 16);
	StringCopy(&Local_42, "CELL_MP_301", 16);
	StringCopy(&Local_45, "CELL_MP_302", 16);
	NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_43(&iLocal_28);
	func_34();
	while (true)
	{
		wait(0);
		if (!NETWORK_IS_IN_SESSION())
		{
			func_32(1);
			func_31();
		}
		if (!Global_19486.f_1 == 9 && Global_19486.f_1 > 3)
		{
			func_3();
			if (Global_19486.f_1 != 8)
			{
				if (func_2())
				{
					func_31();
				}
			}
		}
		if (func_1())
		{
			func_31();
		}
	}
}

int func_1()
{
	if (((Global_19486.f_1 == 1 || Global_19486.f_1 == 3) || Global_19486.f_1 == 0) || Global_19430 == 1)
	{
		Global_19473 = 1;
		return 1;
	}
	return 0;
}

int func_2()
{
	if (Global_7962 == 1 || Global_19486.f_1 < 7)
	{
		Global_19473 = 1;
		return 1;
	}
	return 0;
}

void func_3()
{
	if (func_27(&iLocal_28))
	{
		if (func_16())
		{
			if (Global_2458921)
			{
				_NETWORK_CHAT_MUTE(0);
				func_10(1800434664, func_11(1, 1));
				Global_2458921 = 0;
			}
			else
			{
				_NETWORK_CHAT_MUTE(1);
				func_10(547733100, func_11(1, 1));
				Global_2458921 = 1;
			}
			func_4(0);
			return;
		}
	}
}

void func_4(int iParam0)
{
	if (func_9())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_8())
		{
			func_6(1, 1);
		}
		else
		{
			func_6(0, 0);
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
	if (!func_5())
	{
		Global_19486.f_1 = 3;
	}
}

int func_5()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_7(0))
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

int func_7(int iParam0)
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

bool func_8()
{
	return IS_BIT_SET(Global_1687880, 5);
}

bool func_9()
{
	return IS_BIT_SET(Global_1687880, 19);
}

void func_10(int iParam0, int iParam1)
{
	struct<4> Var0;
	
	Var0 = -498955166;
	Var0.f_1 = PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = GET_RANDOM_INT_IN_RANGE(0, 9999);
	if (!iParam1 == 0)
	{
		if (NETWORK_IS_GAME_IN_PROGRESS())
		{
			TRIGGER_SCRIPT_EVENT(1, &Var0, 4, iParam1);
		}
	}
}

int func_11(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = INT_TO_PLAYERINDEX(iVar1);
		if (func_15(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					SET_BIT(&uVar0, iVar1);
				}
				else if (!func_12(iVar2, 0))
				{
					SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_12(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER_ID())
	{
		bVar0 = func_13(-1, 0) == 8;
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

int func_13(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_14();
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

int func_14()
{
	return Global_1312745;
}

int func_15(int iParam0, bool bParam1, bool bParam2)
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

int func_16()
{
	if (!func_22(PLAYER_ID(), 1) && func_17())
	{
		return 1;
	}
	return 0;
}

int func_17()
{
	if (Global_1312447)
	{
		return 1;
	}
	if (func_21())
	{
		return 1;
	}
	if (func_20())
	{
		return 1;
	}
	return func_18(120, -1);
}

int func_18(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2576213[iParam0 /*3*/][func_19(iParam1)];
	if (STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_19(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_14();
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

bool func_20()
{
	return Global_1312861;
}

bool func_21()
{
	return Global_1312863;
}

bool func_22(int iParam0, bool bParam1)
{
	if (Global_1312448 != 0)
	{
		return func_26(iParam0) != 0;
	}
	return func_23(iParam0, bParam1, 0);
}

int func_23(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_24(iParam0))
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

bool func_24(int iParam0)
{
	return func_25(iParam0);
}

bool func_25(int iParam0)
{
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_13.f_1, 0);
}

int func_26(int iParam0)
{
	if (func_15(iParam0, 0, 1))
	{
		return Global_2424073[iParam0 /*421*/].f_1;
	}
	return 0;
}

int func_27(int iParam0)
{
	if (!IS_BIT_SET(*iParam0, 0))
	{
		return 0;
	}
	if (Global_19464)
	{
		return 0;
	}
	if (!IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (!IS_CONTROL_JUST_PRESSED(2, Global_19455))
	{
		return 0;
	}
	func_28();
	Global_19464 = 1;
	return 1;
}

void func_28()
{
	if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
	{
		PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_19475, true);
		func_29();
	}
}

void func_29()
{
	if (func_30())
	{
		_MOVE_FINGER(5);
	}
}

int func_30()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76577)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = _0x19CAFA3C87F7C2FF();
	iVar1 = _0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4269893 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_31()
{
	TERMINATE_THIS_THREAD();
}

void func_32(bool bParam0)
{
	if (bParam0)
	{
		func_33();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			SET_BIT(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
		}
	}
	else if (Global_19486.f_1 == 1)
	{
		if (!Global_19486.f_1 == 0)
		{
			Global_19486.f_1 = 3;
		}
	}
}

void func_33()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_34()
{
	if (!Global_19486.f_1 == 7)
	{
		Global_19486.f_1 = 7;
	}
	func_42(Global_19467, "SET_DATA_SLOT_EMPTY", to_float(13), -1082130432, -1082130432, -1082130432, -1082130432);
	if (func_16())
	{
		if (Global_2458921)
		{
			func_41(Global_19467, "SET_DATA_SLOT", to_float(13), to_float(0), to_float(12), -1f, -1f, &Local_42, 0, 0, 0, 0);
		}
		else
		{
			func_41(Global_19467, "SET_DATA_SLOT", to_float(13), to_float(0), to_float(12), -1f, -1f, &Local_39, 0, 0, 0, 0);
		}
	}
	else
	{
		func_41(Global_19467, "SET_DATA_SLOT", to_float(13), to_float(0), to_float(12), -1f, -1f, &Local_45, 0, 0, 0, 0);
	}
	func_42(Global_19467, "DISPLAY_VIEW", to_float(13), -1082130432, -1082130432, -1082130432, -1082130432);
	func_38(&Local_36);
	if (func_16())
	{
		func_35(13, &Local_30, 1, "", 4, &Local_33, &iLocal_28);
	}
	else
	{
		func_35(1, "", 1, "", 4, &Local_33, &iLocal_28);
	}
}

void func_35(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6)
{
	func_36(2, iParam0, sParam1, 0, iParam6, -1);
	func_36(1, iParam2, sParam3, 1, iParam6, 17);
	func_36(3, iParam4, sParam5, 2, iParam6, -1);
}

void func_36(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	if (iParam1 == 1)
	{
		func_41(Global_19467, "SET_SOFT_KEYS", to_float(iParam0), 0f, to_float(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		CLEAR_BIT(iParam4, iParam3);
		func_37(iParam5, 0);
		return;
	}
	if (Global_19474)
	{
		func_41(Global_19467, "SET_SOFT_KEYS", to_float(iParam0), 1f, to_float(iParam1), -1f, -1f, sParam2, 0, 0, 0, 0);
		SET_BIT(iParam4, iParam3);
		func_37(iParam5, 1);
		return;
	}
	func_41(Global_19467, "SET_SOFT_KEYS", to_float(iParam0), 1f, to_float(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	SET_BIT(iParam4, iParam3);
	func_37(iParam5, 1);
}

void func_37(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		SET_BIT(&Global_7356, iParam0);
		return;
	}
	CLEAR_BIT(&Global_7356, iParam0);
}

void func_38(char* sParam0)
{
	func_39(Global_19467, "SET_HEADER", sParam0, 0, 0, 0, 0);
}

void func_39(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_40(sParam2);
	if (!IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_40(sParam3);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_40(sParam4);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_40(sParam5);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_40(sParam6);
	}
	END_SCALEFORM_MOVIE_METHOD();
}

void func_40(char* sParam0)
{
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_41(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(round(fParam2));
	if (fParam3 != -1f)
	{
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(round(fParam6));
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_40(sParam7);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_40(sParam8);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_40(sParam9);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_40(sParam10);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_40(sParam11);
	}
	END_SCALEFORM_MOVIE_METHOD();
}

void func_42(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(round(fParam2));
	if (fParam3 != -1f)
	{
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(round(fParam3));
	}
	if (fParam4 != -1f)
	{
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(round(fParam4));
	}
	if (fParam5 != -1f)
	{
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(round(fParam5));
	}
	if (fParam6 != -1f)
	{
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(round(fParam6));
	}
	END_SCALEFORM_MOVIE_METHOD();
}

void func_43(var uParam0)
{
	*uParam0 = 0;
}

__________________________
Native Named by Reliency
1577160368
__________________________
