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
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	char* sLocal_23 = NULL;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	float fLocal_35 = 0f;
	float fLocal_36 = 0f;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 5;
	var uScriptParam_17 = 0;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	vector3 vVar3;
	int iVar4;
	
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
	sLocal_23 = "NULL";
	fLocal_26 = 80f;
	fLocal_27 = 140f;
	fLocal_28 = 180f;
	fLocal_31 = 0f;
	fLocal_35 = -0.0375f;
	fLocal_36 = 0.17f;
	iLocal_39 = 3;
	iLocal_43 = 1;
	iLocal_44 = 65;
	iLocal_45 = 49;
	iLocal_46 = 64;
	iVar1 = joaat("carwash1");
	sVar2 = "carwash1";
	vVar3 = { ScriptParam_50.f_1[0 /*3*/] };
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_carwash_launch")) > 1)
	{
		TERMINATE_THIS_THREAD();
	}
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	}
	else
	{
		TERMINATE_THIS_THREAD();
	}
	if (Global_2621550)
	{
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(131838674) == 0)
		{
			REQUEST_SCRIPT_WITH_NAME_HASH(131838674);
			while (!HAS_SCRIPT_WITH_NAME_HASH_LOADED(131838674))
			{
				wait(0);
			}
			start_new_script_with_name_hash_and_args(131838674, &ScriptParam_50, 23, 1424);
		}
		TERMINATE_THIS_THREAD();
	}
	if (func_11(PLAYER_PED_ID()))
	{
	}
	iVar4 = 0;
	while (iVar4 == 0)
	{
		if (((((func_8(PLAYER_ID(), 1, 0) || func_7()) || !func_6(PLAYER_ID())) || func_5()) || func_4(PLAYER_ID())) || func_2(PLAYER_ID()))
		{
			iVar4 = 0;
		}
		else
		{
			iVar4 = 1;
		}
		wait(0);
	}
	if (vdist2(vVar3, func_1(157)) < vdist2(vVar3, func_1(156)))
	{
		sVar2 = "carwash2";
	}
	iVar0 = GET_GAME_TIMER();
	iVar1 = GET_HASH_KEY(sVar2);
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(iVar1) == 0)
	{
		REQUEST_SCRIPT(sVar2);
		while (!HAS_SCRIPT_LOADED(sVar2))
		{
			REQUEST_SCRIPT(sVar2);
			wait(0);
			if (GET_GAME_TIMER() > iVar0 + 20000)
			{
				TERMINATE_THIS_THREAD();
			}
		}
		if (HAS_SCRIPT_LOADED(sVar2))
		{
			start_new_script(sVar2, 1424);
			SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar2);
		}
	}
	TERMINATE_THIS_THREAD();
}

Vector3 func_1(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	return Global_31111[iVar0 /*23*/][0 /*3*/];
}

int func_2(int iParam0)
{
	if (iParam0 != func_3())
	{
		return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_389.f_2, 16);
	}
	return 0;
}

int func_3()
{
	return -1;
}

int func_4(int iParam0)
{
	if (iParam0 != func_3())
	{
		return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_330, 29);
	}
	return 0;
}

bool func_5()
{
	return IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_39.f_18, 0);
}

bool func_6(int iParam0)
{
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_142, 6);
}

int func_7()
{
	int iVar0;
	
	iVar0 = Global_2437549;
	if (IS_BIT_SET(Global_1627738[iVar0 /*38*/].f_14, 0) && Global_1627738[iVar0 /*38*/].f_23 == 2)
	{
		return 1;
	}
	return 0;
}

int func_8(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_9(iParam0))
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

bool func_9(int iParam0)
{
	return func_10(iParam0);
}

bool func_10(int iParam0)
{
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_13.f_1, 0);
}

bool func_11(int iParam0)
{
	if (!DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	return !IS_ENTITY_DEAD(iParam0, 0);
}

__________________________
Native Named by Reliency
1577160224
__________________________
