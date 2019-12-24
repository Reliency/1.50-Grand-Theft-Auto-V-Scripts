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
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
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
	if (HAS_FORCE_CLEANUP_OCCURRED(2) || HAS_FORCE_CLEANUP_OCCURRED())
	{
		TERMINATE_THIS_THREAD();
	}
	func_1();
}

void func_1()
{
	vector3 vVar0;
	int iVar1;
	
	while (!func_9(&iLocal_20))
	{
		wait(0);
	}
	if (!IS_PED_INJURED(iLocal_20))
	{
		if (!Global_95194)
		{
			SET_ENTITY_AS_MISSION_ENTITY(iLocal_20, true, 1);
			if (GET_SCRIPT_TASK_STATUS(iLocal_20, 1435919172) != 7)
			{
				CLEAR_PED_TASKS(iLocal_20);
			}
			vVar0 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), false) };
			SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_20, true);
			OPEN_SEQUENCE_TASK(&iVar1);
			if (!IS_PED_IN_ANY_VEHICLE(iLocal_20, 0))
			{
				if (!IS_PED_IN_COMBAT(iLocal_20, 0) && !IS_PED_IN_COMBAT(iLocal_20, 0))
				{
					TASK_TURN_PED_TO_FACE_COORD(0, vVar0, 6000);
				}
			}
			TASK_LOOK_AT_COORD(0, vVar0, 6000, 0, 2);
			CLOSE_SEQUENCE_TASK(iVar1);
			TASK_PERFORM_SEQUENCE(iLocal_20, iVar1);
		}
		func_2(iLocal_20);
	}
	while (!IS_SCREEN_FADED_OUT())
	{
		wait(0);
	}
	if (DOES_ENTITY_EXIST(iLocal_20))
	{
		if (!IS_PED_INJURED(iLocal_20))
		{
			SET_PED_KEEP_TASK(iLocal_20, true);
		}
		SET_PED_AS_NO_LONGER_NEEDED(&iLocal_20);
	}
	Global_95194 = 0;
	TERMINATE_THIS_THREAD();
}

void func_2(int iParam0)
{
	int iVar0;
	
	iVar0 = GET_GAME_TIMER() + 1000;
	while (GET_GAME_TIMER() < iVar0 && !GET_GAME_TIMER())
	{
		wait(0);
	}
	if (!IS_PED_INJURED(iParam0))
	{
		if (iLocal_19 == 1)
		{
			switch (func_5(PLAYER_PED_ID()))
			{
				case 2:
					func_3(iParam0, "BUDDY_SEES_TREVOR_DEATH", "FRANKLIN_NORMAL", 3);
					break;
				
				case 0:
					func_3(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "FRANKLIN_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_19 == 2)
		{
			switch (func_5(PLAYER_PED_ID()))
			{
				case 1:
					func_3(iParam0, "BUDDY_SEES_FRANKLIN_DEATH", "TREVOR_NORMAL", 3);
					break;
				
				case 0:
					func_3(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "TREVOR_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_19 == 0)
		{
			switch (func_5(PLAYER_PED_ID()))
			{
				case 2:
					func_3(iParam0, "BUDDY_SEES_TREVOR_DEATH", "MICHAEL_NORMAL", 3);
					break;
				
				case 1:
					func_3(iParam0, "BUDDY_SEES_FRANKLIN_DEATH", "MICHAEL_NORMAL", 3);
					break;
				}
			}
	}
}

void func_3(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	_PLAY_AMBIENT_SPEECH_WITH_VOICE(iParam0, sParam1, sParam2, func_4(iParam3), 0);
}

int func_4(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

int func_5(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_6(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_6(int iParam0)
{
	if (func_8(iParam0))
	{
		return func_7(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_7(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_8(int iParam0)
{
	return iParam0 < 3;
}

int func_9(var uParam0)
{
	int iVar0;
	
	iLocal_18 = 0;
	while (iLocal_18 < 9)
	{
		if (DOES_ENTITY_EXIST(Global_96068[iLocal_18]) && !DOES_ENTITY_EXIST(Global_96068[iLocal_18]))
		{
			if (Global_96068[iLocal_18] != PLAYER_PED_ID())
			{
				if (!IS_ENTITY_A_MISSION_ENTITY(Global_96068[iLocal_18]))
				{
					if (IS_PED_IN_ANY_VEHICLE(Global_96068[iLocal_18], 0) || !IS_PED_IN_ANY_VEHICLE(Global_96068[iLocal_18]))
					{
						if (GET_DISTANCE_BETWEEN_COORDS(GET_DISTANCE_BETWEEN_COORDS(Global_96068[iLocal_18], true), GET_DISTANCE_BETWEEN_COORDS(GET_DISTANCE_BETWEEN_COORDS(), false), true) < 10f)
						{
							iLocal_19 = func_5(Global_96068[iLocal_18]);
							if ((iLocal_19 == 0 || iLocal_19 == 2) || iLocal_19 == 1)
							{
								if (iLocal_19 != func_10())
								{
									if (HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_96068[iLocal_18], HAS_ENTITY_CLEAR_LOS_TO_ENTITY(), 17))
									{
										if (IS_PED_IN_ANY_VEHICLE(Global_96068[iLocal_18], 0))
										{
											iVar0 = GET_VEHICLE_PED_IS_IN(Global_96068[iLocal_18], 0);
										}
										if ((DOES_ENTITY_EXIST(iVar0) && DOES_ENTITY_EXIST(iVar0, 0)) || !DOES_ENTITY_EXIST(iVar0))
										{
											*uParam0 = Global_96068[iLocal_18];
											return 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_18++;
	}
	if (IS_SCREEN_FADED_OUT())
	{
		return 1;
	}
	return 0;
}

int func_10()
{
	func_11();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_11()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()))
	{
		if (func_6(Global_111560.f_2358.f_539.f_4321) != GET_ENTITY_MODEL(GET_ENTITY_MODEL()))
		{
			iVar0 = func_5(PLAYER_PED_ID());
			if (func_8(iVar0) && (!func_12(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_8(Global_111560.f_2358.f_539.f_4321))
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

bool func_12(int iParam0)
{
	return Global_41396 == iParam0;
}

__________________________
Native Named by Reliency
1577160429
__________________________
