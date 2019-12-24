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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	vector3 vLocal_45 = { 0f, 0f, 0f };
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	struct<16> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_52 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	vector3 vLocal_55 = { 0f, 0f, 0f };
	vector3 vLocal_56 = { 0f, 0f, 0f };
	float fLocal_57 = 0f;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	char* sLocal_65 = NULL;
	float fLocal_66 = 0f;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	float fLocal_74 = 0f;
	vector3 vLocal_75 = { 0f, 0f, 0f };
	vector3 vLocal_76 = { 0f, 0f, 0f };
	float fLocal_77 = 0f;
	int iLocal_78 = 0;
	float fLocal_79 = 0f;
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	struct<2> Local_85 = { 0, 5 } ;
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
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 5;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
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
	vLocal_45 = { 500f, 500f, 500f };
	iLocal_60 = -1;
	iLocal_61 = 2050;
	iLocal_62 = -1;
	iLocal_63 = -1;
	sLocal_65 = "CC_SUBSTR";
	fLocal_66 = 125f;
	iLocal_67 = 1;
	iLocal_69 = 263;
	fLocal_77 = 4f;
	fLocal_79 = 0f;
	vLocal_56 = { ScriptParam_85.f_1[0 /*3*/] };
	vLocal_56 = { vLocal_56 };
	iLocal_54 = iLocal_54;
	Local_52 = { Local_52 };
	bVar0 = false;
	if (HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_113(1);
	}
	iLocal_53 = GET_PLAYER_PED(GET_PLAYER_PED());
	iLocal_59 = 0;
	func_111(&Global_110211, 0);
	func_110();
	if (func_109(uLocal_58, 1))
	{
		iLocal_64 = 10;
	}
	else
	{
		iLocal_64 = 9;
	}
	while (!Global_37164)
	{
		wait(0);
	}
	if (!func_109(uLocal_58, 8))
	{
		if (!func_107(iLocal_64))
		{
			if (func_106(0, iLocal_63))
			{
				func_113(0);
			}
			else
			{
				func_113(1);
			}
		}
	}
	if (iLocal_63 != -1)
	{
		if (!func_106(0, iLocal_63))
		{
			func_113(1);
		}
	}
	if (func_109(uLocal_58, 8388608))
	{
		func_113(1);
	}
	if (func_109(uLocal_58, 524288) && (func_105() && !func_104()))
	{
		func_113(1);
	}
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH()) > 1 && !func_109(uLocal_58, 4194304))
	{
		if (iLocal_69 != 263)
		{
			func_103(iLocal_69, 1, 0);
			iLocal_69 = 263;
		}
		func_102(10);
	}
	if (!DOES_ENTITY_EXIST(iLocal_54))
	{
		if (func_101() && !Global_110607)
		{
			func_100(1);
		}
		else if (Global_110607)
		{
		}
	}
	while (true)
	{
		if ((!func_99() && !func_98()) && !func_97())
		{
			func_113(1);
		}
		iLocal_53 = GET_PLAYER_PED(GET_PLAYER_PED());
		if (func_109(uLocal_58, 1048576))
		{
			if (IS_ENTITY_DEAD(iLocal_53, 0))
			{
				func_113(1);
			}
		}
		if (DOES_ENTITY_EXIST(iLocal_53) && !DOES_ENTITY_EXIST(iLocal_53, 0))
		{
			vLocal_55 = { GET_ENTITY_COORDS(iLocal_53, true) };
			fLocal_57 = vdist2(vLocal_55, ScriptParam_85.f_1[0 /*3*/]);
			fLocal_57 = fLocal_57;
			vLocal_75 = { vLocal_55 };
			vLocal_76 = { ScriptParam_85.f_1[0 /*3*/] };
			vLocal_75.z = 0f;
			vLocal_76.z = 0f;
			fLocal_74 = vdist2(vLocal_75, vLocal_76);
			switch (iLocal_59)
			{
				case 0:
					if (func_107(iLocal_64) || (func_109(uLocal_58, 16) && !func_109(uLocal_58, 524288)))
					{
						REQUEST_MODEL(iLocal_78);
						iLocal_62 = -1;
						func_96();
						func_102(1);
					}
					else
					{
						if (fLocal_74 > (fLocal_66 * fLocal_66))
						{
							if (iLocal_69 != 263)
							{
								func_103(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
							func_102(10);
						}
						if ((vLocal_55.z - ScriptParam_85.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_95() && HAS_MODEL_LOADED(iLocal_78))
					{
						iLocal_67 = iLocal_67;
						func_102(3);
					}
					else
					{
						func_96();
					}
					break;
				
				case 3:
					if (NETWORK_IS_IN_SESSION())
					{
						func_113(1);
						return;
					}
					if (!func_107(iLocal_64))
					{
						if (!func_109(uLocal_58, 8))
						{
							bVar1 = true;
							if (ARE_STRINGS_EQUAL(&(Global_98669.f_3), &Local_52))
							{
								Local_52 = { Local_51 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_113(0);
								break;
							}
						}
					}
					if (!DOES_ENTITY_EXIST(iLocal_54) && (((fLocal_57 > (10f * 10f) && !DOES_ENTITY_EXIST(ScriptParam_85.f_1[0 /*3*/], 5f)) || fLocal_57 > (80f * 80f)) || (!DOES_ENTITY_EXIST(iLocal_54) && DOES_ENTITY_EXIST())))
					{
						CLEAR_AREA_OF_VEHICLES(ScriptParam_85.f_1[0 /*3*/], 8f, 0, 0, 0, 0, false, 0);
						iLocal_54 = CREATE_VEHICLE(iLocal_78, ScriptParam_85.f_1[0 /*3*/], fLocal_79, true, true, false);
						func_94();
						SET_VEHICLE_HAS_STRONG_AXLES(iLocal_54, true);
						bVar2 = false;
						if (func_93() && !bVar2)
						{
							SET_VEHICLE_DOORS_LOCKED(iLocal_54, 2);
							func_91(&uLocal_58, 32);
						}
					}
					else if (func_109(uLocal_58, 32))
					{
						if (!func_93())
						{
							if (!IS_ENTITY_DEAD(iLocal_54, 0))
							{
								SET_VEHICLE_DOORS_LOCKED(iLocal_54, 1);
							}
							func_111(&uLocal_58, 32);
						}
					}
					if (!func_109(uLocal_58, 4))
					{
						func_90();
						func_89(&uLocal_58, 4);
					}
					if (fLocal_74 > (fLocal_66 * fLocal_66) && !Global_98703)
					{
						if (iLocal_69 != 263)
						{
							if (func_88(6) && !func_87(iLocal_69))
							{
							}
							else
							{
								func_103(iLocal_69, 1, 0);
								iLocal_69 = 263;
							}
						}
						func_102(10);
					}
					else
					{
						Local_52 = { Local_51 };
						bVar3 = !func_109(uLocal_58, 64);
						func_111(&uLocal_58, 128);
						if (!func_86(3) && !Global_98703)
						{
							if (func_109(uLocal_58, 2097152))
							{
								if ((!func_109(uLocal_58, 1) || !DOES_ENTITY_EXIST(func_85())) && !Global_98703)
								{
									func_102(10);
									break;
								}
							}
						}
						if (func_109(uLocal_58, 524288) && (func_105() && !func_104()))
						{
							func_113(1);
						}
						if (func_84())
						{
							func_113(1);
						}
						if ((!func_76(6) || Global_110607) || func_75())
						{
							bVar3 = false;
						}
						if (func_109(uLocal_58, 1))
						{
							if (!func_74())
							{
								func_91(&uLocal_58, 128);
								bVar3 = false;
							}
						}
						if (func_73(1))
						{
							bVar3 = false;
						}
						if (Global_76577)
						{
							bVar3 = false;
						}
						if (func_72())
						{
							bVar3 = false;
						}
						if (IS_PLAYER_SWITCH_IN_PROGRESS())
						{
							bVar3 = false;
						}
						if (func_71() || func_70(8, -1))
						{
							bVar3 = false;
						}
						if (!CAN_PLAYER_START_MISSION(CAN_PLAYER_START_MISSION()))
						{
							bVar3 = false;
						}
						if (!IS_PLAYER_SCRIPT_CONTROL_ON(IS_PLAYER_SCRIPT_CONTROL_ON()))
						{
							bVar3 = false;
						}
						if (func_69(0) || func_68())
						{
							bVar3 = false;
						}
						if (bVar3)
						{
							if (DOES_ENTITY_EXIST(iLocal_54))
							{
								if (!IS_ENTITY_AT_COORD(iLocal_54, vLocal_56, fLocal_77, fLocal_77, fLocal_77, false, true, 0))
								{
									func_102(7);
								}
							}
							if (IS_ENTITY_DEAD(iLocal_54, 0))
							{
								func_91(&uLocal_58, 128);
								bVar3 = false;
							}
							else if (!IS_PED_GETTING_INTO_A_VEHICLE(IS_PED_GETTING_INTO_A_VEHICLE()))
							{
								func_91(&uLocal_58, 128);
								bVar3 = false;
							}
							else
							{
								iVar4 = SET_EXCLUSIVE_PHONE_RELATIONSHIPS(SET_EXCLUSIVE_PHONE_RELATIONSHIPS());
								if (bVar3)
								{
									if (iLocal_54 == iVar4)
									{
										if (!IS_ENTITY_AT_COORD(iLocal_53, ScriptParam_85.f_1[0 /*3*/], 4f, 4f, 2f, false, true, 0))
										{
											func_91(&uLocal_58, 128);
											bVar3 = false;
										}
									}
									else
									{
										func_91(&uLocal_58, 128);
										bVar3 = false;
									}
								}
							}
							if (!IS_PLAYER_CONTROL_ON(IS_PLAYER_CONTROL_ON()))
							{
								bVar3 = false;
							}
							if (bVar3)
							{
								SET_INPUT_EXCLUSIVE(0, 51);
								if (func_67(iLocal_54))
								{
									if (iLocal_60 == -1)
									{
										func_66(&iLocal_60, 4, sLocal_65, 0, 0, 0, 0);
										func_91(&uLocal_58, 2048);
									}
									else if (!func_109(uLocal_58, 2048) || !IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_65(&iLocal_60);
										func_111(&uLocal_58, 2048);
									}
									if (func_63(iLocal_60, 1))
									{
										sLocal_65 = sLocal_65;
										func_65(&iLocal_60);
										func_111(&uLocal_58, 2048);
										REQUEST_SCRIPT(&Local_52);
										SET_PLAYER_CONTROL(SET_PLAYER_CONTROL(), false, 56);
										func_102(5);
									}
								}
								else
								{
									sLocal_65 = sLocal_65;
									func_65(&iLocal_60);
									func_111(&uLocal_58, 2048);
									REQUEST_SCRIPT(&Local_52);
									SET_PLAYER_CONTROL(SET_PLAYER_CONTROL(), false, 56);
									func_102(5);
								}
							}
						}
						if (!bVar3)
						{
							if (iLocal_60 != -1)
							{
								func_65(&iLocal_60);
								func_111(&uLocal_58, 2048);
								CLEAR_HELP(0);
							}
						}
					}
					func_55();
					break;
				
				case 5:
					SET_INPUT_EXCLUSIVE(0, 51);
					if (HAS_SCRIPT_LOADED(&Local_52))
					{
						if (iLocal_60 != -1)
						{
							func_65(&iLocal_60);
						}
						iVar5 = 2;
						bVar0 = false;
						if (func_109(uLocal_58, 1))
						{
							if (func_88(6) || func_88(7))
							{
								iVar5 = 1;
								bVar0 = true;
							}
						}
						if (iVar5 != 1)
						{
							iVar5 = func_52(&iLocal_62, 6, iLocal_64, 0, 0);
						}
						if (iVar5 == 1)
						{
							if (!IS_ENTITY_DEAD(iLocal_54, 0))
							{
								SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_54);
							}
							if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
							{
								CLEAR_PLAYER_WANTED_LEVEL(CLEAR_PLAYER_WANTED_LEVEL());
							}
							func_51();
							if (Global_42561)
							{
								func_42(PLAYER_PED_ID());
							}
							SET_PLAYER_CONTROL(SET_PLAYER_CONTROL(), true, 56);
							iLocal_50 = func_25();
							func_91(&uLocal_58, 2);
							func_102(6);
							func_21(&iLocal_71);
							if (iLocal_63 != -1)
							{
								func_20(iLocal_63);
								func_17(func_19(iLocal_63), 0, 0);
							}
						}
						else if (iVar5 == 2)
						{
							func_16();
						}
						else if (iVar5 == 0)
						{
							func_102(10);
						}
					}
					else
					{
						func_16();
					}
					break;
				
				case 6:
					if (!func_109(uLocal_58, 256))
					{
						if (IS_SCREEN_FADING_OUT() || IS_SCREEN_FADING_OUT())
						{
							SET_INPUT_EXCLUSIVE(0, 51);
						}
						else if (IS_SCREEN_FADED_OUT())
						{
							func_91(&uLocal_58, 256);
						}
					}
					if (func_109(Global_110211, 262144))
					{
						func_111(&Global_110211, 262144);
						func_15();
					}
					if (func_109(uLocal_58, 2097152))
					{
						if (!func_86(3) && !IS_THREAD_ACTIVE(iLocal_50))
						{
							func_102(10);
						}
					}
					if (!IS_THREAD_ACTIVE(iLocal_50))
					{
						PLAYSTATS_ODDJOB_DONE(round((func_11(&iLocal_71) * 1000f)), iLocal_63, 0);
						func_10(&iLocal_71);
						func_111(&uLocal_58, 256);
						func_9();
						if (DOES_ENTITY_EXIST(iLocal_54))
						{
							if (!IS_ENTITY_DEAD(iLocal_54, 0))
							{
								SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_54);
								iLocal_54 = 0;
							}
						}
						if (bVar0)
						{
							func_111(&uLocal_58, 2);
						}
						else if (func_109(uLocal_58, 2))
						{
							if (func_109(Global_110211, 0))
							{
								func_8(&iLocal_62);
								iLocal_62 = -1;
								func_111(&uLocal_58, 2);
							}
							else
							{
								func_8(&iLocal_62);
								iLocal_62 = -1;
								func_111(&uLocal_58, 2);
							}
						}
						func_102(0);
						if (iLocal_63 != -1)
						{
							if (func_109(Global_110211, 0))
							{
								PLAYSTATS_MISSION_CHECKPOINT(func_19(iLocal_63), 0, Global_98706, 0);
								func_7(func_19(iLocal_63), 0, Global_98706, 1, 0);
							}
							else
							{
								PLAYSTATS_MISSION_CHECKPOINT(func_19(iLocal_63), 0, Global_98706, 0);
								func_7(func_19(iLocal_63), 0, Global_98706, 0, 0);
							}
						}
						func_4();
						func_111(&Global_110211, 0);
						if (func_109(uLocal_58, 16777216))
						{
							func_113(1);
						}
						if (iLocal_63 != -1)
						{
							if (Global_111560.f_9080)
							{
								if (!func_106(0, iLocal_63))
								{
									func_113(1);
								}
							}
						}
					}
					func_3();
					break;
				
				case 8:
					func_102(0);
					break;
				
				case 10:
					func_113(1);
					break;
				
				case 9:
					if (fLocal_74 > (fLocal_66 * fLocal_66))
					{
						if (iLocal_69 != 263)
						{
							func_103(iLocal_69, 1, 0);
							iLocal_69 = 263;
						}
						func_102(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_69 != 263)
					{
						func_103(iLocal_69, 0, 0);
					}
					if (iLocal_60 != -1)
					{
						func_65(&iLocal_60);
					}
					if (!IS_STRING_NULL_OR_EMPTY(sLocal_65))
					{
						if (func_1(sLocal_65))
						{
							CLEAR_HELP(1);
						}
					}
					func_102(4);
					break;
				
				case 4:
					if ((iLocal_68 % 150) == 0)
					{
						if (!IS_PED_INJURED(IS_PED_INJURED()))
						{
							if (iLocal_70 == 2)
							{
								if (iLocal_70 == 2)
								{
									if (func_107(iLocal_64) && func_106(0, iLocal_63))
									{
										func_110();
										if (iLocal_69 != 263)
										{
											func_103(iLocal_69, 1, 0);
										}
										func_102(0);
									}
								}
							}
							else if (iLocal_70 == 0)
							{
								if (fLocal_74 > (fLocal_66 * fLocal_66))
								{
									if (iLocal_69 != 263)
									{
										func_103(iLocal_69, 1, 0);
										iLocal_69 = 263;
									}
									func_102(10);
								}
							}
							else if (iLocal_70 == 1)
							{
								if (fLocal_74 > ((80f + 5f) * (80f + 5f)))
								{
									func_110();
									if (iLocal_69 != 263)
									{
										func_103(iLocal_69, 1, 0);
									}
									func_102(0);
								}
							}
						}
						else
						{
							func_103(iLocal_69, 1, 0);
						}
					}
					else
					{
						iLocal_68++;
					}
					break;
				}
		}
		wait(0);
	}
}

int func_1(char* sParam0)
{
	BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_2()
{
}

void func_3()
{
}

void func_4()
{
	int iVar0;
	int iVar1;
	
	iVar0 = CREATE_CAMERA_WITH_PARAMS(26379945, 1697.183f, 3279.226f, 41.7283f, 1.5897f, 0f, 146.8519f, 50f, 1, 2);
	iVar1 = CREATE_CAMERA_WITH_PARAMS(26379945, 1697.755f, 3280.423f, 41.7708f, -9.1434f, 0f, 168.0244f, 50f, 0, 2);
	SET_CAM_ACTIVE_WITH_INTERP(iVar1, iVar0, 3650, 1, 1);
	SET_CINEMATIC_MODE_ACTIVE(0);
	RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
	if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()) && !DOES_ENTITY_EXIST(DOES_ENTITY_EXIST(), 0))
	{
		if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 1) || IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE()))
		{
			iLocal_54 = GET_VEHICLE_PED_IS_USING(GET_VEHICLE_PED_IS_USING());
			SET_VEHICLE_DOORS_LOCKED(iLocal_54, 1);
			SET_VEHICLE_RADIO_ENABLED(iLocal_54, true);
			TASK_LEAVE_ANY_VEHICLE(TASK_LEAVE_ANY_VEHICLE(), 0, 0);
		}
	}
	SET_ENTITY_AS_MISSION_ENTITY(iLocal_54, true, 1);
	func_5(&iLocal_80);
	if (DOES_ENTITY_EXIST(iLocal_80))
	{
		SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_80);
	}
	while (IS_CAM_INTERPOLATING(iVar0) || IS_CAM_INTERPOLATING(iVar1))
	{
		HIDE_HUD_AND_RADAR_THIS_FRAME();
		wait(0);
	}
	_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0);
	if (DOES_CAM_EXIST(iVar0))
	{
		DESTROY_CAM(iVar0, 0);
	}
	if (DOES_CAM_EXIST(iVar1))
	{
		DESTROY_CAM(iVar1, 0);
	}
}

void func_5(var uParam0)
{
	int iVar0;
	
	iVar0 = *uParam0;
	if (DOES_ENTITY_EXIST(iVar0))
	{
		if (!func_6(iVar0))
		{
			SET_ENTITY_COLLISION(iVar0, true, 0);
			SET_ENTITY_VISIBLE(iVar0, true, 0);
			FREEZE_ENTITY_POSITION(iVar0, false);
		}
	}
}

int func_6(int iParam0)
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

void func_7(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (IS_STRING_NULL_OR_EMPTY(&Global_95769))
	{
		return;
	}
	if (COMPARE_STRINGS(sParam0, &Global_95769, 0, -1) != 0)
	{
		return;
	}
	PLAYSTATS_MISSION_OVER(sParam0, iParam1, iParam2, iParam3, iParam4, Global_92876);
	StringCopy(&Global_95769, "", 64);
}

void func_8(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_41358)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_41357 = 0;
	Global_41359 = 0;
	Global_41396 = 15;
	Global_61468 = 0;
	Global_61469 = 0;
}

void func_9()
{
	vector3 vVar0[24];
	
	if (IS_XBOX360_VERSION() || IS_XBOX360_VERSION())
	{
		NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
	}
	else if (IS_PS3_VERSION() || IS_PS3_VERSION())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		_NETWORK_SET_RICH_PRESENCE_2(0, &cVar0);
	}
}

void func_10(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_11(int iParam0)
{
	if (func_14(iParam0))
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

bool func_14(var uParam0)
{
	return IS_BIT_SET(*uParam0, 1);
}

int func_15()
{
	return 1;
}

void func_16()
{
}

void func_17(char* sParam0, int iParam1, int iParam2)
{
	if (!IS_STRING_NULL_OR_EMPTY(&Global_95769))
	{
		PLAYSTATS_MISSION_OVER(&Global_95769, 0, 0, 0, 1, 0);
		StringCopy(&Global_95769, "", 64);
	}
	StringCopy(&Global_95769, sParam0, 64);
	PLAYSTATS_MISSION_STARTED(sParam0, iParam1, iParam2, func_18(0));
}

bool func_18(bool bParam0)
{
	if (!bParam0 && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return IS_BIT_SET(Global_76825, 0);
}

char* func_19(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_20(int iParam0)
{
	var uVar0;
	vector3 vVar1[24];
	
	if (IS_XBOX360_VERSION() || IS_XBOX360_VERSION())
	{
		uVar0 = iParam0;
		NETWORK_SET_RICH_PRESENCE(8, &uVar0, 1, 1);
	}
	else if (IS_PS3_VERSION() || IS_PS3_VERSION())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		_NETWORK_SET_RICH_PRESENCE_2(8, &cVar1);
	}
}

void func_21(int iParam0)
{
	if (!func_14(iParam0))
	{
		func_24(iParam0);
	}
	else
	{
		func_22(iParam0);
	}
}

void func_22(int iParam0)
{
	func_23(iParam0, 0f);
}

void func_23(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_12(IS_BIT_SET(*iParam0, 4)) - fParam1);
	SET_BIT(iParam0, 1);
	CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_24(int iParam0)
{
	if (!func_14(iParam0))
	{
		func_22(iParam0);
	}
}

int func_25()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_1(sLocal_65))
	{
		CLEAR_HELP(1);
	}
	if (IS_IPL_ACTIVE("airfield"))
	{
		REMOVE_IPL("airfield");
	}
	iVar0 = GET_PLAYERS_LAST_VEHICLE();
	if (((((DOES_ENTITY_EXIST(iVar0) && iVar0 != iLocal_54) && !DOES_ENTITY_EXIST(iVar0, 0)) && DOES_ENTITY_EXIST(iVar0) != joaat("stunt")) && DOES_ENTITY_EXIST(iVar0, -1, 0)) && DOES_ENTITY_EXIST(iVar0) != joaat("cargobob"))
	{
		iVar1 = GET_CLOSEST_VEHICLE(1694.736f, 3276.483f, 41.2979f, 5f, joaat("stunt"), 16384);
		if (DOES_ENTITY_EXIST(iVar1))
		{
			SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, 0);
		}
		func_27(1689.662f, 3274.546f, 40.00918f, 1696.669f, 3271.265f, 42.80674f, 7.25f, 1673.428f, 3267.02f, 40.0898f, 108.5236f, 1, 1, 1, 0, 0);
		if (DOES_ENTITY_EXIST(iVar1))
		{
			SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar1);
		}
		if (func_26(&iLocal_80))
		{
		}
	}
	if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()) && !DOES_ENTITY_EXIST(DOES_ENTITY_EXIST(), 0))
	{
		iVar0 = GET_VEHICLE_PED_IS_USING(GET_VEHICLE_PED_IS_USING());
	}
	if (DOES_ENTITY_EXIST(iVar0))
	{
		SET_VEHICLE_DOORS_LOCKED(iVar0, 1);
	}
	iVar2 = start_new_script(&Local_51, iLocal_61);
	SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_51);
	return iVar2;
}

int func_26(int iParam0)
{
	int iVar0;
	
	iVar0 = GET_PLAYERS_LAST_VEHICLE();
	if (DOES_ENTITY_EXIST(iVar0))
	{
		if (!func_6(iVar0))
		{
			if (!IS_PED_INJURED(IS_PED_INJURED()) && IS_PED_INJURED(iVar0, IS_PED_INJURED(), vLocal_45, 0, 1, 0))
			{
				SET_LAST_DRIVEN_VEHICLE(iVar0);
				SET_ENTITY_COLLISION(iVar0, false, 0);
				SET_ENTITY_VISIBLE(iVar0, false, 0);
				FREEZE_ENTITY_POSITION(iVar0, true);
				SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, 1);
				*iParam0 = iVar0;
				return 1;
			}
		}
	}
	return 0;
}

void func_27(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	func_28(vParam0, vParam1, fParam2, vParam3, fParam4, 0f, 0f, 0f, bParam5, bParam6, bParam7, bParam8, bParam9);
}

void func_28(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, vector3 vParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (bParam7)
	{
		bParam7 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = GET_PLAYERS_LAST_VEHICLE();
	if (DOES_ENTITY_EXIST(iVar0))
	{
		if (!IS_ENTITY_A_MISSION_ENTITY(iVar0))
		{
			SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, 0);
			iVar3 = 1;
		}
		if (IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			if (bParam10)
			{
				func_41(iVar0);
			}
			if (IS_ENTITY_IN_ANGLED_AREA(iVar0, vParam0, vParam1, fParam2, 0, true, 0))
			{
				bVar1 = true;
			}
			else
			{
				vVar6 = { GET_ENTITY_COORDS(iVar0, true) };
				if ((vVar6.z > vParam0.z && vVar6.z < vParam1.z) || (vVar6.z > vParam1.z && vVar6.z < vParam0.z))
				{
					if (func_38(iVar0, vParam0, vParam1, fParam2))
					{
						bVar1 = true;
					}
				}
			}
			if (IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (IS_VEHICLE_MODEL(iVar0, joaat("taxi")))
				{
					if (GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) != GET_PED_IN_VEHICLE_SEAT() && GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) != 0)
					{
						if (GET_DISTANCE_BETWEEN_COORDS(vParam0 + vParam1 / Vector(2f, 2f, 2f), GET_DISTANCE_BETWEEN_COORDS(iVar0, true), true) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam8)
			{
				if (func_30(iVar0, func_32(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_29(vParam5))
				{
					if (IS_VEHICLE_DRIVEABLE(iVar0, 0))
					{
						iVar7 = GET_ENTITY_MODEL(iVar0);
						_0xDF7E3EEB29642C38(iVar0, &vVar4, &vVar5);
						if (IS_THIS_MODEL_A_HELI(iVar7))
						{
							vParam5.x = (vParam5.x + 3f);
							vParam5.y = (vParam5.y + 3f);
						}
						if (((iVar7 == joaat("zentorno") || iVar7 == joaat("btype")) || iVar7 == joaat("dubsta3")) || iVar7 == joaat("monster"))
						{
							vParam5 = { vParam5 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar7 == joaat("t20") || iVar7 == joaat("virgo"))
						{
							vParam5 = { vParam5 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((vVar5.x - vVar4.x) > vParam5.x)
						{
							bVar2 = false;
						}
						else if ((vVar5.y - vVar4.y) > vParam5.y)
						{
							bVar2 = false;
						}
						else if ((vVar5.z - vVar4.z) > vParam5.z)
						{
							bVar2 = false;
						}
					}
				}
				if (IS_VEHICLE_DRIVEABLE(iVar0, 0))
				{
					if (bVar2)
					{
						CLEAR_AREA_OF_VEHICLES(vParam3, 5f, 0, 0, 0, 0, false, 0);
						SET_ENTITY_HEADING(iVar0, fParam4);
						SET_ENTITY_COORDS(iVar0, vParam3, 1, false, 0, 1);
						SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 1084227584);
						if (bParam9)
						{
							SET_VEHICLE_ENGINE_ON(iVar0, false, true, 0);
							SET_VEHICLE_DOORS_SHUT(iVar0, 1);
						}
					}
					else
					{
						if (!IS_ENTITY_A_MISSION_ENTITY(iVar0) || !IS_ENTITY_A_MISSION_ENTITY(iVar0, 1))
						{
							SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, 1);
						}
						if (IS_PED_IN_VEHICLE(IS_PED_IN_VEHICLE(), iVar0, 0))
						{
							SET_ENTITY_COORDS(SET_ENTITY_COORDS(), SET_ENTITY_COORDS(iVar0, true), 1, false, 0, 1);
						}
						DELETE_VEHICLE(&iVar0);
					}
				}
			}
			if (bParam6)
			{
				CLEAR_ANGLED_AREA_OF_VEHICLES(vParam0, vParam1, fParam2, 0, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (DOES_ENTITY_EXIST(iVar0))
				{
					if (IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!IS_ENTITY_A_MISSION_ENTITY(iVar0))
			{
				SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, 0);
			}
			iVar8 = GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0);
			if (DOES_ENTITY_EXIST(iVar8) && !DOES_ENTITY_EXIST(iVar8))
			{
				SET_ENTITY_COORDS(iVar8, SET_ENTITY_COORDS(iVar8, true), 1, false, 0, 1);
			}
			iVar9 = GET_VEHICLE_MODEL_NUMBER_OF_SEATS(GET_VEHICLE_MODEL_NUMBER_OF_SEATS(iVar0));
			if (iVar9 <= 2)
			{
				iVar8 = GET_PED_IN_VEHICLE_SEAT(iVar0, 0, 0);
				if (DOES_ENTITY_EXIST(iVar8) && !DOES_ENTITY_EXIST(iVar8))
				{
					SET_ENTITY_COORDS(iVar8, SET_ENTITY_COORDS(iVar8, true), 1, false, 0, 1);
				}
			}
			if (iVar9 <= 4)
			{
				iVar8 = GET_PED_IN_VEHICLE_SEAT(iVar0, 1, 0);
				if (DOES_ENTITY_EXIST(iVar8) && !DOES_ENTITY_EXIST(iVar8))
				{
					SET_ENTITY_COORDS(iVar8, SET_ENTITY_COORDS(iVar8, true), 1, false, 0, 1);
				}
				iVar8 = GET_PED_IN_VEHICLE_SEAT(iVar0, 2, 0);
				if (DOES_ENTITY_EXIST(iVar8) && !DOES_ENTITY_EXIST(iVar8))
				{
					SET_ENTITY_COORDS(iVar8, SET_ENTITY_COORDS(iVar8, true), 1, false, 0, 1);
				}
			}
			DELETE_VEHICLE(&iVar0);
		}
	}
}

int func_29(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_30(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!DOES_ENTITY_EXIST(iParam0) || !DOES_ENTITY_EXIST(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_31(iParam1, iVar0, &sVar1, &iVar2))
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

int func_31(int iParam0, int iParam1, char* sParam2, var uParam3)
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
			if (func_34(iVar0) && (!func_88(14) || Global_110511))
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

int func_38(int iParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6[4];
	struct<2> Var7;
	struct<2> Var8;
	
	if (IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		vParam1.z = vParam2.z;
		vVar0 = { func_40(vParam1 - vParam2) };
		vVar1 = { vVar0 };
		vVar0.x = -vVar1.y;
		vVar0.y = vVar1.x;
		vVar0.z = 0f;
		vVar2 = { vParam1 - vVar0 * FtoV((fParam3 / 2f)) };
		vVar3 = { vParam1 + vVar0 * FtoV((fParam3 / 2f)) };
		vVar4 = { vParam2 - vVar0 * FtoV((fParam3 / 2f)) };
		vVar5 = { vParam2 + vVar0 * FtoV((fParam3 / 2f)) };
		GET_MODEL_DIMENSIONS(GET_MODEL_DIMENSIONS(iParam0), &Var7, &Var8);
		vVar6[0 /*3*/] = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var7, Var7.f_1, 0f) };
		vVar6[1 /*3*/] = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var7, Var8.f_1, 0f) };
		vVar6[2 /*3*/] = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var8, Var7.f_1, 0f) };
		vVar6[3 /*3*/] = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var8, Var8.f_1, 0f) };
		if (((((((((((((((func_39(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar2, vVar3) || func_39(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar3, vVar5)) || func_39(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar4, vVar5)) || func_39(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar2, vVar4)) || func_39(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar2, vVar3)) || func_39(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar3, vVar5)) || func_39(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar4, vVar5)) || func_39(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar2, vVar4)) || func_39(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar2, vVar3)) || func_39(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar3, vVar5)) || func_39(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar4, vVar5)) || func_39(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar2, vVar4)) || func_39(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar2, vVar3)) || func_39(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar3, vVar5)) || func_39(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar4, vVar5)) || func_39(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar2, vVar4))
		{
			return 1;
		}
	}
	return 0;
}

int func_39(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5, struct<2> Param6, var uParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0;
	fVar1 = Param0.f_1;
	fVar2 = Param2;
	fVar3 = Param2.f_1;
	fVar4 = Param4;
	fVar5 = Param4.f_1;
	fVar6 = Param6;
	fVar7 = Param6.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_40(vector3 vParam0)
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

void func_41(int iParam0)
{
	if (DOES_ENTITY_EXIST(iParam0))
	{
		if (IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (GET_VEHICLE_ENGINE_HEALTH(iParam0) <= 200f)
			{
				SET_VEHICLE_ENGINE_HEALTH(iParam0, 500f);
			}
			if (GET_VEHICLE_PETROL_TANK_HEALTH(iParam0) <= 700f)
			{
				SET_VEHICLE_ENGINE_HEALTH(iParam0, 900f);
			}
			if (GET_ENTITY_HEALTH(iParam0) < 200)
			{
				SET_VEHICLE_ENGINE_HEALTH(iParam0, 500f);
			}
		}
	}
}

void func_42(int iParam0)
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
	iVar0 = func_50(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_42348[iVar0 /*5*/];
		func_45(1, iVar1, 1);
		return;
	}
	iVar2 = func_44(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_43(iVar2);
}

void func_43(int iParam0)
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

int func_44(int iParam0)
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

void func_45(int iParam0, int iParam1, int iParam2)
{
	func_46(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_46(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_48(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_47();
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

int func_47()
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

int func_48(int iParam0, int iParam1, int iParam2)
{
	if (func_49(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_49(int iParam0, int iParam1, int iParam2)
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

int func_50(int iParam0)
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

void func_51()
{
	if (Global_8161[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8161[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8161[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8161[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8161[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8161[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	CLEAR_BIT(&Global_7356, 25);
	SET_BIT(&Global_7357, 11);
}

int func_52(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_96177.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_54(0))
		{
			return 0;
		}
		Global_41360++;
		*iParam0 = Global_41360;
		SET_PLAYER_INVINCIBLE(SET_PLAYER_INVINCIBLE(), 0);
		Global_22211.f_5 = 0;
		if (iParam2 != 5)
		{
			FORCE_CLEANUP(8);
		}
		Global_41396 = iParam2;
		Global_41358 = *iParam0;
		Global_41359 = iParam4;
		Global_41357 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_41357 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41357)
			{
				if (Global_41363[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41358 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_107(iParam2))
		{
			return 0;
		}
		if (Global_41357 == 8)
		{
			return 0;
		}
		Global_41360++;
		*iParam0 = Global_41360;
		Global_41363[Global_41357 /*4*/] = Global_41360;
		Global_41363[Global_41357 /*4*/].f_1 = iParam1;
		Global_41363[Global_41357 /*4*/].f_2 = iParam2;
		Global_41363[Global_41357 /*4*/].f_3 = 0;
		Global_41357++;
		if (iParam4 != 0)
		{
			func_53(iParam0, iParam4);
		}
	}
	return 2;
}

void func_53(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_41357 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41357)
	{
		if (Global_41363[iVar0 /*4*/] == *uParam0)
		{
			Global_41363[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_54(int iParam0)
{
	if (Global_41396 == 15)
	{
		return 0;
	}
	if (func_107(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_55()
{
	if (((!DOES_ENTITY_EXIST(iLocal_54) || DOES_ENTITY_EXIST(iLocal_54, 0)) || !DOES_ENTITY_EXIST(iLocal_54, 1)) || DOES_ENTITY_EXIST(DOES_ENTITY_EXIST(), 0))
	{
		if (DOES_ENTITY_EXIST(iLocal_54) && DOES_ENTITY_EXIST(iLocal_54, 0))
		{
			SET_VEHICLE_DOORS_LOCKED(iLocal_54, 2);
		}
		func_100(0);
		if (func_1(sLocal_65))
		{
			CLEAR_HELP(1);
		}
		return;
	}
	if (fLocal_57 < (fLocal_77 * fLocal_77))
	{
		SET_VEHICLE_DOORS_LOCKED(iLocal_54, 1);
		func_62(sLocal_65);
		func_56(0);
	}
	else if (func_1(sLocal_65))
	{
		CLEAR_HELP(1);
	}
}

void func_56(int iParam0)
{
	if (func_61())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_69(0))
		{
			func_57(iParam0);
		}
		SET_BIT(&Global_7357, 2);
	}
}

void func_57(int iParam0)
{
	if (func_61())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_60())
		{
			func_59(1, 1);
		}
		else
		{
			func_59(0, 0);
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
	if (!func_58())
	{
		Global_19486.f_1 = 3;
	}
}

int func_58()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_59(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_69(0))
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

bool func_60()
{
	return IS_BIT_SET(Global_1687880, 5);
}

bool func_61()
{
	return IS_BIT_SET(Global_1687880, 19);
}

void func_62(char* sParam0)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 1, true, -1);
}

int func_63(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_64(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
	{
		return 0;
	}
	if (func_69(0))
	{
		return 0;
	}
	if (IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42116[iVar0 /*32*/] == 1 && Global_42116[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_42116[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_42116[iVar0 /*32*/].f_5 = 1;
			Global_42116[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_42116[iVar0 /*32*/] == 0)
			{
			}
			if (Global_42116[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_64(int iParam0)
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

void func_65(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_64(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42116[iVar0 /*32*/])
		{
			Global_42116[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_66(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_65(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
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
			*iParam0 = Global_42116[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_67(int iParam0)
{
	return 0;
	return 1;
}

var func_68()
{
	return Global_73784;
}

int func_69(int iParam0)
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

bool func_70(int iParam0, int iParam1)
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

bool func_71()
{
	return GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

int func_72()
{
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_73(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

int func_74()
{
	return 1;
}

bool func_75()
{
	int iVar0;
	bool bVar1;
	
	if (IS_PED_INJURED(IS_PED_INJURED()))
	{
		return 0;
	}
	GET_CURRENT_PED_WEAPON(GET_CURRENT_PED_WEAPON(), &iVar0, 1);
	if (((iVar0 == 0 || iVar0 == joaat("weapon_unarmed")) || iVar0 == joaat("weapon_electric_fence")) || iVar0 == joaat("gadget_parachute"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
	{
		return ((((bVar1 && IS_CONTROL_PRESSED(0, 69)) || (bVar1 && IS_CONTROL_PRESSED(0, 70))) || (bVar1 && IS_CONTROL_PRESSED(0, 68))) || IS_CONTROL_PRESSED(IS_CONTROL_PRESSED()));
	}
	return (((((bVar1 && IS_CONTROL_PRESSED(0, 24)) || (bVar1 && IS_CONTROL_PRESSED(0, 25))) || (bVar1 && IS_CONTROL_PRESSED(0, 47))) || IS_CONTROL_PRESSED(IS_CONTROL_PRESSED())) || IS_CONTROL_PRESSED(IS_CONTROL_PRESSED()));
}

int func_76(int iParam0)
{
	int iVar0;
	
	if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
	{
		if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()))
		{
			if (!IS_PED_INJURED(IS_PED_INJURED()))
			{
				iVar0 = func_32();
				if (!func_34(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!IS_PLAYER_READY_FOR_CUTSCENE(IS_PLAYER_READY_FOR_CUTSCENE()) || IS_PLAYER_READY_FOR_CUTSCENE(IS_PLAYER_READY_FOR_CUTSCENE())) || IS_PLAYER_READY_FOR_CUTSCENE(IS_PLAYER_READY_FOR_CUTSCENE())) || IS_PLAYER_READY_FOR_CUTSCENE(IS_PLAYER_READY_FOR_CUTSCENE())) || IS_PLAYER_READY_FOR_CUTSCENE(IS_PLAYER_READY_FOR_CUTSCENE())) || IS_PLAYER_READY_FOR_CUTSCENE(IS_PLAYER_READY_FOR_CUTSCENE(), 1)) || IS_PLAYER_READY_FOR_CUTSCENE(IS_PLAYER_READY_FOR_CUTSCENE())) || IS_PLAYER_READY_FOR_CUTSCENE(IS_PLAYER_READY_FOR_CUTSCENE(), 0)) || func_83()) || Global_110607) || Global_30738) || func_82()) || func_70(8, -1)) || func_81()) || func_80()) || func_79()) || func_72()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((IS_PLAYER_BEING_ARRESTED(IS_PLAYER_BEING_ARRESTED(), 1) || func_83()) || Global_30738) || func_82()) || func_70(8, -1)) || func_79()) || func_81()) || func_80()) || func_72()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!IS_PLAYER_READY_FOR_CUTSCENE(IS_PLAYER_READY_FOR_CUTSCENE()) || IS_PLAYER_READY_FOR_CUTSCENE(IS_PLAYER_READY_FOR_CUTSCENE())) || IS_PLAYER_READY_FOR_CUTSCENE(IS_PLAYER_READY_FOR_CUTSCENE())) || IS_PLAYER_READY_FOR_CUTSCENE(IS_PLAYER_READY_FOR_CUTSCENE())) || IS_PLAYER_READY_FOR_CUTSCENE(IS_PLAYER_READY_FOR_CUTSCENE())) || IS_PLAYER_READY_FOR_CUTSCENE(IS_PLAYER_READY_FOR_CUTSCENE(), 1)) || IS_PLAYER_READY_FOR_CUTSCENE(IS_PLAYER_READY_FOR_CUTSCENE())) || IS_PLAYER_READY_FOR_CUTSCENE(IS_PLAYER_READY_FOR_CUTSCENE(), 0)) || func_83()) || Global_110607) || Global_30738) || func_82()) || func_70(8, -1)) || func_79()) || func_81()) || func_80()) || func_72()) || Global_111560.f_7683.f_919[iVar0] == 5) || Global_41943 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((IS_PED_RAGDOLL(IS_PED_RAGDOLL()) || IS_PED_RAGDOLL(IS_PED_RAGDOLL())) || IS_PED_RAGDOLL(IS_PED_RAGDOLL(), 1)) || IS_PED_RAGDOLL(IS_PED_RAGDOLL(), 0)) || func_83()) || Global_110607) || Global_30738) || func_82()) || func_70(8, -1)) || func_81()) || func_80()) || func_72()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_83() || GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) > 0) || func_70(8, -1)) || func_72()) || func_78()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_70(8, -1) || func_81()) || func_80()) || func_78()) || func_77())
						{
							return 0;
						}
						if ((IS_PLAYER_SWITCH_IN_PROGRESS() && IS_PLAYER_SWITCH_IN_PROGRESS() != 3) && IS_PLAYER_SWITCH_IN_PROGRESS() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()))
						{
							if ((((((((((((((IS_PED_IN_COMBAT(IS_PED_IN_COMBAT(), 0) || IS_PED_IN_COMBAT(IS_PED_IN_COMBAT()) > 0) || IS_PED_IN_COMBAT(IS_PED_IN_COMBAT())) || IS_PED_IN_COMBAT(IS_PED_IN_COMBAT())) || IS_PED_IN_COMBAT(IS_PED_IN_COMBAT())) || IS_PED_IN_COMBAT(IS_PED_IN_COMBAT(), 1)) || IS_PED_IN_COMBAT(IS_PED_IN_COMBAT())) || func_83()) || Global_30738) || func_82()) || func_70(8, -1)) || func_80()) || func_79()) || func_72()) || Global_111560.f_7683.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((IS_PED_IN_COMBAT(IS_PED_IN_COMBAT(), 0) || !IS_PED_IN_COMBAT(IS_PED_IN_COMBAT())) || !IS_PED_IN_COMBAT(IS_PED_IN_COMBAT())) || !IS_PED_IN_COMBAT()) || IS_PED_IN_COMBAT(IS_PED_IN_COMBAT())) || IS_PED_IN_COMBAT(IS_PED_IN_COMBAT())) || IS_PED_IN_COMBAT(IS_PED_IN_COMBAT())) || IS_PED_IN_COMBAT(IS_PED_IN_COMBAT(), 1)) || func_83()) || func_80()) || Global_110607) || Global_30738) || func_82()) || Global_42561) || func_70(8, -1)) || func_79()) || func_78()) || func_72()) || Global_111560.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((IS_PED_IN_COMBAT(IS_PED_IN_COMBAT(), 0) || !IS_PED_IN_COMBAT(IS_PED_IN_COMBAT())) || !IS_PED_IN_COMBAT(IS_PED_IN_COMBAT())) || !IS_PED_IN_COMBAT()) || IS_PED_IN_COMBAT(IS_PED_IN_COMBAT(), 0)) || IS_PED_IN_COMBAT(IS_PED_IN_COMBAT())) || IS_PED_IN_COMBAT(IS_PED_IN_COMBAT(), 1)) || IS_PED_IN_COMBAT(IS_PED_IN_COMBAT())) || IS_PED_IN_COMBAT(IS_PED_IN_COMBAT())) || IS_PED_IN_COMBAT(IS_PED_IN_COMBAT())) || IS_PED_IN_COMBAT(IS_PED_IN_COMBAT(), 1)) || IS_PED_IN_COMBAT(IS_PED_IN_COMBAT())) || func_83()) || Global_110607) || Global_30738) || func_82()) || func_70(8, -1)) || func_79()) || func_78()) || func_81()) || func_80()) || func_72())
						{
							return 0;
						}
						break;
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
	else
	{
		return 0;
	}
	return 1;
}

var func_77()
{
	return Global_98708.f_1;
}

int func_78()
{
	if (Global_95621 != -1)
	{
		return IS_BIT_SET(Global_89487[Global_95621 /*34*/].f_15, 13);
	}
	return 0;
}

int func_79()
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

bool func_80()
{
	return Global_98721.f_346 > 0;
}

bool func_81()
{
	return Global_98721.f_345 > 0;
}

var func_82()
{
	return Global_1312873;
}

int func_83()
{
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_96177.f_44 == 1;
	}
	return 0;
}

int func_84()
{
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_85()
{
	return Global_94531;
}

int func_86(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_88(6) || func_88(7))
			{
				return 1;
			}
			else
			{
				return func_86(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_107(5))
			{
				if (func_76(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_87(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return DOES_BLIP_EXIST(Global_31111[iVar0 /*23*/].f_19);
}

bool func_88(int iParam0)
{
	return Global_41396 == iParam0;
}

void func_89(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_90()
{
}

void func_91(var uParam0, int iParam1)
{
	func_92(uParam0, iParam1);
}

void func_92(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_93()
{
	if (Global_41396 == 15)
	{
		return 0;
	}
	return 1;
}

void func_94()
{
	iLocal_46++;
}

int func_95()
{
	return 1;
}

void func_96()
{
}

int func_97()
{
	return 0;
}

int func_98()
{
	return 1;
}

int func_99()
{
	return 1;
}

void func_100(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_70 = iParam0;
	iLocal_68 = 0;
	iLocal_59 = 7;
}

int func_101()
{
	vector3 vVar0;
	float fVar1;
	
	if (IS_PED_INJURED(IS_PED_INJURED()))
	{
		return 0;
	}
	vVar0 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true) };
	fVar1 = vdist2(vVar0, vLocal_56);
	if (fVar1 < (10f * 10f))
	{
		return 1;
	}
	else if (fVar1 < (80f * 80f))
	{
		if (IS_SPHERE_VISIBLE(vLocal_56, 5f))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_102(int iParam0)
{
	iLocal_59 = iParam0;
}

void func_103(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = IS_BIT_SET(Global_31111[iVar0 /*23*/].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != IS_BIT_SET(Global_31111[iVar0 /*23*/].f_11, 0))
	{
		SET_BIT(&(Global_31111[iVar0 /*23*/].f_11), 18);
		if (Global_31108 == 1)
		{
			Global_31109 = 1;
		}
		Global_31108 = 1;
	}
	if (bParam1)
	{
		SET_BIT(&(Global_31111[iVar0 /*23*/].f_11), 0);
		SET_BIT(&(Global_31111[iVar0 /*23*/].f_11), 15);
		SET_BIT(&(Global_31111[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		CLEAR_BIT(&(Global_31111[iVar0 /*23*/].f_11), 0);
		CLEAR_BIT(&(Global_31111[iVar0 /*23*/].f_11), 15);
	}
	if (!IS_BIT_SET(Global_31111[iVar0 /*23*/].f_11, 0))
	{
		if (DOES_BLIP_EXIST(Global_31111[iVar0 /*23*/].f_19))
		{
			SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
			REMOVE_BLIP(&(Global_31111[iVar0 /*23*/].f_19));
			SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
		}
	}
}

int func_104()
{
	if (IS_PC_VERSION())
	{
		if (_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_105()
{
	if (Global_95621 != -1)
	{
		return IS_BIT_SET(Global_89487[Global_95621 /*34*/].f_15, 20);
	}
	return 0;
}

bool func_106(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = IS_BIT_SET(Global_111560.f_9080.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

bool func_107(int iParam0)
{
	return func_108(iParam0, Global_41396);
}

int func_108(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

bool func_109(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_110()
{
	StringCopy(&Local_51, "stunt_plane_races", 64);
	iLocal_78 = joaat("stunt");
	fLocal_79 = 154.8464f;
	fLocal_66 = 209f;
	iLocal_69 = 95;
	CLEAR_AREA_OF_VEHICLES(vLocal_76, 10f, 0, 0, 0, 0, false, 0);
	iLocal_63 = 10;
	sLocal_65 = "PLAY_STUNT";
	fLocal_77 = 6f;
	iLocal_61 = 29500;
}

void func_111(var uParam0, int iParam1)
{
	func_112(uParam0, iParam1);
}

void func_112(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_113(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_69 != 263)
		{
			func_103(iLocal_69, 0, 0);
		}
	}
	func_65(&iLocal_60);
	if (func_109(uLocal_58, 2))
	{
		func_4();
		func_111(&uLocal_58, 2);
		func_8(&iLocal_62);
	}
	iLocal_62 = -1;
	func_114();
	TERMINATE_THIS_THREAD();
}

void func_114()
{
	if (DOES_ENTITY_EXIST(iLocal_54))
	{
		if (!IS_ENTITY_DEAD(iLocal_54, 0))
		{
			SET_ENTITY_AS_MISSION_ENTITY(iLocal_54, true, 1);
			SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_54);
			DELETE_VEHICLE(&iLocal_54);
		}
	}
	func_111(&uLocal_58, 4);
	func_115();
	if (IS_THREAD_ACTIVE(iLocal_50))
	{
		FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iLocal_50, 3);
	}
	if (!IS_STRING_NULL(&Local_52))
	{
		if (GET_LENGTH_OF_LITERAL_STRING(&Local_52) != 0)
		{
			SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_52);
		}
	}
}

void func_115()
{
}

__________________________
Native Named by Reliency
1577161213
__________________________
