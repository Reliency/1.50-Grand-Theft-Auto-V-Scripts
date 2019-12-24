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
	var uLocal_60 = 10;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 2;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 8;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 8;
	var uLocal_84 = 0;
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
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	vector3 vLocal_115[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_116 = 0;
	struct<211> Local_117 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 1069547520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	struct<12> Local_121 = { 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	iLocal_110 = -1;
	iLocal_111 = -1;
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_473(ScriptParam_121);
	}
	else
	{
		func_448(0);
	}
	while (true)
	{
		func_447();
		if (func_436())
		{
			func_448(0);
		}
		if (func_431())
		{
			func_448(0);
		}
		func_2();
		if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1();
		}
	}
}

void func_1()
{
}

void func_2()
{
	if (!func_430(5))
	{
		func_429();
		func_428();
		func_427();
		func_424();
		func_422();
		func_421();
	}
	if (func_430(0))
	{
		func_376();
	}
	else if (func_430(1))
	{
		if (!func_375())
		{
			func_369();
			func_354();
		}
		else
		{
			func_353(1);
			func_352(6);
		}
	}
	else if (func_430(2))
	{
		func_344();
	}
	else if (func_430(3))
	{
		func_343();
		func_338();
		func_336();
		func_335();
		func_334();
		func_333();
		func_332();
		func_327();
		func_321();
		func_307();
		func_305();
		func_263();
		func_262();
		func_247();
		func_344();
		if (func_240())
		{
			func_239();
			return;
		}
		func_235();
		func_234();
		func_228();
		func_216(0);
		func_202();
		func_193();
		func_185();
		func_164();
		func_157();
		func_156();
		func_81();
		func_66();
		func_65();
		func_64();
	}
	else if (func_430(4))
	{
		func_26();
	}
	else if (func_430(5))
	{
		func_22();
		func_20();
	}
	else if (func_430(6))
	{
		func_11();
	}
	if (!func_430(3) && !func_430(5))
	{
		func_5();
	}
	func_4();
	func_3();
}

void func_3()
{
	Local_117.f_44++;
	if (Local_117.f_44 >= 32)
	{
		Local_117.f_44 = 0;
	}
}

void func_4()
{
	if (Local_117.f_44 != -1)
	{
		if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(vLocal_115[Local_117.f_44 /*3*/].f_2))
		{
			if (Global_1648604[PLAYER_ID() /*81*/].f_48[Local_117.f_44] != PLAYER_ID(vLocal_115[Local_117.f_44 /*3*/].f_2))
			{
				Global_1648604[PLAYER_ID() /*81*/].f_48[Local_117.f_44] = PLAYER_ID(vLocal_115[Local_117.f_44 /*3*/].f_2);
			}
		}
	}
}

void func_5()
{
	int iVar0;
	
	if (Local_117.f_118)
	{
		if (func_10(&(Local_117.f_178)))
		{
			if (func_9())
			{
				iVar0 = Global_262145.f_24730;
			}
			else
			{
				iVar0 = Global_262145.f_24130;
			}
			if (func_7(&(Local_117.f_178), iVar0, 0))
			{
				func_6(&(Local_117.f_178));
				Local_117.f_17 = 100;
				CLEAR_BIT(&(Local_117.f_5), 4);
				CLEAR_BIT(&(Local_117.f_5), 3);
				CLEAR_BIT(&(Local_117.f_5), 24);
				Local_117.f_118 = 0;
			}
		}
	}
}

void func_6(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_7(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_8(uParam0, bParam2, 0);
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

void func_8(var uParam0, bool bParam1, bool bParam2)
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

bool func_9()
{
	return IS_BIT_SET(Global_1687880.f_2, 2);
}

bool func_10(var uParam0)
{
	return uParam0->f_1;
}

void func_11()
{
	if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121))
	{
		if (NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_117.f_121))
		{
			if (!func_12())
			{
				func_448(1);
			}
			else
			{
				func_448(0);
			}
		}
		else
		{
			NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_117.f_121);
		}
	}
	else if (!func_12())
	{
		func_448(1);
	}
	else
	{
		func_448(0);
	}
}

int func_12()
{
	if (func_19())
	{
		return 1;
	}
	if (func_18())
	{
		return 1;
	}
	if (func_17() && func_13(PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_13(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_14(Global_2424073[iParam0 /*421*/].f_309.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_14(int iParam0)
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
	return -1;
}

bool func_17()
{
	return IS_BIT_SET(Global_1687880.f_2, 5);
}

bool func_18()
{
	return IS_BIT_SET(Global_1687880, 24);
}

bool func_19()
{
	return IS_BIT_SET(Global_1687880, 16);
}

void func_20()
{
	char* sVar0;
	
	if (Local_117.f_44 == -1)
	{
		return;
	}
	if (!func_21(Local_117.f_44))
	{
		return;
	}
	if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(vLocal_115[Local_117.f_44 /*3*/].f_2))
	{
		sVar0 = "scr_xs_props";
		REQUEST_NAMED_PTFX_ASSET(sVar0);
		if (HAS_NAMED_PTFX_ASSET_LOADED(sVar0))
		{
			if (!DOES_PARTICLE_FX_LOOPED_EXIST(Local_117.f_136[Local_117.f_44]))
			{
				USE_PARTICLE_FX_ASSET(sVar0);
				Local_117.f_136[Local_117.f_44] = START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_xs_guided_missile_trail", START_PARTICLE_FX_LOOPED_ON_ENTITY(vLocal_115[Local_117.f_44 /*3*/].f_2), 0f, 0f, 0f, 0f, 0f, 0f, 1f, 0, 0, 0);
			}
		}
	}
	else if (DOES_PARTICLE_FX_LOOPED_EXIST(Local_117.f_136[Local_117.f_44]))
	{
		STOP_PARTICLE_FX_LOOPED(Local_117.f_136[Local_117.f_44], 0);
	}
}

int func_21(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (vLocal_115[iParam0 /*3*/].f_1 == 4)
		{
			return 1;
		}
	}
	return 0;
}

void func_22()
{
	if (Local_117.f_44 != -1)
	{
		if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(vLocal_115[Local_117.f_44 /*3*/].f_2) && func_25(NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(vLocal_115[Local_117.f_44 /*3*/].f_2)))
		{
			if (func_24(Local_117.f_44))
			{
				Local_117.f_119 = "DLC_Arena_Drone_Sounds";
			}
			else if (func_23(Local_117.f_44))
			{
				Local_117.f_119 = "DLC_Arena_Battle_Drone_Sounds";
			}
			else if (func_21(Local_117.f_44))
			{
				Local_117.f_119 = "DLC_Arena_Piloted_Missile_Sounds";
			}
			else
			{
				Local_117.f_119 = "DLC_BTL_Drone_Sounds";
			}
			if (Local_117.f_45[Local_117.f_44] == -1)
			{
				Local_117.f_45[Local_117.f_44] = GET_SOUND_ID();
				PLAY_SOUND_FROM_ENTITY(Local_117.f_45[Local_117.f_44], "Flight_Loop", PLAY_SOUND_FROM_ENTITY(vLocal_115[Local_117.f_44 /*3*/].f_2), Local_117.f_119, false, 0);
				SET_VARIABLE_ON_SOUND(Local_117.f_45[Local_117.f_44], "DroneRotationalSpeed", 1f);
			}
			else
			{
				SET_VARIABLE_ON_SOUND(Local_117.f_45[Local_117.f_44], "DroneRotationalSpeed", 1f);
			}
		}
		else if (Local_117.f_45[Local_117.f_44] != -1)
		{
			STOP_SOUND(Local_117.f_45[Local_117.f_44]);
			RELEASE_SOUND_ID(Local_117.f_45[Local_117.f_44]);
			Local_117.f_45[Local_117.f_44] = -1;
		}
	}
}

int func_23(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (vLocal_115[iParam0 /*3*/].f_1 == 2)
		{
			return 1;
		}
	}
	return 0;
}

int func_24(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (vLocal_115[iParam0 /*3*/].f_1 == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_25(int iParam0)
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

void func_26()
{
	int iVar0;
	
	HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HIDE_HUD_AND_RADAR_THIS_FRAME();
	DISABLE_CONTROL_ACTION(0, 199, 1);
	DISABLE_CONTROL_ACTION(0, 200, 1);
	func_63();
	func_61();
	func_54(1);
	if (!IS_BIT_SET(Local_117.f_5, 1))
	{
		if (!func_32() && !func_31())
		{
			if ((func_30() || func_9()) || func_29())
			{
				CLEAR_PED_TASKS_IMMEDIATELY(CLEAR_PED_TASKS_IMMEDIATELY());
			}
		}
		if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121))
		{
			SET_ENTITY_HAS_GRAVITY(SET_ENTITY_HAS_GRAVITY(Local_117.f_121), 1);
		}
		if (HAS_SOUND_FINISHED(Local_117.f_33))
		{
			Local_117.f_33 = GET_SOUND_ID();
			PLAY_SOUND_FRONTEND(Local_117.f_33, "HUD_Static_Loop", Local_117.f_119, true);
		}
		if (!func_28())
		{
			SET_PAD_SHAKE(0, 300, 100);
			SET_TIMECYCLE_MODIFIER("RemixDrone");
			SET_BIT(&(Local_117.f_6), 0);
		}
		SET_BIT(&(Local_117.f_5), 1);
	}
	else if (!func_10(&(Local_117.f_174)))
	{
		func_8(&(Local_117.f_174), 0, 0);
	}
	else
	{
		iVar0 = 1000;
		if (func_27())
		{
			iVar0 = 500;
		}
		if (func_7(&(Local_117.f_174), iVar0, 0) || func_28())
		{
			if (Local_117.f_37 == -1)
			{
				if (HAS_SOUND_FINISHED(Local_117.f_37))
				{
					Local_117.f_37 = GET_SOUND_ID();
					PLAY_SOUND_FRONTEND(Local_117.f_37, "HUD_Disconnect", Local_117.f_119, true);
				}
			}
			func_353(1);
			func_352(6);
		}
	}
}

bool func_27()
{
	return IS_BIT_SET(Global_1687880.f_2, 4);
}

bool func_28()
{
	return IS_BIT_SET(Global_1687880, 20);
}

bool func_29()
{
	return IS_BIT_SET(Global_1687880.f_2, 3);
}

bool func_30()
{
	return IS_BIT_SET(Global_1687880, 11);
}

bool func_31()
{
	return Global_2508063;
}

int func_32()
{
	if ((func_53(PLAYER_ID(), 0) && Global_1319106 == 1) && func_33())
	{
		return 1;
	}
	return 0;
}

int func_33()
{
	if (Global_1319106 != -1 || Global_1319112 != -1)
	{
		if ((((IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || func_51(IS_ENTITY_PLAYING_ANIM(), 2106541073))
		{
			return 0;
		}
		if (((((!IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) && !IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) && !IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3)) && !IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3)) && !IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) && !IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3))
		{
			return 0;
		}
		if (func_34())
		{
			return 0;
		}
	}
	return 1;
}

int func_34()
{
	int iVar0;
	
	if (func_50(PLAYER_ID()))
	{
		iVar0 = func_49(PLAYER_ID());
		if (func_15(iVar0, 0, 1))
		{
			if ((((((func_48(iVar0) && func_14(func_47(iVar0)) == 4) && DOES_ENTITY_EXIST(DOES_ENTITY_EXIST(iVar0))) && !DOES_ENTITY_EXIST(DOES_ENTITY_EXIST(iVar0))) && DOES_ENTITY_EXIST(DOES_ENTITY_EXIST(iVar0), 0)) && DOES_ENTITY_EXIST(DOES_ENTITY_EXIST(DOES_ENTITY_EXIST(iVar0), 0))) && func_46(DOES_ENTITY_EXIST(DOES_ENTITY_EXIST(iVar0), 0)))
			{
				return 1;
			}
			if (!func_45(Global_4456448.f_154360))
			{
				if (func_50(iVar0))
				{
					if (func_44(iVar0))
					{
						return 1;
					}
					else if (func_48(PLAYER_ID()) || func_43())
					{
						return 1;
					}
				}
			}
		}
	}
	if (Global_1687909)
	{
		return 1;
	}
	if (func_42(PLAYER_ID()))
	{
		iVar0 = func_41(PLAYER_ID());
		if (func_15(iVar0, 0, 1))
		{
			if ((((((func_48(iVar0) && func_14(func_47(iVar0)) == 9) && DOES_ENTITY_EXIST(DOES_ENTITY_EXIST(iVar0))) && !DOES_ENTITY_EXIST(DOES_ENTITY_EXIST(iVar0))) && DOES_ENTITY_EXIST(DOES_ENTITY_EXIST(iVar0), 0)) && DOES_ENTITY_EXIST(DOES_ENTITY_EXIST(DOES_ENTITY_EXIST(iVar0), 0))) && DOES_ENTITY_EXIST(DOES_ENTITY_EXIST(DOES_ENTITY_EXIST(iVar0), 0)) == -2118308144)
			{
				return 1;
			}
			if (func_40(iVar0))
			{
				return 1;
			}
			else if (func_48(PLAYER_ID()) || func_43())
			{
				return 1;
			}
		}
	}
	if (func_53(PLAYER_ID(), 0))
	{
		iVar0 = func_39(PLAYER_ID());
		if (func_15(iVar0, 0, 1))
		{
			if ((((Global_1590293 != func_16() && func_48(Global_1590293)) && func_14(func_47(Global_1590293)) == 11) && func_38(Global_1590293, -1)) && IS_VEHICLE_MODEL(IS_VEHICLE_MODEL(IS_VEHICLE_MODEL(Global_1590293), 0), -1988428699))
			{
				return 1;
			}
			else if (func_37(iVar0))
			{
				return 1;
			}
			else if (func_48(PLAYER_ID()) || func_43())
			{
				return 1;
			}
		}
	}
	if (func_42(PLAYER_ID()) || func_36(PLAYER_ID()))
	{
		switch (Global_1319112)
		{
			case 1:
				if (Global_262145.f_22572)
				{
					return 1;
				}
				break;
			
			case 2:
				if (Global_262145.f_22573)
				{
					return 1;
				}
				break;
			
			case 3:
				if (Global_262145.f_22574)
				{
					return 1;
				}
				break;
			}
	}
	if (Global_1319110 == 1)
	{
		return 1;
	}
	if (func_35(3))
	{
		if (Global_1573351 == 185)
		{
			if (Global_1574439 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_35(int iParam0)
{
	return Global_262145.f_5008[iParam0] == Global_4456448.f_154360;
}

int func_36(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_14(Global_2424073[iParam0 /*421*/].f_309.f_5) == 10;
			}
		}
	}
	return 0;
}

int func_37(int iParam0)
{
	if (iParam0 != func_16())
	{
		return IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309.f_3, 4);
	}
	return 0;
}

int func_38(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_15(iParam0, 1, 1))
	{
		if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(iParam0), 0))
		{
			iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(iParam0), 0);
			if (IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (PLAYER_PED_ID() == PLAYER_PED_ID(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_39(int iParam0)
{
	if (iParam0 == func_16())
	{
		return iParam0;
	}
	return Global_2424073[iParam0 /*421*/].f_309.f_8;
}

int func_40(int iParam0)
{
	if (iParam0 != func_16())
	{
		return IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309.f_2, 6);
	}
	return 0;
}

int func_41(int iParam0)
{
	if (iParam0 == func_16())
	{
		return iParam0;
	}
	return Global_2424073[iParam0 /*421*/].f_309.f_8;
}

int func_42(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_16())
			{
				return func_14(Global_2424073[iParam0 /*421*/].f_309.f_5) == 8;
			}
		}
	}
	return 0;
}

bool func_43()
{
	return IS_BIT_SET(Global_1676879, 6);
}

int func_44(int iParam0)
{
	if (iParam0 != func_16())
	{
		return IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309, 6);
	}
	return 0;
}

bool func_45(int iParam0)
{
	return Global_262145.f_4999[4] == iParam0;
}

int func_46(int iParam0)
{
	if (GET_ENTITY_MODEL(iParam0) == 387748548 || GET_ENTITY_MODEL(iParam0) == 177270108)
	{
		return 1;
	}
	return 0;
}

int func_47(int iParam0)
{
	if (iParam0 != func_16() && func_15(iParam0, 1, 1))
	{
		return Global_2424073[iParam0 /*421*/].f_309.f_14;
	}
	return -1;
}

int func_48(int iParam0)
{
	if (iParam0 != func_16() && func_15(iParam0, 1, 1))
	{
		return IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309, 3);
	}
	return 0;
}

int func_49(int iParam0)
{
	if (iParam0 == func_16())
	{
		return iParam0;
	}
	return Global_2424073[iParam0 /*421*/].f_309.f_8;
}

int func_50(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_16())
			{
				return func_14(Global_2424073[iParam0 /*421*/].f_309.f_5) == 5;
			}
		}
	}
	return 0;
}

int func_51(int iParam0, int iParam1)
{
	if (func_52(iParam0))
	{
		if (GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_52(int iParam0)
{
	if (func_25(iParam0))
	{
		if (!IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_53(int iParam0, bool bParam1)
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
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_16())
			{
				return func_14(Global_2424073[iParam0 /*421*/].f_309.f_5) == 12;
			}
		}
	}
	return 0;
}

void func_54(int iParam0)
{
	if (func_60())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_59(0))
		{
			func_55(iParam0);
		}
		SET_BIT(&Global_7357, 2);
	}
}

void func_55(int iParam0)
{
	if (func_60())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_58())
		{
			func_57(1, 1);
		}
		else
		{
			func_57(0, 0);
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
	if (!func_56())
	{
		Global_19486.f_1 = 3;
	}
}

int func_56()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_57(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_59(0))
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

bool func_58()
{
	return IS_BIT_SET(Global_1687880, 5);
}

int func_59(int iParam0)
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

bool func_60()
{
	return IS_BIT_SET(Global_1687880, 19);
}

void func_61()
{
	_0xEB2D525B57F42B40();
	func_62();
}

void func_62()
{
	Global_22211.f_134 = 1;
}

void func_63()
{
	Global_1312666 = 1;
}

void func_64()
{
	if (func_17())
	{
		if (func_18())
		{
			if (func_25(PLAYER_PED_ID()))
			{
				SET_PED_RESET_FLAG(SET_PED_RESET_FLAG(), 124, true);
			}
		}
	}
}

void func_65()
{
	char* sVar0;
	
	if (!func_27())
	{
		return;
	}
	sVar0 = "scr_xs_props";
	REQUEST_NAMED_PTFX_ASSET(sVar0);
	if (HAS_NAMED_PTFX_ASSET_LOADED(sVar0))
	{
		if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121))
		{
			if (!DOES_PARTICLE_FX_LOOPED_EXIST(Local_117.f_136[DOES_PARTICLE_FX_LOOPED_EXIST()]))
			{
				USE_PARTICLE_FX_ASSET(sVar0);
				Local_117.f_136[PLAYER_ID()] = PLAYER_ID("scr_xs_guided_missile_trail", PLAYER_ID(Local_117.f_121), 0f, 0f, 0f, 0f, 0f, 0f, 1f, 0, 0, 0);
			}
		}
	}
}

void func_66()
{
	if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121))
	{
		if (!DOES_ENTITY_EXIST(Local_117.f_123))
		{
			REQUEST_MODEL(func_80());
			if (HAS_MODEL_LOADED(func_80()))
			{
				if (!IS_BIT_SET(Local_117.f_5, 6))
				{
					if (func_74(CAN_REGISTER_MISSION_ENTITIES(false, 0) + 1, 0, 1))
					{
						RESERVE_NETWORK_MISSION_OBJECTS(RESERVE_NETWORK_MISSION_OBJECTS(0) + 1);
						SET_BIT(&(Local_117.f_5), 6);
					}
				}
				else if (CAN_REGISTER_MISSION_OBJECTS(1))
				{
					Local_117.f_123 = CREATE_PED(26, func_80(), Local_117.f_112, CREATE_PED(CREATE_PED(Local_117.f_121)), 0, false);
					SET_ENTITY_INVINCIBLE(Local_117.f_123, true);
					SET_ENTITY_VISIBLE(Local_117.f_123, false, 0);
					SET_ENTITY_HAS_GRAVITY(Local_117.f_123, 0);
					SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_117.f_123, true);
					SET_MODEL_AS_NO_LONGER_NEEDED(func_80());
					SET_PED_CONFIG_FLAG(Local_117.f_123, 118, false);
					SET_PED_CONFIG_FLAG(Local_117.f_123, 108, true);
					SET_PED_CONFIG_FLAG(Local_117.f_123, 208, true);
					SET_ENTITY_PROOFS(Local_117.f_123, true, true, true, true, true, false, 0, false);
					ATTACH_ENTITY_TO_ENTITY(Local_117.f_123, ATTACH_ENTITY_TO_ENTITY(Local_117.f_121), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					_SET_ENTITY_COLLISION_2(Local_117.f_123, false, 0);
					Global_1687880.f_23 = Local_117.f_123;
				}
			}
		}
		else if (func_25(Local_117.f_123))
		{
			if (IS_ENTITY_VISIBLE(Local_117.f_123))
			{
				SET_ENTITY_VISIBLE(Local_117.f_123, false, 0);
			}
			if (!func_72(PLAYER_ID()) && !func_69(PLAYER_ID(), 236))
			{
				if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) > 0)
				{
					func_68(Global_1575008);
				}
			}
			else if ((Global_1687880.f_4 == -1 || Global_1687880.f_4 == 0) || Global_1687880.f_4 == Global_1574997)
			{
				func_68(Global_1575008);
			}
			if (GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Local_117.f_123) != func_67())
			{
				SET_PED_RELATIONSHIP_GROUP_HASH(Local_117.f_123, func_67());
			}
			if (!IS_ENTITY_ATTACHED(Local_117.f_123))
			{
				ATTACH_ENTITY_TO_ENTITY(Local_117.f_123, ATTACH_ENTITY_TO_ENTITY(Local_117.f_121), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				_SET_ENTITY_COLLISION_2(Local_117.f_123, false, 0);
			}
		}
	}
}

int func_67()
{
	if (Global_1687880.f_4 != -1 && Global_1687880.f_4 != 0)
	{
		return Global_1687880.f_4;
	}
	return Global_1575008;
}

void func_68(int iParam0)
{
	if (Global_1687880.f_4 != iParam0)
	{
		Global_1687880.f_4 = iParam0;
	}
}

int func_69(int iParam0, int iParam1)
{
	if (func_71(iParam0) == iParam1)
	{
		return func_70(iParam0);
	}
	return 0;
}

int func_70(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return IS_BIT_SET(Global_1628955[iVar0 /*614*/].f_1, 7);
	}
	return 0;
}

int func_71(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1628955[iVar0 /*614*/];
	}
	return -1;
}

bool func_72(int iParam0)
{
	return func_73(iParam0, 20);
}

bool func_73(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

bool func_74(int iParam0, bool bParam1, bool bParam2)
{
	return func_75(2, iParam0, 1, bParam1, bParam2);
}

int func_75(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!IS_BIT_SET(Global_1385512, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_79(iParam0) - func_78(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_78(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_79(iParam0) - func_77(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_78(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_79(iParam0) - func_78(iParam0, 1));
		}
		if (!bParam4 && Global_1590446[PLAYER_ID() /*871*/] != 3)
		{
			iVar1 = (iVar1 - func_76(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_76(int iParam0)
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

int func_77(int iParam0)
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

int func_78(int iParam0, bool bParam1)
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

int func_79(int iParam0)
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

int func_80()
{
	return joaat("g_m_m_chigoon_01");
}

void func_81()
{
	if (func_155())
	{
		return;
	}
	if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121) && !NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121), 0))
	{
		if (DOES_CAM_EXIST(Local_117.f_131) && DOES_CAM_EXIST(Local_117.f_131))
		{
			if (!func_27())
			{
				func_146();
				func_108();
			}
			else
			{
				func_90();
				func_84();
			}
			_0xAF66DCEE6609B148();
			func_83(1);
			func_82(2);
		}
	}
}

void func_82(int iParam0)
{
	Global_1315712 = iParam0;
}

void func_83(int iParam0)
{
	Global_1375006.f_1100 = iParam0;
}

void func_84()
{
	int iVar0;
	
	if (!HAS_SCALEFORM_MOVIE_LOADED(Local_117.f_132))
	{
		Local_117.f_132 = func_89();
		return;
	}
	iVar0 = func_88();
	if (iVar0 < 0 || !func_25(iVar0))
	{
		return;
	}
	func_87(Local_117.f_132, 0);
	func_86(Local_117.f_132, 3, 3, 3);
	func_85(Local_117.f_132, 0f, 0f, 0f, 0f, (GET_ENTITY_HEADING(iVar0) + 180f));
	_SET_UI_LAYER(1);
	DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_117.f_132, 255, 255, 255, 0, 0);
}

void func_85(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	fParam2 = ((fParam2 - fParam3) / (fParam4 - fParam3));
	BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_ALT_FOV_HEADING");
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam1);
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam2);
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam5);
	END_SCALEFORM_MOVIE_METHOD();
}

void func_86(int iParam0, int iParam1, int iParam2, int iParam3)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_WEAPON_VALUES");
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam1);
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam2);
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam3);
	END_SCALEFORM_MOVIE_METHOD();
}

void func_87(int iParam0, bool bParam1)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_ZOOM_VISIBLE");
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(bParam1);
	END_SCALEFORM_MOVIE_METHOD();
}

int func_88()
{
	if (PLAYER_ID() != -1)
	{
		return Global_1687880.f_20;
	}
	return -1;
}

int func_89()
{
	char* sVar0;
	
	sVar0 = "";
	switch (Global_4456448.f_184556)
	{
		case 1:
			sVar0 = "ARENA_GUN_CAM_APOCALYPSE";
			break;
		
		case 2:
			sVar0 = "ARENA_GUN_CAM_SCIFI";
			break;
		
		case 3:
			sVar0 = "ARENA_GUN_CAM_CONSUMER";
			break;
		
		default:
			sVar0 = "INVALID_THEME";
			break;
	}
	return 0x67D02A194A2FC2BD(sVar0);
}

void func_90()
{
	if (!IS_BIT_SET(Local_117.f_5, 16))
	{
		if (func_106(0, -1, 0))
		{
			func_105(-1);
			func_104(20, "DRONE_SPACE", -1);
			func_104(21, "DRONE_POSITION", -1);
			if (!_IS_INPUT_DISABLED(0))
			{
				func_103(208, "DRONE_SPEEDU", -1, 0);
				func_103(207, "DRONE_SLOWD", -1, 0);
			}
			else
			{
				func_103(209, "DRONE_SPEEDU", -1, 0);
				func_103(210, "DRONE_SLOWD", -1, 0);
			}
			func_103(75, "MOVE_DRONE_RE", -1, 0);
			SET_BIT(&(Local_117.f_5), 16);
		}
	}
	else
	{
		func_91(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (_IS_INPUT_DISABLED(0))
	{
		if (!IS_BIT_SET(Local_117.f_5, 17))
		{
			SET_BIT(&(Local_117.f_5), 17);
			CLEAR_BIT(&(Local_117.f_5), 16);
		}
	}
	else if (IS_BIT_SET(Local_117.f_5, 17))
	{
		CLEAR_BIT(&(Local_117.f_5), 17);
		CLEAR_BIT(&(Local_117.f_5), 16);
	}
}

void func_91(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_102(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_99(bParam4, bParam8))
	{
		return;
	}
	if (func_97())
	{
		return;
	}
	if (_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_94(PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (IS_PC_VERSION())
	{
		if (UPDATE_ONSCREEN_KEYBOARD() == 0 || UPDATE_ONSCREEN_KEYBOARD())
		{
			return;
		}
	}
	if (Global_22350.f_4769 != 0)
	{
		if (_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_22350.f_4769)
			{
				if (Global_22350.f_5026[iVar1] != 359)
				{
					StringCopy(&(Global_22350.f_4771[iVar1 /*16*/]), GET_CONTROL_INSTRUCTIONAL_BUTTON(2, Global_22350.f_5026[iVar1], true), 64);
				}
				else if (Global_22350.f_5039[iVar1] != 32)
				{
					StringCopy(&(Global_22350.f_4771[iVar1 /*16*/]), _0x80C2FD58D720C801(2, Global_22350.f_5039[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_22350.f_4770 = 0;
		}
		if (!Global_22350.f_4770)
		{
			BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0 /*10*/], "CLEAR_ALL");
			END_SCALEFORM_MOVIE_METHOD();
			BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0 /*10*/], "SET_MAX_WIDTH");
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT((1f - (Global_22350.f_5081 / 100f)));
			END_SCALEFORM_MOVIE_METHOD();
			if (IS_PC_VERSION())
			{
				BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(true);
				END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_22350.f_4769)
			{
				if (GET_HASH_KEY(&(Global_22350.f_4964[iVar1 /*4*/])) != GET_HASH_KEY("PREV"))
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar1);
					func_93(&(Global_22350.f_4771[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && GET_HASH_KEY(&(Global_22350.f_4964[iVar2 /*4*/])) == GET_HASH_KEY("PREV"))
					{
						func_93(&(Global_22350.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22350.f_5013[iVar1] == -1)
					{
						func_92(&(Global_22350.f_4964[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_22350.f_5013[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_22350.f_4964[iVar1 /*4*/]));
						if (bParam5)
						{
							ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
						}
						else
						{
							ADD_TEXT_COMPONENT_INTEGER(iVar3);
						}
						END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (IS_PC_VERSION())
					{
						if (Global_22350.f_5026[iVar1] != 359 && IS_BIT_SET(Global_22350.f_5052, iVar1))
						{
							_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(true);
							_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_22350.f_5026[iVar1]);
						}
						else
						{
							_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(false);
							_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(359);
						}
					}
					END_SCALEFORM_MOVIE_METHOD();
				}
				iVar1++;
			}
			if (GET_HASH_KEY(&(Global_4268271.f_16)) != GET_HASH_KEY(""))
			{
				BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_22350.f_4769);
				func_93(&Global_4268271);
				if (Global_4268271.f_20 == -1)
				{
					func_92(&(Global_4268271.f_16));
				}
				else
				{
					iVar4 = Global_22350.f_5013[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4268271.f_16));
					if (bParam5)
					{
						ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
					}
					else
					{
						ADD_TEXT_COMPONENT_INTEGER(iVar4);
					}
					END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				END_SCALEFORM_MOVIE_METHOD();
			}
			BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(80);
			END_SCALEFORM_MOVIE_METHOD();
			BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22350.f_5082)
			{
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
			}
			else
			{
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
			}
			END_SCALEFORM_MOVIE_METHOD();
			Global_22350.f_4770 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_22350.f_4769)
		{
			if (Global_22350.f_5013[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar1);
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_22350.f_4964[iVar1 /*4*/]));
					if (bParam5)
					{
						ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					END_TEXT_COMMAND_SCALEFORM_STRING();
					END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar1++;
		}
		if (Global_4268271.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar1);
				BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4268271.f_16));
				if (bParam5)
				{
					ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				END_TEXT_COMMAND_SCALEFORM_STRING();
				END_SCALEFORM_MOVIE_METHOD();
			}
		}
		SET_SCRIPT_GFX_ALIGN(76, 66);
		_SCREEN_DRAW_POSITION_RATIO(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_22350.f_8385)
			{
				SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_22350.f_8385 = 1;
			}
		}
		else if (Global_22350.f_8385)
		{
			RESET_HUD_COMPONENT_VALUES(15);
			Global_22350.f_8385 = 0;
		}
		RESET_SCRIPT_GFX_ALIGN();
		if (Global_22350.f_5055)
		{
			SET_SCRIPT_GFX_ALIGN(82, 66);
			_SCREEN_DRAW_POSITION_RATIO(0f, 0f, 0f, 0f);
			DRAW_SCALEFORM_MOVIE(Global_22350.f_5660[iVar0 /*10*/], Global_22350.f_5053, Global_22350.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_22350.f_5660[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_92(char* sParam0)
{
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_93(char* sParam0)
{
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam0);
}

bool func_94(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER_ID())
	{
		bVar0 = func_95(-1, 0) == 8;
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

int func_95(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_96();
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

int func_96()
{
	return Global_1312745;
}

int func_97()
{
	vector3 vVar0;
	
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	if (func_98())
	{
		vVar0 = { 0f, -500f, 0f };
		GET_MOBILE_PHONE_POSITION(&vVar0);
		if (Global_19431 == 0)
		{
			if (vVar0.y > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (vVar0.y > -101f)
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

int func_98()
{
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_99(bool bParam0, bool bParam1)
{
	if (Global_2437549.f_1893.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!IS_SCREEN_FADED_IN() || (func_101(8, -1) && func_100() != 65)) || (IS_SCREEN_FADED_IN() != 0 && !bParam1)) || (IS_SCREEN_FADED_IN() && !bParam0)) || IS_SCREEN_FADED_IN()) || Global_76837) || Global_22350.f_8384) || IS_SCREEN_FADED_IN()) || Global_98721.f_1417)
	{
		return 0;
	}
	return 1;
}

int func_100()
{
	return Global_1312808;
}

bool func_101(int iParam0, int iParam1)
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

int func_102(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (NETWORK_IS_GAME_IN_PROGRESS() && NETWORK_IS_GAME_IN_PROGRESS())
		{
			iParam2 = _NETWORK_GET_PLAYER_PED_FROM_INDEX();
		}
	}
	StringCopy(&cVar0, GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = GET_HASH_KEY(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_22350.f_5721[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_22350.f_5721[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_22350.f_5721[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_103(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, true);
	if (Global_22350.f_4769 >= 12)
	{
		StringCopy(&Global_4268271, sVar0, 64);
		StringCopy(&(Global_4268271.f_16), sParam1, 16);
		Global_4268271.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		SET_BIT(&(Global_22350.f_5052), Global_22350.f_4769);
	}
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769 /*4*/]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = iParam0;
	Global_22350.f_5039[Global_22350.f_4769] = 32;
	Global_22350.f_4769++;
}

void func_104(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = _0x80C2FD58D720C801(2, iParam0, true);
	if (Global_22350.f_4769 >= 12)
	{
		StringCopy(&Global_4268271, sVar0, 64);
		StringCopy(&(Global_4268271.f_16), sParam1, 16);
		Global_4268271.f_20 = iParam2;
		return;
		return;
	}
	CLEAR_BIT(&(Global_22350.f_5052), Global_22350.f_4769);
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769 /*4*/]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = 359;
	Global_22350.f_5039[Global_22350.f_4769] = iParam0;
	Global_22350.f_4769++;
}

void func_105(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_22350.f_4769 = 0;
	Global_22350.f_4770 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22350.f_4964[iVar0 /*4*/]), "", 16);
		Global_22350.f_5013[iVar0] = -1;
		Global_22350.f_5026[iVar0] = 359;
		Global_22350.f_5039[iVar0] = 32;
		iVar0++;
	}
	Global_22350.f_5052 = 0;
	StringCopy(&(Global_4268271.f_16), "", 16);
	Global_4268271.f_20 = -1;
	if (IS_PC_VERSION())
	{
		if (!func_102(&iVar1, 0, iParam0))
		{
			return;
		}
		BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(false);
		END_SCALEFORM_MOVIE_METHOD();
	}
}

bool func_106(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_102(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_22350.f_5635[iVar0 /*4*/]), sParam0, 16);
	if (!IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_5635[iVar0 /*4*/])))
	{
		REQUEST_ADDITIONAL_TEXT(&(Global_22350.f_5635[iVar0 /*4*/]), 9);
		Global_22350.f_5628[iVar0] = 1;
		if (!HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_22350.f_5635[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	Global_22350.f_5614[iVar0] = 1;
	if (!HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_22350.f_5621[iVar0] = 1;
		if (!HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22350.f_5660[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_107(&(Global_22350.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_107(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = 0x67D02A194A2FC2BD(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_108()
{
	if (!HAS_SCALEFORM_MOVIE_LOADED(Local_117.f_132))
	{
		Local_117.f_132 = 0x67D02A194A2FC2BD("DRONE_CAM");
		return;
	}
	if ((func_29() || func_60()) || func_145(0))
	{
		func_144("SET_DETONATE_METER_IS_VISIBLE", 0);
	}
	else
	{
		func_144("SET_DETONATE_METER_IS_VISIBLE", 1);
	}
	if ((func_29() || func_60()) || func_9())
	{
		func_144("SET_SHOCK_METER_IS_VISIBLE", 0);
	}
	else
	{
		func_144("SET_SHOCK_METER_IS_VISIBLE", 1);
	}
	if (func_9())
	{
		func_144("SET_EMP_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_144("SET_EMP_METER_IS_VISIBLE", 0);
	}
	if (!func_29() && !func_60())
	{
		func_144("SET_RETICLE_IS_VISIBLE", 1);
	}
	else
	{
		func_144("SET_RETICLE_IS_VISIBLE", 0);
	}
	func_144("SET_HEADING_METER_IS_VISIBLE", 1);
	func_144("SET_ZOOM_METER_IS_VISIBLE", 1);
	if (((!func_29() && !func_60()) && !func_9()) && func_143())
	{
		func_144("SET_BOOST_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_144("SET_BOOST_METER_IS_VISIBLE", 0);
	}
	if (func_142())
	{
		func_144("SET_TRANQUILIZE_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_144("SET_TRANQUILIZE_METER_IS_VISIBLE", 0);
	}
	func_144("SET_MISSILE_METER_IS_VISIBLE", 0);
	func_144("SET_BOTTOM_LEFT_CORNER_IS_VISIBLE", 0);
	if (func_140(PLAYER_ID()) == 240)
	{
		if (Local_117.f_83 >= (func_139() - 50f) || Local_117.f_84 >= IntToFloat((Global_262145.f_24137 - 50)))
		{
			func_144("SET_SOUND_WAVE_IS_VISIBLE", 0);
			func_138();
			if (IS_BIT_SET(Local_117.f_5, 13))
			{
				CLEAR_BIT(&(Local_117.f_5), 13);
			}
		}
		else
		{
			func_134(func_135());
			if (!IS_BIT_SET(Local_117.f_5, 13))
			{
				func_144("SET_SOUND_WAVE_IS_VISIBLE", 1);
				SET_BIT(&(Local_117.f_5), 13);
			}
		}
	}
	else
	{
		func_144("SET_SOUND_WAVE_IS_VISIBLE", 0);
		func_138();
	}
	func_144("SET_INFO_LIST_IS_VISIBLE", 0);
	if (!func_29() && !func_60())
	{
		if (!func_9())
		{
			func_133(Local_117.f_17);
		}
		else
		{
			func_132(Local_117.f_17);
		}
		if (!func_145(0))
		{
			func_131(Local_117.f_18);
		}
	}
	if (func_142())
	{
		func_130(Local_117.f_23);
	}
	if (func_143())
	{
		func_129(Local_117.f_19);
	}
	func_128(0, "DRONE_ZOOM_1");
	func_128(1, "");
	func_128(2, "DRONE_ZOOM_2");
	func_128(3, "");
	func_128(4, "DRONE_ZOOM_3");
	func_126();
	func_124();
	func_122();
	func_121(round((GET_ENTITY_HEADING(GET_ENTITY_HEADING(Local_117.f_121)) + 180f)));
	if (func_140(PLAYER_ID()) == 240)
	{
		func_120(func_135());
	}
	if (func_119())
	{
		func_112();
	}
	else if (func_9() || func_29())
	{
		func_111();
	}
	else if (func_18())
	{
		func_109();
	}
	_SET_UI_LAYER(1);
	DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_117.f_132, 255, 255, 255, 0, 0);
}

void func_109()
{
	float fVar0;
	
	fVar0 = Local_117.f_83;
	if (fVar0 >= (func_139() - 50f))
	{
		if (HAS_SOUND_FINISHED(Local_117.f_36))
		{
			Local_117.f_36 = GET_SOUND_ID();
			PLAY_SOUND_FRONTEND(Local_117.f_36, "Out_Of_Bounds_Alarm_Loop", Local_117.f_119, true);
		}
		if (fVar0 >= (func_139() - 50f) && fVar0 < (func_139() - 45f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.1f);
		}
		else if (fVar0 >= (func_139() - 45f) && fVar0 < (func_139() - 40f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.2f);
		}
		else if (fVar0 >= (func_139() - 40f) && fVar0 < (func_139() - 35f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.3f);
		}
		else if (fVar0 >= (func_139() - 35f) && fVar0 < (func_139() - 30f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.4f);
		}
		else if (fVar0 >= (func_139() - 30f) && fVar0 < (func_139() - 25f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.5f);
		}
		else if (fVar0 >= (func_139() - 25f) && fVar0 < (func_139() - 20f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.6f);
		}
		else if (fVar0 >= (func_139() - 20f) && fVar0 < (func_139() - 15f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.7f);
		}
		else if (fVar0 >= (func_139() - 15f) && fVar0 < (func_139() - 10f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.8f);
		}
		else if (fVar0 >= (func_139() - 10f) && fVar0 < (func_139() - 5f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.9f);
		}
		else if (fVar0 >= (func_139() - 5f) && fVar0 < func_139())
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(1f);
		}
	}
	else
	{
		func_144("SET_WARNING_IS_VISIBLE", 0);
		if (!HAS_SOUND_FINISHED(Local_117.f_36))
		{
			STOP_SOUND(Local_117.f_36);
			RELEASE_SOUND_ID(Local_117.f_36);
			Local_117.f_36 = -1;
		}
	}
}

void func_110(float fParam0)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(Local_117.f_132, "SET_WARNING_FLASH_RATE");
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam0);
	END_SCALEFORM_MOVIE_METHOD();
}

void func_111()
{
	if (Local_117.f_112.f_2 >= (func_139() - 20f))
	{
		if (HAS_SOUND_FINISHED(Local_117.f_36))
		{
			Local_117.f_36 = GET_SOUND_ID();
			PLAY_SOUND_FRONTEND(Local_117.f_36, "Out_Of_Bounds_Alarm_Loop", Local_117.f_119, true);
		}
		if (Local_117.f_112.f_2 >= (func_139() - 20f) && Local_117.f_112.f_2 < (func_139() - 16f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.1f);
		}
		else if (Local_117.f_112.f_2 >= (func_139() - 16f) && Local_117.f_112.f_2 < (func_139() - 13f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.2f);
		}
		else if (Local_117.f_112.f_2 >= (func_139() - 13f) && Local_117.f_112.f_2 < (func_139() - 10f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.3f);
		}
		else if (Local_117.f_112.f_2 >= (func_139() - 10f) && Local_117.f_112.f_2 < (func_139() - 8f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.4f);
		}
		else if (Local_117.f_112.f_2 >= (func_139() - 8f) && Local_117.f_112.f_2 < (func_139() - 6f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.5f);
		}
		else if (Local_117.f_112.f_2 >= (func_139() - 6f) && Local_117.f_112.f_2 < (func_139() - 4f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.6f);
		}
		else if (Local_117.f_112.f_2 >= (func_139() - 4f) && Local_117.f_112.f_2 < (func_139() - 3f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.7f);
		}
		else if (Local_117.f_112.f_2 >= (func_139() - 3f) && Local_117.f_112.f_2 < (func_139() - 2f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.8f);
		}
		else if (Local_117.f_112.f_2 >= (func_139() - 2f) && Local_117.f_112.f_2 < (func_139() - 1f))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.9f);
		}
		else if (Local_117.f_112.f_2 >= (func_139() - 1f) && Local_117.f_112.f_2 < func_139())
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(1f);
		}
	}
	else
	{
		func_144("SET_WARNING_IS_VISIBLE", 0);
		if (!HAS_SOUND_FINISHED(Local_117.f_36))
		{
			STOP_SOUND(Local_117.f_36);
			RELEASE_SOUND_ID(Local_117.f_36);
			Local_117.f_36 = -1;
		}
	}
}

void func_112()
{
	if (Local_117.f_83 >= (func_139() - 50f) || Local_117.f_84 >= IntToFloat((Global_262145.f_24137 - 50)))
	{
		func_113();
		if (HAS_SOUND_FINISHED(Local_117.f_36))
		{
			Local_117.f_36 = GET_SOUND_ID();
			PLAY_SOUND_FRONTEND(Local_117.f_36, "Out_Of_Bounds_Alarm_Loop", Local_117.f_119, true);
		}
		if ((Local_117.f_83 >= (func_139() - 50f) && Local_117.f_83 < (func_139() - 45f)) || (Local_117.f_84 >= IntToFloat((Global_262145.f_24137 - 50)) && Local_117.f_84 < IntToFloat((Global_262145.f_24137 - 45))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.1f);
		}
		else if ((Local_117.f_83 >= (func_139() - 45f) && Local_117.f_83 < (func_139() - 40f)) || (Local_117.f_84 >= IntToFloat((Global_262145.f_24137 - 45)) && Local_117.f_84 < IntToFloat((Global_262145.f_24137 - 40))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.2f);
		}
		else if ((Local_117.f_83 >= (func_139() - 40f) && Local_117.f_83 < (func_139() - 35f)) || (Local_117.f_84 >= IntToFloat((Global_262145.f_24137 - 40)) && Local_117.f_84 < IntToFloat((Global_262145.f_24137 - 35))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.3f);
		}
		else if ((Local_117.f_83 >= (func_139() - 35f) && Local_117.f_83 < (func_139() - 30f)) || (Local_117.f_84 >= IntToFloat((Global_262145.f_24137 - 35)) && Local_117.f_84 < IntToFloat((Global_262145.f_24137 - 30))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.4f);
		}
		else if ((Local_117.f_83 >= (func_139() - 30f) && Local_117.f_83 < (func_139() - 25f)) || (Local_117.f_84 >= IntToFloat((Global_262145.f_24137 - 30)) && Local_117.f_84 < IntToFloat((Global_262145.f_24137 - 25))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.5f);
		}
		else if ((Local_117.f_83 >= (func_139() - 25f) && Local_117.f_83 < (func_139() - 20f)) || (Local_117.f_84 >= IntToFloat((Global_262145.f_24137 - 25)) && Local_117.f_84 < IntToFloat((Global_262145.f_24137 - 20))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.6f);
		}
		else if ((Local_117.f_83 >= (func_139() - 20f) && Local_117.f_83 < (func_139() - 15f)) || (Local_117.f_84 >= IntToFloat((Global_262145.f_24137 - 20)) && Local_117.f_84 < IntToFloat((Global_262145.f_24137 - 15))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.7f);
		}
		else if ((Local_117.f_83 >= (func_139() - 15f) && Local_117.f_83 < (func_139() - 10f)) || (Local_117.f_84 >= IntToFloat((Global_262145.f_24137 - 15)) && Local_117.f_84 < IntToFloat((Global_262145.f_24137 - 10))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.8f);
		}
		else if ((Local_117.f_83 >= (func_139() - 10f) && Local_117.f_83 < (func_139() - 5f)) || (Local_117.f_84 >= IntToFloat((Global_262145.f_24137 - 10)) && Local_117.f_84 < IntToFloat((Global_262145.f_24137 - 5))))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(0.9f);
		}
		else if ((Local_117.f_83 >= (func_139() - 5f) && Local_117.f_83 < func_139()) || (Local_117.f_84 >= IntToFloat((Global_262145.f_24137 - 5)) && Local_117.f_84 < IntToFloat(Global_262145.f_24137)))
		{
			func_144("SET_WARNING_IS_VISIBLE", 1);
			func_110(1f);
		}
	}
	else
	{
		func_144("SET_WARNING_IS_VISIBLE", 0);
		if (!HAS_SOUND_FINISHED(Local_117.f_36))
		{
			STOP_SOUND(Local_117.f_36);
			RELEASE_SOUND_ID(Local_117.f_36);
			Local_117.f_36 = -1;
		}
	}
}

void func_113()
{
	int iVar0;
	
	if (IS_SCREEN_FADED_IN() && !IS_SCREEN_FADED_IN(Global_1676879.f_3, 15))
	{
		if (!IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			iVar0 = func_116(22045, -1, -1);
			if (iVar0 < 4)
			{
				func_115("HACK_DRONE_DIS", -1);
				iVar0++;
				func_114(22045, iVar0, -1, 1);
				SET_BIT(&(Global_1676879.f_3), 15);
			}
		}
	}
}

var func_114(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_96();
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

void func_115(char* sParam0, int iParam1)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

int func_116(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_96();
	}
	iVar0 = 0;
	iVar1 = func_118(iParam0, iParam1);
	iVar2 = func_117(iParam0);
	if (0 != iVar1)
	{
		if (!STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_117(int iParam0)
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

int func_118(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_96();
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

bool func_119()
{
	return IS_BIT_SET(Global_1687880.f_2, 1);
}

void func_120(float fParam0)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(Local_117.f_132, "ATTENUATE_SOUND_WAVE");
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam0);
	END_SCALEFORM_MOVIE_METHOD();
}

void func_121(int iParam0)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(Local_117.f_132, "SET_HEADING");
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam0);
	END_SCALEFORM_MOVIE_METHOD();
}

void func_122()
{
	if (func_9())
	{
		if (IS_BIT_SET(Local_117.f_5, 11) && !Local_117.f_118)
		{
			func_123(1);
		}
		else
		{
			func_123(0);
		}
	}
	else if (IS_BIT_SET(Local_117.f_5, 11) || IS_BIT_SET(Local_117.f_5, 23))
	{
		func_123(1);
	}
	else
	{
		func_123(0);
	}
}

void func_123(bool bParam0)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(Local_117.f_132, "SET_RETICLE_ON_TARGET");
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(bParam0);
	END_SCALEFORM_MOVIE_METHOD();
}

void func_124()
{
	if (IS_BIT_SET(Local_117.f_5, 4) || (IS_BIT_SET(Local_117.f_5, 3) && func_9()))
	{
		if (Local_117.f_17 == 100)
		{
			func_125(1);
		}
		else if (Local_117.f_17 != 0 && Local_117.f_17 != 100)
		{
			func_125(2);
		}
	}
	else
	{
		func_125(0);
	}
}

void func_125(int iParam0)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(Local_117.f_132, "SET_RETICLE_STATE");
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam0);
	END_SCALEFORM_MOVIE_METHOD();
}

void func_126()
{
	switch (Local_117.f_24)
	{
		case 0:
			func_127(0);
			break;
		
		case 1:
			func_127(2);
			break;
		
		case 2:
			func_127(4);
			break;
	}
}

void func_127(int iParam0)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(Local_117.f_132, "SET_ZOOM");
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam0);
	END_SCALEFORM_MOVIE_METHOD();
}

void func_128(int iParam0, char* sParam1)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(Local_117.f_132, "SET_ZOOM_LABEL");
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam0);
	func_92(sParam1);
	END_SCALEFORM_MOVIE_METHOD();
}

void func_129(int iParam0)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(Local_117.f_132, "SET_BOOST_PERCENTAGE");
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam0);
	END_SCALEFORM_MOVIE_METHOD();
}

void func_130(int iParam0)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(Local_117.f_132, "SET_TRANQUILIZE_PERCENTAGE");
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam0);
	END_SCALEFORM_MOVIE_METHOD();
}

void func_131(int iParam0)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(Local_117.f_132, "SET_DETONATE_PERCENTAGE");
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam0);
	END_SCALEFORM_MOVIE_METHOD();
}

void func_132(int iParam0)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(Local_117.f_132, "SET_EMP_PERCENTAGE");
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam0);
	END_SCALEFORM_MOVIE_METHOD();
}

void func_133(int iParam0)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(Local_117.f_132, "SET_SHOCK_PERCENTAGE");
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam0);
	END_SCALEFORM_MOVIE_METHOD();
}

void func_134(float fParam0)
{
	if (HAS_SOUND_FINISHED(Local_117.f_43))
	{
		Local_117.f_43 = GET_SOUND_ID();
		PLAY_SOUND_FRONTEND(Local_117.f_43, "Scanner_Loop", "DLC_BTL_Target_Pursuit_Sounds", true);
		SET_VARIABLE_ON_SOUND(Local_117.f_43, "signalstrength", fParam0);
	}
	else
	{
		SET_VARIABLE_ON_SOUND(Local_117.f_43, "signalstrength", fParam0);
	}
}

float func_135()
{
	float fVar0;
	
	if (func_140(PLAYER_ID()) == 240)
	{
		if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121) && !NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121), 0))
		{
			fVar0 = func_136(NET_TO_OBJ(Local_117.f_121), func_137(), 1);
			if (fVar0 >= 200f)
			{
				return 0f;
			}
			else if (fVar0 >= 180f && fVar0 < 200f)
			{
				return 0.1f;
			}
			else if (fVar0 >= 160f && fVar0 < 180f)
			{
				return 0.2f;
			}
			else if (fVar0 >= 140f && fVar0 < 160f)
			{
				return 0.3f;
			}
			else if (fVar0 >= 120f && fVar0 < 140f)
			{
				return 0.4f;
			}
			else if (fVar0 >= 100f && fVar0 < 120f)
			{
				return 0.5f;
			}
			else if (fVar0 >= 80f && fVar0 < 100f)
			{
				return 0.6f;
			}
			else if (fVar0 >= 60f && fVar0 < 80f)
			{
				return 0.7f;
			}
			else if (fVar0 >= 40f && fVar0 < 60f)
			{
				return 0.8f;
			}
			else if (fVar0 >= 20f && fVar0 < 40f)
			{
				return 0.9f;
			}
			else if (fVar0 <= 20f)
			{
				return 1f;
			}
		}
	}
	return 0f;
}

float func_136(int iParam0, vector3 vParam1, bool bParam2)
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

Vector3 func_137()
{
	if (func_140(PLAYER_ID()) == 240)
	{
		return Global_1694290;
	}
	return 0f, 0f, 0f;
}

void func_138()
{
	if (!HAS_SOUND_FINISHED(Local_117.f_43))
	{
		STOP_SOUND(Local_117.f_43);
		RELEASE_SOUND_ID(Local_117.f_43);
		Local_117.f_43 = -1;
	}
}

float func_139()
{
	if (Global_1687880.f_8 == 0f)
	{
		return Global_262145.f_24138;
	}
	return Global_1687880.f_8;
}

int func_140(int iParam0)
{
	if (func_141(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_33;
	}
	return -1;
}

int func_141(int iParam0, int iParam1)
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 || (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_142()
{
	return IS_BIT_SET(Global_1687880.f_2, 6);
}

int func_143()
{
	if (func_142())
	{
		if (IS_VALID_INTERIOR(Global_1687880.f_24))
		{
			return 0;
		}
	}
	return 1;
}

void func_144(char* sParam0, bool bParam1)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(Local_117.f_132, sParam0);
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(bParam1);
	END_SCALEFORM_MOVIE_METHOD();
}

int func_145(bool bParam0)
{
	if (func_119())
	{
		if (bParam0)
		{
			if (IS_BIT_SET(Local_117.f_5, 4))
			{
				return 1;
			}
		}
	}
	if (func_142())
	{
		return 1;
	}
	return 0;
}

void func_146()
{
	int iVar0;
	int iVar1;
	
	if (func_60())
	{
		return;
	}
	if (!IS_BIT_SET(Local_117.f_5, 16))
	{
		if (func_106(0, -1, 0))
		{
			func_105(-1);
			func_104(21, "DRONE_MOVE", -1);
			func_104(20, "DRONE_POSITION", -1);
			if (!_IS_INPUT_DISABLED(0))
			{
				func_103(210, "CELL_284", -1, 0);
				if ((!func_29() && !func_9()) && func_143())
				{
					func_103(209, "BOOST_DRONE_E", -1, 0);
				}
				func_103(208, "MOVE_DRONE_UP", -1, 0);
				func_103(207, "MOVE_DRONE_DO", -1, 0);
			}
			else
			{
				func_104(29, "CELL_284", -1);
				if ((!func_29() && !func_9()) && func_143())
				{
					func_103(203, "BOOST_DRONE_E", -1, 0);
				}
				func_103(209, "MOVE_DRONE_UP", -1, 0);
				func_103(210, "MOVE_DRONE_DO", -1, 0);
			}
			if (!func_29())
			{
				iVar0 = 206;
				if (_IS_INPUT_DISABLED(0))
				{
					iVar0 = 237;
				}
				if (func_9())
				{
					func_103(iVar0, "MOVE_DRONE_EM", -1, 0);
				}
				else
				{
					func_103(iVar0, "MOVE_DRONE_ST", -1, 0);
				}
				iVar1 = 205;
				if (_IS_INPUT_DISABLED(0))
				{
					iVar1 = 238;
				}
				if (!func_145(0))
				{
					func_103(iVar1, "MOVE_DRONE_EX", -1, 0);
				}
				else if (func_153())
				{
					func_103(iVar1, "MOVE_DRONE_TRG", -1, 0);
				}
			}
			if (!func_9())
			{
				if ((((func_152(0) || func_152(1)) || func_151()) || _IS_RECORDING()) || func_147(_IS_RECORDING()))
				{
				}
				else
				{
					func_103(201, "DRONE_PHOTO", -1, 0);
				}
			}
			func_103(80, "MOVE_DRONE_RE", -1, 0);
			SET_BIT(&(Local_117.f_5), 16);
		}
	}
	else
	{
		func_91(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (_IS_INPUT_DISABLED(0))
	{
		if (!IS_BIT_SET(Local_117.f_5, 17))
		{
			SET_BIT(&(Local_117.f_5), 17);
			CLEAR_BIT(&(Local_117.f_5), 16);
		}
	}
	else if (IS_BIT_SET(Local_117.f_5, 17))
	{
		CLEAR_BIT(&(Local_117.f_5), 17);
		CLEAR_BIT(&(Local_117.f_5), 16);
	}
}

int func_147(int iParam0)
{
	if (func_150(func_140(iParam0)))
	{
		if (func_149() != func_16())
		{
			if (func_148() == func_149())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_148()
{
	return Global_1628955[PLAYER_ID() /*614*/].f_11.f_35;
}

int func_149()
{
	return Global_1628955[PLAYER_ID() /*614*/].f_11;
}

int func_150(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
			return 1;
		
		default:
	}
	return 0;
}

var func_151()
{
	return Global_22211.f_135;
}

bool func_152(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

int func_153()
{
	if (func_154() <= 0)
	{
		return 0;
	}
	if (func_142())
	{
		return 1;
	}
	return 0;
}

int func_154()
{
	return Global_1687880.f_6;
}

bool func_155()
{
	return IS_BIT_SET(Global_1687880, 7);
}

void func_156()
{
	int iVar0;
	
	if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121) && !NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121), 0))
	{
		if (NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_117.f_121))
		{
			if ((DOES_CAM_EXIST(Local_117.f_131) && DOES_CAM_EXIST(Local_117.f_131)) && !func_60())
			{
				iVar0 = 80;
				if (func_27())
				{
					iVar0 = 75;
				}
				if (IS_CONTROL_JUST_PRESSED(2, iVar0) || IS_CONTROL_JUST_PRESSED(2, iVar0))
				{
					if (!IS_BIT_SET(Local_117.f_5, 7))
					{
						SET_BIT(&(Local_117.f_5), 7);
					}
				}
			}
		}
	}
}

void func_157()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((func_163() || !func_147(PLAYER_ID())) || !PLAYER_ID())
	{
		return;
	}
	iVar0 = func_162(1);
	func_161(iVar0);
	iVar1 = func_162(0);
	iVar2 = GET_CLOSEST_OBJECT_OF_TYPE(Local_117.f_103, 2f, iVar1, 0, 0, 0);
	if (DOES_ENTITY_EXIST(iVar2) && iVar2 != Local_117.f_124)
	{
		if (HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iVar2, joaat("weapon_stungun"), 0) || HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iVar2) == 999)
		{
			if (!IS_BIT_SET(Local_117.f_5, 26))
			{
				func_160(func_149(), 1);
				SET_BIT(&(Local_117.f_5), 26);
			}
		}
	}
	if (DOES_ENTITY_EXIST(Local_117.f_124))
	{
		if (HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_117.f_124, joaat("weapon_stungun"), 0) || HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_117.f_124) == 999)
		{
			if (!IS_BIT_SET(Local_117.f_5, 26))
			{
				func_160(func_149(), 1);
				SET_BIT(&(Local_117.f_5), 26);
			}
		}
	}
	if (IS_BIT_SET(Local_117.f_5, 26))
	{
		iVar3 = GET_CLOSEST_OBJECT_OF_TYPE(Local_117.f_103, 2f, iVar0, 0, 0, 0);
		if (DOES_ENTITY_EXIST(iVar3))
		{
			if (DOES_ENTITY_EXIST(Local_117.f_124))
			{
				SET_ENTITY_VISIBLE(Local_117.f_124, false, 0);
			}
			if (DOES_ENTITY_EXIST(iVar2))
			{
				SET_ENTITY_VISIBLE(iVar2, false, 0);
			}
			func_158(1);
		}
	}
}

void func_158(bool bParam0)
{
	if (bParam0)
	{
		if (!func_159())
		{
			SET_BIT(&Global_1687880, 1);
		}
	}
	else if (func_159())
	{
		CLEAR_BIT(&Global_1687880, 1);
	}
}

bool func_159()
{
	return IS_BIT_SET(Global_1687880, 1);
}

void func_160(int iParam0, int iParam1)
{
	vector3 vVar0;
	int iVar1;
	
	vVar0.x = 1034081830;
	vVar0.y = PLAYER_ID();
	vVar0.z = iParam1;
	iVar1 = 0;
	if (iParam0 != func_16())
	{
		SET_BIT(&iVar1, iParam0);
	}
	if (!iVar1 == 0)
	{
		TRIGGER_SCRIPT_EVENT(1, &vVar0, 3, iVar1);
	}
}

bool func_161(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	REQUEST_MODEL(iParam0);
	return HAS_MODEL_LOADED(iParam0);
}

int func_162(bool bParam0)
{
	if (!bParam0)
	{
		if (Global_1687880.f_19 != 0)
		{
			return Global_1687880.f_19;
		}
		else
		{
			return -2143187667;
		}
	}
	else
	{
		return -1184972439;
	}
	return 0;
}

bool func_163()
{
	return IS_BIT_SET(Global_1687880, 14);
}

void func_164()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if ((IS_BIT_SET(Local_117.f_5, 1) || func_176()) || func_175())
	{
		Local_117.f_17 = 0;
		Local_117.f_18 = 0;
		if (!IS_BIT_SET(Local_117.f_5, 10))
		{
			SET_BIT(&(Local_117.f_5), 10);
		}
		return;
	}
	if (!func_175())
	{
		if (IS_BIT_SET(Local_117.f_5, 10))
		{
			Local_117.f_17 = 100;
			CLEAR_BIT(&(Local_117.f_5), 10);
		}
	}
	if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121) && !NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121), 0))
	{
		if (NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_117.f_121))
		{
			if ((DOES_CAM_EXIST(Local_117.f_131) && DOES_CAM_EXIST(Local_117.f_131)) && !DOES_CAM_EXIST(Local_117.f_5, 2))
			{
				if ((!IS_BIT_SET(Local_117.f_5, 4) && !IS_BIT_SET(Local_117.f_5, 3)) && !Local_117.f_118)
				{
					iVar0 = 206;
					if (_IS_INPUT_DISABLED(0))
					{
						iVar0 = 237;
					}
					if ((((IS_CONTROL_JUST_RELEASED(2, iVar0) || IS_CONTROL_JUST_RELEASED(2, iVar0)) && !IS_CONTROL_JUST_RELEASED(Local_117.f_5, 5)) && !IS_CONTROL_JUST_RELEASED(Local_117.f_5, 24)) && !func_60())
					{
						SET_BIT(&(Local_117.f_5), 24);
						if (IS_BIT_SET(Local_117.f_5, 11) || IS_BIT_SET(Local_117.f_5, 23))
						{
							Local_117.f_26++;
						}
					}
					if (func_9())
					{
						func_171();
					}
					else
					{
						func_170();
					}
				}
				else if (func_10(&(Local_117.f_178)))
				{
					if (func_9())
					{
						iVar1 = Global_262145.f_24730;
					}
					else
					{
						iVar1 = Global_262145.f_24130;
					}
					if (func_7(&(Local_117.f_178), iVar1, 0))
					{
						func_6(&(Local_117.f_178));
						Local_117.f_17 = 100;
						if (Local_117.f_31 != -1)
						{
							STOP_SOUND(Local_117.f_31);
							RELEASE_SOUND_ID(Local_117.f_31);
							Local_117.f_31 = -1;
						}
						if (HAS_SOUND_FINISHED(Local_117.f_34))
						{
							STOP_SOUND(Local_117.f_34);
							RELEASE_SOUND_ID(Local_117.f_34);
							Local_117.f_34 = -1;
						}
						CLEAR_BIT(&(Local_117.f_5), 4);
						CLEAR_BIT(&(Local_117.f_5), 3);
						CLEAR_BIT(&(Local_117.f_5), 24);
						Local_117.f_118 = 0;
					}
					else
					{
						iVar2 = (100 * ABSI(ABSI(ABSI(), Local_117.f_178)));
						Local_117.f_17 = (iVar2 / iVar1);
						if (!func_9())
						{
							if (HAS_SOUND_FINISHED(Local_117.f_31))
							{
								Local_117.f_31 = GET_SOUND_ID();
								PLAY_SOUND_FRONTEND(Local_117.f_31, "HUD_Shock_Recharge", Local_117.f_119, true);
								SET_VARIABLE_ON_SOUND(Local_117.f_31, "Time", (IntToFloat(iVar1) / 1000f));
							}
						}
					}
				}
				func_168();
				func_165();
			}
		}
		else
		{
			NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_117.f_121);
		}
	}
}

void func_165()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	int iVar6;
	
	if (func_153())
	{
		if (_IS_INPUT_DISABLED(0))
		{
			iVar0 = 238;
		}
		else
		{
			iVar0 = 205;
		}
		if (!IS_BIT_SET(Local_117.f_6, 6))
		{
			if (!IS_BIT_SET(Local_117.f_6, 5))
			{
				if (IS_CONTROL_JUST_RELEASED(2, iVar0) || IS_CONTROL_JUST_RELEASED(2, iVar0))
				{
					SET_BIT(&(Local_117.f_6), 5);
				}
			}
			else if (Local_117.f_12 == 1)
			{
				if (Local_117.f_173 == 2)
				{
					vVar1 = { _GET_GAMEPLAY_CAM_COORDS() };
					vVar2 = { _GET_GAMEPLAY_CAM_ROT(2) };
					vVar3 = { (-sin(vVar2.z) * cos(vVar2.x)), (cos(vVar2.z) * cos(vVar2.x)), sin(vVar2.x) };
					vVar4 = { 10f, 10f, 10f };
					vVar5 = { vVar1 + vVar3 * vVar4 };
					iVar6 = Global_262145.f_24131;
					if (IS_BIT_SET(Local_117.f_5, 23))
					{
						iVar6 = Global_262145.f_24132;
					}
					_SHOOT_SINGLE_BULLET_BETWEEN_COORDS_WITH_EXTRA_PARAMS(Local_117.f_112 + Vector(0f, 0f, 0f), vVar5, iVar6, 1, 849905853, _SHOOT_SINGLE_BULLET_BETWEEN_COORDS_WITH_EXTRA_PARAMS(), 1, 1, -1f, _SHOOT_SINGLE_BULLET_BETWEEN_COORDS_WITH_EXTRA_PARAMS(Local_117.f_121), 0, 0, 0, 1, 0, false);
					Local_117.f_23 = 100;
					SET_PAD_SHAKE(0, 300, 150);
					if (HAS_SOUND_FINISHED(Local_117.f_80))
					{
						Local_117.f_80 = GET_SOUND_ID();
						PLAY_SOUND_FROM_ENTITY(Local_117.f_80, "Remote_Perspective_Fire", PLAY_SOUND_FROM_ENTITY(Local_117.f_121), "DLC_H3_Drone_Tranq_Weapon_Sounds", true, 0);
					}
					PLAY_SOUND_FRONTEND(-1, "Pilot_Perspective_Fire", "DLC_H3_Drone_Tranq_Weapon_Sounds", true);
					if (IS_BIT_SET(Local_117.f_5, 11) || IS_BIT_SET(Local_117.f_5, 23))
					{
						Local_117.f_28++;
					}
					func_167((func_154() - 1));
					if (func_154() <= 0)
					{
						Local_117.f_23 = 0;
						CLEAR_BIT(&(Local_117.f_5), 16);
					}
					SET_BIT(&(Local_117.f_6), 6);
					func_8(&(Local_117.f_186), 0, 0);
				}
			}
		}
		else
		{
			func_166();
		}
	}
}

void func_166()
{
	int iVar0;
	int iVar1;
	
	if (func_154() > 0)
	{
		if (func_10(&(Local_117.f_186)))
		{
			iVar0 = Global_262145.f_24130;
			if (func_7(&(Local_117.f_186), iVar0, 0))
			{
				CLEAR_BIT(&(Local_117.f_6), 6);
				CLEAR_BIT(&(Local_117.f_6), 5);
				func_6(&(Local_117.f_186));
				Local_117.f_23 = 100;
				if (HAS_SOUND_FINISHED(Local_117.f_34))
				{
					STOP_SOUND(Local_117.f_34);
					RELEASE_SOUND_ID(Local_117.f_34);
					Local_117.f_34 = -1;
				}
			}
			else
			{
				iVar1 = (100 * ABSI(ABSI(ABSI(), Local_117.f_186)));
				Local_117.f_23 = (iVar1 / iVar0);
			}
		}
	}
}

void func_167(int iParam0)
{
	if (Global_1687880.f_6 != iParam0)
	{
		Global_1687880.f_6 = iParam0;
	}
}

void func_168()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	Local_117.f_210.f_2 = 2;
	if (_IS_INPUT_DISABLED(0))
	{
		Local_117.f_210.f_3 = 238;
	}
	else
	{
		Local_117.f_210.f_3 = 205;
	}
	iVar0 = Global_262145.f_24133;
	if (!IS_BIT_SET(Local_117.f_5, 31))
	{
		Local_117.f_21 = 100;
	}
	if (func_9())
	{
		iVar0 = (iVar0 / 2);
		if (IS_BIT_SET(Local_117.f_6, 1))
		{
			Local_117.f_20 = ((Local_117.f_22 * (Global_262145.f_24133 / 2)) / 100);
			Local_117.f_20 = ((Global_262145.f_24133 / 2) - Local_117.f_20);
			CLEAR_BIT(&(Local_117.f_6), 1);
		}
		if (IS_BIT_SET(Local_117.f_5, 31))
		{
			iVar0 = Local_117.f_20;
		}
	}
	else
	{
		Local_117.f_21 = 100;
	}
	if (!func_145(1))
	{
		if (!func_60() && func_169(&(Local_117.f_210), 1, iVar0))
		{
			if (HAS_SOUND_FINISHED(Local_117.f_35))
			{
				Local_117.f_35 = GET_SOUND_ID();
				PLAY_SOUND_FROM_ENTITY(Local_117.f_35, "Destroyed", PLAY_SOUND_FROM_ENTITY(Local_117.f_121), Local_117.f_119, true, 0);
			}
			0x15CFA549788D35EF();
			iVar1 = 0;
			if (func_9())
			{
				iVar1 = 69;
			}
			ADD_OWNED_EXPLOSION(ADD_OWNED_EXPLOSION(), Local_117.f_112, iVar1, 0.5f, 1, 0, 1065353216);
			if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) < 1)
			{
				SET_PLAYER_WANTED_LEVEL(SET_PLAYER_WANTED_LEVEL(), 0, 0);
				SET_PLAYER_WANTED_LEVEL_NOW(SET_PLAYER_WANTED_LEVEL_NOW(), 0);
			}
			SET_PAD_SHAKE(0, 300, 200);
			SET_BIT(&(Local_117.f_5), 2);
		}
	}
	if (func_10(&(Local_117.f_210)))
	{
		SET_PAD_SHAKE(0, 300, 20);
		if (!IS_BIT_SET(Local_117.f_5, 5))
		{
			SET_BIT(&(Local_117.f_5), 5);
		}
		func_6(&(Local_117.f_202));
		if (!func_7(&(Local_117.f_210), iVar0, 0))
		{
			iVar2 = (Local_117.f_21 * ABSI(ABSI(ABSI(), Local_117.f_210)));
			if (!func_9())
			{
				Local_117.f_18 = (iVar2 / iVar0);
			}
			else if (!IS_BIT_SET(Local_117.f_5, 31))
			{
				Local_117.f_18 = (iVar2 / iVar0);
			}
			else
			{
				Local_117.f_18 = (Local_117.f_22 + (iVar2 / iVar0));
			}
			if (HAS_SOUND_FINISHED(Local_117.f_32))
			{
				Local_117.f_32 = GET_SOUND_ID();
				PLAY_SOUND_FRONTEND(Local_117.f_32, "HUD_Detonate_Charge", Local_117.f_119, true);
			}
		}
	}
	else if (IS_BIT_SET(Local_117.f_5, 5))
	{
		CLEAR_BIT(&(Local_117.f_5), 5);
		if (!func_9())
		{
			Local_117.f_18 = 0;
		}
		else
		{
			SET_BIT(&(Local_117.f_5), 31);
			Local_117.f_21 = (100 - Local_117.f_18);
			Local_117.f_20 = (iVar0 - ABSI(ABSI(ABSI(), Local_117.f_210)));
			Local_117.f_22 = Local_117.f_18;
			func_6(&(Local_117.f_202));
		}
		if (Local_117.f_32 != -1)
		{
			STOP_SOUND(Local_117.f_32);
			RELEASE_SOUND_ID(Local_117.f_32);
			Local_117.f_32 = -1;
		}
	}
	else if (func_9())
	{
		if (Local_117.f_18 > 0)
		{
			if (Local_117.f_18 <= 2)
			{
				Local_117.f_18 = 0;
			}
			if (!func_10(&(Local_117.f_202)))
			{
				func_8(&(Local_117.f_202), 0, 0);
			}
			else
			{
				iVar3 = Global_262145.f_24133;
				if (!func_7(&(Local_117.f_202), iVar3, 0))
				{
					fVar4 = ((100f - IntToFloat(Local_117.f_21)) / to_float((iVar3 / ABSI(ABSI(ABSI(), Local_117.f_202)))));
					Local_117.f_18 = (Local_117.f_18 - round(fVar4));
					Local_117.f_22 = Local_117.f_18;
					Local_117.f_21 = (100 - Local_117.f_18);
					SET_BIT(&(Local_117.f_6), 1);
				}
				else
				{
					Local_117.f_18 = 0;
				}
			}
		}
		else
		{
			func_6(&(Local_117.f_210));
			CLEAR_BIT(&(Local_117.f_5), 31);
			CLEAR_BIT(&(Local_117.f_6), 1);
		}
	}
}

int func_169(var uParam0, int iParam1, int iParam2)
{
	if (IS_CONTROL_PRESSED(uParam0->f_2, uParam0->f_3) || (IS_CONTROL_PRESSED(uParam0->f_2, uParam0->f_3) && iParam1))
	{
		if (!func_10(uParam0))
		{
			func_8(uParam0, 0, 0);
		}
		else if (func_7(uParam0, iParam2, 0))
		{
			func_6(uParam0);
			return 1;
		}
	}
	else
	{
		func_6(uParam0);
	}
	return 0;
}

void func_170()
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	int iVar5;
	
	if (IS_BIT_SET(Local_117.f_5, 24))
	{
		if (Local_117.f_12 == 1)
		{
			if (Local_117.f_173 == 2)
			{
				vVar0 = { _GET_GAMEPLAY_CAM_COORDS() };
				vVar1 = { _GET_GAMEPLAY_CAM_ROT(2) };
				vVar2 = { (-sin(vVar1.z) * cos(vVar1.x)), (cos(vVar1.z) * cos(vVar1.x)), sin(vVar1.x) };
				vVar3 = { 10f, 10f, 10f };
				vVar4 = { vVar0 + vVar2 * vVar3 };
				iVar5 = Global_262145.f_24131;
				if (IS_BIT_SET(Local_117.f_5, 23))
				{
					iVar5 = Global_262145.f_24132;
				}
				if (func_142())
				{
					iVar5 = 1;
				}
				_SHOOT_SINGLE_BULLET_BETWEEN_COORDS_WITH_EXTRA_PARAMS(Local_117.f_112 + Vector(0f, 0f, 0f), vVar4, iVar5, 1, joaat("weapon_stungun"), _SHOOT_SINGLE_BULLET_BETWEEN_COORDS_WITH_EXTRA_PARAMS(), 1, 1, -1f, _SHOOT_SINGLE_BULLET_BETWEEN_COORDS_WITH_EXTRA_PARAMS(Local_117.f_121), 0, 0, 0, 1, 0, false);
				Local_117.f_17 = 100;
				Local_117.f_18 = 0;
				SET_PAD_SHAKE(0, 300, 150);
				if (HAS_SOUND_FINISHED(Local_117.f_34))
				{
					Local_117.f_34 = GET_SOUND_ID();
					PLAY_SOUND_FROM_ENTITY(Local_117.f_34, "Shock_Fire", PLAY_SOUND_FROM_ENTITY(Local_117.f_121), Local_117.f_119, true, 0);
				}
				if (Local_117.f_32 != -1)
				{
					STOP_SOUND(Local_117.f_32);
					RELEASE_SOUND_ID(Local_117.f_32);
					Local_117.f_32 = -1;
				}
				SET_BIT(&(Local_117.f_5), 4);
				func_8(&(Local_117.f_178), 0, 0);
			}
		}
	}
}

void func_171()
{
	if ((IS_BIT_SET(Local_117.f_5, 24) && !IS_BIT_SET(Local_117.f_5, 3)) && !Local_117.f_118)
	{
		if (HAS_NAMED_PTFX_ASSET_LOADED("scr_xs_dr"))
		{
			if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121))
			{
				USE_PARTICLE_FX_ASSET("scr_xs_dr");
				_START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_xs_dr_emp", _START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY(Local_117.f_121), 0f, -0.5f, 0f, 0f, 0f, 0f, 3f, 0, 0, 0);
			}
		}
		Local_117.f_17 = 100;
		SET_PAD_SHAKE(0, 300, 150);
		if (HAS_SOUND_FINISHED(Local_117.f_34))
		{
			Local_117.f_34 = GET_SOUND_ID();
			PLAY_SOUND_FROM_ENTITY(Local_117.f_34, "Shock_Fire", PLAY_SOUND_FROM_ENTITY(Local_117.f_121), Local_117.f_119, true, 0);
		}
		if (Local_117.f_32 != -1)
		{
			STOP_SOUND(Local_117.f_32);
			RELEASE_SOUND_ID(Local_117.f_32);
			Local_117.f_32 = -1;
		}
		func_172(GET_ENTITY_COORDS(GET_ENTITY_COORDS(Local_117.f_121), true), 0);
		SET_BIT(&(Local_117.f_5), 3);
		Local_117.f_118 = 1;
		func_8(&(Local_117.f_178), 0, 0);
	}
}

void func_172(vector3 vParam0, bool bParam1)
{
	struct<6> Var0;
	
	Var0 = -1949038199;
	Var0.f_1 = PLAYER_ID();
	Var0.f_2 = { vParam0 };
	Var0.f_5 = bParam1;
	if (!bParam1)
	{
		if (!func_174(1, 1) == 0)
		{
			TRIGGER_SCRIPT_EVENT(1, &Var0, 6, func_174(1, 1));
		}
	}
	else if (Global_1687880.f_21 != func_16())
	{
		TRIGGER_SCRIPT_EVENT(1, &Var0, 6, func_173(Global_1687880.f_21));
	}
}

var func_173(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_174(int iParam0, bool bParam1)
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
				else if (!func_94(iVar2, 0))
				{
					SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_175()
{
	return IS_BIT_SET(Global_1687880, 8);
}

int func_176()
{
	if ((NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121) && NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121), 0)) && !NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_5, 2))
	{
		return 1;
	}
	if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121))
	{
		if (func_147(PLAYER_ID()) && PLAYER_ID(Global_2530259, 0))
		{
		}
		else if (func_184())
		{
			if (HAS_ENTITY_COLLIDED_WITH_ANYTHING(HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_117.f_121)))
			{
				Local_117.f_25 = 1;
				return 1;
			}
		}
	}
	if (IS_BIT_SET(Local_117.f_5, 2))
	{
		Local_117.f_25 = 4;
		return 1;
	}
	if (IS_BIT_SET(Local_117.f_5, 9))
	{
		Local_117.f_25 = 1;
		return 1;
	}
	if (IS_BIT_SET(Local_117.f_5, 7))
	{
		Local_117.f_25 = 0;
		return 1;
	}
	if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121))
	{
		if (IS_ENTITY_IN_WATER(IS_ENTITY_IN_WATER(Local_117.f_121)) || func_183(IS_ENTITY_IN_WATER(Local_117.f_121), 0))
		{
			Local_117.f_25 = 3;
			return 1;
		}
	}
	if (func_181(PLAYER_ID()))
	{
		Local_117.f_25 = 0;
		return 1;
	}
	if (func_119())
	{
		if (Global_1590293 != func_16())
		{
			if (func_37(Global_1590293))
			{
				Local_117.f_25 = 0;
				return 1;
			}
		}
	}
	if (func_180())
	{
		Local_117.f_25 = 1;
		return 1;
	}
	if (func_179(PLAYER_ID()))
	{
		Local_117.f_25 = 0;
		return 1;
	}
	if (func_178())
	{
		Local_117.f_25 = 0;
		return 1;
	}
	if (func_177())
	{
		Local_117.f_25 = 0;
		return 1;
	}
	if (func_19())
	{
		Local_117.f_25 = 0;
		return 1;
	}
	if (func_28())
	{
		Local_117.f_25 = 0;
		return 1;
	}
	if (func_18())
	{
		if (IS_PED_DEAD_OR_DYING(IS_PED_DEAD_OR_DYING(), 1))
		{
			Local_117.f_25 = 6;
			return 1;
		}
		if (IS_PED_INJURED(IS_PED_INJURED()) || IS_PED_INJURED(IS_PED_INJURED()))
		{
			Local_117.f_25 = 6;
			return 1;
		}
		if (func_136(PLAYER_PED_ID(), Local_117.f_115, 1) > 2f)
		{
			Local_117.f_25 = 7;
			return 1;
		}
	}
	return 0;
}

bool func_177()
{
	return Global_96008;
}

bool func_178()
{
	return IS_BIT_SET(Global_1687880, 9);
}

int func_179(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (Global_1628955[iVar0 /*614*/].f_8)
		{
			return 1;
		}
	}
	return 0;
}

int func_180()
{
	vector3 vVar0;
	
	if (Local_117.f_16 == -1945204837)
	{
		if (func_25(NET_TO_OBJ(Local_117.f_121)))
		{
			if (GET_ROOM_KEY_FROM_ENTITY(GET_ROOM_KEY_FROM_ENTITY(Local_117.f_121)) == -25693127)
			{
				vVar0 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(Local_117.f_121), true) };
				if (vVar0.z >= 47f)
				{
					return 1;
				}
			}
		}
	}
	if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121))
	{
		if (func_25(NET_TO_OBJ(Local_117.f_121)))
		{
			if (IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(Local_117.f_121), -1071.258f, -242.5484f, 48.02133f, -1069.456f, -245.9234f, 43.87983f, 3f, 0, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_181(int iParam0)
{
	if (iParam0 != func_16() && func_15(iParam0, 1, 1))
	{
		if (func_48(iParam0) && !func_182(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_182(int iParam0)
{
	if (iParam0 != func_16() && func_15(iParam0, 1, 1))
	{
		return IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309, 4);
	}
	return 0;
}

int func_183(int iParam0, int iParam1)
{
	if (DOES_ENTITY_EXIST(iParam0))
	{
		if (!IS_ENTITY_DEAD(iParam0, 0) || iParam1)
		{
			if (IS_ENTITY_IN_WATER(iParam0))
			{
				if (GET_ENTITY_SUBMERGED_LEVEL(iParam0) >= 0.7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_184()
{
	return IS_BIT_SET(Global_1687880, 15);
}

void func_185()
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	int iVar6;
	var uVar7;
	vector3 vVar8;
	int iVar9;
	bool bVar10;
	
	if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121) && !NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121), 0))
	{
		if (NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_117.f_121))
		{
			vVar0 = { Local_117.f_112 };
			switch (Local_117.f_12)
			{
				case 0:
					vVar1 = { _GET_GAMEPLAY_CAM_COORDS() };
					vVar2 = { _GET_GAMEPLAY_CAM_ROT(2) };
					vVar3 = { (-sin(vVar2.z) * cos(vVar2.x)), (cos(vVar2.z) * cos(vVar2.x)), sin(vVar2.x) };
					vVar4 = { 10f, 10f, 10f };
					if (func_9())
					{
						vVar4 = { Global_262145.f_24731, Global_262145.f_24731, Global_262145.f_24731 };
					}
					vVar5 = { vVar1 + vVar3 * vVar4 };
					vVar0 = { _GET_OBJECT_OFFSET_FROM_COORDS(Local_117.f_112, _GET_OBJECT_OFFSET_FROM_COORDS(_GET_OBJECT_OFFSET_FROM_COORDS(Local_117.f_121)), 0f, -0.1f, 0f) };
					Local_117.f_129 = START_SHAPE_TEST_LOS_PROBE(vVar0, vVar5, 123, START_SHAPE_TEST_LOS_PROBE(Local_117.f_121), 7);
					if (Local_117.f_129 != 0)
					{
						Local_117.f_12 = 1;
					}
					break;
				
				case 1:
					Local_117.f_173 = GET_SHAPE_TEST_RESULT(Local_117.f_129, &iVar6, &vVar8, &uVar7, &iVar9);
					if (Local_117.f_173 == 2)
					{
						if (iVar6 == 0)
						{
							Local_117.f_13 = 1;
							vVar8 = { 0f, 0f, 0f };
							if (IS_BIT_SET(Local_117.f_5, 11) && !func_9())
							{
								CLEAR_BIT(&(Local_117.f_5), 11);
							}
							if (IS_BIT_SET(Local_117.f_5, 23))
							{
								CLEAR_BIT(&(Local_117.f_5), 23);
							}
							func_192();
						}
						else
						{
							Local_117.f_13 = 2;
							if (DOES_ENTITY_EXIST(iVar9))
							{
								if (IS_ENTITY_A_PED(iVar9))
								{
									if (!IS_ENTITY_DEAD(iVar9, 0))
									{
										if (IS_PED_A_PLAYER(IS_PED_A_PLAYER(iVar9)))
										{
											if (func_190(PLAYER_ID(), PLAYER_ID(PLAYER_ID(iVar9))))
											{
												bVar10 = true;
											}
										}
										else
										{
											if (!IS_BIT_SET(Local_117.f_5, 23))
											{
												SET_BIT(&(Local_117.f_5), 23);
												if (IS_BIT_SET(Local_117.f_5, 11) && !func_9())
												{
													CLEAR_BIT(&(Local_117.f_5), 11);
												}
											}
											if (!func_72(PLAYER_ID()) && !func_69(PLAYER_ID(), 236))
											{
												if ((func_189(GET_PED_INDEX_FROM_ENTITY_INDEX(iVar9)) || func_188(GET_PED_INDEX_FROM_ENTITY_INDEX(iVar9))) || func_187(GET_PED_INDEX_FROM_ENTITY_INDEX(iVar9)))
												{
													func_68(Global_1575008);
													func_186(&(Local_117.f_188), 0, 0);
												}
												else
												{
													func_192();
												}
											}
										}
										if ((((!IS_BIT_SET(Local_117.f_5, 11) && !bVar10) && func_25(Global_1687880.f_23)) && IS_BIT_SET(Global_1687880.f_23, iVar9, 511)) && (IS_BIT_SET(IS_BIT_SET(iVar9)) && IS_BIT_SET() != IS_BIT_SET(iVar9)))
										{
											SET_BIT(&(Local_117.f_5), 11);
											if (IS_BIT_SET(Local_117.f_5, 23))
											{
												CLEAR_BIT(&(Local_117.f_5), 23);
											}
										}
									}
								}
								else
								{
									if (!func_9())
									{
										if (IS_BIT_SET(Local_117.f_5, 11))
										{
											CLEAR_BIT(&(Local_117.f_5), 11);
										}
									}
									if (IS_BIT_SET(Local_117.f_5, 23))
									{
										CLEAR_BIT(&(Local_117.f_5), 23);
									}
									func_192();
								}
							}
							else
							{
								func_192();
							}
							Local_117.f_129 = 0;
							Local_117.f_12 = 0;
						}
					}
					else if (Local_117.f_173 == 0)
					{
						Local_117.f_12 = 0;
					}
					break;
			}
		}
		else
		{
			NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_117.f_121);
		}
	}
}

void func_186(var uParam0, bool bParam1, bool bParam2)
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

int func_187(int iParam0)
{
	if (DOES_ENTITY_EXIST(iParam0))
	{
		if (GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0) == -183807561)
		{
			return 1;
		}
	}
	return 0;
}

int func_188(int iParam0)
{
	if (DOES_ENTITY_EXIST(iParam0))
	{
		if ((((((((((((GET_PED_TYPE(iParam0) == 7 || GET_PED_TYPE(iParam0) == 8) || GET_PED_TYPE(iParam0) == 9) || GET_PED_TYPE(iParam0) == 10) || GET_PED_TYPE(iParam0) == 11) || GET_PED_TYPE(iParam0) == 12) || GET_PED_TYPE(iParam0) == 13) || GET_PED_TYPE(iParam0) == 14) || GET_PED_TYPE(iParam0) == 15) || GET_PED_TYPE(iParam0) == 16) || GET_PED_TYPE(iParam0) == 17) || GET_PED_TYPE(iParam0) == 18) || GET_PED_TYPE(iParam0) == 19)
		{
			return 1;
		}
	}
	return 0;
}

int func_189(int iParam0)
{
	if (DOES_ENTITY_EXIST(iParam0))
	{
		if ((((GET_PED_TYPE(iParam0) == 6 || GET_PED_TYPE(iParam0) == 29) || GET_PED_TYPE(iParam0) == 27) || GET_PED_TYPE(iParam0) == -472287501) || GET_PED_TYPE(iParam0) == -1533126372)
		{
			return 1;
		}
	}
	return 0;
}

int func_190(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_191(iParam0);
	if (!iVar0 == func_16())
	{
		if (iVar0 == func_191(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_191(int iParam0)
{
	if (iParam0 != func_16())
	{
		return Global_1628955[iParam0 /*614*/].f_11;
	}
	return func_16();
}

void func_192()
{
	if (func_10(&(Local_117.f_188)))
	{
		if (func_7(&(Local_117.f_188), 60000, 0))
		{
			func_6(&(Local_117.f_188));
			if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) <= 0)
			{
				func_68(Global_1574997);
			}
		}
	}
}

void func_193()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar7;
	int iVar8;
	var uVar9;
	vector3 vVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if ((func_27() || func_9()) || func_29())
	{
		if (!IS_BIT_SET(Local_117.f_5, 29))
		{
			return;
		}
	}
	if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121) && !NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121), 0))
	{
		if (0xD7B6C73CAD419BCF(0xD7B6C73CAD419BCF(Local_117.f_121)))
		{
			return;
		}
		if (NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_117.f_121))
		{
			switch (Local_117.f_10)
			{
				case 0:
					if ((func_9() || func_29()) || func_27())
					{
						fVar5 = 0.3f;
					}
					else
					{
						fVar5 = (func_196(Local_117.f_169) * 1.5f);
					}
					if (func_27())
					{
						vVar6 = { Local_117.f_112 };
						vVar1 = { _GET_GAMEPLAY_CAM_COORDS() };
						vVar2 = { _GET_GAMEPLAY_CAM_ROT(2) };
						vVar3 = { (-sin(vVar2.z) * cos(vVar2.x)), (cos(vVar2.z) * cos(vVar2.x)), sin(vVar2.x) };
						vVar4 = { 0.9f, 0.9f, 0.9f };
						vVar7 = { vVar1 + vVar3 * vVar4 };
					}
					else
					{
						vVar6 = { Local_117.f_112 };
						vVar7 = { Local_117.f_112 };
					}
					Local_117.f_128 = START_SHAPE_TEST_CAPSULE(vVar6, vVar7, fVar5, 511, START_SHAPE_TEST_CAPSULE(Local_117.f_121), 4);
					if (Local_117.f_128 != 0)
					{
						Local_117.f_10 = 1;
					}
					break;
				
				case 1:
					iVar12 = GET_SHAPE_TEST_RESULT(Local_117.f_128, &iVar8, &vVar10, &uVar9, &iVar11);
					if (iVar12 == 2)
					{
						if (iVar8 == 0)
						{
							Local_117.f_11 = 1;
							vVar10 = { 0f, 0f, 0f };
						}
						else
						{
							if (DOES_ENTITY_EXIST(iVar11))
							{
								if (IS_ENTITY_A_VEHICLE(iVar11))
								{
									if (!IS_ENTITY_DEAD(iVar11, 0) && IS_ENTITY_DEAD(iVar11) != Local_117.f_169)
									{
										if (GET_ENTITY_SPEED(iVar11) > 0.5f || func_194(GET_ENTITY_SPEED(iVar11)))
										{
											if (!IS_BIT_SET(Local_117.f_5, 9))
											{
												SET_BIT(&(Local_117.f_5), 9);
											}
										}
									}
								}
								else if (IS_ENTITY_A_PED(iVar11))
								{
									if (!IS_ENTITY_DEAD(iVar11, 0))
									{
										if (!IS_PED_A_PLAYER(IS_PED_A_PLAYER(iVar11)))
										{
											if (Local_117.f_27 == 0)
											{
												iVar0 = GET_RANDOM_INT_IN_RANGE(0, 3);
												if (iVar0 == 0)
												{
													iVar13 = 85;
												}
												else if (iVar0 == 1)
												{
													iVar13 = 90;
												}
												else
												{
													iVar13 = 79;
												}
												Local_117.f_27 = ADD_SHOCKING_EVENT_AT_POSITION(iVar13, Local_117.f_112, 5000f);
												func_186(&(Local_117.f_194), 0, 0);
											}
										}
									}
								}
							}
							Local_117.f_11 = 2;
							SET_PAD_SHAKE(0, 300, 50);
							Local_117.f_128 = 0;
							Local_117.f_10 = 0;
						}
					}
					else if (iVar12 == 0)
					{
						Local_117.f_10 = 0;
					}
					break;
			}
			if (Local_117.f_27 != 0)
			{
				if (func_10(&(Local_117.f_194)))
				{
					if (func_7(&(Local_117.f_194), 5000, 0))
					{
						REMOVE_SHOCKING_EVENT(Local_117.f_27);
						func_6(&(Local_117.f_194));
						Local_117.f_27 = 0;
					}
				}
			}
		}
		else
		{
			NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_117.f_121);
		}
	}
}

int func_194(int iParam0)
{
	switch (iParam0)
	{
		case -692292317:
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("skylift"):
		case joaat("taco"):
			return 1;
			break;
	}
	if (func_195(iParam0, 1))
	{
		return 1;
	}
	if (IS_THIS_MODEL_A_HELI(iParam0) || IS_THIS_MODEL_A_HELI(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_195(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14207)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14208)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14206)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14209)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14211)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14210)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_18657)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_18659)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_18663)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_18660)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18667)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_18665)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18670)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1356124575:
			if (Global_262145.f_20613)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -1924433270:
			if (Global_262145.f_20614)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -2061049099:
		case 373261600:
		case 1742022738:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 628003514:
		case 1537277726:
		case 1239571361:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1009171724:
		case -1924800695:
		case -1744505657:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -27326686:
		case -1812949672:
		case -1374500452:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1721676810:
		case 840387324:
		case -715746948:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -688189648:
		case -1375060657:
		case -1293924613:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 668439077:
		case -1694081890:
		case -2042350822:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
	}
	return 0;
}

float func_196(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	
	func_197(iParam0, &vVar0, &vVar1, 1086324736, 1080033280, 1077936128);
	return ABSF((vVar0.z - vVar1.z));
}

void func_197(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (IS_MODEL_VALID(iParam0))
	{
		GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_200(iParam0);
		if (iVar0 != 0)
		{
			func_198(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
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

void func_198(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_199(iParam0, &Global_1315808);
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

void func_199(int iParam0, var uParam1)
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

int func_200(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_201(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_201(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_202()
{
	int iVar0;
	
	if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121))
	{
		if (func_25(NET_TO_OBJ(Local_117.f_121)))
		{
			iVar0 = func_205(NET_TO_OBJ(Local_117.f_121));
			if (iVar0 != -1)
			{
				if (!func_204(&(Global_1573352.f_370), iVar0) && !func_204(&(Global_1628955[PLAYER_ID() /*614*/].f_557), iVar0))
				{
					func_203(1);
				}
			}
		}
	}
}

void func_203(bool bParam0)
{
	if (bParam0)
	{
		if (func_58())
		{
			if (!IS_BIT_SET(Global_1687880, 9))
			{
				SET_BIT(&Global_1687880, 9);
			}
		}
	}
	else if (IS_BIT_SET(Global_1687880, 9))
	{
		CLEAR_BIT(&Global_1687880, 9);
	}
}

bool func_204(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_205(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (DOES_ENTITY_EXIST(iParam0) && !DOES_ENTITY_EXIST(iParam0, 0))
	{
		if (func_214(iParam0))
		{
			return 15;
		}
		if (func_211(iParam0))
		{
			return 28;
		}
		if (func_210(iParam0))
		{
			return 23;
		}
		if (func_209(iParam0))
		{
			return 33;
		}
		iVar0 = GET_INTERIOR_FROM_ENTITY(iParam0);
		if (iVar0 != 0)
		{
			iVar1 = 0;
			while (iVar1 < 34)
			{
				iVar2 = iVar1;
				func_206(iVar2);
				if (Global_1681159[iVar1] == iVar0)
				{
					return iVar2;
				}
				iVar1++;
			}
		}
	}
	return -1;
}

void func_206(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (Global_1681159[iVar0] == 0)
	{
		Global_1681159[iVar0] = GET_INTERIOR_AT_COORDS_WITH_TYPE(func_208(iParam0), func_207(iParam0));
	}
}

char* func_207(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "bkr_biker_dlc_int_03";
		
		case 0:
			return "hei_heist_police_dlc";
		
		case 2:
			return "v_genbank";
		
		case 3:
			return "v_genbank";
		
		case 4:
			return "v_genbank";
		
		case 5:
			return "v_genbank";
		
		case 6:
			return "v_bank4";
		
		case 7:
			return "v_genbank";
		
		case 8:
			return "hei_generic_bank_dlc";
		
		case 9:
			return "v_rockclub";
		
		case 10:
			return "v_factory1";
		
		case 11:
			return "v_factory2";
		
		case 12:
			return "v_factory3";
		
		case 13:
			return "v_factory4";
		
		case 14:
			return "v_farmhouse";
		
		case 15:
			return "gr_gta_milo_bridge";
		
		case 16:
			return "v_recycle";
		
		case 17:
			return "v_lab";
		
		case 18:
			return "v_garagem";
		
		case 19:
			return "v_studio_lo";
		
		case 20:
			return "v_apart_midspaz";
		
		case 21:
			return "v_sheriff";
		
		case 22:
			return "v_sheriff2";
		
		case 23:
			return "dt1_03_carpark";
		
		case 24:
			return "v_carshowroom";
		
		case 27:
			return "v_faceoffice";
		
		case 25:
			return "v_abattoir";
		
		case 26:
			return "V_JEWEL2";
		
		case 28:
			return "smboat";
		
		case 29:
			return "vb_33_garage";
		
		case 30:
			return "v_chopshop";
		
		case 31:
			return "v_methlab";
		
		case 32:
			return "v_office_lobby";
		
		case 33:
			return "v_lab";
		
		default:
	}
	return "";
}

Vector3 func_208(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 984.1552f, -95.3662f, 75.9326f;
		
		case 0:
			return 443.2281f, -984.0744f, 29.6896f;
		
		case 2:
			return -1216.762f, -333.0008f, 36.8508f;
		
		case 3:
			return 145.4168f, -1039.277f, 28.4379f;
		
		case 4:
			return 309.7465f, -277.6442f, 53.2346f;
		
		case 5:
			return -355.4359f, -48.5326f, 48.1064f;
		
		case 6:
			return -109.4503f, 6467.768f, 30.4388f;
		
		case 7:
			return 1179.745f, 2706.985f, 37.1578f;
		
		case 8:
			return -2962.591f, 478.238f, 14.7669f;
		
		case 9:
			return -556.5089f, 286.3181f, 81.1763f;
		
		case 10:
			return -76.6618f, 6222.191f, 32.2412f;
		
		case 11:
			return -100.7106f, 6205.7f, 30.0499f;
		
		case 12:
			return -125.6972f, 6172.923f, 30.0499f;
		
		case 13:
			return -162.4785f, 6155.384f, 30.0499f;
		
		case 14:
			return 2449.785f, 4983.825f, 45.8106f;
		
		case 15:
			return -1426.362f, 6754.506f, 11.7821f;
		
		case 16:
			return -583.2097f, -1599.302f, 26.3052f;
		
		case 17:
			return 3522.845f, 3707.965f, 19.9918f;
		
		case 18:
			return 630f, 4750f, -60f;
		
		case 19:
			return 600f, 4750f, -60f;
		
		case 20:
			return 575f, 4750f, -60f;
		
		case 21:
			return 1853.625f, 3687.826f, 33.2671f;
		
		case 22:
			return -447.5651f, 6013.988f, 30.7164f;
		
		case 23:
			return -28.1023f, -688.8687f, 34.4437f;
		
		case 24:
			return -40.2938f, -1097.321f, 25.4223f;
		
		case 27:
			return -1074.853f, -250.3996f, 36.7388f;
		
		case 25:
			return 982.233f, -2160.382f, 28.4761f;
		
		case 26:
			return -630.4205f, -236.7843f, 37.057f;
		
		case 28:
			return -2032f, -1035f, 5f;
		
		case 29:
			return -1078.561f, -1678.615f, 3.5752f;
		
		case 30:
			return 479.88f, -1318.57f, 28.2f;
		
		case 31:
			return 1392.512f, 3603.185f, 38.5f;
		
		case 32:
			return 105.4557f, -745.4835f, 44.7548f;
		
		case 33:
			return 3522.845f, 3707.965f, 19.9918f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_209(int iParam0)
{
	if (!IS_ENTITY_DEAD(iParam0, 0))
	{
		if ((IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), 3833.558f, 3666.702f, -20.91209f, 3818.202f, 3654.002f, -26.37315f, 12.25f, 0, true, 0) || IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), 3765.784f, 3661.946f, -15.33658f, 3823.827f, 3654.624f, -24.84368f, 13.75f, 0, true, 0)) || IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), 3519.188f, 3724.821f, -0.487321f, 3767.179f, 3661.705f, -32.33569f, 115f, 0, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_210(int iParam0)
{
	if (!IS_ENTITY_DEAD(iParam0, 0))
	{
		if (GET_DISTANCE_BETWEEN_COORDS(GET_DISTANCE_BETWEEN_COORDS(iParam0, true), -16.2669f, -685.4531f, 31.3381f, true) <= 80f)
		{
			if ((((((IS_ENTITY_IN_ANGLED_AREA(iParam0, -73.06738f, -689.2972f, 31.96555f, -68.41993f, -676.6198f, 36.63721f, 4.25f, 0, true, 0) || IS_ENTITY_IN_ANGLED_AREA(iParam0, 25.07854f, -664.3469f, 30.40673f, 14.14475f, -690.1883f, 38.61758f, 16f, 0, true, 0)) || IS_ENTITY_IN_ANGLED_AREA(iParam0, -18.7689f, -659.366f, 30.79917f, -15.31378f, -703.7052f, 38.08809f, 54.5f, 0, true, 0)) || IS_ENTITY_IN_ANGLED_AREA(iParam0, 9.119493f, -710.9459f, 30.83068f, -39.76558f, -693.0358f, 38.08809f, 24.25f, 0, true, 0)) || IS_ENTITY_IN_ANGLED_AREA(iParam0, -69.84457f, -683.3396f, 30.70474f, -39.69342f, -690.2305f, 36.58809f, 17.25f, 0, true, 0)) || IS_ENTITY_IN_ANGLED_AREA(iParam0, -43.32302f, -693.9668f, 30.58809f, -72.39151f, -683.4483f, 39.48361f, 20f, 0, true, 0)) || IS_ENTITY_IN_ANGLED_AREA(iParam0, -39.63783f, -686.181f, 30.58809f, -39.30408f, -662.2571f, 39.48083f, 20f, 0, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_211(int iParam0)
{
	return ((!IS_ENTITY_DEAD(iParam0, 0) && IS_ENTITY_DEAD(IS_ENTITY_DEAD(), -2016.6f, -1039.867f, -3.801932f, -2129.956f, -1003.351f, 22.18234f, 15.75f, 0, true, 0)) || func_212());
}

int func_212()
{
	vector3 vVar0;
	
	if (!IS_SCREEN_FADED_OUT())
	{
		vVar0 = { -2073.541f, -1021.104f, 14.99213f };
		if (vdist2(func_213(PLAYER_ID()), vVar0) <= 25600f)
		{
			if (IS_SPHERE_VISIBLE(vVar0, 60f))
			{
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_213(int iParam0)
{
	return GET_ENTITY_COORDS(GET_ENTITY_COORDS(iParam0), false);
}

bool func_214(int iParam0)
{
	return ((!IS_ENTITY_DEAD(iParam0, 0) && IS_ENTITY_DEAD(IS_ENTITY_DEAD(), Vector(-3.801932f, -1039.867f, -2016.6f) + Vector(0f, 7773.967f, 654.731f), Vector(22.18234f, -1003.351f, -2129.956f) + Vector(0f, 7773.967f, 654.731f), 15.75f, 0, true, 0)) || func_215());
}

int func_215()
{
	vector3 vVar0;
	
	if (!IS_SCREEN_FADED_OUT())
	{
		vVar0 = { Vector(-3.801932f, -1039.867f, -2016.6f) + Vector(0f, 7773.967f, 654.731f) };
		if (vdist2(func_213(PLAYER_ID()), vVar0) <= 25600f)
		{
			if (IS_SPHERE_VISIBLE(vVar0, 50f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_216(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_27())
	{
		return;
	}
	if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121))
	{
		if (DOES_CAM_EXIST(Local_117.f_131) && DOES_CAM_EXIST(Local_117.f_131))
		{
			if (IS_CAM_RENDERING(Local_117.f_131) || iParam0)
			{
				if (!func_60())
				{
					func_54(0);
				}
				func_227(1);
				if ((!func_226() || IS_BIT_SET(Local_117.f_5, 1)) || func_176())
				{
					HIDE_HUD_AND_RADAR_THIS_FRAME();
				}
				else
				{
					HIDE_HUD_COMPONENT_THIS_FRAME(9);
					HIDE_HUD_COMPONENT_THIS_FRAME(7);
					HIDE_HUD_COMPONENT_THIS_FRAME(8);
					func_63();
					func_224(1);
					iVar0 = GET_INTERIOR_FROM_ENTITY(GET_INTERIOR_FROM_ENTITY(Local_117.f_121));
					if (IS_VALID_INTERIOR(iVar0))
					{
						Global_1687880.f_24 = iVar0;
						if (!IS_BIT_SET(Local_117.f_5, 8))
						{
							Local_117.f_86 = func_223(0xF49B58631D9E22D9(iVar0));
							0x252BDC06B73FA6EA(iVar0, &(Local_117.f_109), &(Local_117.f_16));
							SET_BIT(&(Local_117.f_5), 8);
						}
						iVar1 = 0;
						if (func_222(Local_117.f_112.f_2, 43f, 48.7f))
						{
							iVar1 = 1;
						}
						if (Global_1687880.f_9 == -1f)
						{
							RESPONDING_AS_TEMP(1f);
						}
						else
						{
							RESPONDING_AS_TEMP(Global_1687880.f_9);
						}
						if (!func_147(PLAYER_ID()) && !func_219(PLAYER_ID()))
						{
							if (!func_218())
							{
								func_217(1);
							}
						}
						_SET_RADAR_BIGMAP_ENABLED(0, 0);
						SET_RADAR_AS_INTERIOR_THIS_FRAME(Local_117.f_16, Local_117.f_109, Local_117.f_109.f_1, floor(Local_117.f_86), iVar1);
					}
					else
					{
						Local_117.f_16 = -1;
						if (Global_1687880.f_9 == -1f)
						{
							RESPONDING_AS_TEMP(0f);
						}
						else
						{
							RESPONDING_AS_TEMP(Global_1687880.f_9);
						}
						if (!func_218())
						{
							func_217(1);
						}
						_SET_RADAR_BIGMAP_ENABLED(0, 0);
						Global_1687880.f_24 = -1;
						if (IS_BIT_SET(Local_117.f_5, 8))
						{
							CLEAR_BIT(&(Local_117.f_5), 8);
						}
					}
				}
			}
		}
	}
}

void func_217(int iParam0)
{
	Global_2461278 = iParam0;
}

bool func_218()
{
	return Global_2461278;
}

int func_219(int iParam0)
{
	if (func_221(iParam0))
	{
		return 1;
	}
	if (func_220(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_220(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_73(iParam0, 9);
	}
	return 0;
}

int func_221(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return IS_BIT_SET(Global_1628955[iVar0 /*614*/].f_1, 0);
	}
	return 0;
}

int func_222(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 >= fParam1 && fParam0 < fParam2)
	{
		return 1;
	}
	return 0;
}

float func_223(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_224(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_98721.f_8 = 1;
	}
	else
	{
		Global_98721.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_225(iVar0);
		iVar0++;
	}
}

void func_225(int iParam0)
{
	Global_98721.f_181[iParam0] = 1;
	Global_98721.f_180 = 1;
}

bool func_226()
{
	return IS_BIT_SET(Global_1687880, 4);
}

void func_227(int iParam0)
{
	if (Global_2531497.f_4554 != iParam0)
	{
		Global_2531497.f_4554 = iParam0;
	}
}

void func_228()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	vector3 vVar13;
	vector3 vVar14;
	float fVar15;
	vector3 vVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	vector3 vVar21;
	vector3 vVar22;
	float fVar23;
	float fVar24;
	var uVar25;
	var uVar26;
	vector3 vVar27;
	
	if (!func_27() || func_176())
	{
		return;
	}
	if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121) && !NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121), 0))
	{
		if (NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_117.f_121))
		{
			fVar0 = 26f;
			fVar1 = 40f;
			fVar2 = 30f;
			fVar3 = 30f;
			iVar4 = 1;
			fVar5 = GET_ENTITY_ROLL(GET_ENTITY_ROLL(Local_117.f_121));
			fVar6 = GET_ENTITY_PITCH(GET_ENTITY_PITCH(Local_117.f_121));
			fVar7 = (30f * timestep());
			func_233();
			_DISABLE_INPUT_GROUP(2);
			func_232(&(Local_117[0]), &(Local_117[1]), &(Local_117[2]), &(Local_117[3]), 0, 0);
			if (_IS_INPUT_DISABLED(0))
			{
				iVar4 = 2;
				Local_117[2] = (Local_117[2] * iVar4);
				Local_117[3] = (Local_117[3] * iVar4);
			}
			if (IS_LOOK_INVERTED())
			{
				Local_117[3] = (Local_117[3] * -1);
				Local_117[1] = (Local_117[1] * -1);
			}
			if ((Local_117[2] != 0 || Local_117[3] != 0) || (Local_117[0] != 0 || Local_117[1] != 0))
			{
				if (Local_117[2] != 0)
				{
					fVar8 = (1f / (127f / IntToFloat(Local_117[2])));
				}
				else if (Local_117[0] != 0)
				{
					fVar8 = (1f / (127f / IntToFloat(Local_117[0])));
				}
				else
				{
					fVar8 = 0f;
				}
				if (Local_117[3] != 0)
				{
					fVar9 = (1f / (127f / IntToFloat(Local_117[3])));
				}
				else if (Local_117[1] != 0)
				{
					fVar9 = (1f / (127f / IntToFloat(Local_117[1])));
				}
				else
				{
					fVar9 = 0f;
				}
				vVar13 = { GET_ENTITY_ROTATION(GET_ENTITY_ROTATION(Local_117.f_121), 2) };
				fVar10 = (((fVar9 * 0.05f) * fVar7) * fVar0);
				fVar11 = -(((fVar8 * 0.05f) * fVar7) * fVar0);
				if ((fVar5 != 0f || Local_117[2] != 0) || Local_117[0] != 0)
				{
					if (Local_117[2] != 0)
					{
						fVar15 = (1f / (127f / IntToFloat(Local_117[2])));
						fVar12 = -(((fVar15 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
					else if (Local_117[0] != 0)
					{
						fVar15 = (1f / (127f / IntToFloat(Local_117[0])));
						fVar12 = -(((fVar15 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
					else
					{
						if (fVar5 > 0.1f || fVar5 < -0.1f)
						{
							if (fVar5 > 0f)
							{
								fVar15 = -1f;
							}
							else
							{
								fVar15 = 1f;
							}
						}
						if (vVar13.y != 0f)
						{
							if (vVar13.y < 2f && vVar13.y > 0f)
							{
								fVar15 = 0.0001f;
							}
							else if (vVar13.y > -2f && vVar13.y < 0f)
							{
								fVar15 = -0.0001f;
							}
						}
						else
						{
							fVar15 = 0f;
						}
						fVar12 = -(((fVar15 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
				}
				else
				{
					fVar12 = 0f;
				}
				vVar14 = { Vector(fVar11, fVar12, fVar10) + vVar13 };
				if (fVar5 != 0f)
				{
					if (Local_117[2] == 0 && Local_117[0] == 0)
					{
						if (vVar14.y > fVar2)
						{
							vVar14.y = fVar2;
						}
						else if (vVar14.y < -fVar2)
						{
							vVar14.y = -fVar2;
						}
					}
					else if (vVar14.y > fVar2)
					{
						vVar14.y = fVar2;
					}
					else if (vVar14.y < -fVar2)
					{
						vVar14.y = -fVar2;
					}
				}
				if (vVar14.x > fVar3)
				{
					vVar14.x = fVar3;
				}
				else if (vVar14.x < -fVar3)
				{
					vVar14.x = -fVar3;
				}
				if (!IS_BIT_SET(Local_117.f_5, 12))
				{
					SET_BIT(&(Local_117.f_5), 12);
				}
				SET_ENTITY_ROTATION(SET_ENTITY_ROTATION(Local_117.f_121), Vector(0f, 0f, 0f) + Vector(vVar14.z, vVar14.y, vVar14.x), 2, 1);
			}
			else if (((Local_117[2] != 0 || Local_117[3] != 0) || Local_117[0] != 0) || Local_117[1] != 0)
			{
				vVar16 = { GET_ENTITY_ROTATION(GET_ENTITY_ROTATION(Local_117.f_121), 2) };
				if (func_231())
				{
					if (func_230())
					{
						fVar18 = -1f;
						Local_117.f_92 = fVar18;
					}
				}
				else
				{
					if (Local_117[2] != 0)
					{
						fVar17 = (1f / (127f / IntToFloat(Local_117[2])));
						Local_117.f_92 = fVar17;
					}
					else if (Local_117[0] != 0)
					{
						fVar17 = (1f / (127f / IntToFloat(Local_117[0])));
						Local_117.f_92 = fVar17;
					}
					else
					{
						fVar17 = 0f;
					}
					if (Local_117[3] != 0)
					{
						fVar18 = (1f / (127f / IntToFloat(Local_117[3])));
						Local_117.f_92 = fVar17;
					}
					else if (Local_117[1] != 0)
					{
						fVar18 = (1f / (127f / IntToFloat(Local_117[1])));
						Local_117.f_92 = fVar17;
					}
					else
					{
						fVar18 = 0f;
					}
				}
				fVar19 = -(((fVar18 * 0.05f) * fVar7) * fVar1);
				fVar20 = -(((fVar17 * 0.05f) * fVar7) * fVar1);
				if (fVar5 != 0f)
				{
					if (Local_117[2] == 0 && Local_117[0] == 0)
					{
						if (fVar5 > 1f || fVar5 < -1f)
						{
							if (fVar5 > 0f)
							{
								fVar17 = -1f;
							}
							else
							{
								fVar17 = 1f;
							}
						}
						if (vVar16.y < 2f && vVar16.y > 0f)
						{
							fVar17 = 0.0001f;
						}
						else if (vVar16.y > -2f && vVar16.y < 0f)
						{
							fVar17 = -0.0001f;
						}
						fVar20 = -(((fVar17 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
				}
				vVar21 = { Vector(0f, fVar20, fVar19) + vVar16 };
				if (vVar21.y > fVar2)
				{
					vVar21.y = fVar2;
				}
				else if (vVar21.y < -fVar2)
				{
					vVar21.y = -fVar2;
				}
				if (vVar21.x > fVar3)
				{
					vVar21.x = fVar3;
				}
				else if (vVar21.x < -fVar3)
				{
					vVar21.x = -fVar3;
				}
				if (IS_BIT_SET(Local_117.f_5, 12))
				{
					CLEAR_BIT(&(Local_117.f_5), 12);
				}
				SET_ENTITY_ROTATION(SET_ENTITY_ROTATION(Local_117.f_121), Vector(0f, 0f, 0f) + Vector(vVar16.z, vVar21.y, vVar21.x), 2, 1);
			}
			else
			{
				Local_117.f_92 = 0f;
				vVar22 = { GET_ENTITY_ROTATION(GET_ENTITY_ROTATION(Local_117.f_121), 2) };
				if (fVar5 != 0f || fVar6 != 0f)
				{
					if (vVar22.y != 0f)
					{
						if (vVar22.y < 0f)
						{
							fVar23 = -1f;
						}
						else
						{
							fVar23 = 1f;
						}
					}
					else
					{
						fVar23 = 0f;
					}
					if (fVar6 != 0f)
					{
						if (vVar22.x < 0f)
						{
							fVar24 = -1f;
						}
						else
						{
							fVar24 = 1f;
						}
					}
					else
					{
						fVar24 = 0f;
					}
					if (vVar22.y != 0f)
					{
						if (vVar22.y < 2f && vVar22.y > 0f)
						{
							fVar23 = 0.0001f;
						}
						else if (vVar22.y > -2f && vVar22.y < 0f)
						{
							fVar23 = -0.0001f;
						}
					}
					else
					{
						fVar23 = 0f;
					}
					if (vVar22.x != 0f)
					{
						if (vVar22.x < 2f && vVar22.x > 0f)
						{
							fVar24 = 0.0001f;
						}
						else if (vVar22.x > -2f && vVar22.x < 0f)
						{
							fVar24 = -0.0001f;
						}
					}
					else
					{
						fVar24 = 0f;
					}
					uVar25 = func_229(-(((fVar24 * 0.05f) * fVar7) * (fVar1 - 25f)));
					uVar26 = func_229(-(((fVar23 * 0.05f) * fVar7) * (fVar1 - 25f)));
					vVar27 = { Vector(0f, uVar26, uVar25) + vVar22 };
					if (IS_BIT_SET(Local_117.f_5, 12))
					{
						vVar27.x = vVar22.x;
					}
					SET_ENTITY_ROTATION(SET_ENTITY_ROTATION(Local_117.f_121), Vector(0f, 0f, 0f) + Vector(vVar22.z, vVar27.y, vVar27.x), 2, 1);
				}
			}
		}
		else
		{
			NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_117.f_121);
		}
	}
}

float func_229(float fParam0)
{
	while (fParam0 > 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	while (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

bool func_230()
{
	return IS_BIT_SET(Local_117.f_5, 22);
}

bool func_231()
{
	return IS_BIT_SET(Local_117.f_5, 21);
}

void func_232(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = floor((_0x5B84D09CEC5209C5(2, 218) * 127f));
	*uParam1 = floor((_0x5B84D09CEC5209C5(2, 219) * 127f));
	*uParam2 = floor((_0x5B84D09CEC5209C5(2, 220) * 127f));
	*uParam3 = floor((_0x5B84D09CEC5209C5(2, 221) * 127f));
	if (bParam4)
	{
		if (!IS_CONTROL_ENABLED(2, 218))
		{
			*uParam0 = floor((_0x4F8A26A890FD62FB(2, 218) * 127f));
		}
		if (!IS_CONTROL_ENABLED(2, 219))
		{
			*uParam1 = floor((_0x4F8A26A890FD62FB(2, 219) * 127f));
		}
		if (!IS_CONTROL_ENABLED(2, 220))
		{
			*uParam2 = floor((_0x4F8A26A890FD62FB(2, 220) * 127f));
		}
		if (!IS_CONTROL_ENABLED(2, 221))
		{
			*uParam3 = floor((_0x4F8A26A890FD62FB(2, 221) * 127f));
		}
	}
	if (_IS_INPUT_DISABLED(2))
	{
		if (bParam5)
		{
			if (IS_LOOK_INVERTED())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (_0xE1615EC03B3BB4FD())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_233()
{
	if (func_119())
	{
		switch (Local_117.f_24)
		{
			case 0:
				Local_117.f_90 = 90f;
				Local_117.f_89 = 90f;
				break;
			
			case 1:
				Local_117.f_90 = 75f;
				Local_117.f_89 = 75f;
				break;
			
			case 2:
				Local_117.f_90 = 45f;
				Local_117.f_89 = 45f;
				break;
		}
	}
	else
	{
		switch (Local_117.f_24)
		{
			case 0:
				Local_117.f_90 = 90f;
				Local_117.f_89 = 90f;
				break;
			
			case 1:
				Local_117.f_90 = 80f;
				Local_117.f_89 = 80f;
				break;
			
			case 2:
				Local_117.f_90 = 70f;
				Local_117.f_89 = 70f;
				break;
			}
	}
}

void func_234()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	bool bVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	vector3 vVar14;
	vector3 vVar15;
	float fVar16;
	vector3 vVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	vector3 vVar22;
	vector3 vVar23;
	float fVar24;
	float fVar25;
	var uVar26;
	var uVar27;
	vector3 vVar28;
	
	if ((IS_BIT_SET(Local_117.f_5, 1) || func_176()) || func_27())
	{
		return;
	}
	if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121) && !NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121), 0))
	{
		if (NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_117.f_121))
		{
			fVar0 = 40f;
			fVar1 = 19f;
			fVar2 = 14f;
			iVar3 = 1;
			fVar4 = GET_ENTITY_ROLL(GET_ENTITY_ROLL(Local_117.f_121));
			fVar5 = GET_ENTITY_PITCH(GET_ENTITY_PITCH(Local_117.f_121));
			if (func_17())
			{
				fVar1 = 10f;
			}
			fVar6 = (30f * timestep());
			func_233();
			_DISABLE_INPUT_GROUP(2);
			func_232(&(Local_117[0]), &(Local_117[1]), &(Local_117[2]), &(Local_117[3]), 0, 0);
			if (_IS_INPUT_DISABLED(0))
			{
				iVar3 = 5;
				Local_117[2] = (Local_117[2] * iVar3);
				Local_117[3] = (Local_117[3] * iVar3);
			}
			if (IS_LOOK_INVERTED())
			{
				Local_117[3] = (Local_117[3] * -1);
			}
			if (func_7(&(Local_117.f_206), 750, 0))
			{
				if (!_IS_INPUT_DISABLED(0))
				{
					bVar7 = IS_DISABLED_CONTROL_JUST_PRESSED(0, 210);
				}
				else
				{
					bVar7 = (IS_DISABLED_CONTROL_JUST_PRESSED(0, 241) || IS_DISABLED_CONTROL_JUST_PRESSED(0, 242));
					if (IS_DISABLED_CONTROL_JUST_PRESSED(0, 241))
					{
						bVar8 = true;
					}
				}
				if (bVar7)
				{
					func_186(&(Local_117.f_206), 0, 0);
				}
			}
			if (bVar7 && !func_231())
			{
				if (!_IS_INPUT_DISABLED(0))
				{
					Local_117.f_24++;
				}
				else if (bVar8)
				{
					Local_117.f_24 = (Local_117.f_24 - 1);
				}
				else
				{
					Local_117.f_24++;
				}
				if (HAS_SOUND_FINISHED(Local_117.f_38))
				{
					Local_117.f_38 = GET_SOUND_ID();
					PLAY_SOUND_FRONTEND(Local_117.f_38, "HUD_Zoom_Change", Local_117.f_119, true);
				}
				if (Local_117.f_24 > 2)
				{
					Local_117.f_24 = 0;
				}
				else if (Local_117.f_24 < 0)
				{
					Local_117.f_24 = 2;
				}
			}
			else if (HAS_SOUND_FINISHED(Local_117.f_38))
			{
				STOP_SOUND(Local_117.f_38);
				RELEASE_SOUND_ID(Local_117.f_38);
				Local_117.f_38 = -1;
			}
			Local_117.f_91 = (Local_117.f_91 + (((Local_117.f_89 - Local_117.f_91) * 0.06f) * fVar6));
			SET_CAM_FOV(Local_117.f_131, Local_117.f_91);
			if (Local_117[2] != 0 || Local_117[3] != 0)
			{
				if (Local_117[2] != 0)
				{
					fVar9 = (1f / (127f / IntToFloat(Local_117[2])));
				}
				else
				{
					fVar9 = 0f;
				}
				if (Local_117[3] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_117[3])));
				}
				else
				{
					fVar10 = 0f;
				}
				vVar14 = { GET_ENTITY_ROTATION(GET_ENTITY_ROTATION(Local_117.f_121), 2) };
				fVar11 = (((fVar10 * 0.05f) * fVar6) * Local_117.f_93);
				fVar12 = -(((fVar9 * 0.05f) * fVar6) * Local_117.f_93);
				if ((fVar4 != 0f || Local_117[0] != 0) && !func_60())
				{
					if (Local_117[0] != 0)
					{
						fVar16 = (1f / (127f / IntToFloat(Local_117[0])));
						fVar13 = -(((fVar16 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
					else
					{
						if (fVar4 > 0.1f || fVar4 < -0.1f)
						{
							if (fVar4 > 0f)
							{
								fVar16 = -1f;
							}
							else
							{
								fVar16 = 1f;
							}
						}
						if (vVar14.y != 0f)
						{
							if (vVar14.y < 1.5f && vVar14.y > 0f)
							{
								fVar16 = 0.001f;
							}
							else if (vVar14.y > -1.5f && vVar14.y < 0f)
							{
								fVar16 = -0.001f;
							}
						}
						else
						{
							fVar16 = 0f;
						}
						fVar13 = -(((fVar16 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
				}
				else
				{
					fVar13 = 0f;
				}
				vVar15 = { Vector(fVar12, fVar13, fVar11) + vVar14 };
				if (fVar4 != 0f)
				{
					if (Local_117[0] == 0)
					{
						if (vVar15.y > fVar1)
						{
							vVar15.y = fVar1;
						}
						else if (vVar15.y < -fVar1)
						{
							vVar15.y = -fVar1;
						}
					}
					else if (vVar15.y > fVar1)
					{
						vVar15.y = fVar1;
					}
					else if (vVar15.y < -fVar1)
					{
						vVar15.y = -fVar1;
					}
				}
				if (vVar15.x > fVar2)
				{
					vVar15.x = fVar2;
				}
				else if (vVar15.x < -fVar2)
				{
					vVar15.x = -fVar2;
				}
				if (!IS_BIT_SET(Local_117.f_5, 12))
				{
					SET_BIT(&(Local_117.f_5), 12);
				}
				SET_ENTITY_ROTATION(SET_ENTITY_ROTATION(Local_117.f_121), Vector(0f, 0f, 0f) + Vector(vVar15.z, vVar15.y, vVar15.x), 2, 1);
			}
			else if (((Local_117[0] != 0 || Local_117[1] != 0) && !func_231()) && !func_60())
			{
				vVar17 = { GET_ENTITY_ROTATION(GET_ENTITY_ROTATION(Local_117.f_121), 2) };
				if (func_231())
				{
					if (func_230())
					{
						fVar19 = -1f;
						Local_117.f_92 = fVar19;
					}
				}
				else
				{
					if (Local_117[0] != 0)
					{
						fVar18 = (1f / (127f / IntToFloat(Local_117[0])));
						Local_117.f_92 = fVar18;
					}
					else
					{
						fVar18 = 0f;
					}
					if (Local_117[1] != 0)
					{
						fVar19 = (1f / (127f / IntToFloat(Local_117[1])));
						Local_117.f_92 = fVar18;
					}
					else
					{
						fVar19 = 0f;
					}
				}
				fVar20 = -(((fVar19 * 0.05f) * fVar6) * fVar0);
				fVar21 = -(((fVar18 * 0.05f) * fVar6) * fVar0);
				if (fVar4 != 0f)
				{
					if ((Local_117[0] == 0 && !func_60()) || func_231())
					{
						if (fVar4 > 1f || fVar4 < -1f)
						{
							if (fVar4 > 0f)
							{
								fVar18 = -1f;
							}
							else
							{
								fVar18 = 1f;
							}
						}
						if (vVar17.y < 1.5f && vVar17.y > 0f)
						{
							fVar18 = 0.001f;
						}
						else if (vVar17.y > -1.5f && vVar17.y < 0f)
						{
							fVar18 = -0.001f;
						}
						fVar21 = -(((fVar18 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
				}
				vVar22 = { Vector(0f, fVar21, fVar20) + vVar17 };
				if (vVar22.y > fVar1)
				{
					vVar22.y = fVar1;
				}
				else if (vVar22.y < -fVar1)
				{
					vVar22.y = -fVar1;
				}
				if (vVar22.x > fVar2)
				{
					vVar22.x = fVar2;
				}
				else if (vVar22.x < -fVar2)
				{
					vVar22.x = -fVar2;
				}
				if (IS_BIT_SET(Local_117.f_5, 12))
				{
					CLEAR_BIT(&(Local_117.f_5), 12);
				}
				SET_ENTITY_ROTATION(SET_ENTITY_ROTATION(Local_117.f_121), Vector(0f, 0f, 0f) + Vector(vVar17.z, vVar22.y, vVar22.x), 2, 1);
			}
			else if (!func_230() && !func_231())
			{
				Local_117.f_92 = 0f;
				vVar23 = { GET_ENTITY_ROTATION(GET_ENTITY_ROTATION(Local_117.f_121), 2) };
				if (fVar4 != 0f || fVar5 != 0f)
				{
					if (vVar23.y != 0f)
					{
						if (vVar23.y < 0f)
						{
							fVar24 = -1f;
						}
						else
						{
							fVar24 = 1f;
						}
					}
					else
					{
						fVar24 = 0f;
					}
					if (fVar5 != 0f)
					{
						if (vVar23.x < 0f)
						{
							fVar25 = -1f;
						}
						else
						{
							fVar25 = 1f;
						}
					}
					else
					{
						fVar25 = 0f;
					}
					if (vVar23.y != 0f)
					{
						if (vVar23.y < 1.5f && vVar23.y > 0f)
						{
							fVar24 = 0.001f;
						}
						else if (vVar23.y > -1.5f && vVar23.y < 0f)
						{
							fVar24 = -0.001f;
						}
					}
					else
					{
						fVar24 = 0f;
					}
					if (vVar23.x != 0f)
					{
						if (vVar23.x < 1.5f && vVar23.x > 0f)
						{
							fVar25 = 0.001f;
						}
						else if (vVar23.x > -1.5f && vVar23.x < 0f)
						{
							fVar25 = -0.001f;
						}
					}
					else
					{
						fVar25 = 0f;
					}
					uVar26 = func_229(-(((fVar25 * 0.05f) * fVar6) * (fVar0 - 25f)));
					uVar27 = func_229(-(((fVar24 * 0.05f) * fVar6) * (fVar0 - 25f)));
					vVar28 = { Vector(0f, uVar27, uVar26) + vVar23 };
					if (IS_BIT_SET(Local_117.f_5, 12))
					{
						vVar28.x = vVar23.x;
					}
					SET_ENTITY_ROTATION(SET_ENTITY_ROTATION(Local_117.f_121), Vector(0f, 0f, 0f) + Vector(vVar23.z, vVar28.y, vVar28.x), 2, 1);
				}
			}
		}
		else
		{
			NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_117.f_121);
		}
	}
}

void func_235()
{
	int iVar0;
	int iVar1;
	
	if (func_53(PLAYER_ID(), 0))
	{
		iVar0 = func_162(0);
		Local_117.f_103 = { func_238(&Local_117) };
		if (!DOES_ENTITY_EXIST(Local_117.f_124))
		{
			if (!func_237(Local_117.f_103))
			{
				if (func_161(iVar0))
				{
					Local_117.f_124 = CREATE_OBJECT(iVar0, Local_117.f_103, false, false, true);
					SET_ENTITY_COORDS_NO_OFFSET(Local_117.f_124, Local_117.f_103, 0, 0, 1);
					SET_ENTITY_COLLISION(Local_117.f_124, true, 0);
					SET_ENTITY_LOAD_COLLISION_FLAG(Local_117.f_124, true, 1);
					SET_ENTITY_RECORDS_COLLISIONS(Local_117.f_124, 1);
					SET_ENTITY_HEADING(Local_117.f_124, func_236());
					FREEZE_ENTITY_POSITION(Local_117.f_124, true);
					SET_ENTITY_VISIBLE(Local_117.f_124, false, 0);
					SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				}
			}
		}
		else
		{
			iVar1 = GET_CLOSEST_OBJECT_OF_TYPE(Local_117.f_103, 2f, iVar0, 0, 0, 0);
			if (DOES_ENTITY_EXIST(iVar1) && iVar1 != Local_117.f_124)
			{
				if (NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					_SET_ENTITY_COLLISION_2(iVar1, false, 0);
					FREEZE_ENTITY_POSITION(iVar1, true);
					SET_ENTITY_VISIBLE(iVar1, true, 0);
				}
				else
				{
					NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar1);
				}
			}
		}
	}
	else
	{
		Local_117.f_103 = { func_238(&Local_117) };
	}
}

float func_236()
{
	if (Global_1687880.f_7 != 0f)
	{
		return Global_1687880.f_7;
	}
	return 0f;
}

int func_237(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_238(var uParam0)
{
	if (!func_237(Global_1687880.f_10))
	{
		return Global_1687880.f_10;
	}
	else
	{
		return uParam0->f_103;
	}
	return 0f, 0f, 0f;
}

void func_239()
{
	if (Local_117.f_32 != -1)
	{
		STOP_SOUND(Local_117.f_32);
		RELEASE_SOUND_ID(Local_117.f_32);
		Local_117.f_32 = -1;
	}
}

int func_240()
{
	if (IS_PAUSE_MENU_ACTIVE() || IS_PAUSE_MENU_ACTIVE())
	{
		return 1;
	}
	if (_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return 1;
	}
	if (func_155())
	{
		return 1;
	}
	if (func_245(PLAYER_ID()) && !func_244())
	{
		return 1;
	}
	if (func_147(PLAYER_ID()))
	{
		if (IS_BIT_SET(Global_2530259, 0))
		{
			return 1;
		}
	}
	if (Global_1662552 || Global_1312791)
	{
		func_243(1);
		return 1;
	}
	if ((func_241(0) || func_152(1)) || func_151())
	{
		func_54(0);
		func_63();
		func_81();
		return 1;
	}
	return 0;
}

int func_241(bool bParam0)
{
	if (_0xFC859E2374407556())
	{
		if (!IS_PED_INJURED(IS_PED_INJURED()))
		{
			if (func_242(PLAYER_PED_ID()))
			{
				if (IS_CONTROL_PRESSED(0, 25) || IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22211.f_130)
	{
		return 0;
	}
	if (IS_CONTROL_PRESSED(0, 19) || (!bParam0 && IS_CONTROL_PRESSED(0, 19)))
	{
		return 1;
	}
	if (IS_PC_VERSION())
	{
		if (((IS_CONTROL_PRESSED(0, 166) || IS_CONTROL_PRESSED(0, 167)) || IS_CONTROL_PRESSED(0, 168)) || IS_CONTROL_PRESSED(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((IS_DISABLED_CONTROL_PRESSED(0, 166) || IS_DISABLED_CONTROL_PRESSED(0, 167)) || IS_DISABLED_CONTROL_PRESSED(0, 168)) || IS_DISABLED_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_242(int iParam0)
{
	int iVar0;
	
	if (IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!IS_PED_INJURED(iParam0))
		{
			GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_243(bool bParam0)
{
	if (bParam0)
	{
		if (!func_28())
		{
			SET_BIT(&Global_1687880, 20);
		}
	}
	else if (func_28())
	{
		CLEAR_BIT(&Global_1687880, 20);
	}
}

bool func_244()
{
	return (IS_BIT_SET(Global_4456448.f_30, 12) && IS_BIT_SET(Global_1695602, 0));
}

int func_245(int iParam0)
{
	if (func_94(iParam0, 0))
	{
		return 1;
	}
	if (func_246())
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

bool func_246()
{
	return IS_BIT_SET(Global_2359302, 3);
}

void func_247()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (func_27())
	{
		return;
	}
	if (func_226())
	{
		if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121))
		{
			if (!DOES_BLIP_EXIST(Local_117.f_133))
			{
				Local_117.f_133 = func_261(Local_117.f_112, 0);
				SET_BLIP_SPRITE(Local_117.f_133, 627);
				if (func_17() && !DOES_BLIP_EXIST(Local_117.f_134))
				{
					Local_117.f_134 = func_258(PLAYER_PED_ID(), 0, 0);
					SET_BLIP_SPRITE(Local_117.f_134, 6);
					_0x75A16C3DA34F1245(Local_117.f_134, false);
					SET_BLIP_SCALE(Local_117.f_134, 0.7f);
					SET_BLIP_PRIORITY(Local_117.f_134, (13 - 1));
					if (func_255(PLAYER_ID()) != -1)
					{
						func_251(&(Local_117.f_134), func_253(func_255(PLAYER_ID())));
					}
					else
					{
						func_251(&(Local_117.f_134), func_250());
					}
					_0x54318C915D27E4CE(Local_117.f_134, 1);
				}
			}
			else
			{
				fVar0 = func_249(Local_117.f_87);
				fVar1 = Local_117.f_112;
				fVar2 = Local_117.f_112.f_1;
				SET_BLIP_DISPLAY(Local_117.f_133, 2);
				SET_BLIP_COORDS(Local_117.f_133, Local_117.f_112);
				if (((func_9() || func_29()) && IS_PAUSE_MENU_ACTIVE()) && IS_PAUSE_MENU_ACTIVE())
				{
					if (!_0x9049FE339D5F6F6F())
					{
						fVar1 = -323.1f;
						fVar2 = -1970.9f;
						SET_BLIP_COORDS(Local_117.f_133, fVar1, fVar2, 0f);
						_SET_PLAYER_BLIP_POSITION_THIS_FRAME(fVar1, fVar2);
						_0x20FE7FDFEEAD38C0();
					}
				}
				LOCK_MINIMAP_POSITION(fVar1, fVar2);
				SET_BLIP_ROTATION(Local_117.f_133, round(fVar0));
				SET_BLIP_SCALE(Local_117.f_133, 1f);
				SET_BLIP_PRIORITY(Local_117.f_133, 9);
				LOCK_MINIMAP_ANGLE(round(fVar0));
				if (DOES_BLIP_EXIST(Local_117.f_134))
				{
					SET_BLIP_ROTATION(Local_117.f_134, func_248(SET_BLIP_ROTATION()));
				}
			}
		}
	}
}

int func_248(int iParam0)
{
	float fVar0;
	
	fVar0 = _GET_ENTITY_PHYSICS_HEADING(iParam0);
	return round(fVar0);
}

float func_249(float fParam0)
{
	if (fParam0 > 180f)
	{
		return (fParam0 - 180f);
	}
	return (fParam0 + 180f);
}

int func_250()
{
	return 10;
}

void func_251(var uParam0, int iParam1)
{
	int iVar0;
	
	if (DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_252(iParam1);
		SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

int func_252(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

int func_253(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_254(iParam0);
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

var func_254(int iParam0)
{
	return Global_2417783.f_2105.f_44[iParam0 /*2*/].f_1;
}

int func_255(int iParam0)
{
	if (!iParam0 == func_16())
	{
		if (func_256(iParam0, 1))
		{
			return Global_2417783.f_2105.f_11[func_191(iParam0)];
		}
	}
	return -1;
}

bool func_256(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_257(iParam0))
		{
			return 0;
		}
	}
	return Global_1628955[iParam0 /*614*/].f_11 != func_16();
}

int func_257(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (Global_1628955[iParam0 /*614*/].f_11 != func_16())
		{
			return Global_1628955[iParam0 /*614*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_258(int iParam0, bool bParam1, bool bParam2)
{
	return func_259(iParam0, !bParam1, bParam2);
}

int func_259(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ADD_BLIP_FOR_ENTITY(iParam0);
	if (IS_ENTITY_A_VEHICLE(iParam0))
	{
		SET_BLIP_SCALE(iVar0, func_260(SET_BLIP_SCALE(), 1f, 1f));
		if (!bParam2)
		{
			SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		}
		else
		{
			SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (IS_ENTITY_A_PED(iParam0))
	{
		SET_BLIP_SCALE(iVar0, func_260(SET_BLIP_SCALE(), 0.7f, 0.7f));
		SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (IS_ENTITY_AN_OBJECT(iParam0))
	{
		SET_BLIP_SCALE(iVar0, func_260(SET_BLIP_SCALE(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_260(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_261(vector3 vParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = ADD_BLIP_FOR_COORD(vParam0);
	SET_BLIP_SCALE(iVar0, func_260(SET_BLIP_SCALE(), 1f, 1f));
	SET_BLIP_ROUTE(iVar0, bParam1);
	return iVar0;
}

void func_262()
{
	if (func_27())
	{
		if (Local_117.f_112.f_2 >= (func_139() - 20f))
		{
			if (HAS_SOUND_FINISHED(Local_117.f_36))
			{
				Local_117.f_36 = GET_SOUND_ID();
				PLAY_SOUND_FRONTEND(Local_117.f_36, "Out_Of_Bounds_Alarm_Loop", Local_117.f_119, true);
			}
		}
		else if (!HAS_SOUND_FINISHED(Local_117.f_36))
		{
			STOP_SOUND(Local_117.f_36);
			RELEASE_SOUND_ID(Local_117.f_36);
			Local_117.f_36 = -1;
		}
	}
}

void func_263()
{
	if (((func_29() || func_119()) || func_17()) || func_142())
	{
		switch (Local_117.f_171)
		{
			case 0:
				func_286();
				break;
			
			case 1:
				func_273();
				break;
			
			case 2:
				func_271();
				break;
			
			case 3:
				func_264();
				break;
			}
	}
}

void func_264()
{
	func_55(1);
	if (!func_270())
	{
		DO_SCREEN_FADE_IN(500);
	}
	func_268(0);
	func_266(0);
	func_265(0);
}

void func_265(int iParam0)
{
	if (Local_117.f_171 != iParam0)
	{
		Local_117.f_171 = iParam0;
	}
}

void func_266(bool bParam0)
{
	if (bParam0)
	{
		if (!func_267())
		{
			SET_BIT(&Global_1687880, 17);
		}
	}
	else if (func_267())
	{
		CLEAR_BIT(&Global_1687880, 17);
	}
}

bool func_267()
{
	return IS_BIT_SET(Global_1687880, 17);
}

void func_268(bool bParam0)
{
	if (bParam0)
	{
		if (!func_269())
		{
			SET_BIT(&Global_1687880, 18);
		}
	}
	else if (func_269())
	{
		CLEAR_BIT(&Global_1687880, 18);
	}
}

bool func_269()
{
	return IS_BIT_SET(Global_1687880, 18);
}

bool func_270()
{
	return Global_1676879.f_443;
}

void func_271()
{
	if (func_269() || IS_PAUSE_MENU_ACTIVE())
	{
		func_55(1);
		func_272(0);
		CLEAR_BIT(&(Local_117.f_5), 16);
		func_265(3);
	}
}

void func_272(bool bParam0)
{
	if (bParam0)
	{
		if (!func_60())
		{
			SET_BIT(&Global_1687880, 19);
		}
	}
	else if (func_60())
	{
		CLEAR_BIT(&Global_1687880, 19);
	}
}

void func_273()
{
	if (IS_SCREEN_FADED_OUT())
	{
		if (func_7(&(Local_117.f_196), 3000, 0))
		{
			if (func_285())
			{
				if (IS_BIT_SET(Global_4269615, 2) || func_7(&(Local_117.f_200), 8000, 0))
				{
					if (!IS_BIT_SET(Global_4269615, 2))
					{
					}
					DO_SCREEN_FADE_IN(500);
					func_274(PLAYER_ID(), 1, 0, 0);
					func_6(&(Local_117.f_196));
					func_6(&(Local_117.f_200));
					func_265(2);
				}
			}
			else if (func_7(&(Local_117.f_200), 15000, 0))
			{
				func_6(&(Local_117.f_196));
				func_6(&(Local_117.f_200));
				func_55(1);
				func_272(0);
				CLEAR_BIT(&(Local_117.f_5), 16);
				func_265(3);
			}
		}
	}
}

void func_274(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	int iVar26;
	int iVar27;
	
	if (bParam1)
	{
		if (_GET_NO_LOADING_SCREEN())
		{
			SET_NO_LOADING_SCREEN(false);
		}
	}
	if (func_284())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = iParam2;
		SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		bVar24 = iParam2 & 16777216 != false;
		if (!func_282())
		{
			bVar25 = false;
			if (bParam1 == 1)
			{
				bVar25 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar25 = true;
			}
			if (bVar9 == 1)
			{
				bVar25 = true;
			}
			if (bVar25)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (NETWORK_IS_PLAYER_ACTIVE(iParam0) && (NETWORK_IS_PLAYER_ACTIVE(iParam0) || iParam3 == 1))
		{
			if (iParam3 && IS_ENTITY_DEAD(IS_ENTITY_DEAD(iParam0), 0))
			{
				return;
			}
			iVar26 = GET_PLAYER_PED(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && NETWORK_IS_GAME_IN_PROGRESS())
				{
					SET_PLAYER_VISIBLE_LOCALLY(1);
				}
				else if (bVar13 || (!func_94(PLAYER_ID(), 0) && !func_246()))
				{
					SET_ENTITY_VISIBLE(iVar26, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (NETWORK_IS_GAME_IN_PROGRESS() && !bVar18)
					{
						SET_PLAYER_VISIBLE_LOCALLY(0);
					}
					Global_2424073[iParam0 /*421*/].f_244 = 0;
				}
			}
			if (bParam1)
			{
				func_279(0, 0, 0);
				if (bVar24)
				{
					CLEAR_FOCUS();
				}
				if (!func_278(iVar26) && !IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar26))
				{
					if (!bVar21)
					{
						SET_ENTITY_COLLISION(iVar26, true, 0);
					}
				}
				if (!IS_ENTITY_ATTACHED(iVar26))
				{
					if (!bVar20)
					{
						FREEZE_ENTITY_POSITION(iVar26, false);
					}
					_SET_ENTITY_SOMETHING(iVar26, true);
				}
				else if (!bVar20)
				{
					FREEZE_ENTITY_POSITION(iVar26, false);
				}
				SET_PED_CAN_BE_TARGETTED(iVar26, true);
				SET_PLAYER_INVINCIBLE(iParam0, 0);
				0x6BC97F4F4BB3C04B(iParam0, 0);
				if (HAS_PED_HEAD_BLEND_FINISHED(iVar26) && HAS_PED_HEAD_BLEND_FINISHED(iVar26))
				{
					_0x4668D80430D6C299(iVar26);
				}
				SET_PED_CAN_RAGDOLL(iVar26, 1);
				if (IS_PLAYER_CONTROL_ON(IS_PLAYER_CONTROL_ON()) == 0)
				{
					func_277();
					func_276();
				}
				if (IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar22)
					{
					}
				}
				if (IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2424073[iParam0 /*421*/].f_245 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
				if (Global_2405071.f_2670)
				{
					Global_2405071.f_2670 = 0;
				}
			}
			else
			{
				if (!func_278(iVar26) && !IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar26))
				{
					if (!bVar21)
					{
						SET_ENTITY_COLLISION(iVar26, !bVar14, 0);
					}
					if (!IS_ENTITY_ATTACHED(iVar26))
					{
						if (!bVar20)
						{
							FREEZE_ENTITY_POSITION(iVar26, bVar15);
						}
						if (!bVar15)
						{
							_SET_ENTITY_SOMETHING(iVar26, true);
						}
					}
					if (func_275(Global_4456448.f_190930))
					{
						FREEZE_ENTITY_POSITION(iVar26, true);
					}
				}
				if (Global_1312850)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					SET_PLAYER_INVINCIBLE(iParam0, 0);
				}
				else
				{
					SET_PLAYER_INVINCIBLE(iParam0, 1);
				}
				SET_PED_CAN_BE_TARGETTED(iVar26, bVar16);
				if (bVar2)
				{
					if (!IS_PED_FATALLY_INJURED(iVar26) && !IS_PED_FATALLY_INJURED(iVar26, 0))
					{
						CLEAR_PED_TASKS_IMMEDIATELY(iVar26);
					}
				}
			}
			iVar27 = 0;
			if (bVar1)
			{
				iVar27 |= 2;
			}
			if (bVar2)
			{
				iVar27 |= 4;
			}
			if (bVar3)
			{
				iVar27 |= 8;
			}
			if (bVar4)
			{
				iVar27 |= 16;
			}
			if (bVar5)
			{
				iVar27 |= 32;
			}
			if (bVar6)
			{
				iVar27 |= 64;
			}
			if (bVar7)
			{
				iVar27 |= 128;
			}
			if (bVar8)
			{
				iVar27 |= 256;
			}
			if (bVar9)
			{
				iVar27 |= 512;
			}
			if (bVar10)
			{
				iVar27 |= 1024;
			}
			if (bVar11)
			{
				iVar27 |= 2048;
			}
			if (bVar12)
			{
				iVar27 |= 4096;
			}
			SET_PLAYER_CONTROL(iParam0, bParam1, iVar27);
		}
	}
}

bool func_275(int iParam0)
{
	return iParam0 == 17;
}

void func_276()
{
	vector3 vVar0;
	
	Global_2437549.f_1232 = 0;
	Global_2437549.f_1233 = 0;
	Global_2437549.f_1234 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2437549.f_1239 = -1;
	Global_2437549.f_1240 = 0;
	Global_2405071.f_2681 = { vVar0 };
}

void func_277()
{
	Global_2405071.f_692 = 0;
	Global_2405071.f_2724 = 0;
	Global_2405071.f_510 = 0;
	Global_2405071.f_598 = 0;
	Global_2424073[PLAYER_ID() /*421*/].f_207 = 0;
	Global_2405071.f_2679 = 0;
}

int func_278(int iParam0)
{
	int iVar0;
	
	if (IS_PED_IN_ANY_VEHICLE(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = GET_SCRIPT_TASK_STATUS(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_279(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (IS_ENTITY_DEAD(iParam1, 0))
	{
	}
	if (bParam0 == 1)
	{
		if (DOES_ENTITY_EXIST(iParam1))
		{
			if (IS_PED_A_PLAYER(iParam1))
			{
				if (!_0x3B39236746714134(_0x3B39236746714134(), _0x3B39236746714134(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == 1)
			{
				func_281();
			}
			else if (!IS_BIT_SET(Global_2359302.f_67, 1))
			{
				if (IS_BIT_SET(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						_SET_CAM_PERSPECTIVE(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				SET_BIT(&(Global_2359302.f_67), 1);
			}
		}
		if (func_94(PLAYER_ID(), 0))
		{
			NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1, 1);
		}
		else
		{
			_GET_DATE_AND_TIME_FROM_UNIX_EPOCH(bParam0, iParam1);
		}
		KEY_HUD_COLOUR(bParam0, iParam1);
		func_280(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_280(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STAT_SET_BOOL(iVar0, bParam1, 1);
	}
}

void func_281()
{
	int iVar0;
	
	if (!_0x5C707A667DF8B9FA())
	{
		if (!IS_BIT_SET(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = _0xEE778F8C7E1142E2(iVar0);
				iVar0++;
			}
			SET_BIT(&(Global_2359302.f_67), 2);
			SET_BIT(&(Global_2359302.f_67), 0);
		}
	}
}

int func_282()
{
	if (func_283() == 0)
	{
		return 1;
	}
	return 0;
}

int func_283()
{
	return Global_1312467.f_18;
}

int func_284()
{
	if (Global_1590446[PLAYER_ID() /*871*/].f_35 && !Global_2449755.f_2846.f_214 == -1)
	{
		return 1;
	}
	return 0;
}

int func_285()
{
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_286()
{
	if (func_304())
	{
		if (IS_CONTROL_JUST_RELEASED(2, 201) || IS_CONTROL_JUST_RELEASED(2, 201))
		{
			if (!func_285())
			{
				if (IS_SCREEN_FADED_IN())
				{
					func_272(1);
					func_105(-1);
					func_274(PLAYER_ID(), 0, 512, 0);
					DO_SCREEN_FADE_OUT(500);
					func_302(1, -1);
					func_287(3, 1, 1, 0);
					func_8(&(Local_117.f_196), 0, 0);
					func_8(&(Local_117.f_200), 0, 0);
					func_265(1);
				}
			}
		}
	}
}

int func_287(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (Global_76577)
	{
		if ((iParam0 != 17 && iParam0 != 3) && iParam0 != 23)
		{
			return 0;
		}
		if (!IS_BIT_SET(Global_4269615, 14))
		{
			if (iParam0 == 17)
			{
				SET_BIT(&Global_4269615, 14);
				SET_BIT(&Global_4269615, 16);
			}
			if (iParam0 == 3)
			{
				SET_BIT(&Global_4269615, 14);
				SET_BIT(&Global_4269615, 15);
			}
			if (iParam0 == 23)
			{
				SET_BIT(&Global_4269615, 14);
				SET_BIT(&Global_4269615, 27);
			}
		}
		if (Global_7363[iParam0 /*15*/].f_9 == 0)
		{
			func_299();
		}
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_7363[iParam0 /*15*/].f_9) > 0)
		{
			CLEAR_BIT(&Global_4269615, 14);
			CLEAR_BIT(&Global_4269615, 16);
			CLEAR_BIT(&Global_4269615, 15);
			CLEAR_BIT(&Global_4269615, 27);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	func_292();
	if (Global_19486.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_59(0) == 1)
		{
			return 0;
		}
	}
	if (Global_19452 == 1)
	{
		return 0;
	}
	if (Global_19486.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!IS_THREAD_ACTIVE(Global_19483))
	{
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_19486.f_1 < 4)
			{
				func_291("cellphone_flashhand");
				if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					Global_19483 = start_new_script("cellphone_flashhand", 1424);
				}
				SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}
	while (!Global_19468)
	{
		wait(0);
	}
	func_299();
	func_288();
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_7363[iParam0 /*15*/].f_9) == 0)
	{
		Global_7962 = 0;
		Global_19486.f_1 = 7;
		func_291(&(Global_7363[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_7363[iParam0 /*15*/].f_9) == 0)
			{
				Global_19484 = start_new_script(&(Global_7363[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_7363[iParam0 /*15*/].f_9) == 0)
		{
			Global_19484 = start_new_script(&(Global_7363[iParam0 /*15*/].f_5), 2552);
		}
		SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_7363[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_288()
{
	if (Global_76577 == 0)
	{
		Global_7363[14 /*15*/].f_4 = -99;
		Global_7363[4 /*15*/].f_4 = -99;
		if (Global_2458994)
		{
			if (func_290(14))
			{
				func_289(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_289(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_289(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_289(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_289(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_7363[iParam0 /*15*/]), sParam1, 16);
	Global_7363[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_7363[iParam0 /*15*/].f_5), sParam3, 16);
	Global_7363[iParam0 /*15*/].f_9 = GET_HASH_KEY(sParam3);
	Global_7363[iParam0 /*15*/].f_10 = iParam4;
	Global_7363[iParam0 /*15*/].f_11 = iParam5;
	Global_7363[iParam0 /*15*/].f_12 = iParam6;
	Global_7363[iParam0 /*15*/].f_13 = iParam7;
	Global_7363[iParam0 /*15*/].f_14 = iParam8;
	if (Global_7363[iParam0 /*15*/].f_12 == 0)
	{
		Global_7363[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_7363[iParam0 /*15*/].f_13 == 0)
	{
		Global_7363[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_7363[iParam0 /*15*/].f_14 == 0)
	{
		Global_7363[iParam0 /*15*/].f_14 = 0;
	}
}

bool func_290(int iParam0)
{
	return Global_41396 == iParam0;
}

void func_291(char* sParam0)
{
	REQUEST_SCRIPT(sParam0);
	while (!HAS_SCRIPT_LOADED(sParam0))
	{
		wait(0);
	}
}

void func_292()
{
	if (func_290(14))
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
		Global_19486 = func_293();
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

var func_293()
{
	func_294();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_294()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()))
	{
		if (func_297(Global_111560.f_2358.f_539.f_4321) != GET_ENTITY_MODEL(GET_ENTITY_MODEL()))
		{
			iVar0 = func_296(PLAYER_PED_ID());
			if (func_295(iVar0) && (!func_290(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_295(Global_111560.f_2358.f_539.f_4321))
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

bool func_295(int iParam0)
{
	return iParam0 < 3;
}

int func_296(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_297(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_297(int iParam0)
{
	if (func_295(iParam0))
	{
		return func_298(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_298(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_299()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_7363[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_76577 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 161)
		{
			if (func_301(iVar2, Global_19486) == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_289(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_289(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_289(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_41396 == 15 && func_300(0) == 0) && Global_7361 == 0)
		{
			func_289(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_19667 = 0;
			Global_7362 = 255;
		}
		else
		{
			func_289(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_19667 = 1;
			Global_7362 = 42;
		}
		if (iVar1 == 1)
		{
			func_289(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_289(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_289(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_289(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_289(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_111560.f_14046.f_89 == 1)
		{
			func_289(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_111560.f_14046.f_88 == 1)
		{
			func_289(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_289(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_289(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_289(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_289(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_289(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_289(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_289(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_289(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_289(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_289(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_289(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_289(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_289(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_289(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_289(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_289(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_289(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (IS_BIT_SET(Global_4269615, 4) == 1)
		{
			func_289(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_289(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_289(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_289(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_289(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_289(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_289(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_289(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_289(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_289(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_289(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_289(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_289(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_289(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_289(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_289(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_289(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!IS_BIT_SET(Global_4269615, 4) == 1)
		{
			if (Global_1573923)
			{
				func_289(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (IS_BIT_SET(Global_4269615, 20) == 1)
			{
				func_289(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (IS_BIT_SET(Global_4269615, 22) == 1)
			{
				func_289(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (IS_BIT_SET(Global_4269615, 26) == 1)
			{
				func_289(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
			}
		}
		if ((((IS_BIT_SET(Global_4269615, 4) == 0 && Global_1573923 == 0) && IS_BIT_SET(Global_4269615, 20) == 0) && IS_BIT_SET(Global_4269615, 22) == 0) && IS_BIT_SET(Global_4269615, 26) == 0)
		{
			func_289(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
		}
	}
}

bool func_300(bool bParam0)
{
	if (!bParam0 && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return IS_BIT_SET(Global_76825, 0);
}

int func_301(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_19[iParam1];
}

void func_302(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_102(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22350.f_8385)
	{
		RESET_HUD_COMPONENT_VALUES(15);
		Global_22350.f_8385 = 0;
	}
	_CLEAR_NOTIFICATIONS_POS(0f);
	if (Global_22350.f_5628[iVar0])
	{
		CLEAR_ADDITIONAL_TEXT(9, false);
		Global_22350.f_5628[iVar0] = 0;
	}
	if (Global_22350.f_5614[iVar0])
	{
		SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_22350.f_5614[iVar0] = 0;
	}
	if (Global_22350.f_5621[iVar0])
	{
		SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_22350.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_303(&(Global_22350.f_5660[iVar0 /*10*/]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_303(int iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_304()
{
	if (func_60())
	{
		return 0;
	}
	if (IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if ((func_152(0) || func_151()) || _IS_RECORDING())
	{
		func_6(&(Local_117.f_204));
		func_8(&(Local_117.f_204), 0, 0);
		CLEAR_BIT(&(Local_117.f_5), 16);
		func_81();
		return 0;
	}
	else if (func_10(&(Local_117.f_204)))
	{
		if (!func_7(&(Local_117.f_204), 2000, 0))
		{
			return 0;
		}
		else
		{
			CLEAR_BIT(&(Local_117.f_5), 16);
			func_6(&(Local_117.f_204));
		}
	}
	if (func_147(PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

void func_305()
{
	if (func_306())
	{
		if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121) && !NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121), 0))
		{
			if (NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_117.f_121))
			{
				if (!IS_BIT_SET(Local_117.f_5, 25))
				{
					FREEZE_ENTITY_POSITION(FREEZE_ENTITY_POSITION(Local_117.f_121), true);
					SET_BIT(&(Local_117.f_5), 25);
				}
			}
			else
			{
				NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_117.f_121);
			}
		}
	}
	else if (IS_BIT_SET(Local_117.f_5, 25))
	{
		if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121) && !NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121), 0))
		{
			if (NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_117.f_121))
			{
				FREEZE_ENTITY_POSITION(FREEZE_ENTITY_POSITION(Local_117.f_121), false);
				CLEAR_BIT(&(Local_117.f_5), 25);
			}
			else
			{
				NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_117.f_121);
			}
		}
	}
}

int func_306()
{
	if (func_147(PLAYER_ID()))
	{
		if (IS_BIT_SET(Global_2530259, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_307()
{
	int iVar0;
	
	if (func_27())
	{
		Global_1687880.f_1 = 0;
	}
	if (func_311() || func_176())
	{
		if (!func_10(&(Local_117.f_176)))
		{
			func_8(&(Local_117.f_176), 0, 0);
		}
		else if (func_7(&(Local_117.f_176), Global_1687880.f_1, 0) || func_176())
		{
			func_6(&(Local_117.f_174));
			if (func_27())
			{
				if (func_25(PLAYER_PED_ID()))
				{
					ADD_OWNED_EXPLOSION(ADD_OWNED_EXPLOSION(), Local_117.f_112, 72, 0.5f, 1, 0, 1065353216);
				}
				else
				{
					ADD_EXPLOSION(Local_117.f_112, 72, 0.5f, 1, 0, 1f, 0);
				}
				SET_PAD_SHAKE(0, 300, 200);
				SET_NETWORK_ID_CAN_MIGRATE(Local_117.f_121, true);
				CLEAR_FOCUS();
				iVar0 = NET_TO_OBJ(Local_117.f_121);
				DELETE_OBJECT(&iVar0);
				SET_BIT(&(Local_117.f_6), 2);
			}
			if (func_18())
			{
				func_310(1);
				if (Local_117.f_25 == 0)
				{
					func_308(6, 0, 0);
				}
				else
				{
					func_308(5, 0, 0);
				}
			}
			func_353(1);
			func_352(4);
		}
	}
	else if (func_10(&(Local_117.f_176)))
	{
		func_186(&(Local_117.f_176), 0, 0);
	}
}

void func_308(int iParam0, bool bParam1, bool bParam2)
{
	char cVar0[64];
	int iVar1;
	float fVar2;
	float fVar3;
	
	StringCopy(&cVar0, func_309(iParam0), 64);
	iVar1 = 5;
	if (bParam1)
	{
		iVar1 = 69;
	}
	fVar2 = 8f;
	fVar3 = -8f;
	Local_117.f_78 = _0x77758139EC9B66C7(Local_117.f_115, 0f, 0f, Local_117.f_81, 2, bParam2, bParam1, 1065353216, 0, 1065353216);
	NETWORK_CREATE_SYNCHRONISED_SCENE(NETWORK_CREATE_SYNCHRONISED_SCENE(), Local_117.f_78, Local_117.f_120, &cVar0, fVar2, fVar3, iVar1, 0, 1148846080, 0);
	if (iParam0 == 0)
	{
		if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121))
		{
			StringConCat(&cVar0, "_DRONE", 64);
			0xA5EAFE473E45C442(0xA5EAFE473E45C442(Local_117.f_121), Local_117.f_78, Local_117.f_120, &cVar0, fVar2, fVar3, 8);
		}
	}
	StringCopy(&cVar0, func_309(iParam0), 64);
	StringConCat(&cVar0, "_PHONE", 64);
	if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_122))
	{
		PLAY_ENTITY_ANIM(PLAY_ENTITY_ANIM(Local_117.f_122), &cVar0, Local_117.f_120, fVar2, bParam1, bParam2, 0, 0f, 0);
		FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_117.f_122));
	}
	NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(Local_117.f_78);
}

char* func_309(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ENTER";
		
		case 1:
			return "BASE";
		
		case 2:
			return "USE_01";
		
		case 3:
			return "USE_02";
		
		case 4:
			return "USE_03";
		
		case 5:
			return "FAIL";
		
		case 6:
			return "EXIT";
		
		default:
	}
	return "";
}

void func_310(bool bParam0)
{
	int iVar0;
	
	iVar0 = NETWORK_STOP_SYNCHRONISED_SCENE(iVar0);
	if (IS_SYNCHRONIZED_SCENE_RUNNING(iVar0))
	{
		DETACH_SYNCHRONIZED_SCENE(iVar0);
		NETWORK_START_SYNCHRONISED_SCENE(iVar0);
		iVar0 = -1;
	}
	else if (bParam0)
	{
		if (func_25(PLAYER_PED_ID()))
		{
			CLEAR_PED_TASKS(CLEAR_PED_TASKS());
		}
	}
}

int func_311()
{
	if ((NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121) && NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121), 0)) && !NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_5, 2))
	{
		return 1;
	}
	if (Local_117.f_11 == 2)
	{
		Local_117.f_25 = 1;
		return 1;
	}
	if (IS_BIT_SET(Local_117.f_5, 1))
	{
		return 1;
	}
	if (func_320())
	{
		Local_117.f_25 = 5;
		return 1;
	}
	if (func_119() && func_313())
	{
		Local_117.f_25 = 5;
		return 1;
	}
	if (func_18())
	{
		if (func_313())
		{
			Local_117.f_25 = 5;
			return 1;
		}
	}
	if (IS_BIT_SET(Local_117.f_5, 2))
	{
		Local_117.f_25 = 4;
		return 1;
	}
	if (func_159())
	{
		if (!func_10(&(Local_117.f_184)))
		{
			func_8(&(Local_117.f_184), 0, 0);
		}
		else if (func_7(&(Local_117.f_184), 3000, 0))
		{
			Local_117.f_25 = 0;
			return 1;
		}
	}
	if (IS_BIT_SET(Local_117.f_5, 7))
	{
		Local_117.f_25 = 0;
		return 1;
	}
	if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121))
	{
		if (IS_ENTITY_IN_WATER(IS_ENTITY_IN_WATER(Local_117.f_121)) || func_183(IS_ENTITY_IN_WATER(Local_117.f_121), 0))
		{
			Local_117.f_25 = 3;
			return 1;
		}
	}
	if (!func_119() && !func_312())
	{
		if (Local_117.f_112.f_2 >= func_139())
		{
			Local_117.f_25 = 5;
			return 1;
		}
	}
	return 0;
}

bool func_312()
{
	return IS_BIT_SET(Global_1687880.f_2, 0);
}

int func_313()
{
	vector3 vVar0;
	int iVar1;
	
	if (func_319())
	{
		return 0;
	}
	if (func_15(PLAYER_ID(), 1, 1))
	{
		if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121) && !NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121), 0))
		{
			if (func_119())
			{
				if (DOES_ENTITY_EXIST(func_318()) && !DOES_ENTITY_EXIST(func_318(), 0))
				{
					vVar0 = { GET_ENTITY_COORDS(func_318(), true) };
				}
			}
			else if (func_17())
			{
				if (!func_18())
				{
					iVar1 = func_314(Global_2424073[PLAYER_ID() /*421*/].f_309.f_8);
					switch (iVar1)
					{
						case 128:
							vVar0 = { -245.64f, 6210.96f, 35.94f };
							break;
						
						case 129:
							vVar0 = { 1695.88f, 4783.87f, 47.02f };
							break;
						
						case 130:
							vVar0 = { -115.15f, -1771.65f, 38.86f };
							break;
						
						case 131:
							vVar0 = { -600.96f, 280.47f, 87.04f };
							break;
						
						case 132:
							vVar0 = { -1269.72f, -304.09f, 40f };
							break;
						
						case 133:
							vVar0 = { 758.46f, -814.57f, 30.3f };
							break;
					}
				}
				else
				{
					vVar0 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true) };
				}
			}
			else
			{
				vVar0 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true) };
			}
			if (func_25(NET_TO_OBJ(Local_117.f_121)))
			{
				Local_117.f_83 = func_136(NET_TO_OBJ(Local_117.f_121), vVar0, 1);
				if (Local_117.f_83 > func_139())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_314(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_16())
	{
		iVar0 = func_317(iParam0);
		if (iVar0 != 0)
		{
			return func_315(iVar0);
		}
	}
	return -1;
}

int func_315(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 136)
	{
		if (func_14(iVar0) == 17)
		{
			if (func_316(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_316(int iParam0)
{
	switch (iParam0)
	{
		case 128:
			return 1;
		
		case 129:
			return 2;
		
		case 130:
			return 3;
		
		case 131:
			return 4;
		
		case 132:
			return 5;
		
		case 133:
			return 6;
		
		default:
	}
	return 0;
}

int func_317(int iParam0)
{
	if (iParam0 != func_16())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_389;
	}
	return 0;
}

int func_318()
{
	if (Global_1590293 != func_16())
	{
		if (!func_37(Global_1590293))
		{
			if (DOES_ENTITY_EXIST(Global_1366586))
			{
				return Global_1366586;
			}
			if (DOES_ENTITY_EXIST(Global_1694200[Global_1590293]))
			{
				return Global_1694200[Global_1590293];
			}
		}
	}
	return -1;
}

bool func_319()
{
	return IS_BIT_SET(Global_1687880, 6);
}

int func_320()
{
	float fVar0;
	
	if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121) && !NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121), 0))
	{
		if (GET_GROUND_Z_FOR_3D_COORD(Local_117.f_112, &fVar0, 1, 0))
		{
			Local_117.f_84 = (Local_117.f_112.f_2 - fVar0);
			if (Local_117.f_84 > IntToFloat(Global_262145.f_24137))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_321()
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	
	if (!func_27())
	{
		return;
	}
	if ((NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121) && !NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121), 0)) && NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_131))
	{
		if (NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_117.f_121))
		{
			vVar0 = { GET_ENTITY_ROTATION(GET_ENTITY_ROTATION(Local_117.f_121), 2) };
			vVar0 = { (vVar0.x + 180f), (-vVar0.y + 180f), vVar0.z };
			SET_CAM_ROT(Local_117.f_131, vVar0, 2);
			if (IS_BIT_SET(Local_117.f_5, 1) || func_176())
			{
				return;
			}
			vVar1 = { func_324(func_325()) };
			vVar2 = { func_324(func_323(func_325())) };
			vVar3 = { func_322(vVar1, vVar2) };
			fVar4 = 5f;
			if (!_IS_INPUT_DISABLED(0))
			{
				if (_0x5B84D09CEC5209C5(2, 208) != 0f)
				{
					iVar5 = 1;
				}
				if (_0x5B84D09CEC5209C5(2, 207) != 0f)
				{
					iVar6 = 1;
				}
			}
			else
			{
				if (_0x5B84D09CEC5209C5(2, 209) != 0f)
				{
					iVar5 = 1;
				}
				if (_0x5B84D09CEC5209C5(2, 210) != 0f)
				{
					iVar6 = 1;
				}
			}
			if (iVar5 && !func_240())
			{
				Local_117.f_82 = 140f;
				fVar4 = 7f;
			}
			else if (iVar6 && !func_240())
			{
				Local_117.f_82 = 60f;
				fVar4 = 3.5f;
			}
			else
			{
				Local_117.f_82 = 100f;
			}
			if (_IS_INPUT_DISABLED(0))
			{
				if (Local_117[2] >= 127)
				{
					Local_117[2] = 127;
				}
				else if (Local_117[2] <= -127)
				{
					Local_117[2] = -127;
				}
				if (Local_117[0] >= 127)
				{
					Local_117[0] = 127;
				}
				else if (Local_117[0] <= -127)
				{
					Local_117[0] = -127;
				}
			}
			if (Local_117[2] > 0 || Local_117[0] > 0)
			{
				if (Local_117[2] > 0)
				{
					fVar7 = -(fVar4 / (127f / IntToFloat(Local_117[2])));
				}
				else
				{
					fVar7 = -(fVar4 / (127f / IntToFloat(Local_117[0])));
				}
				APPLY_FORCE_TO_ENTITY(APPLY_FORCE_TO_ENTITY(Local_117.f_121), 0, vVar3 * Vector(fVar7, fVar7, fVar7), 0f, -1.2f, 0f, 0, 1, 1, 1, 0, 1);
				APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_117.f_121), 0, vVar1 * Vector(-Local_117.f_82, -Local_117.f_82, -Local_117.f_82), 0, 1, 1, 0);
				APPLY_FORCE_TO_ENTITY(APPLY_FORCE_TO_ENTITY(Local_117.f_121), 0, 0f, 0f, 1f, 0f, -1.2f, 0f, 0, 1, 1, 1, 0, 1);
			}
			else if (Local_117[2] < 0 || Local_117[0] < 0)
			{
				if (Local_117[0] < 0)
				{
					fVar8 = -(fVar4 / (127f / IntToFloat(Local_117[0])));
				}
				else
				{
					fVar8 = -(fVar4 / (127f / IntToFloat(Local_117[2])));
				}
				APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_117.f_121), 0, vVar1 * Vector(-Local_117.f_82, -Local_117.f_82, -Local_117.f_82), 0, 1, 1, 0);
				APPLY_FORCE_TO_ENTITY(APPLY_FORCE_TO_ENTITY(Local_117.f_121), 0, vVar3 * Vector(fVar8, fVar8, fVar8), 0f, -1.2f, 0f, 0, 1, 1, 1, 0, 1);
				APPLY_FORCE_TO_ENTITY(APPLY_FORCE_TO_ENTITY(Local_117.f_121), 0, 0f, 0f, 1f, 0f, -1.2f, 0f, 0, 1, 1, 1, 0, 1);
			}
			else
			{
				APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_117.f_121), 0, vVar1 * Vector(-Local_117.f_82, -Local_117.f_82, -Local_117.f_82), 0, 1, 1, 0);
			}
		}
		else
		{
			NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_117.f_121);
		}
	}
}

Vector3 func_322(vector3 vParam0, vector3 vParam1)
{
	return ((vParam0.y * vParam1.z) - (vParam0.z * vParam1.y)), ((vParam0.z * vParam1.x) - (vParam0.x * vParam1.z)), ((vParam0.x * vParam1.y) - (vParam0.y * vParam1.x));
}

Vector3 func_323(struct<2> Param0, var uParam1)
{
	vector3 vVar0;
	
	vVar0 = { sin(Param0.f_1), (-sin(Param0) * cos(Param0.f_1)), (cos(Param0) * cos(Param0.f_1)) };
	return vVar0;
}

Vector3 func_324(vector3 vParam0)
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

Vector3 func_325()
{
	vector3 vVar0;
	
	vVar0 = { 0f, 1f, 0f };
	func_326(&vVar0);
	return vVar0;
}

void func_326(var uParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	fVar0 = cos(0f);
	fVar1 = sin(0f);
	vVar2.x = *uParam0;
	vVar2.y = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.z = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = cos(0f);
	fVar1 = sin(0f);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.y = uParam0->f_1;
	vVar2.z = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = cos(0f);
	fVar1 = sin(0f);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.y = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.z = uParam0->f_2;
	*uParam0 = { vVar2 };
}

void func_327()
{
	float fVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	float fVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	vector3 vVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	float fVar24;
	vector3 vVar25;
	float fVar26;
	float fVar27;
	float fVar28;
	float fVar29;
	
	if (func_27())
	{
		return;
	}
	if ((NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121) && !NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121), 0)) && NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_131))
	{
		if (NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_117.f_121))
		{
			fVar0 = 0f;
			if (!func_29() && !func_9())
			{
				if (!func_231())
				{
					if (func_10(&(Local_117.f_182)))
					{
						iVar1 = Global_262145.f_24135;
						if (func_9())
						{
							iVar1 = (iVar1 / 3);
						}
						if (!func_7(&(Local_117.f_182), iVar1, 0))
						{
							iVar2 = (100 * ABSI(ABSI(ABSI(), Local_117.f_182)));
							Local_117.f_19 = (iVar2 / iVar1);
						}
						else
						{
							if (func_25(Local_117.f_123))
							{
								ATTACH_ENTITY_TO_ENTITY(Local_117.f_123, ATTACH_ENTITY_TO_ENTITY(Local_117.f_121), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
							Local_117.f_19 = 100;
							func_6(&(Local_117.f_182));
							if (!HAS_SOUND_FINISHED(Local_117.f_42))
							{
								STOP_SOUND(Local_117.f_42);
								RELEASE_SOUND_ID(Local_117.f_42);
								Local_117.f_42 = -1;
							}
						}
					}
					if (!_IS_INPUT_DISABLED(0))
					{
						bVar3 = IS_DISABLED_CONTROL_JUST_PRESSED(0, 209);
					}
					else
					{
						bVar3 = IS_DISABLED_CONTROL_JUST_PRESSED(0, 203);
					}
					if ((((bVar3 && Local_117.f_19 == 100) && !func_240()) && !func_60()) && func_143())
					{
						fVar0 = 120f;
						if (func_9())
						{
							fVar0 = 110f;
						}
						else if (func_17())
						{
							fVar0 = 49f;
						}
						if (IntToFloat(Local_117[1]) != 0f)
						{
							func_331(1);
						}
						else
						{
							func_331(0);
						}
						ANIMPOSTFX_PLAY("RaceTurbo", 0, 0);
						func_8(&(Local_117.f_180), 0, 0);
						func_330(1);
						if (HAS_SOUND_FINISHED(Local_117.f_41))
						{
							Local_117.f_41 = GET_SOUND_ID();
							PLAY_SOUND_FRONTEND(Local_117.f_41, "HUD_Boost_Loop", Local_117.f_119, true);
						}
					}
				}
				else
				{
					fVar0 = 120f;
					if (func_9())
					{
						fVar0 = 115f;
					}
					else if (func_17())
					{
						fVar0 = 49f;
					}
					if (DOES_CAM_EXIST(Local_117.f_131))
					{
						if (!IS_CAM_SHAKING(Local_117.f_131))
						{
							SHAKE_CAM(Local_117.f_131, "DRONE_BOOST_SHAKE", 1f);
							SET_CAM_SHAKE_AMPLITUDE(Local_117.f_131, 0.15f);
						}
					}
					if (func_10(&(Local_117.f_180)))
					{
						if (func_7(&(Local_117.f_180), Global_262145.f_24134, 0))
						{
							Local_117.f_19 = 0;
							func_331(0);
							func_330(0);
							func_6(&(Local_117.f_182));
							func_8(&(Local_117.f_182), 0, 0);
							STOP_CAM_SHAKING(Local_117.f_131, 1);
							STOP_PAD_SHAKE(0);
							ANIMPOSTFX_STOP("RaceTurbo");
							func_6(&(Local_117.f_180));
							if (!HAS_SOUND_FINISHED(Local_117.f_41))
							{
								STOP_SOUND(Local_117.f_41);
								RELEASE_SOUND_ID(Local_117.f_41);
								Local_117.f_41 = -1;
							}
							if (HAS_SOUND_FINISHED(Local_117.f_42))
							{
								Local_117.f_42 = GET_SOUND_ID();
								PLAY_SOUND_FRONTEND(Local_117.f_42, "HUD_Boost_Recharge_Loop", Local_117.f_119, true);
							}
						}
						else
						{
							fVar4 = (100f / (to_float(Global_262145.f_24134) / IntToFloat(IS_TIME_EQUAL_TO(IS_TIME_EQUAL_TO(), Local_117.f_180))));
							Local_117.f_19 = (100 - round(fVar4));
							SET_PAD_SHAKE(0, Global_262145.f_24134, 255);
						}
					}
				}
			}
			vVar5 = { Local_117.f_112 };
			vVar6 = { GET_ENTITY_ROTATION(GET_ENTITY_ROTATION(Local_117.f_121), 2) };
			vVar6 = { (vVar6.x + 180f), (-vVar6.y + 180f), vVar6.z };
			SET_CAM_ROT(Local_117.f_131, vVar6, 2);
			if (IS_BIT_SET(Local_117.f_5, 1) || func_176())
			{
				return;
			}
			vVar7 = { func_324(func_325()) };
			vVar8 = { func_324(func_323(func_325())) };
			GET_GROUND_Z_FOR_3D_COORD(vVar5, &fVar9, 1, 0);
			if (!func_329())
			{
				if (Local_117.f_9 == 2 || (vVar5.z - fVar9) < 2f)
				{
					fVar10 = 24f;
					if (Local_117[1] != 0)
					{
						DISABLE_CONTROL_ACTION(2, 207, 1);
					}
					if (_0x5B84D09CEC5209C5(2, 207) != 0f || Local_117[1] != 0)
					{
						if ((vVar5.z - fVar9) < 0.5f || _0x5B84D09CEC5209C5(2, 207) != 0f)
						{
							fVar10 = 24f;
						}
						else
						{
							fVar10 = 10f;
						}
					}
					else
					{
						fVar10 = 3f;
					}
					APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_117.f_121), 0, 0f, 0f, fVar10, 0, 1, 1, 0);
				}
			}
			if (_IS_INPUT_DISABLED(0))
			{
				if (Local_117[2] >= 127)
				{
					Local_117[2] = 127;
				}
				else if (Local_117[2] <= -127)
				{
					Local_117[2] = -127;
				}
				if (Local_117[0] >= 127)
				{
					Local_117[0] = 127;
				}
				else if (Local_117[0] <= -127)
				{
					Local_117[0] = -127;
				}
			}
			if (!_IS_INPUT_DISABLED(0))
			{
				if (_0x5B84D09CEC5209C5(2, 208) != 0f)
				{
					iVar11 = 1;
				}
				if (_0x5B84D09CEC5209C5(2, 207) != 0f)
				{
					iVar12 = 1;
				}
			}
			else
			{
				if (_0x5B84D09CEC5209C5(2, 209) != 0f)
				{
					iVar11 = 1;
				}
				if (_0x5B84D09CEC5209C5(2, 210) != 0f)
				{
					iVar12 = 1;
				}
			}
			if (((iVar11 && func_328()) && !func_60()) || (func_231() && !func_230()))
			{
				fVar15 = Local_117.f_82;
				if (func_142())
				{
					fVar15 = 5f;
				}
				if (func_29() || func_9())
				{
					fVar14 = 10f;
				}
				if (func_231() && !func_230())
				{
					if (!_IS_INPUT_DISABLED(0))
					{
						fVar13 = ((fVar15 + fVar0) / (1f / _0x5B84D09CEC5209C5(2, 208)));
					}
					else
					{
						fVar13 = ((fVar15 + fVar0) / (1f / _0x5B84D09CEC5209C5(2, 209)));
					}
				}
				else if (!_IS_INPUT_DISABLED(0))
				{
					fVar13 = ((fVar15 + fVar14) / (1f / _0x5B84D09CEC5209C5(2, 208)));
				}
				else
				{
					fVar13 = ((fVar15 + fVar14) / (1f / _0x5B84D09CEC5209C5(2, 209)));
				}
				vVar16 = { vVar8 * Vector(fVar13, fVar13, fVar13) };
				if (vVar16.z > 149f)
				{
					vVar16.z = 149f;
				}
				APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_117.f_121), 0, vVar16, 0, 1, 1, 0);
			}
			else if (((iVar12 && !func_60()) && func_328()) && !func_240())
			{
				if (func_29() || func_9())
				{
					fVar18 = 10f;
				}
				if (!_IS_INPUT_DISABLED(0))
				{
					fVar17 = ((Local_117.f_82 + fVar18) / (1f / _0x5B84D09CEC5209C5(2, 207)));
				}
				else
				{
					fVar17 = ((Local_117.f_82 + fVar18) / (1f / _0x5B84D09CEC5209C5(2, 210)));
				}
				APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_117.f_121), 0, vVar8 * Vector(-fVar17, -fVar17, -fVar17), 0, 1, 1, 0);
			}
			if (((Local_117[1] > 0 && !func_231()) && !func_240()) && !func_60())
			{
				if (func_29())
				{
					fVar21 = 40f;
				}
				else
				{
					fVar21 = 6.4f;
				}
				fVar19 = (Local_117.f_82 / (127f / IntToFloat(Local_117[1])));
				fVar20 = (fVar21 / (127f / IntToFloat(Local_117[1])));
				APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_117.f_121), 0, vVar7 * Vector(fVar19, fVar19, fVar19), 0, 1, 1, 0);
				APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_117.f_121), 0, 0f, 0f, fVar20, 0, 1, 1, 0);
			}
			else if ((((Local_117[1] < 0 && !func_231()) && !func_240()) && !func_60()) || (func_231() && func_230()))
			{
				if (func_231() && func_230())
				{
					fVar24 = 50f;
					if (func_9())
					{
						fVar22 = (Local_117.f_82 / -1f);
					}
					else
					{
						fVar22 = ((Local_117.f_82 + fVar0) / -1f);
					}
					fVar23 = (fVar24 / -1f);
				}
				else
				{
					if (func_29() || func_9())
					{
						fVar24 = 40f;
					}
					else if (func_17())
					{
						fVar24 = 30f;
					}
					else
					{
						fVar24 = 6.4f;
					}
					if (func_9())
					{
						fVar22 = (Local_117.f_82 / (127f / IntToFloat(Local_117[1])));
					}
					else
					{
						fVar22 = ((Local_117.f_82 + fVar0) / (127f / IntToFloat(Local_117[1])));
					}
					fVar23 = (fVar24 / (127f / IntToFloat(Local_117[1])));
				}
				if (func_9())
				{
					if (!func_230())
					{
						APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_117.f_121), 0, 0f, 0f, -fVar23, 0, 1, 1, 0);
						APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_117.f_121), 0, vVar7 * Vector(fVar22, fVar22, fVar22), 0, 1, 1, 0);
					}
					else
					{
						APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_117.f_121), 0, 0f, 0f, 41f, 0, 1, 1, 0);
						APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_117.f_121), 0, 0f, -149f, 0f, 0, 1, 1, 0);
					}
				}
				else
				{
					APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_117.f_121), 0, 0f, 0f, -fVar23, 0, 1, 1, 0);
					APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_117.f_121), 0, vVar7 * Vector(fVar22, fVar22, fVar22), 0, 1, 1, 0);
				}
			}
			vVar25 = { func_322(vVar7, vVar8) };
			if ((!func_231() && !func_240()) && !func_60())
			{
				if (Local_117[0] > 0)
				{
					fVar26 = -(Local_117.f_82 / (127f / IntToFloat(Local_117[0])));
					fVar27 = (8f / (127f / IntToFloat(Local_117[0])));
					APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_117.f_121), 0, vVar25 * Vector(fVar26, fVar26, fVar26), 0, 1, 1, 0);
					APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_117.f_121), 0, 0f, 0f, fVar27, 0, 1, 1, 0);
				}
				else if (Local_117[0] < 0)
				{
					fVar28 = -(Local_117.f_82 / (127f / IntToFloat(Local_117[0])));
					fVar29 = (8f / (127f / IntToFloat(Local_117[0])));
					APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_117.f_121), 0, vVar25 * Vector(fVar28, fVar28, fVar28), 0, 1, 1, 0);
					APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_117.f_121), 0, 0f, 0f, -fVar29, 0, 1, 1, 0);
				}
			}
		}
		else
		{
			NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_117.f_121);
		}
	}
}

int func_328()
{
	if (func_240())
	{
		return 0;
	}
	if (func_231() && !func_230())
	{
		return 0;
	}
	return 1;
}

bool func_329()
{
	return IS_BIT_SET(Global_1687880, 2);
}

void func_330(bool bParam0)
{
	if (bParam0)
	{
		if (!IS_BIT_SET(Local_117.f_5, 21))
		{
			SET_BIT(&(Local_117.f_5), 21);
		}
	}
	else if (IS_BIT_SET(Local_117.f_5, 21))
	{
		CLEAR_BIT(&(Local_117.f_5), 21);
	}
}

void func_331(bool bParam0)
{
	if (bParam0)
	{
		if (!IS_BIT_SET(Local_117.f_5, 22))
		{
			SET_BIT(&(Local_117.f_5), 22);
		}
	}
	else if (IS_BIT_SET(Local_117.f_5, 22))
	{
		CLEAR_BIT(&(Local_117.f_5), 22);
	}
}

void func_332()
{
	float fVar0;
	float fVar1;
	
	if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121))
	{
		if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(Local_117.f_121), 0))
		{
			if ((func_9() || func_29()) || func_27())
			{
				fVar0 = -323.1f;
				fVar1 = -1970.9f;
			}
			else
			{
				fVar0 = Local_117.f_112;
				fVar1 = Local_117.f_112.f_1;
			}
			_SET_PLAYER_BLIP_POSITION_THIS_FRAME(fVar0, fVar1);
			0xA17784FCA9548D15(fVar0, fVar1, 0);
			if (!IS_VALID_INTERIOR(Global_1687880.f_24) && !func_27())
			{
				if (!IS_BIT_SET(Local_117.f_5, 8))
				{
					_0x20FE7FDFEEAD38C0();
				}
				SET_RADAR_AS_EXTERIOR_THIS_FRAME();
			}
		}
	}
}

void func_333()
{
	if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121))
	{
		if (HAS_SOUND_FINISHED(Local_117.f_40) && Local_117.f_40 == -1)
		{
			Local_117.f_40 = GET_SOUND_ID();
			PLAY_SOUND_FRONTEND(Local_117.f_40, "HUD_Loop", Local_117.f_119, true);
		}
	}
}

void func_334()
{
	if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121))
	{
		if (HAS_SOUND_FINISHED(Local_117.f_30))
		{
			Local_117.f_30 = GET_SOUND_ID();
			PLAY_SOUND_FROM_ENTITY(Local_117.f_30, "Flight_Loop", PLAY_SOUND_FROM_ENTITY(Local_117.f_121), Local_117.f_119, false, 0);
			SET_VARIABLE_ON_SOUND(Local_117.f_30, "DroneRotationalSpeed", Local_117.f_92);
		}
		else
		{
			SET_VARIABLE_ON_SOUND(Local_117.f_30, "DroneRotationalSpeed", Local_117.f_92);
		}
		if (HAS_SOUND_FINISHED(Local_117.f_39))
		{
			RELEASE_SOUND_ID(Local_117.f_39);
			Local_117.f_39 = -1;
		}
	}
}

void func_335()
{
	if (func_15(PLAYER_ID(), 1, 1))
	{
		SET_PED_RESET_FLAG(SET_PED_RESET_FLAG(), 450, true);
	}
}

void func_336()
{
	int iVar0;
	
	if (func_9())
	{
		iVar0 = INT_TO_PLAYERINDEX(Local_117.f_44);
		if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121) && func_15(iVar0, 1, 1))
		{
			if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(iVar0), 0))
			{
				if (func_337(NET_TO_OBJ(Local_117.f_121), NET_TO_OBJ(iVar0), Global_262145.f_24731, 1))
				{
					if (!func_190(PLAYER_ID(), iVar0))
					{
						if (GET_PLAYER_TEAM(GET_PLAYER_TEAM()) != GET_PLAYER_TEAM(iVar0) || GET_PLAYER_TEAM(GET_PLAYER_TEAM()) == -1)
						{
							SET_BIT(&(Local_117.f_5), 11);
							return;
						}
					}
				}
			}
		}
		CLEAR_BIT(&(Local_117.f_5), 11);
	}
}

bool func_337(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	return vdist2(GET_ENTITY_COORDS(iParam0, bParam3), GET_ENTITY_COORDS(iParam1, bParam3)) <= (fParam2 * fParam2);
}

void func_338()
{
	int iVar0;
	
	if (func_25(func_88()))
	{
		iVar0 = INT_TO_PLAYERINDEX(Local_117.f_44);
		if (PLAYER_ID() != iVar0)
		{
			if (func_15(iVar0, 1, 1))
			{
				if (IS_BIT_SET(Local_117.f_7, Local_117.f_44))
				{
					if (!NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
					{
						CLEAR_BIT(&(Local_117.f_7), Local_117.f_44);
					}
				}
				if (vdist2(func_213(iVar0), Local_117.f_112) < 12100f)
				{
					if (!IS_BIT_SET(Local_117.f_7, Local_117.f_44) && func_340(iVar0))
					{
						func_339(iVar0, 1);
						_SET_NETWORK_ID_SYNC_TO_PLAYER(Local_117.f_121, iVar0, 1);
						SET_BIT(&(Local_117.f_7), Local_117.f_44);
					}
				}
				else if (vdist2(func_213(iVar0), Local_117.f_112) > 14400f)
				{
					if (IS_BIT_SET(Local_117.f_7, Local_117.f_44))
					{
						func_339(iVar0, 0);
						_SET_NETWORK_ID_SYNC_TO_PLAYER(Local_117.f_121, iVar0, 0);
						CLEAR_BIT(&(Local_117.f_7), Local_117.f_44);
					}
				}
			}
		}
	}
}

void func_339(int iParam0, int iParam1)
{
	vector3 vVar0;
	int iVar1;
	
	vVar0.x = 406857800;
	vVar0.y = PLAYER_ID();
	vVar0.z = iParam1;
	iVar1 = func_173(iParam0);
	if (!iVar1 == 0)
	{
		TRIGGER_SCRIPT_EVENT(1, &vVar0, 3, iVar1);
	}
}

int func_340(int iParam0)
{
	if (func_342(iParam0, 1, 1))
	{
		return 0;
	}
	if (func_48(iParam0))
	{
		return 0;
	}
	if (func_341(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_341(int iParam0)
{
	if (IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_24, 14))
	{
		return 1;
	}
	if (IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_24, 11))
	{
		return 1;
	}
	return 0;
}

int func_342(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_16())
	{
		return 0;
	}
	if (IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_24, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_24, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_343()
{
	int iVar0;
	
	if ((func_27() || func_9()) || func_29())
	{
		iVar0 = 1000;
		if (func_9() || func_29())
		{
			iVar0 = 7000;
		}
		if (!IS_BIT_SET(Local_117.f_5, 29))
		{
			if (DOES_CAM_EXIST(Local_117.f_131) && DOES_CAM_EXIST(Local_117.f_131))
			{
				if (func_25(func_88()))
				{
					if (func_7(&(Local_117.f_198), iVar0, 0))
					{
						_SET_ENTITY_COLLISION_2(func_88(), true, 0);
						SET_ENTITY_COLLISION(func_88(), true, 0);
						SET_BIT(&(Local_117.f_5), 29);
					}
				}
			}
		}
	}
}

void func_344()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_351() || !func_18())
	{
		return;
	}
	switch (Local_117.f_79)
	{
		case 0:
			if (!NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_122))
			{
				iVar0 = -1211202509;
				if (func_161(iVar0))
				{
					if (func_74(CAN_REGISTER_MISSION_ENTITIES(false, 1) + 1, 0, 1))
					{
						if (!IS_BIT_SET(Local_117.f_6, 4))
						{
							RESERVE_NETWORK_MISSION_VEHICLES(RESERVE_NETWORK_MISSION_VEHICLES(false, 1) + 1);
							SET_BIT(&(Local_117.f_6), 4);
						}
						if (0x42613035157E4208(1))
						{
							if (func_350(&(Local_117.f_122), iVar0, GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true), 0, 1, 1, 0, 0, 0, 1))
							{
								_SET_NETWORK_ID_SYNC_TO_PLAYER(Local_117.f_122, _SET_NETWORK_ID_SYNC_TO_PLAYER(), 1);
								iVar1 = GET_PED_BONE_INDEX(GET_PED_BONE_INDEX(), 28422);
								ATTACH_ENTITY_TO_ENTITY(ATTACH_ENTITY_TO_ENTITY(Local_117.f_122), ATTACH_ENTITY_TO_ENTITY(), iVar1, 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
								SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
							}
						}
					}
				}
			}
			else
			{
				Local_117.f_79 = 1;
			}
			break;
		
		case 1:
			if (GET_SCRIPT_TASK_STATUS(GET_SCRIPT_TASK_STATUS(), 2106541073) != 0 && GET_SCRIPT_TASK_STATUS(GET_SCRIPT_TASK_STATUS(), 2106541073) != 1)
			{
				func_308(0, 0, 0);
				Local_117.f_79 = 2;
			}
			break;
		
		case 2:
			if (func_349(0, "CREATE"))
			{
				func_334();
				if (func_348(Local_117.f_122))
				{
					if (!IS_ENTITY_VISIBLE(IS_ENTITY_VISIBLE(Local_117.f_122)))
					{
						SET_ENTITY_VISIBLE(SET_ENTITY_VISIBLE(Local_117.f_122), true, 0);
					}
				}
				if (func_348(Local_117.f_121))
				{
					if (!IS_ENTITY_VISIBLE(IS_ENTITY_VISIBLE(Local_117.f_121)))
					{
						SET_ENTITY_VISIBLE(SET_ENTITY_VISIBLE(Local_117.f_121), true, 0);
						SET_ENTITY_VISIBLE(Local_117.f_125, false, 0);
					}
				}
			}
			if (func_346(1))
			{
				ATTACH_ENTITY_TO_ENTITY(Local_117.f_125, ATTACH_ENTITY_TO_ENTITY(Local_117.f_121), -1, 0f, 0f, -0.8f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				SET_ENTITY_VISIBLE(Local_117.f_125, false, 0);
				FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_117.f_121));
				0x006E4B040ED37EC3(0x006E4B040ED37EC3(Local_117.f_121));
				func_247();
				func_108();
				func_216(1);
				func_234();
				func_327();
				func_345();
				if (HAS_SOUND_FINISHED(Local_117.f_39))
				{
					Local_117.f_39 = GET_SOUND_ID();
					PLAY_SOUND_FRONTEND(Local_117.f_39, "HUD_Startup", Local_117.f_119, true);
				}
				RENDER_SCRIPT_CAMS(true, false, 0, 1, 1, 0);
				Local_117.f_135 = 0xBA7F0B77D80A4EB7();
				func_352(3);
				func_308(1, 1, 0);
				Local_117.f_79 = 3;
			}
			break;
		
		case 3:
			if (func_346(0))
			{
				iVar2 = GET_RANDOM_INT_IN_RANGE(0, 3);
				switch (iVar2)
				{
					case 0:
						func_308(2, 0, 0);
						Local_117.f_172 = 2;
						break;
					
					case 1:
						func_308(3, 0, 0);
						Local_117.f_172 = 3;
						break;
					
					case 2:
						func_308(4, 0, 0);
						Local_117.f_172 = 4;
						break;
				}
				Local_117.f_79 = 4;
			}
			break;
		
		case 4:
			if (func_346(0))
			{
				func_308(1, 1, 0);
				Local_117.f_79 = 3;
			}
			break;
	}
}

void func_345()
{
	if (func_119() || func_18())
	{
		if (!IS_AUDIO_SCENE_ACTIVE("DLC_BTL_Hacker_Drone_HUD_Scene"))
		{
			START_AUDIO_SCENE("DLC_BTL_Hacker_Drone_HUD_Scene");
		}
	}
	else if (func_9())
	{
		if (!IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Battle_Drone_HUD_Scene"))
		{
			START_AUDIO_SCENE("DLC_Arena_Battle_Drone_HUD_Scene");
		}
	}
	else if (func_29())
	{
		if (!IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Spectator_Drone_HUD_Scene"))
		{
			START_AUDIO_SCENE("DLC_Arena_Spectator_Drone_HUD_Scene");
		}
	}
	else if (func_27())
	{
		if (!IS_AUDIO_SCENE_ACTIVE("dlc_aw_arena_piloted_missile_scene"))
		{
			START_AUDIO_SCENE("dlc_aw_arena_piloted_missile_scene");
		}
	}
}

int func_346(bool bParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = PLAYER_PED_ID();
	if (func_25(iVar0))
	{
		fVar1 = func_347();
		iVar2 = NETWORK_STOP_SYNCHRONISED_SCENE(Local_117.f_78);
		if (IS_SYNCHRONIZED_SCENE_RUNNING(iVar2) && IS_SYNCHRONIZED_SCENE_RUNNING(iVar2) >= fVar1)
		{
			if (bParam0)
			{
				func_310(0);
			}
			return 1;
		}
	}
	return 0;
}

float func_347()
{
	return 0.95f;
}

int func_348(int iParam0)
{
	if (NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

int func_349(int iParam0, char* sParam1)
{
	int iVar0;
	
	iVar0 = NETWORK_STOP_SYNCHRONISED_SCENE(Local_117.f_78);
	if (iVar0 != -1)
	{
		if (IS_SYNCHRONIZED_SCENE_RUNNING(iVar0))
		{
			if ((HAS_ANIM_EVENT_FIRED(HAS_ANIM_EVENT_FIRED(), HAS_ANIM_EVENT_FIRED(sParam1)) || HAS_ANIM_EVENT_FIRED(HAS_ANIM_EVENT_FIRED(Local_117.f_122), HAS_ANIM_EVENT_FIRED(sParam1))) || HAS_ANIM_EVENT_FIRED(HAS_ANIM_EVENT_FIRED(Local_117.f_121), HAS_ANIM_EVENT_FIRED(sParam1)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_350(var uParam0, int iParam1, vector3 vParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!0x42613035157E4208(1))
	{
		return 0;
	}
	if (bParam7)
	{
		*uParam0 = OBJ_TO_NET(OBJ_TO_NET(iParam1, vParam2, bParam4, bParam3, bParam5));
	}
	else
	{
		*uParam0 = OBJ_TO_NET(OBJ_TO_NET(iParam1, vParam2, bParam4, bParam3, bParam5));
	}
	if (NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		_SET_ENTITY_SOMETHING(_SET_ENTITY_SOMETHING(*uParam0), bParam6);
		if (bParam8)
		{
			_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(*uParam0), 1);
		}
		if (bParam9)
		{
			SET_ENTITY_VISIBLE(SET_ENTITY_VISIBLE(*uParam0), false, 0);
		}
		if (NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK_GET_ENTITY_IS_NETWORKED(*uParam0)))
		{
			if (bParam3)
			{
				SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

bool func_351()
{
	return IS_BIT_SET(Global_1687880, 13);
}

void func_352(int iParam0)
{
	if (Local_117.f_170 != iParam0)
	{
		Local_117.f_170 = iParam0;
	}
}

void func_353(bool bParam0)
{
	if (bParam0)
	{
		if (!func_351())
		{
			SET_BIT(&Global_1687880, 13);
		}
	}
	else if (func_351())
	{
		CLEAR_BIT(&Global_1687880, 13);
	}
}

void func_354()
{
	vector3 vVar0;
	
	if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121))
	{
		if (NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_117.f_121))
		{
			if (!DOES_CAM_EXIST(Local_117.f_131) && DOES_CAM_EXIST(Local_117.f_5, 0))
			{
				if (func_364())
				{
					if (func_312())
					{
						func_274(PLAYER_ID(), 0, 33280, 0);
					}
					else if (!func_27())
					{
						func_274(PLAYER_ID(), 0, 512, 0);
					}
					if (!func_363())
					{
						0x32888337579A5970();
					}
					else
					{
						0x15CFA549788D35EF();
					}
					Local_117.f_131 = CREATE_CAMERA(26379945, 1);
					SET_CAM_FOV(Local_117.f_131, Local_117.f_88);
					SET_CAM_NEAR_CLIP(Local_117.f_131, 0.01f);
					SET_CAM_NEAR_DOF(Local_117.f_131, 0.01f);
					CLEAR_TIMECYCLE_MODIFIER();
					if (func_27())
					{
						SET_TIMECYCLE_MODIFIER("eyeinthesky");
					}
					vVar0 = { 0f, -0.038f, -0.004f };
					if (func_9() || func_29())
					{
						vVar0 = { 0f, -0.099f, -0.02f };
					}
					else if (func_27())
					{
						vVar0 = { 0f, -0.9f, 0f };
					}
					else if (func_17() || func_142())
					{
						vVar0 = { 0f, -0.038f, -0.006f };
					}
					ATTACH_CAM_TO_ENTITY(Local_117.f_131, ATTACH_CAM_TO_ENTITY(Local_117.f_121), vVar0, 1);
					if (func_27())
					{
						SET_CAM_ROT(Local_117.f_131, func_362() - Vector(0f, -180f, 180f), 2);
					}
					_0xD8C3BE3EE94CAF2D(Local_117.f_112, 75f, 75f);
					SET_FOCUS_POS_AND_VEL(Local_117.f_112, SET_FOCUS_POS_AND_VEL(Local_117.f_131, 2));
					SET_ENTITY_INVINCIBLE(SET_ENTITY_INVINCIBLE(Local_117.f_121), false);
					if (!func_312())
					{
						if (IS_NEW_LOAD_SCENE_LOADED())
						{
							NEW_LOAD_SCENE_STOP();
						}
					}
					if (!func_18())
					{
						func_345();
						if (HAS_SOUND_FINISHED(Local_117.f_39))
						{
							Local_117.f_39 = GET_SOUND_ID();
							PLAY_SOUND_FRONTEND(Local_117.f_39, "HUD_Startup", Local_117.f_119, true);
						}
						func_247();
						if (func_27())
						{
							func_84();
						}
						else
						{
							func_108();
						}
						func_216(1);
						func_234();
						func_327();
						RENDER_SCRIPT_CAMS(true, false, 0, 1, 1, 0);
						Local_117.f_135 = 0xBA7F0B77D80A4EB7();
					}
					func_359(1);
					func_358(1);
					func_356(158);
					SET_BIT(&(vLocal_115[SET_BIT() /*3*/]), 0);
					if (!func_18())
					{
						func_352(3);
					}
					else
					{
						Local_117.f_115 = { func_213(PLAYER_ID()) };
						GET_GROUND_Z_FOR_3D_COORD(Local_117.f_115, &(Local_117.f_115.f_2), 0, 0);
						Local_117.f_81 = GET_ENTITY_HEADING(GET_ENTITY_HEADING());
						func_355();
						Local_117.f_115 = { _GET_OBJECT_OFFSET_FROM_COORDS(Local_117.f_115, Local_117.f_81, -0.0695723f, 0.177497f, 0f) };
						func_352(2);
					}
				}
				else if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
				{
					TASK_LEAVE_ANY_VEHICLE(TASK_LEAVE_ANY_VEHICLE(), 0, 0);
				}
			}
			else
			{
				if (DOES_CAM_EXIST(Local_117.f_131))
				{
				}
				if (!IS_BIT_SET(Local_117.f_5, 0))
				{
				}
			}
		}
		else
		{
			NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_117.f_121);
		}
	}
}

void func_355()
{
	int iVar0;
	
	if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
	{
		GET_CURRENT_PED_WEAPON(GET_CURRENT_PED_WEAPON(), &iVar0, 1);
		if (!(iVar0 == joaat("weapon_unarmed") || iVar0 == joaat("object")))
		{
			SET_CURRENT_PED_WEAPON(SET_CURRENT_PED_WEAPON(), joaat("weapon_unarmed"), true);
		}
	}
}

void func_356(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_357() /*10828*/].f_6168.f_4015[iVar0 /*3*/] == iParam0)
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

int func_357()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_358(bool bParam0)
{
	if (bParam0)
	{
		if (!IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_330, 26))
		{
			SET_BIT(&(Global_1590446[SET_BIT() /*871*/].f_273.f_330), 26);
		}
	}
	else if (IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_330, 26))
	{
		CLEAR_BIT(&(Global_1590446[CLEAR_BIT() /*871*/].f_273.f_330), 26);
	}
}

void func_359(bool bParam0)
{
	if (bParam0)
	{
		if (!func_58())
		{
			SET_BIT(&Global_1687880, 5);
		}
	}
	else
	{
		if (func_58())
		{
			CLEAR_BIT(&Global_1687880, 5);
		}
		func_360(0);
	}
}

void func_360(bool bParam0)
{
	if (bParam0)
	{
		if (!func_361())
		{
			SET_BIT(&Global_1687880, 12);
		}
	}
	else if (func_361())
	{
		CLEAR_BIT(&Global_1687880, 12);
	}
}

bool func_361()
{
	return IS_BIT_SET(Global_1687880, 12);
}

Vector3 func_362()
{
	return Global_1687880.f_16;
}

bool func_363()
{
	return IS_BIT_SET(Global_1687880, 10);
}

int func_364()
{
	if (func_30() && !func_32())
	{
		return 1;
	}
	if (func_367())
	{
		return 1;
	}
	if (func_366())
	{
		return 1;
	}
	if (func_32() && func_365())
	{
		return 1;
	}
	if (!func_53(PLAYER_ID(), 0) && !func_270())
	{
		return 1;
	}
	return 0;
}

int func_365()
{
	if (Global_1319106 != -1 || Global_1319112 != -1)
	{
		if (((IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3) || IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) || IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) || IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter", 3))
		{
			return 1;
		}
		if (func_34())
		{
			return 0;
		}
	}
	return 0;
}

int func_366()
{
	return 0;
}

int func_367()
{
	if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
	{
		return 0;
	}
	if (func_32() || func_368())
	{
		return 0;
	}
	if (func_366())
	{
		return 0;
	}
	return 1;
}

int func_368()
{
	if (IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), -1421.593f, -3011.17f, -80.24994f, -1423.142f, -3012.295f, -77.74994f, 2f, 0, true, 0) || IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), -1419.463f, -3009.145f, -80.49994f, -1420.684f, -3010.617f, -77.99994f, 2f, 0, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_369()
{
	int iVar0;
	vector3 vVar1;
	bool bVar2;
	float fVar3;
	
	iVar0 = joaat("bmx");
	if (func_161(Local_117.f_169) && func_161(iVar0))
	{
		if (!IS_BIT_SET(Local_117.f_5, 0))
		{
			if (!NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121))
			{
				if (!func_312())
				{
					if (func_119())
					{
						if (func_25(func_318()))
						{
							vVar1 = { GET_ENTITY_COORDS(func_318(), true) };
						}
					}
					else
					{
						vVar1 = { Local_117.f_100 };
					}
					if (IS_PLAYER_CONTROL_ON(IS_PLAYER_CONTROL_ON()))
					{
						func_274(PLAYER_ID(), 0, 512, 0);
					}
					if (!IS_BIT_SET(Local_117.f_5, 18))
					{
						if (NEW_LOAD_SCENE_START_SPHERE(vVar1, 100f, 1))
						{
							SET_BIT(&(Local_117.f_5), 18);
						}
					}
					else if (IS_NEW_LOAD_SCENE_LOADED())
					{
						if (!IS_BIT_SET(Local_117.f_5, 19))
						{
							if (func_374())
							{
								if (func_371())
								{
									SET_BIT(&(Local_117.f_5), 19);
								}
							}
							else
							{
								if (!func_237(func_370()))
								{
									Local_117.f_100 = { func_370() };
								}
								SET_BIT(&(Local_117.f_5), 19);
							}
						}
					}
				}
				if (IS_BIT_SET(Local_117.f_5, 19) || func_312())
				{
					if (!IS_BIT_SET(Local_117.f_5, 20))
					{
						Local_117.f_125 = CREATE_VEHICLE(iVar0, Local_117.f_100, 0f, false, false, false);
						SET_ENTITY_LOAD_COLLISION_FLAG(Local_117.f_125, true, 1);
						SET_ENTITY_COORDS_NO_OFFSET(Local_117.f_125, Local_117.f_100, 0, 0, 1);
						SET_ENTITY_INVINCIBLE(Local_117.f_125, true);
						_SET_ENTITY_COLLISION_2(Local_117.f_125, false, 0);
						SET_ENTITY_VISIBLE(Local_117.f_125, false, 0);
						SET_BIT(&(Local_117.f_5), 20);
					}
					else if (func_74(CAN_REGISTER_MISSION_ENTITIES(false, 1) + 1, 0, 1))
					{
						if (!IS_BIT_SET(Local_117.f_5, 30))
						{
							RESERVE_NETWORK_MISSION_VEHICLES(RESERVE_NETWORK_MISSION_VEHICLES(false, 1) + 1);
							SET_BIT(&(Local_117.f_5), 30);
						}
						if (0x42613035157E4208(1))
						{
							bVar2 = false;
							if (func_18())
							{
								Local_117.f_115 = { func_213(PLAYER_ID()) };
								GET_GROUND_Z_FOR_3D_COORD(Local_117.f_115, &(Local_117.f_115.f_2), 0, 0);
								Local_117.f_100 = { GET_ANIM_INITIAL_OFFSET_POSITION(Local_117.f_120, "ENTER", Local_117.f_115, GET_ANIM_INITIAL_OFFSET_POSITION(GET_ANIM_INITIAL_OFFSET_POSITION(), 2), 0, 2) };
								bVar2 = true;
							}
							if (func_350(&(Local_117.f_121), Local_117.f_169, Local_117.f_100, 0, 1, 1, 1, 1, 0, bVar2))
							{
								Global_1687880.f_20 = NET_TO_OBJ(Local_117.f_121);
								if (func_119())
								{
									if (func_25(func_318()))
									{
										SET_ENTITY_ROTATION(func_88(), SET_ENTITY_ROTATION(func_318(), 2), 2, 1);
										fVar3 = (GET_ENTITY_HEADING(func_318()) + 180f);
									}
								}
								Global_2424073[PLAYER_ID() /*421*/].f_407 = { Local_117.f_100 };
								Global_2424073[PLAYER_ID() /*421*/].f_410 = fVar3;
								vLocal_115[PLAYER_ID() /*3*/].f_2 = Local_117.f_121;
								_SET_NETWORK_ID_SYNC_TO_PLAYER(Local_117.f_121, _SET_NETWORK_ID_SYNC_TO_PLAYER(), 1);
								0x38C1CB1CB119A016(0x38C1CB1CB119A016(Local_117.f_121), 1);
								SET_ENTITY_LOAD_COLLISION_FLAG(SET_ENTITY_LOAD_COLLISION_FLAG(Local_117.f_121), true, 1);
								SET_ENTITY_COORDS_NO_OFFSET(func_88(), Local_117.f_100, 0, 0, 1);
								SET_ENTITY_HEADING(func_88(), fVar3);
								0x17330EBF2F2124A8(func_88(), 1);
								if (!func_237(func_362()))
								{
									SET_ENTITY_ROTATION(func_88(), func_362(), 2, 1);
								}
								if (func_27())
								{
									_SET_ENTITY_COLLISION_2(func_88(), false, 0);
								}
								_0x4A2D4E8BF4265B0F(Local_117.f_121, 1);
								if (func_147(PLAYER_ID()))
								{
									SET_ENTITY_HEALTH(func_88(), Global_262145.f_24136 * 5, 0);
								}
								else
								{
									SET_ENTITY_HEALTH(func_88(), Global_262145.f_24136, 0);
								}
								SET_ENTITY_INVINCIBLE(SET_ENTITY_INVINCIBLE(Local_117.f_121), true);
								SET_NETWORK_ID_CAN_MIGRATE(Local_117.f_121, false);
								SET_ENTITY_RECORDS_COLLISIONS(SET_ENTITY_RECORDS_COLLISIONS(Local_117.f_121), 1);
								_0xD8C3BE3EE94CAF2D(Local_117.f_100, 100f, 200f);
								SET_FOCUS_POS_AND_VEL(SET_FOCUS_POS_AND_VEL(SET_FOCUS_POS_AND_VEL(Local_117.f_121), true), SET_FOCUS_POS_AND_VEL(SET_FOCUS_POS_AND_VEL(Local_117.f_121), 2));
								SET_MODEL_AS_NO_LONGER_NEEDED(Local_117.f_169);
								SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
							}
						}
					}
				}
			}
			else
			{
				SET_ENTITY_HAS_GRAVITY(SET_ENTITY_HAS_GRAVITY(Local_117.f_121), 0);
				if (func_25(Local_117.f_125) && func_25(NET_TO_ENT(Local_117.f_121)))
				{
					ATTACH_ENTITY_TO_ENTITY(Local_117.f_125, ATTACH_ENTITY_TO_ENTITY(Local_117.f_121), -1, 0f, 0f, -0.8f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					SET_BIT(&(Local_117.f_5), 0);
				}
			}
		}
	}
}

Vector3 func_370()
{
	return Global_1687880.f_13;
}

int func_371()
{
	if (Local_117.f_15 == 0)
	{
		if (!IS_BIT_SET(Local_117.f_5, 14))
		{
			if ((!func_147(PLAYER_ID()) && func_119()) && func_25(func_318()))
			{
				Local_117.f_100 = { _GET_OBJECT_OFFSET_FROM_COORDS(_GET_OBJECT_OFFSET_FROM_COORDS(func_318(), true), _GET_OBJECT_OFFSET_FROM_COORDS(func_318()), -0.7f, 1.6f, 4f) };
				SET_BIT(&(Local_117.f_5), 14);
			}
			else
			{
				if (func_119() && func_25(func_318()))
				{
					Local_117.f_100 = { _GET_OBJECT_OFFSET_FROM_COORDS(_GET_OBJECT_OFFSET_FROM_COORDS(func_318(), true), _GET_OBJECT_OFFSET_FROM_COORDS(func_318()), -0.7f, 1.6f, 4f) };
				}
				Local_117.f_100 = GET_RANDOM_FLOAT_IN_RANGE((Local_117.f_100 - 1.5f), (Local_117.f_100 + 1.5f));
				Local_117.f_100.f_1 = GET_RANDOM_FLOAT_IN_RANGE((Local_117.f_100.f_1 - 1.5f), (Local_117.f_100.f_1 + 1.5f));
				Local_117.f_100.f_2 = GET_RANDOM_FLOAT_IN_RANGE((Local_117.f_100.f_2 + 0.5f), (Local_117.f_100.f_2 + 1.5f));
				if (!func_373(Local_117.f_100))
				{
					SET_BIT(&(Local_117.f_5), 14);
				}
			}
		}
		else if (IS_BIT_SET(Local_117.f_5, 15))
		{
			Local_117.f_100 = GET_RANDOM_FLOAT_IN_RANGE((Local_117.f_100 - 1.5f), (Local_117.f_100 + 1.5f));
			Local_117.f_100.f_1 = GET_RANDOM_FLOAT_IN_RANGE((Local_117.f_100.f_1 - 1.5f), (Local_117.f_100.f_1 + 1.5f));
			Local_117.f_100.f_2 = GET_RANDOM_FLOAT_IN_RANGE((Local_117.f_100.f_2 + 0.5f), (Local_117.f_100.f_2 + 1.5f));
			if (!func_373(Local_117.f_100))
			{
				CLEAR_BIT(&(Local_117.f_5), 15);
			}
		}
		func_372(Local_117.f_100);
	}
	else if (Local_117.f_15 == 1 && !func_373(Local_117.f_100))
	{
		return 1;
	}
	else
	{
		Local_117.f_15 = 0;
		SET_BIT(&(Local_117.f_5), 15);
	}
	return 0;
}

void func_372(vector3 vParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	vector3 vVar4;
	var uVar5;
	int iVar6;
	
	switch (Local_117.f_14)
	{
		case 0:
			if (func_119())
			{
				if (func_25(func_318()))
				{
					iVar0 = func_318();
				}
			}
			if (func_9() || func_29())
			{
				fVar1 = func_196(Local_117.f_169);
			}
			else
			{
				fVar1 = (func_196(Local_117.f_169) * 11f);
			}
			Local_117.f_130 = START_SHAPE_TEST_CAPSULE(vParam0, vParam0, fVar1, 511, iVar0, 4);
			if (Local_117.f_130 != 0)
			{
				Local_117.f_14 = 1;
			}
			break;
		
		case 1:
			iVar6 = GET_SHAPE_TEST_RESULT(Local_117.f_130, &iVar2, &vVar4, &uVar3, &uVar5);
			if (iVar6 == 2)
			{
				if (iVar2 == 0)
				{
					Local_117.f_15 = 1;
					vVar4 = { 0f, 0f, 0f };
				}
				else
				{
					Local_117.f_15 = 2;
					Local_117.f_130 = 0;
					Local_117.f_14 = 0;
				}
			}
			else if (iVar6 == 0)
			{
				Local_117.f_14 = 0;
			}
			break;
	}
}

int func_373(vector3 vParam0)
{
	if (IS_POINT_IN_ANGLED_AREA(vParam0, -1036.27f, -228.704f, 53.76435f, -1096.765f, -258.69f, 35.77808f, 20f, 0, true))
	{
		return 1;
	}
	return 0;
}

int func_374()
{
	if (func_119())
	{
		return 1;
	}
	if (func_17() && !func_18())
	{
		return 1;
	}
	return 0;
}

int func_375()
{
	if (func_270())
	{
		return Global_1676879.f_444 == 0;
	}
	return 0;
}

void func_376()
{
	if (func_15(PLAYER_ID(), 1, 1))
	{
		Local_117.f_103 = { func_238(&Local_117) };
		if (!func_237(func_370()))
		{
			Local_117.f_100 = { func_370() };
		}
		else
		{
			Local_117.f_100 = { func_213(PLAYER_ID()) };
			Local_117.f_100 = { Local_117.f_100, Local_117.f_100.f_1, (Local_117.f_100.f_2 + 1.5f) };
		}
		if (func_53(PLAYER_ID(), 0))
		{
			func_420(1);
		}
		if (func_53(PLAYER_ID(), 0))
		{
			func_416();
		}
		else if (((func_414(PLAYER_ID()) == 2 || func_414(PLAYER_ID()) == 1) && !PLAYER_ID(Global_1695602, 6)) && !PLAYER_ID(Global_1695603, 0))
		{
			if (IS_BIT_SET(Global_2508185, 0))
			{
				func_413(1);
				func_405(0, 0);
				func_404();
				func_360(1);
				func_352(1);
			}
		}
		else if ((func_31() && func_400()) && !IS_BIT_SET(Global_1695602, 6))
		{
			func_378();
		}
		else if (IS_BIT_SET(Global_1695602, 6) && IS_BIT_SET(Global_1695603, 0))
		{
			func_405(0, 0);
			func_360(1);
			func_352(1);
		}
		else if (func_18() && !func_377())
		{
			CLEAR_HELP(1);
			func_115("PIM_DRONAMOS", -1);
			func_274(PLAYER_ID(), 1, 0, 0);
			func_352(6);
		}
		else if (func_237(Local_117.f_97))
		{
			Local_117.f_118 = 0;
			func_360(1);
			func_352(1);
		}
	}
}

bool func_377()
{
	return IS_BIT_SET(Global_1687880, 23);
}

void func_378()
{
	vector3 vVar0;
	int iVar1;
	
	if (!func_393())
	{
		if ((((((func_392() || func_391()) && !Global_1662552) && func_400()) && !IS_BIT_SET(Global_2508068, 6)) && Global_1312792) && !(func_392() && Global_262145.f_25789))
		{
			if ((((((IS_CONTROL_JUST_PRESSED(2, 224) || IS_CONTROL_JUST_PRESSED(2, 224)) && !IS_CONTROL_JUST_PRESSED(2, 223)) && !IS_CONTROL_JUST_PRESSED(2, 223)) && !IS_CONTROL_JUST_PRESSED(2, 235)) && !IS_CONTROL_JUST_PRESSED(2, 235)) && !IS_CONTROL_JUST_PRESSED(2, 19))
			{
				if (NETWORK_CAN_SPEND_MONEY(Global_262145.f_25791, false, false, 1, -1, 0) || NETWORK_CAN_SPEND_MONEY(Global_2508068, 2))
				{
					SET_BIT(&Global_2508068, 0);
					func_405(0, 0);
					func_360(1);
					func_352(1);
					func_387();
					func_385(73, -1);
					func_382();
					vVar0 = { func_381() };
					func_379(vVar0, 0f, 0f, 0f);
					if (func_392())
					{
						PLAY_SOUND_FROM_ENTITY(iVar1, "Select_Spec_Drone", PLAY_SOUND_FROM_ENTITY(), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
					}
				}
				else if (!IS_BIT_SET(Global_2508068, 4))
				{
					SET_BIT(&Global_2508068, 4);
				}
			}
		}
	}
}

void func_379(vector3 vParam0, vector3 vParam1)
{
	if (!func_380(Global_1687880.f_13, vParam0, 0))
	{
		Global_1687880.f_13 = { vParam0 };
		vParam1 = { vParam1 + Vector(0f, -180f, 180f) };
		Global_1687880.f_16 = { vParam1 };
	}
}

bool func_380(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_381()
{
	float fVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	
	fVar0 = 0f;
	fVar1 = 6f;
	fVar2 = 6f;
	vVar3 = { 2800f, -3800.2f, 170f };
	if ((Global_4456448.f_184556.f_1 == 3 || Global_4456448.f_184556.f_1 == 3) || Global_4456448.f_184556.f_1 == 3)
	{
		vVar3.y = -3860f;
	}
	fVar1 = (fVar1 * IntToFloat(PARTICIPANT_ID_TO_INT()));
	fVar2 = (fVar2 * IntToFloat((PARTICIPANT_ID_TO_INT() / 8)));
	fVar1 = (fVar1 - (8f * fVar2));
	return _GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar0, fVar1, fVar2, 0f);
}

void func_382()
{
	int iVar0;
	
	iVar0 = func_383(73, -1);
	if (iVar0 >= 50)
	{
		SET_BIT(&(Global_1590446[SET_BIT() /*871*/].f_273.f_335.f_3), 13);
	}
	else
	{
		CLEAR_BIT(&(Global_1590446[CLEAR_BIT() /*871*/].f_273.f_335.f_3), 13);
	}
}

int func_383(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2577831[iParam0 /*3*/][func_384(iParam1)];
	if (STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_384(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_96();
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

void func_385(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_383(iParam0, func_384(iParam1));
	iVar0++;
	func_386(iParam0, iVar0, iParam1);
}

void func_386(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2577831[iParam0 /*3*/][func_384(uParam2)];
	STAT_SET_INT(iVar0, iParam1, 1);
}

void func_387()
{
	func_388(1, 7982);
}

void func_388(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_390(iParam1, -1, 0);
	func_389(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_389(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_384(iParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_390(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_384(iParam1)];
	if (STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

var func_391()
{
	return Global_2459027;
}

int func_392()
{
	if (Global_2459026 >= 0 && Global_2459026 < 10)
	{
		return 1;
	}
	return 0;
}

int func_393()
{
	if (IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), -1420.915f, -3009.132f, -79.99994f, -1421.98f, -3009.121f, -77.74994f, 1f, 0, true, 0))
	{
		return 1;
	}
	if (func_399())
	{
		return 1;
	}
	if (func_398())
	{
		return 1;
	}
	if (IS_PAUSE_MENU_ACTIVE())
	{
		return 1;
	}
	if (func_270())
	{
		return 1;
	}
	if (func_53(PLAYER_ID(), 0))
	{
		if (func_37(Global_1590293))
		{
			return 1;
		}
	}
	if (func_119())
	{
		if (func_397())
		{
			if (func_396())
			{
				return 1;
			}
			if (IS_BIT_SET(Local_117.f_5, 28))
			{
				return 1;
			}
		}
	}
	if (func_179(PLAYER_ID()))
	{
		return 1;
	}
	if (func_59(0))
	{
		return 1;
	}
	if (func_285())
	{
		return 1;
	}
	if (func_119())
	{
		if (func_30())
		{
			if (func_15(PLAYER_ID(), 1, 1))
			{
				if (func_136(PLAYER_PED_ID(), -1422.188f, -3015.926f, -80.1554f, 1) < 1.5f)
				{
					return 1;
				}
				if (func_395())
				{
					return 1;
				}
			}
			if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 1) || func_394(IS_PED_IN_ANY_VEHICLE(), 1))
			{
				return 1;
			}
		}
	}
	if (func_177())
	{
		return 1;
	}
	if (Global_262145.f_24146)
	{
		return 1;
	}
	if (IS_BIT_SET(Local_117.f_5, 27))
	{
		return 1;
	}
	if (func_53(PLAYER_ID(), 0))
	{
		if (func_25(func_318()))
		{
			if ((IS_ENTITY_IN_ANGLED_AREA(func_318(), -136.1614f, 4617.176f, 124.5134f, -490.3058f, 4924.749f, 159.0677f, 19.5f, 0, true, 0) || IS_ENTITY_IN_ANGLED_AREA(func_318(), 908.465f, 34.85726f, 79.35429f, 926.4139f, 64.37743f, 87.99218f, 19f, 0, true, 0)) || IS_ENTITY_IN_ANGLED_AREA(func_318(), 946.8937f, -6.119501f, 77.90774f, 962.0698f, -5.454865f, 88.65581f, 10.75f, 0, true, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_1319110)
	{
		return 1;
	}
	if (Global_2509234)
	{
		return 1;
	}
	if (Global_2509232)
	{
		return 1;
	}
	return 0;
}

int func_394(int iParam0, int iParam1)
{
	if (iParam1 && (!DOES_ENTITY_EXIST(iParam0) || DOES_ENTITY_EXIST(iParam0, 0)))
	{
		return 0;
	}
	if (GET_IS_TASK_ACTIVE(iParam0, 2))
	{
		return 1;
	}
	if (GET_VEHICLE_PED_IS_TRYING_TO_ENTER(iParam0) != 0 || GET_VEHICLE_PED_IS_TRYING_TO_ENTER(iParam0) != 0)
	{
		return 1;
	}
	return 0;
}

int func_395()
{
	if (IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), -1420.588f, -3013.374f, -79.99994f, -1421.918f, -3012.804f, -77.99994f, 0.675f, 0, true, 0))
	{
		return 1;
	}
	return 0;
}

int func_396()
{
	if (Global_2424073[PLAYER_ID() /*421*/].f_309.f_8 != func_16() && PLAYER_ID() != func_16())
	{
		return IS_BIT_SET(Global_1590446[Global_2424073[IS_BIT_SET() /*421*/].f_309.f_8 /*871*/].f_273.f_330, 20);
	}
	return 0;
}

int func_397()
{
	if (func_147(PLAYER_ID()) && Global_1687880.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

int func_398()
{
	if (Global_2437549.f_1155.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_399()
{
	return GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

int func_400()
{
	int iVar0;
	int iVar1;
	
	if (func_403() && !func_402())
	{
		return 1;
	}
	iVar0 = GET_PLAYER_TEAM(GET_PLAYER_TEAM());
	if (iVar0 >= 4 || iVar0 < 0)
	{
		iVar0 = 0;
	}
	iVar1 = Global_969029.f_13[iVar0];
	if (iVar1 < 17)
	{
		if ((((IS_BIT_SET(Global_4456448.f_106[iVar0 /*11610*/].f_5849[iVar1], 23) && IS_BIT_SET(Global_4456448.f_106[iVar0 /*11610*/].f_5849[iVar1], 24)) && IS_BIT_SET(Global_4456448.f_106[iVar0 /*11610*/].f_5849[iVar1], 25)) && IS_BIT_SET(Global_4456448.f_106[iVar0 /*11610*/].f_5849[iVar1], 26)) && IS_BIT_SET(Global_4456448.f_32, 16))
		{
			return 1;
		}
	}
	if (!IS_BIT_SET(Global_4456448.f_32, 16))
	{
		return 1;
	}
	else if (func_391() || func_401(PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

bool func_401(int iParam0)
{
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_39.f_18, 14);
}

int func_402()
{
	if (Global_4456448.f_156052 == 1 || Global_4456448.f_156052 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_403()
{
	return IS_BIT_SET(Global_4456448.f_184550, 12);
}

void func_404()
{
	CLEAR_BIT(&Global_2508185, 0);
}

void func_405(bool bParam0, bool bParam1)
{
	int iVar0;
	
	Local_117.f_82 = Global_262145.f_24139;
	if (func_29() || func_9())
	{
		Local_117.f_82 = (Local_117.f_82 * 4.5f);
	}
	else if (func_27())
	{
		Local_117.f_82 = 100f;
	}
	else if (func_17())
	{
		Local_117.f_82 = 100f;
	}
	else if (func_142())
	{
		Local_117.f_82 = 10f;
	}
	Local_117.f_93 = 40f;
	if (func_17())
	{
		Local_117.f_93 = 70f;
	}
	else if (func_142())
	{
		Local_117.f_93 = 35f;
	}
	if (func_29())
	{
		Local_117.f_169 = -388213579;
	}
	else if (func_9())
	{
		Local_117.f_169 = 442185650;
	}
	else if (func_27())
	{
		Local_117.f_169 = 1270560417;
		func_412(1);
	}
	else if (func_17())
	{
		if (!func_18())
		{
			iVar0 = func_411(PLAYER_ID());
			switch (iVar0)
			{
				case 37:
					Local_117.f_169 = -1324942671;
					break;
				
				case 38:
					Local_117.f_169 = 691432262;
					break;
				
				case 39:
					Local_117.f_169 = -1766406639;
					break;
				
				case 40:
					Local_117.f_169 = -2073550476;
					break;
			}
		}
		else
		{
			Local_117.f_169 = 430841677;
		}
	}
	else if (func_142())
	{
		Local_117.f_169 = 430841677;
	}
	else
	{
		Local_117.f_169 = -1904523353;
	}
	if (bParam1)
	{
		Local_117.f_100 = { Local_117.f_106 };
	}
	Global_1687880.f_1 = 1500;
	func_410();
	func_409(1);
	func_408(1);
	if (func_29() || func_27())
	{
		func_407(1);
	}
	else if (func_9())
	{
		func_407(0);
	}
	if (func_18())
	{
		Local_117.f_120 = "ANIM_HEIST@HS3F@IG4_DRONE@MALE@";
		REQUEST_ANIM_DICT(Local_117.f_120);
	}
	if (func_9())
	{
		REQUEST_NAMED_PTFX_ASSET("scr_xs_dr");
	}
	if (func_18())
	{
		func_406(Global_262145.f_27927);
	}
	else if (func_17() && !func_18())
	{
		func_406(Global_262145.f_27928);
	}
	else if (!func_119() && !func_312())
	{
		func_406(200f);
	}
	func_68(Global_1574997);
	if (bParam0)
	{
	}
}

void func_406(float fParam0)
{
	if (Global_1687880.f_8 != fParam0)
	{
		Global_1687880.f_8 = fParam0;
	}
}

void func_407(bool bParam0)
{
	if (bParam0)
	{
		if (!func_175())
		{
			SET_BIT(&Global_1687880, 8);
		}
	}
	else if (func_175())
	{
		CLEAR_BIT(&Global_1687880, 8);
	}
}

void func_408(bool bParam0)
{
	if (bParam0)
	{
		if (!func_329())
		{
			SET_BIT(&Global_1687880, 2);
		}
	}
	else if (func_329())
	{
		CLEAR_BIT(&Global_1687880, 2);
	}
}

void func_409(bool bParam0)
{
	if (bParam0)
	{
		if (!func_226())
		{
			SET_BIT(&Global_1687880, 4);
		}
	}
	else if (func_226())
	{
		CLEAR_BIT(&Global_1687880, 4);
	}
}

void func_410()
{
	if (!Local_117.f_118)
	{
		Local_117.f_17 = 100;
	}
	if (func_142())
	{
		Local_117.f_23 = 100;
	}
	Local_117.f_18 = 0;
	Local_117.f_19 = 100;
	Local_117.f_88 = 90f;
	Local_117.f_91 = 90f;
	if (!func_27())
	{
		Local_117.f_132 = 0x67D02A194A2FC2BD("DRONE_CAM");
	}
	else
	{
		Local_117.f_132 = func_89();
	}
	if (func_29())
	{
		Local_117.f_119 = "DLC_Arena_Drone_Sounds";
	}
	else if (func_9())
	{
		Local_117.f_119 = "DLC_Arena_Battle_Drone_Sounds";
	}
	else if (func_27())
	{
		Local_117.f_119 = "DLC_Arena_Piloted_Missile_Sounds";
	}
	else
	{
		Local_117.f_119 = "DLC_BTL_Drone_Sounds";
	}
}

int func_411(int iParam0)
{
	if (iParam0 != func_16())
	{
		return Global_2424073[iParam0 /*421*/].f_416.f_1;
	}
	return -1;
}

void func_412(bool bParam0)
{
	if (bParam0)
	{
		if (!func_184())
		{
			SET_BIT(&Global_1687880, 15);
		}
	}
	else if (func_184())
	{
		CLEAR_BIT(&Global_1687880, 15);
	}
}

void func_413(bool bParam0)
{
	if (bParam0)
	{
		if (!IS_BIT_SET(Global_1687880.f_2, 4))
		{
			Global_1687880.f_2 = 0;
			SET_BIT(&(Global_1687880.f_2), 4);
		}
	}
	else if (IS_BIT_SET(Global_1687880.f_2, 4))
	{
		CLEAR_BIT(&(Global_1687880.f_2), 4);
	}
}

int func_414(int iParam0)
{
	if (iParam0 == PLAYER_ID() && !func_415())
	{
		return Global_2508090.f_1;
	}
	return Global_2417783.f_2620[iParam0 /*3*/].f_1;
}

int func_415()
{
	if (((Global_2508093 != 0 && Global_2508093 == Global_2508094) && Global_2508082 != 3) && Global_2508082 != 1)
	{
		return 0;
	}
	return 1;
}

void func_416()
{
	if (!func_393())
	{
		if (func_32())
		{
			if (func_367())
			{
				if (!IS_HELP_MESSAGE_BEING_DISPLAYED() && !IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_419("DRONE_TRIG");
				}
			}
			else if (func_418("DRONE_TRIG"))
			{
				CLEAR_HELP(1);
			}
			if (func_32() || func_366())
			{
				if (IS_CONTROL_JUST_RELEASED(2, 176) || IS_CONTROL_JUST_RELEASED(2, 176))
				{
					func_360(1);
					func_352(1);
					CLEAR_HELP(1);
				}
			}
			else if (func_418("DRONE_TRIG"))
			{
				if ((IS_CONTROL_JUST_RELEASED(2, 51) || IS_CONTROL_JUST_RELEASED(2, 51)) || IS_CONTROL_JUST_RELEASED(IS_CONTROL_JUST_RELEASED(), 0))
				{
					Local_117.f_118 = 0;
					func_360(1);
					func_352(1);
					CLEAR_HELP(1);
				}
			}
		}
		else if ((func_30() && !IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), -1420.684f, -3010.617f, -77.99994f, -1423.142f, -3012.295f, -77.74994f, 2f, 0, true, 0)) && func_367())
		{
			if (!IS_HELP_MESSAGE_BEING_DISPLAYED() && !IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				func_419("DRONE_TRIG");
			}
			if (func_418("DRONE_TRIG"))
			{
				if (IS_CONTROL_JUST_RELEASED(2, 51) || IS_CONTROL_JUST_RELEASED(2, 51))
				{
					Local_117.f_118 = 0;
					func_360(1);
					func_352(1);
					CLEAR_HELP(1);
				}
			}
		}
		else if (func_418("DRONE_TRIG"))
		{
			CLEAR_HELP(1);
		}
		if (func_417() || func_32())
		{
			if (func_418("DRONE_TRIG"))
			{
				CLEAR_HELP(1);
			}
		}
	}
	else if (func_418("DRONE_TRIG"))
	{
		CLEAR_HELP(1);
	}
}

int func_417()
{
	if ((((IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || func_51(IS_ENTITY_PLAYING_ANIM(), 2106541073))
	{
		return 1;
	}
	if ((IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) || IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) || IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3))
	{
		return 1;
	}
	return 0;
}

int func_418(char* sParam0)
{
	BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_419(char* sParam0)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 1, true, -1);
}

void func_420(bool bParam0)
{
	if (bParam0)
	{
		if (!IS_BIT_SET(Global_1687880.f_2, 1))
		{
			Global_1687880.f_2 = 0;
			SET_BIT(&(Global_1687880.f_2), 1);
		}
	}
	else if (IS_BIT_SET(Global_1687880.f_2, 1))
	{
		CLEAR_BIT(&(Global_1687880.f_2), 1);
	}
}

void func_421()
{
	if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121))
	{
		if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(Local_117.f_121), 0))
		{
			Local_117.f_112 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(Local_117.f_121), true) };
			Local_117.f_87 = GET_ENTITY_HEADING(GET_ENTITY_HEADING(Local_117.f_121));
			if (!func_10(&(Local_117.f_190)))
			{
				func_8(&(Local_117.f_190), 0, 0);
			}
			else if (func_7(&(Local_117.f_190), 1000, 0))
			{
				if (!func_380(Global_2424073[PLAYER_ID() /*421*/].f_407, Local_117.f_112, 0))
				{
					Global_2424073[PLAYER_ID() /*421*/].f_407 = { Local_117.f_112 };
				}
				if (Global_2424073[PLAYER_ID() /*421*/].f_410 != PLAYER_ID(PLAYER_ID(Local_117.f_121)))
				{
					Global_2424073[PLAYER_ID() /*421*/].f_410 = PLAYER_ID(PLAYER_ID(Local_117.f_121));
				}
				func_6(&(Local_117.f_190));
			}
		}
	}
	if (func_25(Local_117.f_125))
	{
		if (IS_ENTITY_VISIBLE(Local_117.f_125))
		{
			SET_ENTITY_VISIBLE(Local_117.f_125, false, 0);
		}
	}
	if (func_25(Local_117.f_123))
	{
		if (IS_ENTITY_VISIBLE(Local_117.f_123))
		{
			SET_ENTITY_VISIBLE(Local_117.f_123, false, 0);
		}
	}
}

void func_422()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 185:
				func_423(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_423(int iParam0)
{
	struct<2> Var0;
	
	if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121))
	{
		if (GET_EVENT_DATA(1, iParam0, &Var0, 11))
		{
			if (DOES_ENTITY_EXIST(Var0) && DOES_ENTITY_EXIST(Local_117.f_121) == Var0)
			{
				if (DOES_ENTITY_EXIST(Var0.f_1))
				{
					if (IS_ENTITY_A_PED(Var0.f_1))
					{
						if (IS_PED_A_PLAYER(IS_PED_A_PLAYER(Var0.f_1)) && IS_PED_A_PLAYER() != IS_PED_A_PLAYER(Var0.f_1))
						{
							Local_117.f_25 = 2;
						}
					}
				}
			}
		}
	}
}

void func_424()
{
	if (func_430(3))
	{
		if (((func_119() || func_9()) || func_29()) || (func_17() && !func_18()))
		{
			if (!IS_PLAYER_CONTROL_ON(IS_PLAYER_CONTROL_ON()))
			{
				func_274(PLAYER_ID(), 1, 0, 0);
			}
		}
		DISABLE_CONTROL_ACTION(0, 37, 0);
		if (!func_27())
		{
			func_425();
			ENABLE_CONTROL_ACTION(0, 19, 1);
			ENABLE_CONTROL_ACTION(0, 166, 1);
			ENABLE_CONTROL_ACTION(0, 167, 1);
			ENABLE_CONTROL_ACTION(0, 168, 1);
			ENABLE_CONTROL_ACTION(0, 169, 1);
			ENABLE_CONTROL_ACTION(2, 218, 1);
			ENABLE_CONTROL_ACTION(2, 219, 1);
			ENABLE_CONTROL_ACTION(2, 220, 1);
			ENABLE_CONTROL_ACTION(2, 221, 1);
			ENABLE_CONTROL_ACTION(2, 205, 1);
			ENABLE_CONTROL_ACTION(2, 206, 1);
			ENABLE_CONTROL_ACTION(2, 207, 1);
			ENABLE_CONTROL_ACTION(2, 208, 1);
			ENABLE_CONTROL_ACTION(2, 209, 1);
			ENABLE_CONTROL_ACTION(2, 210, 1);
			ENABLE_CONTROL_ACTION(2, 202, 1);
			ENABLE_CONTROL_ACTION(2, 51, 1);
			ENABLE_CONTROL_ACTION(2, 190, 1);
			ENABLE_CONTROL_ACTION(2, 189, 1);
			ENABLE_CONTROL_ACTION(2, 188, 1);
			ENABLE_CONTROL_ACTION(2, 187, 1);
			ENABLE_CONTROL_ACTION(2, 201, 1);
			ENABLE_CONTROL_ACTION(2, 199, 1);
			ENABLE_CONTROL_ACTION(2, 200, 1);
			if (_IS_INPUT_DISABLED(0))
			{
				ENABLE_CONTROL_ACTION(0, 238, 1);
				ENABLE_CONTROL_ACTION(0, 237, 1);
				ENABLE_CONTROL_ACTION(2, 235, 1);
				ENABLE_CONTROL_ACTION(2, 234, 1);
				ENABLE_CONTROL_ACTION(2, 1, 1);
				ENABLE_CONTROL_ACTION(2, 174, 1);
				ENABLE_CONTROL_ACTION(2, 175, 1);
				ENABLE_CONTROL_ACTION(0, 174, 1);
				ENABLE_CONTROL_ACTION(0, 175, 1);
				ENABLE_CONTROL_ACTION(0, 245, 1);
				ENABLE_CONTROL_ACTION(0, 246, 1);
				ENABLE_CONTROL_ACTION(0, 247, 1);
				ENABLE_CONTROL_ACTION(0, 248, 1);
			}
			if (IS_PAUSE_MENU_ACTIVE())
			{
				ENABLE_CONTROL_ACTION(0, 201, 1);
				ENABLE_CONTROL_ACTION(0, 202, 1);
				ENABLE_CONTROL_ACTION(0, 188, 1);
				ENABLE_CONTROL_ACTION(0, 187, 1);
				ENABLE_CONTROL_ACTION(0, 189, 1);
				ENABLE_CONTROL_ACTION(2, 195, 1);
				ENABLE_CONTROL_ACTION(2, 196, 1);
				ENABLE_CONTROL_ACTION(2, 198, 1);
				ENABLE_CONTROL_ACTION(2, 197, 1);
				ENABLE_CONTROL_ACTION(2, 217, 1);
			}
		}
	}
}

void func_425()
{
	func_426();
}

void func_426()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 359)
	{
		DISABLE_CONTROL_ACTION(0, iVar0, 1);
		iVar0++;
	}
}

void func_427()
{
	if (IS_BIT_SET(Local_117.f_5, 28))
	{
		if (!func_10(&(Local_117.f_192)))
		{
			func_8(&(Local_117.f_192), 0, 0);
		}
		else if (func_7(&(Local_117.f_192), 5000, 0))
		{
			CLEAR_BIT(&(Local_117.f_5), 28);
			func_6(&(Local_117.f_192));
		}
	}
}

void func_428()
{
	int iVar0;
	
	if (IS_BIT_SET(Local_117.f_5, 27))
	{
		if (Global_2424073[PLAYER_ID() /*421*/].f_309.f_8 != func_16())
		{
			iVar0 = Global_2424073[PLAYER_ID() /*421*/].f_309.f_8;
		}
		else if (Global_1590293 != func_16())
		{
			iVar0 = Global_1590293;
		}
		else if (func_256(PLAYER_ID(), 0))
		{
			if (func_149() != func_16())
			{
				iVar0 = func_149();
			}
		}
		if (iVar0 != func_16())
		{
			if (NETWORK_IS_PLAYER_ACTIVE(iVar0))
			{
				if (NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_160(iVar0, 0);
					CLEAR_BIT(&(Local_117.f_5), 27);
				}
			}
		}
	}
}

void func_429()
{
	vector3 vVar0;
	
	if (func_119())
	{
		if (func_430(1))
		{
			if (func_25(func_318()))
			{
				vVar0 = { GET_ENTITY_COORDS(func_318(), true) };
				_0xD8C3BE3EE94CAF2D(vVar0, 200f, 200f);
				SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(Local_117.f_112, 60f, 30);
			}
		}
	}
	if (func_430(1) || func_430(3))
	{
		if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121))
		{
			if (DOES_CAM_EXIST(Local_117.f_131) && DOES_CAM_EXIST(Local_117.f_131))
			{
				if (func_430(3))
				{
					_0xD8C3BE3EE94CAF2D(Local_117.f_112, 60f, 200f);
					0x483ACA1176CA93F1();
					SET_FOCUS_POS_AND_VEL(Local_117.f_112, SET_FOCUS_POS_AND_VEL(SET_FOCUS_POS_AND_VEL(Local_117.f_121)));
					if ((GET_FRAME_COUNT() % 120) == 0)
					{
						SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(Local_117.f_112, 60f, 30);
					}
				}
			}
		}
	}
}

bool func_430(int iParam0)
{
	return Local_117.f_170 == iParam0;
}

int func_431()
{
	if (func_435())
	{
		return 1;
	}
	if (!func_282())
	{
		return 1;
	}
	if (PLAYER_ID() != func_16())
	{
		if (func_245(PLAYER_ID()) && !func_244())
		{
			return 1;
		}
	}
	if (func_181(PLAYER_ID()))
	{
		return 1;
	}
	if (func_341(PLAYER_ID()))
	{
		return 1;
	}
	if (func_434())
	{
		if (func_433())
		{
			return 1;
		}
		if (func_342(PLAYER_ID(), 1, 1))
		{
			return 1;
		}
		if (func_31())
		{
			return 1;
		}
		if (!func_432())
		{
			if (func_7(&(Local_117.f_208), 10000, 0))
			{
				return 1;
			}
		}
		else
		{
			func_6(&(Local_117.f_208));
		}
	}
	return 0;
}

int func_432()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (NETWORK_GET_NUM_PARTICIPANTS() - 1))
	{
		if (IS_BIT_SET(vLocal_115[iVar0 /*3*/], 0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_433()
{
	return IS_BIT_SET(Global_1687880, 22);
}

bool func_434()
{
	return IS_BIT_SET(Local_117.f_6, 3);
}

bool func_435()
{
	return IS_BIT_SET(Global_1687880, 0);
}

int func_436()
{
	var uVar0;
	
	func_444(&uVar0);
	if (Global_1312850 == 0)
	{
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_443())
	{
		return 1;
	}
	if (Global_2461241)
	{
		return 1;
	}
	if (func_442())
	{
		return 1;
	}
	if (func_441(159))
	{
		if (!func_440())
		{
			return 1;
		}
	}
	if (func_441(157))
	{
		return 1;
	}
	if (!NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_437() != 0)
	{
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_437()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_437()
{
	switch (func_439())
	{
		case 0:
			return func_438();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_438()
{
	switch (Global_2461343)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_439()
{
	return Global_30736;
}

bool func_440()
{
	return Global_2448961.f_598;
}

int func_441(int iParam0)
{
	if (GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_442()
{
	return Global_2458999;
}

bool func_443()
{
	return Global_2448961.f_593;
}

void func_444(var uParam0)
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
					func_445(iVar0);
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

void func_445(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_15(vVar0.y, 1, 1))
		{
			iVar1 = GET_PLAYER_PED(vVar0.y);
			if (DOES_ENTITY_EXIST(iVar1))
			{
				if (IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && IS_VEHICLE_WINDOW_INTACT())
					{
						if (func_446(iVar2, &bVar3))
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

int func_446(int iParam0, var uParam1)
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

void func_447()
{
	wait(0);
}

void func_448(bool bParam0)
{
	if (!func_434())
	{
		func_454(bParam0);
	}
	else
	{
		func_449();
	}
}

void func_449()
{
	func_6(&(Local_117.f_208));
	func_453(0);
	func_452(0);
	func_451(0);
	func_450();
}

void func_450()
{
	TERMINATE_THIS_THREAD();
}

void func_451(bool bParam0)
{
	if (bParam0)
	{
		if (!IS_BIT_SET(Global_1687880, 21))
		{
			SET_BIT(&Global_1687880, 21);
		}
	}
	else if (IS_BIT_SET(Global_1687880, 21))
	{
		CLEAR_BIT(&Global_1687880, 21);
	}
}

void func_452(bool bParam0)
{
	if (bParam0)
	{
		if (!IS_BIT_SET(Global_1687880, 22))
		{
			SET_BIT(&Global_1687880, 22);
		}
	}
	else if (IS_BIT_SET(Global_1687880, 22))
	{
		CLEAR_BIT(&Global_1687880, 22);
	}
}

void func_453(bool bParam0)
{
	if (bParam0)
	{
		if (!IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_274, 31))
		{
			SET_BIT(&(Global_1590446[SET_BIT() /*871*/].f_273.f_274), 31);
		}
	}
	else if (IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_274, 31))
	{
		CLEAR_BIT(&(Global_1590446[CLEAR_BIT() /*871*/].f_273.f_274), 31);
	}
}

void func_454(bool bParam0)
{
	int iVar0;
	struct<8> Var1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<8> Var6;
	
	if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_121))
	{
		SET_NETWORK_ID_CAN_MIGRATE(Local_117.f_121, true);
		if (NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_117.f_121))
		{
			if (!IS_BIT_SET(Local_117.f_6, 2))
			{
				if (func_27())
				{
					if (func_25(PLAYER_PED_ID()))
					{
						ADD_OWNED_EXPLOSION(ADD_OWNED_EXPLOSION(), Local_117.f_112, 72, 0.5f, 1, 0, 1065353216);
					}
					else
					{
						ADD_EXPLOSION(Local_117.f_112, 72, 0.5f, 1, 0, 1f, 0);
					}
					SET_PAD_SHAKE(0, 300, 200);
					SET_BIT(&(Local_117.f_6), 2);
				}
			}
			CLEAR_FOCUS();
			iVar0 = NET_TO_OBJ(Local_117.f_121);
			FADE_OUT_LOCAL_PLAYER(iVar0, 0, 1);
			DELETE_OBJECT(&iVar0);
		}
		else
		{
			NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_117.f_121);
			return;
		}
	}
	if (func_17() && !func_18())
	{
		Var1 = -1;
		Var1.f_6 = 1073741824;
		Var1.f_7 = -1073741824;
		Var1.f_3 = 0;
		Var1.f_4 = 0;
		func_472(&Var1, 11);
	}
	if (func_418("DRONE_TRIG"))
	{
		CLEAR_HELP(1);
	}
	if (func_25(Local_117.f_123))
	{
		uVar2 = Local_117.f_123;
		DELETE_PED(&uVar2);
	}
	if (DOES_ENTITY_EXIST(Local_117.f_124))
	{
		DELETE_OBJECT(&(Local_117.f_124));
	}
	if (DOES_BLIP_EXIST(Local_117.f_133))
	{
		REMOVE_BLIP(&(Local_117.f_133));
	}
	if (DOES_BLIP_EXIST(Local_117.f_134))
	{
		REMOVE_BLIP(&(Local_117.f_134));
	}
	if (DOES_ENTITY_EXIST(Local_117.f_125))
	{
		DELETE_VEHICLE(&(Local_117.f_125));
	}
	0x15CFA549788D35EF();
	UNLOCK_MINIMAP_ANGLE();
	UNLOCK_MINIMAP_POSITION();
	RESPONDING_AS_TEMP(0f);
	if (func_218())
	{
		func_217(0);
	}
	func_302(1, -1);
	func_471();
	if (func_18())
	{
		func_310(0);
	}
	if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_117.f_122))
	{
		iVar3 = NET_TO_OBJ(Local_117.f_122);
		DELETE_OBJECT(&iVar3);
	}
	if (!bParam0)
	{
		if (!IS_STRING_NULL_OR_EMPTY(Local_117.f_120))
		{
			REMOVE_ANIM_DICT(Local_117.f_120);
		}
		func_470(0);
	}
	func_227(0);
	if (func_469() && (!func_245(PLAYER_ID()) || func_244()))
	{
		func_274(PLAYER_ID(), 1, 0, 0);
		FREEZE_ENTITY_POSITION(FREEZE_ENTITY_POSITION(), false);
	}
	Local_117.f_83 = 0f;
	Local_117.f_84 = 0f;
	Local_117.f_11 = 0;
	Local_117.f_13 = 0;
	Local_117.f_9 = 0;
	Local_117.f_15 = 0;
	func_6(&(Local_117.f_174));
	func_6(&(Local_117.f_176));
	if (!Local_117.f_118)
	{
		func_6(&(Local_117.f_178));
	}
	func_6(&(Local_117.f_182));
	func_6(&(Local_117.f_180));
	func_6(&(Local_117.f_184));
	func_6(&(Local_117.f_188));
	func_6(&(Local_117.f_194));
	func_6(&(Local_117.f_192));
	func_6(&(Local_117.f_190));
	func_6(&(Local_117.f_196));
	func_6(&(Local_117.f_198));
	func_6(&(Local_117.f_200));
	func_6(&(Local_117.f_204));
	func_6(&(Local_117.f_206));
	func_6(&(Local_117.f_186));
	Local_117.f_27 = 0;
	Local_117.f_5 = 0;
	Local_117.f_6 = 0;
	Global_1687880.f_4 = -1;
	func_468(-1f);
	func_406(0f);
	func_224(0);
	func_409(0);
	func_467(0);
	func_407(0);
	func_203(0);
	func_466(0);
	func_158(0);
	func_465(0);
	func_464(0);
	func_463(0);
	func_55(1);
	func_268(0);
	func_266(0);
	func_272(0);
	func_412(0);
	func_379(0f, 0f, 0f, 0f, 0f, 0f);
	func_462();
	Global_1687880.f_24 = -1;
	CLEAR_BIT(&Global_2508068, 0);
	CLEAR_BIT(&Global_1695603, 0);
	func_352(0);
	if (!func_461(0))
	{
		func_264();
	}
	if (func_58())
	{
		func_144("SET_WARNING_IS_VISIBLE", 0);
		if (func_119())
		{
			if (Global_2424073[PLAYER_ID() /*421*/].f_309.f_8 != func_16() && PLAYER_ID(Global_2424073[PLAYER_ID() /*421*/].f_309.f_8))
			{
				iVar4 = Global_2424073[PLAYER_ID() /*421*/].f_309.f_8;
			}
			else if (Global_1590293 != func_16() && NETWORK_IS_PLAYER_ACTIVE(Global_1590293))
			{
				iVar4 = Global_1590293;
			}
			else if (func_256(PLAYER_ID(), 0))
			{
				if (func_149() != func_16() && NETWORK_IS_PLAYER_ACTIVE(func_149()))
				{
					iVar4 = func_149();
				}
			}
			if (iVar4 != func_16())
			{
				if (NETWORK_IS_PLAYER_ACTIVE(iVar4) && NETWORK_IS_PLAYER_ACTIVE())
				{
					func_160(iVar4, 0);
					SET_BIT(&(Local_117.f_5), 28);
				}
				else
				{
					SET_BIT(&(Local_117.f_5), 27);
				}
			}
			else
			{
				SET_BIT(&(Local_117.f_5), 27);
			}
		}
		else if (func_17() || func_142())
		{
			func_6(&Global_1687845);
			func_460(300000);
			func_459(1);
			SET_BIT(&(Local_117.f_5), 28);
		}
		func_359(0);
		func_358(0);
		CLEAR_BIT(&(vLocal_115[CLEAR_BIT() /*3*/]), 0);
		iVar5 = ABSI(ABSI(ABSI(), Local_117.f_135));
		if (func_17() || func_142())
		{
			if (func_142())
			{
				Var6.f_7 = Global_786547;
				Var6.f_1 = Global_786547.f_1;
				if (NETWORK_IS_ACTIVITY_SESSION())
				{
					Var6 = Global_4456448.f_154360;
				}
				else
				{
					Var6 = func_457(PLAYER_ID());
				}
			}
			else
			{
				Var6.f_6 = 1;
			}
			Var6.f_4 = Local_117.f_26;
			Var6.f_5 = Local_117.f_28;
			Var6.f_3 = iVar5;
			Var6.f_2 = Local_117.f_25;
			0xDFBD93BF2943E29B(&Var6);
		}
		else
		{
			0x66C7BB2416ED3FCE(iVar5, Local_117.f_25, Local_117.f_26);
		}
	}
	func_456();
	func_360(0);
	func_243(0);
	func_167(0);
	SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Local_117.f_132));
	if (func_162(1) != 0)
	{
		SET_MODEL_AS_NO_LONGER_NEEDED(func_162(1));
	}
	if (func_162(0) != 0)
	{
		SET_MODEL_AS_NO_LONGER_NEEDED(func_162(0));
	}
	func_353(0);
	func_302(1, -1);
	Local_117.f_25 = 0;
	Local_117.f_26 = 0;
	Local_117.f_28 = 0;
	REMOVE_SHOCKING_EVENT(Local_117.f_27);
	if (DOES_PARTICLE_FX_LOOPED_EXIST(Local_117.f_136[DOES_PARTICLE_FX_LOOPED_EXIST()]))
	{
		STOP_PARTICLE_FX_LOOPED(Local_117.f_136[STOP_PARTICLE_FX_LOOPED()], 0);
	}
	if (!bParam0)
	{
		if (!func_147(PLAYER_ID()))
		{
			func_455(0f, 0f, 0f, 0f);
		}
		Global_1687880.f_2 = 0;
		func_450();
	}
	else
	{
		func_405(0, 1);
	}
}

void func_455(vector3 vParam0, float fParam1)
{
	if (!func_380(Global_1687880.f_10, vParam0, 0))
	{
		Global_1687880.f_10 = { vParam0 };
		Global_1687880.f_7 = fParam1;
	}
}

void func_456()
{
	int iVar0;
	
	if (!HAS_SOUND_FINISHED(Local_117.f_40))
	{
		STOP_SOUND(Local_117.f_40);
		RELEASE_SOUND_ID(Local_117.f_40);
		Local_117.f_40 = -1;
	}
	if (!HAS_SOUND_FINISHED(Local_117.f_29))
	{
		STOP_SOUND(Local_117.f_29);
		RELEASE_SOUND_ID(Local_117.f_29);
		Local_117.f_29 = -1;
	}
	if (!HAS_SOUND_FINISHED(Local_117.f_30))
	{
		STOP_SOUND(Local_117.f_30);
		RELEASE_SOUND_ID(Local_117.f_30);
		Local_117.f_30 = -1;
	}
	if (!HAS_SOUND_FINISHED(Local_117.f_31))
	{
		STOP_SOUND(Local_117.f_31);
		RELEASE_SOUND_ID(Local_117.f_31);
		Local_117.f_31 = -1;
	}
	if (!HAS_SOUND_FINISHED(Local_117.f_32))
	{
		STOP_SOUND(Local_117.f_32);
		RELEASE_SOUND_ID(Local_117.f_32);
		Local_117.f_32 = -1;
	}
	if (!HAS_SOUND_FINISHED(Local_117.f_33))
	{
		STOP_SOUND(Local_117.f_33);
		RELEASE_SOUND_ID(Local_117.f_33);
		Local_117.f_33 = -1;
	}
	if (!HAS_SOUND_FINISHED(Local_117.f_39))
	{
		STOP_SOUND(Local_117.f_39);
		RELEASE_SOUND_ID(Local_117.f_39);
		Local_117.f_39 = -1;
	}
	if (!HAS_SOUND_FINISHED(Local_117.f_38))
	{
		STOP_SOUND(Local_117.f_38);
		RELEASE_SOUND_ID(Local_117.f_38);
		Local_117.f_38 = -1;
	}
	if (!HAS_SOUND_FINISHED(Local_117.f_37))
	{
		STOP_SOUND(Local_117.f_37);
		RELEASE_SOUND_ID(Local_117.f_37);
		Local_117.f_37 = -1;
	}
	if (!HAS_SOUND_FINISHED(Local_117.f_36))
	{
		STOP_SOUND(Local_117.f_36);
		RELEASE_SOUND_ID(Local_117.f_36);
		Local_117.f_36 = -1;
	}
	if (!HAS_SOUND_FINISHED(Local_117.f_35))
	{
		STOP_SOUND(Local_117.f_35);
		RELEASE_SOUND_ID(Local_117.f_35);
		Local_117.f_35 = -1;
	}
	if (!HAS_SOUND_FINISHED(Local_117.f_34))
	{
		STOP_SOUND(Local_117.f_34);
		RELEASE_SOUND_ID(Local_117.f_34);
		Local_117.f_34 = -1;
	}
	if (!HAS_SOUND_FINISHED(Local_117.f_41))
	{
		STOP_SOUND(Local_117.f_41);
		RELEASE_SOUND_ID(Local_117.f_41);
		Local_117.f_41 = -1;
	}
	if (!HAS_SOUND_FINISHED(Local_117.f_42))
	{
		STOP_SOUND(Local_117.f_42);
		RELEASE_SOUND_ID(Local_117.f_42);
		Local_117.f_42 = -1;
	}
	if (!HAS_SOUND_FINISHED(Local_117.f_80))
	{
		STOP_SOUND(Local_117.f_80);
		RELEASE_SOUND_ID(Local_117.f_80);
		Local_117.f_80 = -1;
	}
	if (func_434())
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (Local_117.f_45[iVar0] != -1)
			{
				STOP_SOUND(Local_117.f_45[iVar0]);
				RELEASE_SOUND_ID(Local_117.f_45[iVar0]);
				Local_117.f_45[iVar0] = -1;
			}
			iVar0++;
		}
	}
	func_138();
	if (IS_AUDIO_SCENE_ACTIVE("DLC_BTL_Hacker_Drone_HUD_Scene"))
	{
		STOP_AUDIO_SCENE("DLC_BTL_Hacker_Drone_HUD_Scene");
	}
	if (IS_AUDIO_SCENE_ACTIVE("dlc_aw_arena_piloted_missile_scene"))
	{
		STOP_AUDIO_SCENE("dlc_aw_arena_piloted_missile_scene");
	}
	if (IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Battle_Drone_HUD_Scene"))
	{
		STOP_AUDIO_SCENE("DLC_Arena_Battle_Drone_HUD_Scene");
	}
	if (IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Spectator_Drone_HUD_Scene"))
	{
		STOP_AUDIO_SCENE("DLC_Arena_Spectator_Drone_HUD_Scene");
	}
}

int func_457(int iParam0)
{
	if (func_140(iParam0) == 243)
	{
		return func_458(iParam0);
	}
	return -1;
}

int func_458(int iParam0)
{
	if (func_141(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_181;
	}
	return -1;
}

void func_459(bool bParam0)
{
	if (bParam0)
	{
		if (!IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_330, 20))
		{
			SET_BIT(&(Global_1590446[SET_BIT() /*871*/].f_273.f_330), 20);
		}
	}
	else if (IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_330, 20))
	{
		CLEAR_BIT(&(Global_1590446[CLEAR_BIT() /*871*/].f_273.f_330), 20);
	}
}

void func_460(int iParam0)
{
	if (Global_1687880.f_5 != iParam0)
	{
		Global_1687880.f_5 = iParam0;
	}
}

bool func_461(int iParam0)
{
	return Local_117.f_171 == iParam0;
}

void func_462()
{
	if (func_155())
	{
		CLEAR_BIT(&Global_1687880, 7);
	}
}

void func_463(bool bParam0)
{
	if (bParam0)
	{
		if (func_58())
		{
			if (!IS_BIT_SET(Global_1687880, 16))
			{
				SET_BIT(&Global_1687880, 16);
			}
		}
	}
	else if (IS_BIT_SET(Global_1687880, 16))
	{
		CLEAR_BIT(&Global_1687880, 16);
	}
}

void func_464(bool bParam0)
{
	if (bParam0)
	{
		if (!func_435())
		{
			SET_BIT(&Global_1687880, 6);
		}
	}
	else if (func_435())
	{
		CLEAR_BIT(&Global_1687880, 6);
	}
}

void func_465(bool bParam0)
{
	if (bParam0)
	{
		if (!IS_BIT_SET(Global_1687880, 3))
		{
			SET_BIT(&Global_1687880, 3);
		}
	}
	else if (IS_BIT_SET(Global_1687880, 3))
	{
		CLEAR_BIT(&Global_1687880, 3);
	}
}

void func_466(bool bParam0)
{
	if (bParam0)
	{
		if (!func_363())
		{
			SET_BIT(&Global_1687880, 10);
		}
	}
	else if (func_363())
	{
		CLEAR_BIT(&Global_1687880, 10);
	}
}

void func_467(bool bParam0)
{
	if (bParam0)
	{
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH("AM_MP_DRONE")) > 0)
		{
			if (!func_435())
			{
				SET_BIT(&Global_1687880, 0);
			}
		}
	}
	else if (func_435())
	{
		CLEAR_BIT(&Global_1687880, 0);
	}
}

void func_468(float fParam0)
{
	if (Global_1687880.f_9 != fParam0)
	{
		Global_1687880.f_9 = fParam0;
	}
}

int func_469()
{
	if (!func_282())
	{
		return 0;
	}
	if (func_48(PLAYER_ID()))
	{
		return 0;
	}
	if (!func_58())
	{
		return 0;
	}
	if (func_27())
	{
		return 0;
	}
	return 1;
}

void func_470(bool bParam0)
{
	if (bParam0)
	{
		if (!func_18())
		{
			SET_BIT(&Global_1687880, 24);
		}
	}
	else if (func_18())
	{
		CLEAR_BIT(&Global_1687880, 24);
	}
}

void func_471()
{
	if (DOES_CAM_EXIST(Local_117.f_131))
	{
		DESTROY_CAM(Local_117.f_131, 0);
		RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
		if (!func_28() || IS_BIT_SET(Local_117.f_6, 0))
		{
			CLEAR_TIMECYCLE_MODIFIER();
		}
	}
}

void func_472(var uParam0, int iParam1)
{
	struct<8> Var0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	Var0.f_5 = 1073741824;
	Var0.f_6 = -1073741824;
	Var0 = 1450126354;
	Var0.f_1 = PLAYER_ID();
	Var0.f_2 = iParam1;
	Var0.f_3 = uParam0->f_3;
	Var0.f_4 = uParam0->f_4;
	Var0.f_5 = uParam0->f_6;
	Var0.f_6 = uParam0->f_7;
	Var0.f_7 = uParam0->f_8;
	bVar1 = false;
	if (iParam1 == 11)
	{
		if (IS_BIT_SET(Global_2424073[IS_BIT_SET() /*421*/].f_416, 1))
		{
			CLEAR_BIT(&(Global_2424073[CLEAR_BIT() /*421*/].f_416), 1);
			bVar1 = true;
		}
	}
	uParam0->f_5 = 0;
	if (!func_10(&(uParam0->f_1)))
	{
		func_8(&(uParam0->f_1), 0, 0);
	}
	bVar2 = true;
	if (*uParam0 == iParam1 && !bVar1)
	{
		if (func_10(&(uParam0->f_1)) && !func_7(&(uParam0->f_1), 1000, 0))
		{
			bVar2 = false;
		}
		else
		{
			func_6(&(uParam0->f_1));
		}
	}
	else
	{
		*uParam0 = iParam1;
		func_6(&(uParam0->f_1));
	}
	if (bVar2)
	{
		iVar3 = func_173(PLAYER_ID());
		if (iVar3 != -1)
		{
			TRIGGER_SCRIPT_EVENT(1, &Var0, 8, iVar3);
			uParam0->f_5 = 1;
		}
	}
}

void func_473(struct<12> Param0)
{
	NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, Param0);
	func_481(0, -1, 0);
	NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_116, 1);
	NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&vLocal_115, 97);
	if (!func_480())
	{
		func_448(0);
	}
	if (Param0.f_11)
	{
		SET_BIT(&(Local_117.f_6), 3);
	}
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_434())
		{
			Local_117.f_97 = { Param0.f_2 };
			switch (Param0.f_1)
			{
				case 1:
					if (DOES_ENTITY_EXIST(func_318()) && !DOES_ENTITY_EXIST(func_318(), 0))
					{
						Local_117.f_106 = { _GET_OBJECT_OFFSET_FROM_COORDS(_GET_OBJECT_OFFSET_FROM_COORDS(func_318(), true), _GET_OBJECT_OFFSET_FROM_COORDS(func_318()), 0f, 1.6f, 2.9f) };
						Local_117.f_100 = { Local_117.f_106 };
					}
					func_420(1);
					vLocal_115[PLAYER_ID() /*3*/].f_1 = 1;
					break;
				
				case 2:
					func_479(1);
					Local_117.f_106 = { Param0.f_5 };
					vLocal_115[PLAYER_ID() /*3*/].f_1 = 2;
					break;
				
				case 3:
					func_478(1);
					Local_117.f_106 = { Param0.f_5 };
					vLocal_115[PLAYER_ID() /*3*/].f_1 = 3;
					break;
				
				case 4:
					func_413(1);
					Local_117.f_106 = { Param0.f_5 };
					vLocal_115[PLAYER_ID() /*3*/].f_1 = 4;
					break;
				
				case 5:
					func_477(1);
					Local_117.f_106 = { Param0.f_5 };
					vLocal_115[PLAYER_ID() /*3*/].f_1 = 5;
					break;
				
				case 6:
					func_476(1);
					Local_117.f_106 = { Param0.f_5 };
					vLocal_115[PLAYER_ID() /*3*/].f_1 = 6;
					break;
				
				default:
					func_475(1);
					Local_117.f_106 = { Param0.f_5 };
					break;
			}
			Local_117.f_103 = { Param0.f_8 };
			if (func_237(func_370()))
			{
				func_379(Local_117.f_106, 0f, 0f, 0f);
			}
		}
	}
	else
	{
		func_448(0);
	}
	if (!func_434())
	{
		func_405(1, 1);
	}
	else
	{
		func_474();
	}
}

void func_474()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Local_117.f_45[iVar0] = -1;
		iVar0++;
	}
	func_352(5);
}

void func_475(bool bParam0)
{
	if (bParam0)
	{
		if (!IS_BIT_SET(Global_1687880.f_2, 0))
		{
			Global_1687880.f_2 = 0;
			SET_BIT(&(Global_1687880.f_2), 0);
		}
	}
	else if (IS_BIT_SET(Global_1687880.f_2, 0))
	{
		CLEAR_BIT(&(Global_1687880.f_2), 0);
	}
}

void func_476(bool bParam0)
{
	if (bParam0)
	{
		if (!IS_BIT_SET(Global_1687880.f_2, 6))
		{
			Global_1687880.f_2 = 0;
			SET_BIT(&(Global_1687880.f_2), 6);
		}
	}
	else if (IS_BIT_SET(Global_1687880.f_2, 6))
	{
		CLEAR_BIT(&(Global_1687880.f_2), 6);
	}
}

void func_477(bool bParam0)
{
	if (bParam0)
	{
		if (!IS_BIT_SET(Global_1687880.f_2, 5))
		{
			Global_1687880.f_2 = 0;
			SET_BIT(&(Global_1687880.f_2), 5);
		}
	}
	else if (IS_BIT_SET(Global_1687880.f_2, 5))
	{
		CLEAR_BIT(&(Global_1687880.f_2), 5);
	}
}

void func_478(bool bParam0)
{
	if (bParam0)
	{
		if (!IS_BIT_SET(Global_1687880.f_2, 3))
		{
			Global_1687880.f_2 = 0;
			SET_BIT(&(Global_1687880.f_2), 3);
		}
	}
	else if (IS_BIT_SET(Global_1687880.f_2, 3))
	{
		CLEAR_BIT(&(Global_1687880.f_2), 3);
	}
}

void func_479(bool bParam0)
{
	if (bParam0)
	{
		if (!IS_BIT_SET(Global_1687880.f_2, 2))
		{
			Global_1687880.f_2 = 0;
			SET_BIT(&(Global_1687880.f_2), 2);
		}
	}
	else if (IS_BIT_SET(Global_1687880.f_2, 2))
	{
		CLEAR_BIT(&(Global_1687880.f_2), 2);
	}
}

int func_480()
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
		if (func_443())
		{
			return 0;
		}
		if (func_441(157))
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

int func_481(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_450();
			}
			else
			{
				return 0;
			}
		}
		if (!func_482())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_450();
					}
					else
					{
						return 0;
					}
				}
				if (func_443())
				{
					if (!bParam2)
					{
						func_450();
					}
					else
					{
						return 0;
					}
				}
				if (func_441(157))
				{
					if (!bParam2)
					{
						func_450();
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
					func_450();
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
				func_450();
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
			func_450();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_482()
{
	return Global_1312850;
}

__________________________
Native Named by Reliency
1577160263
__________________________
