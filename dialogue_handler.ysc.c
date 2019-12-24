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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	vector3 vLocal_38[24] = "";
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	vector3 vLocal_42[24] = "";
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	char cLocal_46[64] = "";
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	vector3 vLocal_55[24] = "";
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	char* sLocal_59 = NULL;
	vector3 vLocal_60[24] = "";
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	char* sLocal_64 = NULL;
	char* sLocal_65 = NULL;
	char* sLocal_66 = NULL;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	vector3 vLocal_70[24] = "";
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	char* sLocal_74 = NULL;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_95[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_96[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_97[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_98 = 0;
	int iLocal_99 = 0;
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
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_34 = 5000;
	iLocal_35 = 5000;
	NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	while (true)
	{
		wait(0);
		if (IS_BIT_SET(Global_7357, 1))
		{
			if (!IS_BIT_SET(Global_7356, 20))
			{
				if (IS_MOBILE_PHONE_CALL_ONGOING())
				{
					if (Global_19474)
					{
						func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
						if (Global_19429)
						{
							func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else
					{
						func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					CLEAR_BIT(&Global_7357, 1);
				}
			}
		}
		if (IS_BIT_SET(Global_19671, 0))
		{
			if (!func_115())
			{
				if (!IS_BIT_SET(Global_19671, 1))
				{
					SET_BIT(&Global_19671, 1);
					if (NETWORK_IS_GAME_IN_PROGRESS())
					{
						iLocal_89 = 0xBA7F0B77D80A4EB7();
					}
					else
					{
						iLocal_85 = GET_GAME_TIMER();
					}
				}
				if (NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_91 = IS_TIME_EQUAL_TO(IS_TIME_EQUAL_TO(), iLocal_89);
				}
				else
				{
					iLocal_86 = GET_GAME_TIMER();
					iLocal_91 = (iLocal_86 - iLocal_85);
				}
				if (iLocal_91 < 3000)
				{
					if (func_108(&Global_20259, &Global_20875, &Global_20795, Global_20808, Global_21790, Global_21791, 0))
					{
						Global_19671 = 0;
					}
				}
				else
				{
					Global_19671 = 0;
				}
			}
		}
		if ((!IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()) && !IS_PLAYER_PLAYING(Global_4456448.f_17, 4)) && !func_107())
		{
			if (Global_20805 != 0)
			{
				if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					func_106();
				}
			}
		}
		if (iLocal_32 == 1)
		{
			func_102();
		}
		switch (Global_20805)
		{
			case 0:
				break;
			
			case 1:
				if (Global_20811)
				{
					if (Global_20801 == 0)
					{
						func_100();
					}
					else
					{
						func_99();
						func_100();
					}
				}
				else if (Global_20801 == 0)
				{
					func_89();
				}
				else
				{
					func_99();
					func_71();
				}
				break;
			
			case 2:
				func_65();
				break;
			
			case 3:
				func_61();
				break;
			
			case 4:
				if (Global_20811)
				{
					if (Global_20813)
					{
						func_60();
					}
					else
					{
						func_7();
					}
				}
				else
				{
					func_5();
				}
				break;
			
			case 5:
				func_4();
				break;
			
			case 6:
				func_1();
				break;
			
			default:
				break;
		}
	}
}

void func_1()
{
	Global_20815 = 0;
	Global_19485 = 0;
	func_2();
}

void func_2()
{
	Global_2621441 = 0;
	Global_2621442 = 0;
	Global_20816 = 0;
	Global_20817 = 0;
	Global_20818 = 0;
	Global_20819 = 0;
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
	Global_20809 = 0;
	Global_20810 = 0;
	Global_20852 = 0;
	Global_20853 = 0;
	Global_20856 = 0;
	Global_20858 = 0;
	Global_20857 = 0;
	Global_20860 = 0;
	Global_20859 = 0;
	Global_21822 = 0;
	Global_20862 = 0;
	if (Global_19486.f_1 == 10)
	{
	}
	else if (IS_BIT_SET(Global_7356, 11))
	{
		func_3();
	}
	Global_20811 = 0;
	Global_20812 = 0;
	Global_20813 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21795 = 0;
	Global_21802 = 0;
	Global_21801 = 0;
	Global_21798 = 0;
	Global_21797 = 0;
	Global_21799 = 0;
	Global_21800 = 0;
	Global_20801 = 0;
	Global_20802 = 0;
	Global_20803 = 0;
	Global_20804 = 0;
	Global_21063 = 0;
	Global_21826 = 5000;
	Global_19469 = 0;
	CLEAR_BIT(&Global_7356, 20);
	CLEAR_BIT(&Global_7356, 24);
	CLEAR_BIT(&Global_7357, 23);
	CLEAR_BIT(&Global_7358, 0);
	CLEAR_BIT(&Global_7357, 9);
	CLEAR_BIT(&Global_7357, 31);
	CLEAR_BIT(&Global_7357, 17);
	CLEAR_BIT(&Global_7358, 5);
	Global_21789 = 0;
	Global_21788 = 0;
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		Global_20805 = 4;
	}
	else
	{
		Global_20805 = 0;
		Global_21816 = 0;
		Global_21827 = GET_GAME_TIMER();
	}
}

void func_3()
{
	if (!Global_76577)
	{
		if (!IS_PED_INJURED(IS_PED_INJURED()))
		{
			if (IS_BIT_SET(Global_7356, 11))
			{
				if (!Global_19429)
				{
					TASK_USE_MOBILE_PHONE(TASK_USE_MOBILE_PHONE(), 0, 1);
				}
				if (Global_76577)
				{
					SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 244, true);
					SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 243, true);
					SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 242, true);
				}
				CLEAR_BIT(&Global_7356, 11);
			}
		}
	}
}

void func_4()
{
	Global_20815 = 0;
	Global_19485 = 0;
	func_2();
}

void func_5()
{
	if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
	{
		if (IS_PED_SWIMMING_UNDER_WATER(IS_PED_SWIMMING_UNDER_WATER()))
		{
			if (Global_20861 == 0)
			{
				func_6();
			}
		}
	}
	if (iLocal_33 == 1)
	{
		func_6();
		func_6();
	}
	if (Global_21797 == 0)
	{
		if (iLocal_31 == 0)
		{
			if (Global_21816 == 1)
			{
				PAUSE_SCRIPTED_CONVERSATION(1);
				iLocal_31 = 1;
			}
		}
		else if (Global_21816 == 0)
		{
			RESTART_SCRIPTED_CONVERSATION();
			iLocal_31 = 0;
		}
	}
	else if (Global_21799 > 0)
	{
		iLocal_37 = GET_GAME_TIMER();
		if ((iLocal_37 - iLocal_36) > Global_21799)
		{
			START_PRELOADED_CONVERSATION();
			Global_21797 = 0;
		}
	}
	if (Global_21816 == 0)
	{
		if (!IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			Global_20805 = 6;
		}
	}
}

void func_6()
{
	RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		STOP_SCRIPTED_CONVERSATION(false);
		Global_20805 = 6;
	}
}

void func_7()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (IS_MOBILE_PHONE_CALL_ONGOING())
	{
		if (!IS_BIT_SET(Global_7356, 11))
		{
			if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
			{
				if (!IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
				{
					if (Global_76577 == 0)
					{
						func_58();
					}
				}
			}
		}
		else if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
		{
			if (IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE()))
			{
				if (Global_76577 == 0)
				{
					func_3();
				}
			}
		}
	}
	if (Global_76577 == 0)
	{
		func_57();
	}
	if (iLocal_33 == 1)
	{
		func_52(0);
	}
	if (iLocal_31 == 0)
	{
		if (Global_21816 == 1)
		{
			if (Global_21817 == 1)
			{
				PAUSE_SCRIPTED_CONVERSATION(1);
				iLocal_31 = 1;
				Global_21817 = 0;
			}
		}
	}
	else if (Global_21816 == 0)
	{
		if (Global_21817 == 1)
		{
			RESTART_SCRIPTED_CONVERSATION();
			iLocal_31 = 0;
			Global_21817 = 0;
		}
	}
	if (Global_20858 == 0)
	{
		if (!Global_20818)
		{
			if (!IS_BIT_SET(Global_7357, 31))
			{
				if (!IS_BIT_SET(Global_7357, 27))
				{
					if (func_51())
					{
						if (Global_19486.f_1 > 6)
						{
							SET_BIT(&Global_7357, 24);
							SET_BIT(&Global_7357, 27);
							CLEAR_BIT(&Global_7357, 26);
							CLEAR_BIT(&Global_7357, 25);
						}
					}
				}
			}
		}
	}
	if (IS_MOBILE_PHONE_CALL_ONGOING() == 0 && Global_20818 == 0)
	{
		if (Global_20858 == 1)
		{
			SET_BIT(&Global_7357, 23);
		}
		else
		{
			CLEAR_BIT(&Global_7357, 23);
		}
		if (Global_20862)
		{
			if (Global_20858 == 0)
			{
				Global_20424 = { Global_20863 };
				Global_20881 = { Global_20869 };
				Global_20815 = 0;
				Global_21822 = 6;
				func_50();
				return;
			}
		}
		if (!Global_20860)
		{
			while (Global_20858 == 1)
			{
				wait(0);
				if (Global_19486.f_1 < 6)
				{
					Global_20858 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_49();
						if (Global_20860)
						{
							iLocal_30 = 1;
							Global_21820 = 1;
							func_116(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_20947, &(Global_1798[Global_6671 /*29*/].f_7), &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_3), 0);
							func_48(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							if (Global_19474)
							{
								func_116(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, "CELL_604", 0, 0, 0, 0);
								func_116(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, "CELL_602", 0, 0, 0, 0);
								SET_BIT(&Global_7356, 17);
								func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, "CELL_603", 0, 0, 0, 0);
							}
							else
							{
								func_116(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, 0, 0, 0, 0, 0);
								func_116(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, 0, 0, 0, 0, 0);
								SET_BIT(&Global_7356, 17);
								func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, 0, 0, 0, 0, 0);
							}
						}
						else
						{
							iLocal_30 = 1;
							Global_21818 = 1;
							if (func_47(Global_6671, Global_19486) == 0)
							{
								func_116(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_20947, "CELL_300", &(Global_117[Global_6671 /*10*/].f_4), "CELL_195", 0);
								func_48(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							else
							{
								func_116(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_20947, &(Global_1798[Global_6671 /*29*/].f_7), &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_3), 0);
								func_48(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							if (Global_19474)
							{
								func_116(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
								func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
							}
							else
							{
								func_116(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
								func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
							}
							func_116(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
							CLEAR_BIT(&Global_7356, 17);
						}
					}
					if (func_46(2, Global_19455, 0))
					{
						func_44();
						Global_19412 = 0.19f;
						Global_20858 = 0;
						func_42();
						if (Global_20860)
						{
							Global_20424 = { Global_20941 };
							Global_21822 = 5;
						}
						else if (Global_20803 > 0)
						{
							Global_21063 = 1;
							Global_20805 = 0;
							Global_21826 = 0;
							if (IS_BIT_SET(Global_7357, 9))
							{
								iVar0 = 0;
								while (iVar0 < Global_21789 + 1)
								{
									uLocal_94[iVar0] = func_41(&(Global_21064[iVar0 /*6*/]));
									uLocal_95[iVar0] = func_41(&(Global_21426[iVar0 /*6*/]));
									iVar0++;
								}
								func_40(Global_21789, &Global_20094, Global_6671, &Global_20881, &uLocal_94, &uLocal_95, 9, 0, 0, 0, 0);
							}
							else if (Global_20803 == 2)
							{
								func_22(&Global_20094, Global_6671, &Global_20881, &(Global_20959[0 /*6*/]), &(Global_21011[0 /*6*/]), &(Global_20959[1 /*6*/]), &(Global_21011[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_21822 = 1;
							Global_21818 = 0;
							Global_21820 = 0;
							Global_20815 = 0;
							func_21();
							return;
						}
						else
						{
							Global_20424 = { Global_20899 };
							Global_21822 = 1;
						}
						Global_21818 = 0;
						Global_21820 = 0;
						Global_20815 = 0;
						func_21();
						func_50();
						return;
					}
					if (func_46(2, Global_19456, 0) || IS_BIT_SET(Global_7356, 24))
					{
						func_44();
						Global_19412 = 0.19f;
						Global_20858 = 0;
						func_42();
						if (Global_20860)
						{
							Global_20424 = { Global_20935 };
							Global_21822 = 4;
						}
						else if (Global_20803 > 0)
						{
							Global_21063 = 1;
							Global_20805 = 0;
							Global_21826 = 0;
							if (IS_BIT_SET(Global_7357, 9))
							{
								iVar1 = 0;
								while (iVar1 < Global_21788 + 1)
								{
									uLocal_96[iVar1] = func_41(&(Global_21245[iVar1 /*6*/]));
									uLocal_97[iVar1] = func_41(&(Global_21607[iVar1 /*6*/]));
									iVar1++;
								}
								func_40(Global_21788, &Global_20094, Global_6671, &Global_20881, &uLocal_96, &uLocal_97, 9, 0, 0, 0, 0);
							}
							else if (Global_20803 == 2)
							{
								func_22(&Global_20094, Global_6671, &Global_20881, &(Global_20972[0 /*6*/]), &(Global_21024[0 /*6*/]), &(Global_20972[1 /*6*/]), &(Global_21024[1 /*6*/]), 9, 0, 0, 0, 0);
							}
							Global_21822 = 2;
							Global_21818 = 0;
							Global_21820 = 0;
							Global_20815 = 0;
							func_21();
							return;
						}
						else
						{
							Global_20424 = { Global_20905 };
							Global_21822 = 2;
						}
						Global_21818 = 0;
						Global_21820 = 0;
						Global_20815 = 0;
						func_21();
						func_50();
						return;
					}
					if (func_46(2, Global_19458, 0))
					{
						if (Global_20860)
						{
							Global_19412 = 0.19f;
							Global_20858 = 0;
							func_42();
							func_44();
							Global_20424 = { Global_20929 };
							Global_21822 = 3;
							Global_21818 = 0;
							Global_21820 = 0;
							Global_20815 = 0;
							func_21();
							func_50();
							return;
						}
					}
				}
			}
		}
		else
		{
			while (Global_20858)
			{
				wait(0);
				if (Global_19486.f_1 < 6)
				{
					Global_20858 = 0;
				}
				else
				{
					if (iLocal_30 == 0)
					{
						func_49();
						func_48(Global_19467, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_116(Global_19467, "SET_DATA_SLOT", to_float(18), to_float(0), to_float(0), -1f, -1f, "CELL_603", 0, 0, 0, 0);
						func_116(Global_19467, "SET_DATA_SLOT", to_float(18), to_float(1), to_float(0), -1f, -1f, "CELL_602", 0, 0, 0, 0);
						func_116(Global_19467, "SET_DATA_SLOT", to_float(18), to_float(2), to_float(0), -1f, -1f, "CELL_604", 0, 0, 0, 0);
						func_48(Global_19467, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_20(Global_19467, "SET_HEADER", "CELL_601", 0, 0, 0, 0);
						if (Global_19474)
						{
							func_116(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
						}
						else
						{
							func_116(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_116(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						CLEAR_BIT(&Global_7356, 17);
						iLocal_98 = 0;
						iLocal_30 = 1;
					}
					func_14();
					if (func_46(2, Global_19455, 0))
					{
						func_44();
						Global_20858 = 0;
						func_42();
						BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "GET_CURRENT_SELECTION");
						iLocal_99 = _END_SCALEFORM_MOVIE_METHOD_RETURN();
						while (!_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(iLocal_99))
						{
							wait(0);
						}
						iVar2 = _GET_SCALEFORM_MOVIE_FUNCTION_RETURN_INT(iLocal_99);
						switch (iVar2)
						{
							case 0:
								Global_20424 = { Global_20935 };
								Global_21822 = 4;
								break;
							
							case 1:
								Global_20424 = { Global_20929 };
								Global_21822 = 3;
								break;
							
							case 2:
								Global_20424 = { Global_20941 };
								Global_21822 = 5;
								break;
						}
						Global_21818 = 0;
						Global_21820 = 0;
						Global_20815 = 0;
						func_21();
						func_50();
						return;
					}
					if (func_46(2, Global_19456, 0))
					{
						Global_20858 = 0;
						func_42();
					}
				}
			}
		}
		if (Global_20806 == 0)
		{
			STOP_SCRIPTED_CONVERSATION(false);
			settimera(0);
			while (timera() < 900 && Global_19486.f_1 == 9)
			{
				wait(0);
			}
			Global_20805 = 6;
		}
		PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_19475, true);
		func_13();
		Global_19486.f_1 = Global_19488;
		func_8();
	}
	else if (Global_19664 == 0)
	{
		if (func_46(2, Global_19454, 0))
		{
			if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
			{
				if (IS_PLAYER_CONTROL_ON(IS_PLAYER_CONTROL_ON()))
				{
					if (IS_BIT_SET(Global_7356, 20))
					{
					}
					else
					{
						Global_19464 = 1;
						func_42();
						STOP_SCRIPTED_CONVERSATION(false);
						Global_20854 = 1;
						Global_20855 = 1;
						Global_20805 = 6;
						func_13();
						Global_19486.f_1 = Global_19488;
						func_8();
					}
				}
			}
		}
	}
}

void func_8()
{
	vector3 vVar0[24];
	
	if (Global_19469 == 1)
	{
		return;
	}
	if (Global_19486.f_1 < 4)
	{
		return;
	}
	while (!HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
	{
		if (Global_76577)
		{
			return;
		}
		wait(0);
	}
	switch (Global_19486.f_1)
	{
		case 6:
			func_48(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_11(Global_7961);
			if (Global_7961 == 1)
			{
				func_48(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19490), -1082130432, -1082130432, -1082130432);
				Global_19466 = Global_19490;
			}
			else
			{
				func_48(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19491), -1082130432, -1082130432, -1082130432);
				Global_19466 = Global_19491;
			}
			if (Global_19474)
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_19666 == 0)
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				CLEAR_BIT(&Global_7356, 17);
			}
			else if (Global_76577)
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				CLEAR_BIT(&Global_7356, 17);
			}
			else
			{
				if (Global_19665 == 1)
				{
					if (Global_19474)
					{
						func_116(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_116(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19474)
				{
					func_116(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_116(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				SET_BIT(&Global_7356, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_48(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_116(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_116(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			CLEAR_BIT(&Global_7356, 17);
			if (IS_BIT_SET(Global_7356, 20))
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_19485 == 1)
			{
				func_10();
				func_48(Global_19467, "SET_THEME", to_float(Global_111560.f_14046[Global_19486 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_20818)
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(4);
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(2);
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_20820);
					END_TEXT_COMMAND_SCALEFORM_STRING();
					func_9("CELL_300");
					func_9("CELL_217");
					func_9("CELL_217");
					END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_47(Global_6671, Global_19486) == 0)
				{
					func_116(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_116(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), "CELL_217", &(Global_1798[Global_6671 /*29*/].f_3), 0);
				}
				func_48(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_20805 == 4 || Global_20805 == 3)
			{
				func_48(Global_19467, "SET_THEME", to_float(Global_111560.f_14046[Global_19486 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_10();
				if (Global_20818)
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(4);
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(2);
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_20820);
					END_TEXT_COMMAND_SCALEFORM_STRING();
					func_9("CELL_300");
					func_9("CELL_219");
					func_9("CELL_219");
					END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_21063)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (func_47(Global_6671, Global_19486) == 0)
					{
						func_48(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_116(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_48(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_116(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), &cVar0, &(Global_1798[Global_6671 /*29*/].f_3), 0);
					}
				}
				func_48(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_21();
			break;
		
		default:
			break;
	}
}

void func_9(char* sParam0)
{
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_10()
{
	if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
	{
		if (Global_19486 == 0)
		{
			switch (Global_111560.f_14046[Global_19486 /*20*/].f_6)
			{
				case 1:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(), 0);
					break;
				
				case 2:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(), 1);
					break;
				
				case 3:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(), 2);
					break;
				
				case 4:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(), 3);
					break;
				
				case 5:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(), 4);
					break;
				
				case 6:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(), 5);
					break;
				
				case 7:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_19486 == 1)
		{
			switch (Global_111560.f_14046[Global_19486 /*20*/].f_6)
			{
				case 1:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(), 6);
					break;
				
				case 2:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(), 0);
					break;
				
				case 3:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(), 1);
					break;
				
				case 4:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(), 2);
					break;
				
				case 5:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(), 3);
					break;
				
				case 6:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(), 4);
					break;
				
				case 7:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_19486 == 2)
		{
			switch (Global_111560.f_14046[Global_19486 /*20*/].f_6)
			{
				case 1:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(), 5);
					break;
				
				case 2:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(), 6);
					break;
				
				case 3:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(), 1);
					break;
				
				case 4:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(), 0);
					break;
				
				case 5:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(), 2);
					break;
				
				case 6:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(), 3);
					break;
				
				case 7:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_19486 == 3)
		{
			switch (Global_4269891)
			{
				case 1:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(), 0);
					break;
				
				case 2:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(), 1);
					break;
				
				case 3:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(), 2);
					break;
				
				case 4:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(), 3);
					break;
				
				case 5:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(), 4);
					break;
				
				case 6:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(), 5);
					break;
				
				case 7:
					SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_11(int iParam0)
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
	
	Global_21873 = 0;
	Global_7961 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_7925[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_12(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7363[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7363[iVar1 /*15*/].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (IS_BIT_SET(Global_7357, 3))
								{
									iVar2 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_19668 = 0;
								}
								BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_7363[iVar1 /*15*/].f_10);
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
								func_9(&(Global_7363[iVar1 /*15*/]));
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar2);
								END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2458994)
							{
								if (iVar1 == 14)
								{
									func_116(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_7925[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7363[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7363[iVar1 /*15*/].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_111560.f_14136[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_111560.f_14136[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_111560.f_14136[iVar3 /*104*/].f_99[Global_19486] == 1)
											{
												Global_21873++;
											}
										}
									}
									iVar3++;
								}
								func_116(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(Global_21873), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_76577)
								{
									iVar4 = 0;
									iVar4 = Global_4268349;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4268350[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4268350[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4268350[iVar5 /*104*/].f_99[Global_19486] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_116(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19486)
									{
										case 0:
											iVar6 = Global_42566;
											break;
										
										case 1:
											iVar6 = Global_42567;
											break;
										
										case 2:
											iVar6 = Global_42568;
											break;
										
										default:
											break;
									}
									func_116(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_116(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_7363[iVar1 /*15*/].f_10);
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
								func_9(&(Global_7363[iVar1 /*15*/]));
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_7362);
								END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (IS_BIT_SET(Global_7357, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_7363[iVar1 /*15*/].f_10);
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
								func_9(&(Global_7363[iVar1 /*15*/]));
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar7);
								END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (IS_BIT_SET(Global_7357, 3))
								{
									iVar8 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_19668 = 0;
								}
								BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_7363[iVar1 /*15*/].f_10);
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
								func_9(&(Global_7363[iVar1 /*15*/]));
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar8);
								END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_7363[iVar1 /*15*/].f_10);
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
								func_9(&(Global_7363[iVar1 /*15*/]));
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(42);
								END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && ARE_STRINGS_EQUAL(&(Global_7363[iVar1 /*15*/]), "CELL_BENWEB")) && ARE_STRINGS_EQUAL(Global_7357, 6))
							{
								BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_7363[iVar1 /*15*/].f_10);
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
								func_9(&(Global_7363[iVar1 /*15*/]));
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(42);
								END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_7363[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627599.f_1;
								func_116(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_116(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_7925[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_12(int iParam0)
{
	return Global_41396 == iParam0;
}

void func_13()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return;
	}
	switch (Global_19488)
	{
		case 5:
			Global_19488 = 6;
			break;
		
		case 6:
			if (IS_BIT_SET(Global_7357, 5))
			{
				Global_19488 = 6;
				CLEAR_BIT(&Global_7357, 5);
			}
			else
			{
				Global_19488 = 3;
			}
			break;
		
		case 7:
			Global_19488 = 3;
			break;
		
		case 3:
			if (IS_BIT_SET(Global_7357, 5))
			{
				Global_19488 = 6;
				CLEAR_BIT(&Global_7357, 5);
			}
			else
			{
				Global_19488 = 3;
			}
			break;
		
		default:
			Global_19488 = 3;
			break;
	}
}

void func_14()
{
	if (iLocal_98)
	{
		if (timera() > 50)
		{
			iLocal_98 = 0;
		}
	}
	if (iLocal_98 == 0)
	{
		if (func_46(2, Global_19462, 0) || IS_CONTROL_JUST_PRESSED(2, 181))
		{
			func_18();
			iLocal_98 = 1;
			settimera(0);
		}
		if (func_46(2, Global_19463, 0) || IS_CONTROL_JUST_PRESSED(2, 180))
		{
			func_15();
			iLocal_98 = 1;
			settimera(0);
		}
	}
}

void func_15()
{
	func_48(Global_19467, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, true);
	func_16();
}

void func_16()
{
	if (func_17())
	{
		if (Global_19669 == 0)
		{
			_MOVE_FINGER(2);
		}
		else
		{
			_MOVE_FINGER(1);
		}
	}
}

int func_17()
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

void func_18()
{
	func_48(Global_19467, "SET_INPUT_EVENT", to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, true);
	func_19();
}

void func_19()
{
	if (func_17())
	{
		if (Global_19669 == 0)
		{
			_MOVE_FINGER(1);
		}
		else
		{
			_MOVE_FINGER(2);
		}
	}
}

void func_20(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_9(sParam2);
	if (!IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_9(sParam3);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_9(sParam4);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_9(sParam5);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_9(sParam6);
	}
	END_SCALEFORM_MOVIE_METHOD();
}

void func_21()
{
	if (HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
	{
		if (Global_19485 == 1)
		{
			if (Global_19474)
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20852)
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (IS_BIT_SET(Global_7356, 20))
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_116(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			CLEAR_BIT(&Global_7356, 17);
		}
		else
		{
			func_116(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_116(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			CLEAR_BIT(&Global_7356, 17);
			if (IS_BIT_SET(Global_7356, 20))
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

int func_22(var uParam0, int iParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	var uVar1;
	
	func_39(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_38();
	if (iParam8 == 1)
	{
		Global_20817 = 1;
	}
	else
	{
		Global_20817 = 0;
	}
	uVar0 = 10;
	uVar1 = 10;
	func_36(2, &uVar0, &uVar1, uParam3, uParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_23(&uVar0, &uVar1, iParam7, bParam11);
}

int func_23(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam2 > Global_20807)
			{
				if (bParam3 == 0)
				{
					STOP_SCRIPTED_CONVERSATION(false);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
				}
				else
				{
					func_106();
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
		if (func_35(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_34();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21801 = Global_21802;
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20424.f_370 = Global_21794;
		Global_20801 = Global_20802;
		Global_20803 = Global_20804;
		if (Global_21063 == 0)
		{
			Global_20959[0 /*6*/] = { Global_20985[0 /*6*/] };
			Global_20959[1 /*6*/] = { Global_20985[1 /*6*/] };
			Global_21011[0 /*6*/] = { Global_21037[0 /*6*/] };
			Global_21011[1 /*6*/] = { Global_21037[1 /*6*/] };
			Global_20972[0 /*6*/] = { Global_20998[0 /*6*/] };
			Global_20972[1 /*6*/] = { Global_20998[1 /*6*/] };
			Global_21024[0 /*6*/] = { Global_21050[0 /*6*/] };
			Global_21024[1 /*6*/] = { Global_21050[1 /*6*/] };
		}
		if (Global_20811)
		{
			CLEAR_BIT(&Global_7356, 20);
			CLEAR_BIT(&Global_7357, 17);
			CLEAR_BIT(&Global_7358, 0);
			if (bParam3)
			{
				func_27();
				if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
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
				if (func_26())
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
					if (Global_21063 == 0)
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
			}
			if (func_25())
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
			}
			func_24();
			Global_20815 = bParam3;
		}
		Global_20807 = iParam2;
		if (Global_20801 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_20801)
			{
				StringCopy(&(Global_20424.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_20424.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_19671 = 0;
		func_50();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_20807 || iParam2 == Global_20807)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_106();
	}
	return 0;
}

void func_24()
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

int func_25()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_26()
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

void func_27()
{
	if (func_12(14))
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
		Global_19486 = func_28();
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

var func_28()
{
	func_29();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_29()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()))
	{
		if (func_32(Global_111560.f_2358.f_539.f_4321) != GET_ENTITY_MODEL(GET_ENTITY_MODEL()))
		{
			iVar0 = func_31(PLAYER_PED_ID());
			if (func_30(iVar0) && (!func_12(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_30(Global_111560.f_2358.f_539.f_4321))
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

bool func_30(int iParam0)
{
	return iParam0 < 3;
}

int func_31(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_32(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_32(int iParam0)
{
	if (func_30(iParam0))
	{
		return func_33(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_33(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_34()
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

bool func_35(int iParam0, int iParam1)
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

void func_36(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	func_37(iParam0);
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_37(var uParam0)
{
	Global_20802 = uParam0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
}

void func_38()
{
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_20819 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	Global_2621441 = 0;
}

void func_39(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = iParam5;
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

int func_40(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	func_39(uParam1, iParam2, sParam3, iParam8, iParam9, 0);
	func_38();
	if (iParam7 == 1)
	{
		Global_20817 = 1;
	}
	else
	{
		Global_20817 = 0;
	}
	func_37(uParam0);
	return func_23(uParam4, uParam5, iParam6, bParam10);
}

var func_41(var uParam0)
{
	return uParam0;
}

void func_42()
{
	if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
	{
		PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_19475, true);
		func_43();
	}
}

void func_43()
{
	if (func_17())
	{
		_MOVE_FINGER(5);
	}
}

void func_44()
{
	if (func_45())
	{
		if (!IS_PED_INJURED(IS_PED_INJURED()))
		{
			if (!IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
			{
				if (!Global_19429)
				{
					if (!IS_BIT_SET(Global_7356, 11))
					{
						func_58();
					}
				}
			}
		}
	}
}

int func_45()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
	{
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			if (Global_19429 == 0)
			{
				if (Global_6671 != 128)
				{
					if (!IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
					{
						if (Global_20805 != 2)
						{
						}
					}
				}
			}
		}
		if (func_12(14))
		{
			return 0;
		}
		if (IS_PED_IN_COVER(IS_PED_IN_COVER(), 0))
		{
			return 0;
		}
		if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
		{
			if (!_IS_IN_VEHICLE_CAM_DISABLED())
			{
				if (IS_ENTITY_IN_WATER(IS_ENTITY_IN_WATER(IS_ENTITY_IN_WATER(), 0)))
				{
					return 0;
				}
			}
		}
		if (((IS_PED_SWIMMING(IS_PED_SWIMMING()) || IS_PED_SWIMMING(IS_PED_SWIMMING())) || IS_PED_SWIMMING(IS_PED_SWIMMING())) || IS_PED_SWIMMING(IS_PED_SWIMMING()))
		{
			return 0;
		}
		if (Global_110608)
		{
			return 0;
		}
	}
	if (Global_76577)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = _0x19CAFA3C87F7C2FF();
	iVar1 = _0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || _IS_IN_VEHICLE_CAM_DISABLED()))
	{
		iVar2 = 1;
		if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
		{
			if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
			{
				iVar3 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
				if ((((((((IS_THIS_MODEL_A_BIKE(IS_THIS_MODEL_A_BIKE(iVar3)) || IS_THIS_MODEL_A_BIKE(IS_THIS_MODEL_A_BIKE(iVar3))) || IS_THIS_MODEL_A_BIKE(IS_THIS_MODEL_A_BIKE(iVar3))) || IS_THIS_MODEL_A_BIKE(iVar3) == joaat("seashark")) || IS_THIS_MODEL_A_BIKE(iVar3) == joaat("seashark2")) || IS_THIS_MODEL_A_BIKE(iVar3) == joaat("rhino")) || IS_THIS_MODEL_A_BIKE(iVar3) == joaat("submersible")) || IS_THIS_MODEL_A_BIKE(iVar3) == joaat("submersible2")) || IS_THIS_MODEL_A_BIKE(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4269893 || iVar2 == 1)
	{
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) > 0 || Global_111560.f_14046.f_89)
		{
			if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

int func_46(int iParam0, int iParam1, int iParam2)
{
	if (IS_CONTROL_JUST_PRESSED(iParam0, iParam1) || (iParam2 == 1 && IS_CONTROL_JUST_PRESSED(iParam0, iParam1)))
	{
		if (IS_PC_VERSION())
		{
			if (UPDATE_ONSCREEN_KEYBOARD() == 0 || (UPDATE_ONSCREEN_KEYBOARD() && UPDATE_ONSCREEN_KEYBOARD(2)))
			{
				return 0;
			}
		}
		if (IS_PAUSE_MENU_ACTIVE() || IS_PAUSE_MENU_ACTIVE())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_47(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_24[iParam1];
}

void func_48(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_49()
{
	if (func_45())
	{
		if (!IS_PED_INJURED(IS_PED_INJURED()))
		{
			if (!IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
			{
				if (!Global_19429)
				{
					if (IS_BIT_SET(Global_7356, 11))
					{
						func_3();
					}
				}
			}
		}
	}
}

void func_50()
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

int func_51()
{
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_91 = IS_TIME_EQUAL_TO(IS_TIME_EQUAL_TO(), iLocal_90);
	}
	else
	{
		iLocal_88 = GET_GAME_TIMER();
		iLocal_91 = (iLocal_88 - iLocal_87);
	}
	return 0;
}

void func_52(int iParam0)
{
	if (func_56())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_55())
		{
			func_53(1, 1);
		}
		else
		{
			func_53(0, 0);
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
	if (!func_25())
	{
		Global_19486.f_1 = 3;
	}
}

void func_53(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_54(0))
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

int func_54(int iParam0)
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

bool func_55()
{
	return IS_BIT_SET(Global_1687880, 5);
}

bool func_56()
{
	return IS_BIT_SET(Global_1687880, 19);
}

void func_57()
{
	if (func_46(2, Global_19463, 0))
	{
		if (Global_21816 == 0)
		{
			if (Global_20811)
			{
				if (IS_BIT_SET(Global_7357, 17))
				{
				}
				else
				{
					SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE();
				}
			}
		}
	}
}

void func_58()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!IS_PED_INJURED(IS_PED_INJURED()))
	{
		if (func_59() && IS_PED_IN_COVER(IS_PED_IN_COVER(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_76577)
	{
		if (!IS_PED_INJURED(IS_PED_INJURED()) && iVar1 == 0)
		{
			iVar2 = GET_PED_PROP_INDEX(GET_PED_PROP_INDEX(), 0);
			if (Global_76577)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || IS_PED_WEARING_HELMET(IS_PED_WEARING_HELMET()))
				{
					iVar0 = 1;
				}
			}
			else if (IS_PED_WEARING_HELMET(IS_PED_WEARING_HELMET()))
			{
				iVar0 = 1;
			}
			if (!Global_19429)
			{
				if (Global_6671 != 128)
				{
					if (iVar0 == 0)
					{
						if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
						{
							if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
							{
							}
							else
							{
								if (Global_76577)
								{
									SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 244, false);
									SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 243, false);
									SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 242, false);
								}
								SET_BIT(&Global_7356, 11);
								TASK_USE_MOBILE_PHONE(TASK_USE_MOBILE_PHONE(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

int func_59()
{
	int iVar0;
	int iVar1;
	
	iVar0 = _0x19CAFA3C87F7C2FF();
	iVar1 = _0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_60()
{
	if (Global_76577 == 0)
	{
		func_57();
	}
	if (iLocal_33 == 1)
	{
		func_52(0);
	}
	if (iLocal_30 == 0)
	{
		iLocal_30 = 1;
		Global_21818 = 1;
		if (func_47(Global_6671, Global_19486) == 0)
		{
			func_116(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_20947, "CELL_300", "CELL_195", "CELL_195", 0);
			func_48(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_116(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(4), -1f, -1f, &Global_20947, &(Global_1798[Global_6671 /*29*/].f_7), &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_3), 0);
			func_48(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		Global_19412 = 0.2f;
		if (Global_19474)
		{
			func_116(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
			func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
		}
		else
		{
			func_116(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
			func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_116(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		CLEAR_BIT(&Global_7356, 17);
	}
	if (Global_20858 == 1)
	{
		if (Global_19486.f_1 < 6)
		{
			Global_20858 = 0;
		}
		else
		{
			if (Global_19426 == 0)
			{
				if (func_46(2, Global_19455, 0))
				{
					Global_19412 = 0.19f;
					Global_20858 = 0;
					func_42();
					Global_21823 = 1;
					iLocal_32 = 1;
				}
			}
			if (func_46(2, Global_19456, 0))
			{
				Global_19412 = 0.19f;
				Global_20858 = 0;
				func_42();
				Global_21823 = 2;
			}
		}
	}
	else if (Global_21823 == 2)
	{
		if (Global_20806 == 0)
		{
			STOP_SCRIPTED_CONVERSATION(false);
			Global_20805 = 6;
		}
		func_13();
		Global_19486.f_1 = Global_19488;
		func_8();
	}
	else if (!IS_MOBILE_PHONE_CALL_ONGOING())
	{
		iLocal_32 = 0;
		STOP_SCRIPTED_CONVERSATION(false);
		Global_20805 = 6;
		PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_19475, true);
		func_13();
		Global_19486.f_1 = Global_19488;
		func_8();
	}
}

void func_61()
{
	if (Global_19672 == 1)
	{
		if (IS_MOBILE_PHONE_CALL_ONGOING())
		{
			if (_0xE73364DB90778FFA())
			{
				Global_19672 = 0;
			}
		}
		if (!IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
		{
			Global_19672 = 0;
			STOP_SCRIPTED_CONVERSATION(false);
			Global_20805 = 6;
		}
	}
	if (timerb() > iLocal_35)
	{
		if (Global_19672 == 1)
		{
			Global_19672 = 0;
		}
	}
	if (timera() < Global_21826 || Global_19672 == 1)
	{
		if (func_46(2, Global_19454, 0))
		{
			if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
			{
				if (IS_PLAYER_CONTROL_ON(IS_PLAYER_CONTROL_ON()))
				{
					if (IS_BIT_SET(Global_7356, 20))
					{
					}
					else
					{
						Global_19464 = 1;
						func_42();
						STOP_SCRIPTED_CONVERSATION(false);
						Global_20854 = 1;
						Global_20805 = 6;
						CLEAR_BIT(&Global_7356, 27);
						if (!Global_20816)
						{
							SET_BIT(&Global_7357, 5);
						}
						func_13();
						Global_19486.f_1 = Global_19488;
						func_8();
					}
				}
			}
		}
	}
	else
	{
		CLEAR_BIT(&Global_7356, 27);
		Global_20805 = 4;
		Global_20862 = 0;
		func_64();
		func_63();
		if (!Global_20818)
		{
			if (Global_21822 == 0)
			{
				if (!IS_BIT_SET(Global_7358, 5))
				{
					START_PRELOADED_CONVERSATION();
				}
				CLEAR_BIT(&Global_7358, 5);
			}
			else
			{
				START_SCRIPT_PHONE_CONVERSATION(Global_20424.f_368, Global_20424.f_369);
			}
		}
		func_62();
	}
}

void func_62()
{
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_90 = 0xBA7F0B77D80A4EB7();
	}
	else
	{
		iLocal_87 = GET_GAME_TIMER();
	}
}

void func_63()
{
	if (Global_20818)
	{
		if (Global_76577)
		{
			if (HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
			{
				if (!IS_PC_VERSION())
				{
					func_116(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					SET_BIT(&(Global_2531497.f_1732), 15);
				}
			}
		}
	}
}

void func_64()
{
	if (HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
	{
		if (!Global_20813)
		{
			func_116(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_116(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			CLEAR_BIT(&Global_7356, 17);
			if (IS_BIT_SET(Global_7356, 20))
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_116(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20818)
			{
				BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(4);
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(2);
				BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
				ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_20820);
				END_TEXT_COMMAND_SCALEFORM_STRING();
				func_9("CELL_300");
				func_9("CELL_219");
				func_9("CELL_219");
				END_SCALEFORM_MOVIE_METHOD();
			}
			else if (func_47(Global_6671, Global_19486) == 0)
			{
				func_116(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_116(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), "CELL_219", &(Global_1798[Global_6671 /*29*/].f_3), 0);
			}
		}
		func_48(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_65()
{
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_92 = IS_TIME_EQUAL_TO(IS_TIME_EQUAL_TO(), iLocal_78);
		iLocal_93 = IS_TIME_EQUAL_TO(IS_TIME_EQUAL_TO(), iLocal_81);
	}
	else
	{
		iLocal_77 = GET_GAME_TIMER();
		iLocal_92 = (iLocal_77 - iLocal_76);
		iLocal_80 = GET_GAME_TIMER();
		iLocal_93 = (iLocal_80 - iLocal_79);
	}
	if (Global_20852 == 1)
	{
		if (func_45())
		{
			if (iLocal_92 > 4000)
			{
				if (IS_BIT_SET(Global_7356, 14))
				{
					if (HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
					{
						func_42();
						Global_19485 = 2;
						func_64();
						func_63();
					}
				}
			}
		}
		else if (iLocal_92 > 2000)
		{
			if (IS_BIT_SET(Global_7356, 14))
			{
				if (HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
				{
					func_42();
					Global_19485 = 2;
					func_64();
					func_63();
				}
			}
		}
	}
	if (iLocal_93 > 10000)
	{
		Global_19485 = 3;
	}
	if (Global_19485 == 2)
	{
		iLocal_30 = 0;
		Global_20805 = 4;
		func_58();
		Global_20862 = 0;
		func_64();
		func_63();
		if (!Global_20818)
		{
			if (Global_21822 == 0)
			{
				START_PRELOADED_CONVERSATION();
			}
			else
			{
				START_SCRIPT_PHONE_CONVERSATION(Global_20424.f_368, Global_20424.f_369);
			}
		}
		func_62();
		Global_21821 = 0;
	}
	if (Global_20852 == 0)
	{
		if (Global_19485 == 3)
		{
			if (Global_20818)
			{
				func_67();
				func_52(0);
			}
			else
			{
				func_66();
				Global_21821 = 1;
				STOP_SCRIPTED_CONVERSATION(false);
				Global_20805 = 6;
				func_13();
				Global_19486.f_1 = Global_19488;
				func_8();
			}
		}
	}
	else if (Global_19485 == 3)
	{
	}
}

void func_66()
{
}

void func_67()
{
	Global_2537824.f_2 = 1;
	Global_2537824.f_38 = 1;
	if (NETWORK_IS_SIGNED_ONLINE())
	{
		if (_0x855BC38818F6F684())
		{
			while (_0xEF0912DDF7C4CB4B())
			{
				wait(0);
			}
			NETWORK_SESSION_VOICE_LEAVE();
			Global_2537824 = 0;
			Global_2537824.f_2 = 0;
		}
		else if (func_70(Global_2537824.f_20))
		{
			if (NETWORK_IS_FRIEND(&(Global_2537824.f_20)))
			{
				if (!_NETWORK_IS_FRIEND_HANDLE_ONLINE(&(Global_2537824.f_20)))
				{
					func_68();
				}
			}
		}
		else
		{
			func_68();
		}
	}
	else
	{
		func_68();
	}
	if (Global_2537824.f_37)
	{
		func_52(0);
	}
	Global_2537824.f_37 = 0;
	Global_2537824.f_3 = 0;
}

void func_68()
{
	Global_2537824.f_1 = 0;
	Global_2537824 = 0;
	Global_2537824.f_2 = 0;
	Global_2537824.f_33 = -1;
	Global_2537824.f_34 = -1;
	StringCopy(&(Global_2537824.f_4), "", 64);
	StringCopy(&(Global_2537824.f_39[0 /*16*/]), "", 64);
	Global_2537824.f_38 = 0;
	Global_2537824.f_56 = 0;
	Global_2537824.f_57 = 0;
	Global_2537824.f_58 = -2;
	Global_2537824.f_3 = 0;
	func_69(&(Global_2537824.f_20));
}

void func_69(var uParam0)
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

bool func_70(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_71()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	
	iLocal_75 = 0;
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	while (iLocal_75 < Global_20801)
	{
		func_88();
		func_87();
		func_86();
		iVar13 = 0;
		while (iVar2 < 70 && iLocal_29 == 0)
		{
			cLocal_42 = { Global_20424.f_6[iLocal_75 /*6*/] };
			StringConCat(&cLocal_42, "A", 24);
			Global_19673[iVar2 /*6*/] = { Global_20424.f_6[iLocal_75 /*6*/] };
			StringConCat(&(Global_19673[iVar2 /*6*/]), "_", 24);
			StringIntConCat(&(Global_19673[iVar2 /*6*/]), iVar1, 24);
			cLocal_38 = { Global_19673[iVar2 /*6*/] };
			StringConCat(&cLocal_38, "A", 24);
			if (DOES_TEXT_LABEL_EXIST(&cLocal_38))
			{
				StringCopy(&cLocal_46, _GET_LABEL_TEXT(&cLocal_38), 64);
				iVar3 = func_85(iVar13);
				iVar4 = func_84(iVar13);
				uVar5 = func_82(iVar13);
				uLocal_67 = func_81();
				uLocal_68 = func_80();
				uLocal_69 = func_79();
				uVar6 = func_78(iVar13);
				uVar7 = func_77(iVar13);
				uVar8 = func_76(iVar13);
				uVar12 = func_75(iVar13);
				uVar9 = func_74(iVar13);
				uVar10 = func_73(iVar13);
				uVar11 = func_72(iVar13);
				if (DOES_TEXT_LABEL_EXIST(&(Global_19673[iVar2 /*6*/])))
				{
					if (ARE_STRINGS_EQUAL(&(Global_19673[iVar2 /*6*/]), &(Global_20424.f_187[iLocal_75 /*6*/])))
					{
						if (iVar3 > 36 || iVar4 > 36)
						{
						}
						ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_46, &(Global_19673[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					}
				}
				iVar1 = (iVar1 + iVar0);
			}
			else if (DOES_TEXT_LABEL_EXIST(&cLocal_42))
			{
				StringCopy(&cLocal_46, _GET_LABEL_TEXT(&cLocal_42), 64);
				iVar3 = func_85(0);
				iVar4 = func_84(0);
				uVar5 = func_82(0);
				uLocal_67 = func_81();
				uLocal_68 = func_80();
				uLocal_69 = func_79();
				uVar6 = func_78(0);
				uVar7 = func_77(0);
				uVar8 = func_76(0);
				uVar12 = func_75(0);
				uVar9 = func_74(0);
				uVar10 = func_73(0);
				uVar11 = func_72(0);
				ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_46, &(Global_20424.f_6[iLocal_75 /*6*/]), iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				StringCopy(&(Global_19673[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			else
			{
				StringCopy(&(Global_19673[iVar2 /*6*/]), "END", 24);
				iLocal_29 = 1;
			}
			iVar2++;
			iVar13++;
			if (iVar2 == 70)
			{
			}
		}
		iLocal_75++;
		iLocal_29 = 0;
		iVar1 = 1;
		iVar13 = 0;
		iVar2 = 0;
	}
	if (Global_20811 == 0)
	{
		_0x0B568201DD99F0EB(uLocal_68);
		_0x61631F5DF50D1C34(uLocal_69);
		START_SCRIPT_CONVERSATION(Global_20424.f_368, Global_20424.f_369, Global_20424.f_370, uLocal_67);
		Global_20805 = 4;
	}
}

int func_72(int iParam0)
{
	char* sVar0;
	
	sVar0 = _GET_TEXT_SUBSTRING(_GET_TEXT_SUBSTRING(&cLocal_70), iParam0 * 7 + 6, iParam0 * 7 + 7);
	if (ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_73(int iParam0)
{
	char* sVar0;
	
	sVar0 = _GET_TEXT_SUBSTRING(_GET_TEXT_SUBSTRING(&cLocal_70), iParam0 * 7 + 5, iParam0 * 7 + 6);
	if (ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_74(int iParam0)
{
	char* sVar0;
	
	sVar0 = _GET_TEXT_SUBSTRING(_GET_TEXT_SUBSTRING(&cLocal_70), iParam0 * 7 + 4, iParam0 * 7 + 5);
	if (ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_75(int iParam0)
{
	char* sVar0;
	
	sVar0 = _GET_TEXT_SUBSTRING(_GET_TEXT_SUBSTRING(&cLocal_70), iParam0 * 7 + 3, iParam0 * 7 + 4);
	if (ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 1;
	}
	if (ARE_STRINGS_EQUAL(sVar0, "1"))
	{
		return 1;
	}
	if (ARE_STRINGS_EQUAL(sVar0, "2"))
	{
		return 2;
	}
	if (ARE_STRINGS_EQUAL(sVar0, "3"))
	{
		return 3;
	}
	if (ARE_STRINGS_EQUAL(sVar0, "4"))
	{
		return 0;
	}
	return 0;
}

int func_76(int iParam0)
{
	char* sVar0;
	
	sVar0 = _GET_TEXT_SUBSTRING(_GET_TEXT_SUBSTRING(&cLocal_70), iParam0 * 7 + 2, iParam0 * 7 + 3);
	if (ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_77(int iParam0)
{
	char* sVar0;
	
	sVar0 = _GET_TEXT_SUBSTRING(_GET_TEXT_SUBSTRING(&cLocal_70), iParam0 * 7 + 1, iParam0 * 7 + 2);
	if (ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_78(int iParam0)
{
	char* sVar0;
	
	sVar0 = _GET_TEXT_SUBSTRING(_GET_TEXT_SUBSTRING(&cLocal_70), iParam0 * 7, iParam0 * 7 + 1);
	if (ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_79()
{
	char* sVar0;
	
	sVar0 = _GET_TEXT_SUBSTRING(_GET_TEXT_SUBSTRING(&cLocal_60), 2, 3);
	if (ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_80()
{
	char* sVar0;
	
	sVar0 = _GET_TEXT_SUBSTRING(_GET_TEXT_SUBSTRING(&cLocal_60), 1, 2);
	if (ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_81()
{
	char* sVar0;
	
	sVar0 = _GET_TEXT_SUBSTRING(_GET_TEXT_SUBSTRING(&cLocal_60), 0, 1);
	if (ARE_STRINGS_EQUAL(sVar0, "0"))
	{
		return 0;
	}
	return 1;
}

int func_82(int iParam0)
{
	char* sVar0;
	
	sVar0 = _GET_TEXT_SUBSTRING(_GET_TEXT_SUBSTRING(&cLocal_55), iParam0 * 3 + 2, iParam0 * 3 + 3);
	return func_83(sVar0);
}

int func_83(char* sParam0)
{
	if (ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 0;
	}
	if (ARE_STRINGS_EQUAL(sParam0, "1"))
	{
		return 1;
	}
	if (ARE_STRINGS_EQUAL(sParam0, "2"))
	{
		return 2;
	}
	if (ARE_STRINGS_EQUAL(sParam0, "3"))
	{
		return 3;
	}
	if (ARE_STRINGS_EQUAL(sParam0, "4"))
	{
		return 4;
	}
	if (ARE_STRINGS_EQUAL(sParam0, "5"))
	{
		return 5;
	}
	if (ARE_STRINGS_EQUAL(sParam0, "6"))
	{
		return 6;
	}
	if (ARE_STRINGS_EQUAL(sParam0, "7"))
	{
		return 7;
	}
	if (ARE_STRINGS_EQUAL(sParam0, "8"))
	{
		return 8;
	}
	if (ARE_STRINGS_EQUAL(sParam0, "9"))
	{
		return 9;
	}
	if (ARE_STRINGS_EQUAL(sParam0, "A"))
	{
		return 10;
	}
	if (ARE_STRINGS_EQUAL(sParam0, "B"))
	{
		return 11;
	}
	if (ARE_STRINGS_EQUAL(sParam0, "C"))
	{
		return 12;
	}
	if (ARE_STRINGS_EQUAL(sParam0, "D"))
	{
		return 13;
	}
	if (ARE_STRINGS_EQUAL(sParam0, "E"))
	{
		return 14;
	}
	if (ARE_STRINGS_EQUAL(sParam0, "F"))
	{
		return 15;
	}
	if (ARE_STRINGS_EQUAL(sParam0, "G"))
	{
		return 16;
	}
	if (ARE_STRINGS_EQUAL(sParam0, "H"))
	{
		return 17;
	}
	if (ARE_STRINGS_EQUAL(sParam0, "I"))
	{
		return 18;
	}
	if (ARE_STRINGS_EQUAL(sParam0, "J"))
	{
		return 19;
	}
	if (ARE_STRINGS_EQUAL(sParam0, "K"))
	{
		return 20;
	}
	if (ARE_STRINGS_EQUAL(sParam0, "L"))
	{
		return 21;
	}
	if (ARE_STRINGS_EQUAL(sParam0, "M"))
	{
		return 22;
	}
	if (ARE_STRINGS_EQUAL(sParam0, "N"))
	{
		return 23;
	}
	if (ARE_STRINGS_EQUAL(sParam0, "O"))
	{
		return 24;
	}
	if (ARE_STRINGS_EQUAL(sParam0, "P"))
	{
		return 25;
	}
	if (ARE_STRINGS_EQUAL(sParam0, "Q"))
	{
		return 26;
	}
	if (ARE_STRINGS_EQUAL(sParam0, "R"))
	{
		return 27;
	}
	if (ARE_STRINGS_EQUAL(sParam0, "S"))
	{
		return 28;
	}
	if (ARE_STRINGS_EQUAL(sParam0, "T"))
	{
		return 29;
	}
	if (ARE_STRINGS_EQUAL(sParam0, "U"))
	{
		return 30;
	}
	if (ARE_STRINGS_EQUAL(sParam0, "V"))
	{
		return 31;
	}
	if (ARE_STRINGS_EQUAL(sParam0, "W"))
	{
		return 32;
	}
	if (ARE_STRINGS_EQUAL(sParam0, "X"))
	{
		return 33;
	}
	if (ARE_STRINGS_EQUAL(sParam0, "Y"))
	{
		return 34;
	}
	if (ARE_STRINGS_EQUAL(sParam0, "Z"))
	{
		return 35;
	}
	if (ARE_STRINGS_EQUAL(sParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_84(int iParam0)
{
	char* sVar0;
	
	sVar0 = _GET_TEXT_SUBSTRING(_GET_TEXT_SUBSTRING(&cLocal_55), iParam0 * 3 + 1, iParam0 * 3 + 2);
	return func_83(sVar0);
}

int func_85(int iParam0)
{
	char* sVar0;
	
	sVar0 = _GET_TEXT_SUBSTRING(_GET_TEXT_SUBSTRING(&cLocal_55), iParam0 * 3, iParam0 * 3 + 1);
	return func_83(sVar0);
}

void func_86()
{
	cLocal_70 = { Global_20424.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_70, "LF", 24);
	if (DOES_TEXT_LABEL_EXIST(&cLocal_70))
	{
		sLocal_74 = _GET_LABEL_TEXT(&cLocal_70);
		if (IS_STRING_NULL(sLocal_74))
		{
		}
	}
}

void func_87()
{
	cLocal_60 = { Global_20424.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_60, "IF", 24);
	if (DOES_TEXT_LABEL_EXIST(&cLocal_60))
	{
		sLocal_64 = _GET_TEXT_SUBSTRING(_GET_TEXT_SUBSTRING(&cLocal_60), 0, 1);
		if (IS_STRING_NULL(sLocal_64))
		{
		}
		sLocal_65 = _GET_TEXT_SUBSTRING(_GET_TEXT_SUBSTRING(&cLocal_60), 1, 2);
		if (IS_STRING_NULL(sLocal_65))
		{
		}
		sLocal_66 = _GET_TEXT_SUBSTRING(_GET_TEXT_SUBSTRING(&cLocal_60), 2, 3);
		if (IS_STRING_NULL(sLocal_66))
		{
		}
	}
}

void func_88()
{
	cLocal_55 = { Global_20424.f_6[iLocal_75 /*6*/] };
	StringConCat(&cLocal_55, "SL", 24);
	if (DOES_TEXT_LABEL_EXIST(&cLocal_55))
	{
		sLocal_59 = _GET_LABEL_TEXT(&cLocal_55);
		if (IS_STRING_NULL(sLocal_59))
		{
		}
	}
}

void func_89()
{
	func_90();
	_0x0B568201DD99F0EB(uLocal_68);
	_0x61631F5DF50D1C34(uLocal_69);
	if (Global_21797)
	{
		PRELOAD_SCRIPT_CONVERSATION(Global_20424.f_368, Global_20424.f_369, Global_20424.f_370, uLocal_67);
		iLocal_36 = GET_GAME_TIMER();
	}
	else
	{
		START_SCRIPT_CONVERSATION(Global_20424.f_368, Global_20424.f_369, Global_20424.f_370, uLocal_67);
	}
	Global_20805 = 4;
}

void func_90()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	iLocal_33 = 0;
	if (DOES_TEXT_BLOCK_EXIST(&Global_20881))
	{
		if (ARE_STRINGS_EQUAL(&Global_20881, "CT_AUD"))
		{
			Global_2621442 = 1;
		}
		iVar13 = 0;
		if (IS_ORBIS_VERSION() || IS_ORBIS_VERSION())
		{
			if (Global_1573347 == 1)
			{
				iVar13 = 1;
			}
			else
			{
				iVar13 = 2;
			}
		}
		iVar14 = 0;
		if (Global_76577 || func_98())
		{
			if (Global_1573347 == 0)
			{
				iVar14 = 1;
			}
		}
		else if (!func_96())
		{
			iVar14 = 1;
		}
		if (func_95(GET_HASH_KEY(&Global_20881)))
		{
			iVar14 = 0;
			Global_2621442 = 0;
			iVar13 = 1;
		}
		if (((Global_20807 < 5 || Global_20807 == 10) || Global_20807 == 12) || Global_20807 == 13)
		{
			if ((iVar14 == 1 || Global_2621442 == 1) || iVar13 == 2)
			{
				REQUEST_ADDITIONAL_TEXT(&Global_20881, 7);
				while (!HAS_ADDITIONAL_TEXT_LOADED(7))
				{
					wait(0);
				}
			}
			else
			{
				_REQUEST_ADDITIONAL_TEXT_2(&Global_20881, 15);
				while (!HAS_ADDITIONAL_TEXT_LOADED(15))
				{
					wait(0);
				}
			}
		}
		else if ((iVar14 == 1 || Global_2621442 == 1) || iVar13 == 2)
		{
			REQUEST_ADDITIONAL_TEXT(&Global_20881, 6);
			while (!HAS_ADDITIONAL_TEXT_LOADED(6))
			{
				wait(0);
			}
		}
		else
		{
			_REQUEST_ADDITIONAL_TEXT_2(&Global_20881, 14);
			while (!HAS_ADDITIONAL_TEXT_LOADED(14))
			{
				wait(0);
			}
		}
	}
	else
	{
		iLocal_33 = 1;
		return;
	}
	CREATE_NEW_SCRIPTED_CONVERSATION();
	func_94();
	func_93();
	func_92();
	func_91();
	Global_21815 = 0;
	while (iVar2 < 70 && iLocal_29 == 0)
	{
		cLocal_42 = { Global_20424 };
		StringConCat(&cLocal_42, "A", 24);
		Global_19673[iVar2 /*6*/] = { Global_20424 };
		StringConCat(&(Global_19673[iVar2 /*6*/]), "_", 24);
		StringIntConCat(&(Global_19673[iVar2 /*6*/]), iVar1, 24);
		cLocal_38 = { Global_19673[iVar2 /*6*/] };
		StringConCat(&cLocal_38, "A", 24);
		if (DOES_TEXT_LABEL_EXIST(&cLocal_38))
		{
			StringCopy(&cLocal_46, _GET_LABEL_TEXT(&cLocal_38), 64);
			iVar3 = func_85(iVar2);
			if (iVar3 == 9)
			{
				if (Global_4269803 == 0)
				{
				}
			}
			iVar4 = func_84(iVar2);
			uVar5 = func_82(iVar2);
			uLocal_67 = func_81();
			uLocal_68 = func_80();
			uLocal_69 = func_79();
			uVar6 = func_78(iVar2);
			uVar7 = func_77(iVar2);
			uVar8 = func_76(iVar2);
			uVar12 = func_75(iVar2);
			uVar9 = func_74(iVar2);
			uVar10 = func_73(iVar2);
			uVar11 = func_72(iVar2);
			if (DOES_TEXT_LABEL_EXIST(&(Global_19673[iVar2 /*6*/])))
			{
				if (Global_21795 == 0 && Global_21801 == 0)
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_46, &(Global_19673[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
				}
				else if (ARE_STRINGS_EQUAL(&(Global_19673[iVar2 /*6*/]), &Global_21803))
				{
					if (iVar3 > 36 || iVar4 > 36)
					{
					}
					ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_46, &(Global_19673[iVar2 /*6*/]), iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
					Global_21815 = iVar2;
					if (Global_21801 == 1)
					{
						Global_21801 = 0;
					}
				}
			}
			else if (Global_21801 == 0 && Global_21795 == 0)
			{
				ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_46, &cLocal_46, iVar4, uVar5, 0, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iVar1 = (iVar1 + iVar0);
		}
		else
		{
			if (DOES_TEXT_LABEL_EXIST(&cLocal_42))
			{
				StringCopy(&cLocal_46, _GET_LABEL_TEXT(&cLocal_42), 64);
				iVar3 = func_85(iVar2);
				iVar4 = func_84(iVar2);
				uVar5 = func_82(iVar2);
				uLocal_67 = func_81();
				uLocal_68 = func_80();
				uLocal_69 = func_79();
				uVar6 = func_78(iVar2);
				uVar7 = func_77(iVar2);
				uVar8 = func_76(iVar2);
				uVar12 = func_75(iVar2);
				uVar9 = func_74(iVar2);
				uVar10 = func_73(iVar2);
				uVar11 = func_72(iVar2);
				ADD_LINE_TO_CONVERSATION(iVar3, &cLocal_46, &Global_20424, iVar4, uVar5, 1, uVar6, uVar7, uVar8, uVar12, uVar9, uVar10, uVar11);
			}
			iLocal_29 = 1;
		}
		iVar2++;
		if (iVar2 == 70)
		{
		}
	}
}

void func_91()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		if (Global_20094[iVar0 /*10*/].f_7 == 1)
		{
			if (DOES_ENTITY_EXIST(Global_20094[iVar0 /*10*/]) || Global_20094[iVar0 /*10*/] == 0)
			{
				ADD_PED_TO_CONVERSATION(iVar0, Global_20094[iVar0 /*10*/], &(Global_20094[iVar0 /*10*/].f_1));
			}
			if (Global_20094.f_161 == iVar0)
			{
				if ((Global_20094.f_162 != 0f && Global_20094.f_162.f_1 != 0f) && Global_20094.f_162.f_2 != 0f)
				{
					wait(0);
					_0x33E3C6C6F2F0B506(Global_20094.f_161, Global_20094.f_162);
				}
			}
		}
		iVar0++;
	}
	if (Global_4269803 == 1)
	{
		Global_4269803 = 0;
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 19)
		{
			if (Global_4269622[iVar0 /*9*/].f_7 == 1)
			{
				if (DOES_ENTITY_EXIST(Global_4269622[iVar0 /*9*/]) || Global_4269622[iVar0 /*9*/] == 0)
				{
					ADD_PED_TO_CONVERSATION(Global_4269622[iVar0 /*9*/].f_8, Global_4269622[iVar0 /*9*/], &(Global_4269622[iVar0 /*9*/].f_1));
				}
			}
			iVar0++;
		}
	}
}

void func_92()
{
	cLocal_70 = { Global_20424 };
	StringConCat(&cLocal_70, "LF", 24);
	if (DOES_TEXT_LABEL_EXIST(&cLocal_70))
	{
		sLocal_74 = _GET_LABEL_TEXT(&cLocal_70);
		if (IS_STRING_NULL(sLocal_74))
		{
		}
	}
}

void func_93()
{
	cLocal_60 = { Global_20424 };
	StringConCat(&cLocal_60, "IF", 24);
	if (DOES_TEXT_LABEL_EXIST(&cLocal_60))
	{
		sLocal_64 = _GET_TEXT_SUBSTRING(_GET_TEXT_SUBSTRING(&cLocal_60), 0, 1);
		if (IS_STRING_NULL(sLocal_64))
		{
		}
		sLocal_65 = _GET_TEXT_SUBSTRING(_GET_TEXT_SUBSTRING(&cLocal_60), 1, 2);
		if (IS_STRING_NULL(sLocal_65))
		{
		}
		sLocal_66 = _GET_TEXT_SUBSTRING(_GET_TEXT_SUBSTRING(&cLocal_60), 2, 3);
		if (IS_STRING_NULL(sLocal_66))
		{
		}
	}
}

void func_94()
{
	cLocal_55 = { Global_20424 };
	StringConCat(&cLocal_55, "SL", 24);
	if (DOES_TEXT_LABEL_EXIST(&cLocal_55))
	{
		sLocal_59 = _GET_LABEL_TEXT(&cLocal_55);
		if (IS_STRING_NULL(sLocal_59))
		{
		}
	}
}

int func_95(int iParam0)
{
	switch (iParam0)
	{
		case -1311531715:
		case -389729032:
		case -2064440312:
		case 1151576899:
		case -360992886:
		case 677852396:
		case 1017913414:
		case 1994430427:
		case 1430620518:
		case 1883599394:
		case 1146168957:
		case 785850502:
		case 1566303118:
		case 1220013368:
		case 71115730:
		case -251854137:
		case -243052328:
		case -1417718107:
		case -351584050:
		case 1854373416:
		case -1753835094:
		case -353948811:
		case -1883622926:
		case -46742865:
		case 1260190997:
		case 1080008561:
		case 1151572586:
		case 964109535:
		case -436910453:
		case 659972380:
		case 2120484290:
		case 1439733926:
		case 26437732:
		case 303339033:
		case 2088730730:
		case -1771498136:
		case -1993049002:
		case -1370815517:
		case -1267951531:
		case 60077066:
		case 1821448936:
		case 2043251532:
		case 1314391445:
		case -1267946537:
		case 1507036282:
		case 214936528:
		case 1071832486:
		case 379745124:
		case 409276020:
		case -495085533:
		case -383711312:
		case -1809286053:
		case -229061423:
		case 1399593776:
		case -1592188591:
		case 2119072113:
		case -2005721953:
		case -439426052:
		case 101634771:
		case -7767504:
		case -1576797630:
		case -556967217:
		case 510894735:
		case -96774198:
		case 1931750438:
		case 962651001:
		case -805815803:
		case -1396474296:
		case 188331744:
		case -667145730:
		case 1027410289:
		case -190066836:
		case 5422313:
		case -591754196:
		case 1414208944:
		case -657203993:
		case 365230037:
		case -1508790734:
		case 1751613877:
		case 502358067:
		case -701873518:
		case -387856564:
		case -342942601:
		case -450026770:
		case -2121613853:
		case 1192484316:
		case -839727634:
		case 700260812:
			return 1;
		
		default:
	}
	return 0;
}

int func_96()
{
	if (Global_2621550)
	{
		if (func_12(0))
		{
			if (Global_3145728 || func_97(0))
			{
				return 1;
			}
		}
	}
	if (Global_2621549)
	{
		if (func_12(0))
		{
			if (Global_3670016 || func_97(0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_97(bool bParam0)
{
	if (!bParam0 && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return IS_BIT_SET(Global_76825, 0);
}

var func_98()
{
	return Global_1312850;
}

void func_99()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (IS_ORBIS_VERSION() || IS_ORBIS_VERSION())
	{
		if (Global_1573347 == 1)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	iVar1 = 0;
	if (Global_76577)
	{
		if (Global_1573347 == 0)
		{
			iVar1 = 1;
		}
	}
	else if (!func_96())
	{
		iVar1 = 1;
	}
	if (DOES_TEXT_BLOCK_EXIST(&Global_20881))
	{
		if (ARE_STRINGS_EQUAL(&Global_20881, "CT_AUD"))
		{
			Global_2621442 = 1;
		}
	}
	if (func_95(GET_HASH_KEY(&Global_20881)))
	{
		iVar1 = 0;
		Global_2621442 = 0;
		iVar0 = 1;
	}
	if (((Global_20807 < 5 || Global_20807 == 10) || Global_20807 == 12) || Global_20807 == 13)
	{
		if ((iVar1 == 1 || Global_2621442 == 1) || iVar0 == 2)
		{
			REQUEST_ADDITIONAL_TEXT(&Global_20881, 7);
			while (!HAS_ADDITIONAL_TEXT_LOADED(7))
			{
				wait(0);
			}
		}
		else
		{
			_REQUEST_ADDITIONAL_TEXT_2(&Global_20881, 15);
			while (!HAS_ADDITIONAL_TEXT_LOADED(15))
			{
				wait(0);
			}
		}
	}
	else if ((iVar1 == 1 || Global_2621442 == 1) || iVar0 == 2)
	{
		REQUEST_ADDITIONAL_TEXT(&Global_20881, 6);
		while (!HAS_ADDITIONAL_TEXT_LOADED(6))
		{
			wait(0);
		}
	}
	else
	{
		_REQUEST_ADDITIONAL_TEXT_2(&Global_20881, 14);
		while (!HAS_ADDITIONAL_TEXT_LOADED(14))
		{
			wait(0);
		}
	}
	CREATE_NEW_SCRIPTED_CONVERSATION();
	func_91();
}

void func_100()
{
	while (Global_19469 == 1 && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		wait(0);
	}
	Global_19469 = 0;
	if (IS_BIT_SET(Global_7356, 20))
	{
		SET_BIT(&Global_7357, 1);
	}
	else
	{
		CLEAR_BIT(&Global_7357, 1);
	}
	Global_19470 = 0;
	if (Global_20801 == 0)
	{
		if (!Global_20818)
		{
			func_90();
		}
	}
	else
	{
		func_71();
	}
	Global_19672 = 0;
	if (Global_20815)
	{
		if (Global_21822 == 0)
		{
			if (Global_20818 == 0)
			{
				iLocal_34 = 5000;
				PRELOAD_SCRIPT_PHONE_CONVERSATION(Global_20424.f_368, Global_20424.f_369);
			}
			else
			{
				iLocal_34 = 0;
			}
		}
		else
		{
			iLocal_34 = 0;
		}
		Global_19672 = 1;
		settimerb(0);
		while ((Global_19672 == 1 && Global_20805 == 1) && timerb() < iLocal_34)
		{
			wait(0);
			if (!IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
			{
				Global_19672 = 0;
				STOP_SCRIPTED_CONVERSATION(false);
				Global_20805 = 6;
			}
			if (IS_MOBILE_PHONE_CALL_ONGOING())
			{
				if (_0xE73364DB90778FFA())
				{
					Global_19672 = 0;
				}
			}
		}
		if (timerb() > iLocal_34)
		{
		}
		if (Global_20805 != 1)
		{
		}
		if (Global_19672 == 0)
		{
		}
	}
	Global_19672 = 0;
	if (((Global_19486.f_1 == 1 || Global_19486.f_1 == 0) || Global_20805 != 1) || Global_19452 == 1)
	{
		STOP_SCRIPTED_CONVERSATION(false);
		Global_20805 = 6;
	}
	else
	{
		if (Global_20813)
		{
			Global_21823 = 0;
			iLocal_32 = 0;
		}
		if (Global_20815 == 0)
		{
			if (Global_20856 == 0)
			{
				Global_19488 = Global_19486.f_1;
				Global_20856 = 1;
			}
			iLocal_30 = 0;
			if (Global_21822 == 0)
			{
				PRELOAD_SCRIPT_PHONE_CONVERSATION(Global_20424.f_368, Global_20424.f_369);
				wait(0);
				Global_20805 = 3;
				Global_19672 = 1;
				settimerb(0);
				SET_BIT(&Global_7356, 27);
				settimera(0);
			}
			else
			{
				Global_19672 = 0;
				Global_20805 = 4;
			}
			Global_19485 = 0;
			if (Global_20816 == 1)
			{
				if (Global_19486.f_1 == 10)
				{
				}
				if (!Global_19486.f_1 == 9)
				{
					if (Global_19486.f_1 > 4)
					{
						if (Global_19469 == 0)
						{
							Global_19486.f_1 = 9;
							func_8();
						}
					}
					else
					{
						Global_19486.f_1 = 4;
					}
				}
				else
				{
					func_8();
				}
			}
			else
			{
				while (Global_19486.f_1 == 4)
				{
					wait(0);
					if (Global_19672 == 1)
					{
						if (IS_MOBILE_PHONE_CALL_ONGOING())
						{
							if (_0xE73364DB90778FFA())
							{
								Global_19672 = 0;
							}
						}
					}
				}
				if (Global_19486.f_1 == 6)
				{
				}
				if (Global_19486.f_1 == 10)
				{
				}
				if (Global_19486.f_1 == 3)
				{
					STOP_SCRIPTED_CONVERSATION(false);
					Global_20805 = 6;
					Global_19470 = 1;
					return;
				}
				Global_19486.f_1 = 9;
				func_8();
			}
			if (NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_84 = 0xBA7F0B77D80A4EB7();
			}
			else
			{
				iLocal_82 = GET_GAME_TIMER();
			}
			while (Global_19486.f_1 != 9 && Global_19469 == 0)
			{
				wait(0);
				if (Global_19672 == 1)
				{
					if (IS_MOBILE_PHONE_CALL_ONGOING())
					{
						if (_0xE73364DB90778FFA())
						{
							Global_19672 = 0;
						}
					}
				}
				if (NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_91 = IS_TIME_EQUAL_TO(IS_TIME_EQUAL_TO(), iLocal_84);
				}
				else
				{
					iLocal_83 = GET_GAME_TIMER();
					iLocal_91 = (iLocal_83 - iLocal_82);
				}
				if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_91 > 15000)
					{
						Global_21821 = 1;
						Global_19469 = 1;
					}
				}
			}
			if (!IS_BIT_SET(Global_7356, 11))
			{
				if (func_45() == 0)
				{
					func_58();
				}
			}
			if (Global_19469 == 0)
			{
				if (!Global_21822 == 0)
				{
					Global_20862 = 0;
					func_64();
					func_63();
					if (!Global_20818)
					{
						if (Global_21822 == 0)
						{
							START_PRELOADED_CONVERSATION();
						}
						else
						{
							START_SCRIPT_PHONE_CONVERSATION(Global_20424.f_368, Global_20424.f_369);
						}
					}
					func_62();
				}
			}
			else
			{
				func_101();
				Global_19470 = 1;
			}
		}
		else
		{
			Global_19485 = 1;
			if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
			{
				if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
				{
					if (Global_19486.f_1 == 3)
					{
					}
				}
				else
				{
					CLEAR_BIT(&Global_7357, 21);
				}
			}
			if (Global_20856 == 0)
			{
				Global_19488 = Global_19486.f_1;
				Global_20856 = 1;
			}
			if (Global_19486.f_1 == 3)
			{
				Global_19486.f_1 = 4;
			}
			else
			{
				while (Global_19486.f_1 == 4)
				{
					wait(0);
				}
				if (Global_19486.f_1 == 6)
				{
				}
				Global_19486.f_1 = 9;
				func_8();
			}
			if (NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_84 = 0xBA7F0B77D80A4EB7();
			}
			else
			{
				iLocal_82 = GET_GAME_TIMER();
			}
			while (Global_19486.f_1 != 9 && Global_19469 == 0)
			{
				wait(0);
				if (NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_91 = IS_TIME_EQUAL_TO(IS_TIME_EQUAL_TO(), iLocal_84);
				}
				else
				{
					iLocal_83 = GET_GAME_TIMER();
					iLocal_91 = (iLocal_83 - iLocal_82);
				}
				if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					if (iLocal_91 > 20000)
					{
						Global_21821 = 1;
						Global_19469 = 1;
						CLEAR_BIT(&Global_7357, 21);
					}
				}
			}
			if (Global_19469 == 0)
			{
				Global_20805 = 2;
			}
			else
			{
				func_101();
				Global_19470 = 1;
			}
			if (NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_78 = 0xBA7F0B77D80A4EB7();
				iLocal_81 = 0xBA7F0B77D80A4EB7();
			}
			else
			{
				iLocal_76 = GET_GAME_TIMER();
				iLocal_79 = GET_GAME_TIMER();
			}
		}
	}
}

void func_101()
{
	Global_19671 = 0;
	func_106();
}

void func_102()
{
	float fVar0;
	
	fVar0 = func_103(Global_19439[Global_19431 /*3*/], Global_19432[Global_19431 /*3*/], Global_19446, Global_19417, 350f, 0);
	if (fVar0 >= 1f)
	{
		if (Global_21819 == 0)
		{
			DISPLAY_RADAR(true);
		}
		iLocal_32 = 0;
	}
}

float func_103(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4, bool bParam5)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_4269894 == 0)
	{
		if (IS_BIT_SET(Global_7356, 14) && Global_19486.f_1 < 4)
		{
			GET_MOBILE_PHONE_POSITION(&Var0);
			if (Global_19439[Global_19431 /*3*/].f_1 == Var0.f_1)
			{
				Global_4269894 = 1;
			}
		}
	}
	if (func_45() && Global_4269894 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = GET_GAME_TIMER();
	}
	fVar1 = func_105((to_float((GET_GAME_TIMER() - iLocal_18)) / fParam4), 0f, 1f);
	if (fVar1 < 1f)
	{
		fVar2 = fVar1;
		if (bParam5)
		{
			fVar2 = (fVar2 - 1f);
			fVar3 = 0.670158f;
			fVar2 = (((fVar2 * fVar2) * (((fVar3 + 1f) * fVar2) + fVar3)) + 1f);
		}
		else
		{
			fVar2 = sin((fVar1 * 90f));
		}
		Global_19414 = { func_104(vParam0, vParam1, fVar2) };
		Global_19417 = { func_104(vParam2, vParam3, fVar2) };
	}
	else
	{
		Global_19414 = { vParam1 };
		Global_19417 = { vParam3 };
	}
	SET_MOBILE_PHONE_POSITION(Global_19414);
	SET_MOBILE_PHONE_ROTATION(Global_19417, 0);
	return fVar1;
}

Vector3 func_104(vector3 vParam0, vector3 vParam1, float fParam2)
{
	return vParam0 + vParam1 - vParam0 * Vector(fParam2, fParam2, fParam2);
}

float func_105(float fParam0, float fParam1, float fParam2)
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

void func_106()
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

bool func_107()
{
	return IS_BIT_SET(Global_4456448.f_184550, 12);
}

bool func_108(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_39(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_109(sParam2, iParam3, 0);
}

int func_109(char* sParam0, int iParam1, bool bParam2)
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
					func_106();
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
		if (func_35(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_34();
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
				func_27();
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
				if (func_26())
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
			if (func_25())
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
			func_24();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_50();
		func_110();
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
		func_106();
	}
	return 0;
}

void func_110()
{
	if (!func_111())
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

int func_111()
{
	if (!Global_262145.f_28013)
	{
		return 0;
	}
	if (!Global_76577)
	{
		return 0;
	}
	if (PLAYER_ID() == func_114())
	{
		return 0;
	}
	if (func_112(PLAYER_ID()))
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

bool func_112(int iParam0)
{
	return func_113(iParam0, 20);
}

bool func_113(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

int func_114()
{
	return -1;
}

int func_115()
{
	if (Global_20805 != 0 || IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_116(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_9(sParam7);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_9(sParam8);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_9(sParam9);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_9(sParam10);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_9(sParam11);
	}
	END_SCALEFORM_MOVIE_METHOD();
}

__________________________
Native Named by Reliency
1577160514
__________________________
