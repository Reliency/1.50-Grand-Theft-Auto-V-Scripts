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
	var uLocal_61 = 0;
	var uLocal_62 = 10;
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
	var uLocal_73 = 2;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 8;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 8;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	float fLocal_96 = 0f;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	vector3 vLocal_114 = { 0f, 0f, 0f };
	struct<4> Local_115 = { 2, 0, 0, 3 } ;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 2;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 2;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	struct<8> Local_139[32];
	struct<184> Local_140 = { 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_141 = 0;
	bool bLocal_142 = 0;
	bool bLocal_143 = 0;
	bool bLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	struct<21> Local_154 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_96 = ((0.05f + 0.275f) - 0.01f);
	iLocal_112 = -1;
	iLocal_113 = -1;
	vLocal_114 = { -2357.12f, 3250.68f, 106.04f };
	iLocal_149 = -1;
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_183(ScriptParam_154);
	}
	else
	{
		func_180();
	}
	while (true)
	{
		func_179();
		func_171();
		if (func_160() || NETWORK_END_TUTORIAL_SESSION())
		{
			func_180();
		}
		if (NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((func_154() && !Global_262145.f_21455) && !NETWORK_IS_ACTIVITY_SESSION())
			{
				func_149();
			}
			if (func_39())
			{
				func_180();
			}
			if (func_36(PLAYER_ID()))
			{
				if (!IS_BIT_SET(Local_140.f_182, 3))
				{
					SET_BIT(&(Local_140.f_182), 3);
				}
			}
			if (((((((((!Global_1573977 && !func_35(2)) && !func_32(PLAYER_ID(), 0)) && !PLAYER_ID()) && PLAYER_ID(PLAYER_ID())) && !func_30(PLAYER_ID())) && !func_28(func_29(PLAYER_ID()))) && !func_26(PLAYER_ID(), 146)) && !func_22(PLAYER_ID())) && !func_21(PLAYER_ID()))
			{
				if (func_20(GET_ENTITY_COORDS(GET_ENTITY_COORDS(), false), 3, 1000, 0) || func_19(GET_ENTITY_COORDS(GET_ENTITY_COORDS(), false), 1000))
				{
					if (!IS_BIT_SET(Global_2531497.f_4555, 0))
					{
						if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
						{
							if (!func_154())
							{
								func_18();
								if (IS_PED_IN_ANY_PLANE(IS_PED_IN_ANY_PLANE()) || IS_PED_IN_ANY_PLANE(IS_PED_IN_ANY_PLANE()))
								{
									if (func_20(GET_ENTITY_COORDS(GET_ENTITY_COORDS(), false), 3, 0, 0) || func_19(GET_ENTITY_COORDS(GET_ENTITY_COORDS(), false), 0))
									{
										if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) < 4)
										{
											REPORT_CRIME(REPORT_CRIME(), 36, (REPORT_CRIME(4) - REPORT_CRIME(REPORT_CRIME(REPORT_CRIME()))));
										}
										else
										{
											_0xDC64D2C53493ED12(_0xDC64D2C53493ED12());
										}
									}
									else if (!func_17(&(Local_140.f_3)))
									{
										func_14(&(Local_140.f_3));
									}
									else if (func_11(&(Local_140.f_3)) > 20f || Local_140.f_177)
									{
										if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) < 4)
										{
											REPORT_CRIME(REPORT_CRIME(), 36, (REPORT_CRIME(4) - REPORT_CRIME(REPORT_CRIME(REPORT_CRIME()))));
										}
										else
										{
											_0xDC64D2C53493ED12(_0xDC64D2C53493ED12());
										}
									}
								}
								else if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) < 4)
								{
									REPORT_CRIME(REPORT_CRIME(), 36, (REPORT_CRIME(4) - REPORT_CRIME(REPORT_CRIME(REPORT_CRIME()))));
								}
								else
								{
									_0xDC64D2C53493ED12(_0xDC64D2C53493ED12());
								}
							}
							else
							{
								if (Global_2531497.f_6293)
								{
									bLocal_142 = false;
									Global_2531497.f_6293 = 0;
								}
								if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) == 0 && !iLocal_146)
								{
									iLocal_146 = 1;
								}
								if (Global_262145.f_21444 && !func_9(PLAYER_ID()))
								{
									if ((!bLocal_142 && GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) != 0) && iLocal_146)
									{
										CLEAR_PLAYER_WANTED_LEVEL(CLEAR_PLAYER_WANTED_LEVEL());
										SET_MAX_WANTED_LEVEL(0);
										iLocal_145 = 1;
									}
									if (func_2() && !bLocal_142)
									{
										bLocal_142 = true;
										SET_MAX_WANTED_LEVEL(5);
									}
								}
								if (func_2() && !bLocal_142)
								{
									bLocal_142 = true;
								}
								if (bLocal_142)
								{
									if (bLocal_143)
									{
										if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) < 2)
										{
											REPORT_CRIME(REPORT_CRIME(), 36, (REPORT_CRIME(2) - REPORT_CRIME(REPORT_CRIME(REPORT_CRIME()))));
										}
										else
										{
											_0xDC64D2C53493ED12(_0xDC64D2C53493ED12());
										}
									}
									else if (bLocal_144)
									{
										if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) < 3)
										{
											REPORT_CRIME(REPORT_CRIME(), 36, (REPORT_CRIME(3) - REPORT_CRIME(REPORT_CRIME(REPORT_CRIME()))));
										}
										else
										{
											_0xDC64D2C53493ED12(_0xDC64D2C53493ED12());
										}
									}
									else if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) < Global_262145.f_21381)
									{
										REPORT_CRIME(REPORT_CRIME(), 36, (REPORT_CRIME(Global_262145.f_21381) - REPORT_CRIME(REPORT_CRIME(REPORT_CRIME()))));
									}
									else
									{
										_0xDC64D2C53493ED12(_0xDC64D2C53493ED12());
									}
								}
							}
						}
						else
						{
							if (func_17(&(Local_140.f_3)))
							{
								func_1(&(Local_140.f_3));
							}
							if (Local_140.f_177)
							{
								Local_140.f_177 = 0;
							}
							func_18();
						}
					}
					else
					{
						if (!Local_140.f_177)
						{
							Local_140.f_177 = 1;
						}
						func_18();
					}
				}
				else
				{
					if (Local_140.f_177)
					{
						Local_140.f_177 = 0;
					}
					func_18();
				}
			}
			else
			{
				func_18();
			}
		}
		else
		{
			func_180();
		}
	}
}

void func_1(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_2()
{
	int iVar0;
	
	if (((func_20(GET_ENTITY_COORDS(GET_ENTITY_COORDS(), false), 3, 1000, 0) || func_19(GET_ENTITY_COORDS(GET_ENTITY_COORDS(), false), 1000)) && !func_8()) && !func_21(GET_ENTITY_COORDS()))
	{
		if (Global_262145.f_21375)
		{
			return 0;
		}
		if (((IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), -2346.975f, 3259.757f, 31.81074f, -2349.507f, 3261.232f, 33.81074f, 9.5625f, 0, true, 0) || IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), -2054.865f, 3240.977f, 30.51001f, -2056.552f, 3237.846f, 32.50156f, 4.0625f, 0, true, 0)) || IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), -1792.908f, 3091.104f, 31.81257f, -1812.707f, 3102.736f, 39.46682f, 18.187f, 0, true, 0)) || func_7(IS_ENTITY_IN_ANGLED_AREA()))
		{
			bLocal_143 = false;
			bLocal_144 = false;
			return 1;
		}
		if (Global_262145.f_21382)
		{
			if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
			{
				iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
				if (IS_VEHICLE_STOLEN(iVar0))
				{
					if (func_6(iVar0))
					{
						if ((!func_5(iVar0, 1) && !func_4(iVar0)) && !func_3(iVar0))
						{
							bLocal_143 = true;
							bLocal_144 = false;
							return 1;
						}
					}
				}
			}
		}
		else if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
		{
			if (IS_VEHICLE_STOLEN(IS_VEHICLE_STOLEN(IS_VEHICLE_STOLEN(), 0)))
			{
				if ((!func_5(GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0), 1) && !func_4(GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0))) && !func_3(GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0)))
				{
					bLocal_143 = true;
					bLocal_144 = false;
					return 1;
				}
			}
		}
		if (Global_2531497.f_6291 || Global_2531497.f_6292)
		{
			if (Global_2531497.f_6292)
			{
				bLocal_143 = false;
				bLocal_144 = true;
			}
			else
			{
				bLocal_143 = true;
				bLocal_144 = false;
			}
			Global_2531497.f_6291 = 0;
			Global_2531497.f_6292 = 0;
			return 1;
		}
	}
	return 0;
}

int func_3(int iParam0)
{
	int iVar0;
	
	if (IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3) && DECOR_IS_REGISTERED_AS_TYPE(iParam0, "MPBitset"))
		{
			iVar0 = DECOR_GET_INT(iParam0, "MPBitset");
			if (IS_BIT_SET(iVar0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_4(int iParam0)
{
	if ((DECOR_IS_REGISTERED_AS_TYPE("CreatedByPegasus", 2) && DECOR_IS_REGISTERED_AS_TYPE(iParam0, "CreatedByPegasus")) && DECOR_IS_REGISTERED_AS_TYPE(iParam0, "CreatedByPegasus"))
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0, bool bParam1)
{
	if (Global_76577)
	{
		if (DOES_ENTITY_EXIST(iParam0) && (!bParam1 || DOES_ENTITY_EXIST(iParam0, 0)))
		{
			if (DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_6(int iParam0)
{
	int iVar0;
	
	iVar0 = GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("barracks"):
		case joaat("barracks2"):
		case joaat("barracks3"):
		case joaat("besra"):
		case joaat("buzzard"):
		case joaat("buzzard2"):
		case joaat("cargobob"):
		case joaat("crusader"):
		case 1938952078:
		case joaat("lazer"):
		case joaat("rhino"):
		case joaat("titan"):
			return 1;
		
		default:
	}
	return 0;
}

int func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_INTERIOR_FROM_ENTITY(GET_INTERIOR_FROM_ENTITY(iParam0));
	iVar1 = GET_INTERIOR_AT_COORDS_WITH_TYPE(-2346.975f, 3259.757f, 31.81074f, "v_tower");
	if (IS_VALID_INTERIOR(iVar0) && IS_VALID_INTERIOR(iVar1))
	{
		if ((iVar0 == iVar1 && !IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(iParam0), -2345.4f, 3270.1f, 31.81f, -2347.9f, 3265.8f, 34.811f, 8.25f, 0, true, 0)) && !IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(iParam0), -2349.3f, 3266.7f, 31.81f, -2350f, 3265.5f, 34.811f, 5.15f, 0, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_8()
{
	return Global_4456448 == 3;
}

int func_9(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_10(iParam0, 9);
	}
	return 0;
}

bool func_10(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

float func_11(int iParam0)
{
	if (func_17(iParam0))
	{
		if (func_13(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_12(IS_BIT_SET(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_12(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = to_float(GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = 0xBA7F0B77D80A4EB7();
		fVar3 = to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (to_float(GET_GAME_TIMER()) / 1000f);
}

bool func_13(var uParam0)
{
	return IS_BIT_SET(*uParam0, 2);
}

void func_14(int iParam0)
{
	if (!func_17(iParam0))
	{
		func_15(iParam0);
	}
}

void func_15(int iParam0)
{
	func_16(iParam0, 0f);
}

void func_16(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_12(IS_BIT_SET(*iParam0, 4)) - fParam1);
	SET_BIT(iParam0, 1);
	CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_17(var uParam0)
{
	return IS_BIT_SET(*uParam0, 1);
}

void func_18()
{
	if (iLocal_145)
	{
		SET_MAX_WANTED_LEVEL(5);
	}
	Global_2531497.f_6291 = 0;
	Global_2531497.f_6292 = 0;
	iLocal_145 = 0;
	bLocal_142 = false;
	bLocal_143 = false;
	iLocal_146 = 0;
}

int func_19(vector3 vParam0, int iParam1)
{
	vector3 vVar0[15];
	vector3 vVar1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = 0;
	vVar0[0 /*3*/] = { -1877.436f, 2783.151f, 31.80618f };
	vVar1[0 /*3*/] = { -1797.873f, 2924.37f, (307.1106f + IntToFloat(iParam1)) };
	fVar2[0] = 88f;
	vVar0[1 /*3*/] = { -1761.116f, 2834.651f, 31.80622f };
	vVar1[1 /*3*/] = { -1720.887f, 2906.419f, (281.8062f + IntToFloat(iParam1)) };
	fVar2[1] = 88f;
	vVar0[2 /*3*/] = { -1761.493f, 2817.68f, 32.37125f };
	vVar1[2 /*3*/] = { -1769.704f, 2913.734f, (281.8066f + IntToFloat(iParam1)) };
	fVar2[2] = 88f;
	vVar0[3 /*3*/] = { -1879.297f, 2772.653f, 29.57795f };
	vVar1[3 /*3*/] = { -1864.521f, 2825.472f, (281.8062f + IntToFloat(iParam1)) };
	fVar2[3] = 88f;
	vVar0[4 /*3*/] = { -2676.74f, 3366.988f, 29.92394f };
	vVar1[4 /*3*/] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam1)) };
	fVar2[4] = 9f;
	vVar0[5 /*3*/] = { -2676.74f, 3366.988f, 29.92394f };
	vVar1[5 /*3*/] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam1)) };
	fVar2[5] = 9.5f;
	vVar0[6 /*3*/] = { -2807.397f, 3264.226f, 29.92764f };
	vVar1[6 /*3*/] = { -2879.805f, 3309.01f, (37.57864f + IntToFloat(iParam1)) };
	fVar2[6] = 9.5f;
	vVar0[7 /*3*/] = { -2808.236f, 3264.634f, 29.92764f };
	vVar1[7 /*3*/] = { -2747.55f, 3187.8f, (37.45682f + IntToFloat(iParam1)) };
	fVar2[7] = 9.5f;
	vVar0[8 /*3*/] = { -2530.996f, 3064.151f, 29.71081f };
	vVar1[8 /*3*/] = { -2748.557f, 3189.939f, (37.45682f + IntToFloat(iParam1)) };
	fVar2[8] = 9.5f;
	vVar0[9 /*3*/] = { -2533.902f, 3062.491f, 29.70715f };
	vVar1[9 /*3*/] = { -2520.674f, 2996.817f, (37.45715f + IntToFloat(iParam1)) };
	fVar2[9] = 9.5f;
	vVar0[10 /*3*/] = { -2500.716f, 2927.103f, 29.45663f };
	vVar1[10 /*3*/] = { -2445.696f, 2896.657f, (37.68009f + IntToFloat(iParam1)) };
	fVar2[10] = 9.5f;
	vVar0[11 /*3*/] = { -2020.543f, 2810.747f, 29.45658f };
	vVar1[11 /*3*/] = { -1927.949f, 2785.779f, (37.67057f + IntToFloat(iParam1)) };
	fVar2[11] = 9.5f;
	vVar0[12 /*3*/] = { -2261.899f, 3376.549f, 29.77859f };
	vVar1[12 /*3*/] = { -2141.067f, 3376.773f, (37.90019f + IntToFloat(iParam1)) };
	fVar2[12] = 9.5f;
	iVar3 = 13;
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (IS_POINT_IN_ANGLED_AREA(vParam0, vVar0[iVar4 /*3*/], vVar1[iVar4 /*3*/], fVar2[iVar4], iVar5, true))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

int func_20(vector3 vParam0, int iParam1, int iParam2, bool bParam3)
{
	vector3 vVar0[15];
	vector3 vVar1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 0;
	switch (iParam1)
	{
		case 1:
			vVar0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			vVar1[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar2[0] = 171.25f;
			vVar0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			vVar1[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar2[1] = 132f;
			vVar0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			vVar1[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar2[2] = 132f;
			iVar3 = 3;
			break;
		
		case 2:
			vVar0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			vVar1[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 247f;
			vVar0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			vVar1[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 149f;
			vVar0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			vVar1[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 185.5f;
			vVar0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			vVar1[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 250f;
			vVar0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			vVar1[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 193.5f;
			vVar0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			vVar1[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 234.5f;
			vVar0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			vVar1[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar2[6] = 16f;
			vVar0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			vVar1[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 80f;
			vVar0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			vVar1[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 142f;
			vVar0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			vVar1[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam2)) };
			fVar2[9] = 30.75f;
			vVar0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			vVar1[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam2)) };
			fVar2[10] = 150f;
			vVar0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			vVar1[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam2)) };
			fVar2[11] = 29.25f;
			vVar0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			vVar1[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam2)) };
			fVar2[12] = 43f;
			iVar3 = 13;
			break;
		
		case 3:
			vVar0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			vVar1[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 255f;
			vVar0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			vVar1[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 180f;
			vVar0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			vVar1[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 205f;
			vVar0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			vVar1[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 86.25f;
			vVar0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			vVar1[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 150.5f;
			vVar0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			vVar1[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 140.5f;
			vVar0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			vVar1[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam2)) };
			fVar2[6] = 90f;
			vVar0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			vVar1[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 100f;
			vVar0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			vVar1[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 248.75f;
			vVar0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			vVar1[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar2[9] = 128f;
			vVar0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			vVar1[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar2[10] = 140f;
			vVar0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			vVar1[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar2[11] = 16f;
			vVar0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			vVar1[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar2[12] = 214.25f;
			vVar0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			vVar1[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar2[13] = 65.75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0;
			}
			vVar1[9 /*3*/].f_2 = (vVar1[9 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[10 /*3*/].f_2 = (vVar1[10 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[11 /*3*/].f_2 = (vVar1[11 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[12 /*3*/].f_2 = (vVar1[12 /*3*/].f_2 + IntToFloat(iVar6));
			vVar1[13 /*3*/].f_2 = (vVar1[13 /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 14;
			break;
		
		case 4:
			vVar0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			vVar1[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam2)) };
			fVar2[0] = 114f;
			vVar0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			vVar1[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam2)) };
			fVar2[1] = 88.5f;
			vVar0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			vVar1[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam2)) };
			fVar2[2] = 133.25f;
			vVar0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			vVar1[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam2)) };
			fVar2[3] = 104.5f;
			vVar0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			vVar1[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam2)) };
			fVar2[4] = 121.75f;
			vVar0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			vVar1[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam2)) };
			fVar2[5] = 84.5f;
			vVar0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			vVar1[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam2)) };
			fVar2[6] = 103.75f;
			vVar0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			vVar1[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam2)) };
			fVar2[7] = 104.25f;
			vVar0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			vVar1[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam2)) };
			fVar2[8] = 91f;
			vVar0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			vVar1[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam2)) };
			fVar2[9] = 51.25f;
			iVar3 = 10;
			break;
		
		case 5:
			vVar0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			vVar1[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam2)) };
			fVar2[0] = 45.75f;
			vVar0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			vVar1[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam2)) };
			fVar2[1] = 99f;
			vVar0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			vVar1[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam2)) };
			fVar2[2] = 81.5f;
			iVar3 = 3;
			break;
		
		case 6:
			vVar0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			vVar1[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam2)) };
			fVar2[0] = 120f;
			vVar0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			vVar1[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar2[1] = 170f;
			vVar0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			vVar1[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar2[2] = 12.5f;
			vVar0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			vVar1[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar2[3] = 9.75f;
			iVar3 = 4;
			break;
		
		case 7:
			vVar0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			vVar1[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam2)) };
			fVar2[0] = 162f;
			vVar0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			vVar1[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam2)) };
			fVar2[1] = 124f;
			vVar0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			vVar1[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam2)) };
			fVar2[2] = 55f;
			vVar0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			vVar1[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam2)) };
			fVar2[3] = 142f;
			iVar3 = 4;
			break;
		
		case 8:
			vVar0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			vVar1[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar2[0] = 7.75f;
			vVar0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			vVar1[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar2[1] = 14.75f;
			vVar0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			vVar1[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar2[2] = 31.5f;
			vVar0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			vVar1[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar2[3] = 30.5f;
			vVar0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			vVar1[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar2[4] = 6.75f;
			iVar3 = 5;
			break;
	}
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (IS_POINT_IN_ANGLED_AREA(vParam0, vVar0[iVar4 /*3*/], vVar1[iVar4 /*3*/], fVar2[iVar4], iVar5, true))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

int func_21(int iParam0)
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

bool func_22(int iParam0)
{
	return func_23(func_24(iParam0));
}

int func_23(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_24(int iParam0)
{
	if (func_25(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_33;
	}
	return -1;
}

int func_25(int iParam0, int iParam1)
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 || (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_26(int iParam0, int iParam1)
{
	if (Global_1628955[iParam0 /*614*/] == iParam1)
	{
		return func_27(iParam0);
	}
	return 0;
}

int func_27(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return IS_BIT_SET(Global_1628955[iVar0 /*614*/].f_1, 0);
	}
	return 0;
}

int func_28(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_27(PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_29(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628955[iVar0 /*614*/];
	}
	return -1;
}

int func_30(int iParam0)
{
	if (func_32(iParam0, 0))
	{
		return 1;
	}
	if (func_31())
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

bool func_31()
{
	return IS_BIT_SET(Global_2359302, 3);
}

bool func_32(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER_ID())
	{
		bVar0 = func_33(-1, 0) == 8;
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

int func_33(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_34();
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

int func_34()
{
	return Global_1312745;
}

bool func_35(int iParam0)
{
	return IS_BIT_SET(Global_1573976, iParam0);
}

int func_36(int iParam0)
{
	if (iParam0 != func_38() && func_37(iParam0, 1, 1))
	{
		return IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309, 3);
	}
	return 0;
}

int func_37(int iParam0, bool bParam1, bool bParam2)
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

int func_38()
{
	return -1;
}

int func_39()
{
	int iVar0;
	
	iVar0 = 0;
	if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (func_126())
		{
			iVar0 = 1;
		}
	}
	if (func_40())
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_40()
{
	int iVar0;
	
	switch (Local_140.f_6)
	{
		case 0:
			func_125();
			if (((((((func_122(PLAYER_ID(), 1, 0) && func_121()) || func_24(PLAYER_ID()) == 159) || func_24(PLAYER_ID()) == 225) || func_24(PLAYER_ID()) == 233) || func_29(PLAYER_ID()) == 236) || Global_1574407) || (PLAYER_ID() && func_8()))
			{
				SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rhino"), true);
			}
			func_119(&(Local_139[PARTICIPANT_ID_TO_INT() /*8*/]), 1);
			Local_140.f_176 = 1;
			Local_140.f_6 = 1;
			break;
		
		case 1:
			if (func_118())
			{
				func_119(&(Local_139[PARTICIPANT_ID_TO_INT() /*8*/]), 2);
				Local_140.f_6 = 2;
			}
			break;
		
		case 2:
			if (func_117(Local_115.f_20, 1))
			{
				Local_140.f_6 = 3;
			}
			break;
		
		case 3:
			if ((!func_122(PLAYER_ID(), 1, 0) && !func_121()) && !func_154())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_111(iVar0);
					iVar0++;
				}
			}
			if (NETWORK_IS_GAME_IN_PROGRESS())
			{
				if ((((func_109() && !func_122(PLAYER_ID(), 1, 0)) && !func_121()) && !PLAYER_ID()) && func_107(PLAYER_ID()) != 6)
				{
					func_48();
				}
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				func_41(iVar0);
				iVar0++;
			}
			if ((((func_24(PLAYER_ID()) == 225 || func_24(PLAYER_ID()) == 233) || func_29(PLAYER_ID()) == 236) || Global_1574407) || (PLAYER_ID() && func_8()))
			{
				SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rhino"), true);
			}
			if (vdist2(GET_ENTITY_COORDS(GET_ENTITY_COORDS(), false), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
			{
				Local_140.f_6 = 4;
			}
			break;
		
		case 4:
			if (((((((func_122(PLAYER_ID(), 1, 0) && func_121()) || func_24(PLAYER_ID()) == 159) || func_24(PLAYER_ID()) == 225) || func_24(PLAYER_ID()) == 233) || func_29(PLAYER_ID()) == 236) || Global_1574407) || (PLAYER_ID() && func_8()))
			{
				SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rhino"), false);
			}
			return 1;
			break;
	}
	return 0;
}

void func_41(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Local_115.f_3[iParam0 /*5*/].f_2 > 2 && NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115.f_3[iParam0 /*5*/]))
	{
		if (IS_ENTITY_DEAD(IS_ENTITY_DEAD(Local_115.f_3[iParam0 /*5*/]), 0))
		{
			if (DOES_BLIP_EXIST(Local_140.f_172[iParam0]))
			{
				REMOVE_BLIP(&(Local_140.f_172[iParam0]));
			}
		}
		else if (!DOES_BLIP_EXIST(Local_140.f_172[iParam0]) && DOES_BLIP_EXIST(DOES_BLIP_EXIST()) >= 2)
		{
			Local_140.f_172[iParam0] = ADD_BLIP_FOR_ENTITY(ADD_BLIP_FOR_ENTITY(Local_115.f_3[iParam0 /*5*/]));
			SET_BLIP_COLOUR(Local_140.f_172[iParam0], 1);
		}
	}
	else if (DOES_BLIP_EXIST(Local_140.f_172[iParam0]))
	{
		REMOVE_BLIP(&(Local_140.f_172[iParam0]));
	}
	switch (Local_115.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (!func_47(Local_139[PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 16))
			{
				Local_139[PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0] = 0;
				func_46(&(Local_139[PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 16);
			}
			break;
		
		case 1:
			if (!func_47(Local_139[PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 1))
			{
				if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
				{
					if (IS_PED_IN_ANY_PLANE(IS_PED_IN_ANY_PLANE()) || IS_PED_IN_ANY_PLANE(IS_PED_IN_ANY_PLANE()))
					{
						if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) >= 4)
						{
							if (func_20(GET_ENTITY_COORDS(GET_ENTITY_COORDS(), false), 3, 500, 0))
							{
								func_46(&(Local_139[PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 1);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!func_47(Local_139[PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 2))
			{
				if (func_45(iParam0))
				{
					iVar2 = GET_PLAYER_PED(Local_115.f_3[iParam0 /*5*/].f_4);
					iVar0 = NET_TO_PED(Local_115.f_3[iParam0 /*5*/].f_1);
					iVar1 = NET_TO_VEH(Local_115.f_3[iParam0 /*5*/]);
					if (!IS_ENTITY_DEAD(iVar2, 0))
					{
						if (IS_PED_IN_ANY_PLANE(iVar2))
						{
							iVar3 = GET_VEHICLE_PED_IS_IN(iVar2, 0);
							if ((!IS_ENTITY_DEAD(iVar0, 0) && !IS_ENTITY_DEAD(iVar1, 0)) && !IS_ENTITY_DEAD(iVar3, 0))
							{
								TASK_PLANE_MISSION(iVar0, iVar1, iVar3, iVar2, TASK_PLANE_MISSION(iVar2, true), 6, 70f, -1f, 30f, 500, 50, 1);
								SET_CURRENT_PED_VEHICLE_WEAPON(iVar0, joaat("vehicle_weapon_space_rocket"));
								SET_PED_CAN_SWITCH_WEAPON(iVar0, false);
							}
						}
					}
				}
				if (func_44(iParam0))
				{
					iVar0 = NET_TO_PED(Local_115.f_3[iParam0 /*5*/].f_1);
					iVar2 = GET_PLAYER_PED(Local_115.f_3[iParam0 /*5*/].f_4);
					if (!IS_ENTITY_DEAD(iVar2, 0))
					{
						if (IS_PED_IN_ANY_PLANE(iVar2))
						{
							SET_VEHICLE_SHOOT_AT_TARGET(iVar0, iVar2, SET_VEHICLE_SHOOT_AT_TARGET(iVar2, true));
						}
					}
				}
				if (func_43(iParam0, 6))
				{
					func_46(&(Local_139[PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 2);
				}
			}
			break;
		
		case 4:
			break;
		
		case 5:
			if (!func_47(Local_139[PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 8))
			{
				if (func_45(iParam0))
				{
					iVar0 = NET_TO_PED(Local_115.f_3[iParam0 /*5*/].f_1);
					iVar1 = NET_TO_VEH(Local_115.f_3[iParam0 /*5*/]);
					if (!IS_ENTITY_DEAD(iVar0, 0) && !IS_ENTITY_DEAD(iVar1, 0))
					{
						TASK_PLANE_MISSION(iVar0, iVar1, 0, 0, -2076.374f, 3112.294f, 33.13584f, 9, 70f, -1f, 30f, 500, 50, 1);
					}
				}
				if (func_43(iParam0, 9))
				{
					func_46(&(Local_139[PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 8);
				}
			}
			break;
		
		case 6:
			if (NETWORK_DOES_NETWORK_ID_EXIST(Local_115.f_3[iParam0 /*5*/]) || NETWORK_DOES_NETWORK_ID_EXIST(Local_115.f_3[iParam0 /*5*/].f_1))
			{
				if (!IS_SPHERE_VISIBLE(IS_SPHERE_VISIBLE(IS_SPHERE_VISIBLE(Local_115.f_3[iParam0 /*5*/]), false), 10f) && !IS_SPHERE_VISIBLE(IS_SPHERE_VISIBLE(IS_SPHERE_VISIBLE(Local_115.f_3[iParam0 /*5*/]), false), 10f))
				{
					if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115.f_3[iParam0 /*5*/].f_1) && NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115.f_3[iParam0 /*5*/].f_1))
					{
						iVar4 = NET_TO_ENT(Local_115.f_3[iParam0 /*5*/].f_1);
						DELETE_ENTITY(&iVar4);
					}
					if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115.f_3[iParam0 /*5*/]) && NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115.f_3[iParam0 /*5*/]))
					{
						iVar5 = NET_TO_ENT(Local_115.f_3[iParam0 /*5*/]);
						DELETE_ENTITY(&iVar5);
					}
				}
			}
			else if (func_47(Local_139[PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0], 16))
			{
				func_42(&(Local_139[PARTICIPANT_ID_TO_INT() /*8*/].f_4[iParam0]), 16);
			}
			break;
	}
}

void func_42(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_43(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115.f_3[iParam0 /*5*/]))
	{
		return 1;
	}
	iVar0 = NET_TO_VEH(Local_115.f_3[iParam0 /*5*/]);
	if (IS_ENTITY_DEAD(iVar0, 0))
	{
		return 1;
	}
	if (GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) != iParam1)
	{
		return 0;
	}
	return 1;
}

int func_44(int iParam0)
{
	int iVar0;
	
	if (!NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115.f_3[iParam0 /*5*/].f_1))
	{
		return 0;
	}
	iVar0 = NET_TO_PED(Local_115.f_3[iParam0 /*5*/].f_1);
	if (IS_ENTITY_DEAD(iVar0, 0))
	{
		return 0;
	}
	if (!NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_45(int iParam0)
{
	int iVar0;
	
	if (!NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115.f_3[iParam0 /*5*/]))
	{
		return 0;
	}
	iVar0 = NET_TO_VEH(Local_115.f_3[iParam0 /*5*/]);
	if (IS_ENTITY_DEAD(iVar0, 0))
	{
		return 0;
	}
	if (!NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return 0;
	}
	return 1;
}

void func_46(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_47(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_48()
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	struct<6> Var3;
	
	func_106();
	func_101();
	vVar2 = { vLocal_114 };
	if (((func_20(GET_ENTITY_COORDS(GET_ENTITY_COORDS(), false), 3, 1000, 0) || func_19(GET_ENTITY_COORDS(GET_ENTITY_COORDS(), false), 1000)) || func_99(GET_ENTITY_COORDS())) && func_98(GET_ENTITY_COORDS()))
	{
		bVar0 = true;
	}
	else
	{
		Local_140.f_178 = 0;
	}
	if (IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, true, 0) || IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, true, 0))
	{
		bVar1 = true;
	}
	else
	{
		Local_140.f_179 = 0;
	}
	if (IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, true, 0))
	{
		vVar2 = { -1592.1f, 2797.2f, 17.1f };
		Local_140.f_181 = 1;
	}
	else if (IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, true, 0))
	{
		vVar2 = { -2303.9f, 3388f, 31.3f };
		Local_140.f_181 = 2;
	}
	if (func_96(bVar0, bVar1))
	{
		func_94();
		if (!func_93())
		{
			Global_1573347 = 1;
			func_92(&(Local_140.f_7), 2);
			func_91(&(Local_140.f_7), 2);
			func_90(&(Local_140.f_7), 2, 0, "AIRMECH", 0, 1);
			func_89(&(Local_140.f_7), 2, vVar2);
			Global_20094.f_162 = { vVar2 };
			Var3 = { func_88() };
			if (!IS_STRING_NULL_OR_EMPTY(&Var3))
			{
				if (func_67(&(Local_140.f_7), "SMGFZAU", &Var3, 7, 0, 0, 0))
				{
					func_49(bVar0, bVar1);
				}
			}
		}
	}
	else if (!func_93())
	{
		if (!IS_BIT_SET(Local_140.f_182, 2))
		{
			Global_1573347 = 0;
			func_92(&(Local_140.f_7), 2);
			func_91(&(Local_140.f_7), 2);
			SET_BIT(&(Local_140.f_182), 2);
		}
	}
}

void func_49(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!func_64(16000, -1, -1))
		{
			func_63(16000, 1, -1, 1);
			if (Global_2531497.f_6298)
			{
				if (func_57())
				{
					func_55("AB_ENTRY_HT");
					Local_140.f_180 = 1;
				}
			}
			else if (func_57())
			{
				func_54("AB_ENTRY_HT", -1);
			}
		}
		else if (!func_64(16001, -1, -1))
		{
			func_63(16001, 1, -1, 1);
			if (Global_2531497.f_6298)
			{
				if (func_57())
				{
					func_55("AB_ENTRY_HT");
					Local_140.f_180 = 1;
				}
			}
			else if (func_57())
			{
				func_54("AB_ENTRY_HT", -1);
			}
		}
		Local_140.f_178 = 1;
	}
	else if (bParam1)
	{
		if (!func_64(15999, -1, -1))
		{
			func_63(15999, 1, -1, 1);
			if (Global_2531497.f_6298)
			{
				if (func_57())
				{
					func_55("AB_ENTRY_HT");
					Local_140.f_180 = 1;
				}
			}
			else if (func_57())
			{
				func_54("AB_ENTRY_HT", -1);
			}
		}
		else if (Local_140.f_181 == 1)
		{
			if (!func_64(16002, -1, -1))
			{
				func_63(16002, 1, -1, 1);
				if (Global_2531497.f_6298)
				{
					if (func_57())
					{
						func_55("AB_ENTRY_HT");
						Local_140.f_180 = 1;
					}
				}
				else if (func_57())
				{
					func_54("AB_ENTRY_HT", -1);
				}
			}
		}
		else if (Local_140.f_181 == 2)
		{
			if (func_51(18097, -1, -1) == 0)
			{
				func_50(18097, 1, -1, 1);
				if (Global_2531497.f_6298)
				{
					if (func_57())
					{
						func_55("AB_ENTRY_HT");
						Local_140.f_180 = 1;
					}
				}
				else if (func_57())
				{
					func_54("AB_ENTRY_HT", -1);
				}
			}
		}
		Local_140.f_179 = 1;
		Local_140.f_181 = 0;
	}
	if (IS_BIT_SET(Local_140.f_182, 2))
	{
		CLEAR_BIT(&(Local_140.f_182), 2);
	}
}

var func_50(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_34();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = _GET_PSTAT_INT_HASH((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - _0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = _GET_PSTAT_INT_HASH((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - _0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = _GET_PSTAT_INT_HASH((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - _0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = _GET_PSTAT_INT_HASH((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - _0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = _GET_TUPSTAT_INT_HASH((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - _0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = _GET_TUPSTAT_INT_HASH((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - _0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - _0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - _0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - _0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - _0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - _0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - _0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - _0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - _0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - _0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - _0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - _0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - _0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - _0x94F12ABF9C79E339((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 27258), 0, 1, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - _0x94F12ABF9C79E339((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - _0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - _0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = STAT_SET_MASKED_INT(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_51(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_34();
	}
	iVar0 = 0;
	iVar1 = func_53(iParam0, iParam1);
	iVar2 = func_52(iParam0);
	if (0 != iVar1)
	{
		if (!STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_52(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - _0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - _0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - _0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - _0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - _0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - _0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - _0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - _0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - _0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - _0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - _0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - _0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - _0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - _0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - _0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - _0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - _0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - _0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - _0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - _0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - _0x94F12ABF9C79E339((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - _0x94F12ABF9C79E339((iParam0 - 27258)) * 8) * 8;
	}
	return iVar0;
}

int func_53(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_34();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = _GET_PSTAT_INT_HASH((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = _GET_PSTAT_INT_HASH((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = _GET_PSTAT_INT_HASH((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = _GET_PSTAT_INT_HASH((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = _GET_TUPSTAT_INT_HASH((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = _GET_TUPSTAT_INT_HASH((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
	}
	return iVar0;
}

void func_54(char* sParam0, int iParam1)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

void func_55(char* sParam0)
{
	if (IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		CLEAR_HELP(1);
	}
	if (!func_56(sParam0))
	{
		func_54(sParam0, -1);
	}
}

int func_56(char* sParam0)
{
	BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_57()
{
	if (func_60(PLAYER_ID()) && !func_58(PLAYER_ID(), 0))
	{
		return 1;
	}
	return 0;
}

bool func_58(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_59(iParam0))
		{
			return 0;
		}
	}
	return Global_1628955[iParam0 /*614*/].f_11 != func_38();
}

int func_59(int iParam0)
{
	if (iParam0 != func_38())
	{
		if (Global_1628955[iParam0 /*614*/].f_11 != func_38())
		{
			return Global_1628955[iParam0 /*614*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_60(int iParam0)
{
	int iVar0;
	
	if (func_62(iParam0))
	{
		iVar0 = func_61(iParam0);
		if ((iVar0 == 3 || iVar0 == 4) || iVar0 == 5)
		{
			return 1;
		}
	}
	return 0;
}

int func_61(int iParam0)
{
	if (iParam0 != func_38())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_260;
	}
	return 0;
}

int func_62(int iParam0)
{
	if (iParam0 != func_38())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_260 != 0;
	}
	return 0;
}

int func_63(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	
	if (iParam2 == -1)
	{
		iParam2 = func_34();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = _GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - _0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = _GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - _0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = _GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - _0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = _GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - _0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = _GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - _0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = _GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - _0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = _GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - _0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = _GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - _0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = _GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - _0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = _GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - _0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = _GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - _0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = _GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - _0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = _GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - _0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = _GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - _0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = _GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - _0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = _GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - _0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = _GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - _0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = _GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - _0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar19, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = _GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - _0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar20, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = _GET_NGSTAT_BOOL_HASH((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - _0xF4D8E7AC2A27758C((iParam0 - 28098)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar21, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = _GET_NGSTAT_BOOL_HASH((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - _0xF4D8E7AC2A27758C((iParam0 - 28355)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar22, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_64(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_34();
	}
	iVar1 = func_66(iParam0, iParam1);
	uVar2 = func_65(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_65(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - _0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - _0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - _0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - _0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - _0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - _0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - _0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - _0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - _0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - _0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - _0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - _0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - _0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - _0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - _0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - _0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - _0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - _0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - _0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - _0xF4D8E7AC2A27758C((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - _0xF4D8E7AC2A27758C((iParam0 - 28355)) * 64);
	}
	return iVar0;
}

int func_66(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_34();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = _GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = _GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = _GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = _GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = _GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = _GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	return iVar0;
}

bool func_67(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_87(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	return func_68(sParam2, iParam3, 0);
}

int func_68(char* sParam0, int iParam1, bool bParam2)
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam1 > Global_20807)
			{
				if (Global_20812 == 0)
				{
					STOP_SCRIPTED_CONVERSATION(false);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
					Global_20816 = 0;
					Global_20815 = 0;
					Global_19485 = 0;
				}
				else
				{
					func_86();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_85(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_84();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_21801 = Global_21802;
		Global_20424.f_370 = Global_21794;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20801 = Global_20802;
		if (Global_20811)
		{
			CLEAR_BIT(&Global_7356, 20);
			CLEAR_BIT(&Global_7357, 17);
			CLEAR_BIT(&Global_7358, 0);
			if (bParam2)
			{
				func_76();
				if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
			{
				if (IS_PED_IN_MELEE_COMBAT(IS_PED_IN_MELEE_COMBAT()))
				{
					return 0;
				}
				if (func_75())
				{
					return 0;
				}
				if (IS_PED_SPRINTING(IS_PED_SPRINTING()))
				{
					return 0;
				}
				if (IS_PED_RAGDOLL(IS_PED_RAGDOLL()))
				{
					return 0;
				}
				if (IS_PED_IN_PARACHUTE_FREE_FALL(IS_PED_IN_PARACHUTE_FREE_FALL()))
				{
					return 0;
				}
				if (GET_IS_PED_GADGET_EQUIPPED(GET_IS_PED_GADGET_EQUIPPED(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_76577)
				{
					if (IS_ENTITY_IN_WATER(IS_ENTITY_IN_WATER()))
					{
						return 0;
					}
					if (IS_PLAYER_CLIMBING(IS_PLAYER_CLIMBING()))
					{
						return 0;
					}
					if (IS_PED_PLANTING_BOMB(IS_PED_PLANTING_BOMB()))
					{
						return 0;
					}
					if (IS_SPECIAL_ABILITY_ACTIVE(IS_SPECIAL_ABILITY_ACTIVE()))
					{
						return 0;
					}
				}
			}
			if (func_74())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (IS_BIT_SET(Global_7356, 9))
				{
					return 0;
				}
			}
			func_73();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_72();
		func_69();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_20807 || iParam1 == Global_20807)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_86();
	}
	return 0;
}

void func_69()
{
	if (!func_70())
	{
		return;
	}
	if (Global_20811)
	{
		MemCopy(&(Global_1703200.f_1), {Global_20424}, 4);
		Global_1703200 = Global_6671;
		Global_1703200.f_6 = Global_20815;
	}
}

int func_70()
{
	if (!Global_262145.f_28013)
	{
		return 0;
	}
	if (!Global_76577)
	{
		return 0;
	}
	if (PLAYER_ID() == func_38())
	{
		return 0;
	}
	if (func_71(PLAYER_ID()))
	{
		return 0;
	}
	if (IS_BIT_SET(Global_1628955[IS_BIT_SET() /*614*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_71(int iParam0)
{
	return func_10(iParam0, 20);
}

void func_72()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	STOP_SCRIPTED_CONVERSATION(false);
	Global_20805 = 1;
}

void func_73()
{
	Global_20858 = Global_20857;
	Global_20852 = Global_20853;
	Global_20899 = { Global_20887 };
	Global_20905 = { Global_20893 };
	Global_20860 = Global_20859;
	Global_20929 = { Global_20911 };
	Global_20935 = { Global_20917 };
	Global_20941 = { Global_20923 };
	Global_20947 = { Global_20953 };
	Global_6671 = Global_6672;
	Global_6673 = Global_6674;
	Global_20816 = Global_20817;
	Global_20818 = Global_20819;
	Global_20820 = { Global_20836 };
	Global_20809 = Global_20810;
	Global_21821 = 0;
	Global_20854 = 0;
	Global_20855 = 0;
	CLEAR_BIT(&Global_7357, 16);
}

int func_74()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_75()
{
	int iVar0;
	int iVar1;
	
	if (Global_76577)
	{
		iVar0 = 0;
		GET_CURRENT_PED_WEAPON(GET_CURRENT_PED_WEAPON(), &iVar1, 1);
		if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
	{
		if (GET_PED_CONFIG_FLAG(GET_PED_CONFIG_FLAG(), 78, 1))
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

void func_76()
{
	if (func_83(14))
	{
		if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
		{
			if (GET_ENTITY_MODEL(GET_ENTITY_MODEL()) == Global_111560.f_28045[0 /*29*/])
			{
				Global_19486 = 0;
			}
			else if (GET_ENTITY_MODEL(GET_ENTITY_MODEL()) == Global_111560.f_28045[1 /*29*/])
			{
				Global_19486 = 1;
			}
			else if (GET_ENTITY_MODEL(GET_ENTITY_MODEL()) == Global_111560.f_28045[2 /*29*/])
			{
				Global_19486 = 2;
			}
			else
			{
				Global_19486 = 0;
			}
		}
	}
	else
	{
		Global_19486 = func_77();
		if (Global_19486 == 145)
		{
			Global_19486 = 3;
		}
		if (Global_76577)
		{
			Global_19486 = 3;
		}
		if (Global_19486 > 3)
		{
			Global_19486 = 3;
		}
	}
}

var func_77()
{
	func_78();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_78()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()))
	{
		if (func_81(Global_111560.f_2358.f_539.f_4321) != GET_ENTITY_MODEL(GET_ENTITY_MODEL()))
		{
			iVar0 = func_80(PLAYER_PED_ID());
			if (func_79(iVar0) && (!func_83(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_79(Global_111560.f_2358.f_539.f_4321))
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

bool func_79(int iParam0)
{
	return iParam0 < 3;
}

int func_80(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_81(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_81(int iParam0)
{
	if (func_79(iParam0))
	{
		return func_82(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_82(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_83(int iParam0)
{
	return Global_41396 == iParam0;
}

void func_84()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20094[iVar0 /*10*/].f_1), "", 24);
		Global_20094[iVar0 /*10*/].f_7 = 0;
		Global_20094[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

bool func_85(int iParam0, int iParam1)
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

void func_86()
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

void func_87(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = uParam5;
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

struct<6> func_88()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "", 24);
	if (IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, true, 0) || IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, true, 0))
	{
		if (!func_64(15999, -1, -1))
		{
			StringCopy(&Var0, "SMGFZ_WLK1ST", 24);
		}
		else if (!func_64(16002, -1, -1) || func_51(18097, -1, -1) == 0)
		{
			StringCopy(&Var0, "SMGFZ_WLKENT", 24);
		}
	}
	else if (((func_20(GET_ENTITY_COORDS(GET_ENTITY_COORDS(), false), 3, 1000, 0) || func_19(GET_ENTITY_COORDS(GET_ENTITY_COORDS(), false), 1000)) || func_99(GET_ENTITY_COORDS())) && func_98(GET_ENTITY_COORDS()))
	{
		if (!func_64(16000, -1, -1))
		{
			StringCopy(&Var0, "SMGFZ_FLY1ST", 24);
		}
		else if (!func_64(16001, -1, -1))
		{
			StringCopy(&Var0, "SMGFZ_FLYENT", 24);
		}
	}
	return Var0;
}

void func_89(var uParam0, int iParam1, vector3 vParam2)
{
	uParam0->f_161 = iParam1;
	uParam0->f_162 = { vParam2 };
}

void func_90(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_91(var uParam0, int iParam1)
{
	uParam0->f_161 = -99;
	uParam0->f_162 = { 0f, 0f, 0f };
	if (iParam1 < 0)
	{
	}
}

void func_92(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

int func_93()
{
	if (Global_20805 != 0 || IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_94()
{
	Global_19671 = 0;
	func_95();
}

void func_95()
{
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		RESTART_SCRIPTED_CONVERSATION();
		Global_21816 = 0;
		STOP_SCRIPTED_CONVERSATION(true);
		Global_20805 = 6;
		return;
	}
}

int func_96(bool bParam0, bool bParam1)
{
	if (func_21(PLAYER_ID()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (!Local_140.f_178)
		{
			if (IS_BIT_SET(Local_140.f_182, 1))
			{
				if (IS_PLAYER_CONTROL_ON(IS_PLAYER_CONTROL_ON()))
				{
					if (!func_64(16000, -1, -1) || !func_64(16001, -1, -1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (bParam1)
	{
		if (!Local_140.f_179)
		{
			if (IS_PLAYER_CONTROL_ON(IS_PLAYER_CONTROL_ON()) && IS_PLAYER_CONTROL_ON(IS_PLAYER_CONTROL_ON()) == 0)
			{
				if (!IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0) || func_97())
				{
					if (IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, true, 0))
					{
						if (!func_64(15999, -1, -1) || !func_64(16002, -1, -1))
						{
							if (GET_ENTITY_HEADING(GET_ENTITY_HEADING()) >= -25f && GET_ENTITY_HEADING(GET_ENTITY_HEADING()) <= 125f)
							{
								return 1;
							}
						}
					}
					else if (IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, true, 0))
					{
						if (!func_64(15999, -1, -1) || func_51(18097, -1, -1) == 0)
						{
							if (GET_ENTITY_HEADING(GET_ENTITY_HEADING()) >= 160f && GET_ENTITY_HEADING(GET_ENTITY_HEADING()) <= 290f)
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_97()
{
	int iVar0;
	
	if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
	{
		iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
		if (IS_VEHICLE_STOLEN(iVar0))
		{
			if (func_6(iVar0))
			{
				if (!func_5(iVar0, 1) && !func_4(iVar0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_98(int iParam0)
{
	if (IS_PED_IN_ANY_PLANE(iParam0) || IS_PED_IN_ANY_PLANE(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_99(int iParam0)
{
	if (DOES_ENTITY_EXIST(iParam0) && func_100(iParam0))
	{
		if ((IS_ENTITY_IN_ANGLED_AREA(iParam0, -2013.3f, 2878.6f, 1000f, -2864.6f, 3357.6f, 31f, 400f, 0, true, 0) || IS_ENTITY_IN_ANGLED_AREA(iParam0, -1700f, 3150f, 1000f, -2039f, 3342f, 30f, 175f, 0, true, 0)) || IS_ENTITY_IN_ANGLED_AREA(iParam0, -1950f, 2786f, 1000f, -1856f, 3141f, 31f, 270f, 0, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_100(int iParam0)
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

void func_101()
{
	if (Local_140.f_180)
	{
		if (!func_105(&(Local_140.f_183)))
		{
			func_104(&(Local_140.f_183), 0, 0);
		}
		else if (!func_103(&(Local_140.f_183), 17000, 0))
		{
			if (!func_56("AB_ENTRY_HT"))
			{
				func_54("AB_ENTRY_HT", -1);
			}
		}
		else if (func_103(&(Local_140.f_183), 17000, 0))
		{
			if (func_56("AB_ENTRY_HT"))
			{
				CLEAR_HELP(1);
			}
			func_102(&(Local_140.f_183));
			Local_140.f_180 = 0;
		}
	}
}

void func_102(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_103(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_104(uParam0, bParam2, 0);
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

void func_104(var uParam0, bool bParam1, bool bParam2)
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

bool func_105(var uParam0)
{
	return uParam0->f_1;
}

void func_106()
{
	if (IS_PLAYER_CONTROL_ON(IS_PLAYER_CONTROL_ON()))
	{
		if ((func_20(GET_ENTITY_COORDS(GET_ENTITY_COORDS(), false), 3, 1000, 0) || func_19(GET_ENTITY_COORDS(GET_ENTITY_COORDS(), false), 1000)) || func_99(GET_ENTITY_COORDS()))
		{
			if (!IS_BIT_SET(Local_140.f_182, 0))
			{
				if ((((func_98(PLAYER_PED_ID()) && PLAYER_PED_ID(PLAYER_PED_ID(PLAYER_PED_ID(), 0))) && PLAYER_PED_ID(PLAYER_PED_ID()) == 0) && func_97()) && !Global_1687816)
				{
					if (!IS_BIT_SET(Local_140.f_182, 1) && !IS_BIT_SET(Local_140.f_182, 3))
					{
						SET_BIT(&(Local_140.f_182), 1);
					}
				}
				SET_BIT(&(Local_140.f_182), 0);
			}
		}
		else
		{
			if (IS_BIT_SET(Local_140.f_182, 0))
			{
				CLEAR_BIT(&(Local_140.f_182), 0);
			}
			if (IS_BIT_SET(Local_140.f_182, 1))
			{
				CLEAR_BIT(&(Local_140.f_182), 1);
			}
			if (IS_BIT_SET(Local_140.f_182, 3))
			{
				CLEAR_BIT(&(Local_140.f_182), 3);
			}
			if (Global_1687816)
			{
				Global_1687816 = 0;
			}
		}
	}
}

int func_107(int iParam0)
{
	if (func_24(iParam0) == 233)
	{
		return func_108(iParam0);
	}
	return -1;
}

int func_108(int iParam0)
{
	if (func_25(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_181;
	}
	return -1;
}

int func_109()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_60(PLAYER_ID()))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = INT_TO_PLAYERINDEX(iVar0);
		if (func_37(iVar1, 0, 1))
		{
			if (iVar1 != PLAYER_ID())
			{
				if (func_110(GET_PLAYER_PED(GET_PLAYER_PED()), GET_PLAYER_PED(iVar1)))
				{
					iVar2 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(iVar1), 0);
					if (GET_PED_IN_VEHICLE_SEAT(iVar2, -1, 0) == GET_PED_IN_VEHICLE_SEAT(iVar1))
					{
						if (func_60(iVar1))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_110(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (!IS_PED_IN_ANY_VEHICLE(iParam0, 0) || !IS_PED_IN_ANY_VEHICLE(iParam1, 0))
	{
		return 0;
	}
	return GET_VEHICLE_PED_IS_IN(iParam0, 0) == GET_VEHICLE_PED_IS_IN(iParam1, 0);
}

void func_111(int iParam0)
{
	int iVar0;
	
	if (!NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115[iParam0]))
	{
		return;
	}
	iVar0 = NET_TO_PED(Local_115[iParam0]);
	if (IS_ENTITY_DEAD(iVar0, 0))
	{
		return;
	}
	switch (Local_115.f_21[iParam0])
	{
		case 0:
			if (!func_47(Local_139[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 64))
			{
				Local_139[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0] = 0;
				func_46(&(Local_139[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 64);
			}
			break;
		
		case 1:
			if (!func_47(Local_139[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 1))
			{
				if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
				{
					if (vdist2(GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true), GET_ENTITY_COORDS(iVar0, true)) <= 900f)
					{
						func_46(&(Local_139[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 2:
			if ((!func_47(Local_139[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 2) && vdist2(PARTICIPANT_ID_TO_INT(PARTICIPANT_ID_TO_INT(), true), PARTICIPANT_ID_TO_INT(iVar0, true)) <= 900f) && !func_21(PARTICIPANT_ID_TO_INT()))
			{
				func_90(&(Local_140.f_7), 4, iVar0, "ARMY_Guard01", 0, 1);
				func_116(&(Local_140.f_7), "ARMYAUD", "ARMY_WRN1", 12, 0, 0, 0);
				func_46(&(Local_139[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 2);
			}
			break;
		
		case 3:
			if (!func_47(Local_139[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 4))
			{
				if (func_115(iParam0))
				{
					TASK_AIM_GUN_AT_ENTITY(iVar0, func_114(iParam0), -1, 0);
				}
				if (func_113(iParam0, 1630799643))
				{
					func_46(&(Local_139[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 4);
				}
			}
			break;
		
		case 4:
			if ((!func_47(Local_139[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 8) && vdist2(PARTICIPANT_ID_TO_INT(PARTICIPANT_ID_TO_INT(), false), PARTICIPANT_ID_TO_INT(iVar0, true)) <= 900f) && PARTICIPANT_ID_TO_INT(PARTICIPANT_ID_TO_INT()) < 1)
			{
				if (!func_17(&Local_140))
				{
					func_14(&Local_140);
				}
				if (func_11(&Local_140) >= 7f && !func_21(PLAYER_ID()))
				{
					func_46(&(Local_139[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 8);
					func_116(&(Local_140.f_7), "ARMYAUD", "ARMY_WRN1a", 12, 0, 0, 0);
				}
			}
			else if (func_17(&Local_140))
			{
				func_1(&Local_140);
			}
			if (!func_47(Local_139[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 16))
			{
				if (func_112(iParam0) && vdist2(GET_ENTITY_COORDS(GET_ENTITY_COORDS(), false), GET_ENTITY_COORDS(iVar0, true)) <= 900f)
				{
					func_46(&(Local_139[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 16);
					if (!func_154())
					{
						REPORT_CRIME(REPORT_CRIME(), 36, REPORT_CRIME(4));
					}
					else
					{
						REPORT_CRIME(REPORT_CRIME(), 36, REPORT_CRIME(Global_262145.f_21381));
					}
				}
			}
			if (func_47(Local_139[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 1))
			{
				if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
				{
					if (vdist2(GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true), GET_ENTITY_COORDS(iVar0, true)) > 900f)
					{
						func_42(&(Local_139[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			break;
		
		case 5:
			if (!func_47(Local_139[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 16))
			{
				if (func_112(iParam0) && vdist2(GET_ENTITY_COORDS(GET_ENTITY_COORDS(), false), GET_ENTITY_COORDS(iVar0, true)) <= 900f)
				{
					func_46(&(Local_139[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 16);
					if (!func_154())
					{
						REPORT_CRIME(REPORT_CRIME(), 36, (REPORT_CRIME(4) - REPORT_CRIME(REPORT_CRIME(REPORT_CRIME()))));
					}
					else
					{
						REPORT_CRIME(REPORT_CRIME(), 36, (REPORT_CRIME(Global_262145.f_21381) - REPORT_CRIME(REPORT_CRIME(REPORT_CRIME()))));
					}
				}
			}
			if (func_47(Local_139[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 1))
			{
				if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
				{
					if (vdist2(GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true), GET_ENTITY_COORDS(iVar0, true)) > 900f)
					{
						func_42(&(Local_139[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 1);
					}
				}
			}
			if (!func_113(iParam0, 1630799643))
			{
				if (func_115(iParam0))
				{
					TASK_AIM_GUN_AT_ENTITY(iVar0, func_114(iParam0), -1, 0);
				}
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (func_47(Local_139[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0], 4))
			{
				if (func_115(iParam0))
				{
					CLEAR_PED_TASKS(iVar0);
				}
				if (!func_113(iParam0, 1435919172))
				{
					func_42(&(Local_139[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 4);
					func_42(&(Local_139[PARTICIPANT_ID_TO_INT() /*8*/].f_1[iParam0]), 64);
				}
			}
			break;
	}
}

int func_112(int iParam0)
{
	int iVar0;
	
	if (!NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115[iParam0]))
	{
		return 0;
	}
	iVar0 = NET_TO_PED(Local_115[iParam0]);
	if (IS_ENTITY_DEAD(iVar0, 0))
	{
		return 0;
	}
	if (IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
	{
		return 0;
	}
	if (IS_PED_SHOOTING(IS_PED_SHOOTING()))
	{
		return 1;
	}
	if (IS_PLAYER_FREE_AIMING_AT_ENTITY(IS_PLAYER_FREE_AIMING_AT_ENTITY(), iVar0))
	{
		return 1;
	}
	if (IS_PLAYER_TARGETTING_ENTITY(IS_PLAYER_TARGETTING_ENTITY(), iVar0))
	{
		return 1;
	}
	if (vdist2(GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true), GET_ENTITY_COORDS(iVar0, true)) <= 64f)
	{
		return 1;
	}
	return 0;
}

int func_113(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115[iParam0]))
	{
		return 1;
	}
	iVar0 = NET_TO_PED(Local_115[iParam0]);
	if (IS_ENTITY_DEAD(iVar0, 0))
	{
		return 1;
	}
	if (GET_SCRIPT_TASK_STATUS(iVar0, iParam1) != 1 && GET_SCRIPT_TASK_STATUS(iVar0, iParam1) != 0)
	{
		return 0;
	}
	return 1;
}

int func_114(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	fVar3 = 1E+11f;
	iVar0 = 0;
	while (iVar0 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(iVar0)))
		{
			iVar2 = GET_PLAYER_PED(GET_PLAYER_PED(GET_PLAYER_PED(iVar0)));
			if (!IS_ENTITY_DEAD(iVar2, 0))
			{
				fVar4 = vdist2(GET_ENTITY_COORDS(iVar2, true), GET_ENTITY_COORDS(GET_ENTITY_COORDS(Local_115[iParam0]), true));
				if (fVar4 < fVar3)
				{
					iVar1 = iVar2;
					fVar3 = fVar4;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_115(int iParam0)
{
	int iVar0;
	
	if (!NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115[iParam0]))
	{
		return 0;
	}
	iVar0 = NET_TO_PED(Local_115[iParam0]);
	if (IS_ENTITY_DEAD(iVar0, 0))
	{
		return 0;
	}
	if (!NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_116(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_87(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 1;
	return func_68(sParam2, iParam3, 0);
}

bool func_117(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_118()
{
	if (!HAS_MODEL_LOADED(joaat("s_m_y_marine_01")))
	{
		return 0;
	}
	if (!HAS_MODEL_LOADED(joaat("lazer")))
	{
		return 0;
	}
	if (!HAS_MODEL_LOADED(joaat("s_m_y_pilot_01")))
	{
		return 0;
	}
	return 1;
}

void func_119(var uParam0, int iParam1)
{
	func_120(uParam0, iParam1);
}

void func_120(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_121()
{
	return IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_39.f_18, 0);
}

int func_122(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_123(iParam0))
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

bool func_123(int iParam0)
{
	return func_124(iParam0);
}

bool func_124(int iParam0)
{
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_13.f_1, 0);
}

void func_125()
{
	REQUEST_MODEL(joaat("s_m_y_marine_01"));
	REQUEST_MODEL(joaat("lazer"));
	REQUEST_MODEL(joaat("s_m_y_pilot_01"));
}

int func_126()
{
	int iVar0;
	
	switch (Local_115.f_19)
	{
		case 0:
			if (func_148())
			{
				Local_115.f_19 = 1;
			}
			break;
		
		case 1:
			if (func_147())
			{
				Local_115.f_19 = 2;
			}
			break;
		
		case 2:
			if ((((((func_122(PLAYER_ID(), 1, 0) || func_121()) || func_24(PLAYER_ID()) == 225) || func_24(PLAYER_ID()) == 233) || func_29(PLAYER_ID()) == 236) || Global_1574407) || (PLAYER_ID() && func_8()))
			{
				func_119(&(Local_115.f_20), 1);
				Local_115.f_19 = 3;
			}
			else if (func_145())
			{
				func_119(&(Local_115.f_20), 1);
				Local_115.f_19 = 3;
			}
			break;
		
		case 3:
			if (!func_122(PLAYER_ID(), 1, 0) && !func_121())
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_142(iVar0);
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_129(iVar0);
					iVar0++;
				}
			}
			if ((((func_24(PLAYER_ID()) == 225 || func_24(PLAYER_ID()) == 233) || func_29(PLAYER_ID()) == 236) || Global_1574407) || (PLAYER_ID() && func_8()))
			{
				func_128();
			}
			if (func_127())
			{
				Local_115.f_19 = 4;
			}
			break;
		
		case 4:
			func_128();
			return 1;
			break;
	}
	return 0;
}

int func_127()
{
	if (NETWORK_GET_NUM_PARTICIPANTS() > 1)
	{
		return 0;
	}
	if (vdist2(GET_ENTITY_COORDS(GET_ENTITY_COORDS(), false), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
	{
		return 1;
	}
	return 0;
}

void func_128()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115[iVar0]))
		{
			iVar1 = NET_TO_PED(Local_115[iVar0]);
			if (!IS_ENTITY_DEAD(iVar1, 0))
			{
				SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115.f_3[iVar0 /*5*/].f_1))
		{
			iVar1 = NET_TO_PED(Local_115.f_3[iVar0 /*5*/].f_1);
			if (!IS_ENTITY_DEAD(iVar1, 0))
			{
				SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
			}
		}
		if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115.f_3[iVar0 /*5*/]))
		{
			iVar2 = NET_TO_VEH(Local_115.f_3[iVar0 /*5*/]);
			if (!IS_ENTITY_DEAD(iVar2, 0))
			{
				SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
			}
		}
		iVar0++;
	}
}

void func_129(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	
	if (Local_115.f_3[iParam0 /*5*/].f_2 > 2)
	{
		if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115.f_3[iParam0 /*5*/].f_1))
		{
			if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(Local_115.f_3[iParam0 /*5*/].f_1), 0))
			{
				iVar0 = NET_TO_PED(Local_115.f_3[iParam0 /*5*/].f_1);
				vVar1 = { GET_ENTITY_COORDS(iVar0, true) };
				if (vVar1.z <= -150f)
				{
					SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
					if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115.f_3[iParam0 /*5*/]))
					{
						if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(Local_115.f_3[iParam0 /*5*/]), 0))
						{
							iVar2 = NET_TO_VEH(Local_115.f_3[iParam0 /*5*/]);
							SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
						}
					}
				}
			}
		}
	}
	switch (Local_115.f_3[iParam0 /*5*/].f_2)
	{
		case 0:
			if (func_141(iParam0, 16))
			{
				Local_115.f_3[iParam0 /*5*/].f_4 = -1;
				Local_115.f_3[iParam0 /*5*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (func_139(iParam0))
			{
				Local_115.f_3[iParam0 /*5*/].f_2 = 2;
			}
			break;
		
		case 2:
			vVar3 = { func_138(iParam0) };
			if (!func_137(vVar3))
			{
				if (!0xBEC0816FF5ACBCDA(vVar3, 20f) && !0xBEC0816FF5ACBCDA(vVar3, 20f))
				{
					if (func_132(vVar3, GET_ENTITY_HEADING(GET_ENTITY_HEADING(Local_115.f_3[iParam0 /*5*/].f_4)), iParam0))
					{
						Local_115.f_3[iParam0 /*5*/].f_2 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (func_141(iParam0, 2))
			{
				Local_115.f_3[iParam0 /*5*/].f_2 = 4;
			}
			break;
		
		case 4:
			iVar4 = GET_PLAYER_PED(Local_115.f_3[iParam0 /*5*/].f_4);
			if (!DOES_ENTITY_EXIST(iVar4))
			{
				Local_115.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (IS_ENTITY_DEAD(iVar4, 0))
			{
				Local_115.f_3[iParam0 /*5*/].f_2 = 5;
			}
			else if (IS_PED_IN_ANY_PLANE(iVar4) || IS_PED_IN_ANY_PLANE(iVar4))
			{
				if (func_131(GET_VEHICLE_PED_IS_IN(iVar4, 0)))
				{
					Local_115.f_3[iParam0 /*5*/].f_2 = 5;
				}
			}
			break;
		
		case 5:
			if (func_141(iParam0, 8))
			{
				Local_115.f_3[iParam0 /*5*/].f_2 = 6;
				Local_115.f_3[iParam0 /*5*/].f_4 = -1;
			}
			break;
		
		case 6:
			if (!func_130(iParam0, 16))
			{
				Local_115.f_3[iParam0 /*5*/].f_2 = 0;
			}
			if (func_139(iParam0))
			{
				Local_115.f_3[iParam0 /*5*/].f_2 = 3;
			}
			break;
	}
}

int func_130(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(iVar0)))
		{
			if (func_47(Local_139[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_131(int iParam0)
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

int func_132(vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	if (!NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 1;
	}
	iVar0 = 1;
	if (!NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115.f_3[iParam2 /*5*/]))
	{
		if (!func_134(&(Local_115.f_3[iParam2 /*5*/]), joaat("lazer"), vParam0, fParam1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			iVar0 = 0;
		}
		else
		{
			CONTROL_LANDING_GEAR(CONTROL_LANDING_GEAR(Local_115.f_3[iParam2 /*5*/]), 3);
		}
	}
	if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115.f_3[iParam2 /*5*/]))
	{
		if (!NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115.f_3[iParam2 /*5*/].f_1))
		{
			if (!func_133(&(Local_115.f_3[iParam2 /*5*/].f_1), Local_115.f_3[iParam2 /*5*/], 29, joaat("s_m_y_pilot_01"), -1, 1, 1, 1))
			{
				iVar0 = 0;
			}
			else
			{
				SET_CURRENT_PED_VEHICLE_WEAPON(SET_CURRENT_PED_VEHICLE_WEAPON(Local_115.f_3[iParam2 /*5*/].f_1), joaat("vehicle_weapon_space_rocket"));
				SET_PED_CAN_SWITCH_WEAPON(SET_PED_CAN_SWITCH_WEAPON(Local_115.f_3[iParam2 /*5*/].f_1), false);
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_133(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!CAN_REGISTER_MISSION_OBJECTS(1))
	{
		return 0;
	}
	if (!NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
	{
		return 0;
	}
	if (!IS_VEHICLE_DRIVEABLE(IS_VEHICLE_DRIVEABLE(iParam1), 0))
	{
		return 0;
	}
	*uParam0 = PED_TO_NET(PED_TO_NET(PED_TO_NET(iParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		_SET_ENTITY_SOMETHING(_SET_ENTITY_SOMETHING(*uParam0), bParam7);
		if (NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK_GET_ENTITY_IS_NETWORKED(*uParam0)))
		{
			if (bParam5)
			{
				SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_134(var uParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!IS_MODEL_VALID(iParam1))
	{
		return 0;
	}
	if (!CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == -32878452)
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		CLEAR_AREA_OF_VEHICLES(vParam2, fVar0, 0, 0, 0, 0, false, 0);
	}
	iVar1 = CREATE_VEHICLE(iParam1, vParam2, fParam3, bParam5, bParam4, bParam12);
	if (DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = VEH_TO_NET(iVar1);
		Global_2531497.f_6245 = iVar1;
		if (NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam13)
			{
				_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar1, 1);
			}
			_SET_ENTITY_SOMETHING(iVar1, bParam8);
			if (NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam6)
				{
					SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
				}
				else
				{
					SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 0);
				}
				if (bParam11)
				{
					_SET_NETWORK_ID_SYNC_TO_PLAYER(*uParam0, _SET_NETWORK_ID_SYNC_TO_PLAYER(), 1);
				}
			}
			SET_VEHICLE_IS_STOLEN(iVar1, bParam7);
			0xB2E0C0D6922D31F2(iVar1, 1);
			if (bParam10)
			{
				0xFC40CBF7B90CA77C(iVar1);
				SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_135(vParam2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_135(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_136(PLAYER_ID(), vParam0, iParam2) > -1)
	{
		if ((Global_2405071.f_2910[1 /*6*/].f_5 == iParam3 && Global_2405071.f_2910[1 /*6*/].f_4 == iParam2) && vdist(Global_2405071.f_2910[1 /*6*/], vParam0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405071.f_2910[iVar0 /*6*/] = { Global_2405071.f_2910[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405071.f_2910[1 /*6*/] = { vParam0 };
		Global_2405071.f_2910[1 /*6*/].f_3 = fParam1;
		Global_2405071.f_2910[1 /*6*/].f_4 = iParam2;
		Global_2405071.f_2910[1 /*6*/].f_5 = iParam3;
	}
}

int func_136(int iParam0, vector3 vParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				vVar2 = { vParam1 };
				if (ABSF((Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - vVar2.z)) < 2f)
				{
					vVar2.z = Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (vdist(Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/], vVar2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_137(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_138(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = GET_PLAYER_PED(Local_115.f_3[iParam0 /*5*/].f_4);
	if (IS_ENTITY_DEAD(iVar0, 0))
	{
		return 0f, 0f, 0f;
	}
	vVar1 = { _GET_OBJECT_OFFSET_FROM_COORDS(_GET_OBJECT_OFFSET_FROM_COORDS(iVar0, true), _GET_OBJECT_OFFSET_FROM_COORDS(iVar0), 0f, -250f, (40f * to_float(iParam0))) };
	if (vVar1.z < 100f)
	{
		vVar1.z = 100f;
	}
	return vVar1;
}

int func_139(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = 0;
	while (iVar0 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(iVar0)))
		{
			iVar1 = GET_PLAYER_PED(GET_PLAYER_PED(GET_PLAYER_PED(iVar0)));
			if (!func_140(NETWORK_GET_PLAYER_INDEX(NETWORK_GET_PLAYER_INDEX(iVar0))))
			{
				if (IS_PED_IN_ANY_PLANE(iVar1) || IS_PED_IN_ANY_PLANE(iVar1))
				{
					if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL(iVar0))) >= 4)
					{
						vVar2 = { GET_ENTITY_COORDS(iVar1, false) };
						if (func_20(vVar2, 3, 1000, 0) && vVar2.z > 90f)
						{
							Local_115.f_3[iParam0 /*5*/].f_4 = NETWORK_GET_PLAYER_INDEX(NETWORK_GET_PLAYER_INDEX(iVar0));
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_140(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = GET_PLAYER_PED(iParam0);
	if (!DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	if (IS_ENTITY_DEAD(iVar0, 0))
	{
		return 1;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = GET_PLAYER_PED(Local_115.f_3[iVar1 /*5*/].f_4);
		if (DOES_ENTITY_EXIST(iVar2))
		{
			if (iParam0 == Local_115.f_3[iVar1 /*5*/].f_4)
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_141(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(iVar0)))
		{
			if (!func_47(Local_139[iVar0 /*8*/].f_4[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_142(int iParam0)
{
	switch (Local_115.f_21[iParam0])
	{
		case 0:
			if (func_144(iParam0, 64))
			{
				Local_115.f_21[iParam0] = 1;
			}
			break;
		
		case 1:
			if (func_143(iParam0, 1))
			{
				Local_115.f_21[iParam0] = 2;
			}
			break;
		
		case 2:
			if (func_143(iParam0, 2))
			{
				Local_115.f_21[iParam0] = 3;
			}
			break;
		
		case 3:
			if (func_144(iParam0, 4))
			{
				Local_115.f_21[iParam0] = 4;
			}
			break;
		
		case 4:
			if (func_143(iParam0, 8))
			{
				Local_115.f_21[iParam0] = 5;
			}
			if (!func_143(iParam0, 1))
			{
				Local_115.f_21[iParam0] = 7;
			}
			if (func_143(iParam0, 16))
			{
				Local_115.f_21[iParam0] = 6;
			}
			break;
		
		case 5:
			if (func_143(iParam0, 16))
			{
				Local_115.f_21[iParam0] = 6;
			}
			if (!func_143(iParam0, 1))
			{
				Local_115.f_21[iParam0] = 7;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!func_143(iParam0, 4))
			{
				Local_115.f_21[iParam0] = 0;
			}
			break;
	}
}

int func_143(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(iVar0)))
		{
			if (func_47(Local_139[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_144(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(iVar0)))
		{
			if (!func_47(Local_139[iVar0 /*8*/].f_1[iParam0], iParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_145()
{
	int iVar0;
	
	if (!NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 1;
	}
	iVar0 = 1;
	if (!func_146(&(Local_115[0]), 29, joaat("s_m_y_marine_01"), -2308.4f, 3391f, 30.0601f, 55.8214f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115[0]))
	{
		GIVE_WEAPON_TO_PED(GIVE_WEAPON_TO_PED(Local_115[0]), joaat("weapon_assaultrifle"), 200, true, true);
	}
	if (!func_146(&(Local_115[1]), 29, joaat("s_m_y_marine_01"), -1588.9f, 2792.9f, 16.1385f, 229.437f, 1, 1, 1))
	{
		iVar0 = 0;
	}
	else if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_115[1]))
	{
		GIVE_WEAPON_TO_PED(GIVE_WEAPON_TO_PED(Local_115[1]), joaat("weapon_assaultrifle"), 200, true, true);
	}
	return iVar0;
}

int func_146(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, bool bParam7)
{
	int iVar0;
	
	if (!CAN_REGISTER_MISSION_OBJECTS(1))
	{
		return 0;
	}
	iVar0 = CREATE_PED(iParam1, iParam2, vParam3, fParam4, iParam6, bParam5);
	*uParam0 = PED_TO_NET(iVar0);
	if (NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		_SET_ENTITY_SOMETHING(iVar0, bParam7);
		if (NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
		{
			if (bParam5)
			{
				SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_147()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(iVar1)))
		{
			if (!func_117(Local_139[iVar1 /*8*/], 2))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_148()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(iVar1)))
		{
			if (!func_117(Local_139[iVar1 /*8*/], 1))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_149()
{
	if (func_105(&uLocal_152) && func_103(&uLocal_152, Global_262145.f_21456, 0))
	{
		func_102(&uLocal_152);
	}
	if (func_105(&uLocal_150) && func_103(&uLocal_150, Global_262145.f_21457, 0))
	{
		func_102(&uLocal_150);
		iLocal_147 = 0;
	}
	if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) <= 0)
	{
		if (func_150())
		{
			if (!Global_2531497.f_6299)
			{
				Global_2531497.f_6299 = 1;
				func_54("BASE_EXP_WARN", -1);
			}
			if (!iLocal_147)
			{
				iLocal_147 = 1;
				func_104(&uLocal_152, 0, 0);
				func_104(&uLocal_150, 0, 0);
			}
			else if (!func_105(&uLocal_152))
			{
				SET_MAX_WANTED_LEVEL(5);
				bLocal_142 = true;
				bLocal_143 = true;
				iLocal_147 = 0;
				func_102(&uLocal_152);
				func_102(&uLocal_150);
			}
		}
	}
}

int func_150()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 26)
	{
		func_153(&iLocal_148, iVar1);
		iLocal_149 = func_152();
		if (iLocal_149 >= 0)
		{
			iVar0 = func_151(iLocal_149);
			if (DOES_ENTITY_EXIST(iVar0) && DOES_ENTITY_EXIST(iVar0))
			{
				if (GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == GET_PED_INDEX_FROM_ENTITY_INDEX())
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_151(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(iLocal_148, -1773.944f, 3287.334f, 30f, -2029.776f, 2845.083f, 1250f, 255f);
			break;
		
		case 1:
			iVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(iLocal_148, -2725.889f, 3291.099f, 30f, -2009.182f, 2879.835f, 1250f, 180f);
			break;
		
		case 2:
			iVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(iLocal_148, -2442.026f, 3326.699f, 30f, -2033.928f, 3089.049f, 1250f, 205f);
			break;
		
		case 3:
			iVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(iLocal_148, -1917.165f, 3374.209f, 30f, -2016.791f, 3195.058f, 1250f, 86.25f);
			break;
		
		case 4:
			iVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(iLocal_148, -2192.753f, 3373.278f, 30f, -2191.544f, 3150.417f, 1250f, 150f);
			break;
		
		case 5:
			iVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(iLocal_148, -2077.663f, 3344.514f, 30f, -2191.544f, 3150.417f, 1250f, 140.5f);
			break;
		
		case 6:
			iVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(iLocal_148, -2861.755f, 3352.661f, 30f, -2715.871f, 3269.916f, 1250f, 90f);
			break;
		
		case 7:
			iVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(iLocal_148, -2005.574f, 3364.533f, 30f, -1977.569f, 3330.888f, 1250f, 100f);
			break;
		
		case 8:
			iVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(iLocal_148, -1682.235f, 3004.285f, 30f, -1942.747f, 2947.441f, 1250f, 248.75f);
			break;
		
		case 9:
			iVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(iLocal_148, -2393.295f, 2936.406f, 31.6801f, -2453.037f, 3006.863f, 52.31003f, 128f);
			break;
		
		case 10:
			iVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(iLocal_148, -2347.185f, 3023.83f, 31.56573f, -2517.33f, 2989.063f, 49.95644f, 127.25f);
			break;
		
		case 11:
			iVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(iLocal_148, -2259.922f, 3358.04f, 29.99972f, -2299.772f, 3385.79f, 38.06014f, 16f);
			break;
		
		case 12:
			iVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(iLocal_148, -2476.309f, 3363.914f, 31.67933f, -2431.981f, 3287.669f, 39.97826f, 214.25f);
			break;
		
		case 13:
			iVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(iLocal_148, -2103.081f, 2797.783f, 29.37864f, -2096.821f, 2874.423f, 57.80989f, 65.75f);
			break;
		
		case 14:
			iVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(iLocal_148, -1877.436f, 2783.151f, 31.80618f, -1797.873f, 2924.37f, 1307.111f, 88f);
			break;
		
		case 15:
			iVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(iLocal_148, -1761.116f, 2834.651f, 31.80622f, -1720.887f, 2906.419f, 1281.806f, 88f);
			break;
		
		case 16:
			iVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(iLocal_148, -1761.493f, 2817.68f, 32.37125f, -1769.704f, 2913.734f, 1281.807f, 88f);
			break;
		
		case 17:
			iVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(iLocal_148, -1879.297f, 2772.653f, 29.57795f, -1864.521f, 2825.472f, 1281.806f, 88f);
			break;
		
		case 18:
			iVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(iLocal_148, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9f);
			break;
		
		case 19:
			iVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(iLocal_148, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9.5f);
			break;
		
		case 20:
			iVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(iLocal_148, -2807.397f, 3264.226f, 29.92764f, -2744.79f, 3340.347f, 1037.804f, 9.5f);
			break;
		
		case 21:
			iVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(iLocal_148, -2808.236f, 3264.634f, 29.92764f, -2747.55f, 3187.8f, 1037.457f, 9.5f);
			break;
		
		case 22:
			iVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(iLocal_148, -2530.996f, 3064.151f, 29.71081f, -2748.557f, 3189.939f, 1037.457f, 9.5f);
			break;
		
		case 23:
			iVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(iLocal_148, -2533.902f, 3062.491f, 29.70715f, -2520.674f, 2996.817f, 1037.457f, 9.5f);
			break;
		
		case 24:
			iVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(iLocal_148, -2500.716f, 2927.103f, 29.45663f, -2445.696f, 2896.657f, 1037.68f, 9.5f);
			break;
		
		case 25:
			iVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(iLocal_148, -2020.543f, 2810.747f, 29.45658f, -1927.949f, 2785.779f, 1037.671f, 9.5f);
			break;
		
		case 26:
			iVar0 = _GET_PED_INSIDE_EXPLOSION_AREA(iLocal_148, -2261.899f, 3376.549f, 29.77859f, -2141.067f, 3376.773f, 1037.9f, 9.5f);
			break;
	}
	return iVar0;
}

int func_152()
{
	if (IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -1773.944f, 3287.334f, 30f, -2029.776f, 2845.083f, 1250f, 255f))
	{
		return 0;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2725.889f, 3291.099f, 30f, -2009.182f, 2879.835f, 1250f, 180f))
	{
		return 1;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2442.026f, 3326.699f, 30f, -2033.928f, 3089.049f, 1250f, 205f))
	{
		return 2;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -1917.165f, 3374.209f, 30f, -2016.791f, 3195.058f, 1250f, 86.25f))
	{
		return 3;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2192.753f, 3373.278f, 30f, -2191.544f, 3150.417f, 1250f, 150f))
	{
		return 4;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2077.663f, 3344.514f, 30f, -2191.544f, 3150.417f, 1250f, 140.5f))
	{
		return 5;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2861.755f, 3352.661f, 30f, -2715.871f, 3269.916f, 1250f, 90f))
	{
		return 6;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2005.574f, 3364.533f, 30f, -1977.569f, 3330.888f, 1250f, 100f))
	{
		return 7;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -1682.235f, 3004.285f, 30f, -1942.747f, 2947.441f, 1250f, 248.75f))
	{
		return 8;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2393.295f, 2936.406f, 31.6801f, -2453.037f, 3006.863f, 52.31003f, 128f))
	{
		return 9;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2347.185f, 3023.83f, 31.56573f, -2517.33f, 2989.063f, 49.95644f, 127.25f))
	{
		return 10;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2259.922f, 3358.04f, 29.99972f, -2299.772f, 3385.79f, 38.06014f, 16f))
	{
		return 11;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2476.309f, 3363.914f, 31.67933f, -2431.981f, 3287.669f, 39.97826f, 214.25f))
	{
		return 12;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2103.081f, 2797.783f, 29.37864f, -2096.821f, 2874.423f, 57.80989f, 65.75f))
	{
		return 13;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -1877.436f, 2783.151f, 31.80618f, -1797.873f, 2924.37f, 1307.111f, 88f))
	{
		return 14;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -1761.116f, 2834.651f, 31.80622f, -1720.887f, 2906.419f, 1281.806f, 88f))
	{
		return 15;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -1761.493f, 2817.68f, 32.37125f, -1769.704f, 2913.734f, 1281.807f, 88f))
	{
		return 16;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -1879.297f, 2772.653f, 29.57795f, -1864.521f, 2825.472f, 1281.806f, 88f))
	{
		return 17;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9f))
	{
		return 18;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9.5f))
	{
		return 19;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2807.397f, 3264.226f, 29.92764f, -2744.79f, 3340.347f, 1037.804f, 9.5f))
	{
		return 20;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2808.236f, 3264.634f, 29.92764f, -2747.55f, 3187.8f, 1037.457f, 9.5f))
	{
		return 21;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2530.996f, 3064.151f, 29.71081f, -2748.557f, 3189.939f, 1037.457f, 9.5f))
	{
		return 22;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2533.902f, 3062.491f, 29.70715f, -2520.674f, 2996.817f, 1037.457f, 9.5f))
	{
		return 23;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2500.716f, 2927.103f, 29.45663f, -2445.696f, 2896.657f, 1037.68f, 9.5f))
	{
		return 24;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2020.543f, 2810.747f, 29.45658f, -1927.949f, 2785.779f, 1037.671f, 9.5f))
	{
		return 25;
	}
	else if (IS_EXPLOSION_IN_ANGLED_AREA(iLocal_148, -2261.899f, 3376.549f, 29.77859f, -2141.067f, 3376.773f, 1037.9f, 9.5f))
	{
		return 26;
	}
	return -1;
}

void func_153(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 0;
			break;
		
		case 1:
			*uParam0 = 1;
			break;
		
		case 2:
			*uParam0 = 2;
			break;
		
		case 3:
			*uParam0 = 3;
			break;
		
		case 4:
			*uParam0 = 4;
			break;
		
		case 5:
			*uParam0 = 5;
			break;
		
		case 6:
			*uParam0 = 19;
			break;
		
		case 7:
			*uParam0 = 20;
			break;
		
		case 8:
			*uParam0 = 21;
			break;
		
		case 9:
			*uParam0 = 32;
			break;
		
		case 10:
			*uParam0 = 36;
			break;
		
		case 11:
			*uParam0 = 40;
			break;
		
		case 12:
			*uParam0 = 41;
			break;
		
		case 13:
			*uParam0 = 43;
			break;
		
		case 14:
			*uParam0 = 44;
			break;
		
		case 15:
			*uParam0 = 45;
			break;
		
		case 16:
			*uParam0 = 46;
			break;
		
		case 17:
			*uParam0 = 47;
			break;
		
		case 18:
			*uParam0 = 48;
			break;
		
		case 19:
			*uParam0 = 49;
			break;
		
		case 20:
			*uParam0 = 50;
			break;
		
		case 21:
			*uParam0 = 53;
			break;
		
		case 22:
			*uParam0 = 54;
			break;
		
		case 23:
			*uParam0 = 55;
			break;
		
		case 24:
			*uParam0 = 56;
			break;
		
		case 25:
			*uParam0 = 57;
			break;
	}
}

int func_154()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_60(PLAYER_ID()))
	{
		return 1;
	}
	if (func_159(1))
	{
		iVar0 = func_158();
		if (iVar0 != func_38())
		{
			if (func_60(iVar0))
			{
				return 1;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = INT_TO_PLAYERINDEX(iVar1);
		if (func_37(iVar2, 0, 1))
		{
			if (iVar2 != PLAYER_ID())
			{
				if (func_159(1))
				{
					if (func_156(PLAYER_ID(), iVar2))
					{
						if (func_60(iVar2))
						{
							return 1;
						}
					}
				}
				if (func_155(GET_PLAYER_PED(GET_PLAYER_PED()), GET_PLAYER_PED(iVar2)))
				{
					iVar3 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(iVar2), 0);
					if (GET_PED_IN_VEHICLE_SEAT(iVar3, -1, 0) == GET_PED_IN_VEHICLE_SEAT(iVar2))
					{
						if (func_60(iVar2))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_155(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(iParam0) && DOES_ENTITY_EXIST(iParam1))
	{
		if (!IS_ENTITY_DEAD(iParam0, 0) && !IS_ENTITY_DEAD(iParam1, 0))
		{
			if (IS_PED_IN_ANY_VEHICLE(iParam0, 0) && IS_PED_IN_ANY_VEHICLE(iParam1, 0))
			{
				iVar0 = GET_VEHICLE_PED_IS_IN(iParam0, 0);
				iVar1 = GET_VEHICLE_PED_IS_IN(iParam1, 0);
				if (DOES_ENTITY_EXIST(iVar0) && DOES_ENTITY_EXIST(iVar1))
				{
					if (iVar0 == iVar1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_156(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_157(iParam0);
	if (!iVar0 == func_38())
	{
		if (iVar0 == func_157(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_157(int iParam0)
{
	if (iParam0 != func_38())
	{
		return Global_1628955[iParam0 /*614*/].f_11;
	}
	return func_38();
}

var func_158()
{
	return Global_1628955[PLAYER_ID() /*614*/].f_11;
}

bool func_159(bool bParam0)
{
	return func_58(PLAYER_ID(), bParam0);
}

int func_160()
{
	var uVar0;
	
	func_168(&uVar0);
	if (Global_1312850 == 0)
	{
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_167())
	{
		return 1;
	}
	if (Global_2461241)
	{
		return 1;
	}
	if (func_166())
	{
		return 1;
	}
	if (func_165(159))
	{
		if (!func_164())
		{
			return 1;
		}
	}
	if (func_165(157))
	{
		return 1;
	}
	if (!NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_161() != 0)
	{
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_161()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_161()
{
	switch (func_163())
	{
		case 0:
			return func_162();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_162()
{
	switch (Global_2461343)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_163()
{
	return Global_30736;
}

bool func_164()
{
	return Global_2448961.f_598;
}

int func_165(int iParam0)
{
	if (GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_166()
{
	return Global_2458999;
}

bool func_167()
{
	return Global_2448961.f_593;
}

void func_168(var uParam0)
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
					func_169(iVar0);
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

void func_169(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_37(vVar0.y, 1, 1))
		{
			iVar1 = GET_PLAYER_PED(vVar0.y);
			if (DOES_ENTITY_EXIST(iVar1))
			{
				if (IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && IS_VEHICLE_WINDOW_INTACT())
					{
						if (func_170(iVar2, &bVar3))
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

int func_170(int iParam0, var uParam1)
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

void func_171()
{
	if (GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) != 5)
	{
		if (func_178(5, 0, 1))
		{
			if (_0x12B6281B6C6706C0(0) <= 5)
			{
				RESERVE_NETWORK_MISSION_OBJECTS(5);
			}
		}
	}
	if (GET_NUM_RESERVED_MISSION_PEDS(false, 0) != 3)
	{
		if (func_172(3, 0, 1))
		{
			if (_0xCB215C4B56A7FAE7(0) <= 3)
			{
				RESERVE_NETWORK_MISSION_PEDS(3);
			}
		}
	}
}

bool func_172(int iParam0, bool bParam1, bool bParam2)
{
	return func_173(1, iParam0, 1, bParam1, bParam2);
}

int func_173(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!IS_BIT_SET(Global_1385512, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_177(iParam0) - func_176(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_176(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_177(iParam0) - func_175(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_176(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_177(iParam0) - func_176(iParam0, 1));
		}
		if (!bParam4 && Global_1590446[PLAYER_ID() /*871*/] != 3)
		{
			iVar1 = (iVar1 - func_174(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_174(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_175(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1385512.f_1;
			break;
		
		case 1:
			return Global_1385512.f_2;
			break;
		
		case 2:
			return Global_1385512.f_3;
			break;
	}
	return 0;
}

int func_176(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2424073[iVar0 /*421*/].f_209;
			}
			else
			{
				return GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2424073[iVar0 /*421*/].f_210;
			}
			else
			{
				return GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2424073[iVar0 /*421*/].f_211;
			}
			else
			{
				return CAN_REGISTER_MISSION_ENTITIES(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_177(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1385520;
			break;
		
		case 1:
			return Global_1385521;
			break;
		
		case 2:
			return Global_1385522;
			break;
	}
	return 0;
}

bool func_178(int iParam0, bool bParam1, bool bParam2)
{
	return func_173(0, iParam0, 1, bParam1, bParam2);
}

void func_179()
{
	wait(0);
}

void func_180()
{
	int iVar0;
	
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (func_127())
			{
				func_128();
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (DOES_BLIP_EXIST(Local_140.f_172[iVar0]))
		{
			REMOVE_BLIP(&(Local_140.f_172[iVar0]));
		}
		iVar0++;
	}
	if (iLocal_145)
	{
		SET_MAX_WANTED_LEVEL(5);
		iLocal_145 = 0;
	}
	Global_1687816 = 0;
	func_182();
	func_181();
}

void func_181()
{
	TERMINATE_THIS_THREAD();
}

void func_182()
{
	if (!Local_140.f_176)
	{
		return;
	}
	if (HAS_MODEL_LOADED(joaat("s_m_y_marine_01")))
	{
		SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_marine_01"));
	}
	if (HAS_MODEL_LOADED(joaat("lazer")))
	{
		SET_MODEL_AS_NO_LONGER_NEEDED(joaat("lazer"));
	}
	if (HAS_MODEL_LOADED(joaat("s_m_y_pilot_01")))
	{
		SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_pilot_01"));
	}
}

void func_183(struct<21> Param0)
{
	func_187(func_188(Param0), Param0);
	func_185(0, -1, 0);
	RESERVE_NETWORK_MISSION_OBJECTS(5);
	RESERVE_NETWORK_MISSION_PEDS(3);
	NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_115, 27);
	NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_139, 257);
	SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (!func_184())
	{
		func_180();
	}
	if (HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_180();
	}
	Global_2531497.f_6293 = 0;
}

int func_184()
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
		if (func_167())
		{
			return 0;
		}
		if (func_165(157))
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

int func_185(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_181();
			}
			else
			{
				return 0;
			}
		}
		if (!func_186())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_181();
					}
					else
					{
						return 0;
					}
				}
				if (func_167())
				{
					if (!bParam2)
					{
						func_181();
					}
					else
					{
						return 0;
					}
				}
				if (func_165(157))
				{
					if (!bParam2)
					{
						func_181();
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
					func_181();
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
				func_181();
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
			func_181();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_186()
{
	return Global_1312850;
}

void func_187(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_181();
	}
	NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_16);
}

int func_188(int iParam0)
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
