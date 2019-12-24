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
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	vector3 vLocal_45 = { 0f, 0f, 0f };
	int iLocal_46 = 0;
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
	sLocal_20 = "NULL";
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
	if (HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		iLocal_43 = 5;
	}
	while (true)
	{
		wait(0);
		if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
		{
			switch (iLocal_43)
			{
				case 0:
					func_9();
					break;
				
				case 1:
					break;
				
				case 2:
					func_8();
					if (NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (CREATE_INCIDENT_WITH_ENTITY(7, CREATE_INCIDENT_WITH_ENTITY(), 2, 3f, &uLocal_47, 0, 0))
						{
							iLocal_46 = GET_GAME_TIMER();
							iLocal_43 = 5;
						}
					}
					else if (CREATE_INCIDENT(7, vLocal_45, 2, 3f, &uLocal_47, 0, 0))
					{
						iLocal_46 = GET_GAME_TIMER();
						iLocal_43 = 5;
					}
					break;
				
				case 3:
					func_8();
					if (NETWORK_IS_GAME_IN_PROGRESS())
					{
						if ((func_7(PLAYER_ID(), 0) && func_4(PLAYER_ID()) == 5) && Global_1694233)
						{
							if (Global_1694234 == 0)
							{
								Global_1694234 = 1;
							}
							iLocal_43 = 5;
						}
						else if (CREATE_INCIDENT_WITH_ENTITY(5, CREATE_INCIDENT_WITH_ENTITY(), 2, 3f, &uLocal_47, 0, 0))
						{
							iLocal_46 = GET_GAME_TIMER();
							iLocal_43 = 5;
						}
					}
					else if (CREATE_INCIDENT(5, vLocal_45, 2, 3f, &uLocal_47, 0, 0))
					{
						iLocal_46 = GET_GAME_TIMER();
						iLocal_43 = 5;
					}
					break;
				
				case 4:
					func_8();
					if (NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (CREATE_INCIDENT_WITH_ENTITY(3, CREATE_INCIDENT_WITH_ENTITY(), 4, 3f, &uLocal_47, 0, 0))
						{
							iLocal_46 = GET_GAME_TIMER();
							iLocal_43 = 5;
						}
					}
					else if (CREATE_INCIDENT(3, vLocal_45, 4, 3f, &uLocal_47, 0, 0))
					{
						if (Global_95196.f_358 == GET_HASH_KEY("AGENCY_PREP_1") || (GET_HASH_KEY(GET_HASH_KEY("agency_prep1")) > 0 && func_3(0)))
						{
							Global_95196.f_358 = GET_HASH_KEY("AHP1_TRUCKCALLED");
						}
						else if (func_2(67) && !func_2(68))
						{
							Global_95126 = 1;
						}
						iLocal_46 = GET_GAME_TIMER();
						iLocal_43 = 5;
					}
					break;
				
				case 5:
					if (GET_GAME_TIMER() > (iLocal_46 + 60000) || !GET_GAME_TIMER(uLocal_47))
					{
						func_1();
					}
					else if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
					{
						if (!IS_PLAYER_CONTROL_ON(IS_PLAYER_CONTROL_ON()))
						{
							if (IS_INCIDENT_VALID(uLocal_47))
							{
								DELETE_INCIDENT(uLocal_47);
							}
						}
					}
					break;
				}
		}
	}
}

void func_1()
{
	iLocal_43 = 0;
	iLocal_44 = 0;
	TERMINATE_THIS_THREAD();
}

int func_2(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111560.f_9080.f_330[iParam0 /*6*/];
}

bool func_3(bool bParam0)
{
	if (!bParam0 && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return IS_BIT_SET(Global_76825, 0);
}

int func_4(int iParam0)
{
	if (func_6(iParam0) == 233)
	{
		return func_5(iParam0);
	}
	return -1;
}

int func_5(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_181;
	}
	return -1;
}

int func_6(int iParam0)
{
	if (func_7(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_33;
	}
	return -1;
}

int func_7(int iParam0, int iParam1)
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 || (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_8()
{
	if (GET_GAME_TIMER() > iLocal_46 + 30000)
	{
		iLocal_43 = 5;
	}
}

void func_9()
{
	var uVar0;
	
	switch (iLocal_44)
	{
		case 0:
			iLocal_44 = 1;
			iLocal_46 = GET_GAME_TIMER();
			break;
		
		case 1:
			while (!func_19())
			{
				wait(0);
				if (func_18() == 3)
				{
					iLocal_43 = 3;
				}
				if (func_18() == 4)
				{
					iLocal_43 = 4;
				}
				if (func_18() == 5)
				{
					iLocal_43 = 2;
				}
				if (GET_GAME_TIMER() > iLocal_46 + 30000)
				{
					iLocal_46 = GET_GAME_TIMER();
					func_12(0);
				}
			}
			if (iLocal_43 == 0)
			{
				iLocal_43 = 5;
			}
			if (!IS_PED_INJURED(IS_PED_INJURED()))
			{
				func_10(PLAYER_PED_ID(), &vLocal_45, &uVar0);
			}
			iLocal_46 = GET_GAME_TIMER();
			break;
	}
}

void func_10(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	vector3 vVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	vector3 vVar17;
	var uVar18;
	
	fVar12 = 5f;
	iVar0 = 1;
	iVar13 = 0;
	while (iVar13 < 2)
	{
		switch (iVar13)
		{
			case 0:
				GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(), true), iVar0, uParam1, &fVar10, &iVar1, 5, 3f, 0f);
				GET_CLOSEST_ROAD(*uParam1, 1f, 1, &uVar4, &uVar5, &uVar2, &uVar3, &fVar7, 0);
				if (GET_DISTANCE_BETWEEN_COORDS(GET_DISTANCE_BETWEEN_COORDS(GET_DISTANCE_BETWEEN_COORDS(), false), -3044.66f, 596.43f, 6.58f, true) < 25f)
				{
					*uParam1 = { -3031.38f, 605.32f, 6.86f };
				}
				vVar6 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true) - GET_ENTITY_COORDS(iParam0, true) };
				fVar8 = GET_HEADING_FROM_VECTOR_2D(vVar6.x, vVar6.y);
				fVar9 = (fVar10 + 180f);
				if (fVar9 > 360f)
				{
					fVar9 = (fVar9 - 360f);
				}
				if (func_11(fVar8, fVar10, 90f))
				{
					*uParam2 = fVar10;
				}
				else
				{
					*uParam2 = fVar9;
				}
				if (fVar7 < 0f)
				{
					fVar11 = 0f;
				}
				else if (_GET_IS_SLOW_ROAD_FLAG(_GET_IS_SLOW_ROAD_FLAG(*uParam1, 1, 1, 1077936128, 0)))
				{
					fVar11 = 0f;
				}
				else
				{
					fVar11 = (fVar12 * to_float((iVar1 / 2)));
					if (fVar11 == 0f)
					{
						fVar11 = (fVar11 + fVar12);
					}
					if (iVar1 == 5)
					{
						fVar11 = (fVar11 + fVar12);
					}
					if (GET_DISTANCE_BETWEEN_COORDS(GET_DISTANCE_BETWEEN_COORDS(GET_DISTANCE_BETWEEN_COORDS(), false), 294f, -895f, 28f, true) < 25f || GET_DISTANCE_BETWEEN_COORDS(GET_DISTANCE_BETWEEN_COORDS(GET_DISTANCE_BETWEEN_COORDS(), false), -713.01f, -819.64f, 22.63f, true) < 25f)
					{
						fVar11 = (fVar11 + 5f);
					}
					else
					{
						fVar11 = (fVar11 + 3.75f);
					}
					fVar11 = (fVar11 + (fVar7 / 2f));
				}
				if (vdist(_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, *uParam2, fVar11, 0f, 0f), _GET_OBJECT_OFFSET_FROM_COORDS(_GET_OBJECT_OFFSET_FROM_COORDS(), true)) > vdist(_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, *uParam2, -fVar11, 0f, 0f), _GET_OBJECT_OFFSET_FROM_COORDS(_GET_OBJECT_OFFSET_FROM_COORDS(), true)))
				{
					fVar11 = -fVar11;
				}
				*uParam1 = { _GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, *uParam2, fVar11, 0f, 0f) };
				iVar14 = START_SHAPE_TEST_CAPSULE(*uParam1 + FtoV((uParam1->f_2 + 4.5f)), *uParam1 + Vector(4.5f, 0.5f, 0.5f), 2.5f, 1, 0, 4);
				iVar13++;
				break;
			
			case 1:
				if (iVar0 <= 2)
				{
					if (GET_SHAPE_TEST_RESULT(iVar14, &iVar15, &vVar17, &uVar16, &uVar18) == 2)
					{
						if (iVar15 != 0)
						{
							if (vVar17.z > (uParam1->f_2 + 8.5f))
							{
								iVar13++;
							}
							else
							{
								iVar0++;
								iVar13 = 0;
							}
						}
						else
						{
							iVar13++;
						}
					}
				}
				else
				{
					iVar13++;
				}
				break;
			
			case 2:
				break;
		}
	}
}

int func_11(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

void func_12(int iParam0)
{
	if (func_17())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_16())
		{
			func_14(1, 1);
		}
		else
		{
			func_14(0, 0);
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
	if (!func_13())
	{
		Global_19486.f_1 = 3;
	}
}

int func_13()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(bool bParam0, bool bParam1)
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

bool func_16()
{
	return IS_BIT_SET(Global_1687880, 5);
}

bool func_17()
{
	return IS_BIT_SET(Global_1687880, 19);
}

int func_18()
{
	return Global_21822;
}

int func_19()
{
	if (Global_20805 == 0)
	{
		return 1;
	}
	return 0;
}

__________________________
Native Named by Reliency
1577160530
__________________________
