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
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	struct<24> Local_40[2];
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = -1;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	bool bLocal_58 = 0;
	vector3 vLocal_59[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_60[2] = { 0, 0 };
	int iLocal_61[2] = { 0, 0 };
	struct<2> Local_62 = { 0, 5 } ;
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
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 5;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	int iVar3;
	
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	vVar2 = { ScriptParam_62.f_1[0 /*3*/] };
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("launcher_carwash")) > 1)
	{
		TERMINATE_THIS_THREAD();
	}
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	}
	else if (HAS_FORCE_CLEANUP_OCCURRED(99))
	{
		func_71();
	}
	if (Global_2621550)
	{
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-949873222) == 0)
		{
			REQUEST_SCRIPT_WITH_NAME_HASH(-949873222);
			while (!HAS_SCRIPT_WITH_NAME_HASH_LOADED(-949873222))
			{
				wait(0);
			}
			start_new_script_with_name_hash_and_args(-949873222, &ScriptParam_62, 23, 1424);
		}
		TERMINATE_THIS_THREAD();
	}
	if (func_70(PLAYER_PED_ID()))
	{
	}
	func_64();
	while (true)
	{
		func_70(PLAYER_PED_ID());
		if (func_63(PLAYER_PED_ID(), vVar2, 0) > (100f + 20f))
		{
			func_71();
		}
		bVar0 = false;
		if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
		{
			iVar1 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
			bVar0 = (func_60(iVar1) || func_59(iVar1));
			bLocal_58 = DOES_VEHICLE_HAVE_ROOF(iVar1);
			func_58(bLocal_58);
		}
		iVar3 = 0;
		while (iVar3 < Local_40)
		{
			func_57(iVar3);
			iVar3++;
		}
		if (func_1(&Local_40, &uLocal_41, bVar0, 0, 1, 1424))
		{
			func_71();
		}
		wait(0);
	}
}

int func_1(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (uParam1->f_10)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			func_52(iParam0[iVar0 /*24*/]);
			iVar0++;
		}
	}
	switch (uParam1->f_13)
	{
		case 0:
			iVar0 = 0;
			if (func_45(uParam1->f_16))
			{
				iVar0 = 0;
				while (iVar0 < *iParam0)
				{
					if (func_42(iParam0[iVar0 /*24*/]) && (*iParam0)[iVar0 /*24*/])
					{
						uParam1->f_12 = iVar0;
						if ((iParam0[iVar0 /*24*/])->f_7 || (GET_MISSION_FLAG() && uParam1->f_16 == 0))
						{
							func_41(uParam1, 6);
						}
						else if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) > 0)
						{
							func_41(uParam1, 8);
						}
						else if (bParam2)
						{
							func_41(uParam1, 3);
						}
						else if ((iParam0[iVar0 /*24*/])->f_8)
						{
							func_41(uParam1, 2);
						}
						else if (func_30() < (iParam0[uParam1->f_12 /*24*/])->f_9)
						{
							func_41(uParam1, 1);
						}
						else if (func_25())
						{
							func_41(uParam1, 7);
						}
						else
						{
							func_41(uParam1, 4);
						}
					}
					iVar0++;
				}
			}
			else
			{
				func_24(uParam1);
			}
			break;
		
		case 2:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_6);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || (iParam0[iVar0 /*24*/])->f_8 == 0)
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 1:
			if (!uParam1->f_9)
			{
				func_13(uParam1, uParam1->f_2, (iParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || func_30() >= (iParam0[uParam1->f_12 /*24*/])->f_9)
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 6:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_1);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || !func_45(uParam1->f_16))
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 3:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_3);
			}
			if ((func_18(iParam0[uParam1->f_12 /*24*/]) || bParam2 == 0) || !func_45(uParam1->f_16))
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 7:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_5);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || !func_45(uParam1->f_16))
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 8:
			if (!uParam1->f_9)
			{
				func_22(uParam1, uParam1->f_4);
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) == 0)
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 9:
			if (!uParam1->f_9)
			{
				if (func_12())
				{
					func_22(uParam1, uParam1->f_7);
				}
				else
				{
					func_22(uParam1, uParam1->f_8);
				}
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || func_9(iParam0[uParam1->f_12 /*24*/]))
			{
				func_41(uParam1, 0);
				return 0;
			}
			break;
		
		case 4:
			SET_INPUT_EXCLUSIVE(2, 51);
			DISABLE_CONTROL_ACTION(0, 101, 1);
			func_8();
			if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) > 0)
			{
				func_41(uParam1, 8);
				return 0;
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_8)
			{
				func_41(uParam1, 2);
				return 0;
			}
			if (func_18(iParam0[uParam1->f_12 /*24*/]) || !func_45(uParam1->f_16))
			{
				func_41(uParam1, 0);
				return 0;
			}
			if (Global_73784)
			{
				return 0;
			}
			if (func_5(1))
			{
				return 0;
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (!IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0) || func_4(IS_PED_IN_ANY_VEHICLE(), 0) != -1)
				{
					func_41(uParam1, 0);
					return 0;
				}
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_7 || (GET_MISSION_FLAG() && uParam1->f_16 == 0))
			{
				func_41(uParam1, 6);
				return 0;
			}
			if (func_25())
			{
				func_41(uParam1, 7);
				return 0;
			}
			if (func_30() < (iParam0[uParam1->f_12 /*24*/])->f_9)
			{
				func_41(uParam1, 1);
				return 0;
			}
			if (!uParam1->f_9)
			{
				func_13(uParam1, *uParam1, (iParam0[uParam1->f_12 /*24*/])->f_9);
			}
			if ((iParam0[uParam1->f_12 /*24*/])->f_6 == 1)
			{
				if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0) && !IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE()))
				{
					return 0;
				}
			}
			if (IS_PAUSE_MENU_ACTIVE() || IS_PAUSE_MENU_ACTIVE())
			{
				return 0;
			}
			if (IS_PED_ON_FOOT(IS_PED_ON_FOOT()))
			{
				if ((IS_PED_FALLING(IS_PED_FALLING()) || IS_PED_FALLING(IS_PED_FALLING())) || IS_PED_FALLING(IS_PED_FALLING()))
				{
					return 0;
				}
				if ((IS_PED_RUNNING_RAGDOLL_TASK(IS_PED_RUNNING_RAGDOLL_TASK()) || IS_PED_RUNNING_RAGDOLL_TASK(IS_PED_RUNNING_RAGDOLL_TASK())) || IS_PED_RUNNING_RAGDOLL_TASK(IS_PED_RUNNING_RAGDOLL_TASK()))
				{
					return 0;
				}
				if (IS_PED_CLIMBING(IS_PED_CLIMBING()))
				{
					return 0;
				}
				if (IS_PED_DUCKING(IS_PED_DUCKING()) || IS_PED_DUCKING(IS_PED_DUCKING()))
				{
					return 0;
				}
				if (GET_ENTITY_SPEED(GET_ENTITY_SPEED()) > 0.05f)
				{
					return 0;
				}
			}
			if (IS_CONTROL_JUST_PRESSED(2, 51) && uParam1->f_9 == 1)
			{
				if (!func_9(iParam0[uParam1->f_12 /*24*/]))
				{
					func_41(uParam1, 9);
				}
				else
				{
					func_41(uParam1, 5);
				}
			}
			break;
		
		case 5:
			func_24(uParam1);
			(iParam0[uParam1->f_12 /*24*/])->f_8 = 0;
			if (!bParam4)
			{
				func_41(uParam1, 0);
				return 1;
			}
			CLEAR_HELP(1);
			CLEAR_AREA_OF_PROJECTILES(CLEAR_AREA_OF_PROJECTILES(CLEAR_AREA_OF_PROJECTILES(), true), 20f, 0);
			if (!IS_STRING_NULL_OR_EMPTY((iParam0[uParam1->f_12 /*24*/])->f_5))
			{
				REQUEST_SCRIPT((iParam0[uParam1->f_12 /*24*/])->f_5);
				while (!HAS_SCRIPT_LOADED((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					func_8();
					if (func_70(PLAYER_PED_ID()))
					{
						if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0) && !Global_76577)
						{
							func_2(GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0), 2f, 1, 1056964608, 0, 1, 0);
							SET_VEHICLE_BRAKE_LIGHTS(SET_VEHICLE_BRAKE_LIGHTS(SET_VEHICLE_BRAKE_LIGHTS(), 0), 0);
						}
					}
					SET_INPUT_EXCLUSIVE(2, 51);
					REQUEST_SCRIPT((iParam0[uParam1->f_12 /*24*/])->f_5);
					DISABLE_CONTROL_ACTION(0, 101, 1);
					DISABLE_CONTROL_ACTION(0, 75, 1);
					DISABLE_CONTROL_ACTION(0, 23, 1);
					wait(0);
				}
				if (bParam3)
				{
					DO_SCREEN_FADE_OUT(250);
				}
				if (HAS_SCRIPT_LOADED((iParam0[uParam1->f_12 /*24*/])->f_5))
				{
					if (bParam3)
					{
						while (!IS_SCREEN_FADED_OUT())
						{
							if (func_70(PLAYER_PED_ID()))
							{
								if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0) && !Global_76577)
								{
									func_2(GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0), 2f, 1, 1056964608, 0, 1, 0);
									SET_VEHICLE_BRAKE_LIGHTS(SET_VEHICLE_BRAKE_LIGHTS(SET_VEHICLE_BRAKE_LIGHTS(), 0), 0);
								}
							}
							SET_INPUT_EXCLUSIVE(2, 51);
							DISABLE_CONTROL_ACTION(0, 101, 1);
							DISABLE_CONTROL_ACTION(0, 75, 1);
							DISABLE_CONTROL_ACTION(0, 23, 1);
							func_8();
							wait(0);
						}
					}
					start_new_script((iParam0[uParam1->f_12 /*24*/])->f_5, iParam5);
					SET_SCRIPT_AS_NO_LONGER_NEEDED((iParam0[uParam1->f_12 /*24*/])->f_5);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_2(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_3(iParam0);
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

void func_3(int iParam0)
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

int func_4(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!IS_PED_INJURED(iParam0))
	{
		if (IS_PED_IN_ANY_VEHICLE(iParam0, iParam1))
		{
			iVar0 = GET_VEHICLE_PED_IS_IN(iParam0, iParam1);
			if (DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = GET_VEHICLE_MODEL_NUMBER_OF_SEATS(GET_VEHICLE_MODEL_NUMBER_OF_SEATS(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!IS_VEHICLE_SEAT_FREE(iVar0, iVar3, 0))
					{
						if (GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

int func_5(bool bParam0)
{
	if (bParam0)
	{
		if (func_7())
		{
			return 1;
		}
	}
	if (func_6(14))
	{
		return 1;
	}
	return 0;
}

bool func_6(int iParam0)
{
	return Global_41396 == iParam0;
}

int func_7()
{
	if (Global_110505)
	{
		return 1;
	}
	if (!func_6(14) && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("director_mode")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_8()
{
	Global_22211.f_6 = 1;
}

int func_9(var uParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = PLAYER_PED_ID();
	if (uParam0->f_15 == 360f)
	{
		return 1;
	}
	if (func_11(uParam0->f_12))
	{
		return 1;
	}
	if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
	{
		iVar1 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
		if (func_70(iVar1))
		{
			vVar0 = { GET_ENTITY_ROTATION(iVar1, 2) };
			if (vVar0.y > 45f || vVar0.y < -45f)
			{
				return 0;
			}
			iVar2 = iVar1;
		}
	}
	vVar0 = { GET_ENTITY_FORWARD_VECTOR(iVar2) };
	if (func_10(uParam0->f_12, vVar0) > cos(uParam0->f_15))
	{
		return 1;
	}
	return 0;
}

float func_10(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	return ((Param0 * Param2) + (Param0.f_1 * Param2.f_1));
}

int func_11(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_12()
{
	int iVar0;
	
	if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
	{
		iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
		return IS_ENTITY_UPRIGHT(iVar0, 90f);
	}
	return IS_ENTITY_UPRIGHT(IS_ENTITY_UPRIGHT(), 90f);
}

int func_13(var uParam0, char* sParam1, int iParam2)
{
	if (IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (func_15(uParam0) || !IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		CLEAR_HELP(1);
		func_14(sParam1, iParam2);
		uParam0->f_14 = sParam1;
		uParam0->f_15 = iParam2;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_14(char* sParam0, int iParam1)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	ADD_TEXT_COMPONENT_INTEGER(iParam1);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 1, true, -1);
}

int func_15(var uParam0)
{
	if (IS_STRING_NULL_OR_EMPTY(uParam0->f_14))
	{
		return 0;
	}
	if (!IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (ARE_STRINGS_EQUAL(*uParam0, uParam0->f_14) || ARE_STRINGS_EQUAL(uParam0->f_2, uParam0->f_14))
	{
		return func_17(uParam0->f_14, uParam0->f_15);
	}
	return func_16(uParam0->f_14);
}

int func_16(char* sParam0)
{
	BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_17(char* sParam0, int iParam1)
{
	BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	ADD_TEXT_COMPONENT_INTEGER(iParam1);
	return END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_18(var uParam0)
{
	struct<8> Var0;
	
	Var0 = 2;
	if (uParam0->f_6 == 0)
	{
		if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
		{
			return 1;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
		{
			return 1;
		}
		if (func_4(PLAYER_PED_ID(), 0) != -1)
		{
			return 1;
		}
	}
	if (uParam0->f_11 == 0)
	{
		return !func_21(PLAYER_PED_ID(), uParam0->f_1, (uParam0->f_10 + 2f));
	}
	Var0 = { func_19(uParam0->f_16, 2f) };
	return !IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), Var0[0 /*3*/], Var0[1 /*3*/], Var0.f_7, 0, true, 0);
}

struct<8> func_19(struct<8> Param0, float fParam1)
{
	struct<8> Var0;
	vector3 vVar1;
	
	Var0 = 2;
	vVar1 = { func_20(Param0[1 /*3*/] - Param0[0 /*3*/]) * Vector(fParam1, fParam1, fParam1) };
	Var0[0 /*3*/] = { Param0[0 /*3*/] - vVar1 };
	Var0[1 /*3*/] = { Param0[1 /*3*/] + vVar1 };
	Var0.f_7 = (Param0.f_7 + (fParam1 * 2f));
	return Var0;
}

Vector3 func_20(vector3 vParam0)
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

bool func_21(int iParam0, vector3 vParam1, float fParam2)
{
	return vdist2(GET_ENTITY_COORDS(iParam0, true), vParam1) <= (fParam2 * fParam2);
}

int func_22(var uParam0, char* sParam1)
{
	if (IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (func_15(uParam0) || !IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		CLEAR_HELP(1);
		func_23(sParam1);
		uParam0->f_14 = sParam1;
		uParam0->f_15 = 0;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

void func_23(char* sParam0)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 1, true, -1);
}

void func_24(var uParam0)
{
	if (func_15(uParam0))
	{
		CLEAR_HELP(1);
	}
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	if (uParam0->f_9 == 1)
	{
		uParam0->f_9 = 0;
	}
}

bool func_25()
{
	int iVar0;
	
	if (!IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
	{
		return 0;
	}
	iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
	if (IS_ENTITY_ON_FIRE(iVar0))
	{
		return 1;
	}
	if (func_29(iVar0))
	{
		return 1;
	}
	if (func_26(iVar0, 3))
	{
		return 1;
	}
	return !IS_VEHICLE_DRIVEABLE(iVar0, 0);
}

int func_26(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_27(iParam0))
	{
		iVar0 = 0;
		if (IS_VEHICLE_TYRE_BURST(iParam0, 0, 0) && IS_VEHICLE_TYRE_BURST(iParam0, 1, 0))
		{
			return 1;
		}
		if (IS_VEHICLE_TYRE_BURST(iParam0, 4, 0) && IS_VEHICLE_TYRE_BURST(iParam0, 5, 0))
		{
			return 1;
		}
		if (IS_VEHICLE_TYRE_BURST(iParam0, 0, 0))
		{
			iVar0++;
		}
		if (IS_VEHICLE_TYRE_BURST(iParam0, 1, 0))
		{
			iVar0++;
		}
		if (IS_VEHICLE_TYRE_BURST(iParam0, 4, 0))
		{
			iVar0++;
		}
		if (IS_VEHICLE_TYRE_BURST(iParam0, 5, 0))
		{
			iVar0++;
		}
		if (iVar0 >= iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_27(int iParam0)
{
	if (func_28(iParam0))
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

int func_28(int iParam0)
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

int func_29(int iParam0)
{
	if (DOES_ENTITY_EXIST(iParam0))
	{
		if (IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
		else if (!IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (!IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_30()
{
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		return func_38(PLAYER_ID());
	}
	switch (func_32())
	{
		case 2:
			return func_31(2);
		
		case 0:
			return func_31(0);
		
		case 1:
			return func_31(1);
		
		default:
	}
	return 0;
}

var func_31(int iParam0)
{
	return Global_58645[iParam0];
}

int func_32()
{
	func_33();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_33()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()))
	{
		if (func_36(Global_111560.f_2358.f_539.f_4321) != GET_ENTITY_MODEL(GET_ENTITY_MODEL()))
		{
			iVar0 = func_35(PLAYER_PED_ID());
			if (func_34(iVar0) && (!func_6(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_34(Global_111560.f_2358.f_539.f_4321))
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

bool func_34(int iParam0)
{
	return iParam0 < 3;
}

int func_35(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_36(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_36(int iParam0)
{
	if (func_34(iParam0))
	{
		return func_37(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_37(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

var func_38(int iParam0)
{
	var uVar0;
	
	uVar0 = func_39(iParam0);
	return uVar0;
}

int func_39(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == PLAYER_ID())
		{
			return NETWORK_GET_VC_WALLET_BALANCE(-1);
		}
		else if (func_40(iParam0))
		{
			return Global_1590446[iParam0 /*871*/].f_211.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_40(int iParam0)
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

void func_41(var uParam0, int iParam1)
{
	uParam0->f_13 = iParam1;
	func_24(uParam0);
}

bool func_42(var uParam0)
{
	func_70(PLAYER_PED_ID());
	if (*uParam0 == 0)
	{
		return 0;
	}
	if (func_44(0))
	{
		return 0;
	}
	if (func_43())
	{
		return 0;
	}
	if (uParam0->f_6 == 0)
	{
		if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_6 == 1)
	{
		if (!IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
		{
			return 0;
		}
		if (func_4(PLAYER_PED_ID(), 0) != -1)
		{
			return 0;
		}
	}
	if (uParam0->f_11 == 1)
	{
		return IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), uParam0->f_16[0 /*3*/], uParam0->f_16[1 /*3*/], uParam0->f_16.f_7, 0, true, 0);
	}
	return func_21(PLAYER_PED_ID(), uParam0->f_1, uParam0->f_10);
}

bool func_43()
{
	return GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

bool func_44(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

int func_45(int iParam0)
{
	if (iParam0 == 0)
	{
		if (func_51())
		{
			return 0;
		}
	}
	if (IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (IS_SYSTEM_UI_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_43())
	{
		return 0;
	}
	if (Global_61465)
	{
		return 0;
	}
	if (func_44(0))
	{
		return 0;
	}
	if (func_50(0))
	{
		return 0;
	}
	if (func_46(PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_46(int iParam0)
{
	if (func_49(iParam0))
	{
		return 1;
	}
	if (func_47(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_47(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_48(iParam0, 9);
	}
	return 0;
}

bool func_48(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

int func_49(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return IS_BIT_SET(Global_1628955[iVar0 /*614*/].f_1, 0);
	}
	return 0;
}

int func_50(int iParam0)
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

int func_51()
{
	if (Global_41396 == 15)
	{
		return 0;
	}
	return 1;
}

void func_52(var uParam0)
{
	if (uParam0->f_11 == 1)
	{
		func_54(&(uParam0->f_16), 255, 100, 0, 100);
	}
	else
	{
		func_53(uParam0->f_1, uParam0->f_10, 0, 0, 255, 255, 32);
	}
}

void func_53(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	
	fVar1 = (360f / to_float(iParam6));
	vVar2 = { vParam0 };
	vVar3 = { vParam0 };
	fVar4 = 0f;
	vVar2 = { vParam0 };
	vVar2.x = (vVar2.x + (sin((fVar4 - fVar1)) * fParam1));
	vVar2.y = (vVar2.y + (cos((fVar4 - fVar1)) * fParam1));
	iVar0 = 0;
	while (iVar0 <= iParam6)
	{
		vVar3 = { vParam0 };
		vVar3.x = (vVar3.x + (sin(fVar4) * fParam1));
		vVar3.y = (vVar3.y + (cos(fVar4) * fParam1));
		DRAW_DEBUG_LINE(vVar2, vVar3, iParam2, iParam3, iParam4, iParam5);
		vVar2 = { vVar3 };
		fVar4 = (fVar4 + fVar1);
		iVar0++;
	}
}

void func_54(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_55(*(uParam0[0 /*3*/]), *(uParam0[1 /*3*/]), uParam0->f_7, iParam1, iParam2, iParam3, iParam4);
}

void func_55(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5[8];
	int iVar6;
	
	if (fParam2 == 0f)
	{
		return;
	}
	vVar0 = { func_20(vParam1 - vParam0) };
	vVar1 = { func_56(vVar0, 0f, 0f, 1f) };
	fVar2 = (fParam2 / 2f);
	vVar3 = { vParam0 };
	vVar4 = { vParam1 };
	vVar4.z = vParam0.z;
	vVar5[0 /*3*/] = { vVar3 - vVar1 * Vector(fVar2, fVar2, fVar2) };
	vVar5[1 /*3*/] = { vVar3 + vVar1 * Vector(fVar2, fVar2, fVar2) };
	vVar5[2 /*3*/] = { vVar4 + vVar1 * Vector(fVar2, fVar2, fVar2) };
	vVar5[3 /*3*/] = { vVar4 - vVar1 * Vector(fVar2, fVar2, fVar2) };
	DRAW_DEBUG_LINE(vVar5[0 /*3*/], vVar5[1 /*3*/], iParam3, iParam4, iParam5, iParam6);
	DRAW_DEBUG_LINE(vVar5[1 /*3*/], vVar5[2 /*3*/], iParam3, iParam4, iParam5, iParam6);
	DRAW_DEBUG_LINE(vVar5[2 /*3*/], vVar5[3 /*3*/], iParam3, iParam4, iParam5, iParam6);
	DRAW_DEBUG_LINE(vVar5[3 /*3*/], vVar5[0 /*3*/], iParam3, iParam4, iParam5, iParam6);
	iVar6 = 0;
	while (iVar6 <= 3)
	{
		vVar5[(4 + iVar6) /*3*/] = { vVar5[iVar6 /*3*/] };
		vVar5[(4 + iVar6) /*3*/].f_2 = vParam1.z;
		iVar6++;
	}
	DRAW_DEBUG_LINE(vVar5[4 /*3*/], vVar5[5 /*3*/], iParam3, iParam4, iParam5, iParam6);
	DRAW_DEBUG_LINE(vVar5[5 /*3*/], vVar5[6 /*3*/], iParam3, iParam4, iParam5, iParam6);
	DRAW_DEBUG_LINE(vVar5[6 /*3*/], vVar5[7 /*3*/], iParam3, iParam4, iParam5, iParam6);
	DRAW_DEBUG_LINE(vVar5[7 /*3*/], vVar5[4 /*3*/], iParam3, iParam4, iParam5, iParam6);
	DRAW_DEBUG_LINE(vVar5[0 /*3*/], vVar5[4 /*3*/], iParam3, iParam4, iParam5, iParam6);
	DRAW_DEBUG_LINE(vVar5[1 /*3*/], vVar5[5 /*3*/], iParam3, iParam4, iParam5, iParam6);
	DRAW_DEBUG_LINE(vVar5[2 /*3*/], vVar5[6 /*3*/], iParam3, iParam4, iParam5, iParam6);
	DRAW_DEBUG_LINE(vVar5[3 /*3*/], vVar5[7 /*3*/], iParam3, iParam4, iParam5, iParam6);
}

Vector3 func_56(vector3 vParam0, vector3 vParam1)
{
	return ((vParam0.y * vParam1.z) - (vParam0.z * vParam1.y)), ((vParam0.z * vParam1.x) - (vParam0.x * vParam1.z)), ((vParam0.x * vParam1.y) - (vParam0.y * vParam1.x));
}

void func_57(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	
	if (!func_42(&(Local_40[iParam0 /*24*/])))
	{
		Local_40[iParam0 /*24*/].f_8 = 0;
		iLocal_61[iParam0] = 0;
		return;
	}
	if (!IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
	{
		Local_40[iParam0 /*24*/].f_8 = 0;
		iLocal_61[iParam0] = 0;
		return;
	}
	if (iLocal_61[iParam0] == 0)
	{
		if (GET_GAME_TIMER() > uLocal_60[iParam0])
		{
			iLocal_61[iParam0] = _START_SHAPE_TEST_CAPSULE_2(vLocal_59[iParam0 /*3*/], vLocal_59[iParam0 /*3*/] + Vector(1f, 0f, 0f), 2f, 2, _START_SHAPE_TEST_CAPSULE_2(_START_SHAPE_TEST_CAPSULE_2(), 0), 4);
		}
	}
	else
	{
		iVar0 = GET_SHAPE_TEST_RESULT(iLocal_61[iParam0], &iVar4, &uVar2, &uVar3, &iVar1);
		if (iVar0 == 2)
		{
			Local_40[iParam0 /*24*/].f_8 = 0;
			if (iVar4 > 0)
			{
				if (DOES_ENTITY_EXIST(iVar1))
				{
					if (IS_ENTITY_A_VEHICLE(iVar1))
					{
						Local_40[iParam0 /*24*/].f_8 = 1;
					}
				}
			}
			iLocal_61[iParam0] = 0;
		}
		if (iVar0 == 0)
		{
			iLocal_61[iParam0] = 0;
		}
		uLocal_60[iParam0] = GET_GAME_TIMER() + 250;
	}
}

void func_58(bool bParam0)
{
	if (bParam0)
	{
	}
}

int func_59(int iParam0)
{
	if (!IS_THIS_MODEL_A_CAR(IS_THIS_MODEL_A_CAR(iParam0)))
	{
		return 1;
	}
	if (IS_VEHICLE_DOOR_DAMAGED(iParam0, 0))
	{
		return 1;
	}
	if (IS_VEHICLE_DOOR_DAMAGED(iParam0, 1))
	{
		return 1;
	}
	if (IS_VEHICLE_DOOR_DAMAGED(iParam0, 2))
	{
		return 1;
	}
	if (IS_VEHICLE_DOOR_DAMAGED(iParam0, 3))
	{
		return 1;
	}
	if (IS_VEHICLE_A_CONVERTIBLE(iParam0, 1))
	{
		if (GET_CONVERTIBLE_ROOF_STATE(iParam0) == 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_60(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!func_28(iParam0))
	{
		return 0;
	}
	if (!DOES_VEHICLE_HAVE_ROOF(iParam0))
	{
		return 1;
	}
	if (IS_VEHICLE_ATTACHED_TO_TRAILER(iParam0))
	{
		return 1;
	}
	if (!IS_THIS_MODEL_A_CAR(IS_THIS_MODEL_A_CAR(iParam0)))
	{
		return 1;
	}
	if (IS_ENTITY_ON_FIRE(iParam0))
	{
		return 1;
	}
	if (func_61(iParam0))
	{
		return 1;
	}
	GET_MODEL_DIMENSIONS(GET_MODEL_DIMENSIONS(iParam0), &vVar0, &vVar1);
	if (ABSF((vVar1.x - vVar0.x)) > 3.4f)
	{
		return 1;
	}
	if (ABSF((vVar1.z - vVar0.z)) > 2.9f)
	{
		return 1;
	}
	if (Global_76577)
	{
		if (!NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
		{
			return 0;
		}
	}
	if (IS_VEHICLE_A_CONVERTIBLE(iParam0, 1) && !IS_VEHICLE_A_CONVERTIBLE(iParam0))
	{
		return 1;
	}
	if (!IS_VEHICLE_A_CONVERTIBLE(iParam0, 1) && !IS_VEHICLE_A_CONVERTIBLE(iParam0))
	{
		return 1;
	}
	if (GET_ENTITY_MODEL(iParam0) == joaat("btype") || GET_ENTITY_MODEL(iParam0) == joaat("btype3"))
	{
		if (((((func_28(GET_PED_IN_VEHICLE_SEAT(iParam0, 3, 0)) || func_28(GET_PED_IN_VEHICLE_SEAT(iParam0, 4, 0))) || func_28(GET_PED_IN_VEHICLE_SEAT(iParam0, 5, 0))) || func_28(GET_PED_IN_VEHICLE_SEAT(iParam0, 6, 0))) || func_28(GET_PED_IN_VEHICLE_SEAT(iParam0, 7, 0))) || func_28(GET_PED_IN_VEHICLE_SEAT(iParam0, 8, 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_61(int iParam0)
{
	int iVar0;
	
	iVar0 = GET_ENTITY_MODEL(iParam0);
	if (func_62(iVar0))
	{
		return 1;
	}
	if (iVar0 == joaat("regina"))
	{
		if (IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 2))
		{
			return 1;
		}
		if (IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 3) && IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 4))
		{
			return 1;
		}
	}
	if (iVar0 == joaat("banshee") && IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("peyote") && IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("coquette") && !DOES_VEHICLE_HAVE_ROOF(iParam0))
	{
		return 1;
	}
	if (iVar0 == joaat("manana") && IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("mesa") && !IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("voltic") && IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("bobcatxl") && !IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 1))
	{
		return 1;
	}
	if (iVar0 == joaat("ruiner"))
	{
		if (IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 3) && !IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 7))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_62(int iParam0)
{
	if (!IS_THIS_MODEL_A_CAR(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("ambulance"):
		case joaat("armytrailer"):
		case joaat("airtug"):
		case joaat("bifta"):
		case joaat("bison2"):
		case joaat("bison3"):
		case joaat("bodhi2"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("bulldozer"):
		case joaat("caddy"):
		case joaat("caddy2"):
		case joaat("cutter"):
		case joaat("dilettante2"):
		case joaat("dubsta3"):
		case joaat("dump"):
		case joaat("dune"):
		case joaat("dloader"):
		case joaat("forklift"):
		case joaat("guardian"):
		case joaat("graintrailer"):
		case joaat("handler"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("kalahari"):
		case joaat("mesa3"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("mower"):
		case joaat("packer"):
		case joaat("pbus"):
		case joaat("ratloader"):
		case joaat("rentalbus"):
		case joaat("rhino"):
		case joaat("ripley"):
		case joaat("riot"):
		case joaat("sadler"):
		case joaat("sadler2"):
		case joaat("sandking"):
		case joaat("sandking2"):
		case joaat("scrap"):
		case joaat("stockade"):
		case joaat("stockade3"):
		case joaat("technical"):
		case joaat("tractor"):
		case joaat("tractor2"):
		case joaat("tornado4"):
		case joaat("tourbus"):
		case joaat("limo2"):
		case joaat("raptor"):
		case joaat("ratloader2"):
		case 1897744184:
		case joaat("dune4"):
		case joaat("dune5"):
		case -1242608589:
		case 1483171323:
		case 1254014755:
		case -638562243:
		case 2044532910:
		case -1349095620:
		case -941272559:
		case -208911803:
		case -682108547:
		case 340154634:
		case -1756021720:
		case 1284356689:
		case 408825843:
		case -1254331310:
			return 1;
		
		default:
	}
	if (iParam0 == 740289177 || iParam0 == -1960756985)
	{
		return 1;
	}
	return 0;
}

float func_63(int iParam0, vector3 vParam1, bool bParam2)
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

void func_64()
{
	func_68(&(Local_40[0 /*24*/]), 1, "Carwash1", func_69(156), 15, "", 0, 4f);
	func_68(&(Local_40[1 /*24*/]), 1, "Carwash2", func_69(157), 15, "", 0, 4f);
	func_66(&(Local_40[0 /*24*/]), -1f, 0f, 0f, 360f);
	func_66(&(Local_40[1 /*24*/]), 0f, -1f, 0f, 360f);
	func_65(&uLocal_41, 0);
	vLocal_59[0 /*3*/] = { 47.6f, -1392f, 29.4f };
	vLocal_59[1 /*3*/] = { -700f, -925.3f, 19f };
}

void func_65(var uParam0, int iParam1)
{
	*uParam0 = "CWASH_RIDEHLP";
	uParam0->f_1 = "";
	uParam0->f_3 = "CWASH_NOWAY";
	uParam0->f_4 = "CWASH_WANTED";
	uParam0->f_5 = "CWASH_CARBROKE";
	uParam0->f_6 = "CWASH_BLOCKED";
	uParam0->f_7 = "CWASH_WRONGWAY";
	uParam0->f_8 = "CWASH_UPSIDEDO";
	uParam0->f_16 = iParam1;
	if (!Global_76577)
	{
		uParam0->f_2 = "CWASH_NOMONEY";
		return;
	}
	if (IS_PS3_VERSION() || IS_PS3_VERSION())
	{
		uParam0->f_2 = "CWASH_POOR_PSN";
	}
	else if (IS_XBOX360_VERSION() || IS_XBOX360_VERSION())
	{
		uParam0->f_2 = "CWASH_POOR_XBX";
	}
	else
	{
		uParam0->f_2 = "CWASH_POOR_STD";
	}
}

void func_66(var uParam0, vector3 vParam1, float fParam2)
{
	uParam0->f_12 = { func_20(vParam1 * Vector(5f, 5f, 5f)) };
	uParam0->f_15 = func_67(fParam2, 0f, 360f);
}

float func_67(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_68(var uParam0, int iParam1, char* sParam2, vector3 vParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	uParam0->f_5 = sParam2;
	uParam0->f_1 = { vParam3 };
	uParam0->f_4 = sParam5;
	uParam0->f_9 = iParam4;
	uParam0->f_7 = iParam6;
	uParam0->f_6 = iParam1;
	uParam0->f_11 = 0;
	*uParam0 = 1;
	uParam0->f_12 = { 0f, 0f, 0f };
	uParam0->f_15 = 360f;
	if (iParam1 == 0)
	{
		uParam0->f_10 = 2.75f;
	}
	else
	{
		uParam0->f_10 = (2.75f * 2f);
	}
	if (fParam7 > 0f)
	{
		uParam0->f_10 = fParam7;
	}
}

Vector3 func_69(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	return Global_31111[iVar0 /*23*/][0 /*3*/];
}

bool func_70(int iParam0)
{
	if (!DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	return !IS_ENTITY_DEAD(iParam0, 0);
}

void func_71()
{
	func_72(&Local_40);
	func_24(&uLocal_41);
	TERMINATE_THIS_THREAD();
}

void func_72(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_73(uParam0[iVar0 /*24*/]);
		iVar0++;
	}
}

void func_73(var uParam0)
{
	*uParam0 = 0;
}

__________________________
Native Named by Reliency
1577161207
__________________________
