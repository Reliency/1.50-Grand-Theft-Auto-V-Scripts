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
	struct<10> Local_60 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_61 = 0;
	vector3 vLocal_62[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	bool bLocal_68 = 0;
	struct<21> Local_69 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_232(ScriptParam_69))
		{
			func_226();
		}
		if (ScriptParam_69.f_16 >= 32)
		{
			if (func_225(PLAYER_ID()) != 1 && !PLAYER_ID(Global_2531497.f_859.f_7, 0))
			{
				func_226();
			}
		}
	}
	uLocal_64 = ScriptParam_69.f_19;
	while (true)
	{
		func_224();
		if (func_213())
		{
			func_226();
		}
		if (ScriptParam_69.f_16 >= 32)
		{
			if (func_225(PLAYER_ID()) != 1 && Global_1627444 == 0)
			{
				func_226();
			}
		}
		if (NETWORK_END_TUTORIAL_SESSION() != bLocal_68)
		{
			func_226();
		}
		_0x2302C0264EA58D31();
		switch (func_212(PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_211())
				{
					if (func_210() == 1)
					{
						vLocal_62[PARTICIPANT_ID_TO_INT() /*3*/] = 1;
					}
					else if (func_210() == 4)
					{
						vLocal_62[PARTICIPANT_ID_TO_INT() /*3*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_210() == 1)
				{
					func_184();
				}
				else if (func_210() == 4)
				{
					vLocal_62[PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				if (vLocal_62[PARTICIPANT_ID_TO_INT() /*3*/].f_2 == 0)
				{
					if ((!IS_ENTITY_AT_COORD(IS_ENTITY_AT_COORD(), Local_60.f_3, 500f, 500f, 500f, false, true, 0) && func_225(IS_ENTITY_AT_COORD()) != 1) && !IS_ENTITY_AT_COORD(Global_2531497.f_859.f_7, 0))
					{
						vLocal_62[PARTICIPANT_ID_TO_INT() /*3*/] = 4;
					}
				}
				break;
			
			case 3:
				func_182(&(Local_60.f_9));
				if (func_181(&(Local_60.f_9)))
				{
					vLocal_62[PARTICIPANT_ID_TO_INT() /*3*/] = 4;
				}
				break;
			
			case 2:
				vLocal_62[PARTICIPANT_ID_TO_INT() /*3*/] = 4;
			
			case 4:
				func_226();
				break;
		}
		if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_210())
			{
				case 0:
					if (func_7())
					{
						Local_60 = 1;
					}
					break;
				
				case 1:
					func_6();
					func_5();
					if (func_1())
					{
						Local_60 = 4;
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
	if (Local_60.f_7 >= 32 && func_225(PLAYER_ID()) == 1)
	{
		if (func_4(Global_2531497.f_859.f_1))
		{
			return 1;
		}
	}
	if (func_3(PLAYER_ID()))
	{
		return 1;
	}
	if (Local_60.f_8 == 2)
	{
		return 1;
	}
	return 0;
}

int func_3(int iParam0)
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

int func_4(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_5()
{
	switch (Local_60.f_8)
	{
		case 0:
			if (!NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2) || Local_60.f_6 != -1)
			{
				Local_60.f_8 = 1;
			}
			break;
		
		case 1:
			Local_60.f_8 = 2;
			break;
		
		case 2:
			break;
	}
}

void func_6()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(iVar0)))
		{
			if (Local_60.f_6 == -1)
			{
				if (IS_BIT_SET(vLocal_62[iVar0 /*3*/].f_1, 0))
				{
					Local_60.f_6 = iVar0;
				}
			}
			if (!IS_BIT_SET(Local_60.f_1, 7))
			{
				if (IS_BIT_SET(vLocal_62[iVar0 /*3*/].f_1, 1))
				{
					SET_BIT(&(Local_60.f_1), 7);
				}
			}
		}
		iVar0++;
	}
}

int func_7()
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	int iVar6;
	struct<35> Var7;
	
	if (!NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2))
	{
		if (func_211())
		{
			if (0x42613035157E4208(1))
			{
				fVar3 = 250f;
				vVar4 = { Local_60.f_3 };
				if (IS_BIT_SET(Local_60.f_1, 8))
				{
					vVar0 = { Global_2531497.f_859.f_1 };
					fVar1 = Global_2531497.f_859.f_4;
				}
				if (func_225(PLAYER_ID()) == 7)
				{
					iVar6 = GET_PLAYER_TEAM(GET_PLAYER_TEAM());
					if (Global_4456448.f_106[iVar6 /*11610*/].f_1505[0 /*36*/].f_10 > 0f)
					{
						vVar4 = { Global_4456448.f_106[iVar6 /*11610*/].f_1505[0 /*36*/].f_3 };
						vVar5 = { Global_4456448.f_106[iVar6 /*11610*/].f_1505[0 /*36*/].f_6 };
						fVar3 = Global_4456448.f_106[iVar6 /*11610*/].f_1505[0 /*36*/].f_10;
						iVar2 = 1;
					}
					else if (Global_4456448.f_106[iVar6 /*11610*/].f_1505[0 /*36*/].f_9 > 0f)
					{
						vVar4 = { Global_4456448.f_106[iVar6 /*11610*/].f_1505[0 /*36*/] };
						fVar3 = Global_4456448.f_106[iVar6 /*11610*/].f_1505[0 /*36*/].f_9;
					}
				}
				Var7.f_5 = 1115815936;
				Var7.f_13 = 2;
				Var7.f_20 = 2;
				Var7.f_32 = -1082130432;
				Var7.f_34 = 1;
				Var7.f_4 = 1;
				Var7.f_5 = 30f;
				Var7.f_10 = 1;
				if (iVar2 == 0)
				{
					if (IS_BIT_SET(Local_60.f_1, 8) || func_180(vVar4, fVar3, &vVar0, &fVar1, &Var7))
					{
						if (Local_60.f_7 >= 32 || func_225(PLAYER_ID()) == 1)
						{
							Local_60.f_2 = OBJ_TO_NET(OBJ_TO_NET(joaat("pickup_portable_package"), vVar0, true, joaat("prop_drug_package_02")));
						}
						else
						{
							Local_60.f_2 = OBJ_TO_NET(OBJ_TO_NET(joaat("pickup_portable_package"), vVar0, 1, joaat("prop_drug_package_02")));
						}
						SET_ENTITY_HEADING(SET_ENTITY_HEADING(Local_60.f_2), fVar1);
					}
				}
				else if (IS_BIT_SET(Local_60.f_1, 8) || func_8(vVar4, vVar5, fVar3, &vVar0, &fVar1, Var7))
				{
					if (Local_60.f_7 >= 32 || func_225(PLAYER_ID()) == 1)
					{
						Local_60.f_2 = OBJ_TO_NET(OBJ_TO_NET(joaat("pickup_portable_package"), vVar0, true, joaat("prop_drug_package_02")));
					}
					else
					{
						Local_60.f_2 = OBJ_TO_NET(OBJ_TO_NET(joaat("pickup_portable_package"), vVar0, 1, joaat("prop_drug_package_02")));
					}
					SET_ENTITY_HEADING(SET_ENTITY_HEADING(Local_60.f_2), fVar1);
				}
			}
		}
	}
	if (NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2))
	{
		return 1;
	}
	return 0;
}

int func_8(vector3 vParam0, vector3 vParam1, float fParam2, var uParam3, float fParam4, struct<8> Param5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32)
{
	struct<17> Var0;
	struct<25> Var1;
	
	if (Param5.f_5 < 20f)
	{
		Param5.f_5 = 20f;
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var1.f_16 = 1;
	Var1.f_22 = 1;
	Var1.f_23 = 1;
	Var1.f_24 = 1;
	Var1.f_5 = 0;
	Var1.f_6 = 1;
	Var1.f_7 = 2;
	Var1.f_8 = { vParam0 };
	Var1.f_11 = { vParam1 };
	Var1.f_14 = fParam2;
	Var1.f_15 = 0;
	Var1.f_16 = 1;
	Var1.f_17 = 0;
	Param5.f_7 = 0;
	if (func_9(&Var1, &Param5, &Var0))
	{
		*uParam3 = { Var0[0 /*3*/] };
		*fParam4 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_9(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	int iVar9;
	vector3 vVar10;
	vector3 vVar11;
	var uVar12;
	bool bVar13;
	struct<56> Var14;
	bool bVar15;
	
	bVar13 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2405071.f_2456 == *uParam0 || !Global_2405071.f_2456.f_1 == uParam0->f_1) || !Global_2405071.f_2456.f_2 == uParam0->f_2) || !Global_2405071.f_2459 == uParam0->f_4)
			{
				bVar13 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2405071.f_2470 == uParam0->f_8 || !Global_2405071.f_2470.f_1 == uParam0->f_8.f_1) || !Global_2405071.f_2470.f_2 == uParam0->f_8.f_2) || !Global_2405071.f_2473 == uParam0->f_11) || !Global_2405071.f_2473.f_1 == uParam0->f_11.f_1) || !Global_2405071.f_2473.f_2 == uParam0->f_11.f_2)
			{
				bVar13 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2405071.f_2470 == uParam0->f_8 || !Global_2405071.f_2470.f_1 == uParam0->f_8.f_1) || !Global_2405071.f_2470.f_2 == uParam0->f_8.f_2) || !Global_2405071.f_2473 == uParam0->f_11) || !Global_2405071.f_2473.f_1 == uParam0->f_11.f_1) || !Global_2405071.f_2473.f_2 == uParam0->f_11.f_2) || !Global_2405071.f_2476 == uParam0->f_14)
			{
				bVar13 = true;
			}
			break;
	}
	if (bVar13)
	{
		if (Global_2405071.f_2454 == 1)
		{
			if (IS_THREAD_ACTIVE(Global_2405071.f_2463))
			{
				if (Global_2405071.f_2463 == GET_ID_OF_THIS_THREAD())
				{
					if (IS_TIME_EQUAL_TO(IS_TIME_EQUAL_TO(), Global_2405071.f_2460) < func_179(0))
					{
						return 0;
					}
				}
				else if (IS_TIME_EQUAL_TO(IS_TIME_EQUAL_TO(), Global_2405071.f_2460) < func_179(0))
				{
					return 0;
				}
			}
			_0x3C891A251567DFCE();
			_0xFEE4A5459472A9F8();
			func_178();
		}
		Global_2405071.f_2454 = 0;
	}
	else if (IS_TIME_EQUAL_TO(IS_TIME_EQUAL_TO(), Global_2405071.f_2460) > func_179(0))
	{
		Global_2405071.f_2461 = 0xBA7F0B77D80A4EB7();
		func_172();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar2 = (*uParam0 - uParam0->f_4);
			fVar3 = (uParam0->f_1 - uParam0->f_4);
			fVar4 = (*uParam0 + uParam0->f_4);
			fVar5 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = uParam0->f_8;
				fVar4 = uParam0->f_11;
			}
			else
			{
				fVar2 = uParam0->f_11;
				fVar4 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = uParam0->f_8.f_1;
				fVar5 = uParam0->f_11.f_1;
			}
			else
			{
				fVar3 = uParam0->f_11.f_1;
				fVar5 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar2 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar3 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	_0x07FB139B592FA687(fVar2, fVar3, fVar4, fVar5);
	if (uParam0->f_7 == 0)
	{
		vVar6 = { *uParam0 };
	}
	else
	{
		vVar6 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	vVar7 = { vVar6 + Vector(-0.1f, -0.1f, -0.1f) };
	vVar8 = { vVar6 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2405071.f_2454)
	{
		_0x3C891A251567DFCE();
		_0xFEE4A5459472A9F8();
		func_178();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (vmag(*uParam0) > 0f)
			{
				if (func_171(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!_0x3C67506996001F5E())
		{
			Global_2405071.f_2477 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2405071.f_2456 = { *uParam0 };
					Global_2405071.f_2459 = uParam0->f_4;
					break;
				
				case 1:
					Global_2405071.f_2470 = { uParam0->f_8 };
					Global_2405071.f_2473 = { uParam0->f_11 };
					Global_2405071.f_2476 = 0f;
					Global_2405071.f_2456 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2405071.f_2470 = { uParam0->f_8 };
					Global_2405071.f_2473 = { uParam0->f_11 };
					Global_2405071.f_2476 = uParam0->f_14;
					Global_2405071.f_2456 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_170(vVar6.x, vVar6.y);
			}
			Global_2405071.f_2455 = 1;
			Global_2405071.f_2454 = 1;
			Global_2405071.f_2461 = 0xBA7F0B77D80A4EB7();
			Global_2405071.f_2460 = 0xBA7F0B77D80A4EB7();
			Global_2405071.f_2463 = GET_ID_OF_THIS_THREAD();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2405071.f_2454)
	{
		if (Global_2405071.f_2455 == 1)
		{
			if (_0xF7B79A50B905A30D(fVar2, fVar3, fVar4, fVar5) || _0xF7B79A50B905A30D(_0xF7B79A50B905A30D(), Global_2405071.f_2461) > 5000)
			{
				Global_2405071.f_2461 = 0xBA7F0B77D80A4EB7();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { vVar6 };
					}
					Var14.f_6 = 1082130432;
					Var14.f_7 = 1176255488;
					Var14.f_8 = 1;
					Var14.f_10 = 1;
					Var14.f_13 = 1;
					Var14.f_15 = 1;
					Var14.f_16 = 1;
					Var14.f_31 = 1;
					Var14.f_34 = joaat("tailgater");
					Var14.f_38 = 2;
					Var14.f_45 = 2;
					Var14.f_49 = 1123024896;
					Var14.f_53 = 999;
					Var14.f_54 = 1176256410;
					Var14.f_55 = 1;
					Var14.f_56 = 1;
					Var14.f_57 = 1;
					Var14 = { *uParam1 };
					Var14.f_3 = uParam1->f_5;
					Var14.f_11 = uParam1->f_9;
					Var14.f_18 = 1;
					if (uParam1->f_32 > 0f)
					{
						Var14.f_6 = uParam1->f_32;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var14.f_19 = { *uParam0 };
							Var14.f_25 = uParam0->f_4;
							break;
						
						case 1:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = 0f;
							break;
						
						case 2:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = uParam0->f_14;
							break;
					}
					Var14.f_26 = uParam0->f_7;
					Var14.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var14.f_30 = 1;
						Var14.f_32 = 1;
					}
					iVar9 = 0;
					while (iVar9 < 2)
					{
						Var14.f_38[iVar9 /*3*/] = { uParam1->f_13[iVar9 /*3*/] };
						Var14.f_45[iVar9] = uParam1->f_20[iVar9];
						iVar9++;
					}
					Var14.f_51 = uParam1->f_30;
					Var14.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var14.f_10 = 0;
					}
					if (func_169(Global_4456448.f_190930))
					{
						Var14.f_9 = 1;
					}
					func_144(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var14);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_143(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2405071.f_2455 = 9;
				}
				else
				{
					Global_2405071.f_2455 = 2;
				}
			}
		}
		if (Global_2405071.f_2455 == 2)
		{
			if ((IS_NAVMESH_LOADED_IN_AREA(vVar7, vVar8) || IS_NAVMESH_LOADED_IN_AREA(IS_NAVMESH_LOADED_IN_AREA(), Global_2405071.f_2461) > 15000) || IS_NAVMESH_LOADED_IN_AREA(vVar7, vVar8) == 0)
			{
				Global_2405071.f_2461 = 0xBA7F0B77D80A4EB7();
				if (uParam0->f_5 && !func_140(PLAYER_ID(), 0))
				{
					Global_2405071.f_2455 = 3;
				}
				else
				{
					Global_2405071.f_2455 = 4;
				}
			}
			else if (IS_TIME_EQUAL_TO(IS_TIME_EQUAL_TO(), Global_2405071.f_2465) > 7000)
			{
				func_139(vVar6.x, vVar6.y);
			}
		}
		if (Global_2405071.f_2455 == 3)
		{
			if (func_138() || IS_TIME_EQUAL_TO(IS_TIME_EQUAL_TO(), Global_2405071.f_2461) > 10000)
			{
				Global_2405071.f_2461 = 0xBA7F0B77D80A4EB7();
				Global_2405071.f_2455 = 4;
			}
		}
		if (Global_2405071.f_2455 == 4)
		{
			if (_0x3C67506996001F5E())
			{
				_0x3C891A251567DFCE();
				_0xFEE4A5459472A9F8();
			}
			else
			{
				iVar0 = 0;
				func_172();
				if (uParam0->f_5)
				{
					if (vmag(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!GET_PLAYER_TEAM(GET_PLAYER_TEAM()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (_0xFB1F9381E80FA13F(_0xFB1F9381E80FA13F(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2405071.f_2461 = 0xBA7F0B77D80A4EB7();
								Global_2405071.f_2455 = 5;
							}
							break;
						
						case 1:
							func_137(uParam0->f_8, uParam0->f_11, &vVar10, &vVar11, &uVar12);
							if (_0x5A6FFA2433E2F14C(_0x5A6FFA2433E2F14C(), vVar10, vVar11, uVar12, *uParam1, iVar0))
							{
								Global_2405071.f_2461 = 0xBA7F0B77D80A4EB7();
								Global_2405071.f_2455 = 5;
							}
							break;
						
						case 2:
							if (_0x5A6FFA2433E2F14C(_0x5A6FFA2433E2F14C(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2405071.f_2461 = 0xBA7F0B77D80A4EB7();
								Global_2405071.f_2455 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2405071.f_2461 = 0xBA7F0B77D80A4EB7();
					Global_2405071.f_2455 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							_0x2DF9038C90AD5264(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_137(uParam0->f_8, uParam0->f_11, &vVar10, &vVar11, &uVar12);
							_0xB2AFF10216DEFA2F(vVar10, vVar11, uVar12, iVar0, 2f, 5000);
							break;
						
						case 2:
							_0xB2AFF10216DEFA2F(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2405071.f_2455 == 5)
		{
			if (func_63(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2405071.f_2481.f_5)
				{
					Global_2405071.f_2461 = 0xBA7F0B77D80A4EB7();
					Global_2405071.f_2455 = 6;
				}
				else
				{
					Global_2405071.f_2461 = 0xBA7F0B77D80A4EB7();
					if (!uParam0->f_5)
					{
						if (!vmag(*uParam1) == 0f)
						{
							vVar1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
						}
					}
					Global_2405071.f_2455 = 9;
				}
			}
			else if (IS_TIME_EQUAL_TO(IS_TIME_EQUAL_TO(), Global_2405071.f_2461) > 20000)
			{
				_0x3C891A251567DFCE();
				_0xFEE4A5459472A9F8();
				Global_2405071.f_2461 = 0xBA7F0B77D80A4EB7();
				Global_2405071.f_2455 = 8;
			}
		}
		if (Global_2405071.f_2455 == 6)
		{
			iVar0 = 0;
			Global_2405071.f_2481.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_62(uParam0->f_4))
				{
					if (IS_VALID_INTERIOR(IS_VALID_INTERIOR(vVar6)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_61(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (IS_VALID_INTERIOR(IS_VALID_INTERIOR(vVar6)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2405071.f_2461 = 0xBA7F0B77D80A4EB7();
			Global_2405071.f_2455 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					_0x2DF9038C90AD5264(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_137(uParam0->f_8, uParam0->f_11, &vVar10, &vVar11, &uVar12);
					_0xB2AFF10216DEFA2F(vVar10, vVar11, uVar12, iVar0, 2f, 5000);
					break;
				
				case 2:
					_0xB2AFF10216DEFA2F(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2405071.f_2455 == 7)
		{
			if (func_63(uParam2, uParam0, uParam1, 1))
			{
				if (vmag(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 3)
					{
						if (vmag(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!vmag(Global_2405071.f_2615[iVar9 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_143(Global_2405071.f_2615[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405071.f_2615[iVar9 /*3*/] };
										}
										break;
									
									case 1:
										if (func_59(Global_2405071.f_2615[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405071.f_2615[iVar9 /*3*/] };
										}
										break;
									
									case 2:
										if (IS_POINT_IN_ANGLED_AREA(Global_2405071.f_2615[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, true))
										{
											*(uParam2[0 /*3*/]) = { Global_2405071.f_2615[iVar9 /*3*/] };
										}
										break;
									}
								}
						}
						iVar9++;
					}
					if (vmag(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								vVar1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								vVar1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_12(&vVar1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { vVar1 };
					}
				}
				Global_2405071.f_2461 = 0xBA7F0B77D80A4EB7();
				if (!vmag(*uParam1) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 5)
					{
						vVar1 = { *uParam1 - *(uParam2[iVar9 /*3*/]) };
						uParam2->f_16[iVar9] = GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
						iVar9++;
					}
				}
				Global_2405071.f_2455 = 9;
			}
			else if (IS_TIME_EQUAL_TO(IS_TIME_EQUAL_TO(), Global_2405071.f_2461) > 20000)
			{
				Global_2405071.f_2461 = 0xBA7F0B77D80A4EB7();
				Global_2405071.f_2455 = 8;
			}
		}
		if (Global_2405071.f_2455 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_11(Global_2405071.f_484))
				{
				}
			}
			else if (Global_2405071.f_2481.f_2)
			{
				func_10(uParam2, &(Global_2405071.f_2481.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar15 = false;
				}
				else
				{
					bVar15 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2405071.f_2456 };
				func_12(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
			}
			Global_2405071.f_2461 = 0xBA7F0B77D80A4EB7();
			Global_2405071.f_2455 = 9;
		}
		if (Global_2405071.f_2455 == 9)
		{
			Global_2405071.f_2454 = 0;
			_0x3C891A251567DFCE();
			_0xFEE4A5459472A9F8();
			func_178();
			return 1;
		}
		Global_2405071.f_2460 = 0xBA7F0B77D80A4EB7();
	}
	return 0;
}

void func_10(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*10*/])->f_4 };
		uParam0->f_16[iVar0] = (uParam1[iVar0 /*10*/])->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0 /*10*/];
		iVar0++;
	}
}

int func_11(int iParam0)
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_12(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)
{
	vector3 vVar0;
	var uVar1;
	struct<56> Var2;
	var uVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	float fVar10;
	
	Var2.f_6 = 1082130432;
	Var2.f_7 = 1176255488;
	Var2.f_8 = 1;
	Var2.f_10 = 1;
	Var2.f_13 = 1;
	Var2.f_15 = 1;
	Var2.f_16 = 1;
	Var2.f_31 = 1;
	Var2.f_34 = joaat("tailgater");
	Var2.f_38 = 2;
	Var2.f_45 = 2;
	Var2.f_49 = 1123024896;
	Var2.f_53 = 999;
	Var2.f_54 = 1176256410;
	Var2.f_55 = 1;
	Var2.f_56 = 1;
	Var2.f_57 = 1;
	if (bParam1)
	{
		iVar6 = 0;
	}
	else
	{
		iVar6 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar6 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						vVar7 = { *uParam5 };
						if (func_62(uParam5->f_4) || !IS_VALID_INTERIOR(IS_VALID_INTERIOR(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 1:
						vVar7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_61(uParam5->f_8, uParam5->f_11, 0f) || !IS_VALID_INTERIOR(IS_VALID_INTERIOR(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 2:
						vVar7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_61(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !IS_VALID_INTERIOR(IS_VALID_INTERIOR(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar6 += 4;
		}
	}
	if (func_28(*uParam0, &vVar0, iVar6, iParam3, 1))
	{
	}
	else
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		vVar0 = { *uParam0 };
		Var2 = { *uParam6 };
		Var2.f_8 = 1;
		Var2.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var2.f_10 = 0;
		}
		else
		{
			Var2.f_10 = 1;
		}
		Var2.f_13 = uParam5->f_15;
		Var2.f_15 = iParam3;
		if (uParam6->f_32 > 0f)
		{
			Var2.f_6 = uParam6->f_32;
		}
		if (bParam4)
		{
			Var2.f_18 = 1;
			Var2.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var2.f_19 = { *uParam5 };
					Var2.f_25 = uParam5->f_4;
					break;
				
				case 1:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = 0f;
					break;
				
				case 2:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar4 = 0;
		while (iVar4 < 2)
		{
			Var2.f_38[iVar4 /*3*/] = { uParam6->f_13[iVar4 /*3*/] };
			Var2.f_45[iVar4] = uParam6->f_20[iVar4];
			iVar4++;
		}
		Var2.f_51 = uParam6->f_30;
		Var2.f_55 = uParam5->f_16;
		if (func_24(PLAYER_ID(), 0))
		{
			Var2.f_9 = 1;
		}
		func_144(&vVar0, &uVar1, &Var2);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				vVar8 = { *uParam5 };
				fVar10 = uParam5->f_4;
				break;
			
			case 1:
				vVar8 = { uParam5->f_8 };
				vVar9 = { uParam5->f_11 };
				break;
			
			case 2:
				vVar8 = { uParam5->f_8 };
				vVar9 = { uParam5->f_11 };
				fVar10 = uParam5->f_14;
				break;
		}
		if (!func_23(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
		{
			if (func_28(*uParam0, &vVar0, iVar6, iParam3, 0))
			{
				if (!func_23(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						vVar0 = { vVar8 + vVar9 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						vVar0 = { vVar8 };
					}
					if (GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, 0, 0))
					{
						vVar0.z = uVar3;
					}
				}
			}
			else if (func_13(uParam0, 1, 1, 1, 1))
			{
				func_12(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					vVar0 = { vVar8 + vVar9 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					vVar0 = { vVar8 };
				}
				if (GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, 0, 0))
				{
					vVar0.z = uVar3;
				}
			}
		}
	}
	*uParam0 = { vVar0 };
	Global_2405071.f_659 = 1;
}

int func_13(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409979[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409979[iVar0 /*17*/].f_16))
			{
				if (func_22(*uParam0, &(Global_2409979[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2409979[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409979[iVar0 /*17*/].f_13 };
						}
						else
						{
							vVar1 = { *uParam0 };
							func_14(&vVar1, &(Global_2409979[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_13(&vVar1, 0, 0, 0, 1))
							{
								vVar1 = { *uParam0 };
								func_14(&vVar1, &(Global_2409979[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { vVar1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_14(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_21(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405071.f_2724) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_21(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_21(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_19(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405071.f_2724) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_18(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_15(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_15(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3, float fParam4, bool bParam5)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	float fVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	vector3 vVar11;
	
	vVar0 = { vParam2 - vParam1 };
	vVar0.z = 0f;
	vVar1 = { *uParam0 - vParam1 };
	vVar1.z = 0f;
	vVar2 = { func_17(0f, 0f, 1f, vVar0) };
	vVar2 = { vVar2 / FtoV(vmag(vVar2)) };
	fVar3 = (vmag(vVar1) * sin(GET_ANGLE_BETWEEN_2D_VECTORS(vVar0.x, vVar0.y, vVar1.x, vVar1.y)));
	if (fVar3 < (fParam3 * 0.5f))
	{
		if (!bParam5)
		{
			if (func_16(vVar2, vVar1) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_16(vVar2, vVar1) >= 0f)
		{
			vVar2 = { vVar2 * FtoV(((((fParam3 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			vVar2 = { vVar2 * FtoV((((fParam3 * 0.5f) + fVar3) + fParam4)) };
		}
		vVar4 = { *uParam0 + vVar2 };
		fVar6 = vdist(vParam1.x, vParam1.y, 0f, vParam2.x, vParam2.y, 0f);
		vVar7 = { vParam1 + vParam2 / Vector(2f, 2f, 2f) };
		vVar7.z = 0f;
		vVar2 = { func_17(0f, 0f, 1f, vVar0) };
		vVar2 = { vVar2 / FtoV(vmag(vVar2)) };
		vVar2 = { vVar2 * FtoV((fParam3 * 0.5f)) };
		vVar8 = { vVar7 - vVar2 };
		vVar9 = { vVar7 + vVar2 };
		vVar10 = { vVar9 - vVar8 };
		vVar10.z = 0f;
		vVar11 = { *uParam0 - vVar8 };
		vVar11.z = 0f;
		vVar2 = { func_17(0f, 0f, 1f, vVar10) };
		vVar2 = { vVar2 / FtoV(vmag(vVar2)) };
		fVar3 = (vmag(vVar11) * sin(GET_ANGLE_BETWEEN_2D_VECTORS(vVar10.x, vVar10.y, vVar11.x, vVar11.y)));
		if (!bParam5)
		{
			if (func_16(vVar2, vVar11) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_16(vVar2, vVar11) >= 0f)
		{
			vVar2 = { vVar2 * FtoV(((((fVar6 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			vVar2 = { vVar2 * FtoV((((fVar6 * 0.5f) + fVar3) + fParam4)) };
		}
		vVar5 = { *uParam0 + vVar2 };
		if (vdist(vVar4, *uParam0, uParam0->f_1, 0f) < vdist(vVar5, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { vVar4 };
		}
		else
		{
			*uParam0 = { vVar5 };
		}
	}
}

float func_16(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_17(vector3 vParam0, vector3 vParam1)
{
	return ((vParam0.y * vParam1.z) - (vParam0.z * vParam1.y)), ((vParam0.z * vParam1.x) - (vParam0.x * vParam1.z)), ((vParam0.x * vParam1.y) - (vParam0.y * vParam1.x));
}

void func_18(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	vVar0 = { *uParam0 };
	fVar1 = (*uParam0 - Param1);
	fVar2 = (*uParam0 - Param3);
	if (fVar1 < fVar2)
	{
		fVar3 = fVar1;
	}
	else
	{
		fVar3 = fVar2;
	}
	fVar4 = (uParam0->f_1 - Param1.f_1);
	fVar5 = (uParam0->f_1 - Param3.f_1);
	if (fVar4 < fVar5)
	{
		fVar6 = fVar4;
	}
	else
	{
		fVar6 = fVar5;
	}
	vVar0 = { *uParam0 };
	if (!bParam6)
	{
		if (fVar3 < fVar6)
		{
			if (fVar1 < fVar2)
			{
				vVar0.x = (Param1 - fParam5);
			}
			else
			{
				vVar0.x = (Param3 + fParam5);
			}
		}
		else if (fVar4 < fVar5)
		{
			vVar0.y = (Param1.f_1 - fParam5);
		}
		else
		{
			vVar0.y = (Param3.f_1 + fParam5);
		}
	}
	else if (fVar3 < fVar6)
	{
		if (fVar1 < fVar2)
		{
			vVar0.x = (Param3 + fParam5);
		}
		else
		{
			vVar0.x = (Param1 - fParam5);
		}
	}
	else if (fVar4 < fVar5)
	{
		vVar0.y = (Param3.f_1 + fParam5);
	}
	else
	{
		vVar0.y = (Param1.f_1 - fParam5);
	}
	*uParam0 = { vVar0 };
}

void func_19(var uParam0, vector3 vParam1, float fParam2, float fParam3, bool bParam4, float fParam5)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { *uParam0 - vParam1 };
	vVar0.z = 0f;
	if (vmag(vVar0) > 0f)
	{
		vVar0 = { vVar0 / FtoV(vmag(vVar0)) };
	}
	else
	{
		vVar0 = { 0f, 1f, 0f };
		if (fParam5 == 0f)
		{
			func_20(&vVar0, 0f, 0f, GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		}
		else
		{
			func_20(&vVar0, 0f, 0f, fParam5);
		}
	}
	vVar0 = { vVar0 * FtoV((fParam2 + fParam3)) };
	if (!bParam4)
	{
		vVar1 = { vParam1 + vVar0 };
	}
	else
	{
		vVar1 = { vParam1 - vVar0 };
	}
	*uParam0 = vVar1.x;
	uParam0->f_1 = vVar1.y;
}

void func_20(var uParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	fVar0 = cos(vParam1.x);
	fVar1 = sin(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.y = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.z = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = cos(vParam1.y);
	fVar1 = sin(vParam1.y);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.y = uParam0->f_1;
	vVar2.z = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = cos(vParam1.z);
	fVar1 = sin(vParam1.z);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.y = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.z = uParam0->f_2;
	*uParam0 = { vVar2 };
}

Vector3 func_21(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3, int iParam4, float fParam5, bool bParam6)
{
	int iVar0;
	vector3 vVar1;
	
	switch (iParam4)
	{
		case 0:
			func_19(&vParam0, vParam1, fParam3, fParam5, bParam6, 0);
			break;
		
		case 1:
			func_18(&vParam0, vParam1, vParam2, fParam5, bParam6);
			break;
		
		case 2:
			func_15(&vParam0, vParam1, vParam2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		GET_NTH_CLOSEST_VEHICLE_NODE(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!func_143(vVar1, vParam1, fParam3, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 1:
				if (!func_59(vVar1, vParam1, vParam2, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 2:
				if (!IS_POINT_IN_ANGLED_AREA(vVar1, vParam1, vParam2, fParam3, 0, true))
				{
					return vVar1;
				}
				break;
		}
		iVar0++;
	}
	return vParam0;
}

int func_22(vector3 vParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	switch (uParam1->f_10)
	{
		case 0:
			return func_143(vParam0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2405071.f_2724) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 1:
			return func_59(vParam0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
			break;
		
		case 2:
			if (bParam3 && bParam4)
			{
				return IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, false);
			}
			else if (bParam3)
			{
				if (IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, false) && !(vParam0.z < uParam1->f_2 && vParam0.z < uParam1->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam4)
			{
				if (IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, false) && !(vParam0.z > uParam1->f_2 && vParam0.z > uParam1->f_3.f_2))
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
				return IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, true);
			}
			break;
	}
	return 0;
}

int func_23(vector3 vParam0, int iParam1, vector3 vParam2, vector3 vParam3, float fParam4)
{
	switch (iParam1)
	{
		case 0:
			if (vdist(vParam0, vParam2) <= fParam4)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_59(vParam0, vParam2, vParam3, 0, 0);
			break;
		
		case 2:
			return IS_POINT_IN_ANGLED_AREA(vParam0, vParam2, vParam3, fParam4, 0, true);
			break;
	}
	return 0;
}

int func_24(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
		{
			iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
			if (GET_ENTITY_MODEL(iVar0) == -1988428699)
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_27())
	{
		if (func_26(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_27())
			{
				return func_25(Global_2424073[iParam0 /*421*/].f_309.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_25(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
			return 3;
			break;
		
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
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
	}
	return -1;
}

int func_26(int iParam0, bool bParam1, bool bParam2)
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

int func_27()
{
	return -1;
}

int func_28(vector3 vParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_58(vParam0, uParam1))
	{
		if (func_29(vParam0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (GET_SAFE_COORD_FOR_PED(vParam0, 0, uParam1, iParam2))
	{
		if (func_29(vParam0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_29(vector3 vParam0, var uParam1, int iParam2, bool bParam3)
{
	float fVar0;
	var uVar1;
	var uVar2;
	
	fVar0 = vdist(vParam0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !func_45(Global_2405071.f_507, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
		{
			if (!func_33(*uParam1, 1056964608))
			{
				if (!func_30(uParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_30(var uParam0, bool bParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar1 = { *uParam0 };
	iVar2 = func_32(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411454[iVar2])
	{
		if (func_31(vVar1, &(Global_2410184[iVar2 /*141*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_15(&vVar1, Global_2410184[iVar2 /*141*/][iVar0 /*7*/], Global_2410184[iVar2 /*141*/][iVar0 /*7*/].f_3, Global_2410184[iVar2 /*141*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411454[8])
	{
		if (func_31(vVar1, &(Global_2410184[8 /*141*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_15(&vVar1, Global_2410184[8 /*141*/][iVar0 /*7*/], Global_2410184[8 /*141*/][iVar0 /*7*/].f_3, Global_2410184[8 /*141*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_31(vector3 vParam0, var uParam1)
{
	return IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, true);
}

int func_32(struct<2> Param0, var uParam1)
{
	if (Param0.f_1 > Global_2411464[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2411464[1])
	{
		if (Param0 < Global_2411468[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2411464[2])
	{
		if (Param0 < Global_2411468[1])
		{
			return 3;
		}
		else if (Param0 < Global_2411468[2])
		{
			return 4;
		}
		else if (Param0 < Global_2411468[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_33(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	if (func_42(PLAYER_ID(), 1, 0))
	{
		if (Global_4456448.f_69120 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_69120)
			{
				if (Global_4456448.f_69121[iVar0 /*84*/].f_7 != 0)
				{
					if (func_34(vParam0, Global_4456448.f_69121[iVar0 /*84*/], Global_4456448.f_69121[iVar0 /*84*/].f_6, Global_4456448.f_69121[iVar0 /*84*/].f_7, fParam1))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_60688 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_60688)
			{
				if (Global_4456448.f_60691[iVar0 /*219*/].f_18 != 0)
				{
					if (func_34(vParam0, Global_4456448.f_60691[iVar0 /*219*/], Global_4456448.f_60691[iVar0 /*219*/].f_3, Global_4456448.f_60691[iVar0 /*219*/].f_18, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_92411 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_92411)
			{
				if (Global_4456448.f_92415[iVar0 /*282*/].f_12 != 0)
				{
					if (func_34(vParam0, Global_4456448.f_92415[iVar0 /*282*/], Global_4456448.f_92415[iVar0 /*282*/].f_3, Global_4456448.f_92415[iVar0 /*282*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969029.f_267 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969029.f_267)
			{
				if (DOES_ENTITY_EXIST(Global_969029.f_232[iVar0]) && !DOES_ENTITY_EXIST(Global_969029.f_232[iVar0], 0))
				{
					if (func_34(vParam0, GET_ENTITY_COORDS(Global_969029.f_232[iVar0], true), GET_ENTITY_COORDS(Global_969029.f_232[iVar0]), GET_ENTITY_COORDS(Global_969029.f_232[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969029.f_265 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969029.f_265)
			{
				if (DOES_ENTITY_EXIST(Global_969029.f_118[iVar0]) && !DOES_ENTITY_EXIST(Global_969029.f_118[iVar0], 0))
				{
					if (func_34(vParam0, GET_ENTITY_COORDS(Global_969029.f_118[iVar0], true), GET_ENTITY_COORDS(Global_969029.f_118[iVar0]), GET_ENTITY_COORDS(Global_969029.f_118[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_34(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3, float fParam4)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (vdist(vParam0, vParam1) < func_41(iParam3, 1008981770))
	{
		func_35(vParam1, fParam2, iParam3, &vVar0, &vVar1, &fVar2, fParam4);
		if (IS_POINT_IN_ANGLED_AREA(vParam0, vVar0, vVar1, fVar2, 0, true))
		{
			return 1;
		}
	}
	return 0;
}

void func_35(vector3 vParam0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	vVar0 = { 0f, 1f, 0f };
	func_20(&vVar0, 0f, 0f, fParam1);
	vVar0 = { vVar0 / FtoV(vmag(vVar0)) };
	func_36(iParam2, &vVar1, &vVar2, 1086324736, 1080033280, 1077936128);
	vVar3 = { vParam0 + vVar0 * FtoV((vVar2.y + fParam6)) };
	vVar3.z = (vVar3.z - ((0.5f * ABSF((vVar2.z - vVar1.z))) + fParam6));
	vVar4 = { vParam0 - vVar0 * FtoV(((vVar1.y * -1f) + fParam6)) };
	vVar4.z = (vVar4.z + ((0.5f * ABSF((vVar2.z - vVar1.z))) + fParam6));
	*uParam3 = { vVar3 };
	*uParam4 = { vVar4 };
	*uParam5 = ABSF((vVar2.x - vVar1.x));
}

void func_36(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (IS_MODEL_VALID(iParam0))
	{
		GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_39(iParam0);
		if (iVar0 != 0)
		{
			func_37(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (vmag(*uParam1) <= 0.01f || vmag(*uParam2) <= 0.01f)
	{
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_37(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_38(iParam0, &Global_1315808);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (IS_MODEL_VALID(Global_1315808[iVar0]))
		{
			GET_MODEL_DIMENSIONS(Global_1315808[iVar0], &(Global_1315812[iVar0 /*3*/]), &(Global_1315819[iVar0 /*3*/]));
		}
		if (vmag(Global_1315812[iVar0 /*3*/]) <= 0.01f || vmag(Global_1315819[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315812[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315819[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315812[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315819[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315812[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315819[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315826[iVar0] = (Global_1315819[iVar0 /*3*/] - Global_1315812[iVar0 /*3*/]);
		Global_1315829[iVar0] = (Global_1315819[iVar0 /*3*/].f_1 - Global_1315812[iVar0 /*3*/].f_1);
		Global_1315832[iVar0] = (Global_1315819[iVar0 /*3*/].f_2 - Global_1315812[iVar0 /*3*/].f_2);
		if (Global_1315826[iVar0] > Global_1315835)
		{
			Global_1315835 = Global_1315826[iVar0];
		}
		if (Global_1315832[iVar0] > Global_1315836)
		{
			Global_1315836 = Global_1315832[iVar0];
		}
		iVar0++;
	}
	Global_1315837 = (Global_1315835 * -0.5f);
	Global_1315840 = (Global_1315835 * 0.5f);
	Global_1315837.f_1 = ((((0.5f * Global_1315829[0]) + Global_1315829[1]) + Global_1315808.f_3) * -1f);
	Global_1315840.f_1 = (0.5f * Global_1315829[0]);
	Global_1315837.f_2 = (Global_1315832[0] * -0.5f);
	Global_1315840.f_2 = (Global_1315832[0] * 0.5f);
	*uParam1 = { Global_1315837 };
	*uParam2 = { Global_1315840 };
}

void func_38(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = 387748548;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = 177270108;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = 433954513;
			(*uParam1)[1] = -1881846085;
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_40(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_40(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

float func_41(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_36(iParam0, &vVar0, &vVar1, 1086324736, 1080033280, 1077936128);
	vVar2 = { vVar1 - vVar0 };
	fVar3 = (sqrt(((((vVar2.x * 0.5f) * (vVar2.x * 0.5f)) + ((vVar2.y * 0.5f) * (vVar2.y * 0.5f))) + ((vVar2.z * 0.5f) * (vVar2.z * 0.5f)))) + fParam1);
	return fVar3;
}

int func_42(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_43(iParam0))
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

bool func_43(int iParam0)
{
	return func_44(iParam0);
}

bool func_44(int iParam0)
{
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_13.f_1, 0);
}

int func_45(vector3 vParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	
	if (func_52(vParam0))
	{
		if (func_13(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (func_47(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (func_46(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (vdist(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				func_19(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_46(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (vdist(vParam0, Global_2405071.f_2726[iVar0 /*3*/]) < fParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_47(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	
	if (func_49(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			vVar2 = { *uParam0 };
			func_14(&vVar2, &(Global_2405071.f_363[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_49(vVar2, &uVar1) || func_48(vVar2))
			{
				vVar2 = { *uParam0 };
				func_14(&vVar2, &(Global_2405071.f_363[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { vVar2 };
		}
		return 1;
	}
	return 0;
}

int func_48(vector3 vParam0)
{
	float fVar0;
	
	if (Global_2405071.f_588 > 0f)
	{
		fVar0 = vdist(vParam0, Global_2405071.f_585);
		if (fVar0 < Global_2405071.f_588)
		{
			return 1;
		}
	}
	return 0;
}

int func_49(vector3 vParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_51())
	{
		return 0;
	}
	iVar1 = func_50();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405071.f_363[iVar0 /*12*/].f_9 == 1)
		{
			if (func_22(vParam0, &(Global_2405071.f_363[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_50()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405071.f_363[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_51()
{
	return Global_1676879.f_443;
}

int func_52(vector3 vParam0)
{
	int iVar0;
	vector3 vVar1;
	
	if (!Global_2405071.f_510 && !Global_2405071.f_511)
	{
		if (!Global_2405071.f_45.f_314)
		{
			if (!func_56(PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!func_55(vParam0, 1008981770))
			{
				if (!func_13(&vParam0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_13(&vParam0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_54(vParam0, 1008981770);
				if (iVar0 > -1)
				{
					vVar1 = { func_53(&(Global_2405071.f_45[iVar0 /*12*/])) };
					if (!func_13(&vVar1, 0, 0, 0, 1))
					{
						if (!func_13(&vParam0, 0, 0, 0, 1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_53(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_54(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405071.f_45[iVar0 /*12*/].f_9)
		{
			if (func_22(vParam0, &(Global_2405071.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_55(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405071.f_45[iVar0 /*12*/].f_9)
		{
			if (func_22(vParam0, &(Global_2405071.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_56(int iParam0, bool bParam1)
{
	if (Global_1312448 != 0)
	{
		return func_57(iParam0) != 0;
	}
	return func_42(iParam0, bParam1, 0);
}

int func_57(int iParam0)
{
	if (func_26(iParam0, 0, 1))
	{
		return Global_2424073[iParam0 /*421*/].f_1;
	}
	return 0;
}

int func_58(vector3 vParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2405071.f_2252 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405071.f_2252)
		{
			fVar3 = vdist(Global_2405071.f_2253[iVar0 /*4*/], vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam1 = { Global_2405071.f_2253[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_59(vector3 vParam0, vector3 vParam1, vector3 vParam2, bool bParam3, bool bParam4)
{
	func_60(&vParam1, &vParam2);
	if (((!vParam0.x >= vParam1.x || !vParam0.y >= vParam1.y) || !vParam0.x <= vParam2.x) || !vParam0.y <= vParam2.y)
	{
		return 0;
	}
	if (bParam3 && bParam4)
	{
		return 1;
	}
	else if (bParam3)
	{
		if (vParam0.z >= vParam1.z)
		{
			return 1;
		}
	}
	else if (bParam4)
	{
		if (vParam0.z <= vParam2.z)
		{
			return 1;
		}
	}
	else if (vParam0.z >= vParam1.z && vParam0.z <= vParam2.z)
	{
		return 1;
	}
	return 0;
}

void func_60(var uParam0, var uParam1)
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

int func_61(vector3 vParam0, vector3 vParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (vParam0.x > vParam1.x)
	{
		vVar1.x = vParam0.x;
		vVar0.x = vParam1.x;
	}
	else
	{
		vVar1.x = vParam1.x;
		vVar0.x = vParam0.x;
	}
	if (vParam0.y > vParam1.y)
	{
		vVar1.y = vParam0.y;
		vVar0.y = vParam1.y;
	}
	else
	{
		vVar1.y = vParam1.y;
		vVar0.y = vParam0.y;
	}
	if (vParam0.z > vParam1.z)
	{
		vVar1.z = vParam0.z;
		vVar0.z = vParam1.z;
	}
	else
	{
		vVar1.z = vParam1.z;
		vVar0.z = vParam0.z;
	}
	if (vmag(vVar1 - vVar0) > 100f)
	{
		return 1;
	}
	if (fParam2 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_62(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_63(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	if (Global_2405071.f_2481.f_1 == 0 && Global_2405071.f_2481 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (_0x4BA92A18502BCA61(&(Global_2405071.f_2481.f_1)))
			{
				case 0:
					func_135(uParam1, uParam2);
					if (!Global_2405071.f_2481.f_2)
					{
						if (uParam2->f_7 && Global_2405071.f_550.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2405071.f_2456 };
							}
							if (uParam1->f_5 && func_11(Global_2405071.f_484))
							{
								if (!Global_2405071.f_2481.f_5)
								{
									Global_2405071.f_2481.f_5 = 1;
								}
								else
								{
									func_12(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_12(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_135(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (_0x3C67506996001F5E())
		{
			if (!_0xF445DE8DA80A1792())
			{
				if (_0xA586FBEB32A53DBB())
				{
					func_135(uParam1, uParam2);
					Global_2405071.f_2481.f_1 = _0xA635C11B8C44AFC2();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				_0xFEE4A5459472A9F8();
				func_135(uParam1, uParam2);
				if (!Global_2405071.f_2481.f_2)
				{
					Global_2405071.f_2481.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_132(Global_2405071.f_550, &(Global_2405071.f_2481.f_57), &(Global_2405071.f_2481.f_90));
	}
	if (uParam2->f_7 && !Global_2405071.f_2481.f_4)
	{
		Global_2405071.f_2481.f_4 = 1;
		func_71(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar4 = 0;
	if (uParam1->f_5)
	{
		iVar5 = 64;
	}
	else
	{
		iVar5 = 32;
	}
	if (Global_2405071.f_2481.f_1 > 0 || Global_2405071.f_2481 > 0)
	{
		if (uParam1->f_5 || _0x3C67506996001F5E())
		{
			iVar2 = 0;
			while (iVar2 < Global_2405071.f_2481.f_1)
			{
				if (iVar4 < iVar5)
				{
					if (iVar2 <= Global_2405071.f_2481.f_3)
					{
						iVar2 = Global_2405071.f_2481.f_3 + 1;
					}
					if (iVar2 > (Global_2405071.f_2481.f_1 - 1))
					{
						iVar2 = (Global_2405071.f_2481.f_1 - 1);
					}
					if (iVar2 < 0)
					{
						iVar2 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						_0xFB8F2A6F3DF08CBE(iVar2, &vVar0, &fVar1);
						fVar1 = (fVar1 * 57.29578f);
					}
					else
					{
						_0x280C7E3AC7F56E90(iVar2, &vVar0, &(vVar0.f_1), &(vVar0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar3 = NETWORK_GET_RESPAWN_RESULT(iVar2);
					}
					else
					{
						_0xB782F8238512BAD5(iVar2, &iVar3);
					}
					func_71(vVar0, fVar1, uParam1, uParam2, 0, iVar3);
					iVar4++;
					Global_2405071.f_2481.f_3 = iVar2;
				}
				else
				{
					return 0;
				}
				iVar2++;
			}
		}
		else
		{
			iVar2 = Global_2405071.f_2481.f_1;
		}
		if (Global_2405071.f_2481.f_1 == iVar2)
		{
			if (uParam1->f_5 && Global_2405071.f_2878)
			{
				func_65(&(Global_2405071.f_2481.f_6[0 /*10*/]), &(Global_2405071.f_2481.f_6[1 /*10*/]), &(Global_2405071.f_2481.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && func_11(Global_2405071.f_484))
			{
				if (Global_2405071.f_2481.f_2)
				{
					func_10(uParam0, &(Global_2405071.f_2481.f_6));
					func_64(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405071.f_2456 };
					func_12(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_64(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2405071.f_2481.f_2)
			{
				func_10(uParam0, &(Global_2405071.f_2481.f_6));
				func_64(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar2 = GET_RANDOM_INT_IN_RANGE(0, Global_2405071.f_2481.f_1);
				_0xFB8F2A6F3DF08CBE(iVar2, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_30(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					func_64(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405071.f_2456 };
					func_12(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_64(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2405071.f_2456 };
				func_12(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				func_64(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2405071.f_2456 };
		if (uParam1->f_5 && func_11(Global_2405071.f_484))
		{
			if (!Global_2405071.f_2481.f_5)
			{
				Global_2405071.f_2481.f_5 = 1;
			}
			else
			{
				func_12(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar6 = false;
			}
			else
			{
				bVar6 = true;
			}
			func_12(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		func_64(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_64(vector3 vParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2405071.f_2615[(3 - iVar0) /*3*/] = { Global_2405071.f_2615[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2405071.f_2615[0 /*3*/] = { vParam0 };
}

void func_65(var uParam0, var uParam1, var uParam2)
{
	if (func_11(Global_2405071.f_484) && func_70() < 4096)
	{
		func_69(uParam0, 0f);
		func_69(uParam1, uParam0->f_2);
		func_69(uParam2, uParam1->f_2);
	}
	else
	{
		func_68(uParam0);
		func_67(uParam2, uParam0->f_4);
		func_66(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_66(var uParam0, vector3 vParam1, vector3 vParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<10> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408003[iVar0 /*10*/] > 0)
		{
			fVar2 = vdist(Global_2408003[iVar0 /*10*/].f_4, vParam1);
			fVar3 = vdist(Global_2408003[iVar0 /*10*/].f_4, vParam2);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2408003[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2408003[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_67(var uParam0, vector3 vParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<10> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408003[iVar0 /*10*/] > 0)
		{
			fVar2 = vdist(Global_2408003[iVar0 /*10*/].f_4, vParam1);
			fVar2 = (fVar2 * Global_2408003[iVar0 /*10*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2408003[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_68(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408003[iVar0 /*10*/] > 0)
		{
			if (Global_2408003[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_2408003[iVar0 /*10*/].f_1;
				Var2 = { Global_2408003[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_69(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408003[iVar0 /*10*/] > 0)
		{
			if (Global_2408003[iVar0 /*10*/].f_2 < fVar1 && Global_2408003[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_2408003[iVar0 /*10*/].f_2;
				Var2 = { Global_2408003[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_70()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408003[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_2408003[iVar0 /*10*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_71(vector3 vParam0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	bool bVar13;
	int iVar14;
	vector3 vVar15;
	vector3 vVar16;
	float fVar17;
	int iVar18;
	struct<10> Var19;
	bool bVar20;
	bool bVar21;
	
	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam2->f_5)
	{
		if (Global_2405071.f_484 == 1)
		{
			if (ABSF((Global_2405071.f_507.f_2 - vParam0.z)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam2->f_5)
	{
		if (func_128(PLAYER_ID()))
		{
			if (iParam5 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam5 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam5 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam5 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam2->f_5 && uParam2->f_6)
	{
		if (!func_127(vParam0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam2->f_5)
	{
		if (!_0x68772DB2B2526F9F(_0x68772DB2B2526F9F(), vParam0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!_0x68772DB2B2526F9F(_0x68772DB2B2526F9F(), vParam0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam2->f_5)
	{
		if (!func_126(vParam0, uParam3->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar13 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (vmag(uParam3->f_13[iVar11 /*3*/]) > 0f)
		{
			if (!vdist(vParam0, uParam3->f_13[iVar11 /*3*/]) > uParam3->f_20[iVar11])
			{
				bVar13 = false;
			}
		}
		iVar11++;
	}
	if (bVar13)
	{
		if ((vmag(uParam3->f_23) > 0f && vmag(uParam3->f_26) > 0f) && uParam3->f_29 > 0f)
		{
			if (IS_POINT_IN_ANGLED_AREA(vParam0, uParam3->f_23, uParam3->f_26, uParam3->f_29, 0, true))
			{
				bVar13 = false;
			}
		}
	}
	if (bVar13)
	{
		iVar8 += 256;
	}
	if (uParam2->f_5)
	{
		if (func_120(vParam0, fParam1, uParam2->f_15, func_125(1), uParam2->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2405071.f_3;
		}
	}
	else if (!func_117(vParam0, 25f, PLAYER_ID(), 1, 1))
	{
		if (uParam2->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_114(vParam0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_114(vParam0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2405071.f_691)
		{
			vVar12 = { Global_2405071.f_507 };
			if (Global_2405071.f_484 == 26)
			{
				vVar12 = { Global_2405071.f_550.f_18 };
			}
			if (!func_46(vParam0, 0.5f))
			{
				if (func_52(vVar12))
				{
					if (!func_13(&vParam0, 0, 0, 0, 1) && !func_113(&vParam0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_113(&vParam0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!func_112(vParam0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam2->f_5)
	{
		if (!(func_111(PLAYER_ID()) && func_109(PLAYER_ID())))
		{
			if (!func_108(&vParam0, &(Global_2405071.f_2481.f_90), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam2->f_5)
	{
		if (!func_109(PLAYER_ID()))
		{
			if (!func_107(vParam0, &(Global_2405071.f_2481.f_57), &(Global_2405071.f_2481.f_90), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (func_106(vParam0))
	{
		if (uParam2->f_5)
		{
			if (func_11(Global_2405071.f_484))
			{
				if (func_55(vParam0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam2->f_5)
	{
		if (func_105(vParam0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2405071.f_45.f_55)
	{
		iVar8 += 16384;
	}
	else if (uParam2->f_5)
	{
		if (!iParam5 & 1 == 0)
		{
			if (IS_VALID_INTERIOR(IS_VALID_INTERIOR(vParam0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam5 & 2 == 0)
	{
		if (IS_VALID_INTERIOR(IS_VALID_INTERIOR(vParam0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2405071.f_691)
		{
			if (!func_47(&vParam0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!func_30(&vParam0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar14 = func_54(vParam0, 1008981770);
		if (iVar14 > -1)
		{
			func_104(vParam0, &vVar15, &vVar16, &fVar17);
			if (!func_99(&(Global_2405071.f_45[iVar14 /*12*/]), vVar15, vVar16, fVar17))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (func_33(vParam0, 1056964608))
	{
		iVar8 = -1;
	}
	if (uParam3->f_33)
	{
		if (IS_ANY_PED_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), 0.3f))
		{
			iVar8 = -1;
		}
	}
	if (uParam3->f_34)
	{
		if (IS_ANY_VEHICLE_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (uParam2->f_5)
	{
	}
	else if (func_98(vParam0, 1, 0, uParam2->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var19.f_2 = 1176256410;
	bVar20 = false;
	bVar21 = false;
	if (Global_2405071.f_2878 && uParam2->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam4)
			{
				uParam3->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam2->f_21)
			{
				fVar0 = func_90(vParam0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = func_90(vParam0, Global_2405071.f_2456, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_11(Global_2405071.f_484) && iVar8 < 4096)
			{
				Var19.f_2 = func_88(vParam0);
			}
			uVar7 = func_77(vParam0, 1, 0, 0, 0, 0);
			Var19.f_4 = { vParam0 };
			Var19.f_7 = fParam1;
			Var19 = iVar8;
			Var19.f_1 = fVar0;
			Var19.f_9 = uVar7;
			func_76(Var19);
			Global_2405071.f_2481.f_2 = 1;
		}
	}
	else
	{
		iVar18 = 0;
		while (iVar18 < 5)
		{
			if (iVar8 >= Global_2405071.f_2481.f_6[iVar18 /*10*/])
			{
				if (uParam2->f_5)
				{
					if (!bVar20)
					{
						if (bParam4)
						{
							uParam3->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam2->f_21)
						{
							fVar0 = func_90(vParam0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = func_90(vParam0, Global_2405071.f_2456, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar20 = true;
					}
					if ((func_11(Global_2405071.f_484) && iVar8 == Global_2405071.f_2481.f_6[iVar18 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar21)
						{
							fVar2 = func_88(vParam0);
							bVar21 = true;
						}
						if (fVar2 < Global_2405071.f_2481.f_6[iVar18 /*10*/].f_2)
						{
							Var19.f_4 = { vParam0 };
							Var19.f_7 = fParam1;
							Var19 = iVar8;
							Var19.f_1 = fVar0;
							Var19.f_2 = fVar2;
							func_75(Var19, iVar18);
							Global_2405071.f_2481.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2405071.f_2481.f_6[iVar18 /*10*/] || (iVar8 == Global_2405071.f_2481.f_6[iVar18 /*10*/] && fVar0 > Global_2405071.f_2481.f_6[iVar18 /*10*/].f_1))
					{
						Var19.f_4 = { vParam0 };
						Var19.f_7 = fParam1;
						Var19 = iVar8;
						Var19.f_1 = fVar0;
						func_75(Var19, iVar18);
						Global_2405071.f_2481.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar20)
					{
						if (uParam2->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_73(vParam0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_77(vParam0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_72(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_72(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar20 = true;
					}
					if (iVar8 > Global_2405071.f_2481.f_6[iVar18 /*10*/] || (iVar8 == Global_2405071.f_2481.f_6[iVar18 /*10*/] && fVar3 > Global_2405071.f_2481.f_6[iVar18 /*10*/].f_3))
					{
						Var19.f_4 = { vParam0 };
						Var19.f_7 = fParam1;
						Var19 = iVar8;
						Var19.f_3 = fVar3;
						func_75(Var19, iVar18);
						Global_2405071.f_2481.f_2 = 1;
						return;
					}
				}
			}
			iVar18++;
		}
	}
}

float func_72(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_73(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam2 && !bParam4)
	{
		if (func_26(PLAYER_ID(), 1, 1))
		{
			if (!IS_SCREEN_FADED_OUT())
			{
				if (IS_SPHERE_VISIBLE(vParam0, fParam1))
				{
					fVar4 = vdist2(vParam0, GET_ENTITY_COORDS(GET_ENTITY_COORDS(), false));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_26(iVar1, 1, 1))
		{
			if (!func_140(iVar1, 0) && _0x3B39236746714134(_0x3B39236746714134(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != PLAYER_ID()))
				{
					if (func_74(iVar1) || !bParam6)
					{
						if (!bParam4)
						{
							if ((iParam3 || (iParam3 == 0 && GET_PLAYER_TEAM(iVar1) != GET_PLAYER_TEAM(GET_PLAYER_TEAM()))) || GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(iVar1, vParam0, fParam1))
								{
									fVar4 = vdist2(vParam0, GET_ENTITY_COORDS(GET_ENTITY_COORDS(iVar1), false));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (GET_PLAYER_TEAM(iVar1) != iParam5 || GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(iVar1, vParam0, fParam1))
							{
								fVar4 = vdist2(vParam0, GET_ENTITY_COORDS(GET_ENTITY_COORDS(iVar1), false));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return sqrt(fVar3);
	}
	return -1f;
}

int func_74(int iParam0)
{
	if (IS_ENTITY_VISIBLE_TO_SCRIPT(IS_ENTITY_VISIBLE_TO_SCRIPT(iParam0)) || Global_2424073[iParam0 /*421*/].f_245)
	{
		return 1;
	}
	return 0;
}

void func_75(struct<10> Param0, int iParam1)
{
	struct<10> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2405071.f_2481.f_6[iParam1 /*10*/] };
	Global_2405071.f_2481.f_6[iParam1 /*10*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_75(Var0, iParam1 + 1);
	}
}

void func_76(struct<10> Param0)
{
	int iVar0;
	struct<10> Var1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	Var1.f_2 = 1176256410;
	iVar2 = func_70();
	if (Param0 > iVar2)
	{
		iVar2 = Param0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408003[iVar0 /*10*/] < iVar2)
		{
			Global_2408003[iVar0 /*10*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0 < iVar2)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408003[iVar0 /*10*/] == 0)
		{
			Global_2408003[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar3 = 9999.9f;
	iVar4 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408003[iVar0 /*10*/] > 0)
		{
			if (Global_2408003[iVar0 /*10*/].f_1 < fVar3)
			{
				fVar3 = Global_2408003[iVar0 /*10*/].f_1;
				iVar4 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar4 > -1)
	{
		Global_2408003[iVar4 /*10*/] = { Param0 };
	}
}

float func_77(vector3 vParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar7 = iVar0;
		if (func_26(iVar7, 1, 1) || (iParam5 == 1 && func_26(iVar7, 0, 0)))
		{
			if (!iVar7 == PLAYER_ID() || iParam3 == 1)
			{
				bVar4 = false;
				if (bParam1)
				{
					if (func_79(iVar7))
					{
						bVar4 = true;
					}
				}
				if (bParam2)
				{
					if (GET_PLAYER_TEAM(iVar7) == GET_PLAYER_TEAM(GET_PLAYER_TEAM()))
					{
						if (!GET_PLAYER_TEAM(iVar7) == -1 || !func_56(GET_PLAYER_TEAM(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (_0x3B39236746714134(_0x3B39236746714134(), iVar7) || !bParam4)
					{
						if (func_74(iVar7))
						{
							vVar5 = { func_78(iVar7) };
							if (!iVar7 == PLAYER_ID())
							{
								vVar6 = { 0x64D779659BC37B19(0x64D779659BC37B19(iVar7)) };
							}
							else
							{
								vVar6 = { vVar5 };
							}
							if (!bParam4)
							{
								if (vVar5.z < -100f)
								{
									vVar5.z = vParam0.z;
								}
								if (vVar6.z < -100f)
								{
									vVar6.z = vParam0.z;
								}
							}
							fVar1 = GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar5, true);
							fVar2 = GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar6, true);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

Vector3 func_78(int iParam0)
{
	return GET_ENTITY_COORDS(GET_ENTITY_COORDS(iParam0), false);
}

int func_79(int iParam0)
{
	if (func_26(iParam0, 0, 1))
	{
		if (!func_86(iParam0))
		{
			if (_0x3B39236746714134(_0x3B39236746714134(), iParam0))
			{
				if (!GET_PLAYER_TEAM(iParam0) == GET_PLAYER_TEAM(GET_PLAYER_TEAM()))
				{
					if (func_42(PLAYER_ID(), 1, 0))
					{
						if (!func_85(GET_PLAYER_TEAM(iParam0), GET_PLAYER_TEAM(GET_PLAYER_TEAM()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (GET_PLAYER_TEAM(iParam0) == -1 && GET_PLAYER_TEAM(GET_PLAYER_TEAM()) == -1)
				{
					if (!func_42(PLAYER_ID(), 1, 0))
					{
						if (!func_80(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_80(int iParam0)
{
	if (func_84(PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2507671 = { func_83(iParam0) };
	if (NETWORK_IS_FRIEND(&Global_2507671))
	{
		return 1;
	}
	if (func_81(PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_81(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_82(iParam0);
	if (!iVar0 == func_27())
	{
		if (iVar0 == func_82(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_82(int iParam0)
{
	if (iParam0 != func_27())
	{
		return Global_1628955[iParam0 /*614*/].f_11;
	}
	return func_27();
}

struct<13> func_83(int iParam0)
{
	struct<13> Var0;
	
	NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_84(int iParam0, int iParam1)
{
	if (_NETWORK_PLAYER_IS_IN_CLAN())
	{
		Global_2507671 = { func_83(iParam0) };
		Global_2507684 = { func_83(iParam1) };
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

int func_85(int iParam0, int iParam1, int iParam2)
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

int func_86(int iParam0)
{
	if (func_140(iParam0, 0))
	{
		return 1;
	}
	if (func_87())
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

bool func_87()
{
	return IS_BIT_SET(Global_2359302, 3);
}

float func_88(vector3 vParam0)
{
	var uVar0;
	
	return func_89(vParam0, &(Global_2405071.f_45), &uVar0);
}

float func_89(vector3 vParam0, var uParam1, var uParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((uParam1[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam1[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = vdist(*(uParam1[iVar0 /*12*/]), vParam0);
					fVar1 = (fVar1 - ((uParam1[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2405071.f_2724) * (uParam1[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (vParam0.x < (*uParam1)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam1)[iVar0 /*12*/] - vParam0.x));
					}
					else if (vParam0.x > (uParam1[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (vParam0.x - (uParam1[iVar0 /*12*/])->f_3));
					}
					if (vParam0.y < (uParam1[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_1 - vParam0.y));
					}
					else if (vParam0.y > (uParam1[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (vParam0.y - (uParam1[iVar0 /*12*/])->f_3.f_1));
					}
					if (vParam0.z < (uParam1[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_2 - vParam0.z));
					}
					else if (vParam0.z > (uParam1[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (vParam0.z - (uParam1[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam2 = iVar3;
	return fVar2;
}

float func_90(vector3 vParam0, vector3 vParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, var uParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam5 > 0)
	{
		fVar1 = (to_float(iParam5) / to_float(8));
	}
	if (bParam2)
	{
		fVar0 = func_72(vdist(vParam0, vParam1), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam6 = 1E+07f;
	fVar4 = func_77(vParam0, 1, 0, 0, 1, 0);
	fVar0 = func_72(fVar4, 0f, func_97(), func_95(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_93(vParam0);
	fVar0 = func_72(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (GET_PLAYER_TEAM(GET_PLAYER_TEAM()) == -1 && !func_56(GET_PLAYER_TEAM(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_92(vParam0, PLAYER_ID(), 0);
	fVar0 = func_72(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	if (bParam3)
	{
		if (func_91(vParam0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_72(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_72(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam4)
	{
		fVar0 = func_72(vdist(Global_2405071.f_507, vParam0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_91(vector3 vParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	iVar1 = GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(vParam0, 1, &uVar3, &uVar2, 1, 3f, 0f);
	if (IS_VEHICLE_NODE_ID_VALID(iVar1))
	{
		GET_VEHICLE_NODE_POSITION(iVar1, &vVar0);
		*uParam1 = vdist(vParam0.x, vParam0.y, 0f, vVar0.x, vVar0.y, 0f);
		*uParam2 = ABSF((vParam0.z - vVar0.z));
		return 1;
	}
	return 0;
}

float func_92(vector3 vParam0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	if (func_26(iParam1, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam1 == iVar2 || iParam2 == 1)
			{
				iVar3 = iVar2;
				if (func_26(iVar3, 0, 1))
				{
					if (GET_PLAYER_TEAM(iVar3) != GET_PLAYER_TEAM(iParam1) || (GET_PLAYER_TEAM(iVar3) == -1 && GET_PLAYER_TEAM(iParam1) == -1))
					{
						if (Global_2417783.f_261[iVar2])
						{
							fVar1 = vdist(Global_2417783.f_131[iVar2 /*3*/], vParam0);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

float func_93(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	var uVar4[32];
	int iVar5;
	
	iVar5 = GET_PED_NEARBY_PEDS(GET_PED_NEARBY_PEDS(), &uVar4, 2);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar5)
	{
		if (DOES_ENTITY_EXIST(uVar4[iVar2]))
		{
			if (!IS_ENTITY_DEAD(uVar4[iVar2], 0))
			{
				if (func_94(uVar4[iVar2]))
				{
					vVar3 = { GET_ENTITY_COORDS(uVar4[iVar2], true) };
					fVar1 = GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar3, true);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	if (Global_2405071.f_2923)
	{
		if (Global_969029.f_266 > 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_969029.f_266)
			{
				if (DOES_ENTITY_EXIST(Global_969029.f_151[iVar2]))
				{
					if (!IS_ENTITY_DEAD(Global_969029.f_151[iVar2], 0))
					{
						if (func_94(Global_969029.f_151[iVar2]))
						{
							vVar3 = { GET_ENTITY_COORDS(Global_969029.f_151[iVar2], true) };
							fVar1 = GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar3, true);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return fVar0;
}

int func_94(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	switch (GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, 1862763509))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (0xCC6E3B6BB69501F1(Global_1574964[0xCC6E3B6BB69501F1()]))
	{
		switch (GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, Global_1574964[GET_RELATIONSHIP_BETWEEN_GROUPS()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_1590446[PLAYER_ID() /*871*/] == 0)
	{
		iVar1 = GET_PLAYER_TEAM(GET_PLAYER_TEAM());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (0xCC6E3B6BB69501F1(Global_1574674[iVar1]))
			{
				switch (GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, Global_1574674[iVar1]))
				{
					case 3:
					case 5:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

float func_95()
{
	if (func_96())
	{
		if ((IS_THIS_MODEL_A_PLANE(Global_2405071.f_45.f_67) || IS_THIS_MODEL_A_PLANE(Global_2405071.f_45.f_67)) || Global_2405071.f_45.f_67 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_96()
{
	if (Global_2405071.f_45.f_65 && !Global_2405071.f_45.f_301)
	{
		if (!func_86(PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

float func_97()
{
	if (func_96())
	{
		if ((IS_THIS_MODEL_A_PLANE(Global_2405071.f_45.f_67) || IS_THIS_MODEL_A_PLANE(Global_2405071.f_45.f_67)) || Global_2405071.f_45.f_67 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_98(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5, float fParam6, float fParam7)
{
	float fVar0;
	
	fVar0 = iParam4;
	if (bParam3)
	{
		fVar0 = fParam5;
	}
	if ((((fParam5 > 0f && IS_ANY_VEHICLE_NEAR_POINT(vParam0, fParam5)) || (fVar0 > 0f && IS_ANY_VEHICLE_NEAR_POINT(vParam0, fVar0))) || ((iParam2 == 1 && fParam6 > 0f) && IS_ANY_VEHICLE_NEAR_POINT(vParam0, fParam6, 0))) || ((iParam1 == 1 && fParam7 > 0f) && IS_ANY_VEHICLE_NEAR_POINT(vParam0, fParam7, 1)))
	{
		return 1;
	}
	return 0;
}

int func_99(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_103(*uParam0, uParam0->f_6, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_102(*uParam0, uParam0->f_3, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_100(*uParam0, uParam0->f_3, uParam0->f_6, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_100(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, vector3 vParam4, float fParam5)
{
	vector3 vVar0[8];
	int iVar1;
	
	func_101(vParam0, vParam1, fParam2, &vVar0);
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!IS_POINT_IN_ANGLED_AREA(vVar0[iVar1 /*3*/], vParam3, vParam4, fParam5, 0, true))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_101(vector3 vParam0, vector3 vParam1, float fParam2, var uParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	var uVar2;
	var uVar3;
	
	if (vParam0.z == vParam1.z)
	{
		vParam1.z = (vParam1.z + 0.01f);
	}
	vVar0 = { vParam0 - vParam1 };
	vVar1 = { func_17(vVar0, vVar0.x, vVar0.y, 0f) };
	vVar1 = { vVar1 / FtoV(vmag(vVar1)) };
	vVar1 = { vVar1 * FtoV((fParam2 * 0.5f)) };
	if (vParam0.z > vParam1.z)
	{
		uVar2 = vParam1.z;
		uVar3 = vParam0.z;
	}
	else
	{
		uVar2 = vParam0.z;
		uVar3 = vParam1.z;
	}
	*(uParam3[0 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) + vVar1 };
	*(uParam3[1 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) - vVar1 };
	*(uParam3[2 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) - vVar1 };
	*(uParam3[3 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) + vVar1 };
	*(uParam3[4 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) + vVar1 };
	*(uParam3[5 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) - vVar1 };
	*(uParam3[6 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) - vVar1 };
	*(uParam3[7 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) + vVar1 };
}

int func_102(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4)
{
	vector3 vVar0[8];
	int iVar1;
	
	vVar0[0 /*3*/] = { vParam0.x, vParam0.y, vParam0.z };
	vVar0[1 /*3*/] = { vParam0.x, vParam0.y, vParam1.z };
	vVar0[2 /*3*/] = { vParam0.x, vParam1.y, vParam1.z };
	vVar0[3 /*3*/] = { vParam0.x, vParam1.y, vParam0.z };
	vVar0[4 /*3*/] = { vParam1.x, vParam0.y, vParam0.z };
	vVar0[5 /*3*/] = { vParam1.x, vParam0.y, vParam1.z };
	vVar0[6 /*3*/] = { vParam1.x, vParam1.y, vParam1.z };
	vVar0[7 /*3*/] = { vParam1.x, vParam1.y, vParam0.z };
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!IS_POINT_IN_ANGLED_AREA(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0, true))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_103(vector3 vParam0, float fParam1, vector3 vParam2, vector3 vParam3, float fParam4)
{
	vector3 vVar0[4];
	int iVar1;
	
	vVar0[0 /*3*/] = { vParam0 + Vector(0f, fParam1, 0f) };
	vVar0[1 /*3*/] = { vParam0 + Vector(0f, (-1f * fParam1), 0f) };
	vVar0[2 /*3*/] = { vParam0 + Vector(0f, 0f, fParam1) };
	vVar0[3 /*3*/] = { vParam0 + Vector(0f, 0f, (-1f * fParam1)) };
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (!IS_POINT_IN_ANGLED_AREA(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0, true))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_104(vector3 vParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar1 = { vParam0 };
	iVar2 = func_32(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411454[iVar2])
	{
		if (func_31(vVar1, &(Global_2410184[iVar2 /*141*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_2410184[iVar2 /*141*/][iVar0 /*7*/] };
			*uParam2 = { Global_2410184[iVar2 /*141*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_2410184[iVar2 /*141*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411454[8])
	{
		if (func_31(vVar1, &(Global_2410184[8 /*141*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_2410184[8 /*141*/][iVar0 /*7*/] };
			*uParam2 = { Global_2410184[8 /*141*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_2410184[8 /*141*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_105(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2405071.f_45.f_55)
	{
		if (IS_VALID_INTERIOR(Global_2405071.f_45.f_56))
		{
			if (!_ARE_COORDS_COLLIDING_WITH_EXTERIOR(vParam0))
			{
				iVar0 = GET_INTERIOR_AT_COORDS(vParam0);
				if (IS_VALID_INTERIOR(iVar0))
				{
					iVar1 = GET_INTERIOR_GROUP_ID(iVar0);
					if (!iVar1 == Global_2405071.f_45.f_57)
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
		}
	}
	return 1;
}

int func_106(vector3 vParam0)
{
	switch (Global_2405071.f_2477)
	{
		case 0:
			return func_143(vParam0, Global_2405071.f_2456, Global_2405071.f_2459, 0, 0);
			break;
		
		case 1:
			return func_59(vParam0, Global_2405071.f_2470, Global_2405071.f_2473, 0, 0);
			break;
		
		case 2:
			return IS_POINT_IN_ANGLED_AREA(vParam0, Global_2405071.f_2470, Global_2405071.f_2473, Global_2405071.f_2476, 0, true);
			break;
	}
	return 0;
}

int func_107(vector3 vParam0, var uParam1, var uParam2, float fParam3)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		fVar0 = ((uParam1[iVar1 /*4*/])->f_3 + fParam3);
		if (vdist(*(uParam1[iVar1 /*4*/]), vParam0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	vVar2 = { 0f, 0f, 0f };
	vVar3 = { 0f, 0f, 0f };
	fVar4 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		vVar2 = { *(uParam2[iVar1 /*10*/]) };
		vVar3 = { (uParam2[iVar1 /*10*/])->f_3 };
		fVar4 = (uParam2[iVar1 /*10*/])->f_6;
		if (IS_POINT_IN_ANGLED_AREA(vParam0, vVar2, vVar3, fVar4, 0, true))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_108(var uParam0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (vdist((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				vVar1 = { *uParam0 };
				func_19(&vVar1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_109(int iParam0)
{
	switch (Global_1312448)
	{
		case 0:
			if (!func_110(iParam0))
			{
				if (Global_1590446[iParam0 /*871*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_110(int iParam0)
{
	return Global_1590446[iParam0 /*871*/].f_196 != 0;
}

int func_111(int iParam0)
{
	if (func_42(iParam0, 1, 0))
	{
		if (Global_1590446[iParam0 /*871*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_112(vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (vdist2(Global_2405071.f_2615[iVar0 /*3*/], vParam0) < (fParam1 * fParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_113(var uParam0, bool bParam1)
{
	var uVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_48(*uParam0))
	{
		if (bParam1)
		{
			vVar1 = { *uParam0 };
			fVar2 = GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
			func_19(&vVar1, Global_2405071.f_585, Global_2405071.f_588, 1036831949, 0, fVar2);
			if (func_49(vVar1, &uVar0) || func_48(vVar1))
			{
				vVar1 = { *uParam0 };
				func_19(&vVar1, Global_2405071.f_585, Global_2405071.f_588, 1036831949, 1, fVar2);
			}
			*uParam0 = { vVar1 };
		}
	}
	return 0;
}

int func_114(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_26(PLAYER_ID(), 1, 1))
		{
			if (!IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (GET_DISTANCE_BETWEEN_COORDS(func_115(GET_DISTANCE_BETWEEN_COORDS()), vParam0, true) <= (fVar2 + fParam1))
				{
					if (IS_SPHERE_VISIBLE(vParam0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_26(iVar1, 1, 1))
		{
			if (!func_140(iVar1, 0) && _0x3B39236746714134(_0x3B39236746714134(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != PLAYER_ID()))
				{
					if ((func_74(iVar1) || !bParam8) && !Global_2424073[iVar1 /*421*/].f_259)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (GET_PLAYER_TEAM(iVar1) == GET_PLAYER_TEAM(GET_PLAYER_TEAM()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && GET_PLAYER_TEAM(iVar1) != GET_PLAYER_TEAM(GET_PLAYER_TEAM()))) || GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (GET_DISTANCE_BETWEEN_COORDS(func_115(iVar1), vParam0, true) <= (fVar2 + fParam1))
								{
									if (IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(iVar1, vParam0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (GET_PLAYER_TEAM(iVar1) != iParam6 || GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (GET_DISTANCE_BETWEEN_COORDS(func_115(iVar1), vParam0, true) <= (fVar2 + fParam1))
							{
								if (IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(iVar1, vParam0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_115(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_116() && Global_1590446[iVar0 /*871*/].f_842) && !func_4(Global_1590446[iVar0 /*871*/].f_843))
	{
		return Global_1590446[iVar0 /*871*/].f_843;
	}
	return func_78(iParam0);
}

var func_116()
{
	return Global_2448961.f_17;
}

int func_117(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_119(vParam0, fParam1, iParam2, iParam3, 0) || func_118(vParam0, iParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

int func_118(vector3 vParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam1 == iVar0 || iParam2 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_34(vParam0, Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_26(iVar2, 0, 1) && func_26(iParam1, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_119(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam2 == iVar0 || iParam3 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam4)
			{
				if (func_26(iVar1, 0, 1) && func_26(iParam2, 0, 1))
				{
					if (GET_PLAYER_TEAM(iVar1) == GET_PLAYER_TEAM(iParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_26(iVar1, 0, 1) && func_26(iParam2, 0, 1))
				{
					if (Global_2417783.f_261[iVar0])
					{
						if (vdist(Global_2417783.f_131[iVar0 /*3*/], vParam0) < fParam1)
						{
							return 1;
						}
					}
					else if (vdist(func_78(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2417783.f_261[iVar0])
				{
					if (vdist(Global_2417783.f_131[iVar0 /*3*/], vParam0) < fParam1)
					{
						return 1;
					}
				}
				else if (func_26(iVar1, 0, 1))
				{
					if (vdist(func_78(iVar1), vParam0) < 1f)
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

int func_120(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, bool bParam13)
{
	Global_2405071.f_3 = 0;
	if (!func_117(vParam0, 0.5f, PLAYER_ID(), 0, 0))
	{
		Global_2405071.f_3++;
		if (bParam3)
		{
			if (func_171(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
				if (!func_124(vParam0, fParam10))
				{
					Global_2405071.f_3++;
					if (!func_33(vParam0, 1056964608))
					{
						Global_2405071.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
			}
		}
		else if (!bParam2)
		{
			if (func_171(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
				if (!func_124(vParam0, fParam10))
				{
					Global_2405071.f_3++;
					if (!func_121(vParam0, fParam1, fParam7, fParam8, 1084227584))
					{
						Global_2405071.f_3++;
						if (!func_33(vParam0, 1056964608))
						{
							Global_2405071.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
			}
		}
		else if (func_171(vParam0, 6f, 5f, 5f, 5f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
		{
			Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
			if (!func_124(vParam0, fParam10))
			{
				Global_2405071.f_3++;
				if (!func_121(vParam0, fParam1, fParam7, fParam8, fParam9))
				{
					Global_2405071.f_3++;
					if (!func_33(vParam0, 1056964608))
					{
						Global_2405071.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
		}
	}
	return 0;
}

int func_121(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!PLAYER_ID() == iVar1)
		{
			if ((func_26(iVar1, 1, 1) && func_74(iVar1)) && _0x3B39236746714134(_0x3B39236746714134(), iVar1))
			{
				if (!func_123(PLAYER_ID(), iVar1, -2, 0))
				{
					if (func_122(func_78(iVar1), vParam0, fParam1, fParam2, fParam3, fParam4))
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

bool func_122(vector3 vParam0, vector3 vParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	vector3 vVar0;
	vector3 vVar1;
	
	fParam2 = (fParam2 * -1f);
	fParam2 = (fParam2 + 360f);
	vVar0.x = sin(fParam2);
	vVar0.y = cos(fParam2);
	vVar0.z = 0f;
	vVar0 = { vVar0 / FtoV(vmag(vVar0)) };
	vVar0 = { vVar0 * Vector(fParam3, fParam3, fParam3) };
	vVar1 = { vParam1 + vVar0 };
	vVar1.z = vParam1.z;
	vVar1.z = (vVar1.z + fParam5);
	vParam1.z = (vParam1.z + fParam5);
	return IS_POINT_IN_ANGLED_AREA(vParam0, vParam1, vVar1, fParam4, 0, true);
}

bool func_123(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_124(vector3 vParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_26(iVar1, 1, 1) && func_74(iVar1)) && _0x3B39236746714134(_0x3B39236746714134(), iVar1))
		{
			if ((GET_PLAYER_TEAM(GET_PLAYER_TEAM()) == -1 && GET_PLAYER_TEAM(iVar1) == -1) && !func_56(GET_PLAYER_TEAM(), 1))
			{
				return 0;
			}
			else if ((GET_PLAYER_TEAM(GET_PLAYER_TEAM()) == -1 && !GET_PLAYER_TEAM() == iVar1) || !func_123(GET_PLAYER_TEAM(), iVar1, -2, 0))
			{
				if (vdist(vParam0, func_78(iVar1)) < fParam1)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_125(int iParam0)
{
	if ((Global_2405071.f_484 == 9 || Global_2405071.f_484 == 9) || (Global_2405071.f_484 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_126(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && PLAYER_ID() != iVar1) || iParam6 == 0)
		{
			if (func_26(iVar1, bParam2, bParam3))
			{
				if (_0x3B39236746714134(_0x3B39236746714134(), iVar1))
				{
					if (!bParam5 || (!IS_PED_INJURED(IS_PED_INJURED(iVar1)) && func_74(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && GET_PLAYER_TEAM(GET_PLAYER_TEAM()) != GET_PLAYER_TEAM(iVar1))) || GET_PLAYER_TEAM(GET_PLAYER_TEAM()) == -1)
						{
							if (((GET_PLAYER_TEAM(GET_PLAYER_TEAM()) == -1 && iParam7) && bParam4) && func_80(iVar1))
							{
							}
							else if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST(iVar1)))
							{
								if (GET_DISTANCE_BETWEEN_COORDS(func_78(iVar1), vParam0, true) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_127(vector3 vParam0, float fParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = GET_PLAYER_TEAM(GET_PLAYER_TEAM());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_26(iVar1, 1, 1))
			{
				if ((!func_140(iVar1, 0) && _0x3B39236746714134(_0x3B39236746714134(), iVar1)) && iVar1 != _0x3B39236746714134())
				{
					fVar2 = iParam2;
					if (fParam3 > 0f)
					{
						if (!GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (GET_PLAYER_TEAM(iVar1) == GET_PLAYER_TEAM(GET_PLAYER_TEAM()))
							{
								fVar2 = fParam3;
							}
						}
					}
					if (GET_PLAYER_TEAM(iVar1) == iVar3)
					{
						if (GET_DISTANCE_BETWEEN_COORDS(func_78(iVar1), vParam0, true) <= (fVar2 + fParam1))
						{
							if (IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(iVar1, vParam0, fParam1))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_128(int iParam0)
{
	if (((func_56(iParam0, 1) || func_131(iParam0)) || func_130(iParam0, 0)) || func_129(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_129(int iParam0)
{
	if (!func_26(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590446[iParam0 /*871*/].f_35;
}

int func_130(int iParam0, int iParam1)
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 || (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_131(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628955[iVar0 /*614*/] != -1;
	}
	return 0;
}

void func_132(vector3 vParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var4;
	vector3 vVar5;
	vector3 vVar6;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		*(uParam1[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		*(uParam2[iVar0 /*10*/]) = { Var4 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!IS_BIT_SET(Global_2359721[iVar1 /*26*/].f_12, 11))
			{
				if (vmag(*(uParam1[iVar0 /*4*/])) == 0f || vdist(Global_2359721[iVar1 /*26*/].f_3, vParam0) < vdist(*(uParam1[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_2359721[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_2359721[iVar1 /*26*/].f_6.f_2;
					func_134(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (vmag(*(uParam1[iVar0 /*4*/])) == 0f || vdist(Global_262145.f_5999[iVar1 /*3*/], vParam0) < vdist(*(uParam1[iVar0 /*4*/]), vParam0))
			{
				Var3 = { Global_262145.f_5999[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_134(&Var3, uParam1, iVar0);
				iVar0 = *uParam1;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam1)
			{
				if (vmag(*(uParam1[iVar0 /*4*/])) == 0f || vdist(Global_262145.f_6045[iVar1 /*19*/][iVar2 /*3*/], vParam0) < vdist(*(uParam1[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_262145.f_6045[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_134(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311706)
	{
		iVar0 = 0;
		while (iVar0 < *uParam2)
		{
			vVar5 = { Global_1311025[iVar1 /*8*/].f_1 + Global_1311025[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			vVar6 = { *(uParam2[iVar0 /*10*/]) + (uParam2[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (vmag(*(uParam2[iVar0 /*10*/])) == 0f || vdist(vVar5, vParam0) < vdist(vVar6, vParam0))
			{
				Var4 = { Global_1311025[iVar1 /*8*/].f_1 };
				Var4.f_3 = { Global_1311025[iVar1 /*8*/].f_4 };
				Var4.f_6 = Global_1311025[iVar1 /*8*/].f_7;
				Var4.f_7 = { Global_2359397[iVar1 /*3*/] };
				func_133(&Var4, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_133(var uParam0, var uParam1, int iParam2)
{
	Global_2412459 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_133(&Global_2412459, uParam1, iParam2 + 1);
	}
}

void func_134(var uParam0, var uParam1, int iParam2)
{
	Global_2412455 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_134(&Global_2412455, uParam1, iParam2 + 1);
	}
}

void func_135(var uParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	if (Global_2405071.f_2252 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405071.f_2252)
		{
			if (func_136(Global_2405071.f_2253[iVar0 /*4*/], uParam0))
			{
				fVar2 = Global_2405071.f_2253[iVar0 /*4*/].f_3;
				if (vmag(*uParam1) > 0.01f)
				{
					vVar1 = { *uParam1 - Global_2405071.f_2253[iVar0 /*4*/] };
					fVar2 = GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
				}
				func_71(Global_2405071.f_2253[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, -1);
				Global_2405071.f_2481++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2405071.f_2878)
	{
		func_65(&(Global_2405071.f_2481.f_6[0 /*10*/]), &(Global_2405071.f_2481.f_6[1 /*10*/]), &(Global_2405071.f_2481.f_6[2 /*10*/]));
	}
}

int func_136(vector3 vParam0, var uParam1)
{
	switch (uParam1->f_7)
	{
		case 0:
			return func_23(vParam0, uParam1->f_7, *uParam1, 0f, 0f, 0f, uParam1->f_4);
		
		case 1:
		case 2:
			return func_23(vParam0, uParam1->f_7, uParam1->f_8, uParam1->f_11, uParam1->f_14);
		
		default:
	}
	return 0;
}

void func_137(vector3 vParam0, vector3 vParam1, var uParam2, var uParam3, var uParam4)
{
	float fVar0;
	
	func_60(&vParam0, &vParam1);
	fVar0 = (vParam1.x - vParam0.x);
	*uParam2 = (vParam0.x + (fVar0 * 0.5f));
	uParam2->f_1 = vParam0.y;
	uParam2->f_2 = vParam0.z;
	*uParam3 = *uParam2;
	uParam3->f_1 = vParam1.y;
	uParam3->f_2 = vParam1.z;
	*uParam4 = (fVar0 * 0.5f);
}

var func_138()
{
	return Global_1310987.f_4;
}

void func_139(float fParam0, float fParam1)
{
	func_178();
	func_170(fParam0, fParam1);
}

bool func_140(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER_ID())
	{
		bVar0 = func_141(-1, 0) == 8;
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

int func_141(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_142();
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

int func_142()
{
	return Global_1312745;
}

bool func_143(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3 && bParam4)
	{
		vParam0.z = 0f;
		vParam1.z = 0f;
		return vdist(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	else if (bParam3)
	{
		if (vParam0.z > vParam1.z)
		{
			vParam0.z = vParam1.z;
		}
		return vdist(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	else if (bParam4)
	{
		if (vParam0.z < vParam1.z)
		{
			vParam0.z = vParam1.z;
		}
		return vdist(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	return vdist(vParam0, vParam1) < (fParam2 + 0.01f);
}

void func_144(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2405071.f_1744 > 0)
	{
		iVar0 = 0;
		while (func_166(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_145(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_145(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	vector3 vVar25;
	var uVar26;
	vector3 vVar27;
	float fVar28;
	bool bVar29;
	
	iVar0 = 0;
	if (!vmag(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_45(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (func_165(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar3 = 0;
	iVar8 = 1;
	if (uParam2->f_11)
	{
		iVar3 += 2;
		iVar3++;
		iVar8 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar3++;
		iVar8 = 0;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		
		case 1:
			fVar11 = 2.75f;
			fVar12 = 7.5f;
			break;
		
		default:
			fVar11 = 2.5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_2412469.f_162 = 0;
	Global_2412469.f_163 = 0;
	Global_2412469.f_164 = -99;
	Global_2412469.f_165 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_2412469[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_2412469.f_121[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (func_39(uParam2->f_34) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar6 = GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (IS_VEHICLE_NODE_ID_VALID(iVar6))
		{
			GET_VEHICLE_NODE_POSITION(iVar6, &vVar1);
			bVar10 = false;
			if (Global_2412469.f_164 == iVar6)
			{
				bVar10 = true;
			}
			Global_2412469.f_165 = { vVar1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !_GET_IS_SLOW_ROAD_FLAG(iVar6)) || _GET_IS_SLOW_ROAD_FLAG(iVar6))
			{
				GET_VEHICLE_NODE_PROPERTIES(vVar1, &uVar4, &uVar5);
				if (vdist(vVar1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_113(&vVar1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!func_164(vVar1))
									{
										vVar1 = { func_160(vVar1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51) };
										if (vmag(vVar1) > 0f)
										{
											if (!func_33(vVar1, 5f))
											{
												if (vVar1.z >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (vVar1.z <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_159(vVar1, uParam2))
														{
															if ((uParam2->f_48 && !func_165(&vVar1, 0)) || uParam2->f_48 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar16 = false;
																	}
																}
																if (vmag(vVar1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && vdist(vVar1.x, vVar1.y, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_155(vVar1, fVar2, uParam2->f_34, PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_45(uParam2->f_35, &vVar1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_31;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!func_154(vVar1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_171(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (func_171(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_152(vVar1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar22 = func_151(vVar1, uParam2->f_54, &fVar23);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar22 < uParam2->f_53)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2412469.f_162)
																										{
																											Global_2412469[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_2412469.f_121[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_2412469.f_162 = 0;
																										uParam2->f_53 = iVar22;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2412469.f_162 == 0)
																									{
																										Global_2412469[0 /*3*/] = { vVar1 };
																										Global_2412469.f_121[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2412469.f_162 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (vdist2(vVar1, uParam2->f_35) < vdist2(Global_2412469[iVar14 /*3*/], uParam2->f_35))
																												{
																													func_150(vVar1, fVar2, iVar14);
																													iVar14 = Global_2412469.f_162 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_2412469.f_162++;
																									if (Global_2412469.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412469.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2412469[Global_2412469.f_162 /*3*/] = { vVar1 };
																									Global_2412469.f_121[Global_2412469.f_162] = fVar2;
																									Global_2412469.f_162++;
																									if (func_159(vVar1, uParam2))
																									{
																										Global_2412469.f_163++;
																									}
																									if (Global_2412469.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412469.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { vVar1 };
																							*uParam1 = fVar2;
																							return 1;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { vVar1 };
																					*uParam1 = fVar2;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_2412469.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2412469[0 /*3*/] };
						*uParam1 = Global_2412469.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2412469.f_163 > 0 && !Global_2412469.f_163 == Global_2412469.f_162)
						{
							func_148(0, uParam2);
						}
						iVar24 = GET_RANDOM_INT_IN_RANGE(0, Global_2412469.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar24 = 0;
						}
						vVar25 = { Global_2412469[0 /*3*/] };
						uVar26 = Global_2412469.f_121[0];
						Global_2412469[0 /*3*/] = { Global_2412469[iVar24 /*3*/] };
						Global_2412469.f_121[0] = Global_2412469.f_121[iVar24];
						Global_2412469[iVar24 /*3*/] = { vVar25 };
						Global_2412469.f_121[iVar24] = uVar26;
						*uParam0 = { Global_2412469[0 /*3*/] };
						*uParam1 = Global_2412469.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_147(iVar13, *uParam0, &iVar0, &vVar1, &fVar2, uParam2, iVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
						vVar27 = { vVar1 };
						fVar28 = fVar2;
						if (!uParam2->f_50)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_45(uParam2->f_35, &vVar27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_165(&vVar27, bVar29))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { vVar27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { vVar27 };
								*uParam1 = fVar28;
								return 1;
							}
						}
						else
						{
							*uParam0 = { vVar27 };
							*uParam1 = fVar28;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_146(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2412469.f_164 = iVar6;
	}
	return 0;
}

void func_146(var uParam0, var uParam1, var uParam2, vector3 vParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = vdist(*(uParam0[iVar2 /*4*/]), vParam3);
		if (fVar1 < fVar0)
		{
			if (!func_117(*(uParam0[iVar2 /*4*/]), 5f, PLAYER_ID(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_147(int iParam0, vector3 vParam1, int iParam2, var uParam3, float fParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam2 = GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
		GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(vParam1, *iParam2, uParam3, fParam4, &iParam7, iParam8, fParam9, fParam10);
		*uParam3 = { func_160(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_11, uParam5->f_34, &bParam11, 0, 0, uParam5->f_51) };
		if (!func_164(*uParam3))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_148(int iParam0, var uParam1)
{
	if (!func_159(Global_2412469[iParam0 /*3*/], uParam1))
	{
		Global_2412469.f_162 = (Global_2412469.f_162 - 1);
		func_149(iParam0);
		if (Global_2412469.f_162 > Global_2412469.f_163)
		{
			func_148(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_148(iParam0 + 1, uParam1);
	}
}

void func_149(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2412469[iParam0 /*3*/] = { Global_2412469[iParam0 + 1 /*3*/] };
			Global_2412469.f_121[iParam0] = Global_2412469.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_150(vector3 vParam0, float fParam1, int iParam2)
{
	vector3 vVar0;
	var uVar1;
	
	vVar0 = { Global_2412469[iParam2 /*3*/] };
	uVar1 = Global_2412469.f_121[iParam2];
	Global_2412469[iParam2 /*3*/] = { vParam0 };
	Global_2412469.f_121[iParam2] = fParam1;
	if (iParam2 <= Global_2412469.f_162 && iParam2 < 39)
	{
		if (vmag(vVar0) > 0f)
		{
			func_150(vVar0, uVar1, iParam2 + 1);
		}
	}
}

int func_151(vector3 vParam0, float fParam1, float fParam2)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	fVar4 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = iVar0;
		if (func_79(iVar3))
		{
			vVar1 = { func_78(iVar3) };
			fVar5 = vdist(vParam0, vVar1);
			if (fVar5 < fParam1)
			{
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	*fParam2 = fVar4;
	return iVar2;
}

int func_152(vector3 vParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	float fVar6;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam7 == 1 && PLAYER_ID() != iVar1) || iParam7 == 0)
		{
			if (func_26(iVar1, bParam3, bParam4))
			{
				if (_0x3B39236746714134(_0x3B39236746714134(), iVar1))
				{
					if (!bParam6 || (!IS_PED_INJURED(IS_PED_INJURED(iVar1)) && func_74(iVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && GET_PLAYER_TEAM(GET_PLAYER_TEAM()) != GET_PLAYER_TEAM(iVar1))) || GET_PLAYER_TEAM(GET_PLAYER_TEAM()) == -1)
						{
							if (((GET_PLAYER_TEAM(GET_PLAYER_TEAM()) == -1 && iParam8) && bParam5) && func_80(iVar1))
							{
							}
							else if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST(iVar1)))
							{
								fVar2 = 0.1f;
								if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(iVar1), 0))
								{
									iVar3 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(iVar1), 0);
									if (DOES_ENTITY_EXIST(iVar3) && !DOES_ENTITY_EXIST(iVar3, 0))
									{
										iVar4 = GET_ENTITY_MODEL(iVar3);
										vVar5 = { GET_ENTITY_COORDS(iVar3, false) };
										fVar6 = GET_ENTITY_HEADING(iVar3);
										if (func_153(vParam0, fParam1, iParam2, vVar5, fVar6, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_34(func_78(iVar1), vParam0, fParam1, iParam2, fVar2))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_153(vector3 vParam0, float fParam1, int iParam2, vector3 vParam3, float fParam4, int iParam5, bool bParam6)
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	
	if (func_34(vParam0, vParam3, fParam4, iParam5, 1036831949))
	{
		return 1;
	}
	func_36(iParam2, &vVar2, &vVar3, 1086324736, 1080033280, 1077936128);
	vVar4 = { 0f, vVar3.y, 0f };
	func_20(&vVar4, 0f, 0f, fParam1);
	vVar5 = { 0f, vVar2.y, 0f };
	func_20(&vVar5, 0f, 0f, fParam1);
	vVar6 = { (ABSF((vVar3.x - vVar2.x)) * 0.5f), 0f, 0f };
	func_20(&vVar6, 0f, 0f, fParam1);
	vVar1[0 /*3*/] = { vParam0 + vVar4 + vVar6 };
	vVar1[0 /*3*/].f_2 = (vVar1[0 /*3*/].f_2 + (0.5f * ABSF((vVar3.z - vVar2.z))));
	vVar1[1 /*3*/] = { vParam0 + vVar4 - vVar6 };
	vVar1[1 /*3*/].f_2 = (vVar1[1 /*3*/].f_2 + (0.5f * ABSF((vVar3.z - vVar2.z))));
	vVar1[2 /*3*/] = { vParam0 + vVar5 + vVar6 };
	vVar1[2 /*3*/].f_2 = (vVar1[2 /*3*/].f_2 + (0.5f * ABSF((vVar3.z - vVar2.z))));
	vVar1[3 /*3*/] = { vParam0 + vVar5 - vVar6 };
	vVar1[3 /*3*/].f_2 = (vVar1[3 /*3*/].f_2 + (0.5f * ABSF((vVar3.z - vVar2.z))));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_34(vVar1[iVar0 /*3*/], vParam3, fParam4, iParam5, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam6)
	{
		if (func_153(vParam3, fParam4, iParam5, vParam0, fParam1, iParam2, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_154(vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar4;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = GET_CLOSEST_VEHICLE(vParam0, 30f, 0, iVar0);
	if (DOES_ENTITY_EXIST(iVar1) && !DOES_ENTITY_EXIST(iVar1, 0))
	{
		iVar2 = GET_ENTITY_MODEL(iVar1);
		vVar3 = { GET_ENTITY_COORDS(iVar1, false) };
		fVar4 = GET_ENTITY_HEADING(iVar1);
		if (func_153(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = GET_CLOSEST_VEHICLE(vParam0, 30f, 0, iVar0);
	if (DOES_ENTITY_EXIST(iVar1) && !DOES_ENTITY_EXIST(iVar1, 0))
	{
		iVar2 = GET_ENTITY_MODEL(iVar1);
		vVar3 = { GET_ENTITY_COORDS(iVar1, false) };
		fVar4 = GET_ENTITY_HEADING(iVar1);
		if (func_153(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_155(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_158(vParam0, fParam1, iParam2, iParam3, iParam4) || func_156(vParam0, fParam1, iParam2, iParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_156(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_157(vParam0, iParam2, Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_153(vParam0, fParam1, iParam2, Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_26(iVar2, 0, 1) && func_26(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_157(vector3 vParam0, int iParam1, vector3 vParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_41(iParam1, 1008981770);
	fVar1 = func_41(iParam3, 1008981770);
	fVar2 = vdist(vParam0, vParam2);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_158(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_26(iVar1, 0, 1) && func_26(iParam3, 0, 1))
			{
				if (Global_2417783.f_261[iVar0])
				{
					if (func_34(Global_2417783.f_131[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
				else if (func_34(func_78(iVar1), vParam0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2417783.f_261[iVar0])
			{
				if (func_34(Global_2417783.f_131[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (func_26(iVar1, 0, 0))
			{
				if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST(iVar1)))
				{
					if (func_34(func_78(iVar1), vParam0, fParam1, iParam2, 1036831949))
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

int func_159(vector3 vParam0, var uParam1)
{
	if (uParam1->f_18)
	{
		switch (uParam1->f_26)
		{
			case 0:
				if (func_143(vParam0, uParam1->f_19, uParam1->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_59(vParam0, uParam1->f_19, uParam1->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (IS_POINT_IN_ANGLED_AREA(vParam0, uParam1->f_19, uParam1->f_22, uParam1->f_25, 0, true))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_160(vector3 vParam0, float fParam1, int iParam2, bool bParam3, vector3 vParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11)
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	vector3 vVar11;
	vector3 vVar12;
	vector3 vVar13;
	
	if (bParam11)
	{
		if (vmag(vParam4) > 0f)
		{
			if (!func_163(vParam0, *fParam1, vParam4))
			{
				*fParam1 = (*fParam1 + 180f);
			}
		}
		return vParam0;
	}
	GET_VEHICLE_NODE_PROPERTIES(vParam0, &uVar1, &uVar2);
	if (uVar2 & 1024 == 0 && !bParam6)
	{
		GET_CLOSEST_ROAD(vParam0, 1f, 1, &uVar3, &uVar3, &iVar4, &iVar5, &fVar6, iParam5);
		if (iVar4 == iVar5)
		{
			*uParam8 = 1;
		}
		if (bParam10)
		{
			if (!uVar2 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar4 + iVar5) != iParam2)
			{
				return 0f, 0f, 0f;
			}
			if (IS_THIS_MODEL_A_HELI(iParam7) && func_162(vParam0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam9 && *uParam8)
		{
			*fParam1 = (*fParam1 + 180f);
			if (*fParam1 > 360f)
			{
				*fParam1 = (*fParam1 + -360f);
			}
		}
		if (*fParam1 <= 90f || *fParam1 > 270f)
		{
			bVar8 = true;
		}
		else
		{
			bVar8 = false;
		}
		bVar9 = false;
		if (bVar8)
		{
			if (iVar4 == 0)
			{
				if (bParam10)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam2 == iVar4)
			{
				bVar9 = true;
			}
		}
		else if (iVar5 == 0)
		{
			if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam2 == iVar5)
		{
			bVar9 = true;
		}
		if (fVar6 < 0f)
		{
			fVar7 = 0f;
		}
		else
		{
			if (bVar8)
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (to_float(iVar4) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * to_float(iVar4));
				}
				if (bVar9)
				{
					if (iVar4 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar4 - 2)) * 1f));
					}
				}
				else if (iVar4 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar4 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (to_float(iVar5) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * to_float(iVar5));
				}
				if (bVar9)
				{
					if (iVar5 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar5 - 2)) * 1f));
					}
				}
				else if (iVar5 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar5 - 1)) * 1f));
				}
			}
			if (!uVar2 & 64 == 0)
			{
				fVar7 = (fVar7 + (0.95f * fVar6));
			}
			if (!uVar2 & 4 == 0 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -0.5f);
			}
			if ((!uVar2 & 32 == 0 && uVar2 & 4 == 0) && uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -1f);
			}
			if (!bParam3 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + (4.2f * -0.5f));
			}
			if (!iParam7 == 0)
			{
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_161(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_161(iParam7, 1.5f);
				}
				if (fVar10 > 1.8f)
				{
					fVar7 = (fVar7 + ((fVar10 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (vmag(vParam4) > 0f)
	{
		if (!func_163(vParam0, *fParam1, vParam4))
		{
			if (bParam3 || ((uVar2 & 1024 != 0 || vParam0.z == 0f) && bParam6))
			{
				*fParam1 = (*fParam1 + 180f);
			}
			else if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar7 < 0f)
	{
		fVar7 = 0f;
	}
	vVar0 = { _GET_OBJECT_OFFSET_FROM_COORDS(vParam0, *fParam1, fVar7, 0f, 0f) };
	if (bParam3)
	{
		if (0xA0F8A7517A273C05(vParam0, *fParam1, &vVar11))
		{
			vVar12 = { vVar11 - vParam0 };
			if (!iParam7 == 0)
			{
				vVar13 = { vVar12 / FtoV(vmag(vVar12)) };
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_161(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_161(iParam7, 1.5f);
				}
				vVar13 = { vVar13 * FtoV((fVar10 * 0.5f)) };
				vVar12 = { vVar12 - vVar13 };
				vVar11 = { vParam0 + vVar12 };
			}
			vVar13 = { vVar0 - vVar11 };
			vVar0 = { vVar11 };
		}
	}
	return vVar0;
}

float func_161(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	func_36(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
	fVar2 = (fVar1 - fVar0);
	if (fVar2 < fParam1)
	{
		return fParam1;
	}
	return fVar2;
}

int func_162(vector3 vParam0)
{
	float fVar0;
	
	if (GET_GROUND_Z_FOR_3D_COORD(vParam0.x, vParam0.y, (vParam0.z + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - vParam0.z);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_163(vector3 vParam0, float fParam1, vector3 vParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { 0f, 1f, 0f };
	func_20(&vVar0, 0f, 0f, fParam1);
	vVar1 = { vParam2 - vParam0 };
	if (func_16(vVar1, vVar0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_164(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_32(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_2412176[iVar1])
	{
		if (func_31(vParam0, &(Global_2411473[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2412176[8])
	{
		if (func_31(vParam0, &(Global_2411473[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_165(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2405071.f_26.f_18)
	{
		switch (Global_2405071.f_26.f_17)
		{
			case 0:
				if (func_143(*uParam0, Global_2405071.f_26.f_10, Global_2405071.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_59(*uParam0, Global_2405071.f_26.f_10, Global_2405071.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (IS_POINT_IN_ANGLED_AREA(*uParam0, Global_2405071.f_26.f_10, Global_2405071.f_26.f_13, Global_2405071.f_26.f_16, 0, true))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_21(*uParam0, Global_2405071.f_26.f_10, Global_2405071.f_26.f_13, Global_2405071.f_26.f_16, Global_2405071.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_166(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	float fVar8;
	bool bVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	vector3 vVar13;
	var uVar14;
	
	if (Global_2405071.f_1744 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!vmag(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_45(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_165(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2412469.f_162 = 0;
		Global_2412469.f_163 = 0;
		iVar4 = 0;
		while (iVar4 < 40)
		{
			Global_2412469[iVar4 /*3*/] = { 0f, 0f, 0f };
			Global_2412469.f_121[iVar4] = 0f;
			iVar4++;
		}
		func_167(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_2405071.f_1744)
		{
			iVar1 = Global_2405071.f_2150[iVar0];
			if (iVar1 > -1 && iVar1 < 101)
			{
				vVar2 = { Global_2405071.f_1745[iVar1 /*4*/] };
				fVar3 = Global_2405071.f_1745[iVar1 /*4*/].f_3;
				if (vmag(vVar2) > 0f)
				{
					if ((uParam2->f_57 && vdist(vVar2, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && vdist(vVar2.x, vVar2.y, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_155(vVar2, fVar3, uParam2->f_34, PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_45(uParam2->f_35, &vVar2, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar5 = uParam2->f_31;
										bVar6 = true;
										iVar7 = 1;
										fVar8 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar5 = 0;
											bVar6 = false;
											iVar7 = 0;
											fVar8 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar5 = 0;
											bVar6 = false;
											iVar7 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar8 = (fVar8 * 0.375f);
											}
										}
										else
										{
											bVar6 = true;
											iVar7 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar8 = (fVar8 * 0.375f);
												}
											}
										}
										bVar9 = false;
										if (!func_154(vVar2, fVar3, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_171(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar9 = true;
												}
											}
											else if (func_171(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_152(vVar2, fVar3, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar9 = true;
											}
										}
										if (bVar9)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar11 = 0f;
												if (uParam2->f_52)
												{
													iVar10 = func_151(vVar2, uParam2->f_54, &fVar11);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar10 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar10 < uParam2->f_53)
														{
															iVar4 = 0;
															while (iVar4 < Global_2412469.f_162)
															{
																Global_2412469[iVar4 /*3*/] = { 0f, 0f, 0f };
																Global_2412469.f_121[iVar4] = 0f;
																iVar4++;
															}
															Global_2412469.f_162 = 0;
															uParam2->f_53 = iVar10;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2412469.f_162 == 0)
														{
															Global_2412469[0 /*3*/] = { vVar2 };
															Global_2412469.f_121[0] = fVar3;
														}
														else
														{
															iVar4 = 0;
															while (iVar4 < Global_2412469.f_162 + 1)
															{
																if (iVar4 < 40)
																{
																	if (vdist2(vVar2, uParam2->f_35) < vdist2(Global_2412469[iVar4 /*3*/], uParam2->f_35))
																	{
																		func_150(vVar2, fVar3, iVar4);
																		iVar4 = Global_2412469.f_162 + 1;
																	}
																}
																iVar4++;
															}
														}
														Global_2412469.f_162++;
														if (Global_2412469.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405071.f_1744;
															}
															else if (Global_2412469.f_162 == 40)
															{
																iVar0 = Global_2405071.f_1744;
															}
														}
													}
													else
													{
														Global_2412469[Global_2412469.f_162 /*3*/] = { vVar2 };
														Global_2412469.f_121[Global_2412469.f_162] = fVar3;
														Global_2412469.f_162++;
														if (Global_2412469.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405071.f_1744;
															}
															else if (Global_2412469.f_162 == 40)
															{
																iVar0 = Global_2405071.f_1744;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { vVar2 };
												*uParam1 = fVar3;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { vVar2 };
										*uParam1 = fVar3;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_2412469.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2412469[0 /*3*/] };
				*uParam1 = Global_2412469.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2412469.f_163 > 0 && !Global_2412469.f_163 == Global_2412469.f_162)
				{
					func_148(0, uParam2);
				}
				iVar12 = GET_RANDOM_INT_IN_RANGE(0, Global_2412469.f_162);
				vVar13 = { Global_2412469[0 /*3*/] };
				uVar14 = Global_2412469.f_121[0];
				Global_2412469[0 /*3*/] = { Global_2412469[iVar12 /*3*/] };
				Global_2412469.f_121[0] = Global_2412469.f_121[iVar12];
				Global_2412469[iVar12 /*3*/] = { vVar13 };
				Global_2412469.f_121[iVar12] = uVar14;
				*uParam0 = { Global_2412469[0 /*3*/] };
				*uParam1 = Global_2412469.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_167(vector3 vParam0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2405071.f_1744)
	{
		uVar1 = func_168(vParam0, fVar0, &fVar0);
		Global_2405071.f_2150[iVar2] = uVar1;
		iVar2++;
	}
}

int func_168(vector3 vParam0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2405071.f_1744)
	{
		fVar2 = vdist2(vParam0, Global_2405071.f_1745[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam1)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam2 = fVar1;
	return iVar0;
}

bool func_169(int iParam0)
{
	return iParam0 == 50;
}

void func_170(float fParam0, float fParam1)
{
	ADD_NAVMESH_REQUIRED_REGION(fParam0, fParam1, 0.1f);
	Global_2405071.f_2464 = GET_ID_OF_THIS_THREAD();
	Global_2405071.f_2462 = 1;
	Global_2405071.f_2465 = 0xBA7F0B77D80A4EB7();
}

int func_171(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	Global_2405071.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (IS_ANY_VEHICLE_NEAR_POINT(vParam0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (IS_ANY_PED_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam2) || IS_ANY_PED_NEAR_POINT(vParam0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (bParam11)
	{
		if (GET_NUMBER_OF_FIRES_IN_RANGE(vParam0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (fParam12 > 0f)
	{
		if (func_126(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_114(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405071.f_2++;
	return 1;
}

void func_172()
{
	func_177();
	func_176();
	func_175();
	func_174();
	func_173();
}

void func_173()
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 128)
	{
		Global_2408003[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_174()
{
	struct<10> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		Global_2405071.f_2481.f_90[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_175()
{
	struct<4> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		Global_2405071.f_2481.f_57[iVar1 /*4*/] = { Var0 };
		iVar1++;
	}
}

void func_176()
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		Global_2405071.f_2481.f_6[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_177()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2405071.f_2481 = { Var0 };
}

void func_178()
{
	if (Global_2405071.f_2462)
	{
		if (GET_ID_OF_THIS_THREAD() == Global_2405071.f_2464)
		{
			REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		else
		{
			REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		Global_2405071.f_2462 = 0;
	}
}

int func_179(bool bParam0)
{
	if (IS_SCREEN_FADED_OUT())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_180(vector3 vParam0, float fParam1, var uParam2, var uParam3, var uParam4)
{
	struct<17> Var0;
	struct<18> Var1;
	vector3 vVar2;
	
	if (uParam4->f_5 > (fParam1 - 20f))
	{
		uParam4->f_5 = (fParam1 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var1.f_16 = 1;
	Var1.f_22 = 1;
	Var1.f_23 = 1;
	Var1.f_24 = 1;
	Var1 = { vParam0 };
	Var1.f_3 = uParam4->f_11;
	Var1.f_4 = fParam1;
	Var1.f_5 = 0;
	Var1.f_6 = 1;
	Var1.f_7 = 0;
	Var1.f_15 = 0;
	Var1.f_16 = 1;
	Var1.f_17 = 0;
	if (func_9(&Var1, uParam4, &Var0))
	{
		if ((uParam4->f_12 > 0f && uParam4->f_7) && uParam4->f_8)
		{
			vVar2 = { vParam0 - Var0[0 /*3*/] };
			if (vVar2.z > uParam4->f_12)
			{
				Var0[0 /*3*/] = { vParam0 };
				Var0.f_16[0] = uParam4->f_11;
			}
		}
		*uParam2 = { Var0[0 /*3*/] };
		*uParam3 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_181(var uParam0)
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

void func_182(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_183(uParam0, 0, 0);
		}
	}
}

void func_183(var uParam0, bool bParam1, bool bParam2)
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

void func_184()
{
	switch (vLocal_62[PARTICIPANT_ID_TO_INT() /*3*/].f_2)
	{
		case 0:
			func_209();
			func_207();
			if (func_196())
			{
				func_188();
				func_187();
				func_185(35);
				vLocal_62[PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 1;
			}
			else if (Local_60.f_8 >= 1)
			{
				func_187();
				vLocal_62[PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (Local_60.f_8 >= 2)
			{
				vLocal_62[PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_185(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_186() /*10828*/].f_6168.f_4015[iVar0 /*3*/] == iParam0)
		{
			if (Global_1312570.f_1[iVar0] == -1)
			{
				Global_1312570.f_1[iVar0] = iParam0;
				Global_1312570 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_186()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_187()
{
	if (DOES_BLIP_EXIST(iLocal_65))
	{
		REMOVE_BLIP(&iLocal_65);
	}
}

void func_188()
{
	if (!IS_BIT_SET(Global_2437549.f_3880, 0))
	{
		SET_BIT(&(Global_2437549.f_3880), 0);
		func_189();
	}
	else
	{
		SET_BIT(&(Global_2437549.f_3880), 1);
	}
}

void func_189()
{
	func_190(1188, -1);
}

void func_190(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_194(iParam0, func_195(iParam1), 0);
	iVar0++;
	if (!func_193(iParam0))
	{
		func_192(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_191(iParam0, iVar0, iParam1, 1);
	}
}

void func_191(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2542527[iParam0 /*3*/][func_195(iParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1384207[func_195(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1384213[func_195(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1384219[func_195(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1384225[func_195(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1384177[func_195(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1384183[func_195(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1384189[func_195(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1384195[func_195(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1384147[func_195(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1384153[func_195(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1384159[func_195(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1384165[func_195(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1384237[func_195(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1384243[func_195(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1384249[func_195(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1384255[func_195(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1384267[func_195(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1384273[func_195(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1384279[func_195(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1384285[func_195(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2578592[0 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2578592[1 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2578592[2 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2578592[3 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 9509:
			Global_2578729[func_195(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1384291[func_195(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1384297[func_195(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1384303[func_195(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1384315[func_195(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2578659[0 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2578659[1 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2578659[2 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2578659[3 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2578659[4 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2578732[0 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2578732[1 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2578732[2 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2578732[3 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2578732[4 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2578748[0 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2578748[1 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2578748[2 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2578748[3 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2578748[4 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2578659[5 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2578592[4 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2578764[func_195(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2578773[func_195(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2578767[func_195(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2578776[func_195(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2578770[func_195(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2578779[func_195(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2578782[func_195(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2578659[6 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2578592[5 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2578659[7 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2578592[6 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2578659[8 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2578592[7 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2578659[9 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2578592[8 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2578659[10 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2578592[9 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2578659[11 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2578592[10 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2578659[12 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2578592[11 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2578659[13 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2578592[12 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2578659[14 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2578592[13 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2578659[15 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2578592[14 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2578659[16 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2578592[15 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2578659[17 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2578592[16 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2578592[17 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2578592[18 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2578592[19 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2578592[20 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2578785[func_195(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2578788[func_195(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2578791[func_195(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2578794[func_195(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2578797[func_195(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2578800[func_195(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2578803[func_195(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2578806[func_195(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2578809[func_195(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2578812[func_195(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2578815[func_195(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2578818[func_195(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2578821[func_195(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2578824[func_195(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2578592[21 /*3*/][func_195(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_192(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_195(iParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, iParam3);
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
	iVar0 = Global_2542527[iParam0 /*3*/][func_195(iParam1)];
	if (STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_195(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_142();
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

int func_196()
{
	struct<14> Var0;
	
	if (NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2))
	{
		if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_2))
		{
			if (IS_ENTITY_ATTACHED_TO_ENTITY(IS_ENTITY_ATTACHED_TO_ENTITY(Local_60.f_2), IS_ENTITY_ATTACHED_TO_ENTITY()) && func_206(Local_60.f_2))
			{
				func_205(&(Local_60.f_2));
				if (DOES_BLIP_EXIST(iLocal_65))
				{
					REMOVE_BLIP(&iLocal_65);
				}
				if (!func_204(1))
				{
					func_199("ABB_BOXCT", 1);
				}
				Var0.f_2 = -428985155;
				Var0.f_10 = PLAYER_ID();
				Var0.f_3 = uLocal_64;
				func_197(Var0, func_198(1));
				SET_BIT(&(vLocal_62[SET_BIT() /*3*/].f_1), 0);
				return 1;
			}
		}
	}
	return 0;
}

void func_197(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 564131320;
	Param0.f_1 = PLAYER_ID();
	if (!iParam13 == 0)
	{
		TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam13);
	}
}

int func_198(int iParam0)
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
			if (func_26(iVar2, 0, 0))
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

int func_199(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	iVar0 = END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
	func_200(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_200(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_203() || !NETWORK_IS_ACTIVITY_SESSION()) || !func_140(NETWORK_IS_ACTIVITY_SESSION(), 0))
	{
		return;
	}
	iVar0 = func_201(iParam2);
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

int func_201(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1671392 - 1))
	{
		if (iParam0 > Global_1671392.f_5[iVar0 /*53*/].f_1)
		{
			func_202(iVar0);
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

void func_202(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1671392.f_5[iVar0 /*53*/] = { Global_1671392.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_203()
{
	return IS_DLC_PRESENT(-1762644250);
}

int func_204(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_1627444 > 0;
		
		case 2:
			return Global_1627444.f_1 > 0;
		
		case 3:
			return Global_1627444.f_2 > 0;
		
		case 4:
			return Global_1627444.f_4 > 0;
		
		case 5:
			return Global_1627444.f_3 > 0;
		
		default:
	}
	return 0;
}

void func_205(var uParam0)
{
	int iVar0;
	
	if (NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (!NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
		{
		}
	}
	if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NET_TO_ENT(*uParam0);
		DELETE_ENTITY(&iVar0);
	}
}

int func_206(int iParam0)
{
	if (NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

void func_207()
{
	if (!DOES_BLIP_EXIST(iLocal_65))
	{
		if (NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2))
		{
			iLocal_65 = ADD_BLIP_FOR_ENTITY(ADD_BLIP_FOR_ENTITY(Local_60.f_2));
			if (func_208())
			{
				SET_BLIP_SCALE(iLocal_65, 0.85f);
			}
			else
			{
				SET_BLIP_SCALE(iLocal_65, 1.2f);
			}
			SET_BLIP_SPRITE(iLocal_65, 403);
			SET_BLIP_COLOUR(iLocal_65, 2);
			SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_65, "ABB_BLIPN");
		}
	}
}

bool func_208()
{
	if (NETWORK_IS_ACTIVITY_SESSION())
	{
		return IS_BIT_SET(Global_4456448.f_195024, 0);
	}
	return ((IS_BIT_SET(Global_4456448.f_195024, 0) || Global_1654024) && IS_BIT_SET(joaat("fm_deathmatch_creator")) > 0);
}

void func_209()
{
	int iVar0;
	
	if (!IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		iVar0 = func_194(1190, -1, 0);
		if (!IS_BIT_SET(iVar0, 14))
		{
			SET_BIT(&iVar0, 14);
			func_192(1190, iVar0, -1, 1, 0);
		}
	}
}

int func_210()
{
	return Local_60;
}

int func_211()
{
	REQUEST_MODEL(joaat("prop_drug_package_02"));
	if (HAS_MODEL_LOADED(joaat("prop_drug_package_02")))
	{
		return 1;
	}
	return 0;
}

int func_212(int iParam0)
{
	return vLocal_62[iParam0 /*3*/];
}

int func_213()
{
	var uVar0;
	
	func_221(&uVar0);
	if (Global_1312850 == 0)
	{
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_220())
	{
		return 1;
	}
	if (Global_2461241)
	{
		return 1;
	}
	if (func_219())
	{
		return 1;
	}
	if (func_218(159))
	{
		if (!func_217())
		{
			return 1;
		}
	}
	if (func_218(157))
	{
		return 1;
	}
	if (!NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_214() != 0)
	{
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_214()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_214()
{
	switch (func_216())
	{
		case 0:
			return func_215();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_215()
{
	switch (Global_2461343)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_216()
{
	return Global_30736;
}

bool func_217()
{
	return Global_2448961.f_598;
}

int func_218(int iParam0)
{
	if (GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_219()
{
	return Global_2458999;
}

bool func_220()
{
	return Global_2448961.f_593;
}

void func_221(var uParam0)
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
					func_222(iVar0);
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

void func_222(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_26(vVar0.y, 1, 1))
		{
			iVar1 = GET_PLAYER_PED(vVar0.y);
			if (DOES_ENTITY_EXIST(iVar1))
			{
				if (IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && IS_VEHICLE_WINDOW_INTACT())
					{
						if (func_223(iVar2, &bVar3))
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

int func_223(int iParam0, var uParam1)
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

void func_224()
{
	wait(0);
}

int func_225(int iParam0)
{
	return Global_1590446[iParam0 /*871*/];
}

void func_226()
{
	Global_1384381 = -1;
	if (DOES_BLIP_EXIST(iLocal_65))
	{
		REMOVE_BLIP(&iLocal_65);
	}
	func_229();
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2) && NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2))
			{
				func_205(&(Local_60.f_2));
			}
			Local_60 = 4;
		}
	}
	if (IS_BIT_SET(Local_60.f_1, 8))
	{
		func_228();
	}
	func_227();
}

void func_227()
{
	TERMINATE_THIS_THREAD();
}

void func_228()
{
	Global_2531497.f_859 = 0;
	Global_2531497.f_859.f_1 = { 0f, 0f, 0f };
	Global_2531497.f_859.f_4 = 0f;
	Global_2531497.f_859.f_8 = 0;
	CLEAR_BIT(&(Global_2531497.f_859.f_7), 0);
}

void func_229()
{
	if (IS_BIT_SET(iLocal_63, 4))
	{
		SET_PLAYER_WEAPON_DAMAGE_MODIFIER(SET_PLAYER_WEAPON_DAMAGE_MODIFIER(), 0.72f);
		SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(), 1f, 1);
		SET_PLAYER_WEAPON_DEFENSE_MODIFIER(SET_PLAYER_WEAPON_DEFENSE_MODIFIER(), 1f);
		SET_PLAYER_MELEE_WEAPON_DEFENSE_MODIFIER(SET_PLAYER_MELEE_WEAPON_DEFENSE_MODIFIER(), 1f);
		func_230(1);
		CLEAR_BIT(&iLocal_63, 5);
		CLEAR_BIT(&iLocal_63, 7);
		CLEAR_BIT(&iLocal_63, 4);
	}
}

void func_230(int iParam0)
{
	char* sVar0;
	
	sVar0 = func_231(iParam0, 0);
	ANIMPOSTFX_STOP(sVar0);
}

char* func_231(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1)
			{
				return "MP_Bull_tost_Out";
			}
			else
			{
				return "MP_Bull_tost";
			}
			break;
		
		case 2:
			if (bParam1)
			{
				return "MP_Powerplay_Out";
			}
			else
			{
				return "MP_Powerplay";
			}
			break;
		
		case 3:
			if (bParam1)
			{
				return "MP_Killstreak_Out";
			}
			else
			{
				return "MP_Killstreak";
			}
			break;
		
		case 4:
			if (bParam1)
			{
				return "MP_Loser_Streak_Out";
			}
			else
			{
				return "MP_Loser_Streak";
			}
			break;
		
		case 6:
			if (bParam1)
			{
				return "BikerFilterOut";
			}
			else
			{
				return "BikerFilter";
			}
			break;
	}
	return "";
}

int func_232(struct<21> Param0)
{
	func_236(func_237(Param0), Param0);
	IS_SPHERE_VISIBLE_TO_PLAYER(1);
	func_234(0, -1, 0);
	NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_60, 11);
	NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&vLocal_62, 97);
	if (!func_233())
	{
		return 0;
	}
	SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_60.f_7 = Param0.f_16;
		Global_1384381 = Local_60.f_7;
		Local_60.f_3 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), false) };
		if (!func_4(Global_2531497.f_859.f_1))
		{
			SET_BIT(&(Local_60.f_1), 8);
		}
	}
	bLocal_68 = NETWORK_END_TUTORIAL_SESSION();
	vLocal_62[PARTICIPANT_ID_TO_INT() /*3*/] = 0;
	return 1;
}

int func_233()
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
		if (func_220())
		{
			return 0;
		}
		if (func_218(157))
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

int func_234(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_227();
			}
			else
			{
				return 0;
			}
		}
		if (!func_235())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_227();
					}
					else
					{
						return 0;
					}
				}
				if (func_220())
				{
					if (!bParam2)
					{
						func_227();
					}
					else
					{
						return 0;
					}
				}
				if (func_218(157))
				{
					if (!bParam2)
					{
						func_227();
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
					func_227();
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
				func_227();
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
			func_227();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_235()
{
	return Global_1312850;
}

void func_236(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_227();
	}
	NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_16);
}

int func_237(int iParam0)
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

__________________________
Native Named by Reliency
1577160129
__________________________
