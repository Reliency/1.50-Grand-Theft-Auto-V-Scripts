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
	var uLocal_60 = 0;
	var uLocal_61 = 10;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
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
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	var uLocal_114 = -1;
	int iLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	struct<20> Local_121[32];
	vector3 vLocal_122[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	var uLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149[4] = { 0, 0, 0, 0 };
	var uLocal_150[2] = { 0, 0 };
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	struct<8> Local_154 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	struct<8> Local_163 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174[4] = { 0, 0, 0, 0 };
	struct<35> Local_175 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, -1, -1, 0, 0, 0 } ;
	struct<6> Local_176[32];
	struct<21> Local_177 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_112 = Global_262145.f_18286;
	iLocal_143 = GET_SOUND_ID();
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_997(PLAYER_ID(), 0, 1))
		{
			if (!func_946(ScriptParam_177))
			{
				func_889(0, 1);
				func_822();
			}
		}
		else
		{
			func_822();
		}
	}
	else
	{
		func_889(0, 1);
		func_822();
	}
	while (true)
	{
		func_821();
		if (func_816(1))
		{
			func_889(0, 1);
			func_822();
		}
		if (func_808())
		{
			func_889(0, 1);
			func_822();
		}
		func_804();
		func_802();
		func_801();
		func_798();
		func_797();
		func_791();
		switch (func_790(PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_789() == 1)
				{
					if (func_781())
					{
						func_780(PARTICIPANT_ID_TO_INT(), 1);
					}
				}
				break;
			
			case 1:
				if (func_789() == 1)
				{
					func_50();
				}
				else if (func_789() == 3)
				{
					func_780(PARTICIPANT_ID_TO_INT(), 3);
				}
				break;
			
			case 3:
				func_822();
				break;
		}
		if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_33();
			if (func_32())
			{
				func_889(0, 1);
				func_31(3);
			}
			switch (func_789())
			{
				case 0:
					if (func_28())
					{
						func_31(1);
					}
					break;
				
				case 1:
					func_1();
					break;
				
				case 3:
					func_822();
					break;
				}
		}
	}
}

void func_1()
{
	switch (func_27())
	{
		case 0:
			func_26(1);
			_0x6DEE77AFF8C21BD1(&(Local_175.f_33), &(Local_175.f_34));
			break;
		
		case 1:
			if (func_25() == 0)
			{
				func_18();
				if (func_17(6))
				{
					if (func_16())
					{
						func_15(10);
						func_26(2);
					}
					else
					{
						func_14(5);
						func_26(5);
					}
				}
			}
			else
			{
				func_26(5);
			}
			break;
		
		case 2:
			if (func_17(11))
			{
				func_26(3);
			}
			break;
		
		case 3:
			if (func_25() == 0)
			{
				func_6();
				if (!func_5(&(Local_175.f_5)))
				{
					func_4(&(Local_175.f_5), 0, 0);
				}
				else if (func_2(&(Local_175.f_5), func_3(), 0))
				{
					func_14(1);
				}
			}
			else
			{
				func_26(5);
			}
			break;
		
		case 5:
			if (func_17(0))
			{
				func_26(6);
			}
			break;
		
		case 6:
			func_31(3);
			break;
	}
}

int func_2(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
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

int func_3()
{
	return (1000 * Global_262145.f_18275);
}

void func_4(var uParam0, bool bParam1, bool bParam2)
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

bool func_5(var uParam0)
{
	return uParam0->f_1;
}

void func_6()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = func_13();
	if (iVar0 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!IS_BIT_SET(Local_175.f_32, iVar1))
		{
			vVar2 = { func_12(iVar1) };
			if (!func_11(vVar2, 0f, 0f, 0f, 0))
			{
				if (!NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_175.f_19[iVar1]))
				{
					if (func_8(&(uLocal_174[iVar1]), &(Local_175.f_19[iVar1]), vVar2, 1))
					{
						SET_BIT(&(Local_175.f_32), iVar1);
						if (!func_5(&uLocal_144))
						{
							func_4(&uLocal_144, 0, 0);
						}
					}
				}
			}
		}
		iVar1++;
	}
	if (func_2(&uLocal_144, 300000, 0))
	{
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (IS_BIT_SET(Local_175.f_32, iVar1))
			{
				CLEAR_BIT(&(Local_175.f_32), iVar1);
			}
			iVar1++;
		}
		func_7(&uLocal_144);
	}
}

void func_7(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_8(var uParam0, var uParam1, vector3 vParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!func_10(vParam2))
	{
		iVar0 = joaat("prop_gun_case_01");
		if (func_9(iVar0))
		{
			iVar1 = 0;
			SET_BIT(&iVar1, 0);
			SET_BIT(&iVar1, 1);
			SET_BIT(&iVar1, 9);
			SET_BIT(&iVar1, 4);
			*uParam0 = CREATE_AMBIENT_PICKUP(-301062413, vParam2 + Vector(0f, 0f, 0f), iVar1, -1, iVar0, iParam3, 1);
			*uParam1 = OBJ_TO_NET(*uParam0);
			return 1;
		}
	}
	return 0;
}

bool func_9(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	REQUEST_MODEL(iParam0);
	return HAS_MODEL_LOADED(iParam0);
}

int func_10(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_11(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_12(int iParam0)
{
	switch (Local_175.f_31)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1378.065f, 3179.572f, 39.5194f;
				
				case 1:
					return 1386.56f, 3147.986f, 39.52f;
				
				case 2:
					return 1396.397f, 3111.702f, 39.5088f;
				
				case 3:
					return 1402.808f, 3087.676f, 39.5129f;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1375.18f, -3033.337f, 12.9448f;
				
				case 1:
					return -1364.817f, -3015.949f, 12.9676f;
				
				case 2:
					return -1305.581f, -3048.433f, 12.9444f;
				
				case 3:
					return -1317.517f, -3067.379f, 12.9444f;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return 2039.639f, 4749.277f, 40.013f;
				
				case 1:
					return 2028.618f, 4775.398f, 40.3574f;
				
				case 2:
					return 2134.54f, 4826.913f, 40.4972f;
				
				case 3:
					return 1936.858f, 4695.858f, 40.2577f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_13()
{
	switch (Local_175.f_31)
	{
		case 0:
			return 4;
		
		case 1:
			return 4;
		
		case 2:
			return 4;
		
		default:
	}
	return 0;
}

void func_14(int iParam0)
{
	if (!NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_175.f_14 = iParam0;
}

void func_15(int iParam0)
{
	if (!NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	SET_BIT(&(Local_175.f_1), iParam0);
}

bool func_16()
{
	return (func_17(8) && func_17(9));
}

bool func_17(int iParam0)
{
	return IS_BIT_SET(Local_175.f_1, iParam0);
}

void func_18()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = func_24();
	if (func_17(4))
	{
		if (!func_17(5))
		{
			if (func_23() - func_22(&(Local_175.f_7), 0, 0)) >= func_21()
			{
				func_7(&(Local_175.f_7));
				func_15(5);
			}
		}
	}
	iVar1 = func_23();
	if (func_17(5))
	{
		iVar1 = func_21();
	}
	if (!func_17(3))
	{
		if (bVar0)
		{
			if (func_5(&(Local_175.f_9)))
			{
				func_7(&(Local_175.f_9));
			}
			if (!func_5(&(Local_175.f_7)))
			{
				func_4(&(Local_175.f_7), 0, 0);
				if (Local_175.f_4 > 0)
				{
					iVar2 = HAS_NETWORK_TIME_STARTED(HAS_NETWORK_TIME_STARTED(), (-1 * Local_175.f_4));
					func_20(&(Local_175.f_7), iVar2);
					Local_175.f_4 = 0;
				}
			}
			else if (!func_17(6))
			{
				if ((iVar1 - func_22(&(Local_175.f_7), 0, 0)) <= 0)
				{
					func_15(6);
				}
			}
		}
		else
		{
			if (func_17(7))
			{
				if (func_5(&(Local_175.f_7)))
				{
					Local_175.f_4 = func_22(&(Local_175.f_7), 0, 0);
				}
			}
			else
			{
				Local_175.f_4 = 0;
			}
			if (func_5(&(Local_175.f_7)))
			{
				func_7(&(Local_175.f_7));
			}
			if (!func_5(&(Local_175.f_9)))
			{
				func_4(&(Local_175.f_9), 0, 0);
			}
			else
			{
				if (func_2(&(Local_175.f_9), func_19(), 0))
				{
					func_15(3);
					func_14(6);
				}
				if (func_2(&(Local_175.f_9), (func_19() - 30000), 0))
				{
					func_15(3);
					func_14(6);
				}
			}
		}
	}
}

int func_19()
{
	return 600000;
}

void func_20(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	uParam0->f_1 = 1;
}

int func_21()
{
	return 20000;
}

int func_22(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return IS_TIME_EQUAL_TO(IS_TIME_EQUAL_TO(), *uParam0);
		}
		else
		{
			return IS_TIME_EQUAL_TO(IS_TIME_EQUAL_TO(), *uParam0);
		}
	}
	return IS_TIME_EQUAL_TO(IS_TIME_EQUAL_TO(), *uParam0);
}

int func_23()
{
	return 180000;
}

var func_24()
{
	return (func_17(8) || func_17(9));
}

int func_25()
{
	return Local_175.f_14;
}

void func_26(int iParam0)
{
	if (!NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_175.f_13 = iParam0;
}

int func_27()
{
	return Local_175.f_13;
}

bool func_28()
{
	if (!func_17(1))
	{
		if (func_30() > -1)
		{
			if (func_30() == 0)
			{
				Local_175.f_31 = 0;
			}
			else if (func_30() == 1)
			{
				Local_175.f_31 = 1;
			}
			else
			{
				Local_175.f_31 = 2;
			}
		}
		else
		{
			Local_175.f_31 = GET_RANDOM_INT_IN_RANGE(0, 3);
		}
		if (Global_262145.f_18280)
		{
			if (Local_175.f_31 == 0)
			{
				if (!Global_262145.f_18281)
				{
					Local_175.f_31 = 1;
				}
				else
				{
					Local_175.f_31 = 2;
				}
			}
		}
		else if (Global_262145.f_18281)
		{
			if (Local_175.f_31 == 1)
			{
				if (!Global_262145.f_18282)
				{
					Local_175.f_31 = 2;
				}
				else
				{
					Local_175.f_31 = 0;
				}
			}
		}
		else if (Global_262145.f_18282)
		{
			if (Local_175.f_31 == 2)
			{
				if (!Global_262145.f_18281)
				{
					Local_175.f_31 = 0;
				}
				else
				{
					Local_175.f_31 = 1;
				}
			}
		}
		Local_175.f_15 = PLAYER_ID();
		Local_175.f_16[0] = PLAYER_ID();
		Local_175.f_24[0] = iLocal_112;
		Local_175.f_16[1] = func_29();
		Local_175.f_24[1] = iLocal_112;
		func_15(1);
	}
	return func_17(1);
}

int func_29()
{
	return -1;
}

int func_30()
{
	return Global_2531497.f_4898.f_337;
}

void func_31(int iParam0)
{
	Local_175 = iParam0;
}

int func_32()
{
	if (Global_2531497.f_4898.f_38)
	{
		Global_2531497.f_4898.f_38 = 0;
		return 1;
	}
	return 0;
}

void func_33()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7[2];
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	bVar2 = true;
	bVar3 = true;
	if (Local_175 != 3)
	{
		iVar0 = 0;
		while (iVar0 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			if (NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(iVar0)))
			{
				iVar1 = INT_TO_PARTICIPANTINDEX(iVar0);
				iVar11 = NETWORK_GET_PLAYER_INDEX(NETWORK_GET_PLAYER_INDEX(iVar0));
				if (!func_47(iVar11, 0))
				{
					iVar6++;
					if (func_17(1))
					{
						if (Local_175.f_16[1] == func_29())
						{
							if (func_45(iVar11))
							{
								if (iVar11 != Local_175.f_15)
								{
									Local_175.f_16[1] = iVar11;
								}
							}
						}
					}
					if (!func_17(8))
					{
						if (iVar11 == Local_175.f_16[0])
						{
							if (func_44(iVar1, 1))
							{
								func_15(8);
							}
						}
					}
					else if (iVar11 == Local_175.f_16[0])
					{
						if (!func_44(iVar1, 1))
						{
							func_43(8);
						}
					}
					if (!func_17(9))
					{
						if (iVar11 == Local_175.f_16[1])
						{
							if (func_44(iVar1, 1))
							{
								func_15(9);
							}
						}
					}
					else if (iVar11 == Local_175.f_16[1])
					{
						if (!func_44(iVar1, 1))
						{
							func_43(9);
						}
					}
					if (func_27() == 1)
					{
						if (func_44(iVar1, 2))
						{
							if (!IS_BIT_SET(Local_175.f_2, iVar0))
							{
								iVar5++;
								SET_BIT(&(Local_175.f_2), iVar0);
							}
							else
							{
								iVar5++;
							}
						}
						else if (IS_BIT_SET(Local_175.f_2, iVar0))
						{
							CLEAR_BIT(&(Local_175.f_2), iVar0);
						}
					}
					else if (func_27() == 3)
					{
						if (Local_176[iVar0 /*6*/].f_3 > 0)
						{
							iVar9 = func_34(iVar11);
							iVar7[iVar9] = (iVar7[iVar9] + Local_176[iVar0 /*6*/].f_3);
						}
						if (Local_176[iVar0 /*6*/].f_4 > 0)
						{
							iVar9 = func_34(iVar11);
							iVar10 = (1 - iVar9);
							iVar7[iVar10] = (iVar7[iVar10] + Local_176[iVar0 /*6*/].f_4);
						}
					}
					if (func_27() <= 2)
					{
						if (!bVar4)
						{
							if (func_44(iVar1, 1))
							{
								if (!func_44(iVar1, 7))
								{
									bVar4 = true;
								}
							}
						}
					}
					if (func_45(iVar11))
					{
						bVar3 = false;
						if (func_27() == 1)
						{
							iVar8++;
						}
						else if (func_44(iVar1, 1))
						{
							iVar8++;
						}
					}
					if (!func_44(iVar1, 0))
					{
						bVar2 = false;
					}
				}
			}
			iVar0++;
		}
	}
	if (!func_17(7))
	{
		if (iVar5 > 0)
		{
			func_15(7);
		}
	}
	else if (iVar5 == 0)
	{
		func_43(7);
	}
	if (!func_17(2))
	{
		if (iVar5 > 1)
		{
			func_15(2);
		}
	}
	else if (iVar5 <= 1)
	{
		func_43(2);
	}
	if (!func_17(4))
	{
		if (iVar6 > 1)
		{
			if (iVar6 == iVar5)
			{
				func_15(4);
			}
		}
	}
	if (!func_17(11))
	{
		if (func_27() == 2)
		{
			if (!bVar4)
			{
				func_15(11);
			}
		}
	}
	if (func_27() == 1)
	{
		if (func_25() == 0)
		{
			if (!func_5(&(Local_175.f_11)))
			{
				func_4(&(Local_175.f_11), 0, 0);
			}
			else if (func_2(&(Local_175.f_11), 10000, 0))
			{
				if (iVar8 < 2)
				{
					func_14(5);
				}
			}
		}
	}
	else if (func_27() == 3)
	{
		if (func_25() == 0)
		{
			iVar14 = iVar7[1];
			iVar13 = (iLocal_112 - iVar14);
			Local_175.f_27[0] = iVar7[0];
			Local_175.f_27[1] = iVar7[1];
			if (Local_175.f_24[0] != iVar13)
			{
				iVar12 = 0;
				if (Local_175.f_24[0] < iVar13)
				{
					iVar12 = (iVar13 - Local_175.f_24[0]);
				}
				Local_175.f_24[0] = (iVar13 - iVar12);
			}
			iVar14 = iVar7[0];
			iVar13 = (iLocal_112 - iVar14);
			if (Local_175.f_24[1] != iVar13)
			{
				iVar12 = 0;
				if (Local_175.f_24[1] < iVar13)
				{
					iVar12 = (iVar13 - Local_175.f_24[1]);
				}
				Local_175.f_24[1] = (iVar13 - iVar12);
			}
			if (Local_175.f_27[0] >= iLocal_112)
			{
				Local_175.f_30 = 0;
			}
			else if (Local_175.f_27[1] >= iLocal_112)
			{
				Local_175.f_30 = 1;
			}
			if (iVar8 < 2)
			{
				func_14(5);
			}
		}
		else if (func_25() == 1)
		{
			if (Local_175.f_30 == -1)
			{
				if (Local_175.f_27[0] == Local_175.f_27[1])
				{
					Local_175.f_30 = 99;
				}
				else if (Local_175.f_27[0] > Local_175.f_27[1])
				{
					Local_175.f_30 = 0;
				}
				else
				{
					Local_175.f_30 = 1;
				}
			}
		}
	}
	if (bVar2)
	{
		if (!func_17(0))
		{
			func_15(0);
		}
	}
	else if (func_17(0))
	{
		func_43(0);
	}
	if (Local_175.f_3 != iVar5)
	{
		Local_175.f_3 = iVar5;
	}
	if (func_25() == 0)
	{
		if (bVar3)
		{
			func_14(2);
		}
		if (Local_175.f_30 != -1)
		{
			func_14(4);
		}
	}
}

int func_34(int iParam0)
{
	if (func_37(iParam0) || func_35(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_35(int iParam0)
{
	return func_36() == iParam0;
}

int func_36()
{
	return Local_175.f_15;
}

int func_37(int iParam0)
{
	return func_38(iParam0, func_36(), 0);
}

int func_38(int iParam0, int iParam1, bool bParam2)
{
	return func_39(iParam0, iParam1, bParam2, 1);
}

int func_39(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam1 != func_29() && iParam0 != func_29())
	{
		if (!bParam2)
		{
			if (func_42(iParam0, iParam1, iParam3))
			{
				return 0;
			}
		}
		if (Global_1628955[iParam0 /*614*/].f_11 != func_29())
		{
			if (iParam1 == Global_1628955[iParam0 /*614*/].f_11)
			{
				return func_40(iParam1, iParam3);
			}
		}
	}
	return 0;
}

int func_40(int iParam0, int iParam1)
{
	if (func_41(iParam0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_450 == iParam1;
	}
	return 0;
}

int func_41(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (Global_1628955[iParam0 /*614*/].f_11 != func_29())
		{
			return Global_1628955[iParam0 /*614*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_42(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_29())
	{
		if (iParam0 != func_29())
		{
			if (Global_1628955[iParam0 /*614*/].f_11 != func_29())
			{
				if (Global_1628955[iParam0 /*614*/].f_11 == iParam0)
				{
					if (Global_1628955[iParam0 /*614*/].f_11.f_450 == iParam2)
					{
						return iParam1 == iParam0;
					}
				}
			}
		}
	}
	return 0;
}

void func_43(int iParam0)
{
	CLEAR_BIT(&(Local_175.f_1), iParam0);
}

bool func_44(int iParam0, int iParam1)
{
	return IS_BIT_SET(Local_176[iParam0 /*6*/].f_1, iParam1);
}

bool func_45(int iParam0)
{
	return func_46(iParam0, 1);
}

int func_46(int iParam0, int iParam1)
{
	if (iParam0 != func_29())
	{
		if (Global_1628955[iParam0 /*614*/].f_11 != func_29())
		{
			if (Global_1628955[iParam0 /*614*/].f_11 == iParam0 && Global_1628955[iParam0 /*614*/].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_47(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER_ID())
	{
		bVar0 = func_48(-1, 0) == 8;
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

int func_48(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_49();
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

int func_49()
{
	return Global_1312745;
}

void func_50()
{
	if (iLocal_139 > -1)
	{
		if ((!func_775() && !func_774()) && !func_773(179))
		{
			if (func_737(1, 1, 1, 0))
			{
				switch (Local_176[iLocal_139 /*6*/].f_5)
				{
					case 0:
						if (!func_736(2))
						{
							func_715(179, 1, -1, 0);
							iLocal_152 = func_714(PLAYER_ID());
							StringCopy(&Local_154, func_713(), 64);
							func_712(2);
						}
						if (!func_736(4))
						{
							func_628(-1, 0, 0, -1, 0, 0);
							func_712(4);
						}
						if (Local_175.f_13 > 0)
						{
							if (Local_175.f_13 > 1)
							{
								Local_176[iLocal_139 /*6*/].f_5 = 4;
							}
							else
							{
								Local_176[iLocal_139 /*6*/].f_5 = Local_175.f_13;
							}
						}
						break;
					
					case 1:
						func_586();
						func_585();
						func_562();
						func_548();
						if (Local_175.f_13 != 1)
						{
							if (func_44(PARTICIPANT_ID(), 1))
							{
								func_538(1);
								Local_176[iLocal_139 /*6*/].f_5 = Local_175.f_13;
							}
							else
							{
								func_531();
								Local_176[iLocal_139 /*6*/].f_5 = 4;
							}
						}
						break;
					
					case 2:
						func_586();
						func_530();
						DISABLE_CONTROL_ACTION(0, 140, 1);
						DISABLE_CONTROL_ACTION(0, 141, 1);
						DISABLE_CONTROL_ACTION(0, 142, 1);
						DISABLE_CONTROL_ACTION(0, 143, 1);
						DISABLE_CONTROL_ACTION(0, 24, 1);
						DISABLE_CONTROL_ACTION(0, 345, 1);
						DISABLE_CONTROL_ACTION(0, 346, 1);
						DISABLE_CONTROL_ACTION(0, 347, 1);
						if (func_44(PARTICIPANT_ID(), 1) || func_44(PARTICIPANT_ID(), 2))
						{
							if (!func_44(PARTICIPANT_ID(), 6))
							{
								func_529(1);
							}
							func_548();
						}
						func_524();
						if (Local_175.f_13 != 2)
						{
							func_523(&iLocal_115);
							Local_176[iLocal_139 /*6*/].f_5 = Local_175.f_13;
						}
						break;
					
					case 3:
						if (func_5(&(Local_175.f_5)))
						{
							func_516((func_3() - func_22(&(Local_175.f_5), 0, 0)), func_25() != 0, &iLocal_113, -1);
						}
						if (!func_736(3))
						{
							if (func_2(&(Local_175.f_5), 10000, 0))
							{
								func_515();
								func_712(3);
							}
						}
						if (func_25() == 0)
						{
							func_586();
							func_514();
							func_513();
							func_512();
							if (func_511())
							{
								if (Local_176[iLocal_139 /*6*/].f_5 == 3)
								{
									func_510();
								}
							}
							if (iLocal_139 > -1)
							{
								if (iLocal_139 == PARTICIPANT_ID_TO_INT())
								{
									func_524();
									func_389(&(Global_1363235.f_534), &Global_1363235, 27, &(Global_1363235.f_1), &(Global_1363235.f_117), -1, 0, 0);
								}
							}
						}
						if (Local_175.f_13 != 3)
						{
							Local_176[iLocal_139 /*6*/].f_5 = Local_175.f_13;
						}
						break;
					
					case 4:
						if (Local_175.f_13 > 4)
						{
							Local_176[iLocal_139 /*6*/].f_5 = Local_175.f_13;
						}
						break;
					
					case 5:
						func_531();
						func_83();
						break;
					
					case 6:
						break;
				}
			}
			else
			{
				func_51();
			}
		}
		else
		{
			func_51();
		}
	}
}

void func_51()
{
	int iVar0;
	
	if (!func_736(5))
	{
		func_531();
		if (NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (func_44(PARTICIPANT_ID(), 4))
			{
				func_82(4);
				func_80(1);
				SET_PED_CAN_BE_DRAGGED_OUT(SET_PED_CAN_BE_DRAGGED_OUT(), 1);
			}
		}
		if (DOES_BLIP_EXIST(iLocal_147))
		{
			REMOVE_BLIP(&iLocal_147);
		}
		if (DOES_BLIP_EXIST(iLocal_146))
		{
			REMOVE_BLIP(&iLocal_146);
		}
		if (DOES_BLIP_EXIST(iLocal_148))
		{
			REMOVE_BLIP(&iLocal_148);
		}
		iVar0 = 0;
		while (iVar0 < func_13())
		{
			if (DOES_BLIP_EXIST(iLocal_149[iVar0]))
			{
				REMOVE_BLIP(&(iLocal_149[iVar0]));
			}
			iVar0++;
		}
		func_70();
		func_68();
		func_67();
		func_54(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
		func_523(&iLocal_115);
		func_52();
		func_712(5);
	}
}

void func_52()
{
	func_53(0, 0);
}

void func_53(int iParam0, int iParam1)
{
	Global_2405071.f_22 = iParam0;
	Global_2405071.f_23 = iParam1;
}

void func_54(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_66())
		{
			func_65();
		}
		Global_2405071.f_704.f_518 = GET_ID_OF_THIS_THREAD();
		Global_2405071.f_704.f_504 = iParam1;
		Global_2405071.f_704.f_505 = iParam2;
		Global_2405071.f_704.f_506 = iParam10;
		func_68();
		func_58(8, 0, 0, 0, 0);
		Global_2405071.f_704.f_507 = iParam11;
		Global_2405071.f_704.f_512 = iParam3;
		Global_2405071.f_704.f_513 = iParam4;
		Global_2405071.f_704.f_510 = iParam5;
		Global_2405071.f_704.f_511 = iParam6;
		Global_2405071.f_704.f_514 = iParam7;
		Global_2405071.f_704.f_515 = iParam8;
		Global_2405071.f_704.f_516 = iParam9;
		Global_2405071.f_704.f_517 = iParam14;
		Global_2405071.f_704.f_508 = iParam12;
		Global_2405071.f_704.f_509 = iParam13;
		Global_2405071.f_1743 = 1;
	}
	else
	{
		func_55();
	}
}

void func_55()
{
	if (func_66() && !func_57())
	{
		func_65();
	}
	if (func_57())
	{
		func_56();
	}
	else
	{
		func_68();
		func_58(0, 0, 0, 0, 0);
		Global_2405071.f_1743 = 0;
		Global_2405071.f_1742 = 0;
	}
}

void func_56()
{
	0x213AEB2B90CBA7AC(&(Global_2405071.f_704), &(Global_2405071.f_1223), 519);
	Global_2405071.f_485 = { Global_2405071.f_491 };
	if (GET_ID_OF_THIS_THREAD() == Global_2405071.f_704.f_518)
	{
		Global_2405071.f_1742 = 0;
	}
}

int func_57()
{
	if ((Global_2405071.f_1742 && !GET_ID_OF_THIS_THREAD() == Global_2405071.f_1223.f_518) && GET_ID_OF_THIS_THREAD(Global_2405071.f_1223.f_518))
	{
		return 1;
	}
	return 0;
}

void func_58(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2437549.f_1893.f_690.f_16 != func_29())
	{
		if (IS_BIT_SET(Global_2424073[Global_2437549.f_1893.f_690.f_16 /*421*/].f_402, 0) && func_59())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412637 = 0;
	}
	Global_2405071.f_485 = iParam0;
	Global_2405071.f_485.f_1 = GET_ID_OF_THIS_THREAD();
	Global_2405071.f_485.f_2 = iParam1;
	Global_2405071.f_485.f_3 = iParam2;
	Global_2405071.f_485.f_4 = iParam3;
	Global_2405071.f_485.f_5 = iParam4;
}

int func_59()
{
	if (((((func_63(PLAYER_ID()) == 229 || func_63(PLAYER_ID()) == 191) || func_62()) || func_61()) || func_60(PLAYER_ID())) || Global_2508349.f_226 == 1)
	{
		return 0;
	}
	return 1;
}

int func_60(int iParam0)
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

var func_61()
{
	return Global_1574402;
}

int func_62()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

int func_63(int iParam0)
{
	if (func_64(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_33;
	}
	return -1;
}

int func_64(int iParam0, int iParam1)
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 || (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_65()
{
	if (func_57())
	{
		if (Global_2405071.f_704.f_518 == Global_2405071.f_1223.f_518)
		{
			return;
		}
	}
	if (!GET_ID_OF_THIS_THREAD() == Global_2405071.f_704.f_518)
	{
		0x213AEB2B90CBA7AC(&(Global_2405071.f_1223), &(Global_2405071.f_704), 519);
		Global_2405071.f_491 = { Global_2405071.f_485 };
		Global_2405071.f_1742 = 1;
	}
}

int func_66()
{
	if ((Global_2405071.f_1743 && !GET_ID_OF_THIS_THREAD() == Global_2405071.f_704.f_518) && GET_ID_OF_THIS_THREAD(Global_2405071.f_704.f_518))
	{
		return 1;
	}
	return 0;
}

void func_67()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 101)
	{
		Global_2405071.f_1745[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2405071.f_1744 = 0;
}

void func_68()
{
	if (func_66() && !func_57())
	{
		func_65();
	}
	func_69();
	Global_2405071.f_704 = 0;
}

void func_69()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405071.f_704.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_70()
{
	int iVar0;
	int iVar1;
	
	if (!func_736(8))
	{
		func_712(8);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = INT_TO_PLAYERINDEX(iVar0);
			if (NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				if (iVar1 != PLAYER_ID())
				{
					if (IS_BIT_SET(iLocal_140, iVar0))
					{
						func_78(iVar1, 432, 0, 0);
						func_71(iVar1, func_77(iLocal_153), 0, 0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_71(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_73(iParam0))
	{
		return;
	}
	if (func_72(&(Global_2416074.f_619[iParam0]), &(Global_2416074.f_982[iParam0]), &(Global_2416074.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416074.f_454[iParam0] = uParam1;
		}
	}
}

int func_72(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
{
	if (bParam5)
	{
		if (!IS_THREAD_ACTIVE(*uParam1) || *uParam1 == IS_THREAD_ACTIVE())
		{
			*uParam1 = GET_ID_OF_THIS_THREAD();
			*uParam0 = GET_ID_OF_THIS_THREAD();
		}
	}
	if (!IS_THREAD_ACTIVE(*uParam0) || *uParam0 == IS_THREAD_ACTIVE())
	{
		if (bParam3)
		{
			if (!IS_BIT_SET(*iParam2, iParam4))
			{
				*uParam6 = 1;
				SET_BIT(iParam2, iParam4);
			}
			*uParam0 = GET_ID_OF_THIS_THREAD();
		}
		else
		{
			if (IS_BIT_SET(*iParam2, iParam4))
			{
				*uParam6 = 1;
				CLEAR_BIT(iParam2, iParam4);
			}
			if (*uParam1 == GET_ID_OF_THIS_THREAD())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (IS_THREAD_ACTIVE(*uParam1) && !*uParam1 == IS_THREAD_ACTIVE())
	{
	}
	return 0;
}

int func_73(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 1;
	}
	if (GET_HASH_KEY(GET_HASH_KEY()) == func_74())
	{
		return 1;
	}
	return 0;
}

int func_74()
{
	switch (func_76())
	{
		case 0:
			return func_75();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_75()
{
	switch (Global_2461343)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_76()
{
	return Global_30736;
}

int func_77(int iParam0)
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

void func_78(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_73(iParam0))
	{
		return;
	}
	if (func_72(&(Global_2416074.f_586[iParam0]), &(Global_2416074.f_949[iParam0]), &(Global_2416074.f_388), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2416074.f_421[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_79();
		}
	}
}

void func_79()
{
	Global_2416074.f_1515 = 1;
}

void func_80(bool bParam0)
{
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_81())
		{
			if (func_997(PLAYER_ID(), 1, 0))
			{
				SET_PED_CAN_BE_DRAGGED_OUT(SET_PED_CAN_BE_DRAGGED_OUT(), 1);
				SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 342, false);
				SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 122, false);
			}
			SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(), 1f);
			_0x1B857666604B1A74(0);
			NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
			if (Global_1312417.f_1 == 0 || Global_1312417.f_2 == 1)
			{
				Global_1312417.f_2 = 0;
				if (bParam0)
				{
					0x838DA0936A24ED4D(0, 0);
				}
			}
		}
		else
		{
			if (func_997(PLAYER_ID(), 1, 1))
			{
				SET_PED_CAN_BE_DRAGGED_OUT(SET_PED_CAN_BE_DRAGGED_OUT(), 0);
				SET_CURRENT_PED_WEAPON(SET_CURRENT_PED_WEAPON(), joaat("weapon_unarmed"), true);
				SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 342, true);
				SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 122, true);
				SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(), 0.5f);
				if (Global_1312417.f_1 == 0 || Global_1312417.f_2 == 1)
				{
					0x838DA0936A24ED4D(1, 0);
				}
			}
			_0x1B857666604B1A74(1);
			NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
		}
	}
}

bool func_81()
{
	return Global_1312417;
}

void func_82(int iParam0)
{
	CLEAR_BIT(&(Local_176[CLEAR_BIT() /*6*/].f_1), iParam0);
}

void func_83()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<20> Var3;
	int iVar4;
	
	Var3.f_2 = 1065353216;
	Var3.f_3 = 1065353216;
	Var3.f_4 = 1;
	Var3.f_9 = -1;
	Var3.f_18 = -1;
	Var3.f_19 = -1;
	if (!func_736(1))
	{
		if (func_25() != 0)
		{
			if (!IS_PED_INJURED(IS_PED_INJURED()))
			{
				if (func_737(1, 1, 1, 0))
				{
					if (((!func_775() && !func_774()) && !func_773(179)) && func_44(PARTICIPANT_ID(), 1))
					{
						if (func_387())
						{
							iVar1 = func_34(PLAYER_ID());
							iVar2 = Local_175.f_30;
							switch (func_25())
							{
								case 2:
									CLEAR_HELP(1);
									break;
								
								case 3:
									CLEAR_HELP(1);
									break;
								
								case 1:
									CLEAR_HELP(1);
									if (Local_175.f_30 > -1)
									{
										if (Local_175.f_30 == 99)
										{
											func_385(88, "BK_RUN_OVER", "BIGM_JOUSTDR", &Local_154, iLocal_152, 0, -1, -1, -1, 2, -1);
										}
										else if (iVar1 == iVar2)
										{
											bVar0 = true;
											func_385(87, "GB_WINNER", "BIGM_JOUSTWD", &Local_154, iLocal_152, 0, -1, -1, -1, 2, -1);
										}
										else
										{
											func_385(88, "BK_RUN_OVER", "BIGM_JOUSTLD", &Local_154, iLocal_152, 0, -1, -1, -1, 2, -1);
										}
									}
									else
									{
										func_366(88, "BK_RUN_OVER", "BIGM_JOUSTLT", 1, -1, 2, 1, 0);
									}
									break;
								
								case 5:
									CLEAR_HELP(1);
									func_366(88, "BK_RUN_OVER", "BIGM_JOUSTNB", 1, -1, 2, 1, 0);
									break;
								
								case 4:
									CLEAR_HELP(1);
									if (iVar1 == iVar2)
									{
										bVar0 = true;
										func_385(87, "GB_WINNER", "BIGM_JOUSTWD", &Local_154, iLocal_152, 0, -1, -1, -1, 2, -1);
									}
									else
									{
										func_385(88, "BK_RUN_OVER", "BIGM_JOUSTLD", &Local_154, iLocal_152, 0, -1, -1, -1, 2, -1);
									}
									break;
								
								case 6:
									func_385(88, "BK_RUN_OVER", "BIGM_JOUSTLD", &Local_154, iLocal_152, 0, -1, -1, -1, 2, -1);
									break;
							}
						}
					}
				}
				iVar4 = PLAYER_ID();
				func_364(1, iVar4);
				if (bVar0)
				{
				}
				func_123(179, bVar0, &Var3, 0);
				func_889(bVar0, 0);
				func_51();
				func_712(1);
			}
		}
	}
	if (func_85(&uLocal_123, 1, 0))
	{
		func_84(0);
	}
}

void func_84(int iParam0)
{
	SET_BIT(&(Local_176[SET_BIT() /*6*/].f_1), iParam0);
}

int func_85(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_122(29);
	if ((*uParam0 > 0 && !func_121()) && func_113(PLAYER_ID()) != 0)
	{
		if (!func_110())
		{
			func_109();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_5(&(uParam0->f_3)))
			{
				func_4(&(uParam0->f_3), 0, 0);
			}
			else if (func_2(&(uParam0->f_3), 1000, 0))
			{
				SET_BIT(&(Global_1674852.f_3), 2);
				if (bParam1)
				{
					SET_BIT(&(Global_2531497.f_4588), 0);
					func_4(&(uParam0->f_5), 0, 0);
				}
				func_4(&(uParam0->f_1), 0, 0);
				func_108(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_5(&(uParam0->f_5)))
			{
				if (func_2(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_97(iParam2);
				func_108(uParam0, 2);
			}
			break;
		
		case 2:
			func_97(0);
			if (func_2(&(uParam0->f_1), 15000, 0))
			{
				if (func_86(func_87(0)))
				{
					CLEAR_HELP(1);
				}
				func_108(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_2(&(uParam0->f_1), 23500, 0))
			{
				CLEAR_BIT(&(Global_2531497.f_4588), 1);
				CLEAR_BIT(&(Global_1674852.f_3), 2);
				func_108(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			CLEAR_BIT(&(Global_2531497.f_4588), 1);
			CLEAR_BIT(&(Global_1674852.f_3), 2);
			return 1;
	}
	return 0;
}

int func_86(char* sParam0)
{
	BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_87(int iParam0)
{
	if (((func_95(PLAYER_ID()) || func_94(PLAYER_ID())) || func_91()) || iParam0)
	{
		if (func_94(PLAYER_ID()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_88(func_90()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_88(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_89(iParam0, 0);
	return 0;
}

int func_89(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_90()
{
	return Global_1651198;
}

bool func_91()
{
	return (func_93() && func_45(func_92()));
}

int func_92()
{
	return Global_1628955[PLAYER_ID() /*614*/].f_11.f_35;
}

bool func_93()
{
	return Global_1590446[PLAYER_ID() /*871*/] == 148;
}

bool func_94(int iParam0)
{
	return func_89(func_63(iParam0), 0);
}

bool func_95(int iParam0)
{
	return func_96(func_63(iParam0));
}

int func_96(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1590446[PLAYER_ID() /*871*/] == 148 && func_46(Global_1628955[PLAYER_ID() /*614*/].f_11.f_35, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_97(int iParam0)
{
	if (IS_BIT_SET(Global_2531497.f_4588, 0))
	{
		if (((((((((((!IS_RADAR_HIDDEN() && !IS_RADAR_HIDDEN(Global_2531497.f_795, 2)) && func_997(IS_RADAR_HIDDEN(), 1, 1)) && !Global_73784) && !Global_58652) && !IS_RADAR_HIDDEN()) && !func_107(IS_RADAR_HIDDEN(), 22)) && func_113(IS_RADAR_HIDDEN()) != 0) && !func_105(func_106())) && !func_95(IS_RADAR_HIDDEN())) && !func_104(func_63(IS_RADAR_HIDDEN()))) && !func_103(func_63(IS_RADAR_HIDDEN())))
		{
			SET_BIT(&(Global_2531497.f_4588), 1);
			func_102(func_87(iParam0), -1);
			func_98(1);
			CLEAR_BIT(&(Global_2531497.f_4588), 0);
		}
	}
}

void func_98(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_99(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_121())
	{
		PLAY_SOUND_FRONTEND(-1, "Boss_Message_Orange", sVar0, false);
	}
}

bool func_99(bool bParam0)
{
	return func_100(PLAYER_ID(), bParam0);
}

bool func_100(int iParam0, bool bParam1)
{
	return func_101(iParam0, bParam1, 1);
}

int func_101(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_46(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628955[iParam0 /*614*/].f_11;
	if (iVar0 != func_29() && Global_1628955[iVar0 /*614*/].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

void func_102(char* sParam0, int iParam1)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 0, false, iParam1);
}

int func_103(int iParam0)
{
	switch (iParam0)
	{
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_104(int iParam0)
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

int func_105(int iParam0)
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

int func_106()
{
	char* sVar0;
	
	sVar0 = GET_THIS_SCRIPT_NAME();
	if (ARE_STRINGS_EQUAL(sVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_SELL"))
	{
		return 237;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_DEFEND"))
	{
		return 238;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_SECURITY_VAN"))
	{
		return 239;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_TARGET_PURSUIT"))
	{
		return 240;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_JEWEL_STORE_GRAB"))
	{
		return 241;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_BANK_JOB"))
	{
		return 242;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_DATA_HACK"))
	{
		return 244;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_INFILTRATION"))
	{
		return 248;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_PHONECALL"))
	{
		return 249;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_CLUB_MANAGEMENT"))
	{
		return 250;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_GB_CASINO"))
	{
		return 243;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_GB_CASINO_HEIST"))
	{
		return 158;
	}
	return 0;
}

bool func_107(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

void func_108(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_109()
{
	Global_2460541 = 1;
}

int func_110()
{
	if (((((((func_63(PLAYER_ID()) == 170 || func_63(PLAYER_ID()) == 219) || func_63(PLAYER_ID()) == 221) || func_63(PLAYER_ID()) == 220) || func_63(PLAYER_ID()) == 216) || func_63(PLAYER_ID()) == 215) || func_63(PLAYER_ID()) == 214) || func_63(PLAYER_ID()) == 218)
	{
		return 1;
	}
	if (func_111(PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_111(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_997(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424073[iParam0 /*421*/].f_309.f_5) == 2;
			}
		}
	}
	return 0;
}

int func_112(int iParam0)
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

int func_113(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	iVar0 = 2;
	bVar1 = ((func_120(iParam0) && !func_119(iParam0)) && !IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 8));
	bVar2 = func_118(iParam0);
	bVar3 = func_81();
	bVar4 = func_775();
	if ((bVar1 && (func_117(iParam0) || func_116(iParam0))) || bVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_115(iParam0)) && !func_114(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2531497.f_4898.f_214 != iVar0)
	{
		Global_2531497.f_4898.f_214 = iVar0;
	}
	return iVar0;
}

bool func_114(int iParam0)
{
	return func_107(iParam0, 19);
}

int func_115(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_107(iParam0, 9);
	}
	return 0;
}

int func_116(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return IS_BIT_SET(Global_1628955[iVar0 /*614*/].f_1, 0);
	}
	return 0;
}

int func_117(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return IS_BIT_SET(Global_1628955[iVar0 /*614*/].f_1, 7);
	}
	return 0;
}

bool func_118(int iParam0)
{
	return func_107(iParam0, 20);
}

bool func_119(int iParam0)
{
	return IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 2);
}

int func_120(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628955[iVar0 /*614*/] != -1;
	}
	return 0;
}

bool func_121()
{
	return Global_2437549.f_2708[0 /*80*/].f_1 != 0;
}

void func_122(int iParam0)
{
	SET_BIT(&(Global_1628955[SET_BIT() /*614*/].f_11.f_4), iParam0);
}

void func_123(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	func_362(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_361(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		iVar1 = round((to_float(iVar1) / to_float(uParam2->f_4)));
		iVar1 = round((IntToFloat(iVar1) * fVar3));
		iVar1 = round((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + func_360(iParam0, bParam3));
		iVar0 = round((to_float(iVar0) / to_float(uParam2->f_4)));
		iVar0 = round((IntToFloat(iVar0) * fVar2));
		iVar0 = round((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = round((to_float(iVar1) / to_float(uParam2->f_4)));
		iVar1 = round((IntToFloat(iVar1) * fVar3));
		iVar1 = round((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = round((to_float(iVar0) / to_float(uParam2->f_4)));
		iVar0 = round((IntToFloat(iVar0) * fVar2));
		iVar0 = round((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_18 > -1)
	{
		iVar0 = (iVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (func_358(iParam0))
	{
		if (bParam1)
		{
			if (func_357(PLAYER_ID()) > 0)
			{
				func_356();
			}
			else
			{
				func_355();
			}
		}
		else
		{
			func_354();
		}
	}
	func_338(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_336(iParam0, uParam2, &iVar0, &iVar5);
	func_313(iParam0, uParam2, &iVar0, &iVar5);
	func_299(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_282(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2531497.f_4898.f_380 = iVar4;
	}
	else
	{
		Global_2531497.f_4898.f_380 = iVar5;
	}
	iVar8 = func_92();
	if (iVar8 != func_29() && iParam0 != 148)
	{
		if (func_281(PLAYER_ID(), 0))
		{
			if (!func_279(PLAYER_ID(), iVar8, 1))
			{
				func_235(&iVar0, 1);
			}
		}
	}
	func_230(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1674861.f_10 = iVar1;
		func_229();
		func_177(0, PLAYER_PED_ID(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1674861.f_9 = iVar0;
		func_151(iParam0, iVar0, iVar7, iVar4, iVar5, uParam2);
		func_150(iParam0, iVar0);
		if (func_149(iParam0))
		{
			if (func_148(iParam0) > -1)
			{
				func_147(func_148(iParam0), iVar0);
			}
		}
		Global_2461199 = iVar0;
		func_146(&Global_2459463, 0, 0);
	}
	if (func_115(PLAYER_ID()) || func_118(PLAYER_ID()))
	{
		func_134(iParam0);
	}
	if (func_96(iParam0))
	{
		Global_1674879.f_13 = iVar0;
		Global_1674879.f_14 = iVar1;
	}
	if (func_104(iParam0))
	{
		Global_1674933.f_13 = iVar0;
		Global_1674933.f_14 = iVar1;
	}
	if (func_133(iParam0))
	{
		Global_1674996.f_12 = iVar0;
		Global_1674996.f_13 = iVar1;
	}
	if (func_132(iParam0))
	{
		Global_1675040.f_12 = iVar0;
		Global_1675040.f_13 = iVar1;
	}
	if (func_131(iParam0))
	{
		Global_1675094.f_12 = iVar0;
		Global_1675094.f_13 = iVar1;
	}
	if (func_103(iParam0))
	{
		if (func_130(iParam0))
		{
			Global_1675175.f_12 = iVar0;
			Global_1675175.f_13 = iVar1;
		}
		else if (func_126(iParam0))
		{
			Global_1675228.f_12 = iVar0;
			Global_1675228.f_13 = iVar1;
		}
	}
	if (func_125(iParam0))
	{
		Global_1675312.f_12 = iVar0;
		Global_1675312.f_13 = iVar1;
	}
	if (func_124(iParam0))
	{
		Global_1675387.f_16 = iVar0;
		Global_1675387.f_17 = iVar1;
	}
}

int func_124(int iParam0)
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

int func_125(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

int func_126(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_127(func_128(PLAYER_ID()))))
	{
		return 1;
	}
	return 0;
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 3:
		case 2:
		case 5:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

int func_128(int iParam0)
{
	if (func_63(iParam0) == 237 || func_63(iParam0) == 250)
	{
		return func_129(iParam0);
	}
	return -1;
}

int func_129(int iParam0)
{
	if (func_64(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_181;
	}
	return -1;
}

int func_130(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_132(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_133(int iParam0)
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

void func_134(int iParam0)
{
	if (func_145(PLAYER_ID()) && func_144())
	{
		if (func_143(iParam0))
		{
			func_137(9639, -1);
		}
		else if (func_136(iParam0))
		{
			func_137(9641, -1);
		}
		else if (func_89(iParam0, 1))
		{
			func_137(9642, -1);
		}
		else if (func_135(iParam0))
		{
			func_137(9643, -1);
		}
	}
}

int func_135(int iParam0)
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

int func_136(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

void func_137(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_141(iParam0, func_142(iParam1), 0);
	iVar0++;
	if (!func_140(iParam0))
	{
		func_139(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_138(iParam0, iVar0, iParam1, 1);
	}
}

void func_138(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2542527[iParam0 /*3*/][func_142(iParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1384207[func_142(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1384213[func_142(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1384219[func_142(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1384225[func_142(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1384177[func_142(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1384183[func_142(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1384189[func_142(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1384195[func_142(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1384147[func_142(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1384153[func_142(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1384159[func_142(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1384165[func_142(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1384237[func_142(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1384243[func_142(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1384249[func_142(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1384255[func_142(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1384267[func_142(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1384273[func_142(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1384279[func_142(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1384285[func_142(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2578592[0 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2578592[1 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2578592[2 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2578592[3 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 9509:
			Global_2578729[func_142(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1384291[func_142(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1384297[func_142(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1384303[func_142(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1384315[func_142(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2578659[0 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2578659[1 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2578659[2 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2578659[3 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2578659[4 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2578732[0 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2578732[1 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2578732[2 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2578732[3 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2578732[4 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2578748[0 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2578748[1 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2578748[2 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2578748[3 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2578748[4 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2578659[5 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2578592[4 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2578764[func_142(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2578773[func_142(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2578767[func_142(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2578776[func_142(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2578770[func_142(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2578779[func_142(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2578782[func_142(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2578659[6 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2578592[5 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2578659[7 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2578592[6 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2578659[8 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2578592[7 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2578659[9 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2578592[8 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2578659[10 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2578592[9 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2578659[11 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2578592[10 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2578659[12 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2578592[11 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2578659[13 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2578592[12 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2578659[14 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2578592[13 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2578659[15 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2578592[14 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2578659[16 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2578592[15 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2578659[17 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2578592[16 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2578592[17 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2578592[18 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2578592[19 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2578592[20 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2578785[func_142(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2578788[func_142(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2578791[func_142(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2578794[func_142(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2578797[func_142(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2578800[func_142(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2578803[func_142(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2578806[func_142(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2578809[func_142(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2578812[func_142(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2578815[func_142(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2578818[func_142(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2578821[func_142(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2578824[func_142(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2578592[21 /*3*/][func_142(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_139(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_142(iParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_140(int iParam0)
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

int func_141(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_142(iParam1)];
	if (STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_142(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_49();
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

int func_143(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

bool func_144()
{
	return func_45(PLAYER_ID());
}

bool func_145(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_119, 14);
}

void func_146(var uParam0, bool bParam1, bool bParam2)
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

void func_147(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23477 == 0 || Global_262145.f_23477 == 1)
		{
			if (!IS_PC_VERSION() || Global_262145.f_23477 == 1)
			{
				Global_2531497.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6584)
				{
					iParam1 = Global_262145.f_6584;
				}
				Global_2531497.f_284 = iParam1;
				Global_2531497.f_285 = 0;
			}
		}
	}
}

int func_148(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_149(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_150(int iParam0, int iParam1)
{
	if (func_145(PLAYER_ID()) && func_144())
	{
		if (func_143(iParam0) && iParam1 > 0)
		{
			func_139(9640, (func_141(9640, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_151(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	struct<2> Var7;
	
	iVar5 = func_176();
	if (iVar5 != func_29())
	{
		func_175(iVar5, &uVar0, &uVar1);
	}
	bVar6 = !func_174(1);
	Var7.f_1 = -1;
	switch (iParam0)
	{
		case 168:
			if (!func_173())
			{
				0xECA658CE2A4E5A72(iParam1, iParam3);
			}
			break;
		
		case 190:
			if (func_144())
			{
				if (!func_173())
				{
					Var7 = { func_172() };
					0x8586789730B10CAF(iParam1, 0x8586789730B10CAF(func_171(Var7)), func_170(Var7), iParam4);
				}
			}
			else if (func_173())
			{
				func_158(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				0xECA658CE2A4E5A72(iParam1, iParam4);
			}
			break;
		
		case 226:
			if (func_157())
			{
				if (!func_173())
				{
					0x8586789730B10CAF(iParam1, 0x8586789730B10CAF(func_171(func_156(0x8586789730B10CAF()))), 5, iParam4);
				}
			}
			else if (func_173())
			{
				func_158(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				0xECA658CE2A4E5A72(iParam1, iParam4);
			}
			break;
		
		case 230:
			if (func_157())
			{
				if (!func_173())
				{
					iVar2 = func_152(uParam5->f_16, iParam4);
					iVar3 = iParam1;
					if (iVar2 > 0)
					{
						iVar3 = (iVar3 - iVar2);
					}
					if (iParam2 > 0)
					{
						iVar3 = (iVar3 - iParam2);
					}
					0x6B7E4FB50D5F3D65(iVar3, iParam4, iParam2, iVar2, uParam5->f_16);
				}
			}
			else if (func_173())
			{
				func_158(463142405, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				0xDEE612F2D71B0308(uVar0, uVar1, iParam1, bVar6);
			}
			break;
		
		case 233:
			if (func_173())
			{
				func_158(1407278493, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				0xED26584F6BDCBBFD(iParam1);
			}
			break;
		
		case 237:
			if (func_157())
			{
				if (!func_173())
				{
					0x0B39CF0D53F1C883(iParam1, uParam5->f_20, iParam4);
				}
			}
			else if (func_173())
			{
				func_158(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				0xECA658CE2A4E5A72(iParam1, iParam4);
			}
			break;
		
		case 250:
			if (func_173())
			{
				func_158(-961034881, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				0xA75EAC69F59E96E7(iParam1);
			}
			break;
		
		case 249:
			if (func_173())
			{
				func_158(1135468152, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				0xC5156361F26E2212(iParam1);
			}
			break;
		
		case 242:
		case 244:
		case 248:
		case 241:
		case 239:
		case 240:
			if (func_173())
			{
				func_158(-634726636, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				0x1FDA0AA679C9919B(iParam1);
			}
			break;
		
		case 243:
			if (func_173())
			{
				func_158(1698417709, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				0x566FD402B25787DE(iParam1);
			}
			break;
		
		case 158:
			if (uParam5->f_21)
			{
				if (func_173())
				{
					func_158(1668610896, iParam1, &iVar4, 0, 1, 0);
				}
				else
				{
					0x72E7C7B9615FA3C3(iParam1, 0, 0, 1, iParam1, 0, 0);
				}
			}
			else if (func_173())
			{
				func_158(-2032529561, iParam1, &iVar4, 0, 1, 0);
			}
			else
			{
				0x72E7C7B9615FA3C3(iParam1, 1, iParam1, 0, 0, 0, 0);
			}
			break;
		
		default:
			if (func_173())
			{
				func_158(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				0x0CB1BE0633C024A8(uVar0, uVar1, iParam1, bVar6);
			}
			break;
	}
}

int func_152(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_155(iParam0, iParam1);
	fVar1 = (to_float(func_153(iParam0, iParam1)) * fVar0);
	return round(fVar1);
}

int func_153(int iParam0, int iParam1)
{
	return (func_154(iParam0) * iParam1);
}

int func_154(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_22294;
		
		case 0:
			return Global_262145.f_22295;
		
		case 1:
			return Global_262145.f_22296;
		
		case 2:
			return Global_262145.f_22297;
		
		case 3:
			return Global_262145.f_22298;
		
		case 4:
			return Global_262145.f_22299;
		
		case 5:
			return Global_262145.f_22300;
		
		case 6:
			return Global_262145.f_22301;
		
		case 7:
			return Global_262145.f_22302;
		
		default:
	}
	return 0;
}

float func_155(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = to_float(Global_262145.f_22304);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_22306;
			fVar1 = to_float(Global_262145.f_22303);
			break;
		
		case 3:
			fVar0 = Global_262145.f_22306;
			fVar1 = to_float(Global_262145.f_22303);
			break;
		
		case 0:
			fVar0 = Global_262145.f_22307;
			break;
		
		case 1:
			fVar0 = Global_262145.f_22307;
			break;
		
		case 4:
			fVar0 = Global_262145.f_22307;
			break;
		
		case 6:
			fVar0 = Global_262145.f_22308;
			fVar1 = to_float(Global_262145.f_22305);
			break;
		
		case 2:
			fVar0 = Global_262145.f_22308;
			fVar1 = to_float(Global_262145.f_22305);
			break;
		
		case 5:
			fVar0 = Global_262145.f_22308;
			fVar1 = to_float(Global_262145.f_22305);
			break;
	}
	iVar2 = floor((to_float(iParam1) / fVar1));
	return (to_float(iVar2) * fVar0);
}

int func_156(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return Global_1590446[iParam0 /*871*/].f_273.f_179[5 /*12*/];
}

bool func_157()
{
	return func_41(PLAYER_ID());
}

void func_158(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_173())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_27520)
			{
				func_159(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_159(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
			if (iParam1 > 0 || Global_262145.f_27520)
			{
				func_159(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
			func_159(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_159(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_173())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!_NETWORK_SHOP_GET_TRANSACTIONS_ENABLED_FOR_CHARACTER(func_49()) || _NETWORK_SHOP_GET_TRANSACTIONS_ENABLED_FOR_CHARACTER())
		{
			Global_4264386 = 1;
			return 0;
		}
		if (Global_2460158)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4264387 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4263810[iVar2 /*84*/].f_65.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || _NETWORK_SHOP_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || _NETWORK_SHOP_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_166(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4263810[*uParam0 /*84*/].f_65.f_8 = 1;
					Global_4263810[*uParam0 /*84*/].f_65.f_12 = 1;
				}
			}
			Global_4264371 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4264385 = 1;
			Global_4264388 = iParam4;
			Global_4264390 = iParam3;
			Global_4264391 = 1;
			Global_4264389 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4264388 = iParam4;
			Global_4264390 = iParam3;
			Global_4264391 = 1;
			Global_4264389 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_165(1, iParam4);
			Global_4264385 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_160(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_160(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			SET_BIT(&(Global_2424073[SET_BIT() /*421*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_161(iParam0);
	}
}

void func_161(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_173())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_164(iParam0))
		{
			if (!bVar0)
			{
				0xFA336E7F40C0A0D0();
			}
		}
		else if (!bVar0)
		{
			_NETWORK_SHOP_TERMINATE_SERVICE(Global_4263810[iParam0 /*84*/].f_65);
		}
		func_162(&(Global_4263810[iParam0 /*84*/]));
	}
}

void func_162(var uParam0)
{
	uParam0->f_65 = 0;
	uParam0->f_65 = 2147483647;
	uParam0->f_65.f_1 = 0;
	uParam0->f_65.f_2 = 0;
	uParam0->f_65.f_3 = -1593119440;
	uParam0->f_65.f_4 = -2085313189;
	uParam0->f_65.f_5 = 0;
	uParam0->f_65.f_6 = 1227573907;
	uParam0->f_65.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_163(&(uParam0->f_13));
	func_163(&(uParam0->f_13.f_13));
	StringCopy(&(uParam0->f_13.f_26), "", 32);
	StringCopy(&(uParam0->f_13.f_34), "", 24);
	StringCopy(&(uParam0->f_13.f_40), "", 16);
	StringCopy(&(uParam0->f_13.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_65.f_8 = 0;
	uParam0->f_65.f_9 = 0;
	uParam0->f_65.f_10 = 0;
	uParam0->f_65.f_11 = 0;
	uParam0->f_65.f_13 = 0;
	uParam0->f_65.f_12 = 0;
	uParam0->f_65.f_14 = 0;
	uParam0->f_65.f_15 = 0;
	uParam0->f_65.f_16 = 0;
	uParam0->f_65.f_18 = 0;
}

void func_163(var uParam0)
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

int func_164(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263810[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

void func_165(int iParam0, int iParam1)
{
	Global_2461338 = iParam1;
	Global_2461337 = iParam0;
}

int func_166(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263810[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_173())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263810[iVar0 /*84*/].f_65.f_2 = 1;
			Global_4263810[iVar0 /*84*/].f_65.f_1 = iParam5;
			Global_4263810[iVar0 /*84*/].f_65.f_3 = iParam1;
			Global_4263810[iVar0 /*84*/].f_65.f_4 = iParam2;
			Global_4263810[iVar0 /*84*/].f_65.f_7 = iParam3;
			Global_4263810[iVar0 /*84*/].f_65.f_5 = 0;
			Global_4263810[iVar0 /*84*/].f_65 = iParam0;
			Global_4263810[iVar0 /*84*/].f_65.f_6 = iParam4;
			Global_4263810[iVar0 /*84*/].f_65.f_11 = uParam8;
			Global_4263810[iVar0 /*84*/].f_65.f_10 = iParam7;
			Global_4263810[iVar0 /*84*/].f_65.f_13 = iParam9;
			Global_4263810[iVar0 /*84*/].f_65.f_12 = 0;
			Global_4263810[iVar0 /*84*/].f_65.f_14 = GET_FRAME_COUNT();
			Global_4263810[iVar0 /*84*/].f_65.f_18 = 0;
			Global_4264371 = 0;
			if (bParam6)
			{
				Global_4263810[iVar0 /*84*/].f_65.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_167(Global_4263810[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_167(struct<66> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	vector3 vVar0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = -1969967074;
	vVar0.y = PLAYER_ID();
	vVar0.f_2 = { Param0.f_65 };
	vVar0.f_2.f_32 = iParam19;
	iVar1 = func_169(vVar0.y);
	if ((Global_262145.f_23556 && !Global_262145.f_23557) && !Global_262145.f_23558)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_168();
		TRIGGER_SCRIPT_EVENT(1, &vVar0, 35, iVar1);
	}
}

void func_168()
{
	REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_169(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_170(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

char* func_171(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_172()
{
	return Global_1628955[PLAYER_ID() /*614*/].f_11.f_193;
}

int func_173()
{
	if (IS_PC_VERSION())
	{
		return 0x7D2708796355B20B();
	}
	return 0;
}

bool func_174(bool bParam0)
{
	return func_281(PLAYER_ID(), bParam0);
}

void func_175(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1628955[iParam0 /*614*/].f_11.f_8[0];
	*uParam2 = Global_1628955[iParam0 /*614*/].f_11.f_8[1];
}

int func_176()
{
	return Global_1628955[PLAYER_ID() /*614*/].f_11;
}

int func_177(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_178(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_178(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_188(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (DOES_ENTITY_EXIST(iParam1))
		{
			if (IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_184(GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_179(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_179(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0 = { func_182(iParam0, 1) };
	if (iParam0 == func_181(PLAYER_PED_ID()))
	{
		func_180(1);
	}
	func_184(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_180(int iParam0)
{
	Global_2437549.f_1890 = iParam0;
}

int func_181(int iParam0)
{
	return iParam0;
}

Vector3 func_182(int iParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (IS_GAMEPLAY_CAM_RENDERING())
	{
		vVar1 = { GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_183(PLAYER_PED_ID()) && PLAYER_PED_ID(PLAYER_PED_ID()) == 4)
	{
		vVar0 = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { GET_ENTITY_COORDS(iParam0, false) };
	}
	fVar2 = 0f;
	if (!IS_ENTITY_DEAD(iParam0, 0))
	{
		fVar2 = GET_ENTITY_HEADING(iParam0);
		if (_0xEE778F8C7E1142E2(_0xEE778F8C7E1142E2()) == 4)
		{
			fVar2 = vVar1.z;
		}
	}
	GET_MODEL_DIMENSIONS(GET_MODEL_DIMENSIONS(iParam0), &vVar3, &vVar4);
	if (bParam1)
	{
		fVar5 = (vVar4.z + 0.18f);
	}
	else
	{
		fVar5 = (vVar3.z + 0.18f);
	}
	vVar0 = { _GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar2, 0f, 0f, fVar5) };
	return vVar0;
}

int func_183(int iParam0)
{
	return iParam0;
}

void func_184(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2437549.f_1289[iVar0 /*30*/].f_6 == 0 || Global_2437549.f_1289[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2437549.f_1289[iVar1 /*30*/] = { vParam0 };
			Global_2437549.f_1289[iVar1 /*30*/].f_6 = 1;
			Global_2437549.f_1289[iVar1 /*30*/].f_4 = func_187(Global_2437549.f_1289[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2437549.f_1289[iVar1 /*30*/].f_7 = 0xBA7F0B77D80A4EB7();
			Global_2437549.f_1289[iVar1 /*30*/].f_3 = iParam1;
			Global_2437549.f_1289[iVar1 /*30*/].f_8 = iParam2;
			Global_2437549.f_1289[iVar1 /*30*/].f_9 = func_186();
			Global_2437549.f_1289[iVar1 /*30*/].f_10 = func_185();
			StringCopy(&(Global_2437549.f_1289[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2437549.f_1289[iVar1 /*30*/].f_26 = HAS_NETWORK_TIME_STARTED(HAS_NETWORK_TIME_STARTED(), iParam4);
		}
	}
}

int func_185()
{
	if (Global_2437549.f_1890)
	{
		Global_2437549.f_1890 = 0;
		return 1;
	}
	Global_2437549.f_1890 = 0;
	return 0;
}

var func_186()
{
	var uVar0;
	
	uVar0 = Global_2437549.f_1892;
	Global_2437549.f_1892 = 1;
	return uVar0;
}

float func_187(vector3 vParam0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = GET_DISTANCE_BETWEEN_COORDS(GET_DISTANCE_BETWEEN_COORDS(), vParam0, true);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

var func_188(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_189(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_189(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (iParam1 == 0)
	{
		if (func_228(PLAYER_ID()) || func_227(PLAYER_ID()))
		{
			if (Global_262145.f_9635 > 16000)
			{
				iVar2 = 16000;
			}
			else
			{
				iVar2 = Global_262145.f_9635;
			}
		}
		else if (func_224() || func_223(PLAYER_ID()))
		{
			if (Global_262145.f_22762 > 16000)
			{
				iVar2 = 16000;
			}
			else
			{
				iVar2 = Global_262145.f_22762;
			}
		}
		else if (func_222())
		{
			if (Global_262145.f_27882 > 16000)
			{
				iVar2 = 16000;
			}
			else
			{
				iVar2 = Global_262145.f_27882;
			}
		}
		else if (Global_262145.f_6635 > 10000)
		{
			iVar2 = 10000;
		}
		else
		{
			iVar2 = Global_262145.f_6635;
		}
	}
	if (func_221(sParam2))
	{
	}
	if (func_220())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_218(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_217(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_214(0, &iVar1);
					break;
				
				case 3:
					func_214(1, &iVar1);
					break;
				
				case 1:
					func_210(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1686907)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_209(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_200((func_207(PLAYER_ID(), 1) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1590446[PLAYER_ID() /*871*/].f_39.f_2 != -1)
				{
					func_209(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_194(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_190((func_192(PLAYER_ID()) + iVar1));
			}
			else
			{
				func_190((func_192(PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_190(int iParam0)
{
	if (func_220())
	{
		Global_1590446[PLAYER_ID() /*871*/].f_211.f_5 = iParam0;
		func_191(joaat("mpply_globalxp"), iParam0);
	}
}

void func_191(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_192(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_997(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER_ID())
			{
				return func_193(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1590446[iParam0 /*871*/].f_211.f_5;
			}
		}
		else
		{
			return func_193(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_193(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_194(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_199(PLAYER_ID()) };
	if (_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_197(func_198(&Var0));
			if (iVar1 == 0)
			{
				func_196(&Global_1384134, iParam0);
				func_195(joaat("mpply_crew_local_xp_0"), Global_1384134);
			}
			else if (iVar1 == 1)
			{
				func_196(&Global_1384135, iParam0);
				func_195(joaat("mpply_crew_local_xp_1"), Global_1384135);
			}
			else if (iVar1 == 2)
			{
				func_196(&Global_1384136, iParam0);
				func_195(joaat("mpply_crew_local_xp_2"), Global_1384136);
			}
			else if (iVar1 == 3)
			{
				func_196(&Global_1384137, iParam0);
				func_195(joaat("mpply_crew_local_xp_3"), Global_1384137);
			}
			else if (iVar1 == 4)
			{
				func_196(&Global_1384138, iParam0);
				func_195(joaat("mpply_crew_local_xp_4"), Global_1384138);
			}
		}
	}
}

void func_195(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1384129 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1384131 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1384131 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1384132 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1384133 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1384134 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1384135 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1384136 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1384137 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1384138 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1384139 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1384140 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1384141 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1384142 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1384143 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1384144 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1384145 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_196(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_197(int iParam0)
{
	if (iParam0 == Global_1384129)
	{
		return 0;
	}
	else if (iParam0 == Global_1384130)
	{
		return 1;
	}
	else if (iParam0 == Global_1384131)
	{
		return 2;
	}
	else if (iParam0 == Global_1384132)
	{
		return 3;
	}
	else if (iParam0 == Global_1384133)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_198(var uParam0)
{
	if (_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2458924;
		}
	}
	return Global_2458924;
}

struct<13> func_199(int iParam0)
{
	struct<13> Var0;
	
	NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_200(int iParam0, int iParam1, int iParam2)
{
	if (func_220())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1384279[func_142(-1)])
				{
					PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1384279[func_142(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 == 0)
			{
				PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 < 0)
			{
				PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_206(PLAYER_ID()))
		{
			Global_1590446[PLAYER_ID() /*871*/].f_211.f_1 = iParam0;
			Global_1590446[PLAYER_ID() /*871*/].f_211.f_6 = func_204(iParam0, 1);
		}
		func_138(639, iParam0, -1, 1);
		func_139(640, func_204(iParam0, 1), -1, 1, 0);
		Global_1384279[func_142(-1)] = iParam0;
		func_201(-1109644434, 7, 0);
	}
}

void func_201(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_203(iParam1, iParam2))
	{
		iVar0 = func_202();
		Global_2458876[iVar0] = iParam1;
		Global_2458887[iVar0] = iParam0;
	}
}

int func_202()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2458876[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_203(int iParam0, var uParam1)
{
	if (Global_1312861)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312873) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_204(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_205(iParam0, 0);
}

int func_205(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_290594[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_290594[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((to_float(iVar1) - to_float(iVar2)) / 2f) + to_float(iVar2));
		iVar3 = round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_206(int iParam0)
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

int func_207(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_208(iParam0);
}

int func_208(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER_ID())
			{
				return Global_1384279[func_142(-1)];
			}
			else if (func_206(iParam0))
			{
				return Global_1590446[iParam0 /*871*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1384279[func_142(-1)];
	}
	return 0;
}

void func_209(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_141(iParam0, func_142(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_140(iParam0))
	{
		func_139(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_138(iParam0, iVar0, iParam2, 1);
	}
}

void func_210(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = GET_PLAYER_TEAM(GET_PLAYER_TEAM());
	iVar0 = 0;
	while (iVar0 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		iVar4 = INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK_GET_PLAYER_INDEX(iVar4);
			if (GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (GET_PLAYER_TEAM(iVar5) == iVar1 || func_213(GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER_ID())
					{
						if (func_212(PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = round((func_211(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_211(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_211(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_212(int iParam0, int iParam1)
{
	if (_NETWORK_PLAYER_IS_IN_CLAN())
	{
		Global_2507671 = { func_199(iParam0) };
		Global_2507684 = { func_199(iParam1) };
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

int func_213(int iParam0, int iParam1, int iParam2)
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

void func_214(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			iVar3 = iVar0;
			if (NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_997(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER_ID())
					{
						iVar1++;
						if (func_212(PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_997(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER_ID())
				{
					if (func_215(PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_212(PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = round((func_211(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_211(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_215(int iParam0, int iParam1)
{
	return vdist(func_216(iParam0), func_216(iParam1));
	return 0f;
}

Vector3 func_216(int iParam0)
{
	return GET_ENTITY_COORDS(GET_ENTITY_COORDS(iParam0), false);
}

int func_217(int iParam0)
{
	int iVar0;
	
	if (GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_211(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_218(int iParam0)
{
	if (iParam0 < 0)
	{
		if (ABSI(iParam0) > func_207(ABSI(), 1))
		{
			iParam0 = -func_207(PLAYER_ID(), 1);
		}
	}
	if (func_219(8000, 0, 0) > 0)
	{
		if (func_219(8000, 0, 0) < (iParam0 + func_207(PLAYER_ID(), 1)))
		{
			iParam0 = (func_219(8000, 0, 0) - func_207(PLAYER_ID(), 1));
		}
	}
	return iParam0;
}

int func_219(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_290594[iParam0];
}

int func_220()
{
	return 1;
}

int func_221(char* sParam0)
{
	if (IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (ARE_STRINGS_EQUAL(sParam0, "") || ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_222()
{
	return Global_2448961.f_19;
}

int func_223(int iParam0)
{
	return func_131(func_63(iParam0));
}

bool func_224()
{
	if (NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_226();
	}
	return func_225(Global_4456448.f_154360);
}

int func_225(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5008[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_226()
{
	return Global_2448961.f_17;
}

bool func_227(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 2;
}

bool func_228(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 7;
}

void func_229()
{
	Global_2460540 = 1;
}

void func_230(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_234(7))
	{
		return;
	}
	iVar0 = func_233(iParam0);
	iVar1 = func_232(iParam0);
	iVar2 = ABSI(ABSI(Global_2531497.f_4898.f_263, ABSI()));
	if (func_231(iParam0) != -1)
	{
		if (iVar2 > func_231(iParam0))
		{
			iVar2 = func_231(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_12395)
	{
		iVar2 = Global_262145.f_12395;
	}
	iVar3 = floor((to_float(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_231(int iParam0)
{
	if (func_89(iParam0, 0) || func_136(iParam0))
	{
		return Global_262145.f_18475;
	}
	if (func_143(iParam0))
	{
		return Global_262145.f_18474;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_18471;
		
		case 191:
			return Global_262145.f_18473;
		
		case 190:
			return Global_262145.f_18472;
		
		case 227:
			return Global_262145.f_21031;
		
		case 226:
			return Global_262145.f_21019;
		
		case 225:
			return Global_262145.f_21039;
		
		case 230:
			return Global_262145.f_22291;
		
		case 229:
			return Global_262145.f_22195;
		
		case 233:
			return Global_262145.f_22767;
		
		case 237:
			return Global_262145.f_23930;
		
		case 238:
			return Global_262145.f_24041;
		
		case 249:
			return Global_262145.f_24057;
		
		case 243:
			return Global_262145.f_26237;
		
		default:
	}
	return -1;
}

int func_232(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12486;
		
		case 152:
			return Global_262145.f_12521;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12509;
		
		case 157:
			return Global_262145.f_12476;
		
		case 159:
			return Global_262145.f_12459;
		
		case 164:
			return Global_262145.f_12499;
		
		case 160:
			return Global_262145.f_12549;
		
		case 162:
			return Global_262145.f_12569;
		
		case 163:
			return Global_262145.f_12534;
		
		case 154:
			return Global_262145.f_12604;
		
		case 155:
			return Global_262145.f_12594;
		
		case 153:
			return Global_262145.f_12558;
		
		case 170:
			return Global_262145.f_14983;
		
		case 171:
			return Global_262145.f_15042;
		
		case 172:
			return Global_262145.f_15060;
		
		case 173:
			return Global_262145.f_15001;
		
		case 166:
			return Global_262145.f_15016;
		
		case 167:
			return Global_262145.f_15107;
		
		case 169:
			return Global_262145.f_15079;
		
		case 168:
			return Global_262145.f_15072;
		
		case 179:
			return Global_262145.f_18354;
		
		case 180:
			return Global_262145.f_18132;
		
		case 182:
			return Global_262145.f_18132;
		
		case 183:
			return Global_262145.f_18132;
		
		case 185:
			return Global_262145.f_18132;
		
		case 186:
			return Global_262145.f_18132;
		
		case 189:
			return Global_262145.f_18354;
		
		case 190:
			return Global_262145.f_18008;
		
		case 191:
			return Global_262145.f_18099;
		
		case 192:
			return Global_262145.f_17893;
		
		case 193:
			return Global_262145.f_18354;
		
		case 194:
			return Global_262145.f_18354;
		
		case 195:
			return Global_262145.f_18132;
		
		case 197:
			return Global_262145.f_18132;
		
		case 198:
			return Global_262145.f_18132;
		
		case 199:
			return Global_262145.f_18354;
		
		case 200:
			return Global_262145.f_18354;
		
		case 201:
			return Global_262145.f_18354;
		
		case 205:
			return Global_262145.f_18354;
		
		case 207:
			return Global_262145.f_18132;
		
		case 208:
			return Global_262145.f_18132;
		
		case 209:
			return Global_262145.f_18132;
		
		case 210:
			return Global_262145.f_18354;
		
		case 211:
			return Global_262145.f_18354;
		
		case 214:
			return Global_262145.f_19204;
		
		case 215:
			return Global_262145.f_19206;
		
		case 216:
			return Global_262145.f_19208;
		
		case 217:
			return Global_262145.f_19210;
		
		case 218:
			return Global_262145.f_19212;
		
		case 219:
			return Global_262145.f_19214;
		
		case 220:
			return Global_262145.f_19216;
		
		case 221:
			return Global_262145.f_19218;
		
		case 225:
			if (!func_157())
			{
				return Global_262145.f_21041;
			}
			break;
		
		case 226:
			if (!func_157())
			{
				return Global_262145.f_21021;
			}
			break;
		
		case 227:
			if (!func_157())
			{
				return Global_262145.f_21033;
			}
			break;
		
		case 229:
			if (!func_157())
			{
				return Global_262145.f_22197;
			}
			break;
		
		case 230:
			if (!func_157())
			{
				return Global_262145.f_22293;
			}
			break;
		
		case 233:
			if (!func_157())
			{
				return Global_262145.f_22766;
			}
			break;
		
		case 241:
			return 100;
		
		case 242:
			return 100;
		
		case 244:
			return 100;
		
		case 248:
			return 100;
		
		case 239:
			return 100;
		
		case 240:
			return 100;
		
		case 250:
			return 100;
		
		case 237:
			if (!func_157())
			{
				return Global_262145.f_23932;
			}
			break;
		
		case 238:
			if (!func_157())
			{
				return Global_262145.f_24043;
			}
			break;
		
		case 249:
			if (!func_157())
			{
				return Global_262145.f_24059;
			}
			break;
		
		case 243:
			if (!func_157())
			{
				return Global_262145.f_26240;
			}
			break;
		
		case 158:
			if (!func_157())
			{
				return 100;
			}
			break;
	}
	return 0;
}

int func_233(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12485;
		
		case 152:
			return Global_262145.f_12520;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12508;
		
		case 157:
			return Global_262145.f_12475;
		
		case 159:
			return Global_262145.f_12458;
		
		case 164:
			return Global_262145.f_12498;
		
		case 160:
			return Global_262145.f_12548;
		
		case 162:
			return Global_262145.f_12568;
		
		case 163:
			return Global_262145.f_12533;
		
		case 154:
			return Global_262145.f_12603;
		
		case 155:
			return Global_262145.f_12593;
		
		case 153:
			return Global_262145.f_12557;
		
		case 170:
			return Global_262145.f_14982;
		
		case 171:
			return Global_262145.f_15041;
		
		case 172:
			return Global_262145.f_15059;
		
		case 173:
			return Global_262145.f_15000;
		
		case 166:
			return Global_262145.f_15015;
		
		case 179:
			return Global_262145.f_18353;
		
		case 180:
			return Global_262145.f_18131;
		
		case 182:
			return Global_262145.f_18131;
		
		case 183:
			return Global_262145.f_18131;
		
		case 185:
			return Global_262145.f_18131;
		
		case 186:
			return Global_262145.f_18131;
		
		case 189:
			return Global_262145.f_18353;
		
		case 193:
			return Global_262145.f_18353;
		
		case 194:
			return Global_262145.f_18353;
		
		case 195:
			return Global_262145.f_18131;
		
		case 197:
			return Global_262145.f_18131;
		
		case 198:
			return Global_262145.f_18131;
		
		case 199:
			return Global_262145.f_18353;
		
		case 200:
			return Global_262145.f_18353;
		
		case 201:
			return Global_262145.f_18353;
		
		case 205:
			return Global_262145.f_18353;
		
		case 207:
			return Global_262145.f_18131;
		
		case 208:
			return Global_262145.f_18131;
		
		case 209:
			return Global_262145.f_18131;
		
		case 210:
			return Global_262145.f_18353;
		
		case 211:
			return Global_262145.f_18353;
		
		case 190:
			if (func_99(0))
			{
				return Global_262145.f_18007;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (func_99(0))
			{
				return Global_262145.f_18098;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (func_99(0))
			{
				return Global_262145.f_17892;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_19203;
		
		case 215:
			return Global_262145.f_19205;
		
		case 216:
			return Global_262145.f_19207;
		
		case 217:
			return Global_262145.f_19209;
		
		case 218:
			return Global_262145.f_19211;
		
		case 219:
			return Global_262145.f_19213;
		
		case 220:
			return Global_262145.f_19215;
		
		case 221:
			return Global_262145.f_19217;
		
		case 225:
			if (func_99(0))
			{
				return Global_262145.f_21040;
			}
			break;
		
		case 226:
			if (func_99(0))
			{
				return Global_262145.f_21020;
			}
			break;
		
		case 227:
			if (func_99(0))
			{
				return Global_262145.f_21032;
			}
			break;
		
		case 229:
			if (func_99(0))
			{
				return Global_262145.f_22196;
			}
			break;
		
		case 230:
			if (func_99(0))
			{
				return Global_262145.f_22292;
			}
			break;
		
		case 233:
			if (func_99(0))
			{
				return Global_262145.f_22768;
			}
			break;
		
		case 241:
			return 500;
		
		case 242:
			return 500;
		
		case 244:
			return 500;
		
		case 248:
			return 500;
		
		case 239:
			return 500;
		
		case 240:
			return 500;
		
		case 250:
			return 500;
		
		case 237:
			if (func_99(0))
			{
				return Global_262145.f_23931;
			}
			break;
		
		case 238:
			if (func_99(0))
			{
				return Global_262145.f_24042;
			}
			break;
		
		case 249:
			if (func_99(0))
			{
				return Global_262145.f_24058;
			}
			break;
		
		case 243:
			return Global_262145.f_26236;
		
		case 158:
			if (func_99(0))
			{
				return 500;
			}
			break;
	}
	return 0;
}

bool func_234(int iParam0)
{
	return IS_BIT_SET(Global_2531497.f_4898.f_43, iParam0);
}

void func_235(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_157())
		{
			if (func_174(0))
			{
				if (!func_99(0))
				{
					if (NETWORK_IS_PLAYER_ACTIVE(func_176()))
					{
						if (func_278() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_278());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_276(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_240("GB_BCUT_TICK1", func_176(), iVar0, 0, 0, 1, 1);
						}
						func_239(20);
						func_236(func_176(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_236(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_997(iParam0, 0, 1))
	{
		Var0 = -1590759069;
		Var0.f_1 = PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_238(iParam0);
		func_237(&(Var0.f_6), &(Var0.f_7));
		TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_169(iParam0));
	}
}

void func_237(var uParam0, var uParam1)
{
	*uParam0 = Global_1651198.f_9;
	*uParam1 = Global_1651198.f_10;
}

var func_238(int iParam0)
{
	return Global_1628955[iParam0 /*614*/].f_532;
}

void func_239(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	SET_BIT(&(Global_2531497.f_4898.f_7[iVar0]), iVar1);
}

int func_240(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (_0x3B39236746714134(_0x3B39236746714134(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, GET_PLAYER_NAME(iParam1), 64);
		}
		if (IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
		_SET_NOTIFICATION_COLOR_NEXT(func_247(iParam1, -2, 1, 0, 0));
		ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_245(&Var1));
		if (!iParam3 == 0)
		{
			_SET_NOTIFICATION_COLOR_NEXT(iParam3);
		}
		ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
		func_241(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_241(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_244() || !NETWORK_IS_ACTIVITY_SESSION()) || !func_47(NETWORK_IS_ACTIVITY_SESSION(), 0))
	{
		return;
	}
	iVar0 = func_242(iParam2);
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

int func_242(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1671392 - 1))
	{
		if (iParam0 > Global_1671392.f_5[iVar0 /*53*/].f_1)
		{
			func_243(iVar0);
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

void func_243(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1671392.f_5[iVar0 /*53*/] = { Global_1671392.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_244()
{
	return IS_DLC_PRESENT(-1762644250);
}

var func_245(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_246(&cVar0);
}

var func_246(char[4] cParam0)
{
	return cParam0;
}

int func_247(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_274(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_149437[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_274(PLAYER_ID()) || (func_273() && func_272())) && !PLAYER_ID(Global_2531497.f_4591, 31)) && !bParam4)
	{
		iVar1 = func_271();
		if (DOES_ENTITY_EXIST(iVar1))
		{
			if (IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_997(NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_149437[iParam1] != -1)
							{
								return func_269(iParam1, iParam0, 0);
							}
							else
							{
								return func_259(iParam0, NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_259(iParam0, NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_149437[iParam1] != -1)
				{
					return func_269(iParam1, iParam0, 0);
				}
				else
				{
					return func_248(0, -1, 0);
				}
			}
			else
			{
				return func_248(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_149437[iParam1] != -1)
		{
			return func_269(iParam1, iParam0, 0);
		}
		else
		{
			return func_259(iParam0, PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_259(iParam0, PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_248(bool bParam0, int iParam1, bool bParam2)
{
	return func_249(PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_249(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = GET_PLAYER_TEAM(iParam0);
	if ((func_258() || (func_257() && func_255())) && Global_1384328.f_1)
	{
		if (bParam1)
		{
			return func_254(iParam2, iVar0);
		}
		else
		{
			return func_254(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_213(iVar0, iParam2, 0) && !IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_253(1);
				}
				else
				{
					return func_253(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_250(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_250(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_253(1);
	}
	return func_253(0);
}

int func_250(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_252(iParam0, iParam1, iParam3);
	if (func_251(Global_4456448.f_154360, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_251(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_190930 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9019[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_252(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_213(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_253(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_254(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_252(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

bool func_255()
{
	if (func_256())
	{
		return 1;
	}
	return IS_BIT_SET(Global_4456448.f_195024, 4);
}

bool func_256()
{
	return IS_BIT_SET(Global_4456448.f_184550, 12);
}

bool func_257()
{
	if (NETWORK_IS_ACTIVITY_SESSION())
	{
		return IS_BIT_SET(Global_4456448.f_195024, 0);
	}
	return ((IS_BIT_SET(Global_4456448.f_195024, 0) || Global_1654024) && IS_BIT_SET(joaat("fm_deathmatch_creator")) > 0);
}

int func_258()
{
	if (func_256() && NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_259(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590446[PLAYER_ID() /*871*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1590446[iVar2 /*871*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_266())
			{
				iVar3 = func_264(iParam0);
				if (!iVar3 == -1)
				{
					return func_262(iVar3);
				}
			}
			if ((func_261(iParam1, iParam0, iVar0, 0) && !IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_213(IS_BIT_SET(iParam1), IS_BIT_SET(iParam0), 0) && IS_BIT_SET(Global_4456448.f_15, 23)) && !IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_253(1);
			}
			else if (IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_260(1);
			}
			else
			{
				return func_249(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574407 || Global_1574398) || Global_1590446[iParam0 /*871*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574407 == 1 && Global_1574417 == 0))
			{
				return func_253(1);
			}
			else
			{
				return func_249(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574402 && Global_1573899.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_264(iParam0);
	if (!iVar4 == -1)
	{
		return func_262(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_260(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_261(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_262(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_263(iParam0);
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

var func_263(int iParam0)
{
	return Global_2417783.f_2105.f_44[iParam0 /*2*/].f_1;
}

int func_264(int iParam0)
{
	if (!iParam0 == func_29())
	{
		if (func_281(iParam0, 1))
		{
			return Global_2417783.f_2105.f_11[func_265(iParam0)];
		}
	}
	return -1;
}

int func_265(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_1628955[iParam0 /*614*/].f_11;
	}
	return func_29();
}

int func_266()
{
	if (((func_268() || func_267()) || func_226()) || func_222())
	{
		return 1;
	}
	return 0;
}

var func_267()
{
	return Global_2448961.f_16;
}

var func_268()
{
	return Global_2448961.f_15;
}

int func_269(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969029.f_13[iParam0];
	if (func_266())
	{
		iVar2 = func_264(iParam1);
		if (!iVar2 == -1)
		{
			return func_262(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (IS_BIT_SET(Global_4456448.f_106[iParam0 /*11610*/].f_5831[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_29())
	{
		if (Global_4456448.f_149437[iParam0] != -1 && Global_4456448.f_149437[iParam0] <= 4)
		{
			if (Global_4456448.f_149437[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_149437[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_149437[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_149437[iParam0] == 4)
			{
				if (IS_BIT_SET(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_149437[iParam0];
			}
		}
		else
		{
			iVar0 = func_249(iParam1, !bParam2, iParam0, 0);
		}
		if (IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_270(iParam0);
		}
		if (IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (IS_BIT_SET(Global_4456448.f_15, 26) && !func_213(iParam0, IS_BIT_SET(iParam1), 0))
		{
			iVar0 = func_260(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_270(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_191014;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_191015;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_191016;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_191017;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_271()
{
	return Global_2359302.f_2;
}

bool func_272()
{
	return IS_BIT_SET(Global_2359302, 4);
}

bool func_273()
{
	return IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_39.f_18, 14);
}

int func_274(int iParam0)
{
	if (func_47(iParam0, 0))
	{
		return 1;
	}
	if (func_275())
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

bool func_275()
{
	return IS_BIT_SET(Global_2359302, 3);
}

void func_276(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_277(1);
	}
	else
	{
		iVar1 = func_277(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_277(bool bParam0)
{
	if (bParam0)
	{
		return round((0.05f * 100f));
	}
	return Global_262145.f_12390;
}

int func_278()
{
	return Global_262145.f_12389;
}

int func_279(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_29())
	{
		if (!bParam2)
		{
			if (func_280(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1628955[iParam0 /*614*/].f_11 != func_29())
		{
			return iParam1 == Global_1628955[iParam0 /*614*/].f_11;
		}
	}
	return 0;
}

int func_280(int iParam0, int iParam1)
{
	if (iParam1 != func_29())
	{
		if (iParam0 != func_29())
		{
			if (Global_1628955[iParam0 /*614*/].f_11 != func_29())
			{
				if (Global_1628955[iParam0 /*614*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_281(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_41(iParam0))
		{
			return 0;
		}
	}
	return Global_1628955[iParam0 /*614*/].f_11 != func_29();
}

void func_282(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	bVar18 = func_99(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_157())
		{
			iVar17 = PLAYER_ID();
		}
		else
		{
			iVar17 = func_176();
		}
		iVar11 = iVar17;
		if (iVar11 != -1)
		{
			iVar0 = Global_1590446[iVar11 /*871*/].f_849.f_1;
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = to_float(uParam1->f_10);
				fVar13 = to_float(uParam1->f_11);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = ceil(fVar15);
			}
			*uParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_1590446[iVar11 /*871*/].f_849.f_2;
			}
			else
			{
				iVar2 = func_298(Global_1590446[iVar11 /*871*/].f_849, *uParam3);
			}
			if (uParam1->f_17)
			{
				iVar20 = (iVar2 - ceil((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = func_297(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == PLAYER_ID())
				{
					func_296("TICK_TCUT", iVar10, 1);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1675175.f_49 = *uParam3;
			if (iVar17 == PLAYER_ID())
			{
				if (iVar2 > 0)
				{
					func_295(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_293(*uParam3);
				}
				iVar6 = func_292(&uVar5);
				iVar7 = Global_262145.f_23961;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = ceil((IntToFloat(iVar6) * Global_262145.f_23960));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_239(140);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
						{
							iVar22 = iVar21;
							if (NETWORK_IS_PARTICIPANT_ACTIVE(iVar22))
							{
								iVar23 = NETWORK_GET_PLAYER_INDEX(iVar22);
								if (func_291(iVar23))
								{
									func_283(iVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_2531497.f_4898.f_379 = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_262145.f_23933;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_23934;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1686916 = *iParam2;
					func_239(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_283(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_285(iParam0);
	func_284(iParam0, uVar0, iParam1, iParam2);
}

void func_284(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0 = -1548391120;
	Var0.f_1 = PLAYER_ID();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_238(iParam0);
	func_237(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_29())
	{
		if (NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_169(iParam0));
		}
	}
}

int func_285(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_290();
	iVar0 = func_288(iParam0, iVar0);
	iVar1 = Global_1628955[func_176() /*614*/].f_11.f_449;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14943));
	if (iVar0 < func_287())
	{
		iVar0 = func_287();
	}
	if (iVar0 > func_286())
	{
		iVar0 = func_286();
	}
	return iVar0;
}

int func_286()
{
	return Global_262145.f_14944;
}

int func_287()
{
	return Global_262145.f_16119;
}

int func_288(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_357(iParam0) * func_289());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_289()
{
	return Global_262145.f_16118;
}

var func_290()
{
	return Global_262145.f_12381;
}

int func_291(int iParam0)
{
	if (NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (iParam0 != PLAYER_ID())
		{
			if (func_279(iParam0, PLAYER_ID(), 0))
			{
				if (!func_107(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_292(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK_IS_PLAYER_ACTIVE(NETWORK_IS_PLAYER_ACTIVE(iVar0)))
		{
			iVar2 = INT_TO_PLAYERINDEX(iVar0);
			if (!func_47(iVar2, 0) && !func_279(iVar2, PLAYER_ID(), 1))
			{
				iVar1++;
			}
			else if (func_47(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_293(int iParam0)
{
	func_294(iParam0, 7236);
}

void func_294(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_141(iParam1, -1, 0);
	func_139(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_295(int iParam0)
{
	func_294(iParam0, 7231);
}

int func_296(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
	func_241(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_297(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = to_float(iParam0);
	fVar1 = (fVar0 * Global_262145.f_23962);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return round(fVar1);
}

int func_298(struct<5> Param0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (iParam1 == Param0.f_1)
	{
		return Param0.f_2;
	}
	iVar0 = Param0.f_2;
	if ((Param0.f_4 == 1 || Param0.f_4 == 2) || Param0.f_4 == 3)
	{
		iVar0 = (iVar0 - Param0.f_3);
	}
	fVar1 = (to_float(iParam1) / to_float(Param0.f_1));
	fVar2 = to_float(iVar0);
	return floor((fVar2 * fVar1));
}

void func_299(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	*uParam4 = 0;
	bVar16 = func_99(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_157())
		{
			iVar15 = PLAYER_ID();
		}
		else
		{
			iVar15 = func_176();
		}
		if (iVar15 != -1)
		{
			if (uParam1->f_16 == 8)
			{
				iVar0 = (func_311(iVar15) + uParam1->f_8);
			}
			else
			{
				iVar0 = (func_302(uParam1->f_16) + uParam1->f_8);
			}
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = to_float(uParam1->f_10);
				fVar11 = to_float(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = ceil(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_153(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_152(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_301(*iParam2) > 0)
			{
				if (iVar15 == PLAYER_ID())
				{
					func_296("SMTICK_RONCUT", func_301(*iParam2), 1);
				}
				*iParam2 = (*iParam2 - func_301(*iParam2));
			}
			if (iVar15 == PLAYER_ID())
			{
				func_300(iVar2, iVar9);
				iVar6 = func_292(&uVar5);
				iVar7 = Global_262145.f_22310;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = ceil((IntToFloat(iVar6) * Global_262145.f_22309));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_239(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
						{
							iVar19 = iVar18;
							if (NETWORK_IS_PARTICIPANT_ACTIVE(iVar19))
							{
								iVar20 = NETWORK_GET_PLAYER_INDEX(iVar19);
								if (func_291(iVar20))
								{
									func_283(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2531497.f_4898.f_379 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_22243;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_22244;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1686916 = *iParam2;
					func_239(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_300(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_294(iParam0, 6116);
	}
	if (iParam1 > 0)
	{
		func_294(iParam1, 6117);
	}
}

int func_301(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = to_float(iParam0);
	fVar1 = (fVar0 * Global_262145.f_22277);
	if (fVar1 > to_float(Global_262145.f_22278))
	{
		fVar1 = to_float(Global_262145.f_22278);
	}
	return round(fVar1);
}

int func_302(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_309())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_311(PLAYER_ID());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_304(func_305(func_308(iVar0), -1, -1));
		if (func_303(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_303(int iParam0)
{
	switch (iParam0)
	{
		case -508960047:
			return 5;
		
		case -1996578712:
			return 5;
		
		case -324063008:
			return 7;
		
		case -1537242760:
			return 7;
		
		case 167523060:
			return 1;
		
		case 440723308:
			return 1;
		
		case -1821684485:
			return 6;
		
		case 1075487129:
			return 6;
		
		case 1339867730:
			return 4;
		
		case 1158536477:
			return 4;
		
		case -1222709082:
			return 0;
		
		case -260422691:
			return 0;
		
		case -1117639471:
			return 3;
		
		case -1434473216:
			return 3;
		
		case 690570889:
			return 2;
		
		case 320416020:
			return 2;
		
		default:
	}
	return -1;
}

int func_304(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -508960047;
		
		case 2:
			return -1996578712;
		
		case 3:
			return -324063008;
		
		case 4:
			return -1537242760;
		
		case 5:
			return 167523060;
		
		case 6:
			return 440723308;
		
		case 7:
			return -1821684485;
		
		case 8:
			return 1075487129;
		
		case 9:
			return 1339867730;
		
		case 10:
			return 1158536477;
		
		case 11:
			return -1222709082;
		
		case 12:
			return -260422691;
		
		case 13:
			return -1117639471;
		
		case 14:
			return -1434473216;
		
		case 15:
			return 690570889;
		
		case 16:
			return 320416020;
		
		default:
	}
	return 0;
}

int func_305(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_49();
	}
	iVar0 = 0;
	iVar1 = func_307(iParam0, iParam1);
	iVar2 = func_306(iParam0);
	if (0 != iVar1)
	{
		if (!STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_306(int iParam0)
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

int func_307(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_49();
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

int func_308(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16011;
		
		case 1:
			return 16012;
		
		case 2:
			return 16013;
		
		case 3:
			return 16014;
		
		case 4:
			return 16015;
		
		case 5:
			return 16016;
		
		case 6:
			return 16017;
		
		case 7:
			return 16018;
		
		case 8:
			return 16019;
		
		case 9:
			return 16020;
		
		case 10:
			return 16021;
		
		case 11:
			return 16022;
		
		case 12:
			return 16023;
		
		case 13:
			return 16024;
		
		case 14:
			return 16025;
		
		case 15:
			return 16026;
		
		case 16:
			return 16027;
		
		case 17:
			return 16028;
		
		case 18:
			return 16029;
		
		case 19:
			return 16030;
		
		case 20:
			return 16031;
		
		case 21:
			return 16032;
		
		case 22:
			return 16033;
		
		case 23:
			return 16034;
		
		case 24:
			return 16035;
		
		case 25:
			return 16036;
		
		case 26:
			return 16037;
		
		case 27:
			return 16038;
		
		case 28:
			return 16039;
		
		case 29:
			return 16040;
		
		case 30:
			return 16041;
		
		case 31:
			return 16042;
		
		case 32:
			return 16043;
		
		case 33:
			return 16044;
		
		case 34:
			return 16045;
		
		case 35:
			return 16046;
		
		case 36:
			return 16047;
		
		case 37:
			return 16048;
		
		case 38:
			return 16049;
		
		case 39:
			return 16050;
		
		case 40:
			return 16051;
		
		case 41:
			return 16052;
		
		case 42:
			return 16053;
		
		case 43:
			return 16054;
		
		case 44:
			return 16055;
		
		case 45:
			return 16056;
		
		case 46:
			return 16057;
		
		case 47:
			return 16058;
		
		case 48:
			return 16059;
		
		case 49:
			return 16060;
		
		default:
	}
	return 16011;
}

bool func_309()
{
	return func_310() != 0;
}

int func_310()
{
	return Global_1590446[PLAYER_ID() /*871*/].f_273.f_260;
}

int func_311(int iParam0)
{
	if (iParam0 != func_29() && func_312(iParam0))
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_260.f_3;
	}
	return 0;
}

int func_312(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_260 != 0;
	}
	return 0;
}

void func_313(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	bVar17 = func_99(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_157())
		{
			iVar15 = PLAYER_ID();
		}
		else
		{
			iVar15 = func_176();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_156(iVar15);
			iVar0 = (func_335(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = to_float(uParam1->f_10);
				fVar11 = to_float(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = ceil(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_331(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = ceil((IntToFloat(iVar2) * Global_262145.f_21023));
			}
			else
			{
				iVar2 = ceil((IntToFloat(iVar2) * Global_262145.f_21022));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == PLAYER_ID())
			{
				func_328(iVar16, iVar2);
				if (func_324(iVar16) >= Global_262145.f_20571 || iVar2 >= Global_262145.f_20571)
				{
					func_314(5);
				}
				iVar6 = func_292(&uVar5);
				iVar7 = round(Global_262145.f_21025);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = ceil((IntToFloat(iVar6) * Global_262145.f_21024));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_239(108);
					}
					else
					{
						func_239(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
						{
							iVar19 = iVar18;
							if (NETWORK_IS_PARTICIPANT_ACTIVE(iVar19))
							{
								iVar20 = NETWORK_GET_PLAYER_INDEX(iVar19);
								if (func_291(iVar20))
								{
									func_283(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2531497.f_4898.f_379 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_21026;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_21027;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1686916 = *iParam2;
					func_239(112);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_314(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20559)
			{
				if (func_316(Global_262145.f_20560))
				{
					func_315("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_20561)
			{
				if (func_316(Global_262145.f_20562))
				{
					func_315("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_20563)
			{
				if (func_316(Global_262145.f_20564))
				{
					func_315("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_20565)
			{
				if (func_316(Global_262145.f_20566))
				{
					func_315("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_20567)
			{
				if (func_316(Global_262145.f_20568))
				{
					func_315("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_20569)
			{
				if (func_316(Global_262145.f_20570))
				{
					func_296("CLOTHAWDSTRAP3", Global_262145.f_20571, 1);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_20572)
			{
				if (func_316(Global_262145.f_20573))
				{
					func_296("CLOTHAWDSTRAP5", Global_262145.f_20705, 1);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_20575)
			{
				if (func_316(Global_262145.f_20576))
				{
					func_315("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_20577)
			{
				if (func_316(Global_262145.f_20578))
				{
					func_315("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_20579)
			{
				if (func_316(Global_262145.f_20580))
				{
					func_315("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_20581)
			{
				if (func_316(Global_262145.f_20582))
				{
					func_315("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_20583)
			{
				if (func_316(Global_262145.f_20584))
				{
					func_315("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_20585)
			{
				if (func_316(Global_262145.f_20586))
				{
					func_315("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_20587)
			{
				if (func_316(Global_262145.f_20588))
				{
					func_315("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_20589)
			{
				if (func_316(Global_262145.f_20590))
				{
					func_315("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_315(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	if (!iParam2 == 0)
	{
		_SET_NOTIFICATION_COLOR_NEXT(iParam2);
	}
	if (!iParam3 == 0)
	{
		_SET_NOTIFICATION_COLOR_NEXT(iParam3);
	}
	ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	if (!bParam4)
	{
		iVar0 = END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
	}
	else
	{
		Global_2507671 = { func_199(PLAYER_ID()) };
		if (NETWORK_CLAN_PLAYER_GET_DESC(&Global_2507601, 35, &Global_2507671))
		{
			iVar1 = 0;
			if (ARE_STRINGS_EQUAL(&(Global_2507601.f_22), "Leader") && Global_2507601.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2507601.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(iVar2, END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(&Global_2507601, 35), &(Global_2507601.f_17), Global_2507601.f_30, iVar1, 0, Global_2507601, END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME()), Global_1314030, Global_1314031, Global_1314032);
		}
		else
		{
			iVar0 = END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
		}
	}
	func_241(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_316(int iParam0)
{
	switch (iParam0)
	{
		case 558790811:
		case 1740171158:
		case -1191485992:
		case -1735342207:
			if (!func_321(15417, -1, -1))
			{
				func_320(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2108830041:
		case -120911428:
		case -1407302654:
		case -2039798986:
			if (!func_321(15418, -1, -1))
			{
				func_320(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1898746692:
		case -1359197372:
		case -140996548:
		case -1850642937:
			if (!func_321(15425, -1, -1))
			{
				func_320(15425, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -695364761:
		case 1263491585:
		case -1307315235:
		case 258618816:
			if (!func_321(15405, -1, -1))
			{
				func_320(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2024167318:
		case 1915398071:
		case -571324979:
		case 1374601256:
			if (!func_321(15393, -1, -1))
			{
				func_320(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1720955761:
		case 1608057620:
		case 867332432:
		case -660288110:
			if (!func_321(15409, -1, -1))
			{
				func_320(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case 221872318:
		case -1802539904:
		case -1005186539:
		case -426022529:
			if (!func_321(15396, -1, -1))
			{
				func_320(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2098369500:
		case -1196968784:
		case -1314656979:
		case -1132522169:
			if (!func_321(15412, -1, -1))
			{
				func_320(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1172743557:
		case -1502212019:
		case 1110085176:
		case -889671110:
			if (!func_319(209, -1))
			{
				func_317(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1883175477:
		case -584614481:
		case -1736983851:
		case -182614393:
			if (!func_321(15403, -1, -1))
			{
				func_320(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1449333520:
		case -890709710:
		case -1496983695:
		case 48701978:
			if (!func_319(209, -1))
			{
				func_317(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -869990766:
		case -581140963:
		case 1827333048:
		case -646852824:
			if (!func_321(15389, -1, -1))
			{
				func_320(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case -542628448:
		case -870458464:
		case 420690954:
		case -408392811:
			if (!func_319(209, -1))
			{
				func_317(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 787769067:
		case 1132791298:
		case 1330653315:
		case 1717168382:
			if (!func_321(15398, -1, -1))
			{
				func_320(15398, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -1361097493:
		case -73647644:
		case -1036580403:
		case -1765816422:
		case -1991379993:
		case -1731611121:
			if (!func_321(15400, -1, -1))
			{
				func_320(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1167465472:
		case -313418417:
		case -203035350:
		case -1533320367:
		case 2065127290:
		case -390081030:
			if (!func_319(209, -1))
			{
				func_317(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2105609173:
		case -698486936:
		case 917598912:
		case 939297301:
		case -56403312:
		case -1368923829:
			if (!func_321(15408, -1, -1))
			{
				func_320(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1864920868:
		case -1072905530:
		case 682284723:
		case 1186965403:
		case -292700571:
		case -2068738593:
			if (!func_319(209, -1))
			{
				func_317(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1729183056:
		case 2114404000:
		case 481083063:
		case 1575507436:
		case -648899601:
		case -612123774:
			if (!func_321(15411, -1, -1))
			{
				func_320(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1967315379:
		case 1750602562:
		case 114660105:
		case 1783131820:
		case -889194678:
		case 801334272:
			if (!func_321(15397, -1, -1))
			{
				func_320(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1192623422:
		case 1330733365:
		case 1897981854:
		case 2059866009:
		case 867092646:
		case -146705667:
			if (!func_321(15413, -1, -1))
			{
				func_320(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1444780905:
		case 1272666697:
		case 1601455173:
		case -1997689882:
		case 627387411:
		case -847831191:
			if (!func_321(15391, -1, -1))
			{
				func_320(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case 444212231:
		case -1563654102:
		case 1932815241:
		case -1617209023:
		case 308545041:
		case 1682427144:
			if (!func_321(15388, -1, -1))
			{
				func_320(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case 704955164:
		case -720081735:
		case 1626031863:
		case -1391954917:
		case 35480964:
		case 2029975158:
			if (!func_319(209, -1))
			{
				func_317(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1124704392:
		case -850093035:
		case 926585800:
		case -1832969872:
		case 1539395388:
		case 1377465778:
			if (!func_321(15401, -1, -1))
			{
				func_320(15401, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 1029334921:
		case -322091380:
		case -1604737223:
		case -836382797:
			if (!func_321(15394, -1, -1))
			{
				func_320(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case -534855486:
		case -1168575065:
		case -1367129204:
		case -1006027910:
			if (!func_319(209, -1))
			{
				func_317(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -516333262:
		case 756873456:
		case 87453937:
		case -1438775324:
			if (!func_321(15406, -1, -1))
			{
				func_320(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case 485135095:
		case -730037708:
		case -1686659723:
		case -1094274807:
			if (!func_321(15395, -1, -1))
			{
				func_320(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1713551997:
		case -970458486:
		case 1992217604:
		case -1348726092:
			if (!func_319(209, -1))
			{
				func_317(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1490658501:
		case 975601953:
		case -1934557208:
		case 1786218600:
			if (!func_321(15410, -1, -1))
			{
				func_320(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1735635238:
		case 1614208560:
		case -1034032319:
		case -1858021894:
			if (!func_321(15407, -1, -1))
			{
				func_320(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1931303956:
		case -726032561:
		case 1747334867:
		case 1237632771:
			if (!func_319(209, -1))
			{
				func_317(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1931617488:
		case -1824987162:
		case 236389050:
		case 1987485798:
			if (!func_319(209, -1))
			{
				func_317(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1726332301:
		case 417579524:
		case 591736086:
		case 908992470:
			if (!func_321(15414, -1, -1))
			{
				func_320(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1382922530:
		case 734151492:
		case -357636850:
		case -1021993708:
			if (!func_321(15415, -1, -1))
			{
				func_320(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case 452778672:
		case -1766862320:
		case 479676642:
		case -1654828636:
			if (!func_321(15399, -1, -1))
			{
				func_320(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1776790350:
		case 579562906:
		case 242920617:
		case -1365707749:
			if (!func_321(15404, -1, -1))
			{
				func_320(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1988057295:
		case -619754931:
		case -1219723702:
		case -388208479:
			if (!func_319(209, -1))
			{
				func_317(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 816707921:
		case 1424441799:
		case -1576971340:
		case 2087194554:
			if (!func_321(15392, -1, -1))
			{
				func_320(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case 744446190:
		case -1405036369:
		case -622901905:
		case 981732339:
			if (!func_321(15390, -1, -1))
			{
				func_320(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case 917772807:
		case 1929056908:
		case -981132613:
		case 1271443068:
			if (!func_321(15402, -1, -1))
			{
				func_320(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case -292922355:
		case -34538790:
		case -1908986844:
		case -1785118184:
			if (!func_321(15416, -1, -1))
			{
				func_320(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1495432685:
		case 1898518287:
		case 2029126042:
		case -1521032813:
			if (!func_319(209, -1))
			{
				func_317(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -2123485438:
		case 1457900554:
		case -14316613:
		case 619771057:
			if (!func_321(15426, -1, -1))
			{
				func_320(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case -815706791:
		case -1066127505:
		case 1281631799:
		case -1519028808:
			if (!func_321(15422, -1, -1))
			{
				func_320(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1318802347:
		case -1366750043:
		case 447234752:
		case 1996626130:
			if (!func_321(15423, -1, -1))
			{
				func_320(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case 306110040:
		case 1944822196:
		case 278933172:
		case -1981759857:
			if (!func_321(15421, -1, -1))
			{
				func_320(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1828101251:
		case -1639289459:
		case -562607521:
		case -879279621:
			if (!func_321(15427, -1, -1))
			{
				func_320(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case -919314748:
		case 1282565442:
		case 755492739:
		case 1276101346:
			if (!func_321(15419, -1, -1))
			{
				func_320(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1971111649:
		case -884280700:
		case -85982412:
		case 1573086793:
			if (!func_321(15420, -1, -1))
			{
				func_320(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_317(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_318())
	{
		iVar0 = Global_2576213[iParam0 /*3*/][func_142(iParam2)];
		if (iVar0 != 0)
		{
			STAT_SET_BOOL(iVar0, bParam1, iParam3);
		}
	}
}

int func_318()
{
	return 1;
	return 0;
}

int func_319(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2576213[iParam0 /*3*/][func_142(iParam1)];
	if (STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_320(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_49();
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

int func_321(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_49();
	}
	iVar1 = func_323(iParam0, iParam1);
	uVar2 = func_322(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_322(int iParam0)
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

int func_323(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_49();
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

int func_324(int iParam0)
{
	int iVar0;
	
	iVar0 = func_326(iParam0);
	return func_141(func_325(iVar0), -1, 0);
}

int func_325(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3951;
		
		case 1:
			return 3952;
		
		case 2:
			return 3953;
		
		case 3:
			return 3954;
		
		case 4:
			return 3955;
		
		case 5:
			return 5456;
		
		default:
	}
	return 3951;
}

int func_326(int iParam0)
{
	int iVar0;
	
	if (func_327(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[PLAYER_ID() /*871*/].f_273.f_179[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_327(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_328(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_326(iParam0);
	iVar1 = func_325(iVar0);
	iVar2 = (func_141(iVar1, -1, 0) + iParam1);
	func_139(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_305(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[PLAYER_ID() /*871*/].f_273.f_179[iVar0 /*12*/] != 0)
			{
				iVar1 = func_325(iVar0);
				iVar3 = (iVar3 + func_141(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_330(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_329(9357, iVar5, -1, 1);
	}
}

var func_329(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_49();
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

int func_330(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		
		case 2:
			return 300000;
			break;
		
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_331(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_170(iParam1);
	if (func_327(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16948;
				if (func_332(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16953);
				}
				if (func_332(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16958);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16947;
				if (func_332(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16952);
				}
				if (func_332(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16957);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16946;
				if (func_332(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16951);
				}
				if (func_332(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16956);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16944;
				if (func_332(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16949);
				}
				if (func_332(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16954);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16945;
				if (func_332(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16950);
				}
				if (func_332(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16955);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_21048;
				if (func_332(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_21050);
				}
				if (func_332(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_21049);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_332(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_334(iParam0, iParam1))
	{
		iVar0 = func_333(iParam0, iParam1);
		return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_333(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_327(iParam1) && iParam0 != func_29())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_334(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_327(iParam1) && iParam0 != func_29())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_335(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_327(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_336(int iParam0, var uParam1, int iParam2, var uParam3)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14;
	float fVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	int iVar23;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_144())
			{
				Var0 = { func_172() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar1 = to_float(uParam1->f_10);
					fVar2 = to_float(uParam1->f_11);
					fVar3 = ((fVar1 / fVar2) * 100f);
					iVar4 = (uParam1->f_15 + uParam1->f_8);
					fVar5 = ((IntToFloat(iVar4) / 100f) * fVar3);
					*uParam3 = ceil(fVar5);
				}
				iVar6 = func_331(PLAYER_ID(), Var0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar7 = (to_float(iVar6) * Global_262145.f_18583);
					iVar6 = round(fVar7);
				}
				else
				{
					fVar8 = (to_float(iVar6) * Global_262145.f_18582);
					iVar6 = round(fVar8);
				}
				*iParam2 = (*iParam2 + iVar6);
				iVar10 = func_292(&uVar9);
				iVar11 = round(Global_262145.f_18573);
				if (iVar10 > iVar11)
				{
					iVar10 = iVar11;
				}
				iVar12 = ceil((IntToFloat(iVar10) * Global_262145.f_18572));
				iVar13 = ((*iParam2 / 100) * iVar12);
				*iParam2 = (*iParam2 + iVar13);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar10 > 0)
				{
					func_239(86);
				}
				Global_2531497.f_4898.f_379 = *iParam2;
			}
			else if (func_99(0))
			{
				Var14 = { func_337(func_176()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar15 = to_float(uParam1->f_10);
					fVar16 = to_float(uParam1->f_11);
					fVar17 = ((fVar15 / fVar16) * 100f);
					iVar18 = (uParam1->f_15 + uParam1->f_8);
					fVar19 = ((IntToFloat(iVar18) / 100f) * fVar17);
					*uParam3 = ceil(fVar19);
				}
				iVar20 = func_331(func_176(), Var14, *uParam3);
				if (Var14.f_1 == 1)
				{
					iVar20 = ceil((IntToFloat(iVar20) * Global_262145.f_18583));
				}
				else if (Var14.f_1 == 0)
				{
					iVar20 = ceil((IntToFloat(iVar20) * Global_262145.f_18582));
				}
				*iParam2 = (*iParam2 + iVar20);
				fVar21 = Global_262145.f_18622;
				iVar22 = ceil((IntToFloat(*iParam2) * fVar21));
				*iParam2 = iVar22;
				iVar23 = Global_262145.f_18623;
				if (*iParam2 > iVar23)
				{
					*iParam2 = iVar23;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_337(int iParam0)
{
	return Global_1628955[iParam0 /*614*/].f_11.f_193;
}

void func_338(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 == 167)
	{
		if (func_41(PLAYER_ID()))
		{
			if (bParam1)
			{
				func_353();
			}
			func_352();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_41(PLAYER_ID()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_344(Global_1628955[PLAYER_ID() /*614*/].f_11.f_182));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_343(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_292(&uVar2);
					iVar4 = Global_262145.f_16129;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = ceil((IntToFloat(iVar3) * Global_262145.f_15338));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_239(44);
					}
				}
				func_341(*iParam3);
				func_340();
				Global_2531497.f_4898.f_379 = *iParam3;
				iVar7 = 0;
				while (iVar7 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
				{
					iVar8 = iVar7;
					if (NETWORK_IS_PARTICIPANT_ACTIVE(iVar8))
					{
						iVar9 = NETWORK_GET_PLAYER_INDEX(iVar8);
						if (func_291(iVar9))
						{
							func_283(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_41(PLAYER_ID()))
		{
			func_339();
		}
	}
}

void func_339()
{
	int iVar0;
	
	iVar0 = Global_2578770[func_49()];
	iVar0++;
	func_138(3667, iVar0, -1, 1);
}

void func_340()
{
	int iVar0;
	
	iVar0 = Global_2578776[func_49()];
	iVar0++;
	func_138(3666, iVar0, -1, 1);
}

void func_341(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2578779[func_49()];
	iVar0 = (iVar0 + iParam0);
	func_138(3668, iVar0, -1, 1);
	if (func_305(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_342(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_329(7666, iVar2, -1, 1);
	}
}

int func_342(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_16262;
			break;
		
		case 2:
			return Global_262145.f_16263;
			break;
		
		case 3:
			return Global_262145.f_16264;
			break;
		
		case 4:
			return Global_262145.f_16265;
			break;
		
		case 5:
			return Global_262145.f_16266;
			break;
		
		case 6:
			return Global_262145.f_16267;
			break;
		
		case 7:
			return Global_262145.f_16268;
			break;
		
		case 8:
			return Global_262145.f_16269;
			break;
		
		case 9:
			return Global_262145.f_16270;
			break;
		
		case 10:
			return Global_262145.f_16271;
			break;
		
		case 11:
			return Global_262145.f_16272;
			break;
		
		case 12:
			return Global_262145.f_16273;
			break;
		
		case 13:
			return Global_262145.f_16274;
			break;
		
		case 14:
			return Global_262145.f_16275;
			break;
		
		case 15:
			return Global_262145.f_16276;
			break;
		
		case 16:
			return Global_262145.f_16277;
			break;
		
		case 17:
			return Global_262145.f_16278;
			break;
		
		case 18:
			return Global_262145.f_16279;
			break;
		
		case 19:
			return Global_262145.f_16280;
			break;
		
		case 20:
			return Global_262145.f_16281;
			break;
		
		case 21:
			return Global_262145.f_16282;
			break;
		
		case 22:
			return Global_262145.f_16283;
			break;
		
		case 23:
			return Global_262145.f_16284;
			break;
		
		case 24:
			return Global_262145.f_16285;
			break;
	}
	return 0;
}

var func_343(int iParam0)
{
	if (iParam0 >= Global_262145.f_15316)
	{
		return Global_262145.f_15337;
	}
	else if (iParam0 >= Global_262145.f_15315)
	{
		return Global_262145.f_15336;
	}
	else if (iParam0 >= Global_262145.f_15314)
	{
		return Global_262145.f_15335;
	}
	else if (iParam0 >= Global_262145.f_15313)
	{
		return Global_262145.f_15334;
	}
	else if (iParam0 >= Global_262145.f_15312)
	{
		return Global_262145.f_15333;
	}
	else if (iParam0 >= Global_262145.f_15311)
	{
		return Global_262145.f_15332;
	}
	else if (iParam0 >= Global_262145.f_15310)
	{
		return Global_262145.f_15331;
	}
	else if (iParam0 >= Global_262145.f_15309)
	{
		return Global_262145.f_15330;
	}
	else if (iParam0 >= Global_262145.f_15308)
	{
		return Global_262145.f_15329;
	}
	else if (iParam0 >= Global_262145.f_15307)
	{
		return Global_262145.f_15328;
	}
	else if (iParam0 >= Global_262145.f_15306)
	{
		return Global_262145.f_15327;
	}
	else if (iParam0 >= Global_262145.f_15305)
	{
		return Global_262145.f_15326;
	}
	else if (iParam0 >= Global_262145.f_15304)
	{
		return Global_262145.f_15325;
	}
	else if (iParam0 >= Global_262145.f_15303)
	{
		return Global_262145.f_15324;
	}
	else if (iParam0 >= Global_262145.f_15302)
	{
		return Global_262145.f_15323;
	}
	else if (iParam0 >= Global_262145.f_15301)
	{
		return Global_262145.f_15322;
	}
	else if (iParam0 >= Global_262145.f_15300)
	{
		return Global_262145.f_15321;
	}
	else if (iParam0 >= Global_262145.f_15299)
	{
		return Global_262145.f_15320;
	}
	else if (iParam0 >= Global_262145.f_15298)
	{
		return Global_262145.f_15319;
	}
	else if (iParam0 >= Global_262145.f_15297)
	{
		return Global_262145.f_15318;
	}
	return Global_262145.f_15317;
}

int func_344(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_351(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_350(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_349(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_345(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_345(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_349(GET_RANDOM_INT_IN_RANGE(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_345(int iParam0)
{
	int iVar0;
	
	if (func_348(iParam0))
	{
		iVar0 = func_346(func_347(iParam0));
		return func_141(iVar0, -1, 0);
	}
	return 0;
}

int func_346(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3646;
	}
	else if (iParam0 == 1)
	{
		return 3647;
	}
	else if (iParam0 == 2)
	{
		return 3648;
	}
	else if (iParam0 == 3)
	{
		return 3649;
	}
	else if (iParam0 == 4)
	{
		return 3650;
	}
	return 3646;
}

int func_347(int iParam0)
{
	int iVar0;
	
	if (func_348(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590446[PLAYER_ID() /*871*/].f_273.f_102[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_348(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_349(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15516;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15514;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15518;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15512;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15510;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15520;
	}
	return 0;
}

int func_350(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_348(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1676590[iVar0] == iParam1 && Global_1676597[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_351(int iParam0)
{
	int iVar0;
	
	if (func_348(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590446[PLAYER_ID() /*871*/].f_273.f_102[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_352()
{
	int iVar0;
	
	iVar0 = Global_2578767[func_49()];
	iVar0++;
	Global_2578767[func_49()] = iVar0;
	func_138(3665, iVar0, -1, 1);
}

void func_353()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2578764[func_49()];
	iVar1 = Global_2578773[func_49()];
	iVar0++;
	iVar1++;
	Global_2578764[func_49()] = iVar0;
	Global_2578773[func_49()] = iVar1;
	Global_1590446[PLAYER_ID() /*871*/].f_273.f_124 = iVar1;
	func_138(3663, iVar0, -1, 1);
	func_138(3664, iVar1, -1, 1);
}

void func_354()
{
	if (func_157())
	{
		Global_2449755.f_3072.f_134 = 0;
		Global_1628955[PLAYER_ID() /*614*/].f_11.f_449 = Global_2449755.f_3072.f_134;
	}
}

void func_355()
{
	if (func_157())
	{
		if (Global_2449755.f_3072.f_134 < 10)
		{
			Global_2449755.f_3072.f_134++;
			Global_1628955[PLAYER_ID() /*614*/].f_11.f_449 = Global_2449755.f_3072.f_134;
		}
	}
}

void func_356()
{
	if (func_157())
	{
		if (Global_2449755.f_3072.f_134 > 0)
		{
			Global_2449755.f_3072.f_134 = (Global_2449755.f_3072.f_134 - 1);
			Global_1628955[PLAYER_ID() /*614*/].f_11.f_449 = Global_2449755.f_3072.f_134;
		}
	}
}

int func_357(int iParam0)
{
	return Global_1628955[iParam0 /*614*/].f_11.f_28;
}

int func_358(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
		case 158:
			if (func_174(1) && !func_99(1))
			{
				if (func_359(func_176()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_359(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_24, 26);
}

int func_360(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return Global_262145.f_18269;
	}
	switch (iParam0)
	{
		case 142:
			return round((IntToFloat(Global_262145.f_12506) * Global_262145.f_12511));
		
		case 157:
			return 0;
		
		case 159:
			return round((IntToFloat(Global_262145.f_12456) * Global_262145.f_12461));
		
		case 151:
			return 0;
		
		case 148:
			return round((IntToFloat(Global_262145.f_12483) * Global_262145.f_12487));
		
		case 164:
			return round((IntToFloat(Global_262145.f_12496) * Global_262145.f_12500));
		
		case 152:
			return round((IntToFloat(Global_262145.f_12518) * Global_262145.f_12523));
		
		case 153:
			return round((IntToFloat(Global_262145.f_12680) * Global_262145.f_12681));
		
		case 154:
			return round((IntToFloat(Global_262145.f_12686) * Global_262145.f_12687));
		
		case 155:
			return round((IntToFloat(Global_262145.f_12684) * Global_262145.f_12685));
		
		case 160:
			return round((IntToFloat(Global_262145.f_12678) * Global_262145.f_12679));
		
		case 162:
			return round((IntToFloat(Global_262145.f_12682) * Global_262145.f_12683));
		
		case 163:
			return round((IntToFloat(Global_262145.f_12676) * Global_262145.f_12677));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_15039;
		
		case 172:
			return Global_262145.f_15055;
		
		case 173:
			return Global_262145.f_14998;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_18277;
		
		case 180:
			return Global_262145.f_18152;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18160;
		
		case 185:
			return Global_262145.f_18169;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18365;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18382;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18229;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18413;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18291;
		
		case 205:
			return Global_262145.f_18400;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18258;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18395;
		
		case 211:
			return Global_262145.f_18359;
		
		case 214:
			return Global_262145.f_18953;
		
		case 215:
			return Global_262145.f_18963;
		
		case 216:
			return Global_262145.f_18973;
		
		case 217:
			return Global_262145.f_18982;
		
		case 218:
			return Global_262145.f_18991;
		
		case 219:
			return Global_262145.f_19007;
		
		case 241:
			return Global_262145.f_24078;
		
		case 242:
			return Global_262145.f_24074;
		
		case 248:
			return Global_262145.f_24077;
		
		case 244:
			return Global_262145.f_24075;
		
		case 239:
			return Global_262145.f_24079;
		
		case 240:
			return Global_262145.f_24080;
		
		case 243:
			return Global_262145.f_26235;
		
		default:
	}
	return 0;
}

int func_361(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return Global_262145.f_18270;
	}
	switch (iParam0)
	{
		case 142:
			return round((IntToFloat(Global_262145.f_12507) * Global_262145.f_12512));
		
		case 157:
			return 0;
		
		case 159:
			return round((IntToFloat(Global_262145.f_12457) * Global_262145.f_12462));
		
		case 151:
			return 0;
		
		case 148:
			return round((IntToFloat(Global_262145.f_12484) * Global_262145.f_12488));
		
		case 164:
			return round((IntToFloat(Global_262145.f_12497) * Global_262145.f_12501));
		
		case 152:
			return round((IntToFloat(Global_262145.f_12519) * Global_262145.f_12524));
		
		case 153:
			return round((IntToFloat(Global_262145.f_12556) * Global_262145.f_12559));
		
		case 154:
			return round((IntToFloat(Global_262145.f_12602) * Global_262145.f_12605));
		
		case 155:
			return round((IntToFloat(Global_262145.f_12592) * Global_262145.f_12595));
		
		case 160:
			return round((IntToFloat(Global_262145.f_12547) * Global_262145.f_12550));
		
		case 162:
			return round((IntToFloat(Global_262145.f_12567) * Global_262145.f_12572));
		
		case 163:
			return round((IntToFloat(Global_262145.f_12532) * Global_262145.f_12535));
		
		case 170:
			return Global_262145.f_14981;
		
		case 171:
			return Global_262145.f_15040;
		
		case 172:
			return Global_262145.f_15056;
		
		case 173:
			return Global_262145.f_14999;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_17078;
		
		case 168:
			return Global_262145.f_17077;
		
		case 179:
			return Global_262145.f_18278;
		
		case 180:
			return Global_262145.f_18153;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18161;
		
		case 185:
			return Global_262145.f_18170;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18366;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18383;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18230;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18414;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18292;
		
		case 205:
			return Global_262145.f_18401;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18259;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18396;
		
		case 211:
			return Global_262145.f_18360;
		
		case 214:
			return Global_262145.f_18954;
		
		case 215:
			return Global_262145.f_18964;
		
		case 216:
			return Global_262145.f_18974;
		
		case 217:
			return Global_262145.f_18983;
		
		case 218:
			return Global_262145.f_18992;
		
		case 219:
			return Global_262145.f_19008;
		
		case 178:
			if (func_157())
			{
				return Global_262145.f_18831;
			}
			else if (bParam1)
			{
				return Global_262145.f_18832;
			}
			break;
		
		case 188:
			if (func_157())
			{
				return Global_262145.f_18915;
			}
			else if (bParam1)
			{
				return Global_262145.f_18916;
			}
			break;
		
		case 225:
			if (func_157() && !func_144())
			{
				if (func_359(PLAYER_ID()))
				{
					return Global_262145.f_21036;
				}
				else
				{
					return Global_262145.f_21037;
				}
			}
			else if (func_144())
			{
				return Global_262145.f_21038;
			}
			break;
		
		case 226:
			if (func_157() && !func_144())
			{
				if (func_359(PLAYER_ID()))
				{
					return Global_262145.f_21016;
				}
				else
				{
					return Global_262145.f_21017;
				}
			}
			else if (func_144())
			{
				return Global_262145.f_21018;
			}
			break;
		
		case 227:
			if (func_157() && !func_144())
			{
				if (func_359(PLAYER_ID()))
				{
					return Global_262145.f_21028;
				}
				else
				{
					return Global_262145.f_21029;
				}
			}
			else if (func_144())
			{
				return Global_262145.f_21030;
			}
			break;
		
		case 229:
			if (func_157() && !func_144())
			{
				if (func_359(PLAYER_ID()))
				{
					return Global_262145.f_22192;
				}
				else
				{
					return Global_262145.f_22193;
				}
			}
			else if (func_144())
			{
				return Global_262145.f_22194;
			}
			break;
		
		case 230:
			if (func_157() && !func_144())
			{
				if (func_359(PLAYER_ID()))
				{
					return Global_262145.f_22288;
				}
				else
				{
					return Global_262145.f_22289;
				}
			}
			else if (func_144())
			{
				return Global_262145.f_22290;
			}
			break;
		
		case 233:
			if (func_157() && !func_144())
			{
				if (func_359(PLAYER_ID()))
				{
					return Global_262145.f_22764;
				}
				else
				{
					return Global_262145.f_22765;
				}
			}
			else if (func_144())
			{
				return Global_262145.f_22763;
			}
			break;
		
		case 241:
			return Global_262145.f_24085;
		
		case 242:
			return Global_262145.f_24081;
		
		case 244:
			return Global_262145.f_24082;
		
		case 248:
			return Global_262145.f_24084;
		
		case 239:
			return Global_262145.f_24086;
		
		case 240:
			return Global_262145.f_24087;
		
		case 237:
			if (func_157() && !func_144())
			{
				if (func_359(PLAYER_ID()))
				{
					return Global_262145.f_23927;
				}
				else
				{
					return Global_262145.f_23928;
				}
			}
			else if (func_144())
			{
				return Global_262145.f_23929;
			}
			break;
		
		case 238:
			if (func_157() && !func_144())
			{
				if (func_359(PLAYER_ID()))
				{
					return Global_262145.f_24038;
				}
				else
				{
					return Global_262145.f_24039;
				}
			}
			else if (func_144())
			{
				return Global_262145.f_24040;
			}
			break;
		
		case 249:
			if (func_157() && !func_144())
			{
				if (func_359(PLAYER_ID()))
				{
					return Global_262145.f_24054;
				}
				else
				{
					return Global_262145.f_24055;
				}
			}
			else if (func_144())
			{
				return Global_262145.f_24056;
			}
			break;
		
		case 243:
			if (func_157() && !func_144())
			{
				if (func_359(PLAYER_ID()))
				{
					return Global_262145.f_26238;
				}
				else
				{
					return Global_262145.f_26239;
				}
			}
			else if (func_144())
			{
				return Global_262145.f_26238;
			}
			break;
		
		case 158:
			if (func_157() && !func_144())
			{
				if (func_359(PLAYER_ID()))
				{
					return 1500;
				}
				else
				{
					return 1000;
				}
			}
			else if (func_144())
			{
				return 1500;
			}
			break;
	}
	return 0;
}

void func_362(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_363(iParam0))
	{
		if (!func_157())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_12400;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_281(PLAYER_ID(), 1))
	{
		if (func_96(iParam0))
		{
			*uParam1 = (Global_262145.f_18129 / 100f);
			*uParam2 = (Global_262145.f_18129 / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_262145.f_24088;
			*uParam2 = Global_262145.f_24088;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_262145.f_24089;
			*uParam2 = Global_262145.f_24089;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_262145.f_24091;
			*uParam2 = Global_262145.f_24091;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_262145.f_24092;
			*uParam2 = Global_262145.f_24092;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_262145.f_24093;
			*uParam2 = Global_262145.f_24093;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_262145.f_24094;
			*uParam2 = Global_262145.f_24094;
		}
		else
		{
			*uParam1 = Global_262145.f_12397;
			*uParam2 = Global_262145.f_12396;
		}
	}
	else if (func_96(iParam0))
	{
		*uParam1 = (Global_262145.f_18130 / 100f);
		*uParam2 = (Global_262145.f_18130 / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_262145.f_24095;
		*uParam2 = Global_262145.f_24095;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_262145.f_24096;
		*uParam2 = Global_262145.f_24096;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_262145.f_24098;
		*uParam2 = Global_262145.f_24098;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_262145.f_24099;
		*uParam2 = Global_262145.f_24099;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_262145.f_24100;
		*uParam2 = Global_262145.f_24100;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_262145.f_24101;
		*uParam2 = Global_262145.f_24101;
	}
	else
	{
		*uParam1 = Global_262145.f_12399;
		*uParam2 = Global_262145.f_12398;
	}
	iVar0 = func_92();
	if (iVar0 != func_29())
	{
		if (func_279(PLAYER_ID(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_363(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

void func_364(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != func_29())
	{
		if (NETWORK_IS_PLAYER_ACTIVE(iParam1))
		{
			if (iParam1 == PLAYER_ID())
			{
				iVar0 = 1;
			}
			else if (func_365(iParam1, PLAYER_ID()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (func_997(PLAYER_ID(), 1, 1))
		{
			SET_PLAYER_WANTED_LEVEL(SET_PLAYER_WANTED_LEVEL(), 0, 0);
			SET_PLAYER_WANTED_LEVEL_NOW(SET_PLAYER_WANTED_LEVEL_NOW(), 0);
			Global_2531497.f_4898.f_381 = 0xF12E6CD06C73D69E();
		}
	}
}

int func_365(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_29() && iParam1 != func_29())
	{
		iVar0 = func_265(iParam0);
		if (iVar0 != func_29())
		{
			return iVar0 == func_265(iParam1);
		}
	}
	return 0;
}

int func_366(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_384(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_382(&(Var0.f_69), iParam7);
	}
	return func_367(&Var0);
}

int func_367(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2437549.f_3030)
		{
			return 0;
		}
	}
	func_381(uParam0, uParam0->f_17);
	func_378(uParam0);
	if (func_226())
	{
		func_378(uParam0);
	}
	if (func_377(uParam0->f_1))
	{
		func_370();
		if (Global_2437549.f_2708[0 /*80*/].f_2 == 0)
		{
			Global_2437549.f_2708[0 /*80*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2437549.f_2708[0 /*80*/].f_1 == 13 || Global_2437549.f_2708[0 /*80*/].f_1 == 53) || Global_2437549.f_2708[0 /*80*/].f_1 == 54) || Global_2437549.f_2708[0 /*80*/].f_1 == 58)
		{
			Global_2437549.f_2708[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2437549.f_2708[iVar0 + 1 /*80*/] = { Global_2437549.f_2708[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2437549.f_2708[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2437549.f_2708[iVar0 /*80*/].f_2 == 0)
		{
			Global_2437549.f_2708[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_370();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_382(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 2);
				Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_369(uParam0->f_69, 128))
			{
				if (func_368(Global_2437549.f_2708[iVar0 /*80*/].f_1))
				{
					Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
					func_382(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_368(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

bool func_369(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_370()
{
	bool bVar0;
	
	if (Global_2437549.f_3031)
	{
		return;
	}
	if (!Global_76845)
	{
		Global_76845 = 1;
		bVar0 = true;
	}
	func_371();
	if (bVar0)
	{
		Global_76845 = 0;
	}
}

void func_371()
{
	Global_2437549.f_3032 = 0;
	Global_2437549.f_3032.f_578 = 0;
	func_375(&(Global_2437549.f_3032.f_1));
	Global_2437549.f_3032.f_1.f_1 = 0;
	func_372(&(Global_2437549.f_3032.f_1));
}

void func_372(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (IS_PC_VERSION())
		{
			BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(false);
			END_SCALEFORM_MOVIE_METHOD();
		}
		SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		SET_NO_LOADING_SCREEN(false);
		uParam0->f_564 = 0;
	}
	if (!Global_76845)
	{
		if (!IS_PLAYER_DEAD(IS_PLAYER_DEAD()))
		{
			if (!Global_76846)
			{
				if (IS_SCREEN_FADED_OUT() && !func_374(0))
				{
					DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_373(0);
}

void func_373(int iParam0)
{
	Global_76837 = iParam0;
	Global_76838 = iParam0;
}

bool func_374(bool bParam0)
{
	if (!bParam0 && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return IS_BIT_SET(Global_76825, 0);
}

void func_375(var uParam0)
{
	func_376(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_376(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_377(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_378(var uParam0)
{
	if (func_380(uParam0->f_1))
	{
		uParam0->f_72 = func_379();
	}
}

int func_379()
{
	return 21;
}

int func_380(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
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
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_381(var uParam0, int iParam1)
{
	if (func_380(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_29() || !func_997(iParam1, 0, 1))
	{
		return;
	}
	if (func_368(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_247(iParam1, -2, 0, 0, 0);
		}
	}
}

void func_382(var uParam0, int iParam1)
{
	func_383(uParam0, iParam1);
}

void func_383(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_384(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_29();
	uParam1->f_18 = func_29();
	uParam1->f_19 = func_29();
	uParam1->f_20 = func_29();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

int func_385(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_29();
	iVar1 = func_29();
	iVar2 = func_29();
	return func_386(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_386(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_384(uParam0, &Var0, uParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = uParam4;
	Var0.f_71 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_72 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	func_382(&(Var0.f_69), 4);
	return func_367(&Var0);
}

int func_387()
{
	if ((func_997(PLAYER_ID(), 1, 1) && !PLAYER_ID()) && !func_388())
	{
		return 1;
	}
	return 0;
}

bool func_388()
{
	return GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

void func_389(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	struct<4> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
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
	struct<2> Var22;
	
	if (func_509(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_36 = 0;
	if (func_507() || iParam2 == 27)
	{
		if (func_458(iParam1, iParam2, uParam3, Global_1574182, 0, func_505(), sParam7))
		{
			func_457(1);
			if ((!func_456() && !func_455()) || IS_BIT_SET(Global_2531497.f_4588, 1))
			{
				if (func_454())
				{
					func_452();
				}
				else
				{
					SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_451(1);
						Global_1574182 = 0;
						iVar19 = -1;
						if (Global_1574403 != 1)
						{
							func_450(iParam1, 0, 0);
							if (IS_BIT_SET(uParam3->f_33, 7))
							{
								CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 27)
						{
							iVar17 = 0;
							while (iVar17 < 32)
							{
								iVar1[iVar17] = -1;
								iVar17++;
							}
							iVar17 = 0;
							while (iVar17 < 32)
							{
								if (func_997(INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar3 = INT_TO_PLAYERINDEX(iVar17);
									if (!func_47(iVar3, 0))
									{
										if ((func_449(iVar3) || Global_2424073[iVar3 /*421*/].f_236 != -1) || func_448(iVar3))
										{
											iVar9 = iVar3;
											if (func_41(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_447(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_446(PLAYER_ID(), 0) && func_63(PLAYER_ID()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_445())
							{
								if (func_997(INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar3 = INT_TO_PLAYERINDEX(iVar17);
								}
								else
								{
									iVar3 = func_29();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_444(iVar3) && func_440(iVar3, iParam2)) && func_997(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1590446[iVar9 /*871*/].f_211.f_6;
								Var6 = { func_435(iVar3) };
								if (iVar3 == PLAYER_ID())
								{
									uParam3->f_35 = iVar18;
								}
								StringCopy(&(uParam3->f_1), GET_PLAYER_NAME(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_199(iVar3) };
								iVar5 = func_429(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = GET_PEDHEADSHOT_TXD_STRING(iVar5);
								}
								Global_1574182++;
								if ((uParam0[iVar17 /*42*/])->f_22 != -1f)
								{
									fVar10 = (uParam0[iVar17 /*42*/])->f_22;
								}
								if ((uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									iVar11 = (uParam0[iVar17 /*42*/])->f_31;
								}
								if ((uParam0[iVar17 /*42*/])->f_41 != -1)
								{
									iVar12 = (uParam0[iVar17 /*42*/])->f_41;
								}
								iVar8 = (uParam0[iVar17 /*42*/])->f_9;
								if (((uParam0[iVar17 /*42*/])->f_9 != -1 || (uParam0[iVar17 /*42*/])->f_22 != -1f) || (uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									if (!func_445())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_424(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_423(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar13 = (uParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = -2;
									}
								}
								iVar16 = func_422(iVar3, 0);
								if (bVar2)
								{
									if (func_281(iVar3, 1) && iVar1[iVar9] != -1)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
								if ((uParam0[iVar17 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (uParam0[iVar17 /*42*/])->f_39, 16);
								}
								if (func_421(iParam5))
								{
									func_420(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								else
								{
									func_420(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								SET_BIT(&iVar14, iVar3);
								iVar18++;
							}
							iVar17++;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							iVar3 = INT_TO_PLAYERINDEX(iVar17);
							if (func_997(iVar3, 0, 1) && !IS_BIT_SET(iVar14, iVar3))
							{
								iVar3 = INT_TO_PLAYERINDEX(iVar17);
							}
							else
							{
								iVar3 = func_29();
							}
							if (func_444(iVar3))
							{
								if (func_997(INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1590446[iVar9 /*871*/].f_211.f_6;
									Var6 = { func_435(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_199(iVar3) };
									iVar5 = func_429(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = GET_PEDHEADSHOT_TXD_STRING(iVar5);
									}
									Global_1574182++;
									iVar16 = func_422(iVar3, 1);
									if (bVar2)
									{
										if (func_281(iVar3, 1))
										{
											iVar18 = iVar1[iVar17];
										}
										else
										{
											iVar18 = (iVar0 + iVar21);
											iVar21++;
										}
									}
									uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
									func_402(iVar3, GET_PLAYER_NAME(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (IS_BIT_SET(uParam3->f_33, 11))
						{
							func_399(uParam3, iParam1);
						}
						func_7(&(uParam3->f_21));
						func_398();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!IS_BIT_SET(uParam3->f_33, 7))
						{
							func_397(uParam3, iParam1);
							func_396(iParam1, 0, 1);
							SET_BIT(&(uParam3->f_33), 7);
						}
						func_397(uParam3, iParam1);
						if (!IS_BIT_SET(uParam3->f_33, 11))
						{
							SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_392(uParam3))
						{
							Global_1574403 = 1;
						}
						func_390(uParam3);
						if (Global_1574403 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574403 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
					{
						_SET_UI_LAYER(7);
						DRAW_SCALEFORM_MOVIE(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						_SET_UI_LAYER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_398();
			func_451(0);
			if (IS_BIT_SET(uParam3->f_33, 7))
			{
				CLEAR_BIT(&(uParam3->f_33), 7);
			}
			if (IS_BIT_SET(uParam3->f_33, 10))
			{
				CLEAR_BIT(&(uParam3->f_33), 10);
			}
		}
	}
	RESET_SCRIPT_GFX_ALIGN();
}

void func_390(var uParam0)
{
	if (!func_5(&(uParam0->f_21)))
	{
		func_4(&(uParam0->f_21), 0, 0);
	}
	else if (func_2(&(uParam0->f_21), 250, 0))
	{
		func_7(&(uParam0->f_21));
		func_391(0);
	}
}

void func_391(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574403 != 2)
		{
			Global_1574403 = 2;
		}
	}
	else
	{
		switch (Global_1574403)
		{
			case 0:
				Global_1574403 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_392(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	iVar3 = INT_TO_PLAYERINDEX(uParam0->f_37);
	if (iVar3 != func_29() && func_997(iVar3, 0, 1))
	{
		Var2 = { func_199(iVar3) };
		iVar1 = func_395(uParam0, uParam0->f_37);
		if (func_394(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (0x8F5D1AD832AEB06C(&Var2))
					{
						if (NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_393(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_393(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (0x8F5D1AD832AEB06C(&Var2))
					{
						if (!NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_393(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_393(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (0x8F5D1AD832AEB06C(&Var2))
					{
						if (!NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar4 = 1;
							func_393(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_393(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar4;
}

void func_393(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_394(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_395(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_396(int iParam0, bool bParam1, int iParam2)
{
	if (BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "COLLAPSE"))
	{
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(bParam1);
		END_SCALEFORM_MOVIE_METHOD();
	}
	if (iParam2 == 1)
	{
		if (BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "DISPLAY_VIEW"))
		{
			END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_397(var uParam0, int iParam1)
{
	if (!IS_BIT_SET(uParam0->f_33, 10))
	{
		BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_HIGHLIGHT");
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam0->f_35);
		END_SCALEFORM_MOVIE_METHOD();
		SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_398()
{
	if (Global_1574403 != 0)
	{
		Global_1574403 = 0;
	}
}

void func_399(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = INT_TO_PLAYERINDEX(iVar0);
		if (iVar2 != func_29())
		{
			if (func_997(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_401(uParam0->f_38[iVar0 /*2*/], 0);
					func_400(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1590446[iVar0 /*871*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_400(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_ICON"))
		{
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam1);
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam2);
			if (iParam2 == 65)
			{
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam3);
			}
			END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

int func_401(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 65;
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_402(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_419() && iParam4 < func_418())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574184)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574403 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, sVar1))
		{
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam4);
			if (IS_BIT_SET(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_417("");
			}
			else
			{
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam10);
			}
			func_417(sParam1);
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_417("");
			}
			else
			{
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(65);
			}
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(-1);
			func_417("");
			if (uParam3->f_108 == 6)
			{
				func_417("");
			}
			else
			{
				func_417(&sParam5);
			}
			func_407(uParam3, iParam0);
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam9);
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam9);
			if (func_406(uParam3))
			{
				func_405("DPAD_FRIEND");
			}
			else if (func_404(uParam3))
			{
				func_405("DPAD_FRIEND");
			}
			else if (func_403(uParam3))
			{
				func_405("DPAD_CREW");
			}
			else
			{
				func_405("");
			}
			END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_403(var uParam0)
{
	return IS_BIT_SET(uParam0->f_33, 6);
}

bool func_404(var uParam0)
{
	return IS_BIT_SET(uParam0->f_33, 5);
}

void func_405(char* sParam0)
{
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_406(var uParam0)
{
	if (func_404(uParam0) && func_403(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_407(var uParam0, int iParam1)
{
	if (func_416(iParam1))
	{
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(121);
	}
	else if (func_411(iParam1))
	{
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(122);
	}
	else if (((IS_BIT_SET(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && IS_BIT_SET(Global_2424073[iParam1 /*421*/].f_411, 0))
	{
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(123);
	}
	else
	{
		if (func_408())
		{
			uParam0->f_36 = 0;
		}
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(uParam0->f_36);
	}
}

int func_408()
{
	if (NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_409() || func_268())
		{
			return 1;
		}
	}
	return 0;
}

int func_409()
{
	if (NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_268();
	}
	return func_410(Global_4456448.f_154360);
}

int func_410(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4990[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_411(int iParam0)
{
	if ((func_997(iParam0, 0, 1) && func_412()) && func_100(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_412()
{
	if (func_120(PLAYER_ID()) || func_415())
	{
		if (!func_413(PLAYER_ID(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_413(int iParam0, int iParam1)
{
	if (func_414(iParam0) == iParam1)
	{
		return func_117(iParam0);
	}
	return 0;
}

int func_414(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628955[iVar0 /*614*/];
	}
	return -1;
}

int func_415()
{
	switch (func_63(PLAYER_ID()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_416(int iParam0)
{
	if (func_408())
	{
		if (func_997(iParam0, 0, 1))
		{
			return func_41(iParam0);
		}
	}
	if ((func_997(iParam0, 0, 1) && func_412()) && func_46(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_417(char* sParam0)
{
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam0);
}

int func_418()
{
	int iVar0;
	
	if (Global_1574184)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_419()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574184)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_420(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_419() && iParam3 < func_418())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574184)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574403 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
		{
			if (BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, sVar1))
			{
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam3);
				if (IS_BIT_SET(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_417("");
				}
				else
				{
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_405(sParam16);
				}
				else
				{
					func_417(&(uParam2->f_1));
				}
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_417("");
				}
				else
				{
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(65);
				}
				if (iParam12 == 1)
				{
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
				}
				else
				{
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(-1);
				}
				if (func_445())
				{
					func_417("");
				}
				else if (uParam2->f_108 == 6 && !IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					ADD_TEXT_COMPONENT_INTEGER(iParam17);
					END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 5 && !IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					ADD_TEXT_COMPONENT_INTEGER(iParam17);
					END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 7 && !IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_TWO_INT");
					ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					ADD_TEXT_COMPONENT_INTEGER(iParam17);
					END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 8 && !IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
				{
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						ADD_TEXT_COMPONENT_INTEGER(iParam10);
					}
					ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_104));
					END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 9)
				{
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
					ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
					END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
						ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
						END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH");
						ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
						END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
					{
						func_405(&(uParam2->f_104));
					}
					else
					{
						func_417("");
					}
				}
				else if (iParam14 != -1)
				{
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
					END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (fParam13 != -1f)
				{
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
					ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (iParam10 != -1)
				{
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam10);
				}
				else
				{
					func_417("");
				}
				if (uParam2->f_108 == 6)
				{
					func_417("");
				}
				else
				{
					func_417(&sParam4);
				}
				func_407(uParam2, iParam0);
				if (iParam12 == 1 || IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_417("");
					func_417("");
				}
				else
				{
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam8);
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam8);
				}
				if (func_406(uParam2))
				{
					func_405("DPAD_FRIEND");
				}
				else if (func_404(uParam2))
				{
					func_405("DPAD_FRIEND");
				}
				else if (func_403(uParam2))
				{
					func_405("DPAD_CREW");
				}
				else
				{
					func_405("");
				}
				END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_421(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_422(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_120(iParam0)) && !func_118(iParam0))
	{
		iVar0 = func_379();
	}
	iVar1 = func_264(iParam0);
	if (!iVar1 == -1)
	{
		return func_262(iVar1);
	}
	return iVar0;
}

char* func_423(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (_0xD3D15555431AB793())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (_0xD3D15555431AB793())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_424(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_428(iParam3))
	{
		*fParam1 = (func_425(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_421(iParam3))
	{
		*fParam1 = (func_425(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_425(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (_0xD3D15555431AB793())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_427(to_float(iParam1));
			}
			break;
		
		case 2:
			if (_0xD3D15555431AB793())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_426(to_float(iParam1));
			}
			break;
	}
	return to_float(iParam1);
}

float func_426(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_427(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_428(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_429(int iParam0)
{
	int iVar0;
	
	iVar0 = func_432(iParam0);
	if (iVar0 == -1)
	{
		func_430(iParam0, 1);
		return 0;
	}
	Global_1385294[iVar0 /*5*/].f_4 = 1;
	return Global_1385294[iVar0 /*5*/].f_2;
}

void func_430(int iParam0, bool bParam1)
{
	if (!func_997(iParam0, 0, 1))
	{
		return;
	}
	if (func_432(iParam0) != -1)
	{
		return;
	}
	if (Global_1385457)
	{
		if (iParam0 == Global_1385457.f_1)
		{
			return;
		}
	}
	if (func_431(iParam0))
	{
		return;
	}
	if (Global_1385495 >= 32)
	{
		return;
	}
	Global_1385462[Global_1385495] = iParam0;
	Global_1385495++;
	if (bParam1)
	{
	}
}

int func_431(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1385495)
	{
		if (Global_1385462[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_432(int iParam0)
{
	int iVar0;
	
	if (!func_997(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1385455 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1385455)
	{
		if (Global_1385294[iVar0 /*5*/].f_1 == iParam0)
		{
			if (IS_PEDHEADSHOT_VALID(Global_1385294[iVar0 /*5*/].f_2) && IS_PEDHEADSHOT_VALID(Global_1385294[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_433(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_433(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1385455)
	{
		return;
	}
	if (IS_PEDHEADSHOT_VALID(Global_1385294[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1385294[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, GET_PEDHEADSHOT_TXD_STRING(Global_1385294[iParam0 /*5*/].f_2), 64);
			_0x317EBA71D7543F52(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		UNREGISTER_PEDHEADSHOT(Global_1385294[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1385455)
	{
		Global_1385294[iVar2 /*5*/] = { Global_1385294[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_434(&(Global_1385294[iVar2 /*5*/]));
	Global_1385455 = (Global_1385455 - 1);
}

void func_434(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_29();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = 0xBA7F0B77D80A4EB7();
	}
}

struct<4> func_435(int iParam0)
{
	char cVar0[32];
	
	if (func_997(iParam0, 0, 1))
	{
		Global_2507671 = { func_199(iParam0) };
		if (IS_DURANGO_VERSION())
		{
			if (func_394(Global_2507671))
			{
				if (!_0xB57A49545BA53CE7(&Global_2507671))
				{
					return cVar0;
				}
			}
		}
		else if (!_0x72D918C99BCACC54(0))
		{
			return cVar0;
		}
		if (func_439(&Global_2507671))
		{
			Global_2507601 = { func_437(iParam0) };
			func_436(&Global_2507601, &cVar0);
		}
	}
	return cVar0;
}

void func_436(var uParam0, char* sParam1)
{
	_0xF45352426FF3A4F0(uParam0, 35, sParam1);
}

struct<35> func_437(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_438(iParam0))
	{
		return Global_1312905[PLAYER_ID() /*35*/];
	}
	Var0 = { func_199(iParam0) };
	NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var0);
	return Var1;
}

int func_438(int iParam0)
{
	if (iParam0 == PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_439(var uParam0)
{
	if (IS_PLAYER_ONLINE())
	{
		if (_NETWORK_PLAYER_IS_IN_CLAN() && _NETWORK_PLAYER_IS_IN_CLAN(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_440(int iParam0, int iParam1)
{
	if (iParam1 == 26)
	{
		if ((func_119(iParam0) || func_443(iParam0)) || func_442(iParam0))
		{
			return 0;
		}
	}
	if (!func_441(iParam0))
	{
		return 0;
	}
	if ((!func_449(iParam0) && Global_2424073[iParam0 /*421*/].f_236 == -1) && !func_448(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_441(int iParam0)
{
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_142, 22);
}

bool func_442(int iParam0)
{
	if (func_119(iParam0))
	{
		return 1;
	}
	return IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 8);
}

int func_443(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 10) || IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 9));
	}
	return 0;
}

int func_444(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_47(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (IS_BIT_SET(Global_1590446[iVar0 /*871*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_445()
{
	switch (func_63(PLAYER_ID()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_414(PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_118(PLAYER_ID()))
	{
		switch (func_63(PLAYER_ID()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_413(PLAYER_ID(), 236))
	{
		return 1;
	}
	return 0;
}

int func_446(int iParam0, int iParam1)
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 && func_88(Global_1628955[iParam0 /*614*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1)
	{
		if (func_88(Global_1628955[iParam0 /*614*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

void func_447(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_997(INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = INT_TO_PLAYERINDEX(iVar0);
			if (!func_47(iVar1, 0))
			{
				if ((func_449(iVar1) || Global_2424073[iVar1 /*421*/].f_236 != -1) || func_448(iVar1))
				{
					if (func_279(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_448(int iParam0)
{
	return Global_1590446[iParam0 /*871*/].f_196 != 0;
}

int func_449(int iParam0)
{
	if (func_997(iParam0, 0, 1))
	{
		if (func_997(PLAYER_ID(), 0, 1))
		{
			if (_0x3B39236746714134(iParam0, _0x3B39236746714134()) || func_63(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_450(int iParam0, int iParam1, int iParam2)
{
	if (HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT_EMPTY");
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam1);
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam2);
		END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_451(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1373497.f_2 == 0)
		{
			Global_1373497.f_2 = 1;
		}
	}
	else if (Global_1373497.f_2 == 1)
	{
		Global_1373497.f_2 = 0;
	}
}

void func_452()
{
	if (IS_BIT_SET(Global_2531497.f_4588, 1))
	{
		if (func_121())
		{
			func_453();
		}
	}
}

void func_453()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2437549.f_2708[iVar0 /*80*/].f_2 != 0)
		{
			Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
			func_382(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

int func_454()
{
	if (IS_BIT_SET(Global_2531497.f_4588, 0) && func_121())
	{
		return 1;
	}
	if (IS_BIT_SET(Global_2531497.f_4588, 1) && func_121())
	{
		return 1;
	}
	return 0;
}

int func_455()
{
	if (func_121())
	{
		if (func_368(Global_2437549.f_2708[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_456()
{
	if (func_121())
	{
		if (func_380(Global_2437549.f_2708[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_457(int iParam0)
{
	if (Global_1373497.f_1 != Global_1373497)
	{
		Global_1373497.f_1 = Global_1373497;
	}
	if (Global_1373497 != iParam0)
	{
		Global_1373497 = iParam0;
	}
}

int func_458(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	char* sVar6;
	
	StringCopy(&Var0, "", 16);
	bVar3 = func_504(iParam1);
	if (iParam1 == 20)
	{
		bVar2 = true;
	}
	fVar4 = func_503();
	iVar5 = -1;
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_502())
		{
			if (func_501() > 0 && Global_1574184)
			{
				_0x25F87B30C382FCA7();
				_CLEAR_NOTIFICATIONS_POS(fVar4);
				HIDE_HUD_COMPONENT_THIS_FRAME(18);
				if (IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HIDE_HELP_TEXT_THIS_FRAME();
				}
				HIDE_HUD_COMPONENT_THIS_FRAME(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_485())
		{
			func_484(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (IS_BIT_SET(Global_2531497.f_4591, 26))
	{
		func_484(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_5(&(uParam2->f_19)))
	{
		if (func_501() == 1)
		{
			func_483(bVar3, iParam0, 0);
			func_4(&(uParam2->f_19), 0, 0);
			func_484(iParam0, uParam2, 0);
			SET_BIT(&(Global_2531497.f_4592), 5);
		}
	}
	if (func_5(&(uParam2->f_19)) || bParam5)
	{
		if (IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HIDE_HELP_TEXT_THIS_FRAME();
		}
		HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_2(&(uParam2->f_19), 10000, 0) || (func_501() == 0 && !bParam5))
		{
			func_484(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_482();
				if (iParam1 == 26 || iParam1 == 27)
				{
					_0x25F87B30C382FCA7();
				}
				HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!IS_BIT_SET(uParam2->f_33, 0))
			{
				if (bVar2 == 0)
				{
					func_482();
					if (iParam1 == 26 || iParam1 == 27)
					{
						_0x25F87B30C382FCA7();
					}
					HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				_CLEAR_NOTIFICATIONS_POS(fVar4);
				if (func_483(bVar3, iParam0, 0))
				{
					func_450(iParam0, 0, 0);
					sVar1 = func_480(iParam1, &(Global_4456448.f_154367), bParam4);
					Var0 = { func_478(iParam1) };
					if (bParam4)
					{
						func_475(iParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_468(iParam0, func_472(uParam2), func_469(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						sVar6 = func_466(uParam2);
						if (!IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar6 = sParam6;
						}
						func_464(iParam0, sVar6, func_465(), -1);
					}
					else if (func_408())
					{
						uParam2->f_34 = Global_1574183;
						func_475(iParam0, sVar1, &Var0, 1, -1, Global_1574183, 1);
					}
					else if (bVar2)
					{
						iVar5 = func_459(iParam1);
						uParam2->f_34 = Global_1574183;
						func_475(iParam0, sVar1, "", 0, iVar5, Global_1574183, 1);
					}
					else
					{
						iVar5 = func_459(iParam1);
						func_475(iParam0, sVar1, &Var0, 1, iVar5, -1, 1);
					}
					SET_BIT(&(uParam2->f_33), 0);
				}
			}
			if (IS_BIT_SET(uParam2->f_33, 0))
			{
				Global_1574182 = uParam3;
				Global_1574181 = 1;
				_CLEAR_NOTIFICATIONS_POS(fVar4);
				if (bVar2)
				{
					if (uParam2->f_34 != Global_1574183)
					{
						CLEAR_BIT(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_459(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_463())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 39:
			iVar0 = 22;
			break;
		
		case 0:
		case 30:
		case 29:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 25:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_462(PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_461(PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_460(PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_224())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_460(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 4;
}

bool func_461(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 7;
}

bool func_462(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 2;
}

bool func_463()
{
	return Global_4456448.f_1 == 0;
}

void func_464(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_405(sParam1);
		}
		else
		{
			BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_405("");
		if (iParam3 != -1)
		{
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam3);
		}
		END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_465()
{
	switch (func_63(PLAYER_ID()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_466(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_63(PLAYER_ID()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_91())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_99(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_99(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_467(Global_1628955[PLAYER_ID() /*614*/].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_467(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

void func_468(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_405(sParam1);
		}
		else if (func_414(PLAYER_ID()) == 133)
		{
			BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C");
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_405("");
		if (iParam3 != -1)
		{
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam3);
		}
		END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_469(var uParam0)
{
	int iVar0;
	
	iVar0 = func_414(PLAYER_ID());
	if (func_471())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_470())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_470()
{
	if (func_414(PLAYER_ID()) == 133)
	{
		return Global_2531497.f_4819;
	}
	return -1;
}

bool func_471()
{
	return Global_1590319;
}

char* func_472(var uParam0)
{
	int iVar0;
	
	iVar0 = func_414(PLAYER_ID());
	if (func_471())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_474() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_474() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_470())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_473() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_473()
{
	return Global_2531497.f_4822;
}

int func_474()
{
	if (func_414(PLAYER_ID()) == 132)
	{
		return Global_2531497.f_4817;
	}
	return -1;
}

void func_475(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_417(sParam1);
		}
		else if (iParam5 != -1)
		{
			BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			ADD_TEXT_COMPONENT_INTEGER(iParam5);
			END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_405(sParam1);
		}
		if (func_502() && iParam6)
		{
			if (func_477())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			BEGIN_TEXT_COMMAND_SCALEFORM_STRING("LBD_DPD_CNT");
			ADD_TEXT_COMPONENT_INTEGER(iVar0);
			ADD_TEXT_COMPONENT_INTEGER(iVar1);
			END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_405(sParam2);
		}
		if (iParam4 != -1)
		{
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam4);
			if (func_476(PLAYER_ID()))
			{
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(166);
			}
			else if (func_226())
			{
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(220);
			}
		}
		END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_476(int iParam0)
{
	if (func_462(iParam0) || func_461(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_477()
{
	return Global_1574184;
}

struct<4> func_478(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_479(PLAYER_ID()) || func_460(PLAYER_ID()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4456448.f_40, 16);
			break;
	}
	if (func_408() && NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_40, 16);
	}
	return Var0;
}

bool func_479(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 5;
}

char* func_480(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_408() || IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		uVar0 = func_481();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 24)
	{
		if (Global_1574422 == 0)
		{
			Global_1574422 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (Global_1574422 == 1)
		{
			Global_1574422 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574422 == 0)
		{
			Global_1574422 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 30:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 25:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 21:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_481()
{
	if (NETWORK_SESSION_IS_CLOSED_FRIENDS())
	{
		return "HUD_LBD_FMF";
	}
	if (NETWORK_SESSION_IS_CLOSED_CREW())
	{
		return "HUD_LBD_FMC";
	}
	if (NETWORK_SESSION_IS_SOLO())
	{
		return "HUD_LBD_FMS";
	}
	if (NETWORK_SESSION_IS_PRIVATE())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_482()
{
	Global_42316 = 1;
}

bool func_483(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		*iParam1 = 0x67D02A194A2FC2BD("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = 0x67D02A194A2FC2BD("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = 0x67D02A194A2FC2BD("mp_matchmaking_card");
	}
	return HAS_SCALEFORM_MOVIE_LOADED(*iParam1);
}

void func_484(int iParam0, var uParam1, bool bParam2)
{
	CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1574182 = 0;
	func_398();
	Global_1574181 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_5(&(uParam1->f_19)))
		{
			func_7(&(uParam1->f_19));
			CLEAR_BIT(&(Global_2531497.f_4592), 5);
		}
	}
	if (HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	}
	if (IS_BIT_SET(uParam1->f_33, 0))
	{
		CLEAR_BIT(&(uParam1->f_33), 0);
	}
	_CLEAR_NOTIFICATIONS_POS(0f);
}

int func_485()
{
	if (func_388())
	{
		return 0;
	}
	if (func_500())
	{
		return 0;
	}
	if (!func_498())
	{
		return 0;
	}
	if (!func_496())
	{
		return 0;
	}
	if (func_495(8, -1))
	{
		return 0;
	}
	if (func_501() == 2)
	{
		return 0;
	}
	if (Global_2531497.f_4543)
	{
		return 0;
	}
	if (func_494())
	{
		return 0;
	}
	else if (!func_491(PLAYER_ID(), 1, 0) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_490(1) || func_488(1)) || Global_22211.f_124) || Global_22211)
	{
		return 0;
	}
	if (IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_487() && Global_1695601 == 2)
	{
		return 0;
	}
	if (func_274(PLAYER_ID()) && !func_487())
	{
		return 0;
	}
	if (Global_1662552)
	{
		return 0;
	}
	if (Global_1662557)
	{
		return 0;
	}
	if (func_234(0))
	{
		return 0;
	}
	if (IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_24, 4))
	{
		return 0;
	}
	if (Global_1366560)
	{
		return 0;
	}
	if ((Global_1688874.f_705.f_5 || Global_1691685.f_705.f_5) || Global_1687917.f_705.f_5)
	{
		return 0;
	}
	if ((Global_1696566.f_711.f_5 || Global_1696566.f_731.f_711.f_5) || Global_1696566.f_1469.f_711.f_5)
	{
		return 0;
	}
	if (func_486(PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_1366595 || Global_1366596) || Global_1366597)
	{
		return 0;
	}
	return 1;
}

bool func_486(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309.f_4, 6);
}

bool func_487()
{
	return (IS_BIT_SET(Global_4456448.f_30, 12) && IS_BIT_SET(Global_1695602, 0));
}

int func_488(bool bParam0)
{
	if (_0xFC859E2374407556())
	{
		if (!IS_PED_INJURED(IS_PED_INJURED()))
		{
			if (func_489(PLAYER_PED_ID()))
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

int func_489(int iParam0)
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

bool func_490(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

int func_491(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_492(iParam0))
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

bool func_492(int iParam0)
{
	return func_493(iParam0);
}

bool func_493(int iParam0)
{
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_13.f_1, 0);
}

bool func_494()
{
	return Global_1590446[PLAYER_ID() /*871*/].f_196 != 0;
}

bool func_495(int iParam0, int iParam1)
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

int func_496()
{
	if (func_497() == 0)
	{
		return 1;
	}
	return 0;
}

int func_497()
{
	return Global_1312467.f_18;
}

int func_498()
{
	if (func_499())
	{
		return 1;
	}
	if (IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (IS_SCREEN_FADING_OUT() || IS_SCREEN_FADING_OUT())
	{
		return 0;
	}
	if (IS_FRONTEND_FADING())
	{
		return 0;
	}
	return 1;
}

bool func_499()
{
	return Global_1312439;
}

bool func_500()
{
	return Global_1590446[PLAYER_ID() /*871*/] == 5;
}

int func_501()
{
	return Global_1373500.f_68;
}

int func_502()
{
	if (Global_1574183 > 16)
	{
		return 1;
	}
	return 0;
}

float func_503()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_504(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 26:
		case 27:
		case 39:
			return 1;
		
		default:
	}
	return 0;
}

int func_505()
{
	if (func_506(PLAYER_ID()))
	{
		return Global_1319097;
	}
	return 0;
}

int func_506(int iParam0)
{
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_47(iParam0, 0))
		{
			return NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
		}
	}
	return 0;
}

int func_507()
{
	if (func_505())
	{
		return 1;
	}
	if (func_442(PLAYER_ID()))
	{
		return 0;
	}
	if (func_471())
	{
		return 1;
	}
	if (func_120(PLAYER_ID()))
	{
		switch (func_414(PLAYER_ID()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_508(PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_508(PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_508(PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_508(int iParam0)
{
	return IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 4);
}

int func_509(int iParam0)
{
	if (iParam0 == 27)
	{
		if ((func_120(PLAYER_ID()) && !func_118(PLAYER_ID())) && !func_413(PLAYER_ID(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_64(PLAYER_ID(), 0) && func_118(PLAYER_ID()))
		{
			return 1;
		}
		if (func_113(PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_510()
{
	if (!IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
	{
		func_530();
		DISABLE_CONTROL_ACTION(0, 140, 1);
		DISABLE_CONTROL_ACTION(0, 141, 1);
		DISABLE_CONTROL_ACTION(0, 142, 1);
		DISABLE_CONTROL_ACTION(0, 143, 1);
		DISABLE_CONTROL_ACTION(0, 24, 1);
		DISABLE_CONTROL_ACTION(0, 24, 1);
		DISABLE_CONTROL_ACTION(0, 345, 1);
		DISABLE_CONTROL_ACTION(0, 346, 1);
		DISABLE_CONTROL_ACTION(0, 347, 1);
	}
}

bool func_511()
{
	return func_27() >= 2;
}

void func_512()
{
	func_53(3000, 3000);
}

void func_513()
{
	int iVar0;
	
	if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
	{
		iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
		if (((((DOES_VEHICLE_HAVE_WEAPONS(iVar0) || DOES_VEHICLE_HAVE_WEAPONS(iVar0) == joaat("hydra")) || DOES_VEHICLE_HAVE_WEAPONS(iVar0) == joaat("savage")) || DOES_VEHICLE_HAVE_WEAPONS(iVar0) == joaat("buzzard")) || DOES_VEHICLE_HAVE_WEAPONS(iVar0) == joaat("insurgent")) || DOES_VEHICLE_HAVE_WEAPONS(iVar0) == joaat("valkyrie"))
		{
			DISABLE_CONTROL_ACTION(0, 68, 1);
			DISABLE_CONTROL_ACTION(0, 69, 1);
			DISABLE_CONTROL_ACTION(0, 70, 1);
		}
	}
}

void func_514()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_13())
	{
		if (!DOES_BLIP_EXIST(iLocal_149[iVar0]))
		{
			if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_175.f_19[iVar0]))
			{
				iLocal_149[iVar0] = ADD_BLIP_FOR_ENTITY(ADD_BLIP_FOR_ENTITY(Local_175.f_19[iVar0]));
				SET_BLIP_SPRITE(iLocal_149[iVar0], 351);
				SET_BLIP_COLOUR(iLocal_149[iVar0], 2);
				SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_149[iVar0], "GB_AMMOPICKBLIP");
			}
		}
		iVar0++;
	}
}

void func_515()
{
	SET_BIT(&(Global_2531497.f_4897), 1);
}

void func_516(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 == -1)
	{
		if (!func_118(PLAYER_ID()))
		{
			return;
		}
	}
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		func_522(iParam2);
		return;
	}
	iVar1 = func_63(PLAYER_ID());
	if (iParam3 != -1)
	{
		iVar1 = iParam3;
	}
	if (ARE_STRINGS_EQUAL(func_521(iVar1), "IE_PRE_COUNTDOWN_STOP"))
	{
		iVar0 = 35000;
	}
	else
	{
		iVar0 = 40000;
	}
	if (iParam2->f_1 > -1)
	{
		iVar0 = iParam2->f_1;
	}
	if (!IS_BIT_SET(*iParam2, 0))
	{
		if (iParam0 <= iVar0)
		{
			if (TRIGGER_MUSIC_EVENT(func_521(iVar1)))
			{
				SET_BIT(iParam2, 0);
				SET_BIT(iParam2, 1);
			}
		}
	}
	if (IS_BIT_SET(*iParam2, 1))
	{
		if (iParam0 <= 30000)
		{
			if (!IS_BIT_SET(*iParam2, 2))
			{
				if (PREPARE_MUSIC_EVENT(func_520(iVar1)))
				{
					SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
					SET_USER_RADIO_CONTROL_ENABLED(0);
					SET_BIT(iParam2, 2);
				}
			}
			if (!IS_BIT_SET(*iParam2, 3))
			{
				if (TRIGGER_MUSIC_EVENT(func_519(iVar1)))
				{
					SET_BIT(iParam2, 3);
				}
			}
			if (IS_BIT_SET(*iParam2, 3))
			{
				if (iParam0 <= 27000)
				{
					if (!IS_BIT_SET(*iParam2, 4))
					{
						SET_USER_RADIO_CONTROL_ENABLED(1);
						SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
						SET_BIT(iParam2, 4);
					}
					if (iParam0 <= 5000 && func_518(iVar1))
					{
						if (!IS_BIT_SET(*iParam2, 8))
						{
							PLAY_SOUND_FRONTEND(-1, "5s", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
							SET_BIT(iParam2, 8);
						}
					}
					if (iParam0 <= 500)
					{
						if (TRIGGER_MUSIC_EVENT(func_517(iVar1)))
						{
							CANCEL_MUSIC_EVENT(func_520(iVar1));
							CLEAR_BIT(iParam2, 1);
						}
					}
				}
			}
		}
	}
}

char* func_517(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 236:
		case 243:
		case 158:
			return "IE_FADE_IN_RADIO";
		
		default:
	}
	return "FM_COUNTDOWN_30S_FIRA";
}

int func_518(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

char* func_519(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 236:
		case 243:
		case 158:
			return "IE_COUNTDOWN_30S";
		
		default:
	}
	return "FM_COUNTDOWN_30S";
}

char* func_520(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 236:
		case 243:
		case 158:
			return "IE_COUNTDOWN_30S_KILL";
		
		default:
	}
	return "FM_COUNTDOWN_30S_KILL";
}

char* func_521(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 236:
		case 243:
		case 158:
			return "IE_PRE_COUNTDOWN_STOP";
		
		default:
	}
	return "FM_PRE_COUNTDOWN_30S";
}

void func_522(int iParam0)
{
	int iVar0;
	
	iVar0 = func_63(PLAYER_ID());
	if (IS_BIT_SET(*iParam0, 1))
	{
		if (!IS_BIT_SET(*iParam0, 5))
		{
			if (IS_BIT_SET(*iParam0, 2))
			{
				if (!IS_BIT_SET(*iParam0, 4))
				{
					SET_USER_RADIO_CONTROL_ENABLED(1);
					SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
				}
			}
			if (!IS_BIT_SET(*iParam0, 6))
			{
				if (TRIGGER_MUSIC_EVENT(func_520(iVar0)))
				{
					SET_BIT(iParam0, 6);
				}
			}
			if (IS_BIT_SET(*iParam0, 6))
			{
				if (!IS_BIT_SET(*iParam0, 7))
				{
					if (TRIGGER_MUSIC_EVENT(func_517(iVar0)))
					{
						SET_BIT(iParam0, 7);
					}
				}
				if (IS_BIT_SET(*iParam0, 7))
				{
					SET_BIT(iParam0, 5);
				}
			}
		}
	}
}

void func_523(int iParam0)
{
	SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	RELEASE_NAMED_SCRIPT_AUDIO_BANK("HUD_MINI_GAME_SOUNDSET");
}

void func_524()
{
	int iVar0;
	
	if (!IS_PED_INJURED(IS_PED_INJURED()))
	{
		if (!func_44(PARTICIPANT_ID(), 8))
		{
			if (func_527())
			{
				func_84(8);
				if (func_5(&uLocal_172))
				{
					func_7(&uLocal_172);
				}
			}
		}
		else if (!func_527())
		{
			func_82(8);
		}
		if (iLocal_143 >= 0)
		{
			if (func_527())
			{
				if (!HAS_SOUND_FINISHED(iLocal_143))
				{
					STOP_SOUND(iLocal_143);
				}
			}
		}
		if (func_44(PARTICIPANT_ID(), 1))
		{
			if (Local_176[iLocal_139 /*6*/].f_5 == 3)
			{
				if (Global_2424073[PLAYER_ID() /*421*/].f_222 == 99)
				{
					if (!func_44(PARTICIPANT_ID(), 8))
					{
						if (!func_5(&uLocal_172))
						{
							if (func_525())
							{
								PLAY_SOUND_FRONTEND(iLocal_143, "Out_of_Bounds_Explode", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
							}
							else
							{
								PLAY_SOUND_FRONTEND(iLocal_143, "Out_of_Bounds", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
							}
							func_4(&uLocal_172, 0, 0);
						}
						if (func_5(&uLocal_172))
						{
							if (!func_2(&uLocal_172, 10000, 0))
							{
							}
							else if (IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE()))
							{
								iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
								NETWORK_EXPLODE_VEHICLE(iVar0, 1, 0, -1);
								Local_176[PARTICIPANT_ID_TO_INT() /*6*/].f_4++;
							}
							else
							{
								SET_ENTITY_HEALTH(SET_ENTITY_HEALTH(), 0, 0);
								Local_176[PARTICIPANT_ID_TO_INT() /*6*/].f_4++;
							}
						}
					}
					if (!func_525())
					{
						func_530();
						DISABLE_CONTROL_ACTION(0, 140, 1);
						DISABLE_CONTROL_ACTION(0, 141, 1);
						DISABLE_CONTROL_ACTION(0, 142, 1);
						DISABLE_CONTROL_ACTION(0, 143, 1);
						DISABLE_CONTROL_ACTION(0, 24, 1);
						DISABLE_CONTROL_ACTION(0, 24, 1);
					}
				}
				else if (func_5(&uLocal_172))
				{
					func_7(&uLocal_172);
				}
			}
		}
	}
}

int func_525()
{
	int iVar0;
	int iVar1;
	
	if (!IS_PED_INJURED(IS_PED_INJURED()))
	{
		if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
		{
			iVar1 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
			iVar0 = GET_ENTITY_MODEL(iVar1);
			if (func_526(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_526(int iParam0)
{
	if (IS_THIS_MODEL_A_BIKE(iParam0) && !IS_THIS_MODEL_A_BIKE(iParam0))
	{
		return 1;
	}
	if ((((iParam0 == joaat("chimera") || iParam0 == joaat("blazer")) || iParam0 == joaat("blazer2")) || iParam0 == joaat("blazer3")) || iParam0 == joaat("blazer4"))
	{
		return 1;
	}
	return 0;
}

int func_527()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	func_528(&vVar0, &vVar1, &fVar2);
	if (!IS_PED_INJURED(IS_PED_INJURED()))
	{
		if (IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), vVar0, vVar1, fVar2, 0, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_528(var uParam0, var uParam1, var uParam2)
{
	switch (Local_175.f_31)
	{
		case 0:
			*uParam0 = { 1056.1f, 3042.89f, 30.78792f };
			*uParam1 = { 1727.083f, 3227.135f, 71.17491f };
			*uParam2 = 100f;
			break;
		
		case 1:
			*uParam0 = { -1689.147f, -2829.733f, 13.9444f };
			*uParam1 = { -989.6f, -3256.4f, 10.9444f };
			*uParam2 = 107f;
			break;
		
		case 2:
			*uParam0 = { 1914.747f, 4705.012f, 35.1674f };
			*uParam1 = { 2166.719f, 4826.836f, 45.523f };
			*uParam2 = 50f;
			break;
	}
}

void func_529(bool bParam0)
{
	DISABLE_CONTROL_ACTION(0, 71, 1);
	DISABLE_CONTROL_ACTION(0, 72, 1);
	DISABLE_CONTROL_ACTION(0, 76, 1);
	DISABLE_CONTROL_ACTION(0, 59, 1);
	DISABLE_CONTROL_ACTION(0, 60, 1);
	if (bParam0)
	{
		DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	DISABLE_CONTROL_ACTION(0, 80, 1);
	DISABLE_CONTROL_ACTION(0, 69, 1);
	DISABLE_CONTROL_ACTION(0, 70, 1);
	DISABLE_CONTROL_ACTION(0, 68, 1);
	DISABLE_CONTROL_ACTION(0, 74, 1);
	DISABLE_CONTROL_ACTION(0, 86, 1);
	DISABLE_CONTROL_ACTION(0, 81, 1);
	DISABLE_CONTROL_ACTION(0, 82, 1);
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
}

void func_530()
{
	DISABLE_CONTROL_ACTION(0, 69, 1);
	DISABLE_CONTROL_ACTION(0, 70, 1);
	DISABLE_CONTROL_ACTION(0, 68, 1);
	DISABLE_CONTROL_ACTION(0, 114, 1);
	DISABLE_CONTROL_ACTION(0, 115, 1);
	DISABLE_CONTROL_ACTION(0, 116, 1);
	DISABLE_CONTROL_ACTION(0, 91, 1);
	DISABLE_CONTROL_ACTION(0, 92, 1);
	DISABLE_CONTROL_ACTION(0, 99, 1);
	DISABLE_CONTROL_ACTION(0, 100, 1);
	DISABLE_CONTROL_ACTION(0, 24, 1);
	DISABLE_CONTROL_ACTION(0, 257, 1);
	DISABLE_CONTROL_ACTION(0, 37, 1);
}

void func_531()
{
	if (!func_537())
	{
		return;
	}
	if (!GET_HASH_KEY(GET_HASH_KEY()) == Global_1312585.f_9)
	{
		return;
	}
	func_532();
}

void func_532()
{
	func_534();
	func_533(0);
}

void func_533(bool bParam0)
{
	bool bVar0;
	
	bVar0 = NETWORK_IS_GAME_IN_PROGRESS();
	Global_1312585 = 20;
	StringCopy(&(Global_1312585.f_1), "", 32);
	Global_1312585.f_9 = 0;
	if (bVar0)
	{
		Global_1312585.f_10 = 0xBA7F0B77D80A4EB7();
		Global_1312585.f_11 = 0xBA7F0B77D80A4EB7();
	}
	StringCopy(&(Global_1312585.f_12), "", 16);
	StringCopy(&(Global_1312585.f_16), "", 64);
	StringCopy(&(Global_1312585.f_32), "", 64);
	Global_1312585.f_52 = 0;
	Global_1312585.f_53 = 0;
	Global_1312585.f_54 = 0;
	Global_1312585.f_55 = -1;
	Global_1312585.f_56 = 0;
	Global_1312585.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_534()
{
	if (!func_536())
	{
	}
	if (func_537())
	{
		BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1312585.f_12));
		func_535();
		END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_535()
{
	switch (Global_1312585)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			ADD_TEXT_COMPONENT_INTEGER(Global_1312585.f_52);
			return;
		
		case 2:
			ADD_TEXT_COMPONENT_INTEGER(Global_1312585.f_52);
			ADD_TEXT_COMPONENT_INTEGER(Global_1312585.f_53);
			return;
		
		case 3:
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 4:
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 5:
			ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			return;
		
		case 6:
			_SET_NOTIFICATION_COLOR_NEXT(Global_1312585.f_56);
			ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			return;
		
		case 7:
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 8:
			_SET_NOTIFICATION_COLOR_NEXT(Global_1312585.f_56);
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 9:
			ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1312585.f_16));
			return;
		
		case 10:
			ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_32));
			return;
		
		case 12:
			ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 13:
			_SET_NOTIFICATION_COLOR_NEXT(Global_1312585.f_56);
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			_SET_NOTIFICATION_COLOR_NEXT(Global_1312585.f_57);
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 11:
			ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1312585.f_16));
			return;
		
		case 14:
			_SET_NOTIFICATION_COLOR_NEXT(Global_1312585.f_56);
			ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			_SET_NOTIFICATION_COLOR_NEXT(Global_1312585.f_56);
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 15:
			_SET_NOTIFICATION_COLOR_NEXT(Global_1312585.f_56);
			ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			_SET_NOTIFICATION_COLOR_NEXT(Global_1312585.f_57);
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 17:
			ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_32));
			_SET_NOTIFICATION_COLOR_NEXT(Global_1312585.f_56);
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_48));
			return;
		
		case 16:
			_SET_NOTIFICATION_COLOR_NEXT(Global_1312585.f_56);
			ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			return;
		
		case 19:
			_SET_NOTIFICATION_COLOR_NEXT(Global_1312585.f_56);
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 18:
			ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			_SET_NOTIFICATION_COLOR_NEXT(Global_1312585.f_56);
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_48));
			ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_32));
			return;
		
		default:
	}
}

int func_536()
{
	if (!func_537())
	{
		return 0;
	}
	BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312585.f_12));
	func_535();
	return END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_537()
{
	if (Global_1312585 == 20)
	{
		return 0;
	}
	return 1;
}

void func_538(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_34(PLAYER_ID());
	if (bParam0)
	{
		iLocal_151 = GET_PED_RELATIONSHIP_GROUP_HASH(GET_PED_RELATIONSHIP_GROUP_HASH());
		SET_PED_RELATIONSHIP_GROUP_HASH(SET_PED_RELATIONSHIP_GROUP_HASH(), uLocal_150[iVar0]);
		func_80(0);
		func_541();
		func_539();
	}
}

void func_539()
{
	int iVar0;
	
	iVar0 = func_34(PLAYER_ID());
	func_67();
	switch (Local_175.f_31)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					func_540(1708.082f, 3257.124f, 40.0367f, 103.4795f);
					func_540(1708.174f, 3249.501f, 40.0217f, 105.6852f);
					func_540(1709.982f, 3241.591f, 39.9943f, 111.8098f);
					func_540(1713.491f, 3233.364f, 40.1406f, 102.9456f);
					func_540(1701.75f, 3218.817f, 40.4952f, 101.568f);
					func_540(1699.146f, 3212.31f, 41.0702f, 89.9389f);
					func_540(1684.962f, 3214.27f, 41.6779f, 93.4364f);
					func_540(1677.763f, 3224.455f, 39.5792f, 95.5699f);
					func_540(1674.756f, 3233.18f, 39.6863f, 100.0559f);
					func_540(1672.174f, 3242.395f, 39.6958f, 97.4521f);
					break;
				
				case 1:
					func_540(1056.888f, 3088.653f, 40.3451f, 278.7011f);
					func_540(1060.045f, 3081.229f, 40.2589f, 278.8035f);
					func_540(1062.256f, 3073.965f, 40.2523f, 286.0508f);
					func_540(1064.773f, 3066.959f, 40.2525f, 287.8311f);
					func_540(1066.519f, 3057.584f, 40.2967f, 275.5681f);
					func_540(1069.415f, 3042.697f, 40.3412f, 291.182f);
					func_540(1070.516f, 3033.868f, 40.3801f, 289.8516f);
					func_540(1075.104f, 3023.745f, 40.3225f, 276.9676f);
					func_540(1076.357f, 3015.861f, 40.3525f, 288.1565f);
					func_540(1075.891f, 3067.573f, 39.8683f, 291.6247f);
					break;
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 0:
					func_540(-1024.927f, -3260.799f, 12.9444f, 80.47f);
					func_540(-1022.464f, -3257.815f, 12.9444f, 80.47f);
					func_540(-1027.673f, -3254.468f, 12.9444f, 80.47f);
					func_540(-1022.058f, -3255.974f, 12.9444f, 80.47f);
					func_540(-1026.681f, -3253.933f, 12.9444f, 80.47f);
					func_540(-1028.014f, -3248.853f, 12.9444f, 80.47f);
					func_540(-1023.804f, -3248.954f, 12.9444f, 80.47f);
					func_540(-1026.189f, -3244.342f, 12.9444f, 80.47f);
					func_540(-1021.859f, -3244.705f, 12.9444f, 80.47f);
					break;
				
				case 1:
					func_540(-1650.909f, -2860.519f, 12.9444f, 250.7f);
					func_540(-1648.204f, -2866.492f, 12.9444f, 250.7f);
					func_540(-1641.552f, -2865.687f, 12.9452f, 250.7f);
					func_540(-1634.865f, -2869.221f, 12.948f, 250.7f);
					func_540(-1634.6f, -2874.042f, 12.9556f, 250.7f);
					func_540(-1629.217f, -2873.462f, 12.9513f, 250.7f);
					func_540(-1626.581f, -2878.242f, 12.9573f, 250.7f);
					func_540(-1621.161f, -2877.972f, 12.951f, 250.7f);
					break;
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 0:
					func_540(2128.587f, 4814.231f, 40.1959f, 103.4795f);
					func_540(2131.345f, 4808.89f, 40.1959f, 103.4795f);
					func_540(2133.655f, 4803.1f, 40.1576f, 103.4795f);
					func_540(2127.704f, 4799.296f, 40.1545f, 103.4795f);
					func_540(2123.396f, 4801.777f, 40.0564f, 103.4795f);
					func_540(2119.169f, 4806.328f, 40.1959f, 103.4795f);
					func_540(2114.736f, 4804.185f, 40.1931f, 103.4795f);
					func_540(2113.656f, 4800.263f, 40.1573f, 103.4795f);
					func_540(2115.452f, 4795.467f, 40.1041f, 103.4795f);
					func_540(2110.035f, 4793.893f, 39.8382f, 103.4795f);
					break;
				
				case 1:
					func_540(1927.808f, 4712.542f, 40.1779f, 278.7011f);
					func_540(1928.894f, 4718.197f, 40.1608f, 278.7011f);
					func_540(1934.309f, 4718.631f, 40.098f, 278.7011f);
					func_540(1941.779f, 4714.215f, 40.0632f, 278.7011f);
					func_540(1945.644f, 4715.785f, 40.0656f, 278.7011f);
					func_540(1947.567f, 4720.629f, 40.0604f, 278.7011f);
					func_540(1947.436f, 4726.579f, 40.0851f, 278.7011f);
					func_540(1951.564f, 4730.475f, 40.1026f, 278.7011f);
					func_540(1955.027f, 4729.683f, 40.0806f, 278.7011f);
					func_540(1958.042f, 4726.624f, 40.0604f, 278.7011f);
					func_540(1963.565f, 4722.866f, 40.0783f, 278.7011f);
					break;
			}
			break;
	}
}

void func_540(vector3 vParam0, float fParam1)
{
	if (Global_2405071.f_1744 < 101)
	{
		if (vmag(vParam0) <= 0.01f)
		{
			return;
		}
		Global_2405071.f_1745[Global_2405071.f_1744 /*4*/] = { vParam0 };
		Global_2405071.f_1745[Global_2405071.f_1744 /*4*/].f_3 = fParam1;
		Global_2405071.f_1744++;
	}
}

void func_541()
{
	int iVar0;
	
	iVar0 = func_34(PLAYER_ID());
	func_54(1, 1, 0, 1060320051, 1f, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 1, 1, 0, 1109393408);
	func_544(1, joaat("hexer"), 0, 0, 0, 0, -1, 1, 0, 0, 0);
	switch (Local_175.f_31)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					func_542(1708.082f, 3257.124f, 40.0367f, 103.4795f, 1065353216);
					func_542(1708.174f, 3249.501f, 40.0217f, 105.6852f, 1065353216);
					func_542(1709.982f, 3241.591f, 39.9943f, 111.8098f, 1065353216);
					func_542(1713.491f, 3233.364f, 40.1406f, 102.9456f, 1065353216);
					func_542(1701.75f, 3218.817f, 40.4952f, 101.568f, 1065353216);
					func_542(1699.146f, 3212.31f, 41.0702f, 89.9389f, 1065353216);
					func_542(1684.962f, 3214.27f, 41.6779f, 93.4364f, 1065353216);
					func_542(1677.763f, 3224.455f, 39.5792f, 95.5699f, 1065353216);
					func_542(1674.756f, 3233.18f, 39.6863f, 100.0559f, 1065353216);
					func_542(1672.174f, 3242.395f, 39.6958f, 97.4521f, 1065353216);
					break;
				
				case 1:
					func_542(1056.888f, 3088.653f, 40.3451f, 278.7011f, 1065353216);
					func_542(1060.045f, 3081.229f, 40.2589f, 278.8035f, 1065353216);
					func_542(1062.256f, 3073.965f, 40.2523f, 286.0508f, 1065353216);
					func_542(1064.773f, 3066.959f, 40.2525f, 287.8311f, 1065353216);
					func_542(1066.519f, 3057.584f, 40.2967f, 275.5681f, 1065353216);
					func_542(1069.415f, 3042.697f, 40.3412f, 291.182f, 1065353216);
					func_542(1070.516f, 3033.868f, 40.3801f, 289.8516f, 1065353216);
					func_542(1075.104f, 3023.745f, 40.3225f, 276.9676f, 1065353216);
					func_542(1076.357f, 3015.861f, 40.3525f, 288.1565f, 1065353216);
					func_542(1075.891f, 3067.573f, 39.8683f, 291.6247f, 1065353216);
					break;
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 0:
					func_542(-1024.927f, -3260.799f, 12.9444f, 80.47f, 1065353216);
					func_542(-1022.464f, -3257.815f, 12.9444f, 80.47f, 1065353216);
					func_542(-1027.673f, -3254.468f, 12.9444f, 80.47f, 1065353216);
					func_542(-1022.058f, -3255.974f, 12.9444f, 80.47f, 1065353216);
					func_542(-1026.681f, -3253.933f, 12.9444f, 80.47f, 1065353216);
					func_542(-1028.014f, -3248.853f, 12.9444f, 80.47f, 1065353216);
					func_542(-1023.804f, -3248.954f, 12.9444f, 80.47f, 1065353216);
					func_542(-1026.189f, -3244.342f, 12.9444f, 80.47f, 1065353216);
					func_542(-1021.859f, -3244.705f, 12.9444f, 80.47f, 1065353216);
					break;
				
				case 1:
					func_542(-1650.909f, -2860.519f, 12.9444f, 250.7f, 1065353216);
					func_542(-1648.204f, -2866.492f, 12.9444f, 250.7f, 1065353216);
					func_542(-1641.552f, -2865.687f, 12.9452f, 250.7f, 1065353216);
					func_542(-1634.865f, -2869.221f, 12.948f, 250.7f, 1065353216);
					func_542(-1634.6f, -2874.042f, 12.9556f, 250.7f, 1065353216);
					func_542(-1629.217f, -2873.462f, 12.9513f, 250.7f, 1065353216);
					func_542(-1626.581f, -2878.242f, 12.9573f, 250.7f, 1065353216);
					func_542(-1621.161f, -2877.972f, 12.951f, 250.7f, 1065353216);
					break;
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 0:
					func_542(2128.587f, 4814.231f, 40.1959f, 103.4795f, 1065353216);
					func_542(2131.345f, 4808.89f, 40.1959f, 103.4795f, 1065353216);
					func_542(2133.655f, 4803.1f, 40.1576f, 103.4795f, 1065353216);
					func_542(2127.704f, 4799.296f, 40.1545f, 103.4795f, 1065353216);
					func_542(2123.396f, 4801.777f, 40.0564f, 103.4795f, 1065353216);
					func_542(2119.169f, 4806.328f, 40.1959f, 103.4795f, 1065353216);
					func_542(2114.736f, 4804.185f, 40.1931f, 103.4795f, 1065353216);
					func_542(2113.656f, 4800.263f, 40.1573f, 103.4795f, 1065353216);
					func_542(2115.452f, 4795.467f, 40.1041f, 103.4795f, 1065353216);
					func_542(2110.035f, 4793.893f, 39.8382f, 103.4795f, 1065353216);
					break;
				
				case 1:
					func_542(1927.808f, 4712.542f, 40.1779f, 278.7011f, 1065353216);
					func_542(1928.894f, 4718.197f, 40.1608f, 278.7011f, 1065353216);
					func_542(1934.309f, 4718.631f, 40.098f, 278.7011f, 1065353216);
					func_542(1941.779f, 4714.215f, 40.0632f, 278.7011f, 1065353216);
					func_542(1945.644f, 4715.785f, 40.0656f, 278.7011f, 1065353216);
					func_542(1947.567f, 4720.629f, 40.0604f, 278.7011f, 1065353216);
					func_542(1947.436f, 4726.579f, 40.0851f, 278.7011f, 1065353216);
					func_542(1951.564f, 4730.475f, 40.1026f, 278.7011f, 1065353216);
					func_542(1955.027f, 4729.683f, 40.0806f, 278.7011f, 1065353216);
					func_542(1958.042f, 4726.624f, 40.0604f, 278.7011f, 1065353216);
					func_542(1963.565f, 4722.866f, 40.0783f, 278.7011f, 1065353216);
					break;
			}
			break;
	}
}

void func_542(vector3 vParam0, float fParam1, int iParam2)
{
	func_543(vParam0, fParam1, iParam2);
}

void func_543(vector3 vParam0, var uParam1, var uParam2)
{
	if (!Global_2405071.f_1743)
	{
	}
	if (Global_2405071.f_704 < 100)
	{
		if (vmag(vParam0) <= 0.01f)
		{
			return;
		}
		Global_2405071.f_704.f_1[Global_2405071.f_704 /*5*/] = { vParam0 };
		Global_2405071.f_704.f_1[Global_2405071.f_704 /*5*/].f_3 = uParam1;
		Global_2405071.f_704.f_1[Global_2405071.f_704 /*5*/].f_4 = uParam2;
		Global_2405071.f_704++;
	}
}

void func_544(bool bParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	
	if (!iParam1 == 0 && !IS_MODEL_IN_CDIMAGE(iParam1))
	{
		iParam1 = joaat("tailgater");
	}
	Global_2405071.f_45.f_65 = bParam0;
	Global_2405071.f_45.f_67 = iParam1;
	Global_2405071.f_45.f_68 = bParam2;
	Global_2405071.f_45.f_173 = iParam3;
	Global_2405071.f_45.f_66 = iParam4;
	Global_2405071.f_45.f_175 = bParam5;
	Global_2405071.f_45.f_176 = bParam7;
	Global_2405071.f_45.f_180 = iParam6;
	Global_2405071.f_45.f_177 = iParam8;
	Global_2405071.f_45.f_178 = iParam9;
	Global_2405071.f_45.f_179 = bParam10;
	if (!bParam0)
	{
		func_547();
	}
	if (bParam2)
	{
		iVar0 = func_546();
		if (DOES_ENTITY_EXIST(iVar0))
		{
			if (!IS_ENTITY_A_MISSION_ENTITY(iVar0))
			{
				if (NETWORK_GET_ENTITY_IS_LOCAL(iVar0))
				{
					SET_ENTITY_AS_MISSION_ENTITY(iVar0, false, 1);
					bVar1 = true;
				}
			}
			if (!IS_ENTITY_DEAD(iVar0, 0))
			{
				if (DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, 1))
				{
					if (!NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iVar0));
					}
				}
			}
			if (NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (bVar1)
				{
					SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
				}
				if (bParam5)
				{
					if (!IS_ENTITY_DEAD(iVar0, 0))
					{
						SET_VEHICLE_STRONG(iVar0, true);
					}
				}
				if (bParam7)
				{
					if (!IS_ENTITY_DEAD(iVar0, 0))
					{
						SET_VEHICLE_TYRES_CAN_BURST(iVar0, false);
					}
				}
				if (iParam6 > -1)
				{
					SET_VEHICLE_COLOURS(iVar0, iParam6, iParam6);
					SET_VEHICLE_EXTRA_COLOURS(iVar0, iParam6, iParam6);
				}
				if (bParam10)
				{
					func_545(iVar0);
				}
			}
		}
	}
}

void func_545(int iParam0)
{
	if (DOES_ENTITY_EXIST(iParam0) && !DOES_ENTITY_EXIST(iParam0, 0))
	{
		if (NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
		{
			if (Global_1687738 > -1)
			{
				if (DECOR_IS_REGISTERED_AS_TYPE("GBMissionFire", 3))
				{
					if (!DECOR_EXIST_ON(iParam0, "GBMissionFire"))
					{
						DECOR_SET_INT(iParam0, "GBMissionFire", Global_1687738);
					}
				}
			}
		}
	}
}

var func_546()
{
	return Global_2405071.f_2658;
}

void func_547()
{
	struct<102> Var0;
	
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_79 = -1;
	Var0.f_96 = -1;
	Var0.f_97 = 1;
	Var0.f_99 = 132;
	Var0.f_100 = -1;
	Global_2405071.f_45.f_69 = { Var0 };
	Global_2405071.f_45.f_171 = 0;
}

void func_548()
{
	if (!func_44(PARTICIPANT_ID(), 1))
	{
		return;
	}
	if (!func_736(7))
	{
		func_561(&iLocal_115);
		func_712(7);
		CLEAR_AREA_OF_PROJECTILES(func_560(func_34(CLEAR_AREA_OF_PROJECTILES())), 50f, 1);
	}
	if (!func_44(PARTICIPANT_ID(), 7))
	{
		if (func_559(&iLocal_115))
		{
			if (func_17(10))
			{
				if (func_549(&iLocal_115, 1, 0, 1))
				{
					func_84(7);
				}
			}
		}
	}
}

int func_549(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	if (func_559(iParam0))
	{
		if (!func_558(&(iParam0->f_3)))
		{
			func_556(&(iParam0->f_3));
		}
		_SET_UI_LAYER(4);
		if (HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			DRAW_SCALEFORM_MOVIE_FULLSCREEN(*iParam0, 255, 255, 255, 100, 0);
		}
		iVar0 = floor(func_553(&(iParam0->f_3)));
		iVar1 = ABSI((iVar0 - 3));
		bVar2 = false;
		if (func_369(iParam0->f_1, 4))
		{
			if (iParam0->f_2 >= 5)
			{
				if (!func_369(iParam0->f_1, 16))
				{
					PLAY_SOUND_FRONTEND(-1, "GO", "HUD_MINI_GAME_SOUNDSET", false);
					func_382(&(iParam0->f_1), 16);
					STOP_STREAM();
				}
			}
			else
			{
				iParam0->f_2++;
			}
		}
		if (!func_369(iParam0->f_1, 8))
		{
			if (iVar1 == 3 && !func_369(iParam0->f_1, 1))
			{
				func_382(&(iParam0->f_1), 1);
				PLAY_SOUND_FRONTEND(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", false);
				func_552(iParam0, iVar1);
			}
			else if (iVar1 == 2 && !func_369(iParam0->f_1, 2))
			{
				func_382(&(iParam0->f_1), 2);
				PLAY_SOUND_FRONTEND(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", false);
				func_552(iParam0, iVar1);
			}
			else if (iVar1 == 1 && !func_369(iParam0->f_1, 4))
			{
				func_382(&(iParam0->f_1), 4);
				PLAY_SOUND_FRONTEND(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", false);
				func_552(iParam0, iVar1);
			}
			else if (iVar1 == 0 && !func_369(iParam0->f_1, 8))
			{
				func_382(&(iParam0->f_1), 8);
				TRIGGER_MUSIC_EVENT("BIKER_JOUST_FIGHT");
				GET_HUD_COLOUR(18, &iVar3, &iVar4, &iVar5, &uVar6);
				BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_MESSAGE");
				func_405("CNTDWN_GO");
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar3);
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar4);
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar5);
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(true);
				END_SCALEFORM_MOVIE_METHOD();
				func_84(6);
				if (!bParam1)
				{
					bVar2 = true;
				}
			}
		}
		else if (iVar1 == 1)
		{
			bVar2 = true;
		}
		if ((iParam2 && func_551()) || iVar0 > 5)
		{
			bVar2 = true;
		}
		if (bVar2)
		{
			if (bParam3)
			{
				iParam0->f_1 = 0;
				func_550(&(iParam0->f_3));
			}
			STOP_AUDIO_SCENE("RACES_RADIO_MUTE_scene");
			START_AUDIO_SCENE("MP_RACE_GENERAL_SCENE");
			iVar7 = 0;
			while (iVar7 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
			{
				if (NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(iVar7)))
				{
					iVar8 = NETWORK_GET_PLAYER_INDEX(NETWORK_GET_PLAYER_INDEX(iVar7));
					if (iVar8 != PLAYER_ID())
					{
						iVar9 = GET_PLAYER_PED(iVar8);
						if (IS_PED_IN_ANY_VEHICLE(iVar9, 0))
						{
							iVar10 = GET_VEHICLE_PED_IS_IN(iVar9, 0);
							_DYNAMIC_MIXER_RELATED_FN(iVar10, "MP_RACE_NPC_CAR_Group", 0f);
						}
					}
				}
				iVar7++;
			}
			return 1;
		}
	}
	return 0;
}

void func_550(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_551()
{
	if (IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (IS_CONTROL_PRESSED(0, 18) || IS_CONTROL_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_552(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
	BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_MESSAGE");
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
	ADD_TEXT_COMPONENT_INTEGER(ADD_TEXT_COMPONENT_INTEGER(iParam1));
	END_TEXT_COMMAND_SCALEFORM_STRING();
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar1);
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar2);
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(true);
	END_SCALEFORM_MOVIE_METHOD();
}

float func_553(var uParam0)
{
	if (func_558(uParam0))
	{
		if (func_555(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_554(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_554(bool bParam0)
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

bool func_555(var uParam0)
{
	return IS_BIT_SET(*uParam0, 2);
}

void func_556(int iParam0)
{
	func_557(iParam0, 0f);
}

void func_557(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_554(IS_BIT_SET(*iParam0, 4)) - fParam1);
	SET_BIT(iParam0, 1);
	CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_558(var uParam0)
{
	return IS_BIT_SET(*uParam0, 1);
}

int func_559(int iParam0)
{
	if (!HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		return 0;
	}
	return 1;
}

Vector3 func_560(int iParam0)
{
	switch (Local_175.f_31)
	{
		case 0:
			if (iParam0 == 0)
			{
				return 1706.612f, 3251.994f, 40.1522f;
			}
			return 1066.192f, 3078.314f, 40.9174f;
			break;
		
		case 1:
			if (iParam0 == 0)
			{
				return -1004.147f, -3235.733f, 12.9444f;
			}
			return -1675.056f, -2848.475f, 12.9444f;
			break;
		
		case 2:
			if (iParam0 == 0)
			{
				return 2141.719f, 4811.836f, 40.1823f;
			}
			return 1928.747f, 4713.012f, 40.1674f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_561(int iParam0)
{
	*iParam0 = 0x67D02A194A2FC2BD("COUNTDOWN");
}

void func_562()
{
	int iVar0;
	int iVar1;
	
	if (IS_PED_INJURED(IS_PED_INJURED()))
	{
		if (func_44(PARTICIPANT_ID(), 1))
		{
			func_82(1);
		}
		if (func_44(PARTICIPANT_ID(), 2))
		{
			func_82(2);
		}
		return;
	}
	if (func_584() || func_581())
	{
		func_530();
		DISABLE_CONTROL_ACTION(0, 140, 1);
		DISABLE_CONTROL_ACTION(0, 141, 1);
		DISABLE_CONTROL_ACTION(0, 142, 1);
		DISABLE_CONTROL_ACTION(0, 143, 1);
		DISABLE_CONTROL_ACTION(0, 24, 1);
		DISABLE_CONTROL_ACTION(0, 345, 1);
		DISABLE_CONTROL_ACTION(0, 346, 1);
		DISABLE_CONTROL_ACTION(0, 347, 1);
	}
	if (func_584())
	{
		if (!func_44(PARTICIPANT_ID(), 4))
		{
			func_84(4);
			SET_CURRENT_PED_WEAPON(SET_CURRENT_PED_WEAPON(), joaat("weapon_unarmed"), false);
			NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
			SET_PED_CAN_BE_DRAGGED_OUT(SET_PED_CAN_BE_DRAGGED_OUT(), 0);
		}
		if (IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE()))
		{
			if (func_580(2))
			{
				func_579(2);
			}
			if (!func_81())
			{
				if (func_580(3))
				{
					func_579(3);
				}
				iVar1 = GET_VEHICLE_PED_IS_USING(GET_VEHICLE_PED_IS_USING());
				iVar0 = GET_ENTITY_MODEL(iVar1);
				if (func_526(iVar0))
				{
					0x73561D4425A021A2(iVar1, 1);
					func_578(3);
					if (func_580(4))
					{
						func_579(4);
					}
					if (!func_44(PARTICIPANT_ID(), 2))
					{
						func_84(2);
					}
					if (IS_BIT_SET(Local_175.f_2, IS_BIT_SET()))
					{
						if (!func_44(PARTICIPANT_ID(), 1))
						{
							TRIGGER_MUSIC_EVENT("BIKER_JOUST_START");
							func_84(1);
							func_576();
							_0x21D04D7BC538C146(1);
						}
						if (!func_575() || !func_574())
						{
							if (func_45(PLAYER_ID()))
							{
								if (!func_575())
								{
									func_563(6);
								}
							}
							else
							{
								func_563(7);
							}
						}
						else
						{
							func_563(8);
						}
					}
				}
				else
				{
					if (func_44(PARTICIPANT_ID(), 1))
					{
						func_82(1);
					}
					if (func_44(PARTICIPANT_ID(), 2))
					{
						func_82(2);
					}
					func_563(4);
				}
			}
			else
			{
				if (func_44(PARTICIPANT_ID(), 1))
				{
					func_82(1);
				}
				if (func_44(PARTICIPANT_ID(), 2))
				{
					func_82(2);
				}
				if (func_44(PARTICIPANT_ID(), 4))
				{
					func_82(4);
				}
				func_563(3);
			}
		}
		else
		{
			if (func_44(PARTICIPANT_ID(), 1))
			{
				func_82(1);
			}
			if (func_44(PARTICIPANT_ID(), 2))
			{
				func_82(2);
			}
			func_563(2);
		}
	}
	else
	{
		if (func_44(PARTICIPANT_ID(), 1))
		{
			func_82(1);
		}
		if (func_44(PARTICIPANT_ID(), 2))
		{
			func_82(2);
		}
		if (func_44(PARTICIPANT_ID(), 4))
		{
			func_82(4);
			func_80(0);
			SET_PED_CAN_BE_DRAGGED_OUT(SET_PED_CAN_BE_DRAGGED_OUT(), 1);
		}
	}
}

void func_563(int iParam0)
{
	struct<8> Var0;
	int iVar1;
	
	if (func_573())
	{
		if (!func_580(iParam0))
		{
			switch (iParam0)
			{
				case 3:
					func_102("JST_PASSMD", -1);
					break;
				
				case 2:
					func_102("JST_NOBIKE", -1);
					break;
				
				case 5:
					break;
				
				case 6:
					func_102("JST_HRBOSS", -1);
					break;
				
				case 7:
					func_102("JST_HWBOSS", -1);
					break;
				
				case 8:
					func_102("JST_HTBOSS", -1);
					break;
				
				case 9:
					func_102("JST_KBIKE", -1);
					break;
				
				case 11:
					func_102("JST_OAREA", -1);
					break;
				
				case 12:
					func_102("JST_HSTART", -1);
					break;
				
				case 13:
					if (func_144())
					{
						func_572("JST_HTBLAUNCH", "JST_BLIP", iLocal_152, -1);
					}
					else
					{
						func_572("JST_HGNLNCH", "JST_BLIP", iLocal_152, -1);
					}
					break;
				
				case 14:
					func_572("JST_HGNLNCH", "JST_BLIP", iLocal_152, -1);
					break;
				
				case 10:
					func_572("JST_FIGHT", "HUNT_TARBLP", iLocal_153, -1);
					break;
				
				case 15:
					func_572("JST_AMMOH", "JST_AMMOBL", 18, -1);
					break;
				
				case 16:
					StringCopy(&Var0, func_566(func_36()), 64);
					iVar1 = func_714(func_36());
					func_565("JST_RVLLNCH", &Var0, iVar1, "JST_BLIP", iLocal_152, -1);
					break;
				
				case 17:
					if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
					{
						if (GET_ENTITY_MODEL(GET_ENTITY_MODEL(GET_ENTITY_MODEL(), 0)) != 884483972)
						{
							func_102("JST_DOUB", -1);
						}
					}
					break;
				
				default:
					break;
			}
			func_98(1);
			func_564(iParam0);
		}
	}
}

void func_564(int iParam0)
{
	SET_BIT(&iLocal_131, iParam0);
}

void func_565(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		_SET_NOTIFICATION_COLOR_NEXT(iParam2);
	}
	ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	if (!iParam4 == 0)
	{
		_SET_NOTIFICATION_COLOR_NEXT(iParam4);
	}
	ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam3);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 0, false, iParam5);
}

char* func_566(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == PLAYER_ID())
	{
		sVar0 = func_571(&(Global_1628955[iParam0 /*614*/].f_11.f_104));
		return sVar0;
	}
	if (Global_1628955[iParam0 /*614*/].f_11.f_120 != Global_1628955[PLAYER_ID() /*614*/].f_11.f_120)
	{
		sVar0 = func_569(iParam0, 0);
		return sVar0;
	}
	if (((func_107(iParam0, 28) || func_107(PLAYER_ID(), 28)) || func_568(iParam0)) && !func_567(iParam0))
	{
		return func_569(iParam0, 0);
	}
	iVar1 = func_265(iParam0);
	if (iVar1 != func_29())
	{
		if (iVar1 != PLAYER_ID())
		{
			if (!IS_DURANGO_VERSION() && !IS_DURANGO_VERSION(0, -1, 1))
			{
				return func_569(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_29())
	{
		sVar0 = func_571(&(Global_1628955[iVar1 /*614*/].f_11.f_104));
		if (IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return func_569(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_567(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_199(iParam0) };
	if (IS_DURANGO_VERSION())
	{
		if (_0x72D918C99BCACC54(0))
		{
			if (_0xB57A49545BA53CE7(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_568(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_29())
	{
		Var0 = { func_199(iParam0) };
		if (IS_ORBIS_VERSION() || IS_ORBIS_VERSION())
		{
			if (_0x72D918C99BCACC54(0))
			{
				return 0;
			}
		}
		else if (IS_DURANGO_VERSION())
		{
			if (_0x72D918C99BCACC54(0))
			{
				if (_0xB57A49545BA53CE7(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

char* func_569(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_100(iParam0, 1))
		{
			return func_570();
		}
	}
	return _GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_570()
{
	return _GET_LABEL_TEXT("GB_REST_ACCM");
}

var func_571(var uParam0)
{
	return uParam0;
}

void func_572(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		_SET_NOTIFICATION_COLOR_NEXT(iParam2);
	}
	ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam1);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 0, false, iParam3);
}

int func_573()
{
	if (((((!func_388() && !IS_PAUSE_MENU_ACTIVE()) && !IS_PAUSE_MENU_ACTIVE()) && func_997(IS_PAUSE_MENU_ACTIVE(), 1, 1)) && !func_121()) && !IS_PAUSE_MENU_ACTIVE())
	{
		return 1;
	}
	return 0;
}

bool func_574()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_34(PLAYER_ID());
	if (iVar1 == 0)
	{
		iVar0 = 8;
	}
	else
	{
		iVar0 = 9;
	}
	return func_17(iVar0);
}

bool func_575()
{
	int iVar0;
	int iVar1;
	
	iVar0 = (1 - func_34(PLAYER_ID()));
	if (iVar0 == 0)
	{
		iVar1 = 8;
	}
	else
	{
		iVar1 = 9;
	}
	return func_17(iVar1);
}

void func_576()
{
	if (!func_577(PLAYER_ID()))
	{
		func_122(25);
	}
}

bool func_577(int iParam0)
{
	return func_107(iParam0, 25);
}

void func_578(int iParam0)
{
	Global_2405071.f_45.f_302 = iParam0;
	SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(), Global_2405071.f_45.f_302);
	if (Global_2405071.f_45.f_302 == 1)
	{
		SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 115, true);
	}
	else
	{
		SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 115, false);
	}
}

void func_579(int iParam0)
{
	CLEAR_BIT(&iLocal_131, iParam0);
}

bool func_580(int iParam0)
{
	return IS_BIT_SET(iLocal_131, iParam0);
}

int func_581()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	
	vVar0 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true) };
	vVar1 = { func_560(func_583(PLAYER_ID())) };
	fVar2 = GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar1, false);
	fVar3 = (func_582(func_583(PLAYER_ID())) / 2f);
	if (fVar2 <= fVar3)
	{
		if (ABSF((vVar1.z - vVar0.z)) <= fVar3)
		{
			return 1;
		}
	}
	return 0;
}

float func_582(int iParam0)
{
	if (iParam0 == 0)
	{
		return 44.75f;
	}
	return 44.75f;
}

int func_583(int iParam0)
{
	if (func_37(iParam0) || func_35(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_584()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	
	vVar0 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true) };
	vVar1 = { func_560(func_34(PLAYER_ID())) };
	fVar2 = GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar1, false);
	fVar3 = (func_582(func_34(PLAYER_ID())) / 2f);
	if (fVar2 <= fVar3)
	{
		if (ABSF((vVar1.z - vVar0.z)) <= fVar3)
		{
			return 1;
		}
	}
	return 0;
}

void func_585()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	GET_HUD_COLOUR(iLocal_152, &iVar0, &iVar1, &iVar2, &iVar3);
	fVar4 = 16.125f;
	fVar5 = 3.75f;
	fVar6 = func_582(func_34(PLAYER_ID()));
	vVar7 = { func_560(func_34(PLAYER_ID())) };
	vVar7.z = (vVar7.z - fVar5);
	DRAW_MARKER(1, vVar7, 0f, 0f, 0f, 0f, 0f, 0f, fVar6, fVar6, fVar4, iVar0, iVar1, iVar2, iVar3, 0, 0, 2, 0, 0, 0, false);
}

void func_586()
{
	if (func_625())
	{
		func_619();
		func_618();
		func_605();
		func_588();
		func_587();
	}
	else
	{
		switch (func_113(PLAYER_ID()))
		{
			case 0:
				func_531();
				break;
			
			case 1:
				func_619();
				break;
			
			case 2:
				func_587();
				break;
			
			case 3:
				func_619();
				func_618();
				func_605();
				func_587();
				func_588();
				break;
			}
	}
}

void func_587()
{
	if (func_27() >= 2)
	{
		if (func_17(11))
		{
			if (func_44(PARTICIPANT_ID(), 1))
			{
				if (!func_580(10))
				{
					func_563(10);
				}
				else
				{
					func_563(15);
				}
				if (!func_580(17))
				{
					func_563(17);
				}
			}
		}
		else if (!func_44(PARTICIPANT_ID(), 1))
		{
			func_563(12);
		}
		else
		{
			func_563(12);
		}
	}
	else if (func_27() >= 1)
	{
		if (func_625())
		{
			if (PLAYER_ID() == Local_175.f_16[0])
			{
				func_563(13);
			}
			else
			{
				func_563(14);
			}
		}
		else
		{
			func_563(16);
		}
	}
}

void func_588()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_5(&uLocal_172))
	{
		if (func_5(&(Local_175.f_5)))
		{
			iLocal_142 = (func_3() - func_22(&(Local_175.f_5), 0, 0));
			if (iLocal_142 < func_3())
			{
				if (iLocal_142 > 30000)
				{
					iVar1 = 1;
				}
				else
				{
					iVar1 = 6;
				}
				func_604();
				iVar2 = func_34(PLAYER_ID());
				iVar3 = (1 - iVar2);
				iVar4 = func_714(PLAYER_ID());
				iVar5 = Local_175.f_16[iVar3];
				if (Local_175.f_24[iVar2] > 0)
				{
					func_601(Local_175.f_27[iVar2], "JST_TEAML", -1, iVar4, 5, 0, 0, 0, 0, 0, 0, iVar4, 0, iLocal_112, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
				else
				{
					func_601(Local_175.f_27[iVar2], "JST_TEAML", 999999999, 6, 5, 0, 0, 0, 0, 2, 0, 6, 0, iLocal_112, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
				if (iVar5 != func_29())
				{
					if (NETWORK_IS_PLAYER_ACTIVE(iVar5))
					{
						if (!IS_STRING_NULL_OR_EMPTY(&Local_163))
						{
							iVar4 = func_714(iVar5);
							func_601(Local_175.f_27[iVar3], "JST_ETEAML", -1, iVar4, 4, 0, 0, 0, 0, 0, 0, iVar4, 0, iLocal_112, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
						}
					}
				}
				if (iLocal_142 > 0)
				{
					func_600(iLocal_142, "CLUB_WORK_END", 0, 0, -1, 0, 3, 0, iVar1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
				else
				{
					func_600(0, "CLUB_WORK_END", 0, 0, -1, 0, 3, 0, iVar1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
			}
		}
		else
		{
			func_589();
		}
	}
	else
	{
		iVar0 = (10000 - func_22(&uLocal_172, 0, 0));
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		if (func_997(PLAYER_ID(), 1, 1))
		{
			func_604();
			func_600(iVar0, "PEN_ELM", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
		}
	}
}

void func_589()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_511())
	{
		return;
	}
	bVar0 = func_24();
	iVar1 = func_23();
	if (func_17(5))
	{
		iVar1 = func_21();
	}
	if (bVar0)
	{
		iVar2 = func_599();
		if (iVar2 > iLocal_136)
		{
			iVar2 = iLocal_136;
		}
		if (iVar3 != Local_175.f_3)
		{
			iVar3 = Local_175.f_3;
		}
		if ((iVar1 - func_22(&(Local_175.f_7), 0, 0)) >= 0)
		{
			func_598((iVar1 - func_22(&(Local_175.f_7), 0, 0)));
			func_590(iVar3, iVar2, (iVar1 - func_22(&(Local_175.f_7), 0, 0)), 1, func_597(-1));
		}
		else
		{
			func_590(iVar3, iVar2, 0, 1, func_597(-1));
		}
	}
}

void func_590(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	
	if (func_595(0) == 0)
	{
		return;
	}
	func_594();
	func_591(iParam0, iParam1, "HUD_PARITIC", -1, 1, 4, 0, 0, 0, 0, 0, 1, 1, 0, 255, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_221(sParam4))
	{
		sVar0 = sParam4;
	}
	func_600(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0, -1);
}

void func_591(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_593(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1375006.f_1 = 1;
		func_592(4, iVar0);
		Global_1375006.f_3163[iVar0] = iParam0;
		Global_1375006.f_3163.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1375006.f_3163.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1375006.f_3163.f_183[iVar0] = iParam3;
		Global_1375006.f_3163.f_216[iVar0] = iParam5;
		Global_1375006.f_3163.f_194[iVar0] = iParam4;
		Global_1375006.f_3163.f_227[iVar0] = iParam6;
		Global_1375006.f_3163.f_270[iVar0] = iParam7;
		Global_1375006.f_3163.f_281[iVar0] = iParam8;
		Global_1375006.f_3163.f_292[iVar0] = iParam9;
		Global_1375006.f_3163.f_303[iVar0] = iParam10;
		Global_1375006.f_3163.f_314[iVar0] = iParam11;
		Global_1375006.f_3163.f_325[iVar0] = iParam13;
		Global_1375006.f_3163.f_336[iVar0] = iParam14;
		Global_1375006.f_3163.f_347[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && IS_PC_VERSION()) && iParam12)
		{
			Global_1375006.f_1109 = 1;
		}
	}
}

void func_592(int iParam0, int iParam1)
{
	SET_BIT(&(Global_1375006.f_6184[iParam0]), iParam1);
}

bool func_593(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_1375006.f_6184[iParam0], iParam1);
}

void func_594()
{
	HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_2460544 = 1;
}

int func_595(bool bParam0)
{
	if (func_596())
	{
		return 0;
	}
	if (func_494())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_997(PLAYER_ID(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_596()
{
	return IS_BIT_SET(Global_2359302, 12);
}

char* func_597(int iParam0)
{
	char* sVar0;
	
	sVar0 = GET_THIS_SCRIPT_NAME();
	return "HUD_STARTING";
	if (ARE_STRINGS_EQUAL(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "am_challenges"))
	{
		switch (iParam0)
		{
			case 0:
				return "AST_CHALL_LJ";
			
			case 1:
				return "AST_CHALL_LS";
			
			case 2:
				return "AST_CHALL_HS";
			
			case 3:
				return "AST_CHALL_LST";
			
			case 4:
				return "AST_CHALL_LW";
			
			case 5:
				return "AST_CHALL_NC";
			
			case 6:
				return "AST_CHALL_LP";
			
			case 7:
				return "AST_CHALL_VS";
			
			case 8:
				return "AST_CHALL_NM";
			
			case 9:
				return "AST_CHALL_RD";
			
			case 10:
				return "AST_CHALL_LF";
			
			case 11:
				return "AST_CHALL_LFL";
			
			case 12:
				return "AST_CHALL_LFI";
			
			case 13:
				return "AST_CHALL_LB";
			
			case 14:
				return "AST_CHALL_MB";
			
			case 15:
				return "AST_CHALL_HSH";
			
			case 16:
				return "AST_CHALL_DB";
			
			case 17:
				return "AST_CHALL_ML";
			
			case 18:
				return "AST_CHALL_LSN";
			
			default:
		}
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

void func_598(int iParam0)
{
	if (IntToFloat(iParam0) < GET_FRAME_TIME())
	{
		Global_2531497.f_4735 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!IS_BIT_SET(Global_2531497.f_4735, 1))
		{
			PLAY_SOUND_FRONTEND(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", false);
			Global_2531497.f_4735 = 0;
			SET_BIT(&(Global_2531497.f_4735), 1);
		}
	}
}

int func_599()
{
	return 16;
}

void func_600(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_593(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1375006.f_1 = 1;
		func_592(7, iVar0);
		Global_1375006.f_4453[iVar0] = iParam0;
		StringCopy(&(Global_1375006.f_4453.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1375006.f_4453.f_172[iVar0] = iParam2;
		Global_1375006.f_4453.f_216[iVar0] = iParam3;
		Global_1375006.f_4453.f_183[iVar0] = iParam4;
		Global_1375006.f_4453.f_194[iVar0] = iParam5;
		Global_1375006.f_4453.f_249[iVar0] = iParam6;
		Global_1375006.f_4453.f_260[iVar0] = iParam7;
		Global_1375006.f_4453.f_205[iVar0] = iParam8;
		Global_1375006.f_4453.f_314[iVar0] = iParam9;
		Global_1375006.f_4453.f_325[iVar0] = iParam10;
		Global_1375006.f_4453.f_357[iVar0] = iParam11;
		Global_1375006.f_4453.f_238[iVar0] = iParam12;
		Global_1375006.f_4453.f_271[iVar0] = iParam13;
		Global_1375006.f_4453.f_368[iVar0] = iParam14;
		Global_1375006.f_4453.f_379[iVar0] = iParam15;
		Global_1375006.f_4453.f_390[iVar0] = iParam16;
		Global_1375006.f_4453.f_227[iVar0] = iParam17;
	}
}

void func_601(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, var uParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_593(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1375006.f_1 = 1;
		func_592(6, iVar0);
		Global_1375006.f_3835[iVar0] = iParam0;
		StringCopy(&(Global_1375006.f_3835.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1375006.f_3835.f_183[iVar0] = iParam3;
		Global_1375006.f_3835.f_172[iVar0] = iParam2;
		Global_1375006.f_3835.f_260[iVar0] = iParam4;
		Global_1375006.f_3835.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1375006.f_3835.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1375006.f_3835.f_443[iVar0] = iParam7;
		Global_1375006.f_3835.f_454[iVar0] = iParam8;
		Global_1375006.f_3835.f_497[iVar0] = iParam9;
		Global_1375006.f_3835.f_508[iVar0] = iParam10;
		Global_1375006.f_3835.f_205[iVar0] = iParam11;
		Global_1375006.f_3835.f_216[iVar0] = iParam12;
		Global_1375006.f_3835.f_227[iVar0] = uParam13;
		Global_1375006.f_3835.f_238[iVar0] = iParam14;
		Global_1375006.f_3835.f_249[iVar0] = iParam15;
		Global_1375006.f_3835.f_519[iVar0] = iParam16;
		Global_1375006.f_3835.f_530[iVar0] = iParam17;
		Global_1375006.f_3835.f_541[iVar0] = iParam18;
		Global_1375006.f_3835.f_552[iVar0] = iParam19;
		Global_1375006.f_3835.f_563[iVar0] = iParam20;
		Global_1375006.f_3835.f_574[iVar0] = iParam21;
		Global_1375006.f_3835.f_585[iVar0] = iParam22;
		Global_1375006.f_3835.f_596[iVar0] = iParam23;
		Global_1375006.f_3835.f_607[iVar0] = iParam24;
		Global_1375006.f_3835.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_603())
		{
			Global_1375006.f_1109 = 1;
		}
		if (IS_PC_VERSION())
		{
			iVar2 = 0;
			_GET_ACTIVE_SCREEN_RESOLUTION(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1375006.f_1113 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1375006.f_1112 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1375006.f_1109 = 1;
			}
			if (func_602())
			{
				Global_1375006.f_1113 = 1;
			}
		}
	}
}

int func_602()
{
	int iVar0;
	var uVar1;
	
	if (IS_PC_VERSION())
	{
		_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_603()
{
	if (((_GET_CURRENT_LANGUAGE_ID() == 8 || _GET_CURRENT_LANGUAGE_ID() == 9) || _GET_CURRENT_LANGUAGE_ID() == 10) || _GET_CURRENT_LANGUAGE_ID() == 12)
	{
		return 1;
	}
	return 0;
}

void func_604()
{
	Global_1375006.f_1109 = 1;
}

void func_605()
{
	if (iLocal_139 > -1)
	{
		if (func_44(INT_TO_PARTICIPANTINDEX(iLocal_139), 1))
		{
			if (func_44(INT_TO_PARTICIPANTINDEX(iLocal_139), 6))
			{
				if (func_527())
				{
					if (func_525())
					{
						if (!func_617("JST_OBJ_KILL"))
						{
							func_616("JST_OBJ_KILL", &Local_163, iLocal_153, 0);
						}
					}
					else
					{
						if (func_617("JST_OBJ_KILL"))
						{
							func_531();
						}
						if (!func_617("JST_FBIKE"))
						{
							func_613("JST_FBIKE", 0);
						}
						if (!func_44(PARTICIPANT_ID(), 10))
						{
							func_84(10);
							func_612("JST_FBIKEGUNS", -1);
						}
					}
				}
				else if (func_525())
				{
					if (!func_617("JST_OBKAREA"))
					{
						func_613("JST_OBKAREA", 0);
					}
				}
				else
				{
					if (func_617("JST_OBJ_KILL"))
					{
						func_531();
					}
					if (!func_617("JST_FBIKE"))
					{
						func_613("JST_FBIKE", 0);
					}
				}
			}
			else if (func_736(9))
			{
				if (func_525())
				{
					if (!func_617("JST_OBJ_CHARGE"))
					{
						func_616("JST_OBJ_CHARGE", &Local_163, iLocal_153, 0);
					}
				}
			}
		}
		else if (!func_584())
		{
			if (!func_617("JST_OGOAREA"))
			{
				func_606("JST_OGOAREA", "JST_START", iLocal_152, 0);
			}
		}
		else if (!func_525())
		{
			if (!func_617("JST_OBIKE"))
			{
				func_613("JST_OBIKE", 0);
			}
		}
	}
}

void func_606(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_607(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312585 = 19;
		Global_1312585.f_56 = iParam2;
	}
}

int func_607(char* sParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (_GET_LENGTH_OF_STRING(sParam0) > 23)
	{
		return 0;
	}
	if (IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (func_611(sParam0, sParam1) && Global_1312585.f_56 == Global_1312585.f_58)
	{
		return 0;
	}
	func_532();
	Global_1312585 = 3;
	StringCopy(&(Global_1312585.f_1), GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	Global_1312585.f_58 = uParam3;
	Global_1312585.f_56 = uParam3;
	func_610();
	func_609(bParam2);
	func_608();
	return 1;
}

void func_608()
{
	SET_BIT(&(Global_1312585.f_59), 1);
}

void func_609(bool bParam0)
{
	if (bParam0)
	{
		SET_BIT(&(Global_1312585.f_59), 0);
		return;
	}
	CLEAR_BIT(&(Global_1312585.f_59), 0);
}

void func_610()
{
	Global_1312585.f_10 = HAS_NETWORK_TIME_STARTED(HAS_NETWORK_TIME_STARTED(), 86400000);
	Global_1312585.f_11 = 0xBA7F0B77D80A4EB7();
}

bool func_611(char* sParam0, char* sParam1)
{
	if (!func_537())
	{
		return 0;
	}
	if (IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (!GET_HASH_KEY(sParam0) == GET_HASH_KEY(&(Global_1312585.f_12)))
	{
		return 0;
	}
	return GET_HASH_KEY(sParam1) == GET_HASH_KEY(&(Global_1312585.f_16));
}

void func_612(char* sParam0, int iParam1)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

void func_613(char* sParam0, bool bParam1)
{
	if (IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (_GET_LENGTH_OF_STRING(sParam0) > 23)
	{
		return;
	}
	if (func_614(sParam0))
	{
		return;
	}
	func_532();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_610();
	func_609(bParam1);
	func_608();
}

bool func_614(char* sParam0)
{
	if (!func_537())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		return func_615(sParam0);
	}
	if (IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return GET_HASH_KEY(sParam0) == GET_HASH_KEY(&(Global_1312585.f_12));
}

bool func_615(char* sParam0)
{
	if (!func_537())
	{
		return 0;
	}
	if (IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return GET_HASH_KEY(sParam0) == GET_HASH_KEY(&(Global_1312585.f_16));
}

void func_616(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_607(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312585 = 16;
		Global_1312585.f_56 = iParam2;
	}
}

int func_617(char* sParam0)
{
	if (IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!func_537())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		if (_GET_LENGTH_OF_STRING(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (_GET_LENGTH_OF_STRING(sParam0) > 23)
	{
		return 0;
	}
	return func_614(sParam0);
}

void func_618()
{
}

void func_619()
{
	if (!func_511())
	{
		func_624();
	}
	else
	{
		if (DOES_BLIP_EXIST(iLocal_147))
		{
			REMOVE_BLIP(&iLocal_147);
		}
		if (DOES_BLIP_EXIST(iLocal_146))
		{
			REMOVE_BLIP(&iLocal_146);
		}
		if (iLocal_139 > -1)
		{
			if (func_44(INT_TO_PARTICIPANTINDEX(iLocal_139), 1))
			{
				func_620();
			}
		}
	}
}

void func_620()
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	func_623(&vVar0);
	if (!DOES_BLIP_EXIST(iLocal_148))
	{
		func_622(&fVar1, &fVar2, &iVar3);
		iLocal_148 = 0xCE5D0E5E315DB238(vVar0, fVar1, fVar2);
		SET_BLIP_ROTATION(iLocal_148, iVar3);
		func_621(&iLocal_148, 29);
		SET_BLIP_ALPHA(iLocal_148, 180);
		_0x75A16C3DA34F1245(iLocal_148, false);
	}
}

void func_621(int iParam0, int iParam1)
{
	int iVar0;
	
	if (DOES_BLIP_EXIST(*iParam0))
	{
		iVar0 = func_77(iParam1);
		SET_BLIP_COLOUR(*iParam0, iVar0);
	}
}

void func_622(var uParam0, var uParam1, var uParam2)
{
	if (Local_175.f_31 == 0)
	{
		*uParam0 = 696f;
		*uParam1 = 101.5f;
		*uParam2 = 16;
	}
	else if (Local_175.f_31 == 1)
	{
		*uParam0 = 817f;
		*uParam1 = 101.5f;
		*uParam2 = 149;
	}
	else if (Local_175.f_31 == 2)
	{
		*uParam0 = 280f;
		*uParam1 = 50.5f;
		*uParam2 = 205;
	}
}

void func_623(var uParam0)
{
	switch (Local_175.f_31)
	{
		case 0:
			*uParam0 = { 1392.895f, 3132.5f, 39.4141f };
			break;
		
		case 1:
			*uParam0 = { -1342.056f, -3041.475f, 10.9444f };
			break;
		
		case 2:
			*uParam0 = { 2039.747f, 4768.012f, 40.1674f };
			break;
	}
}

void func_624()
{
	if (!DOES_BLIP_EXIST(iLocal_147))
	{
		iLocal_147 = ADD_BLIP_FOR_COORD(func_560(func_34(ADD_BLIP_FOR_COORD())));
		SET_BLIP_SPRITE(iLocal_147, 495);
		SET_BLIP_FLASHES(iLocal_147, true);
		SET_BLIP_FLASH_TIMER(iLocal_147, 7000);
		SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_147, "CELL_JOUST");
		SET_BLIP_PRIORITY(iLocal_147, 9);
		Global_2531497.f_267 = 1;
		func_621(&iLocal_147, iLocal_152);
		if (!func_736(6))
		{
			FLASH_MINIMAP_DISPLAY();
			func_712(6);
		}
	}
	if (!DOES_BLIP_EXIST(iLocal_146))
	{
		iLocal_146 = ADD_BLIP_FOR_RADIUS(func_560(func_34(ADD_BLIP_FOR_RADIUS())), (func_582(func_34(ADD_BLIP_FOR_RADIUS())) / 2f));
		func_621(&iLocal_146, iLocal_152);
		SET_BLIP_ALPHA(iLocal_146, 100);
		SET_BLIP_SCALE(iLocal_146, 1.4f);
		_0x75A16C3DA34F1245(iLocal_146, false);
	}
}

int func_625()
{
	if (func_627() || func_626())
	{
		return 1;
	}
	return 0;
}

int func_626()
{
	return func_37(PLAYER_ID());
}

bool func_627()
{
	return func_35(PLAYER_ID());
}

void func_628(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (bParam5)
	{
		iVar0 = func_414(PLAYER_ID());
		Global_1675140 = iVar0;
		Global_1675140.f_1 = iParam0;
		if (func_176() != func_29())
		{
			Global_1675140.f_2 = func_711(func_176());
			Global_1675140.f_3 = func_710(func_176());
		}
		if (func_92() != func_29())
		{
			func_175(func_92(), &(Global_1675140.f_2), &(Global_1675140.f_3));
		}
		Global_1675140.f_7 = 0xF12E6CD06C73D69E();
		Global_1675140.f_28 = func_709(PLAYER_ID());
		Global_1675140.f_13 = 0;
		Global_1675140.f_14 = 0;
		if (func_281(PLAYER_ID(), 1))
		{
			Global_1675140.f_23 = func_708(func_99(1));
		}
	}
	else
	{
		iVar0 = func_63(PLAYER_ID());
	}
	if (iParam2 || func_96(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1674879 = iVar0;
		if (func_143(iVar0))
		{
			Global_1674879.f_1 = 4;
		}
		else if (func_707(iVar0))
		{
			Global_1674879.f_1 = 5;
		}
		else if (func_89(iVar0, 0))
		{
			Global_1674879.f_1 = 2;
			if (func_135(iVar0))
			{
				Global_1674879.f_1 = 3;
			}
		}
		else
		{
			Global_1674879.f_1 = 1;
		}
		if (func_176() != func_29())
		{
			Global_1674879.f_4 = func_711(func_176());
			Global_1674879.f_5 = func_710(func_176());
		}
		if (func_92() != func_29())
		{
			func_175(func_92(), &(Global_1674879.f_6), &(Global_1674879.f_7));
		}
		Global_1674879.f_9 = 0xF12E6CD06C73D69E();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1674879.f_27 = 1;
			Global_1674879.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1674879.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1674879.f_40 = func_170(iParam1);
			Global_1674879.f_41 = func_706();
			Global_1674879.f_42 = func_335(PLAYER_ID(), iParam1);
			Global_1674879.f_44 = func_705(PLAYER_ID(), iParam1);
		}
		if (!func_157() || iVar0 != 192)
		{
			Global_1674879.f_53 = 0;
		}
	}
	else if (func_133(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1674996 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1674996 = iParam0 + 1;
		}
		else
		{
			Global_1674996 = func_704(PLAYER_ID());
		}
		switch (iVar0)
		{
			case 225:
				if (func_129(PLAYER_ID()) == 0)
				{
					Global_1674996.f_1 = 0;
				}
				else
				{
					Global_1674996.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1674996.f_1 = 2;
				break;
			
			case 227:
				Global_1674996.f_1 = 3;
				break;
		}
		Global_1674996.f_21 = 1;
		Global_1674996.f_22 = 1;
		if (func_176() != func_29())
		{
			Global_1674996.f_4 = func_711(func_176());
			Global_1674996.f_5 = func_710(func_176());
		}
		if (func_92() != func_29())
		{
			func_175(func_92(), &(Global_1674996.f_4), &(Global_1674996.f_5));
		}
		Global_1674996.f_8 = 0xF12E6CD06C73D69E();
		if (iParam0 != -1)
		{
			Global_1674996.f_20 = iParam0;
		}
	}
	else if (func_104(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1674933 = iVar0;
		Global_1674879.f_1 = 1;
		if (func_176() != func_29())
		{
			Global_1674933.f_4 = func_711(func_176());
			Global_1674933.f_5 = func_710(func_176());
		}
		if (func_92() != func_29())
		{
			func_175(func_92(), &(Global_1674933.f_6), &(Global_1674933.f_7));
		}
		Global_1674933.f_9 = 0xF12E6CD06C73D69E();
		if (iParam0 != -1)
		{
			Global_1674933.f_21 = iParam0;
		}
	}
	else if (func_132(iVar0))
	{
		Global_1675040 = iVar0;
		Global_1675040.f_1 = iParam0;
		Global_1675040.f_21 = 1;
		Global_1675040.f_22 = 1;
		if (func_176() != func_29())
		{
			Global_1675040.f_4 = func_711(func_176());
			Global_1675040.f_5 = func_710(func_176());
		}
		if (func_92() != func_29())
		{
			func_175(func_92(), &(Global_1675040.f_4), &(Global_1675040.f_5));
		}
		Global_1675040.f_8 = 0xF12E6CD06C73D69E();
		if (iParam0 != -1)
		{
			Global_1675040.f_20 = iParam0;
		}
		Global_1675040.f_27 = func_702(func_49(), 5);
		Global_1675040.f_28 = func_708(func_312(PLAYER_ID()));
		Global_1675040.f_29 = func_141(6107, -1, 0);
		Global_1675040.f_30 = func_141(6103, -1, 0);
		Global_1675040.f_31 = func_141(6104, -1, 0);
		Global_1675040.f_32 = func_141(6106, -1, 0);
		Global_1675040.f_33 = func_141(6105, -1, 0);
		Global_1675040.f_34 = func_141(6108, -1, 0);
		Global_1675040.f_7 = func_700();
		Global_1675040.f_51 = func_708(bParam4);
	}
	else if (func_131(iVar0))
	{
		Global_1675094 = iVar0;
		Global_1675094.f_1 = iParam0;
		Global_1675094.f_21 = 1;
		Global_1675094.f_22 = 1;
		if (func_176() != func_29())
		{
			Global_1675094.f_4 = func_711(func_176());
			Global_1675094.f_5 = func_710(func_176());
		}
		if (func_92() != func_29())
		{
			func_175(func_92(), &(Global_1675094.f_4), &(Global_1675094.f_5));
		}
		Global_1675094.f_8 = 0xF12E6CD06C73D69E();
		if (iParam0 != -1)
		{
			Global_1675094.f_20 = iParam0;
		}
		Global_1675094.f_24 = func_141(6157, -1, 0);
		Global_1675094.f_25 = func_141(6162, -1, 0);
		Global_1675094.f_26 = func_141(6163, -1, 0);
		Global_1675094.f_27 = func_708((((func_699() || func_698()) || func_697()) || func_696(PLAYER_ID())));
		Global_1675094.f_28 = func_141(6164, -1, 0);
		Global_1675094.f_29 = func_708(func_695());
		Global_1675094.f_31 = 0;
		Global_1675094.f_30 = 0;
		Global_1675094.f_32 = 0;
		Global_1675094.f_33 = 0;
		Global_1675094.f_34 = 0;
		Global_1675094.f_16 = 0;
		Global_1675094.f_7 = func_700();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_127(func_128(PLAYER_ID()))))
	{
		Global_1675228 = iVar0;
		Global_1675228.f_1 = iParam0;
		Global_1675228.f_21 = 1;
		Global_1675228.f_22 = 1;
		Global_1675228.f_7 = func_700();
		if (func_176() != func_29())
		{
			Global_1675228.f_4 = func_711(func_176());
			Global_1675228.f_5 = func_710(func_176());
		}
		if (func_92() != func_29())
		{
			func_175(func_92(), &(Global_1675228.f_4), &(Global_1675228.f_5));
		}
		if (func_176() != -1)
		{
			Global_1675228.f_17 = func_694(func_176());
		}
		Global_1675228.f_8 = 0xF12E6CD06C73D69E();
		Global_1675228.f_28 = func_709(PLAYER_ID());
		Global_1675228.f_16 = 0;
		Global_1675228.f_24 = 0;
		Global_1675228.f_23 = 0;
		if (func_281(PLAYER_ID(), 1))
		{
			Global_1675228.f_33 = func_708(func_99(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_1675175 = iVar0;
		Global_1675175.f_1 = iParam0;
		Global_1675175.f_21 = 1;
		Global_1675175.f_22 = 1;
		Global_1675175.f_7 = func_700();
		Global_1675175.f_24 = 0;
		Global_1675175.f_23 = 0;
		Global_1675175.f_16 = 0;
		if (func_176() != func_29())
		{
			Global_1675175.f_4 = func_711(func_176());
			Global_1675175.f_5 = func_710(func_176());
		}
		Global_1675175.f_28 = func_709(PLAYER_ID());
		if (Global_1675175.f_28)
		{
			Global_1675175.f_29 = func_693(PLAYER_ID());
		}
		else
		{
			Global_1675175.f_29 = 0;
		}
		Global_1675175.f_30 = func_677(PLAYER_ID(), 4, -1);
		Global_1675175.f_31 = func_676(PLAYER_ID());
		Global_1675175.f_32 = func_708(func_675(PLAYER_ID()));
		Global_1675175.f_33 = func_708(func_674(PLAYER_ID()));
		Global_1675175.f_34 = func_708(func_673(PLAYER_ID()));
		Global_1675175.f_35 = func_708(func_672(PLAYER_ID()));
		Global_1675175.f_36 = func_671(PLAYER_ID());
		Global_1675175.f_37 = func_670(PLAYER_ID());
		Global_1675175.f_39 = func_669(PLAYER_ID());
		if (func_281(PLAYER_ID(), 1))
		{
			Global_1675175.f_41 = func_708(func_99(1));
		}
		if (func_92() != func_29())
		{
			func_175(func_92(), &(Global_1675175.f_4), &(Global_1675175.f_5));
		}
		Global_1675175.f_8 = 0xF12E6CD06C73D69E();
		Global_1675175.f_28 = func_709(PLAYER_ID());
	}
	else if (func_125(iVar0))
	{
		Global_1675312 = iVar0;
		Global_1675312.f_1 = func_129(PLAYER_ID());
		Global_1675312.f_2 = func_668();
		Global_1675312.f_3 = func_667();
		Global_1675312.f_4 = func_711(func_176());
		Global_1675312.f_5 = func_710(func_176());
		Global_1675312.f_7 = func_700();
		Global_1675312.f_8 = 0xF12E6CD06C73D69E();
		if (func_176() != -1)
		{
			Global_1675312.f_17 = func_694(func_176());
		}
		Global_1675312.f_21 = 1;
		Global_1675312.f_22 = 1;
		Global_1675312.f_25 = iParam0;
		Global_1675312.f_27 = func_708(func_666(PLAYER_ID()));
		Global_1675312.f_28 = func_664(21, -1);
	}
	else if (func_124(iVar0))
	{
		Global_1675387 = Global_786547.f_1;
		Global_1675387.f_2 = Global_786547;
		Global_1675387.f_6 = func_711(func_176());
		Global_1675387.f_7 = func_710(func_176());
		if (func_281(PLAYER_ID(), 1))
		{
			Global_1675387.f_8 = func_708(func_99(1));
		}
		if (func_176() != -1)
		{
			Global_1675387.f_9 = func_694(func_176());
		}
		Global_1675387.f_10 = func_700();
		Global_1675387.f_19 = 1;
		Global_1675387.f_20 = 1;
		Global_1675387.f_21 = 0;
		Global_1675387.f_22 = 0;
		Global_1675387.f_23 = 0;
		Global_1703065 = 0xF12E6CD06C73D69E();
	}
	else
	{
		if (func_176() != func_29())
		{
			Global_1674861 = func_711(func_176());
			Global_1674861.f_1 = func_710(func_176());
		}
		Global_1674861.f_5 = 0xF12E6CD06C73D69E();
		Global_1674861.f_13 = func_663();
		Global_1674861.f_15 = 0;
		if (func_174(1))
		{
			if (func_92() == func_176())
			{
				Global_1674861.f_15 = 1;
			}
		}
		if (func_662())
		{
			Global_1674996.f_28 = 1;
		}
		if (((((func_661() || func_660()) || func_659()) || func_658()) || func_657()) || func_656(PLAYER_ID()))
		{
			Global_1674996.f_30 = 1;
		}
		if (func_654(func_655(-1881846085)))
		{
			Global_1674996.f_32 = 1;
		}
		if (func_637(func_653(joaat("caddy"))))
		{
			Global_1674996.f_31 = 1;
		}
		if (func_636(PLAYER_ID()) || func_635(PLAYER_ID()))
		{
			Global_1674996.f_29 = 1;
		}
		if (func_634(PLAYER_ID()))
		{
			Global_1674996.f_33 = 1;
			Global_1674996.f_34 = 1;
		}
		if (func_633(PLAYER_ID()))
		{
			Global_1674996.f_36 = 1;
		}
		if (func_632(0, PLAYER_ID()) == 1)
		{
			Global_1674996.f_35 = 1;
		}
		if (func_631(PLAYER_ID(), 3, &uVar1))
		{
			Global_1674996.f_37 = 1;
		}
		if (func_631(PLAYER_ID(), 7, &uVar1))
		{
			Global_1674996.f_38 = 1;
		}
		if (func_630(PLAYER_ID()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_629(PLAYER_ID(), iVar2);
				if (func_332(PLAYER_ID(), iVar3, 0))
				{
					Global_1674996.f_39 = 1;
				}
				if (func_332(PLAYER_ID(), iVar3, 2))
				{
					Global_1674996.f_40 = 1;
				}
				if (func_332(PLAYER_ID(), iVar3, 1))
				{
					Global_1674996.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_629(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_327(Global_1590446[iParam0 /*871*/].f_273.f_179[iParam1 /*12*/]))
	{
		uVar0 = Global_1590446[iParam0 /*871*/].f_273.f_179[iParam1 /*12*/];
	}
	return uVar0;
}

int func_630(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_631(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 != func_29())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_632(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_632(int iParam0, int iParam1)
{
	if (iParam1 == func_29())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 0))
			{
				return 3;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 3))
			{
				return 2;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 6))
			{
				return 4;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 9))
			{
				return 1;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 12))
			{
				return 7;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 15))
			{
				return 5;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 18))
			{
				return 6;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 21))
			{
				return 0;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 1))
			{
				return 3;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 4))
			{
				return 2;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 7))
			{
				return 4;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 10))
			{
				return 1;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 13))
			{
				return 7;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 16))
			{
				return 5;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 19))
			{
				return 6;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 22))
			{
				return 0;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 2))
			{
				return 3;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 5))
			{
				return 2;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 8))
			{
				return 4;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 11))
			{
				return 1;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 14))
			{
				return 7;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 17))
			{
				return 5;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 20))
			{
				return 6;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 23))
			{
				return 0;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

bool func_633(int iParam0)
{
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 7);
}

bool func_634(int iParam0)
{
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 8);
}

bool func_635(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 11);
}

bool func_636(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 10);
}

int func_637(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_664(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_651(11));
		func_650(iVar1, &iVar0, 1);
		iVar2 = func_664(func_639(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_141(func_638(4, iVar0), -1, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_638(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1795;
				
				case 15:
					return 1802;
				
				case 16:
					return 1809;
				
				case 17:
					return 1816;
				
				case 18:
					return 1823;
				
				case 19:
					return 1830;
				
				case 20:
					return 1837;
				
				case 21:
					return 1844;
				
				case 22:
					return 1851;
				
				case 23:
					return 1858;
				
				case 24:
					return 1864;
				
				case 25:
					return 1870;
				
				case 26:
					return 2165;
				
				case 27:
					return 2172;
				
				case 28:
					return 2179;
				
				case 29:
					return 2186;
				
				case 30:
					return 2193;
				
				case 31:
					return 2200;
				
				case 32:
					return 2207;
				
				case 33:
					return 2214;
				
				case 34:
					return 2221;
				
				case 35:
					return 2228;
				
				case 36:
					return 2235;
				
				case 37:
					return 2241;
				
				case 38:
					return 2247;
				
				case 39:
					return 2828;
				
				case 40:
					return 2835;
				
				case 41:
					return 2842;
				
				case 42:
					return 2849;
				
				case 43:
					return 2856;
				
				case 44:
					return 2863;
				
				case 45:
					return 2870;
				
				case 46:
					return 2877;
				
				case 47:
					return 2884;
				
				case 48:
					return 2891;
				
				case 49:
					return 2898;
				
				case 50:
					return 2904;
				
				case 51:
					return 2910;
				
				case 52:
					return 2952;
				
				case 53:
					return 2959;
				
				case 54:
					return 2966;
				
				case 55:
					return 2973;
				
				case 56:
					return 2980;
				
				case 57:
					return 2987;
				
				case 58:
					return 2994;
				
				case 59:
					return 3001;
				
				case 60:
					return 3008;
				
				case 61:
					return 3015;
				
				case 62:
					return 3022;
				
				case 63:
					return 3028;
				
				case 64:
					return 3034;
				
				case 65:
					return 3235;
				
				case 66:
					return 3243;
				
				case 67:
					return 3251;
				
				case 68:
					return 3259;
				
				case 69:
					return 3267;
				
				case 70:
					return 3275;
				
				case 71:
					return 3283;
				
				case 72:
					return 3291;
				
				case 73:
					return 3299;
				
				case 74:
					return 3307;
				
				case 75:
					return 3315;
				
				case 76:
					return 3323;
				
				case 77:
					return 3331;
				
				case 78:
					return 3339;
				
				case 79:
					return 3347;
				
				case 80:
					return 3355;
				
				case 81:
					return 3363;
				
				case 82:
					return 3371;
				
				case 83:
					return 3379;
				
				case 84:
					return 3387;
				
				case 85:
					return 3395;
				
				case 86:
					return 3402;
				
				case 87:
					return 3409;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4031;
				
				case 89:
					return 4039;
				
				case 90:
					return 4047;
				
				case 91:
					return 4055;
				
				case 92:
					return 4063;
				
				case 93:
					return 4071;
				
				case 94:
					return 4079;
				
				case 95:
					return 4087;
				
				case 96:
					return 4095;
				
				case 97:
					return 4103;
				
				case 98:
					return 4111;
				
				case 99:
					return 4119;
				
				case 100:
					return 4127;
				
				case 101:
					return 4135;
				
				case 102:
					return 4143;
				
				case 103:
					return 4151;
				
				case 104:
					return 4159;
				
				case 105:
					return 4167;
				
				case 106:
					return 4175;
				
				case 107:
					return 4183;
				
				case 108:
					return 4191;
				
				case 109:
					return 4199;
				
				case 110:
					return 4207;
				
				case 111:
					return 4215;
				
				case 112:
					return 4223;
				
				case 113:
					return 4231;
				
				case 114:
					return 4239;
				
				case 115:
					return 4247;
				
				case 116:
					return 4255;
				
				case 117:
					return 4263;
				
				case 118:
					return 4271;
				
				case 119:
					return 4279;
				
				case 120:
					return 4287;
				
				case 121:
					return 4295;
				
				case 122:
					return 4303;
				
				case 123:
					return 4311;
				
				case 124:
					return 4319;
				
				case 125:
					return 4327;
				
				case 126:
					return 4335;
				
				case 127:
					return 4343;
				
				case 128:
					return 4351;
				
				case 129:
					return 4359;
				
				case 130:
					return 4367;
				
				case 131:
					return 4375;
				
				case 132:
					return 4383;
				
				case 133:
					return 4391;
				
				case 134:
					return 4399;
				
				case 135:
					return 4407;
				
				case 136:
					return 4415;
				
				case 137:
					return 4423;
				
				case 138:
					return 4431;
				
				case 139:
					return 4439;
				
				case 140:
					return 4447;
				
				case 141:
					return 4455;
				
				case 142:
					return 4463;
				
				case 143:
					return 4471;
				
				case 144:
					return 4479;
				
				case 145:
					return 4487;
				
				case 146:
					return 4495;
				
				case 147:
					return 4503;
				
				case 148:
					return 4511;
				
				case 149:
					return 4519;
				
				case 150:
					return 4527;
				
				case 151:
					return 4535;
				
				case 152:
					return 4543;
				
				case 153:
					return 4551;
				
				case 154:
					return 4559;
				
				case 155:
					return 4567;
				
				case 156:
					return 4575;
				
				case 157:
					return 4583;
				
				case 158:
					return 5476;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5925;
				
				case 160:
					return 5932;
				
				case 161:
					return 5939;
				
				case 162:
					return 5946;
				
				case 163:
					return 5953;
				
				case 164:
					return 5960;
				
				case 165:
					return 5967;
				
				case 166:
					return 5974;
				
				case 167:
					return 5981;
				
				case 168:
					return 5988;
				
				case 169:
					return 5995;
				
				case 170:
					return 6002;
				
				case 171:
					return 6009;
				
				case 172:
					return 6016;
				
				case 173:
					return 6023;
				
				case 174:
					return 6030;
				
				case 175:
					return 6037;
				
				case 176:
					return 6044;
				
				case 177:
					return 6051;
				
				case 178:
					return 6058;
				
				case 179:
					return 6065;
				
				case 180:
					return 6072;
				
				case 181:
					return 6079;
				
				case 182:
					return 6086;
				
				case 183:
					return 6093;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6170;
				
				case 185:
					return 6177;
				
				case 186:
					return 6184;
				
				case 187:
					return 6191;
				
				case 188:
					return 6198;
				
				case 189:
					return 6205;
				
				case 190:
					return 6212;
				
				case 191:
					return 6219;
				
				case 192:
					return 6226;
				
				case 193:
					return 6233;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6567;
				
				case 195:
					return 6574;
				
				case 196:
					return 6581;
				
				case 197:
					return 6588;
				
				case 198:
					return 6595;
				
				case 199:
					return 6602;
				
				case 200:
					return 6609;
				
				case 201:
					return 6616;
				
				case 202:
					return 6623;
				
				case 203:
					return 6630;
				
				case 204:
					return 6637;
				
				case 205:
					return 6644;
				
				case 206:
					return 6651;
				
				case 207:
					return 6658;
				
				case 208:
					return 6665;
				
				case 209:
					return 6672;
				
				case 210:
					return 6679;
				
				case 211:
					return 6686;
				
				case 212:
					return 6693;
				
				case 213:
					return 6700;
				
				case 214:
					return 6707;
				
				case 215:
					return 6714;
				
				case 216:
					return 6721;
				
				case 217:
					return 6728;
				
				case 218:
					return 6735;
				
				case 219:
					return 6742;
				
				case 220:
					return 6749;
				
				case 221:
					return 6756;
				
				case 222:
					return 6763;
				
				case 223:
					return 6770;
				
				case 224:
					return 6777;
				
				case 225:
					return 6784;
				
				case 226:
					return 6791;
				
				case 227:
					return 6798;
				
				case 228:
					return 6805;
				
				case 229:
					return 6812;
				
				case 230:
					return 6819;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7289;
				
				case 232:
					return 7296;
				
				case 233:
					return 7303;
				
				case 234:
					return 7310;
				
				case 235:
					return 7317;
				
				case 236:
					return 7324;
				
				case 237:
					return 7331;
				
				case 238:
					return 7338;
				
				case 239:
					return 7345;
				
				case 240:
					return 7352;
				
				case 241:
					return 7359;
				
				case 242:
					return 7366;
				
				case 243:
					return 7373;
				
				case 244:
					return 7380;
				
				case 245:
					return 7387;
				
				case 246:
					return 7394;
				
				case 247:
					return 7401;
				
				case 248:
					return 7408;
				
				case 249:
					return 7415;
				
				case 250:
					return 7422;
				
				case 251:
					return 7429;
				
				case 252:
					return 7436;
				
				case 253:
					return 7443;
				
				case 254:
					return 7450;
				
				case 255:
					return 7457;
				
				case 256:
					return 7464;
				
				case 257:
					return 7471;
				
				case 258:
					return 7478;
				
				case 259:
					return 7485;
				
				case 260:
					return 7492;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8012;
				
				case 262:
					return 8019;
				
				case 263:
					return 8026;
				
				case 264:
					return 8033;
				
				case 265:
					return 8040;
				
				case 266:
					return 8047;
				
				case 267:
					return 8054;
				
				case 268:
					return 8061;
				
				case 269:
					return 8068;
				
				case 270:
					return 8075;
				
				case 271:
					return 8536;
				
				case 272:
					return 8543;
				
				case 273:
					return 8550;
				
				case 274:
					return 8557;
				
				case 275:
					return 8564;
				
				case 276:
					return 8571;
				
				case 277:
					return 8578;
				
				case 278:
					return 8585;
				
				case 279:
					return 8592;
				
				case 280:
					return 8599;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
				case 39:
					return 2829;
				
				case 40:
					return 2836;
				
				case 41:
					return 2843;
				
				case 42:
					return 2850;
				
				case 43:
					return 2857;
				
				case 44:
					return 2864;
				
				case 45:
					return 2871;
				
				case 46:
					return 2878;
				
				case 47:
					return 2885;
				
				case 48:
					return 2892;
				
				case 49:
					return 2899;
				
				case 50:
					return 2905;
				
				case 51:
					return 2911;
				
				case 52:
					return 2953;
				
				case 53:
					return 2960;
				
				case 54:
					return 2967;
				
				case 55:
					return 2974;
				
				case 56:
					return 2981;
				
				case 57:
					return 2988;
				
				case 58:
					return 2995;
				
				case 59:
					return 3002;
				
				case 60:
					return 3009;
				
				case 61:
					return 3016;
				
				case 62:
					return 3023;
				
				case 63:
					return 3029;
				
				case 64:
					return 3035;
				
				case 65:
					return 3236;
				
				case 66:
					return 3244;
				
				case 67:
					return 3252;
				
				case 68:
					return 3260;
				
				case 69:
					return 3268;
				
				case 70:
					return 3276;
				
				case 71:
					return 3284;
				
				case 72:
					return 3292;
				
				case 73:
					return 3300;
				
				case 74:
					return 3308;
				
				case 75:
					return 3316;
				
				case 76:
					return 3324;
				
				case 77:
					return 3332;
				
				case 78:
					return 3340;
				
				case 79:
					return 3348;
				
				case 80:
					return 3356;
				
				case 81:
					return 3364;
				
				case 82:
					return 3372;
				
				case 83:
					return 3380;
				
				case 84:
					return 3388;
				
				case 85:
					return 3396;
				
				case 86:
					return 3403;
				
				case 87:
					return 3410;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4032;
				
				case 89:
					return 4040;
				
				case 90:
					return 4048;
				
				case 91:
					return 4056;
				
				case 92:
					return 4064;
				
				case 93:
					return 4072;
				
				case 94:
					return 4080;
				
				case 95:
					return 4088;
				
				case 96:
					return 4096;
				
				case 97:
					return 4104;
				
				case 98:
					return 4112;
				
				case 99:
					return 4120;
				
				case 100:
					return 4128;
				
				case 101:
					return 4136;
				
				case 102:
					return 4144;
				
				case 103:
					return 4152;
				
				case 104:
					return 4160;
				
				case 105:
					return 4168;
				
				case 106:
					return 4176;
				
				case 107:
					return 4184;
				
				case 108:
					return 4192;
				
				case 109:
					return 4200;
				
				case 110:
					return 4208;
				
				case 111:
					return 4216;
				
				case 112:
					return 4224;
				
				case 113:
					return 4232;
				
				case 114:
					return 4240;
				
				case 115:
					return 4248;
				
				case 116:
					return 4256;
				
				case 117:
					return 4264;
				
				case 118:
					return 4272;
				
				case 119:
					return 4280;
				
				case 120:
					return 4288;
				
				case 121:
					return 4296;
				
				case 122:
					return 4304;
				
				case 123:
					return 4312;
				
				case 124:
					return 4320;
				
				case 125:
					return 4328;
				
				case 126:
					return 4336;
				
				case 127:
					return 4344;
				
				case 128:
					return 4352;
				
				case 129:
					return 4360;
				
				case 130:
					return 4368;
				
				case 131:
					return 4376;
				
				case 132:
					return 4384;
				
				case 133:
					return 4392;
				
				case 134:
					return 4400;
				
				case 135:
					return 4408;
				
				case 136:
					return 4416;
				
				case 137:
					return 4424;
				
				case 138:
					return 4432;
				
				case 139:
					return 4440;
				
				case 140:
					return 4448;
				
				case 141:
					return 4456;
				
				case 142:
					return 4464;
				
				case 143:
					return 4472;
				
				case 144:
					return 4480;
				
				case 145:
					return 4488;
				
				case 146:
					return 4496;
				
				case 147:
					return 4504;
				
				case 148:
					return 4512;
				
				case 149:
					return 4520;
				
				case 150:
					return 4528;
				
				case 151:
					return 4536;
				
				case 152:
					return 4544;
				
				case 153:
					return 4552;
				
				case 154:
					return 4560;
				
				case 155:
					return 4568;
				
				case 156:
					return 4576;
				
				case 157:
					return 4584;
				
				case 158:
					return 5477;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5926;
				
				case 160:
					return 5933;
				
				case 161:
					return 5940;
				
				case 162:
					return 5947;
				
				case 163:
					return 5954;
				
				case 164:
					return 5961;
				
				case 165:
					return 5968;
				
				case 166:
					return 5975;
				
				case 167:
					return 5982;
				
				case 168:
					return 5989;
				
				case 169:
					return 5996;
				
				case 170:
					return 6003;
				
				case 171:
					return 6010;
				
				case 172:
					return 6017;
				
				case 173:
					return 6024;
				
				case 174:
					return 6031;
				
				case 175:
					return 6038;
				
				case 176:
					return 6045;
				
				case 177:
					return 6052;
				
				case 178:
					return 6059;
				
				case 179:
					return 6066;
				
				case 180:
					return 6073;
				
				case 181:
					return 6080;
				
				case 182:
					return 6087;
				
				case 183:
					return 6094;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6171;
				
				case 185:
					return 6178;
				
				case 186:
					return 6185;
				
				case 187:
					return 6192;
				
				case 188:
					return 6199;
				
				case 189:
					return 6206;
				
				case 190:
					return 6213;
				
				case 191:
					return 6220;
				
				case 192:
					return 6227;
				
				case 193:
					return 6234;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6568;
				
				case 195:
					return 6575;
				
				case 196:
					return 6582;
				
				case 197:
					return 6589;
				
				case 198:
					return 6596;
				
				case 199:
					return 6603;
				
				case 200:
					return 6610;
				
				case 201:
					return 6617;
				
				case 202:
					return 6624;
				
				case 203:
					return 6631;
				
				case 204:
					return 6638;
				
				case 205:
					return 6645;
				
				case 206:
					return 6652;
				
				case 207:
					return 6659;
				
				case 208:
					return 6666;
				
				case 209:
					return 6673;
				
				case 210:
					return 6680;
				
				case 211:
					return 6687;
				
				case 212:
					return 6694;
				
				case 213:
					return 6701;
				
				case 214:
					return 6708;
				
				case 215:
					return 6715;
				
				case 216:
					return 6722;
				
				case 217:
					return 6729;
				
				case 218:
					return 6736;
				
				case 219:
					return 6743;
				
				case 220:
					return 6750;
				
				case 221:
					return 6757;
				
				case 222:
					return 6764;
				
				case 223:
					return 6771;
				
				case 224:
					return 6778;
				
				case 225:
					return 6785;
				
				case 226:
					return 6792;
				
				case 227:
					return 6799;
				
				case 228:
					return 6806;
				
				case 229:
					return 6813;
				
				case 230:
					return 6820;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7290;
				
				case 232:
					return 7297;
				
				case 233:
					return 7304;
				
				case 234:
					return 7311;
				
				case 235:
					return 7318;
				
				case 236:
					return 7325;
				
				case 237:
					return 7332;
				
				case 238:
					return 7339;
				
				case 239:
					return 7346;
				
				case 240:
					return 7353;
				
				case 241:
					return 7360;
				
				case 242:
					return 7367;
				
				case 243:
					return 7374;
				
				case 244:
					return 7381;
				
				case 245:
					return 7388;
				
				case 246:
					return 7395;
				
				case 247:
					return 7402;
				
				case 248:
					return 7409;
				
				case 249:
					return 7416;
				
				case 250:
					return 7423;
				
				case 251:
					return 7430;
				
				case 252:
					return 7437;
				
				case 253:
					return 7444;
				
				case 254:
					return 7451;
				
				case 255:
					return 7458;
				
				case 256:
					return 7465;
				
				case 257:
					return 7472;
				
				case 258:
					return 7479;
				
				case 259:
					return 7486;
				
				case 260:
					return 7493;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8013;
				
				case 262:
					return 8020;
				
				case 263:
					return 8027;
				
				case 264:
					return 8034;
				
				case 265:
					return 8041;
				
				case 266:
					return 8048;
				
				case 267:
					return 8055;
				
				case 268:
					return 8062;
				
				case 269:
					return 8069;
				
				case 270:
					return 8076;
				
				case 271:
					return 8537;
				
				case 272:
					return 8544;
				
				case 273:
					return 8551;
				
				case 274:
					return 8558;
				
				case 275:
					return 8565;
				
				case 276:
					return 8572;
				
				case 277:
					return 8579;
				
				case 278:
					return 8586;
				
				case 279:
					return 8593;
				
				case 280:
					return 8600;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2830;
				
				case 40:
					return 2837;
				
				case 41:
					return 2844;
				
				case 42:
					return 2851;
				
				case 43:
					return 2858;
				
				case 44:
					return 2865;
				
				case 45:
					return 2872;
				
				case 46:
					return 2879;
				
				case 47:
					return 2886;
				
				case 48:
					return 2893;
				
				case 49:
					return 2900;
				
				case 50:
					return 2906;
				
				case 51:
					return 2912;
				
				case 52:
					return 2954;
				
				case 53:
					return 2961;
				
				case 54:
					return 2968;
				
				case 55:
					return 2975;
				
				case 56:
					return 2982;
				
				case 57:
					return 2989;
				
				case 58:
					return 2996;
				
				case 59:
					return 3003;
				
				case 60:
					return 3010;
				
				case 61:
					return 3017;
				
				case 62:
					return 3024;
				
				case 63:
					return 3030;
				
				case 64:
					return 3036;
				
				case 65:
					return 3237;
				
				case 66:
					return 3245;
				
				case 67:
					return 3253;
				
				case 68:
					return 3261;
				
				case 69:
					return 3269;
				
				case 70:
					return 3277;
				
				case 71:
					return 3285;
				
				case 72:
					return 3293;
				
				case 73:
					return 3301;
				
				case 74:
					return 3309;
				
				case 75:
					return 3317;
				
				case 76:
					return 3325;
				
				case 77:
					return 3333;
				
				case 78:
					return 3341;
				
				case 79:
					return 3349;
				
				case 80:
					return 3357;
				
				case 81:
					return 3365;
				
				case 82:
					return 3373;
				
				case 83:
					return 3381;
				
				case 84:
					return 3389;
				
				case 85:
					return 3397;
				
				case 86:
					return 3404;
				
				case 87:
					return 3411;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4033;
				
				case 89:
					return 4041;
				
				case 90:
					return 4049;
				
				case 91:
					return 4057;
				
				case 92:
					return 4065;
				
				case 93:
					return 4073;
				
				case 94:
					return 4081;
				
				case 95:
					return 4089;
				
				case 96:
					return 4097;
				
				case 97:
					return 4105;
				
				case 98:
					return 4113;
				
				case 99:
					return 4121;
				
				case 100:
					return 4129;
				
				case 101:
					return 4137;
				
				case 102:
					return 4145;
				
				case 103:
					return 4153;
				
				case 104:
					return 4161;
				
				case 105:
					return 4169;
				
				case 106:
					return 4177;
				
				case 107:
					return 4185;
				
				case 108:
					return 4193;
				
				case 109:
					return 4201;
				
				case 110:
					return 4209;
				
				case 111:
					return 4217;
				
				case 112:
					return 4225;
				
				case 113:
					return 4233;
				
				case 114:
					return 4241;
				
				case 115:
					return 4249;
				
				case 116:
					return 4257;
				
				case 117:
					return 4265;
				
				case 118:
					return 4273;
				
				case 119:
					return 4281;
				
				case 120:
					return 4289;
				
				case 121:
					return 4297;
				
				case 122:
					return 4305;
				
				case 123:
					return 4313;
				
				case 124:
					return 4321;
				
				case 125:
					return 4329;
				
				case 126:
					return 4337;
				
				case 127:
					return 4345;
				
				case 128:
					return 4353;
				
				case 129:
					return 4361;
				
				case 130:
					return 4369;
				
				case 131:
					return 4377;
				
				case 132:
					return 4385;
				
				case 133:
					return 4393;
				
				case 134:
					return 4401;
				
				case 135:
					return 4409;
				
				case 136:
					return 4417;
				
				case 137:
					return 4425;
				
				case 138:
					return 4433;
				
				case 139:
					return 4441;
				
				case 140:
					return 4449;
				
				case 141:
					return 4457;
				
				case 142:
					return 4465;
				
				case 143:
					return 4473;
				
				case 144:
					return 4481;
				
				case 145:
					return 4489;
				
				case 146:
					return 4497;
				
				case 147:
					return 4505;
				
				case 148:
					return 4513;
				
				case 149:
					return 4521;
				
				case 150:
					return 4529;
				
				case 151:
					return 4537;
				
				case 152:
					return 4545;
				
				case 153:
					return 4553;
				
				case 154:
					return 4561;
				
				case 155:
					return 4569;
				
				case 156:
					return 4577;
				
				case 157:
					return 4585;
				
				case 158:
					return 5478;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5927;
				
				case 160:
					return 5934;
				
				case 161:
					return 5941;
				
				case 162:
					return 5948;
				
				case 163:
					return 5955;
				
				case 164:
					return 5962;
				
				case 165:
					return 5969;
				
				case 166:
					return 5976;
				
				case 167:
					return 5983;
				
				case 168:
					return 5990;
				
				case 169:
					return 5997;
				
				case 170:
					return 6004;
				
				case 171:
					return 6011;
				
				case 172:
					return 6018;
				
				case 173:
					return 6025;
				
				case 174:
					return 6032;
				
				case 175:
					return 6039;
				
				case 176:
					return 6046;
				
				case 177:
					return 6053;
				
				case 178:
					return 6060;
				
				case 179:
					return 6067;
				
				case 180:
					return 6074;
				
				case 181:
					return 6081;
				
				case 182:
					return 6088;
				
				case 183:
					return 6095;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6172;
				
				case 185:
					return 6179;
				
				case 186:
					return 6186;
				
				case 187:
					return 6193;
				
				case 188:
					return 6200;
				
				case 189:
					return 6207;
				
				case 190:
					return 6214;
				
				case 191:
					return 6221;
				
				case 192:
					return 6228;
				
				case 193:
					return 6235;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6569;
				
				case 195:
					return 6576;
				
				case 196:
					return 6583;
				
				case 197:
					return 6590;
				
				case 198:
					return 6597;
				
				case 199:
					return 6604;
				
				case 200:
					return 6611;
				
				case 201:
					return 6618;
				
				case 202:
					return 6625;
				
				case 203:
					return 6632;
				
				case 204:
					return 6639;
				
				case 205:
					return 6646;
				
				case 206:
					return 6653;
				
				case 207:
					return 6660;
				
				case 208:
					return 6667;
				
				case 209:
					return 6674;
				
				case 210:
					return 6681;
				
				case 211:
					return 6688;
				
				case 212:
					return 6695;
				
				case 213:
					return 6702;
				
				case 214:
					return 6709;
				
				case 215:
					return 6716;
				
				case 216:
					return 6723;
				
				case 217:
					return 6730;
				
				case 218:
					return 6737;
				
				case 219:
					return 6744;
				
				case 220:
					return 6751;
				
				case 221:
					return 6758;
				
				case 222:
					return 6765;
				
				case 223:
					return 6772;
				
				case 224:
					return 6779;
				
				case 225:
					return 6786;
				
				case 226:
					return 6793;
				
				case 227:
					return 6800;
				
				case 228:
					return 6807;
				
				case 229:
					return 6814;
				
				case 230:
					return 6821;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7291;
				
				case 232:
					return 7298;
				
				case 233:
					return 7305;
				
				case 234:
					return 7312;
				
				case 235:
					return 7319;
				
				case 236:
					return 7326;
				
				case 237:
					return 7333;
				
				case 238:
					return 7340;
				
				case 239:
					return 7347;
				
				case 240:
					return 7354;
				
				case 241:
					return 7361;
				
				case 242:
					return 7368;
				
				case 243:
					return 7375;
				
				case 244:
					return 7382;
				
				case 245:
					return 7389;
				
				case 246:
					return 7396;
				
				case 247:
					return 7403;
				
				case 248:
					return 7410;
				
				case 249:
					return 7417;
				
				case 250:
					return 7424;
				
				case 251:
					return 7431;
				
				case 252:
					return 7438;
				
				case 253:
					return 7445;
				
				case 254:
					return 7452;
				
				case 255:
					return 7459;
				
				case 256:
					return 7466;
				
				case 257:
					return 7473;
				
				case 258:
					return 7480;
				
				case 259:
					return 7487;
				
				case 260:
					return 7494;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8014;
				
				case 262:
					return 8021;
				
				case 263:
					return 8028;
				
				case 264:
					return 8035;
				
				case 265:
					return 8042;
				
				case 266:
					return 8049;
				
				case 267:
					return 8056;
				
				case 268:
					return 8063;
				
				case 269:
					return 8070;
				
				case 270:
					return 8077;
				
				case 271:
					return 8538;
				
				case 272:
					return 8545;
				
				case 273:
					return 8552;
				
				case 274:
					return 8559;
				
				case 275:
					return 8566;
				
				case 276:
					return 8573;
				
				case 277:
					return 8580;
				
				case 278:
					return 8587;
				
				case 279:
					return 8594;
				
				case 280:
					return 8601;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 10:
					return 1702;
				
				case 11:
					return 1708;
				
				case 12:
					return 1714;
				
				case 13:
					return 1720;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 23:
					return 1861;
				
				case 24:
					return 1867;
				
				case 25:
					return 1873;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 36:
					return 2238;
				
				case 37:
					return 2244;
				
				case 38:
					return 2250;
				
				case 39:
					return 2831;
				
				case 40:
					return 2838;
				
				case 41:
					return 2845;
				
				case 42:
					return 2852;
				
				case 43:
					return 2859;
				
				case 44:
					return 2866;
				
				case 45:
					return 2873;
				
				case 46:
					return 2880;
				
				case 47:
					return 2887;
				
				case 48:
					return 2894;
				
				case 49:
					return 2901;
				
				case 50:
					return 2907;
				
				case 51:
					return 2913;
				
				case 52:
					return 2955;
				
				case 53:
					return 2962;
				
				case 54:
					return 2969;
				
				case 55:
					return 2976;
				
				case 56:
					return 2983;
				
				case 57:
					return 2990;
				
				case 58:
					return 2997;
				
				case 59:
					return 3004;
				
				case 60:
					return 3011;
				
				case 61:
					return 3018;
				
				case 62:
					return 3025;
				
				case 63:
					return 3031;
				
				case 64:
					return 3037;
				
				case 65:
					return 3238;
				
				case 66:
					return 3246;
				
				case 67:
					return 3254;
				
				case 68:
					return 3262;
				
				case 69:
					return 3270;
				
				case 70:
					return 3278;
				
				case 71:
					return 3286;
				
				case 72:
					return 3294;
				
				case 73:
					return 3302;
				
				case 74:
					return 3310;
				
				case 75:
					return 3318;
				
				case 76:
					return 3326;
				
				case 77:
					return 3334;
				
				case 78:
					return 3342;
				
				case 79:
					return 3350;
				
				case 80:
					return 3358;
				
				case 81:
					return 3366;
				
				case 82:
					return 3374;
				
				case 83:
					return 3382;
				
				case 84:
					return 3390;
				
				case 85:
					return 3398;
				
				case 86:
					return 3405;
				
				case 87:
					return 3412;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				
				case 89:
					return 4042;
				
				case 90:
					return 4050;
				
				case 91:
					return 4058;
				
				case 92:
					return 4066;
				
				case 93:
					return 4074;
				
				case 94:
					return 4082;
				
				case 95:
					return 4090;
				
				case 96:
					return 4098;
				
				case 97:
					return 4106;
				
				case 98:
					return 4114;
				
				case 99:
					return 4122;
				
				case 100:
					return 4130;
				
				case 101:
					return 4138;
				
				case 102:
					return 4146;
				
				case 103:
					return 4154;
				
				case 104:
					return 4162;
				
				case 105:
					return 4170;
				
				case 106:
					return 4178;
				
				case 107:
					return 4186;
				
				case 108:
					return 4194;
				
				case 109:
					return 4202;
				
				case 110:
					return 4210;
				
				case 111:
					return 4218;
				
				case 112:
					return 4226;
				
				case 113:
					return 4234;
				
				case 114:
					return 4242;
				
				case 115:
					return 4250;
				
				case 116:
					return 4258;
				
				case 117:
					return 4266;
				
				case 118:
					return 4274;
				
				case 119:
					return 4282;
				
				case 120:
					return 4290;
				
				case 121:
					return 4298;
				
				case 122:
					return 4306;
				
				case 123:
					return 4314;
				
				case 124:
					return 4322;
				
				case 125:
					return 4330;
				
				case 126:
					return 4338;
				
				case 127:
					return 4346;
				
				case 128:
					return 4354;
				
				case 129:
					return 4362;
				
				case 130:
					return 4370;
				
				case 131:
					return 4378;
				
				case 132:
					return 4386;
				
				case 133:
					return 4394;
				
				case 134:
					return 4402;
				
				case 135:
					return 4410;
				
				case 136:
					return 4418;
				
				case 137:
					return 4426;
				
				case 138:
					return 4434;
				
				case 139:
					return 4442;
				
				case 140:
					return 4450;
				
				case 141:
					return 4458;
				
				case 142:
					return 4466;
				
				case 143:
					return 4474;
				
				case 144:
					return 4482;
				
				case 145:
					return 4490;
				
				case 146:
					return 4498;
				
				case 147:
					return 4506;
				
				case 148:
					return 4514;
				
				case 149:
					return 4522;
				
				case 150:
					return 4530;
				
				case 151:
					return 4538;
				
				case 152:
					return 4546;
				
				case 153:
					return 4554;
				
				case 154:
					return 4562;
				
				case 155:
					return 4570;
				
				case 156:
					return 4578;
				
				case 157:
					return 4586;
				
				case 158:
					return 5479;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5928;
				
				case 160:
					return 5935;
				
				case 161:
					return 5942;
				
				case 162:
					return 5949;
				
				case 163:
					return 5956;
				
				case 164:
					return 5963;
				
				case 165:
					return 5970;
				
				case 166:
					return 5977;
				
				case 167:
					return 5984;
				
				case 168:
					return 5991;
				
				case 169:
					return 5998;
				
				case 170:
					return 6005;
				
				case 171:
					return 6012;
				
				case 172:
					return 6019;
				
				case 173:
					return 6026;
				
				case 174:
					return 6033;
				
				case 175:
					return 6040;
				
				case 176:
					return 6047;
				
				case 177:
					return 6054;
				
				case 178:
					return 6061;
				
				case 179:
					return 6068;
				
				case 180:
					return 6075;
				
				case 181:
					return 6082;
				
				case 182:
					return 6089;
				
				case 183:
					return 6096;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				
				case 185:
					return 6180;
				
				case 186:
					return 6187;
				
				case 187:
					return 6194;
				
				case 188:
					return 6201;
				
				case 189:
					return 6208;
				
				case 190:
					return 6215;
				
				case 191:
					return 6222;
				
				case 192:
					return 6229;
				
				case 193:
					return 6236;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				
				case 195:
					return 6577;
				
				case 196:
					return 6584;
				
				case 197:
					return 6591;
				
				case 198:
					return 6598;
				
				case 199:
					return 6605;
				
				case 200:
					return 6612;
				
				case 201:
					return 6619;
				
				case 202:
					return 6626;
				
				case 203:
					return 6633;
				
				case 204:
					return 6640;
				
				case 205:
					return 6647;
				
				case 206:
					return 6654;
				
				case 207:
					return 6661;
				
				case 208:
					return 6668;
				
				case 209:
					return 6675;
				
				case 210:
					return 6682;
				
				case 211:
					return 6689;
				
				case 212:
					return 6696;
				
				case 213:
					return 6703;
				
				case 214:
					return 6710;
				
				case 215:
					return 6717;
				
				case 216:
					return 6724;
				
				case 217:
					return 6731;
				
				case 218:
					return 6738;
				
				case 219:
					return 6745;
				
				case 220:
					return 6752;
				
				case 221:
					return 6759;
				
				case 222:
					return 6766;
				
				case 223:
					return 6773;
				
				case 224:
					return 6780;
				
				case 225:
					return 6787;
				
				case 226:
					return 6794;
				
				case 227:
					return 6801;
				
				case 228:
					return 6808;
				
				case 229:
					return 6815;
				
				case 230:
					return 6822;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				
				case 232:
					return 7299;
				
				case 233:
					return 7306;
				
				case 234:
					return 7313;
				
				case 235:
					return 7320;
				
				case 236:
					return 7327;
				
				case 237:
					return 7334;
				
				case 238:
					return 7341;
				
				case 239:
					return 7348;
				
				case 240:
					return 7355;
				
				case 241:
					return 7362;
				
				case 242:
					return 7369;
				
				case 243:
					return 7376;
				
				case 244:
					return 7383;
				
				case 245:
					return 7390;
				
				case 246:
					return 7397;
				
				case 247:
					return 7404;
				
				case 248:
					return 7411;
				
				case 249:
					return 7418;
				
				case 250:
					return 7425;
				
				case 251:
					return 7432;
				
				case 252:
					return 7439;
				
				case 253:
					return 7446;
				
				case 254:
					return 7453;
				
				case 255:
					return 7460;
				
				case 256:
					return 7467;
				
				case 257:
					return 7474;
				
				case 258:
					return 7481;
				
				case 259:
					return 7488;
				
				case 260:
					return 7495;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8015;
				
				case 262:
					return 8022;
				
				case 263:
					return 8029;
				
				case 264:
					return 8036;
				
				case 265:
					return 8043;
				
				case 266:
					return 8050;
				
				case 267:
					return 8057;
				
				case 268:
					return 8064;
				
				case 269:
					return 8071;
				
				case 270:
					return 8078;
				
				case 271:
					return 8539;
				
				case 272:
					return 8546;
				
				case 273:
					return 8553;
				
				case 274:
					return 8560;
				
				case 275:
					return 8567;
				
				case 276:
					return 8574;
				
				case 277:
					return 8581;
				
				case 278:
					return 8588;
				
				case 279:
					return 8595;
				
				case 280:
					return 8602;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1633;
				
				case 1:
					return 1640;
				
				case 2:
					return 1647;
				
				case 3:
					return 1654;
				
				case 4:
					return 1661;
				
				case 5:
					return 1668;
				
				case 6:
					return 1675;
				
				case 7:
					return 1682;
				
				case 8:
					return 1689;
				
				case 9:
					return 1696;
				
				case 10:
					return 1703;
				
				case 11:
					return 1709;
				
				case 12:
					return 1715;
				
				case 13:
					return 1721;
				
				case 14:
					return 1799;
				
				case 15:
					return 1806;
				
				case 16:
					return 1813;
				
				case 17:
					return 1820;
				
				case 18:
					return 1827;
				
				case 19:
					return 1834;
				
				case 20:
					return 1841;
				
				case 21:
					return 1848;
				
				case 22:
					return 1855;
				
				case 23:
					return 1862;
				
				case 24:
					return 1868;
				
				case 25:
					return 1874;
				
				case 26:
					return 2169;
				
				case 27:
					return 2176;
				
				case 28:
					return 2183;
				
				case 29:
					return 2190;
				
				case 30:
					return 2197;
				
				case 31:
					return 2204;
				
				case 32:
					return 2211;
				
				case 33:
					return 2218;
				
				case 34:
					return 2225;
				
				case 35:
					return 2232;
				
				case 36:
					return 2239;
				
				case 37:
					return 2245;
				
				case 38:
					return 2251;
				
				case 39:
					return 2832;
				
				case 40:
					return 2839;
				
				case 41:
					return 2846;
				
				case 42:
					return 2853;
				
				case 43:
					return 2860;
				
				case 44:
					return 2867;
				
				case 45:
					return 2874;
				
				case 46:
					return 2881;
				
				case 47:
					return 2888;
				
				case 48:
					return 2895;
				
				case 49:
					return 2902;
				
				case 50:
					return 2908;
				
				case 51:
					return 2914;
				
				case 52:
					return 2956;
				
				case 53:
					return 2963;
				
				case 54:
					return 2970;
				
				case 55:
					return 2977;
				
				case 56:
					return 2984;
				
				case 57:
					return 2991;
				
				case 58:
					return 2998;
				
				case 59:
					return 3005;
				
				case 60:
					return 3012;
				
				case 61:
					return 3019;
				
				case 62:
					return 3026;
				
				case 63:
					return 3032;
				
				case 64:
					return 3038;
				
				case 65:
					return 3239;
				
				case 66:
					return 3247;
				
				case 67:
					return 3255;
				
				case 68:
					return 3263;
				
				case 69:
					return 3271;
				
				case 70:
					return 3279;
				
				case 71:
					return 3287;
				
				case 72:
					return 3295;
				
				case 73:
					return 3303;
				
				case 74:
					return 3311;
				
				case 75:
					return 3319;
				
				case 76:
					return 3327;
				
				case 77:
					return 3335;
				
				case 78:
					return 3343;
				
				case 79:
					return 3351;
				
				case 80:
					return 3359;
				
				case 81:
					return 3367;
				
				case 82:
					return 3375;
				
				case 83:
					return 3383;
				
				case 84:
					return 3391;
				
				case 85:
					return 3399;
				
				case 86:
					return 3406;
				
				case 87:
					return 3413;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				
				case 89:
					return 4043;
				
				case 90:
					return 4051;
				
				case 91:
					return 4059;
				
				case 92:
					return 4067;
				
				case 93:
					return 4075;
				
				case 94:
					return 4083;
				
				case 95:
					return 4091;
				
				case 96:
					return 4099;
				
				case 97:
					return 4107;
				
				case 98:
					return 4115;
				
				case 99:
					return 4123;
				
				case 100:
					return 4131;
				
				case 101:
					return 4139;
				
				case 102:
					return 4147;
				
				case 103:
					return 4155;
				
				case 104:
					return 4163;
				
				case 105:
					return 4171;
				
				case 106:
					return 4179;
				
				case 107:
					return 4187;
				
				case 108:
					return 4195;
				
				case 109:
					return 4203;
				
				case 110:
					return 4211;
				
				case 111:
					return 4219;
				
				case 112:
					return 4227;
				
				case 113:
					return 4235;
				
				case 114:
					return 4243;
				
				case 115:
					return 4251;
				
				case 116:
					return 4259;
				
				case 117:
					return 4267;
				
				case 118:
					return 4275;
				
				case 119:
					return 4283;
				
				case 120:
					return 4291;
				
				case 121:
					return 4299;
				
				case 122:
					return 4307;
				
				case 123:
					return 4315;
				
				case 124:
					return 4323;
				
				case 125:
					return 4331;
				
				case 126:
					return 4339;
				
				case 127:
					return 4347;
				
				case 128:
					return 4355;
				
				case 129:
					return 4363;
				
				case 130:
					return 4371;
				
				case 131:
					return 4379;
				
				case 132:
					return 4387;
				
				case 133:
					return 4395;
				
				case 134:
					return 4403;
				
				case 135:
					return 4411;
				
				case 136:
					return 4419;
				
				case 137:
					return 4427;
				
				case 138:
					return 4435;
				
				case 139:
					return 4443;
				
				case 140:
					return 4451;
				
				case 141:
					return 4459;
				
				case 142:
					return 4467;
				
				case 143:
					return 4475;
				
				case 144:
					return 4483;
				
				case 145:
					return 4491;
				
				case 146:
					return 4499;
				
				case 147:
					return 4507;
				
				case 148:
					return 4515;
				
				case 149:
					return 4523;
				
				case 150:
					return 4531;
				
				case 151:
					return 4539;
				
				case 152:
					return 4547;
				
				case 153:
					return 4555;
				
				case 154:
					return 4563;
				
				case 155:
					return 4571;
				
				case 156:
					return 4579;
				
				case 157:
					return 4587;
				
				case 158:
					return 5480;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				
				case 160:
					return 5936;
				
				case 161:
					return 5943;
				
				case 162:
					return 5950;
				
				case 163:
					return 5957;
				
				case 164:
					return 5964;
				
				case 165:
					return 5971;
				
				case 166:
					return 5978;
				
				case 167:
					return 5985;
				
				case 168:
					return 5992;
				
				case 169:
					return 5999;
				
				case 170:
					return 6006;
				
				case 171:
					return 6013;
				
				case 172:
					return 6020;
				
				case 173:
					return 6027;
				
				case 174:
					return 6034;
				
				case 175:
					return 6041;
				
				case 176:
					return 6048;
				
				case 177:
					return 6055;
				
				case 178:
					return 6062;
				
				case 179:
					return 6069;
				
				case 180:
					return 6076;
				
				case 181:
					return 6083;
				
				case 182:
					return 6090;
				
				case 183:
					return 6097;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				
				case 185:
					return 6181;
				
				case 186:
					return 6188;
				
				case 187:
					return 6195;
				
				case 188:
					return 6202;
				
				case 189:
					return 6209;
				
				case 190:
					return 6216;
				
				case 191:
					return 6223;
				
				case 192:
					return 6230;
				
				case 193:
					return 6237;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				
				case 195:
					return 6578;
				
				case 196:
					return 6585;
				
				case 197:
					return 6592;
				
				case 198:
					return 6599;
				
				case 199:
					return 6606;
				
				case 200:
					return 6613;
				
				case 201:
					return 6620;
				
				case 202:
					return 6627;
				
				case 203:
					return 6634;
				
				case 204:
					return 6641;
				
				case 205:
					return 6648;
				
				case 206:
					return 6655;
				
				case 207:
					return 6662;
				
				case 208:
					return 6669;
				
				case 209:
					return 6676;
				
				case 210:
					return 6683;
				
				case 211:
					return 6690;
				
				case 212:
					return 6697;
				
				case 213:
					return 6704;
				
				case 214:
					return 6711;
				
				case 215:
					return 6718;
				
				case 216:
					return 6725;
				
				case 217:
					return 6732;
				
				case 218:
					return 6739;
				
				case 219:
					return 6746;
				
				case 220:
					return 6753;
				
				case 221:
					return 6760;
				
				case 222:
					return 6767;
				
				case 223:
					return 6774;
				
				case 224:
					return 6781;
				
				case 225:
					return 6788;
				
				case 226:
					return 6795;
				
				case 227:
					return 6802;
				
				case 228:
					return 6809;
				
				case 229:
					return 6816;
				
				case 230:
					return 6823;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				
				case 232:
					return 7300;
				
				case 233:
					return 7307;
				
				case 234:
					return 7314;
				
				case 235:
					return 7321;
				
				case 236:
					return 7328;
				
				case 237:
					return 7335;
				
				case 238:
					return 7342;
				
				case 239:
					return 7349;
				
				case 240:
					return 7356;
				
				case 241:
					return 7363;
				
				case 242:
					return 7370;
				
				case 243:
					return 7377;
				
				case 244:
					return 7384;
				
				case 245:
					return 7391;
				
				case 246:
					return 7398;
				
				case 247:
					return 7405;
				
				case 248:
					return 7412;
				
				case 249:
					return 7419;
				
				case 250:
					return 7426;
				
				case 251:
					return 7433;
				
				case 252:
					return 7440;
				
				case 253:
					return 7447;
				
				case 254:
					return 7454;
				
				case 255:
					return 7461;
				
				case 256:
					return 7468;
				
				case 257:
					return 7475;
				
				case 258:
					return 7482;
				
				case 259:
					return 7489;
				
				case 260:
					return 7496;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8016;
				
				case 262:
					return 8023;
				
				case 263:
					return 8030;
				
				case 264:
					return 8037;
				
				case 265:
					return 8044;
				
				case 266:
					return 8051;
				
				case 267:
					return 8058;
				
				case 268:
					return 8065;
				
				case 269:
					return 8072;
				
				case 270:
					return 8079;
				
				case 271:
					return 8540;
				
				case 272:
					return 8547;
				
				case 273:
					return 8554;
				
				case 274:
					return 8561;
				
				case 275:
					return 8568;
				
				case 276:
					return 8575;
				
				case 277:
					return 8582;
				
				case 278:
					return 8589;
				
				case 279:
					return 8596;
				
				case 280:
					return 8603;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1635;
				
				case 1:
					return 1642;
				
				case 2:
					return 1649;
				
				case 3:
					return 1656;
				
				case 4:
					return 1663;
				
				case 5:
					return 1670;
				
				case 6:
					return 1677;
				
				case 7:
					return 1684;
				
				case 8:
					return 1691;
				
				case 9:
					return 1698;
				
				case 13:
					return 1723;
				
				case 14:
					return 1801;
				
				case 15:
					return 1808;
				
				case 16:
					return 1815;
				
				case 17:
					return 1822;
				
				case 18:
					return 1829;
				
				case 19:
					return 1836;
				
				case 20:
					return 1843;
				
				case 21:
					return 1850;
				
				case 22:
					return 1857;
				
				case 26:
					return 2171;
				
				case 27:
					return 2178;
				
				case 28:
					return 2185;
				
				case 29:
					return 2192;
				
				case 30:
					return 2199;
				
				case 31:
					return 2206;
				
				case 32:
					return 2213;
				
				case 33:
					return 2220;
				
				case 34:
					return 2227;
				
				case 35:
					return 2234;
				
				case 39:
					return 2834;
				
				case 40:
					return 2841;
				
				case 41:
					return 2848;
				
				case 42:
					return 2855;
				
				case 43:
					return 2862;
				
				case 44:
					return 2869;
				
				case 45:
					return 2876;
				
				case 46:
					return 2883;
				
				case 47:
					return 2890;
				
				case 48:
					return 2897;
				
				case 52:
					return 2958;
				
				case 53:
					return 2965;
				
				case 54:
					return 2972;
				
				case 55:
					return 2979;
				
				case 56:
					return 2986;
				
				case 57:
					return 2993;
				
				case 58:
					return 3000;
				
				case 59:
					return 3007;
				
				case 60:
					return 3014;
				
				case 61:
					return 3021;
				
				case 65:
					return 3242;
				
				case 66:
					return 3250;
				
				case 67:
					return 3258;
				
				case 68:
					return 3266;
				
				case 69:
					return 3274;
				
				case 70:
					return 3282;
				
				case 71:
					return 3290;
				
				case 72:
					return 3298;
				
				case 73:
					return 3306;
				
				case 74:
					return 3314;
				
				case 75:
					return 3322;
				
				case 76:
					return 3330;
				
				case 77:
					return 3338;
				
				case 78:
					return 3346;
				
				case 79:
					return 3354;
				
				case 80:
					return 3362;
				
				case 81:
					return 3370;
				
				case 82:
					return 3378;
				
				case 83:
					return 3386;
				
				case 84:
					return 3394;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4038;
				
				case 89:
					return 4046;
				
				case 90:
					return 4054;
				
				case 91:
					return 4062;
				
				case 92:
					return 4070;
				
				case 93:
					return 4078;
				
				case 94:
					return 4086;
				
				case 95:
					return 4094;
				
				case 96:
					return 4102;
				
				case 97:
					return 4110;
				
				case 98:
					return 4118;
				
				case 99:
					return 4126;
				
				case 100:
					return 4134;
				
				case 101:
					return 4142;
				
				case 102:
					return 4150;
				
				case 103:
					return 4158;
				
				case 104:
					return 4166;
				
				case 105:
					return 4174;
				
				case 106:
					return 4182;
				
				case 107:
					return 4190;
				
				case 108:
					return 4198;
				
				case 109:
					return 4206;
				
				case 110:
					return 4214;
				
				case 111:
					return 4222;
				
				case 112:
					return 4230;
				
				case 113:
					return 4238;
				
				case 114:
					return 4246;
				
				case 115:
					return 4254;
				
				case 116:
					return 4262;
				
				case 117:
					return 4270;
				
				case 118:
					return 4278;
				
				case 119:
					return 4286;
				
				case 120:
					return 4294;
				
				case 121:
					return 4302;
				
				case 122:
					return 4310;
				
				case 123:
					return 4318;
				
				case 124:
					return 4326;
				
				case 125:
					return 4334;
				
				case 126:
					return 4342;
				
				case 127:
					return 4350;
				
				case 128:
					return 4358;
				
				case 129:
					return 4366;
				
				case 130:
					return 4374;
				
				case 131:
					return 4382;
				
				case 132:
					return 4390;
				
				case 133:
					return 4398;
				
				case 134:
					return 4406;
				
				case 135:
					return 4414;
				
				case 136:
					return 4422;
				
				case 137:
					return 4430;
				
				case 138:
					return 4438;
				
				case 139:
					return 4446;
				
				case 140:
					return 4454;
				
				case 141:
					return 4462;
				
				case 142:
					return 4470;
				
				case 143:
					return 4478;
				
				case 144:
					return 4486;
				
				case 145:
					return 4494;
				
				case 146:
					return 4502;
				
				case 147:
					return 4510;
				
				case 148:
					return 4518;
				
				case 149:
					return 4526;
				
				case 150:
					return 4534;
				
				case 151:
					return 4542;
				
				case 152:
					return 4550;
				
				case 153:
					return 4558;
				
				case 154:
					return 4566;
				
				case 155:
					return 4574;
				
				case 156:
					return 4582;
				
				case 157:
					return 4590;
				
				case 158:
					return 5483;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				
				case 160:
					return 5938;
				
				case 161:
					return 5945;
				
				case 162:
					return 5952;
				
				case 163:
					return 5959;
				
				case 164:
					return 5966;
				
				case 165:
					return 5973;
				
				case 166:
					return 5980;
				
				case 167:
					return 5987;
				
				case 168:
					return 5994;
				
				case 169:
					return 6001;
				
				case 170:
					return 6008;
				
				case 171:
					return 6015;
				
				case 172:
					return 6022;
				
				case 173:
					return 6029;
				
				case 174:
					return 6036;
				
				case 175:
					return 6043;
				
				case 176:
					return 6050;
				
				case 177:
					return 6057;
				
				case 178:
					return 6064;
				
				case 179:
					return 6071;
				
				case 180:
					return 6078;
				
				case 181:
					return 6085;
				
				case 182:
					return 6092;
				
				case 183:
					return 6099;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				
				case 185:
					return 6183;
				
				case 186:
					return 6190;
				
				case 187:
					return 6197;
				
				case 188:
					return 6204;
				
				case 189:
					return 6211;
				
				case 190:
					return 6218;
				
				case 191:
					return 6225;
				
				case 192:
					return 6232;
				
				case 193:
					return 6239;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				
				case 195:
					return 6580;
				
				case 196:
					return 6587;
				
				case 197:
					return 6594;
				
				case 198:
					return 6601;
				
				case 199:
					return 6608;
				
				case 200:
					return 6615;
				
				case 201:
					return 6622;
				
				case 202:
					return 6629;
				
				case 203:
					return 6636;
				
				case 204:
					return 6643;
				
				case 205:
					return 6650;
				
				case 206:
					return 6657;
				
				case 207:
					return 6664;
				
				case 208:
					return 6671;
				
				case 209:
					return 6678;
				
				case 210:
					return 6685;
				
				case 211:
					return 6692;
				
				case 212:
					return 6699;
				
				case 213:
					return 6706;
				
				case 214:
					return 6713;
				
				case 215:
					return 6720;
				
				case 216:
					return 6727;
				
				case 217:
					return 6734;
				
				case 218:
					return 6741;
				
				case 219:
					return 6748;
				
				case 220:
					return 6755;
				
				case 221:
					return 6762;
				
				case 222:
					return 6769;
				
				case 223:
					return 6776;
				
				case 224:
					return 6783;
				
				case 225:
					return 6790;
				
				case 226:
					return 6797;
				
				case 227:
					return 6804;
				
				case 228:
					return 6811;
				
				case 229:
					return 6818;
				
				case 230:
					return 6825;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				
				case 232:
					return 7302;
				
				case 233:
					return 7309;
				
				case 234:
					return 7316;
				
				case 235:
					return 7323;
				
				case 236:
					return 7330;
				
				case 237:
					return 7337;
				
				case 238:
					return 7344;
				
				case 239:
					return 7351;
				
				case 240:
					return 7358;
				
				case 241:
					return 7365;
				
				case 242:
					return 7372;
				
				case 243:
					return 7379;
				
				case 244:
					return 7386;
				
				case 245:
					return 7393;
				
				case 246:
					return 7400;
				
				case 247:
					return 7407;
				
				case 248:
					return 7414;
				
				case 249:
					return 7421;
				
				case 250:
					return 7428;
				
				case 251:
					return 7435;
				
				case 252:
					return 7442;
				
				case 253:
					return 7449;
				
				case 254:
					return 7456;
				
				case 255:
					return 7463;
				
				case 256:
					return 7470;
				
				case 257:
					return 7477;
				
				case 258:
					return 7484;
				
				case 259:
					return 7491;
				
				case 260:
					return 7498;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8018;
				
				case 262:
					return 8025;
				
				case 263:
					return 8032;
				
				case 264:
					return 8039;
				
				case 265:
					return 8046;
				
				case 266:
					return 8053;
				
				case 267:
					return 8060;
				
				case 268:
					return 8067;
				
				case 269:
					return 8074;
				
				case 270:
					return 8081;
				
				case 271:
					return 8542;
				
				case 272:
					return 8549;
				
				case 273:
					return 8556;
				
				case 274:
					return 8563;
				
				case 275:
					return 8570;
				
				case 276:
					return 8577;
				
				case 277:
					return 8584;
				
				case 278:
					return 8591;
				
				case 279:
					return 8598;
				
				case 280:
					return 8605;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1634;
				
				case 1:
					return 1641;
				
				case 2:
					return 1648;
				
				case 3:
					return 1655;
				
				case 4:
					return 1662;
				
				case 5:
					return 1669;
				
				case 6:
					return 1676;
				
				case 7:
					return 1683;
				
				case 8:
					return 1690;
				
				case 9:
					return 1697;
				
				case 10:
					return 1704;
				
				case 11:
					return 1710;
				
				case 12:
					return 1716;
				
				case 13:
					return 1722;
				
				case 14:
					return 1800;
				
				case 15:
					return 1807;
				
				case 16:
					return 1814;
				
				case 17:
					return 1821;
				
				case 18:
					return 1828;
				
				case 19:
					return 1835;
				
				case 20:
					return 1842;
				
				case 21:
					return 1849;
				
				case 22:
					return 1856;
				
				case 23:
					return 1863;
				
				case 24:
					return 1869;
				
				case 25:
					return 1875;
				
				case 26:
					return 2170;
				
				case 27:
					return 2177;
				
				case 28:
					return 2184;
				
				case 29:
					return 2191;
				
				case 30:
					return 2198;
				
				case 31:
					return 2205;
				
				case 32:
					return 2212;
				
				case 33:
					return 2219;
				
				case 34:
					return 2226;
				
				case 35:
					return 2233;
				
				case 36:
					return 2240;
				
				case 37:
					return 2246;
				
				case 38:
					return 2252;
				
				case 39:
					return 2833;
				
				case 40:
					return 2840;
				
				case 41:
					return 2847;
				
				case 42:
					return 2854;
				
				case 43:
					return 2861;
				
				case 44:
					return 2868;
				
				case 45:
					return 2875;
				
				case 46:
					return 2882;
				
				case 47:
					return 2889;
				
				case 48:
					return 2896;
				
				case 49:
					return 2903;
				
				case 50:
					return 2909;
				
				case 51:
					return 2915;
				
				case 52:
					return 2957;
				
				case 53:
					return 2964;
				
				case 54:
					return 2971;
				
				case 55:
					return 2978;
				
				case 56:
					return 2985;
				
				case 57:
					return 2992;
				
				case 58:
					return 2999;
				
				case 59:
					return 3006;
				
				case 60:
					return 3013;
				
				case 61:
					return 3020;
				
				case 62:
					return 3027;
				
				case 63:
					return 3033;
				
				case 64:
					return 3039;
				
				case 65:
					return 3240;
				
				case 66:
					return 3248;
				
				case 67:
					return 3256;
				
				case 68:
					return 3264;
				
				case 69:
					return 3272;
				
				case 70:
					return 3280;
				
				case 71:
					return 3288;
				
				case 72:
					return 3296;
				
				case 73:
					return 3304;
				
				case 74:
					return 3312;
				
				case 75:
					return 3320;
				
				case 76:
					return 3328;
				
				case 77:
					return 3337;
				
				case 78:
					return 3345;
				
				case 79:
					return 3352;
				
				case 80:
					return 3360;
				
				case 81:
					return 3368;
				
				case 82:
					return 3376;
				
				case 83:
					return 3384;
				
				case 84:
					return 3392;
				
				case 85:
					return 3400;
				
				case 86:
					return 3407;
				
				case 87:
					return 3414;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				
				case 89:
					return 4044;
				
				case 90:
					return 4052;
				
				case 91:
					return 4060;
				
				case 92:
					return 4068;
				
				case 93:
					return 4076;
				
				case 94:
					return 4084;
				
				case 95:
					return 4092;
				
				case 96:
					return 4100;
				
				case 97:
					return 4108;
				
				case 98:
					return 4116;
				
				case 99:
					return 4124;
				
				case 100:
					return 4133;
				
				case 101:
					return 4141;
				
				case 102:
					return 4148;
				
				case 103:
					return 4156;
				
				case 104:
					return 4164;
				
				case 105:
					return 4172;
				
				case 106:
					return 4180;
				
				case 107:
					return 4188;
				
				case 108:
					return 4196;
				
				case 109:
					return 4204;
				
				case 110:
					return 4212;
				
				case 111:
					return 4220;
				
				case 112:
					return 4228;
				
				case 113:
					return 4236;
				
				case 114:
					return 4244;
				
				case 115:
					return 4252;
				
				case 116:
					return 4260;
				
				case 117:
					return 4268;
				
				case 118:
					return 4276;
				
				case 119:
					return 4284;
				
				case 120:
					return 4293;
				
				case 121:
					return 4301;
				
				case 122:
					return 4308;
				
				case 123:
					return 4316;
				
				case 124:
					return 4324;
				
				case 125:
					return 4332;
				
				case 126:
					return 4340;
				
				case 127:
					return 4348;
				
				case 128:
					return 4356;
				
				case 129:
					return 4364;
				
				case 130:
					return 4372;
				
				case 131:
					return 4380;
				
				case 132:
					return 4388;
				
				case 133:
					return 4396;
				
				case 134:
					return 4404;
				
				case 135:
					return 4412;
				
				case 136:
					return 4420;
				
				case 137:
					return 4428;
				
				case 138:
					return 4436;
				
				case 139:
					return 4444;
				
				case 140:
					return 4453;
				
				case 141:
					return 4461;
				
				case 142:
					return 4468;
				
				case 143:
					return 4476;
				
				case 144:
					return 4484;
				
				case 145:
					return 4492;
				
				case 146:
					return 4500;
				
				case 147:
					return 4508;
				
				case 148:
					return 4516;
				
				case 149:
					return 4524;
				
				case 150:
					return 4532;
				
				case 151:
					return 4540;
				
				case 152:
					return 4548;
				
				case 153:
					return 4556;
				
				case 154:
					return 4564;
				
				case 155:
					return 4572;
				
				case 156:
					return 4580;
				
				case 157:
					return 4588;
				
				case 158:
					return 5481;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				
				case 160:
					return 5937;
				
				case 161:
					return 5944;
				
				case 162:
					return 5951;
				
				case 163:
					return 5958;
				
				case 164:
					return 5965;
				
				case 165:
					return 5972;
				
				case 166:
					return 5979;
				
				case 167:
					return 5986;
				
				case 168:
					return 5993;
				
				case 169:
					return 6000;
				
				case 170:
					return 6007;
				
				case 171:
					return 6014;
				
				case 172:
					return 6021;
				
				case 173:
					return 6028;
				
				case 174:
					return 6035;
				
				case 175:
					return 6042;
				
				case 176:
					return 6049;
				
				case 177:
					return 6056;
				
				case 178:
					return 6063;
				
				case 179:
					return 6070;
				
				case 180:
					return 6077;
				
				case 181:
					return 6084;
				
				case 182:
					return 6091;
				
				case 183:
					return 6098;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				
				case 185:
					return 6182;
				
				case 186:
					return 6189;
				
				case 187:
					return 6196;
				
				case 188:
					return 6203;
				
				case 189:
					return 6210;
				
				case 190:
					return 6217;
				
				case 191:
					return 6224;
				
				case 192:
					return 6231;
				
				case 193:
					return 6238;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				
				case 195:
					return 6579;
				
				case 196:
					return 6586;
				
				case 197:
					return 6593;
				
				case 198:
					return 6600;
				
				case 199:
					return 6607;
				
				case 200:
					return 6614;
				
				case 201:
					return 6621;
				
				case 202:
					return 6628;
				
				case 203:
					return 6635;
				
				case 204:
					return 6642;
				
				case 205:
					return 6649;
				
				case 206:
					return 6656;
				
				case 207:
					return 6663;
				
				case 208:
					return 6670;
				
				case 209:
					return 6677;
				
				case 210:
					return 6684;
				
				case 211:
					return 6691;
				
				case 212:
					return 6698;
				
				case 213:
					return 6705;
				
				case 214:
					return 6712;
				
				case 215:
					return 6719;
				
				case 216:
					return 6726;
				
				case 217:
					return 6733;
				
				case 218:
					return 6740;
				
				case 219:
					return 6747;
				
				case 220:
					return 6754;
				
				case 221:
					return 6761;
				
				case 222:
					return 6768;
				
				case 223:
					return 6775;
				
				case 224:
					return 6782;
				
				case 225:
					return 6789;
				
				case 226:
					return 6796;
				
				case 227:
					return 6803;
				
				case 228:
					return 6810;
				
				case 229:
					return 6817;
				
				case 230:
					return 6824;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				
				case 232:
					return 7301;
				
				case 233:
					return 7308;
				
				case 234:
					return 7315;
				
				case 235:
					return 7322;
				
				case 236:
					return 7329;
				
				case 237:
					return 7336;
				
				case 238:
					return 7343;
				
				case 239:
					return 7350;
				
				case 240:
					return 7357;
				
				case 241:
					return 7364;
				
				case 242:
					return 7371;
				
				case 243:
					return 7378;
				
				case 244:
					return 7385;
				
				case 245:
					return 7392;
				
				case 246:
					return 7399;
				
				case 247:
					return 7406;
				
				case 248:
					return 7413;
				
				case 249:
					return 7420;
				
				case 250:
					return 7427;
				
				case 251:
					return 7434;
				
				case 252:
					return 7441;
				
				case 253:
					return 7448;
				
				case 254:
					return 7455;
				
				case 255:
					return 7462;
				
				case 256:
					return 7469;
				
				case 257:
					return 7476;
				
				case 258:
					return 7483;
				
				case 259:
					return 7490;
				
				case 260:
					return 7497;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8017;
				
				case 262:
					return 8024;
				
				case 263:
					return 8031;
				
				case 264:
					return 8038;
				
				case 265:
					return 8045;
				
				case 266:
					return 8052;
				
				case 267:
					return 8059;
				
				case 268:
					return 8066;
				
				case 269:
					return 8073;
				
				case 270:
					return 8080;
				
				case 271:
					return 8541;
				
				case 272:
					return 8548;
				
				case 273:
					return 8555;
				
				case 274:
					return 8562;
				
				case 275:
					return 8569;
				
				case 276:
					return 8576;
				
				case 277:
					return 8583;
				
				case 278:
					return 8590;
				
				case 279:
					return 8597;
				
				case 280:
					return 8604;
				
				default:
			}
			break;
	}
	return 1629;
}

int func_639(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 281)
	{
		iVar0 = 0;
		while (iVar0 < 23)
		{
			if (iParam0 >= func_651(iVar0) && iParam0 < func_640(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_640(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
		
		case 14:
			return 192;
			break;
		
		case 15:
			return 202;
			break;
		
		case 16:
			return 212;
			break;
		
		case 17:
			return 222;
			break;
		
		case 18:
			return 236;
			break;
		
		case 19:
			return 246;
			break;
		
		case 20:
			return 256;
			break;
		
		case 21:
			return 268;
			break;
		
		case 22:
			return 278;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_649(iParam0);
		return func_648(iVar0);
	}
	return (func_641(iParam0, -1) * iParam0 + 1);
}

int func_641(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_644(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_643(iParam1))
			{
				return 0;
			}
			else if (func_642(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 == 125)
			{
				return 10;
			}
			else if (iParam1 == 126)
			{
				return 10;
			}
			else if (iParam1 <= 126 && iParam1 > 0)
			{
				if (Global_1049852[iParam1 /*1951*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049852[iParam1 /*1951*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049852[iParam1 /*1951*/].f_33 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
		
		case 21:
			return 10;
			break;
		
		case 22:
			return 10;
			break;
	}
	return 0;
}

int func_642(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_643(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_644(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_645(PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_645(PLAYER_ID(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_645(int iParam0, bool bParam1)
{
	if (Global_1590284 != func_29())
	{
		if (!func_647(Global_1590284))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PLAYER_ID() != Global_1590284)
			{
				if (IS_BIT_SET(Global_2424073[Global_1590284 /*421*/].f_195, 24) || func_646(Global_1590284))
				{
					return 1;
				}
			}
		}
	}
	return IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_195, 24);
}

int func_646(int iParam0)
{
	if (iParam0 != func_29())
	{
		return IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_195, 9);
	}
	return 0;
}

int func_647(int iParam0)
{
	if (iParam0 != func_29())
	{
		return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 2);
	}
	return 0;
}

int func_648(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		default:
	}
	return -1;
}

int func_649(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

void func_650(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_10163)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1671745[iParam0] - 1);
		if (bParam2)
		{
			if ((GET_FRAME_COUNT() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_651(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
		
		case 14:
			return 191;
			break;
		
		case 15:
			return 192;
			break;
		
		case 16:
			return 202;
			break;
		
		case 17:
			return 212;
			break;
		
		case 18:
			return 227;
			break;
		
		case 19:
			return 237;
			break;
		
		case 20:
			return 247;
			break;
		
		case 21:
			return 258;
			break;
		
		case 22:
			return 268;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_649(iParam0);
		return func_652(iVar0);
	}
	return (func_641(iParam0, -1) * iParam0);
}

int func_652(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		case 2:
			return 223;
		
		case 1:
			return 224;
		
		default:
	}
	return -1;
}

int func_653(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_654(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_650(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_141(func_638(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_655(int iParam0)
{
	switch (iParam0)
	{
		case -1881846085:
			return 0;
			break;
	}
	return -1;
}

int func_656(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (Global_1590446[iParam0 /*871*/].f_273.f_335 != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_657()
{
	return func_141(6542, -1, 0) != 0;
}

bool func_658()
{
	return func_141(6163, -1, 0) != 0;
}

bool func_659()
{
	return func_141(5380, -1, 0) != 0;
}

bool func_660()
{
	return func_141(3828, -1, 0) != 0;
}

bool func_661()
{
	return func_141(3223, -1, 0) != 0;
}

bool func_662()
{
	return func_141(5379, -1, 0) != 0;
}

int func_663()
{
	int iVar0;
	
	iVar0 = func_176();
	if (iVar0 != func_29())
	{
		return Global_1628955[iVar0 /*614*/].f_11.f_98;
	}
	return 0;
}

int func_664(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_49();
	}
	if (iParam0 == 7 && !Global_262145.f_16972)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_649(iParam0);
		if (iVar1 == 0 && func_141(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_665(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_709(PLAYER_ID()) && iVar1 == 1)
		{
			return 1237;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1384285[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2578729[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 23)
		{
			return 0;
		}
		return Global_2578592[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

bool func_665(int iParam0)
{
	if (!Global_262145.f_23651)
	{
		return 0;
	}
	return func_141(7207, iParam0, 0) != 0;
}

int func_666(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_365 != 0;
	}
	return 0;
}

int func_667()
{
	if (Global_1674861.f_3 != 0)
	{
		return Global_1674861.f_3;
	}
	return -1;
}

int func_668()
{
	if (Global_1674861.f_2 != 0)
	{
		return Global_1674861.f_2;
	}
	return -1;
}

int func_669(int iParam0)
{
	if (iParam0 != func_29())
	{
		return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_330, 12);
	}
	return 0;
}

int func_670(int iParam0)
{
	if (iParam0 != func_29())
	{
		return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_330, 10);
	}
	return 0;
}

int func_671(int iParam0)
{
	if (iParam0 != func_29())
	{
		return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_330, 11);
	}
	return 0;
}

bool func_672(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 4);
}

bool func_673(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 3);
}

bool func_674(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 2);
}

bool func_675(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 1);
}

bool func_676(int iParam0)
{
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 31);
}

int func_677(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_29() || !func_692(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_687(iParam0, iParam2);
		
		case 1:
			return func_685(iParam0, iParam2);
		
		case 3:
			return func_684(iParam0);
		
		case 2:
			return func_679(iParam0, iParam2);
		
		case 4:
			return func_678(iParam0);
		
		default:
	}
	return 0;
}

bool func_678(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 6);
}

int func_679(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_683(iParam0);
		
		case 11:
			return func_682(iParam0);
		
		case 12:
			return func_681(iParam0);
		
		case 13:
			return func_680(iParam0);
		
		default:
	}
	return 0;
}

bool func_680(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 15);
}

bool func_681(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 14);
}

bool func_682(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 13);
}

bool func_683(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 12);
}

bool func_684(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 5);
}

int func_685(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_686(iParam0);
		
		case 6:
			return func_675(iParam0);
		
		case 7:
			return func_674(iParam0);
		
		case 8:
			return func_673(iParam0);
		
		case 9:
			return func_672(iParam0);
		
		default:
	}
	return 0;
}

bool func_686(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 0);
}

int func_687(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_691(iParam0);
		
		case 1:
			return func_690(iParam0);
		
		case 2:
			return func_689(iParam0);
		
		case 3:
			return func_688(iParam0);
		
		case 4:
			return func_676(iParam0);
		
		default:
	}
	return 0;
}

bool func_688(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 10);
}

bool func_689(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 9);
}

bool func_690(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 8);
}

bool func_691(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 7);
}

bool func_692(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_693(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_677(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_677(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_677(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_677(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

var func_694(int iParam0)
{
	return Global_1590446[iParam0 /*871*/].f_211.f_6;
}

bool func_695()
{
	return func_141(6156, -1, 0) != 0;
}

int func_696(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_267 != 0;
	}
	return 0;
}

bool func_697()
{
	return func_141(6164, -1, 0) == 3;
}

bool func_698()
{
	return func_141(6164, -1, 0) == 2;
}

bool func_699()
{
	return func_141(6164, -1, 0) == 1;
}

int func_700()
{
	int iVar0;
	
	if (func_144())
	{
		return 4;
	}
	else if (func_157())
	{
		if (func_359(PLAYER_ID()))
		{
			return 8;
		}
		return 6;
	}
	if (func_99(1))
	{
		iVar0 = func_701(PLAYER_ID());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_174(1))
	{
		if (func_359(func_176()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_701(int iParam0)
{
	if (func_281(iParam0, 1))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_451;
	}
	return -1;
}

int func_702(int iParam0, int iParam1)
{
	return func_141(func_703(iParam1), iParam0, 0);
}

int func_703(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3898;
		
		case 1:
			return 3927;
		
		case 2:
			return 3931;
		
		case 3:
			return 3935;
		
		case 4:
			return 3939;
		
		case 5:
			return 5450;
		
		default:
	}
	return 3898;
}

int func_704(int iParam0)
{
	if (func_63(iParam0) == 225 || func_63(iParam0) == 226)
	{
		return func_129(iParam0);
	}
	return -1;
}

int func_705(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_327(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

var func_706()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_334(PLAYER_ID(), iVar0))
		{
			SET_BIT(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

int func_707(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_708(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_709(int iParam0)
{
	if (iParam0 != func_29())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_318 != 0;
	}
	return 0;
}

int func_710(int iParam0)
{
	if (iParam0 == func_29())
	{
		return -1;
	}
	return Global_1628955[iParam0 /*614*/].f_11.f_8[1];
}

int func_711(int iParam0)
{
	if (iParam0 == func_29())
	{
		return -1;
	}
	return Global_1628955[iParam0 /*614*/].f_11.f_8[0];
}

void func_712(int iParam0)
{
	SET_BIT(&iLocal_130, iParam0);
}

char* func_713()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_265(PLAYER_ID());
	if (iVar0 != func_29())
	{
		if (iVar0 != PLAYER_ID())
		{
			if (((func_107(iVar0, 28) || func_107(PLAYER_ID(), 28)) || func_568(iVar0)) && !func_567(iVar0))
			{
				return func_569(iVar0, 0);
			}
			if (!IS_DURANGO_VERSION() && !IS_DURANGO_VERSION(0, -1, 1))
			{
				return func_569(iVar0, 0);
			}
		}
		sVar1 = func_571(&(Global_1628955[iVar0 /*614*/].f_11.f_104));
		if (IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			return func_569(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

int func_714(int iParam0)
{
	int iVar0;
	
	iVar0 = func_264(iParam0);
	if (iVar0 != -1)
	{
		return func_262(iVar0);
	}
	return 1;
}

void func_715(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1628955[PLAYER_ID() /*614*/].f_11.f_33 != iParam0)
	{
		func_735(-1);
		Global_1628955[PLAYER_ID() /*614*/].f_11.f_33 = iParam0;
		if (func_30() != -1)
		{
			func_734(-1);
		}
		if (func_733() != -1)
		{
			func_732(-1);
		}
		func_731(iParam2);
		func_729(iParam0);
		if (!func_728(iParam0))
		{
			fVar0 = func_727(iParam0);
			if (fVar0 != 1f)
			{
				func_726(fVar0);
				SET_BIT(&(Global_1674852.f_3), 1);
			}
		}
		if (!func_725(iParam0) || iParam3)
		{
			if (func_724(iParam0, iParam2) && iParam3 == 1)
			{
				SET_MAX_WANTED_LEVEL(0);
				if (!IS_PED_INJURED(IS_PED_INJURED()))
				{
					SET_PLAYER_WANTED_LEVEL(SET_PLAYER_WANTED_LEVEL(), 0, 0);
					SET_PLAYER_WANTED_LEVEL_NOW(SET_PLAYER_WANTED_LEVEL_NOW(), 0);
				}
				SET_BIT(&(Global_1674852.f_3), 0);
			}
			else if (GET_MAX_WANTED_LEVEL() < 5)
			{
				SET_WANTED_LEVEL_MULTIPLIER(1f);
				SET_MAX_WANTED_LEVEL(5);
			}
		}
		if (func_81())
		{
			func_122(27);
		}
		if (bParam1)
		{
			if (!func_775())
			{
				func_722(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((IS_BIT_SET(Global_2531497.f_4555, 1) || IS_BIT_SET(Global_2531497.f_4555, 4)) || IS_BIT_SET(Global_2531497.f_4555, 0))
			{
				func_239(6);
			}
			func_721();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			ENABLE_DISPATCH_SERVICE(3, false);
			ENABLE_DISPATCH_SERVICE(5, false);
		}
		if (func_120(PLAYER_ID()) && func_115(PLAYER_ID()))
		{
			SET_BIT(&(Global_1628955[SET_BIT() /*614*/].f_1), 8);
		}
		func_717();
		if (func_716(iParam0))
		{
			ENABLE_DISPATCH_SERVICE(3, false);
			ENABLE_DISPATCH_SERVICE(5, false);
			SET_BIT(&(Global_1674852.f_3), 6);
		}
		Global_2531497.f_6307 = 0;
	}
}

int func_716(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

void func_717()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	bVar3 = func_720();
	iVar2 = func_265(PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (func_279(iVar1, iVar2, 1) || func_718(iVar1, PLAYER_ID()))
			{
				0x55FCC0C390620314(0x55FCC0C390620314(), iVar1, bVar3);
				0x55FCC0C390620314(iVar1, 0x55FCC0C390620314(), bVar3);
			}
		}
		iVar0++;
	}
}

int func_718(int iParam0, int iParam1)
{
	if (func_281(iParam0, 1) && func_281(iParam1, 1))
	{
		return (func_719(iParam0) == func_265(iParam1) || func_719(iParam1) == func_265(iParam0));
	}
	return 0;
}

int func_719(int iParam0)
{
	if (func_281(iParam0, 1))
	{
		return Global_1628955[func_265(iParam0) /*614*/].f_11.f_484;
	}
	return func_29();
}

int func_720()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_176();
	if (iVar0 != func_29())
	{
		if (func_997(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return IS_BIT_SET(Global_1628955[iVar1 /*614*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_721()
{
	if (IS_BIT_SET(Global_2531497.f_4555, 1))
	{
		CLEAR_BIT(&(Global_2531497.f_4555), 1);
	}
	if (IS_BIT_SET(Global_2531497.f_4555, 4))
	{
		CLEAR_BIT(&(Global_2531497.f_4555), 4);
	}
	if (IS_BIT_SET(Global_2531497.f_4555, 6))
	{
		CLEAR_BIT(&(Global_2531497.f_4555), 6);
	}
	CLEAR_BIT(&(Global_2531497.f_4555), 0);
	CLEAR_BIT(&(Global_2531497.f_4555), 2);
	Global_1590446[PLAYER_ID() /*871*/].f_746 = 0;
	if (Global_2531497.f_4557 > 0)
	{
		SET_MAX_WANTED_LEVEL(Global_2531497.f_4557);
	}
	Global_2531497.f_4556 = 0;
}

void func_722(int iParam0)
{
	if (func_723() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_723()
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

int func_724(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 227:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_725(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

void func_726(float fParam0)
{
	float fVar0;
	
	if (GET_HASH_KEY(GET_HASH_KEY()) == func_74())
	{
		return;
	}
	fVar0 = (Global_2531497.f_4893 - fParam0);
	if (IS_THREAD_ACTIVE(Global_2531497.f_4894))
	{
		if (!Global_2531497.f_4894 == GET_ID_OF_THIS_THREAD() && GET_ID_OF_THIS_THREAD(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2531497.f_4893 = fParam0;
	Global_2531497.f_4894 = GET_ID_OF_THIS_THREAD();
}

float func_727(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 243:
		case 158:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_728(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

void func_729(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_141(3791, -1, 0);
	iVar1 = func_730(iParam0);
	if (iVar1 != -1)
	{
		SET_BIT(&iVar0, iVar1);
		func_139(3791, iVar0, -1, 1, 0);
	}
}

int func_730(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		case 214:
			return 5;
		
		case 215:
			return 6;
		
		case 216:
			return 7;
		
		case 217:
			return 8;
		
		case 218:
			return 9;
		
		case 219:
			return 10;
		
		case 220:
			return 11;
		
		case 221:
			return 12;
		
		default:
	}
	return -1;
}

void func_731(int iParam0)
{
	int iVar0;
	
	iVar0 = PLAYER_ID();
	if (Global_1628955[iVar0 /*614*/].f_11.f_181 != iParam0)
	{
		Global_1628955[iVar0 /*614*/].f_11.f_181 = iParam0;
	}
}

void func_732(int iParam0)
{
	if (Global_2531497.f_4898.f_338 != iParam0)
	{
		Global_2531497.f_4898.f_338 = iParam0;
	}
}

int func_733()
{
	return Global_2531497.f_4898.f_338;
}

void func_734(int iParam0)
{
	if (Global_2531497.f_4898.f_337 != iParam0)
	{
		Global_2531497.f_4898.f_337 = iParam0;
	}
}

void func_735(int iParam0)
{
	Global_1628955[PLAYER_ID() /*614*/].f_11.f_32 = iParam0;
}

bool func_736(int iParam0)
{
	return IS_BIT_SET(iLocal_130, iParam0);
}

int func_737(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_772(PLAYER_ID(), 29))
	{
		return 0;
	}
	if (func_771(PLAYER_ID(), 21))
	{
		return 0;
	}
	if (func_771(PLAYER_ID(), 25))
	{
		return 0;
	}
	if (bParam2)
	{
		if (NETWORK_END_TUTORIAL_SESSION())
		{
			return 0;
		}
	}
	if (!func_441(PLAYER_ID()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (NETWORK_SET_IN_MP_CUTSCENE())
		{
			return 0;
		}
	}
	if (func_770(PLAYER_ID()))
	{
		return 0;
	}
	if (func_769())
	{
		return 0;
	}
	if (func_500())
	{
		return 0;
	}
	if (func_768())
	{
		return 0;
	}
	if (func_494())
	{
		return 0;
	}
	if (NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_492(PLAYER_ID()))
	{
		return 0;
	}
	if (!func_496())
	{
		return 0;
	}
	if (func_771(PLAYER_ID(), 0) || func_771(PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_771(PLAYER_ID(), 12) || func_771(PLAYER_ID(), 14)) || func_771(PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_761(PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_746())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_745())
		{
			return 0;
		}
	}
	if (Global_1662552)
	{
		return 0;
	}
	if (func_744(PLAYER_ID()))
	{
		return 0;
	}
	if (func_743())
	{
		return 0;
	}
	if (func_742(PLAYER_ID()))
	{
		return 0;
	}
	if ((func_741(PLAYER_ID()) && func_740(PLAYER_ID()) == 123) && !bParam3)
	{
		return 0;
	}
	if (func_739())
	{
		return 0;
	}
	if (IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_24, 4))
	{
		return 0;
	}
	if (func_738(PLAYER_ID()))
	{
		return 0;
	}
	if (func_60(PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_738(int iParam0)
{
	if (Global_2424073[iParam0 /*421*/].f_261.f_4 != 0 || Global_2424073[iParam0 /*421*/].f_261.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_739()
{
	return Global_1676879.f_4090 != -1;
}

int func_740(int iParam0)
{
	if (iParam0 != func_29() && func_997(iParam0, 1, 1))
	{
		return Global_2424073[iParam0 /*421*/].f_309.f_14;
	}
	return -1;
}

int func_741(int iParam0)
{
	if (iParam0 != func_29() && func_997(iParam0, 1, 1))
	{
		return IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309, 3);
	}
	return 0;
}

int func_742(int iParam0)
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

int func_743()
{
	if (Global_4254407.f_904 > -1)
	{
		return 1;
	}
	return 0;
}

int func_744(int iParam0)
{
	if (!func_997(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590446[iParam0 /*871*/].f_35;
}

bool func_745()
{
	return Global_98721.f_346 > 0;
}

int func_746()
{
	int iVar0;
	
	iVar0 = func_63(PLAYER_ID());
	if (((func_643(Global_1590446[PLAYER_ID() /*871*/].f_273.f_26) || func_760(PLAYER_ID())) || func_759(PLAYER_ID())) || func_758(PLAYER_ID()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_757(PLAYER_ID()))
	{
		if (func_143(iVar0) || func_707(iVar0))
		{
			return 1;
		}
	}
	if (func_111(PLAYER_ID()))
	{
		if (func_707(iVar0))
		{
			return 1;
		}
	}
	if (func_756(PLAYER_ID()))
	{
		if (func_133(iVar0))
		{
			return 1;
		}
	}
	if (func_755(PLAYER_ID()))
	{
		if (func_132(iVar0))
		{
			return 1;
		}
	}
	if (func_754(PLAYER_ID()))
	{
		if (func_131(iVar0))
		{
			return 1;
		}
	}
	if (func_753(PLAYER_ID()))
	{
		if (func_752(iVar0))
		{
			return 1;
		}
	}
	if (func_751(PLAYER_ID(), 0))
	{
		if (func_750(iVar0))
		{
			if (func_748(PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	if (func_747(PLAYER_ID()))
	{
		if (func_124(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_747(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_997(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424073[iParam0 /*421*/].f_309.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_748(int iParam0)
{
	if (func_749(iParam0) != func_29())
	{
		return func_749(iParam0) == func_265(iParam0);
	}
	return 0;
}

int func_749(int iParam0)
{
	return Global_1628955[iParam0 /*614*/].f_11.f_35;
}

int func_750(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return 0;
}

int func_751(int iParam0, bool bParam1)
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
	if (iParam0 != func_29())
	{
		if (func_997(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_29())
			{
				return func_112(Global_2424073[iParam0 /*421*/].f_309.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_752(int iParam0)
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_753(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_997(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424073[iParam0 /*421*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_754(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_997(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424073[iParam0 /*421*/].f_309.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_755(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_997(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424073[iParam0 /*421*/].f_309.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_756(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_997(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424073[iParam0 /*421*/].f_309.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_757(int iParam0)
{
	if (func_642(Global_1590446[iParam0 /*871*/].f_273.f_26, -1))
	{
		return 1;
	}
	return 0;
}

int func_758(int iParam0)
{
	if (func_644(Global_1590446[iParam0 /*871*/].f_273.f_26, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_759(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_997(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424073[iParam0 /*421*/].f_309.f_5) == 1;
			}
		}
	}
	return 0;
}

int func_760(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_997(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424073[iParam0 /*421*/].f_309.f_5) == 0;
			}
		}
	}
	return 0;
}

int func_761(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_1590446[iParam0 /*871*/].f_273.f_26 > 0)
	{
		if (bParam1)
		{
			if (IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_24, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_760(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_111(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_759(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_756(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_755(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_754(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_767(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_753(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_766(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_751(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_765(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_747(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_764(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_763(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_762(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_762(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_997(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424073[iParam0 /*421*/].f_309.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_763(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_997(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424073[iParam0 /*421*/].f_309.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_764(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_997(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424073[iParam0 /*421*/].f_309.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_765(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_997(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424073[iParam0 /*421*/].f_309.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_766(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_997(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_112(Global_2424073[iParam0 /*421*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_767(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (func_997(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_29())
			{
				return func_112(Global_2424073[iParam0 /*421*/].f_309.f_5) == 8;
			}
		}
	}
	return 0;
}

bool func_768()
{
	return Global_1312873;
}

bool func_769()
{
	return IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_39.f_18, 0);
}

int func_770(int iParam0)
{
	if (func_491(iParam0, 1, 0))
	{
		if (Global_1590446[iParam0 /*871*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_771(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_208, iParam1);
}

bool func_772(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_11.f_5, iParam1);
}

int func_773(int iParam0)
{
	if (!func_157() && !func_281(PLAYER_ID(), 1))
	{
		if (!func_115(PLAYER_ID()))
		{
			if (func_775())
			{
				return 1;
			}
		}
	}
	switch (iParam0)
	{
		case 148:
			break;
		
		case 151:
			break;
		
		case 152:
			break;
	}
	return 0;
}

int func_774()
{
	return 0;
}

int func_775()
{
	if ((func_107(PLAYER_ID(), 21) || func_107(PLAYER_ID(), 22)) || func_779())
	{
		return 1;
	}
	if (func_776())
	{
		func_122(22);
		return 1;
	}
	return 0;
}

int func_776()
{
	if (func_64(PLAYER_ID(), 0))
	{
		if (((func_81() && !func_778()) || func_771(PLAYER_ID(), 21)) || func_771(PLAYER_ID(), 25))
		{
			return 1;
		}
		else
		{
			func_777(27);
		}
	}
	return 0;
}

void func_777(int iParam0)
{
	CLEAR_BIT(&(Global_1628955[CLEAR_BIT() /*614*/].f_11.f_4), iParam0);
}

bool func_778()
{
	return Global_1312417.f_1;
}

bool func_779()
{
	return func_319(356, -1);
}

void func_780(int iParam0, int iParam1)
{
	Local_176[iParam0 /*6*/] = iParam1;
}

bool func_781()
{
	if (!func_44(PARTICIPANT_ID(), 3))
	{
		if (func_17(1))
		{
			func_783("JCMcBpPl9UWmcdOYFza0Tg");
			func_783("jDF4fBBUqG9ZuI9TR7mw");
			func_84(3);
			func_782();
		}
	}
	return func_44(PARTICIPANT_ID(), 3);
}

void func_782()
{
	Global_1672277 = 1;
	if (!IS_BIT_SET(Global_2540191, 0))
	{
		SET_BIT(&Global_2540191, 0);
		SET_BIT(&Global_1672278, 0);
	}
	if (!IS_BIT_SET(Global_2540191, 1))
	{
		SET_BIT(&Global_2540191, 1);
		SET_BIT(&Global_1672278, 1);
	}
	if (!IS_BIT_SET(Global_2540191, 5))
	{
		SET_BIT(&Global_2540191, 5);
		SET_BIT(&Global_1672278, 5);
	}
	if (_DOES_DOOR_EXIST(-355737150))
	{
		_SET_DOOR_ACCELERATION_LIMIT(-355737150, 0, false, false);
	}
	if (_DOES_DOOR_EXIST(-580979506))
	{
		_SET_DOOR_ACCELERATION_LIMIT(-580979506, 0, false, false);
	}
	if (_DOES_DOOR_EXIST(-1426452475))
	{
		_SET_DOOR_ACCELERATION_LIMIT(-1426452475, 0, false, false);
	}
	if (_DOES_DOOR_EXIST(745417724))
	{
		_SET_DOOR_ACCELERATION_LIMIT(745417724, 0, false, false);
	}
	if (_DOES_DOOR_EXIST(-1305304906))
	{
		_SET_DOOR_ACCELERATION_LIMIT(-1305304906, 0, false, false);
	}
	if (_DOES_DOOR_EXIST(-1543175077))
	{
		_SET_DOOR_ACCELERATION_LIMIT(-1543175077, 0, false, false);
	}
	if (_DOES_DOOR_EXIST(-811770997))
	{
		_SET_DOOR_ACCELERATION_LIMIT(-811770997, 0, false, false);
	}
}

void func_783(char* sParam0)
{
	int iVar0;
	int iVar1;
	
	if (IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	iVar0 = GET_HASH_KEY(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (IS_BIT_SET(Global_2359721[iVar1 /*26*/].f_12, 11))
		{
			if (func_784(&(Global_2359721[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!IS_BIT_SET(Global_2359721[iVar1 /*26*/].f_13, 26))
				{
					SET_BIT(&(Global_2359721[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_784(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar1 = 0;
	iVar2 = func_786(uParam0);
	if (iVar2 == -1)
	{
		return iVar1;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_785(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar1;
		
		default:
	}
	return iVar1;
}

struct<13> func_785(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar1 = func_786(uParam0);
	if (iVar1 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_107189[iVar1 /*13*/];
		
		case 62:
			return Global_917806.f_9405[iVar1 /*13*/];
		
		default:
	}
	return Var0;
}

int func_786(var uParam0)
{
	int iVar0;
	
	if (IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_788(uParam0->f_1))
	{
		if (func_787(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (IS_BIT_SET(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (ARE_STRINGS_EQUAL(&(Global_794709.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!IS_BIT_SET(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1218)
			{
				if (IS_BIT_SET(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (ARE_STRINGS_EQUAL(&(Global_794709.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (IS_BIT_SET(Global_917806.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (ARE_STRINGS_EQUAL(&(Global_917806.f_604[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!IS_BIT_SET(Global_917806.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 100)
			{
				if (IS_BIT_SET(Global_917806.f_604[iVar0 /*88*/].f_76, 13))
				{
					if (ARE_STRINGS_EQUAL(&(Global_917806.f_604[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == PLAYER_ID())
	{
		if (IS_BIT_SET(Global_939452.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (ARE_STRINGS_EQUAL(&(Global_939452.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (IS_BIT_SET(Global_939452.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (IS_BIT_SET(Global_939452.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (ARE_STRINGS_EQUAL(&(Global_939452.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_787(var uParam0)
{
	if (Global_2398103)
	{
		if (ARE_STRINGS_EQUAL(&(Global_2398103.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_788(int iParam0)
{
	return iParam0 == 9999;
}

int func_789()
{
	return Local_175;
}

int func_790(int iParam0)
{
	return Local_176[iParam0 /*6*/];
}

void func_791()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 174:
				GET_EVENT_DATA(1, iVar0, &uVar2, 2);
				break;
			
			case 185:
				func_792(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_792(int iParam0)
{
	struct<11> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (GET_EVENT_DATA(1, iParam0, &Var0, 11))
	{
		if (DOES_ENTITY_EXIST(Var0))
		{
			if (IS_ENTITY_A_PED(Var0))
			{
				iVar1 = GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
				if (IS_PED_A_PLAYER(iVar1))
				{
					iVar2 = NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
					if (NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
					{
						if (Var0.f_3)
						{
							if (DOES_ENTITY_EXIST(Var0.f_1))
							{
								if (IS_ENTITY_A_PED(Var0.f_1))
								{
									iVar1 = GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
									if (IS_PED_A_PLAYER(iVar1))
									{
										iVar3 = NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
										if (iVar3 == PLAYER_ID())
										{
											if (func_525())
											{
												if (func_527())
												{
													if (!func_365(iVar3, iVar2) && func_795(iVar3))
													{
														if (func_793(Var0))
														{
															if (func_45(iVar2))
															{
																Local_176[PARTICIPANT_ID_TO_INT() /*6*/].f_3 = (Local_176[PARTICIPANT_ID_TO_INT() /*6*/].f_3 + (Global_262145.f_18284 * Global_262145.f_18285));
															}
															else
															{
																Local_176[PARTICIPANT_ID_TO_INT() /*6*/].f_3 = (Local_176[PARTICIPANT_ID_TO_INT() /*6*/].f_3 + (Global_262145.f_18283 * Global_262145.f_18285));
															}
														}
														else if (func_45(iVar2))
														{
															Local_176[PARTICIPANT_ID_TO_INT() /*6*/].f_3 = (Local_176[PARTICIPANT_ID_TO_INT() /*6*/].f_3 + Global_262145.f_18284);
														}
														else
														{
															Local_176[PARTICIPANT_ID_TO_INT() /*6*/].f_3 = (Local_176[PARTICIPANT_ID_TO_INT() /*6*/].f_3 + Global_262145.f_18283);
														}
													}
													else if (iVar3 == iVar2 || !func_365(iVar3, iVar2))
													{
														if (func_793(Var0))
														{
															Local_176[PARTICIPANT_ID_TO_INT() /*6*/].f_4++;
														}
													}
												}
												else
												{
													func_563(11);
												}
											}
											else
											{
												func_563(9);
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_793(struct<10> Param0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST(Param0.f_1)) && !DOES_ENTITY_EXIST(DOES_ENTITY_EXIST(Param0.f_1), 0))
	{
		if (func_794(GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_1)))
		{
			iVar0 = GET_WEAPON_DAMAGE_TYPE(Param0.f_4);
			iVar1 = Param0.f_4;
			iVar2 = GET_WEAPONTYPE_GROUP(iVar1);
			if (((Param0.f_9 || iVar1 == joaat("weapon_unarmed")) || iVar2 == -728555052) || iVar0 == 2)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_794(int iParam0)
{
	int iVar0;
	
	if (IS_PED_ON_ANY_BIKE(iParam0))
	{
		return 1;
	}
	if (IS_PED_IN_ANY_VEHICLE(iParam0, 1))
	{
		iVar0 = GET_VEHICLE_PED_IS_IN(iParam0, 1);
		if ((((GET_ENTITY_MODEL(iVar0) == joaat("chimera") || GET_ENTITY_MODEL(iVar0) == joaat("blazer")) || GET_ENTITY_MODEL(iVar0) == joaat("blazer2")) || GET_ENTITY_MODEL(iVar0) == joaat("blazer3")) || GET_ENTITY_MODEL(iVar0) == joaat("blazer4"))
		{
			return 1;
		}
	}
	return 0;
}

int func_795(int iParam0)
{
	int iVar0;
	int iVar1;
	
	GET_PLAYER_NAME(iParam0);
	if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(iParam0), 0))
	{
		iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(iParam0), 0);
		iVar1 = func_796(iVar0);
		if (func_365(iVar1, iParam0) || iVar1 == iParam0)
		{
			GET_PLAYER_NAME(iParam0);
			GET_PLAYER_NAME(iVar1);
			return 1;
		}
	}
	return 0;
}

int func_796(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (!IS_VEHICLE_SEAT_FREE(iParam0, -1, 0))
		{
			iVar0 = GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
			if (!IS_PED_INJURED(iVar0))
			{
				iVar1 = NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
				if (!iVar1 == func_29())
				{
					if (func_997(iVar1, 0, 1))
					{
						return iVar1;
					}
				}
			}
		}
	}
	return iVar1;
}

void func_797()
{
	int iVar0;
	
	if (func_17(1))
	{
		if (!func_736(9))
		{
			iVar0 = (1 - func_34(PLAYER_ID()));
			if (Local_175.f_16[1] != Local_175.f_16[0])
			{
				if (Local_175.f_16[iVar0] != func_29())
				{
					StringCopy(&Local_163, func_566(Local_175.f_16[iVar0]), 64);
					iLocal_153 = func_714(Local_175.f_16[iVar0]);
					func_712(9);
				}
			}
		}
	}
}

void func_798()
{
	int iVar0;
	int iVar1;
	
	if (!USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR()))
	{
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = INT_TO_PLAYERINDEX(iVar0);
		if (iVar1 != PLAYER_ID())
		{
			if (NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				if (!IS_BIT_SET(iLocal_138, iVar0))
				{
					0x13F1FCB111B820B0(iVar1, 0);
					SET_BIT(&iLocal_138, iVar0);
				}
				else if (!NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
				{
					if (!IS_PED_INJURED(IS_PED_INJURED(iVar1)))
					{
						if (!IS_PED_INJURED(IS_PED_INJURED()))
						{
							if (!IS_BIT_SET(iLocal_137, iVar0))
							{
								if (((!func_800(PLAYER_PED_ID(), PLAYER_PED_ID(iVar1)) && !func_799(PLAYER_PED_ID(iVar1))) && !func_365(PLAYER_PED_ID(), iVar1)) && (func_584() || func_581()))
								{
									0x13F1FCB111B820B0(iVar1, 1);
									SET_BIT(&iLocal_137, iVar0);
								}
							}
							else if (func_800(PLAYER_PED_ID(), PLAYER_PED_ID(iVar1)))
							{
								0x13F1FCB111B820B0(iVar1, 0);
								CLEAR_BIT(&iLocal_137, iVar0);
							}
							else if (func_799(GET_PLAYER_PED(iVar1)))
							{
								0x13F1FCB111B820B0(iVar1, 0);
								CLEAR_BIT(&iLocal_137, iVar0);
							}
							else if (func_365(PLAYER_ID(), iVar1))
							{
								0x13F1FCB111B820B0(iVar1, 0);
								CLEAR_BIT(&iLocal_137, iVar0);
							}
							else if (!func_584() && !func_581())
							{
								0x13F1FCB111B820B0(iVar1, 0);
								CLEAR_BIT(&iLocal_137, iVar0);
							}
						}
					}
				}
				else if (func_27() < 2)
				{
				}
				else if (func_44(PARTICIPANT_ID(), 1))
				{
					if (Local_176[iLocal_139 /*6*/].f_5 >= 2)
					{
						if (!func_44(NETWORK_GET_PARTICIPANT_INDEX(iVar1), 1))
						{
							if (!IS_BIT_SET(iLocal_137, iVar0))
							{
								if (!(IS_PED_INJURED(IS_PED_INJURED()) && !IS_PED_INJURED(IS_PED_INJURED(iVar1))))
								{
									if (!func_800(PLAYER_PED_ID(), PLAYER_PED_ID(iVar1)) && !func_799(PLAYER_PED_ID(iVar1)))
									{
										0x13F1FCB111B820B0(iVar1, 1);
										SET_BIT(&iLocal_137, iVar0);
									}
								}
							}
							else if (!(IS_PED_INJURED(IS_PED_INJURED()) && !IS_PED_INJURED(IS_PED_INJURED(iVar1))))
							{
								if (func_800(PLAYER_PED_ID(), PLAYER_PED_ID(iVar1)) || func_799(PLAYER_PED_ID(iVar1)))
								{
									0x13F1FCB111B820B0(iVar1, 0);
									CLEAR_BIT(&iLocal_137, iVar0);
								}
							}
						}
						else if (IS_BIT_SET(iLocal_137, iVar0))
						{
							if (func_44(NETWORK_GET_PARTICIPANT_INDEX(iVar1), 1))
							{
								0x13F1FCB111B820B0(iVar1, 0);
								CLEAR_BIT(&iLocal_137, iVar0);
							}
						}
					}
				}
				else
				{
					if (!IS_BIT_SET(iLocal_137, iVar0))
					{
						if (func_44(NETWORK_GET_PARTICIPANT_INDEX(iVar1), 1))
						{
							0x13F1FCB111B820B0(iVar1, 1);
							SET_BIT(&iLocal_137, iVar0);
						}
					}
					if (!func_44(NETWORK_GET_PARTICIPANT_INDEX(iVar1), 1))
					{
						if (IS_BIT_SET(iLocal_137, iVar0))
						{
							0x13F1FCB111B820B0(iVar1, 0);
							CLEAR_BIT(&iLocal_137, iVar0);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

int func_799(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
			{
				iVar2 = GET_PLAYER_PED(iVar1);
				if (iVar2 != iParam0)
				{
					if (func_800(iParam0, iVar2))
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

bool func_800(int iParam0, int iParam1)
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

void func_801()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = INT_TO_PLAYERINDEX(iLocal_141);
	iVar2 = func_34(PLAYER_ID());
	if (NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		if (NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
		{
			iVar0 = NETWORK_GET_PARTICIPANT_INDEX(iVar1);
			if (iLocal_139 > -1)
			{
				if (func_44(INT_TO_PARTICIPANTINDEX(iLocal_139), 1))
				{
					if (func_736(9))
					{
						if (iVar0 != PARTICIPANT_ID())
						{
							iVar3 = func_34(iVar1);
							if (iVar3 != iVar2)
							{
								if (func_17(11))
								{
									if (func_44(iVar0, 1))
									{
										if (!IS_BIT_SET(iLocal_140, iLocal_141))
										{
											func_78(iVar1, 432, 1, 0);
											func_71(iVar1, func_77(iLocal_153), 1, 0);
											SET_BIT(&iLocal_140, iLocal_141);
										}
									}
								}
							}
						}
					}
				}
			}
		}
		else if (IS_BIT_SET(iLocal_140, iLocal_141))
		{
			func_78(iVar1, 432, 0, 0);
			func_71(iVar1, func_77(iLocal_153), 0, 0);
			CLEAR_BIT(&iLocal_140, iLocal_141);
		}
	}
	iLocal_141++;
	if (iLocal_141 >= 32)
	{
		iLocal_141 = 0;
	}
}

void func_802()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<16> Var4;
	int iVar5;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		vLocal_122[iVar1 /*3*/] = func_29();
		vLocal_122[iVar1 /*3*/].f_1 = -1;
		vLocal_122[iVar1 /*3*/].f_2 = uVar3;
		CLEAR_BIT(&iLocal_133, iVar1);
		CLEAR_BIT(&iLocal_135, iVar1);
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		Local_121[iVar0 /*20*/] = func_803();
		Local_121[iVar0 /*20*/].f_1 = -1;
		CLEAR_BIT(&iLocal_134, iVar0);
		Local_121[iVar0 /*20*/].f_2 = { Var4 };
		Local_121[iVar0 /*20*/].f_18 = 0;
		Local_121[iVar0 /*20*/].f_19 = 0;
		iVar0++;
	}
	iVar5 = 0;
	iVar0 = 0;
	while (iVar0 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			Local_121[iVar0 /*20*/] = iVar0;
			SET_BIT(&iLocal_134, iVar0);
			iVar2 = NETWORK_GET_PLAYER_INDEX(Local_121[iVar0 /*20*/]);
			iVar1 = iVar2;
			if (func_997(iVar2, 0, 1))
			{
				iVar5++;
				vLocal_122[iVar1 /*3*/] = iVar2;
				Local_121[iVar0 /*20*/].f_1 = iVar1;
				vLocal_122[iVar1 /*3*/].f_1 = iVar0;
				vLocal_122[iVar1 /*3*/].f_2 = GET_PLAYER_PED(iVar2);
				StringCopy(&(Local_121[iVar0 /*20*/].f_2), GET_PLAYER_NAME(iVar2), 64);
				SET_BIT(&iLocal_133, iVar1);
				if (IS_ENTITY_DEAD(vLocal_122[iVar1 /*3*/].f_2, 0))
				{
					SET_BIT(&iLocal_135, iVar1);
				}
				if (func_45(vLocal_122[iVar1 /*3*/]))
				{
					Local_121[iVar0 /*20*/].f_18 = 1;
				}
				else if (func_100(vLocal_122[iVar1 /*3*/], 0))
				{
					Local_121[iVar0 /*20*/].f_19 = 1;
				}
				if (iLocal_139 == iVar0)
				{
					if (IS_PED_IN_ANY_VEHICLE(vLocal_122[iVar1 /*3*/].f_2, 0))
					{
					}
				}
				if (Local_121[iVar0 /*20*/].f_18)
				{
					if (!IS_BIT_SET(iLocal_135, iVar1) && !IS_BIT_SET(iLocal_135, IS_BIT_SET()))
					{
					}
				}
				else if (Local_121[iVar0 /*20*/].f_19)
				{
				}
			}
		}
		iVar0++;
	}
	if (iLocal_136 != iVar5)
	{
		iLocal_136 = iVar5;
	}
}

int func_803()
{
	return -1;
}

void func_804()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iLocal_139 = -1;
	if (IS_BIT_SET(iLocal_133, IS_BIT_SET()))
	{
		if (IS_BIT_SET(iLocal_134, IS_BIT_SET()))
		{
			if (!func_274(PLAYER_ID()))
			{
				iLocal_139 = PARTICIPANT_ID_TO_INT();
			}
			else if (func_272() && !func_807())
			{
				iVar0 = func_805();
				if (IS_PED_A_PLAYER(iVar0))
				{
					iVar1 = NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
					if (NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
					{
						iVar2 = NETWORK_GET_PARTICIPANT_INDEX(iVar1);
						iLocal_139 = iVar2;
					}
				}
			}
		}
	}
}

var func_805()
{
	if (DOES_ENTITY_EXIST(func_806()))
	{
		return func_806();
	}
	return func_271();
}

var func_806()
{
	return Global_2359302.f_3;
}

bool func_807()
{
	return IS_BIT_SET(Global_2359302, 11);
}

int func_808()
{
	var uVar0;
	
	func_813(&uVar0);
	if (Global_1312850 == 0)
	{
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_812())
	{
		return 1;
	}
	if (Global_2461241)
	{
		return 1;
	}
	if (func_811())
	{
		return 1;
	}
	if (func_810(159))
	{
		if (!func_809())
		{
			return 1;
		}
	}
	if (func_810(157))
	{
		return 1;
	}
	if (!NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_74() != 0)
	{
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_74()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_809()
{
	return Global_2448961.f_598;
}

int func_810(int iParam0)
{
	if (GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_811()
{
	return Global_2458999;
}

bool func_812()
{
	return Global_2448961.f_593;
}

void func_813(var uParam0)
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
					func_814(iVar0);
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

void func_814(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_997(vVar0.y, 1, 1))
		{
			iVar1 = GET_PLAYER_PED(vVar0.y);
			if (DOES_ENTITY_EXIST(iVar1))
			{
				if (IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && IS_VEHICLE_WINDOW_INTACT())
					{
						if (func_815(iVar2, &bVar3))
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

int func_815(int iParam0, var uParam1)
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

int func_816(bool bParam0)
{
	if (func_819(1))
	{
		return 1;
	}
	if (Global_2531497.f_4898.f_39)
	{
		Global_2531497.f_4898.f_39 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_92() == func_29() || !func_997(func_92(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_748(PLAYER_ID()))
	{
		if (func_818(PLAYER_ID()) && func_817())
		{
			return 1;
		}
	}
	return 0;
}

int func_817()
{
	switch (func_112(func_740(PLAYER_ID())))
	{
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_818(int iParam0)
{
	if (iParam0 != func_29() && func_997(iParam0, 1, 1))
	{
		return IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309, 4);
	}
	return 0;
}

int func_819(bool bParam0)
{
	bool bVar0;
	
	if (!func_174(1))
	{
		bVar0 = false;
		if (Global_1628955[PLAYER_ID() /*614*/].f_11.f_57 != func_29())
		{
			if (func_997(Global_1628955[PLAYER_ID() /*614*/].f_11.f_57, 0, 1))
			{
				if ((Global_1628955[PLAYER_ID() /*614*/].f_11.f_24 == 4 || Global_1628955[PLAYER_ID() /*614*/].f_11.f_24 == 8) || Global_1628955[PLAYER_ID() /*614*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_820(func_63(PLAYER_ID())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_239(31);
				if (func_96(func_63(PLAYER_ID())))
				{
					func_239(81);
				}
				if (Global_1628955[PLAYER_ID() /*614*/].f_11.f_57 != func_29() && PLAYER_ID(Global_1628955[PLAYER_ID() /*614*/].f_11.f_57))
				{
					Global_1627443 = func_247(Global_1628955[PLAYER_ID() /*614*/].f_11.f_57, -2, 0, 0, 0);
					if (!func_45(Global_1628955[PLAYER_ID() /*614*/].f_11.f_57))
					{
						func_239(88);
					}
				}
				else
				{
					Global_1627443 = 1;
				}
				Global_1627427 = { Global_1628955[PLAYER_ID() /*614*/].f_11.f_104 };
			}
			return 1;
		}
	}
	return 0;
}

int func_820(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

void func_821()
{
	wait(0);
}

void func_822()
{
	int iVar0;
	int iVar1;
	
	if (!func_888(&iLocal_113))
	{
		TRIGGER_MUSIC_EVENT("BIKER_MP_MUSIC_STOP");
	}
	_0x21D04D7BC538C146(0);
	func_522(&iLocal_113);
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GET_PED_RELATIONSHIP_GROUP_HASH(GET_PED_RELATIONSHIP_GROUP_HASH()) == uLocal_150[0] || GET_PED_RELATIONSHIP_GROUP_HASH(GET_PED_RELATIONSHIP_GROUP_HASH()) == uLocal_150[1])
		{
			SET_PED_RELATIONSHIP_GROUP_HASH(SET_PED_RELATIONSHIP_GROUP_HASH(), iLocal_151);
		}
	}
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_44(PARTICIPANT_ID(), 9))
		{
			SET_ENTITY_INVINCIBLE(SET_ENTITY_INVINCIBLE(), false);
			func_82(9);
		}
	}
	func_51();
	Global_2531497.f_267 = 0;
	func_886(Global_1674861, -1, -1, -1, -1);
	func_826(1, 0);
	func_825();
	func_531();
	func_67();
	if (IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE()))
	{
		iVar0 = GET_VEHICLE_PED_IS_USING(GET_VEHICLE_PED_IS_USING());
		iVar1 = GET_ENTITY_MODEL(iVar0);
		if (func_526(iVar1))
		{
			0x73561D4425A021A2(iVar0, 0);
		}
	}
	func_578(0);
	func_824();
	func_823();
	TERMINATE_THIS_THREAD();
}

void func_823()
{
	REMOVE_RELATIONSHIP_GROUP(uLocal_150[0]);
	REMOVE_RELATIONSHIP_GROUP(uLocal_150[1]);
}

void func_824()
{
	if (Global_1672277)
	{
		if (IS_BIT_SET(Global_1672278, 0))
		{
			CLEAR_BIT(&Global_2540191, 0);
		}
		if (IS_BIT_SET(Global_1672278, 1))
		{
			CLEAR_BIT(&Global_2540191, 1);
		}
		if (IS_BIT_SET(Global_1672278, 5))
		{
			CLEAR_BIT(&Global_2540191, 5);
		}
		if (_DOES_DOOR_EXIST(-355737150))
		{
			_SET_DOOR_ACCELERATION_LIMIT(-355737150, 1, false, false);
		}
		if (_DOES_DOOR_EXIST(-580979506))
		{
			_SET_DOOR_ACCELERATION_LIMIT(-580979506, 1, false, false);
		}
		if (_DOES_DOOR_EXIST(-1426452475))
		{
			_SET_DOOR_ACCELERATION_LIMIT(-1426452475, 1, false, false);
		}
		if (_DOES_DOOR_EXIST(745417724))
		{
			_SET_DOOR_ACCELERATION_LIMIT(745417724, 1, false, false);
		}
		if (_DOES_DOOR_EXIST(-1305304906))
		{
			_SET_DOOR_ACCELERATION_LIMIT(-1305304906, 1, false, false);
		}
		if (_DOES_DOOR_EXIST(-1543175077))
		{
			_SET_DOOR_ACCELERATION_LIMIT(-1543175077, 1, false, false);
		}
		if (_DOES_DOOR_EXIST(-811770997))
		{
			_SET_DOOR_ACCELERATION_LIMIT(-811770997, 1, false, false);
		}
		Global_1672278 = 0;
	}
	Global_1672277 = 0;
}

void func_825()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573899 = { Var0 };
	Global_1573899.f_13 = func_29();
	if (IS_BIT_SET(Global_1573343, 3))
	{
		CLEAR_BIT(&Global_1573343, 3);
	}
}

void func_826(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1363235.f_1.f_108 != 0)
	{
		Global_1363235.f_1.f_108 = 0;
	}
	Global_1363235.f_1.f_109 = -1;
	Global_1363235.f_1.f_110 = -1;
	if (Global_1628955[PLAYER_ID() /*614*/].f_11.f_33 == 167 || Global_1628955[PLAYER_ID() /*614*/].f_11.f_33 == 168)
	{
		func_884();
		CLEAR_BIT(&(Global_1674852.f_3), 4);
	}
	if ((func_144() && iParam1 != 0) && Global_262145.f_16969)
	{
		if (Global_1628955[PLAYER_ID() /*614*/].f_11.f_33 == 190 || Global_1628955[PLAYER_ID() /*614*/].f_11.f_33 == 192)
		{
			func_866(PLAYER_ID(), iParam1, 1, 0);
		}
	}
	if (((Global_1628955[PLAYER_ID() /*614*/].f_11.f_33 == 164 || Global_1628955[PLAYER_ID() /*614*/].f_11.f_33 == 208) || Global_1628955[PLAYER_ID() /*614*/].f_11.f_33 == 250) || Global_1628955[PLAYER_ID() /*614*/].f_11.f_33 == 237)
	{
		ENABLE_DISPATCH_SERVICE(3, true);
		ENABLE_DISPATCH_SERVICE(5, true);
	}
	if (Global_1628955[PLAYER_ID() /*614*/].f_11.f_33 != -1)
	{
		Global_1628955[PLAYER_ID() /*614*/].f_11.f_33 = -1;
		if (!IS_BIT_SET(Global_1574647.f_1, 14) && !func_120(IS_BIT_SET()))
		{
			func_722(0);
		}
	}
	else if (func_864(PLAYER_ID()) != -1)
	{
		func_735(-1);
	}
	func_863(func_29());
	if (func_234(16))
	{
		func_862(16);
	}
	func_859(0);
	func_731(-1);
	func_825();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_858(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_856(iVar1);
		iVar1++;
	}
	if (IS_BIT_SET(Global_1674852.f_3, 0))
	{
		SET_WANTED_LEVEL_MULTIPLIER(1f);
		SET_MAX_WANTED_LEVEL(5);
		CLEAR_BIT(&(Global_1674852.f_3), 0);
	}
	if (IS_BIT_SET(Global_1674852.f_3, 5))
	{
		CLEAR_BIT(&(Global_1674852.f_3), 5);
	}
	iVar2 = func_106();
	if ((func_88(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_855(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_143(iVar2))
	{
		func_852(-1, 1);
	}
	else if (((((func_105(iVar2) || func_851(iVar2)) || func_850(iVar2)) || func_133(iVar2)) || func_132(iVar2)) || func_131(iVar2))
	{
	}
	else
	{
		func_852(-1, 1);
	}
	func_777(19);
	func_777(20);
	func_777(21);
	func_777(22);
	func_777(27);
	func_862(3);
	func_862(4);
	func_862(7);
	func_849();
	if (func_115(PLAYER_ID()))
	{
		func_848(0);
	}
	func_777(29);
	Global_1628955[PLAYER_ID() /*614*/].f_11.f_57 = func_29();
	if (Global_2531497.f_4898.f_39 != 0)
	{
		Global_2531497.f_4898.f_39 = 0;
	}
	if (bParam0)
	{
		func_841();
	}
	if (!func_120(PLAYER_ID()))
	{
		func_840();
		CLEAR_BIT(&(Global_1674852.f_3), 1);
	}
	if (IS_BIT_SET(Global_1674852.f_3, 6))
	{
		ENABLE_DISPATCH_SERVICE(3, true);
		ENABLE_DISPATCH_SERVICE(5, true);
		CLEAR_BIT(&(Global_1674852.f_3), 6);
	}
	if (IS_BIT_SET(Global_1674852.f_3, 7))
	{
		CLEAR_BIT(&(Global_1674852.f_3), 7);
	}
	if (IS_BIT_SET(Global_1674852.f_3, 8))
	{
		func_839("IMPEXP_SELFDES", 0);
		func_829("IMPEXP_SELFDES");
		CLEAR_BIT(&(Global_1674852.f_3), 8);
	}
	func_827(iVar2, 0);
}

void func_827(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!IS_BIT_SET(Global_1674852.f_3, 9))
		{
			START_AUDIO_SCENE(func_828(iParam0));
			SET_BIT(&(Global_1674852.f_3), 9);
		}
	}
	else if (IS_BIT_SET(Global_1674852.f_3, 9))
	{
		STOP_AUDIO_SCENE(func_828(iParam0));
		CLEAR_BIT(&(Global_1674852.f_3), 9);
	}
}

char* func_828(int iParam0)
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		
		default:
	}
	return "";
}

void func_829(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!IS_STRING_NULL(&(Global_111560.f_14136[iVar0 /*104*/])))
		{
			if (ARE_STRINGS_EQUAL(&(Global_111560.f_14136[iVar0 /*104*/]), sParam0))
			{
				if (Global_111560.f_14136[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_831();
					Global_111560.f_14136[iVar0 /*104*/].f_99[Global_19486] = 0;
					if (func_830(iVar0))
					{
					}
					else
					{
						Global_111560.f_14136[iVar0 /*104*/].f_24 = 0;
						Global_111560.f_14136[iVar0 /*104*/].f_28 = 0;
						Global_111560.f_14136[iVar0 /*104*/].f_29 = 0;
					}
					_REMOVE_NOTIFICATION(Global_111560.f_14136[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_830(int iParam0)
{
	if ((Global_111560.f_14136[iParam0 /*104*/].f_99[0] == 1 || Global_111560.f_14136[iParam0 /*104*/].f_99[1] == 1) || Global_111560.f_14136[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_831()
{
	if (func_838(14))
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
		Global_19486 = func_832();
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

var func_832()
{
	func_833();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_833()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()))
	{
		if (func_836(Global_111560.f_2358.f_539.f_4321) != GET_ENTITY_MODEL(GET_ENTITY_MODEL()))
		{
			iVar0 = func_835(PLAYER_PED_ID());
			if (func_834(iVar0) && (!func_838(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_834(Global_111560.f_2358.f_539.f_4321))
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

bool func_834(int iParam0)
{
	return iParam0 < 3;
}

int func_835(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_836(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_836(int iParam0)
{
	if (func_834(iParam0))
	{
		return func_837(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_837(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_838(int iParam0)
{
	return Global_41396 == iParam0;
}

void func_839(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!IS_STRING_NULL(&(Global_111560.f_14136[iVar0 /*104*/])))
		{
			if (ARE_STRINGS_EQUAL(&(Global_111560.f_14136[iVar0 /*104*/]), sParam0))
			{
				if (Global_111560.f_14136[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_111560.f_14136[iVar0 /*104*/].f_24 = 1;
				if (Global_111560.f_14136[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_111560.f_14136[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_111560.f_14046[0 /*20*/].f_17 = 0;
					}
					if (Global_111560.f_14136[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_111560.f_14046[1 /*20*/].f_17 = 0;
					}
					if (Global_111560.f_14136[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_111560.f_14046[2 /*20*/].f_17 = 0;
					}
					if (Global_111560.f_14136[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_111560.f_14046[3 /*20*/].f_17 = 0;
					}
					Global_111560.f_14136[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_111560.f_14136[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_840()
{
	if (IS_THREAD_ACTIVE(Global_2531497.f_4894))
	{
		if (!Global_2531497.f_4894 == GET_ID_OF_THIS_THREAD() && Global_2531497.f_4893 < 1f)
		{
			return;
		}
	}
	Global_2531497.f_4894 = -1;
	Global_2531497.f_4893 = 1f;
}

void func_841()
{
	0x213AEB2B90CBA7AC(&(Global_2405071.f_24), &Global_2409324, 2);
	0x213AEB2B90CBA7AC(&(Global_2405071.f_26), &Global_2409326, 19);
	func_846();
	func_842(1, 1, 0);
	func_52();
}

void func_842(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		0x213AEB2B90CBA7AC(&(Global_2405071.f_45), &Global_2409345, 318);
	}
	else
	{
		Global_2405071.f_45 = { Global_2409345 };
		Global_2405071.f_45.f_49 = { Global_2409345.f_49 };
		Global_2405071.f_45.f_52 = Global_2409345.f_52;
		Global_2405071.f_45.f_53 = Global_2409345.f_53;
	}
	if (bParam0)
	{
		func_845();
	}
	if (!bParam2)
	{
		func_54(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_844(0);
	func_843();
}

void func_843()
{
	struct<6> Var0;
	
	if (Global_2405071.f_485.f_1 == GET_ID_OF_THIS_THREAD())
	{
		Global_2405071.f_485 = { Var0 };
	}
}

void func_844(bool bParam0)
{
	if (bParam0)
	{
		Global_2405071.f_703 = 0;
	}
	else
	{
		Global_2405071.f_703 = 1;
	}
}

void func_845()
{
	0x213AEB2B90CBA7AC(&(Global_2405071.f_363), &Global_2409663, 121);
}

void func_846()
{
	func_847();
	Global_2405071.f_2252 = 0;
}

void func_847()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405071.f_2253[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_848(bool bParam0)
{
	if (bParam0)
	{
		if (!func_107(PLAYER_ID(), 9))
		{
			if (func_113(PLAYER_ID()) != 0)
			{
				func_122(9);
			}
		}
	}
	else if (func_107(PLAYER_ID(), 9))
	{
		func_777(9);
	}
}

void func_849()
{
	if (func_577(PLAYER_ID()))
	{
		func_777(25);
	}
}

int func_850(int iParam0)
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_851(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_852(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_106();
	}
	if (iParam0 > 0)
	{
		if (func_176() != func_29())
		{
			if (func_749(PLAYER_ID()) == PLAYER_ID())
			{
				Global_2509053.f_93[func_854(iParam0)] = 1;
			}
		}
		iVar0 = func_854(159);
		if (func_853(iVar0, Global_262145.f_12606, bParam1))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(157);
		if (func_853(iVar0, Global_262145.f_12606, bParam1))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(148);
		if (func_853(iVar0, Global_262145.f_12606, bParam1))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(164);
		if (func_853(iVar0, Global_262145.f_12606, bParam1))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(142);
		if (func_853(iVar0, Global_262145.f_12606, bParam1))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(152);
		if (func_853(iVar0, Global_262145.f_12606, bParam1))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(166);
		if (func_853(iVar0, Global_262145.f_12606, bParam1))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(170);
		if (func_853(iVar0, Global_262145.f_12606, bParam1))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(173);
		if (func_853(iVar0, Global_262145.f_12606, bParam1))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(179);
		if (func_853(iVar0, Global_262145.f_12606, bParam1))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(200);
		if (func_853(iVar0, Global_262145.f_12606, bParam1))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(201);
		if (func_853(iVar0, Global_262145.f_12606, bParam1))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(182);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(183);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(185);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(186);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(180);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(195);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(197);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(198);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(207);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(208);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(209);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(214);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(215);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(216);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(217);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(218);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(219);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(220);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(221);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_853(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_107(PLAYER_ID(), 19) && !func_107(PLAYER_ID(), 20)) && !func_107(PLAYER_ID(), 9))
		{
			return 0;
		}
	}
	if (Global_2509053.f_93[iParam0] == 1 && func_5(&(Global_2509053[iParam0 /*2*/])))
	{
		if (func_22(&(Global_2509053[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2509053.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_854(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 11;
		
		case 157:
			return 12;
		
		case 148:
			return 13;
		
		case 164:
			return 14;
		
		case 142:
			return 15;
		
		case 152:
			return 16;
		
		case 163:
			return 17;
		
		case 155:
			return 18;
		
		case 160:
			return 19;
		
		case 153:
			return 20;
		
		case 162:
			return 21;
		
		case 154:
			return 22;
		
		case 166:
			return 8;
		
		case 170:
			return 9;
		
		case 173:
			return 10;
		
		case 171:
			return 23;
		
		case 172:
			return 24;
		
		case 179:
			return 25;
		
		case 189:
			return 26;
		
		case 193:
			return 27;
		
		case 194:
			return 28;
		
		case 199:
			return 29;
		
		case 201:
			return 30;
		
		case 200:
			return 31;
		
		case 205:
			return 32;
		
		case 210:
			return 33;
		
		case 182:
			return 34;
		
		case 183:
			return 35;
		
		case 185:
			return 36;
		
		case 186:
			return 37;
		
		case 180:
			return 38;
		
		case 195:
			return 39;
		
		case 197:
			return 40;
		
		case 198:
			return 41;
		
		case 207:
			return 42;
		
		case 208:
			return 43;
		
		case 209:
			return 44;
		
		case 211:
			return 45;
		
		case 214:
			return 0;
		
		case 215:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 3;
		
		case 218:
			return 4;
		
		case 219:
			return 5;
		
		case 220:
			return 6;
		
		case 221:
			return 7;
		
		default:
	}
	return -1;
}

void func_855(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_106();
	}
	if (iParam0 > 0)
	{
		if (func_176() != func_29())
		{
			Global_2509053.f_93[func_854(iParam0)] = 1;
		}
		iVar0 = func_854(155);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(163);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(160);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(153);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(162);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(154);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(171);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(172);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(199);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(194);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(193);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(210);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(205);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(189);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_854(211);
		if (func_853(iVar0, Global_262145.f_12607, 0))
		{
			func_7(&(Global_2509053[iVar0 /*2*/]));
			func_4(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_856(int iParam0)
{
	if (!func_11(Global_1628955[PLAYER_ID() /*614*/].f_11.f_337[iParam0 /*3*/], func_857(), 0))
	{
		Global_1628955[PLAYER_ID() /*614*/].f_11.f_337[iParam0 /*3*/] = { func_857() };
	}
	if (!func_11(Global_1628955[PLAYER_ID() /*614*/].f_11.f_324[iParam0 /*3*/], func_857(), 0))
	{
		Global_1628955[PLAYER_ID() /*614*/].f_11.f_324[iParam0 /*3*/] = { func_857() };
	}
}

Vector3 func_857()
{
	vector3 vVar0;
	
	return vVar0;
}

void func_858(int iParam0)
{
	if (!func_11(Global_1628955[PLAYER_ID() /*614*/].f_11.f_150[iParam0 /*3*/], func_857(), 0))
	{
		Global_1628955[PLAYER_ID() /*614*/].f_11.f_150[iParam0 /*3*/] = { func_857() };
	}
	if (!func_11(Global_1628955[PLAYER_ID() /*614*/].f_11.f_125[iParam0 /*3*/], func_857(), 0))
	{
		Global_1628955[PLAYER_ID() /*614*/].f_11.f_125[iParam0 /*3*/] = { func_857() };
	}
}

void func_859(bool bParam0)
{
	if (bParam0)
	{
		if (!func_772(PLAYER_ID(), 14))
		{
			func_861(14);
		}
	}
	else if (func_772(PLAYER_ID(), 14))
	{
		func_860(14);
	}
}

void func_860(int iParam0)
{
	CLEAR_BIT(&(Global_1628955[CLEAR_BIT() /*614*/].f_11.f_5), iParam0);
}

void func_861(int iParam0)
{
	SET_BIT(&(Global_1628955[SET_BIT() /*614*/].f_11.f_5), iParam0);
}

void func_862(int iParam0)
{
	CLEAR_BIT(&(Global_2531497.f_4898.f_43), iParam0);
}

void func_863(int iParam0)
{
	if (func_41(PLAYER_ID()))
	{
		if (PLAYER_ID() != iParam0)
		{
			if (Global_1628955[PLAYER_ID() /*614*/].f_11.f_484 != iParam0)
			{
				Global_1628955[PLAYER_ID() /*614*/].f_11.f_484 = iParam0;
				if (iParam0 != func_29())
				{
				}
			}
		}
	}
}

int func_864(int iParam0)
{
	if (func_865(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_32;
	}
	return -1;
}

int func_865(int iParam0, int iParam1)
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_32 != -1 || (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_866(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_334(iParam0, iParam1) && func_883(iParam0, iParam1))
	{
		iVar0 = func_333(iParam0, iParam1);
		func_870(iVar0, bParam2, bParam3);
		func_867(iVar0, 1);
	}
}

void func_867(int iParam0, bool bParam1)
{
	if (!func_869(iParam0))
	{
		return;
	}
	func_320(func_868(iParam0), bParam1, -1, 1);
	Global_1590446[PLAYER_ID() /*871*/].f_273.f_179[iParam0 /*12*/].f_6 = bParam1;
}

int func_868(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

bool func_869(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_870(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_629(PLAYER_ID(), iParam0);
	if (!bParam1)
	{
		func_882(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2507929[iParam0];
		iVar0 = func_881(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1676736 = -1;
		}
		func_880(iParam0, 0, bParam2);
	}
	else if (func_878(iParam0, bParam2))
	{
		iVar0 = func_877(iVar2, 0);
		iVar3 = func_705(PLAYER_ID(), iVar2);
		iVar4 = func_876(iVar2, bParam2);
		iVar5 = func_877(iVar2, bParam2);
		fVar6 = (to_float(iVar5) / to_float(iVar4));
		iVar0 = (iVar0 - round((to_float(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_875(iVar2) && func_874(PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_882(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_873(PLAYER_ID(), iVar2) > 0)
		{
			func_872(iParam0, (Global_1590446[PLAYER_ID() /*871*/].f_273.f_179[iParam0 /*12*/].f_2 - (func_876(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_877(iVar2, bParam2) / func_873(PLAYER_ID(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_875(iVar2) && func_874(PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_871(PLAYER_ID(), iVar2, iVar0, bParam2);
}

void func_871(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return;
	}
	if (func_327(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1590446[iParam0 /*871*/].f_273.f_253 = iParam2;
				}
				else
				{
					Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_872(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1590446[PLAYER_ID() /*871*/].f_273.f_179[iParam0 /*12*/].f_2)
	{
		Global_1590446[PLAYER_ID() /*871*/].f_273.f_179[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_873(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_327(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_874(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_29())
	{
		return 0;
	}
	if (func_327(iParam1) && func_875(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_875(int iParam0)
{
	return func_170(iParam0) == 5;
}

int func_876(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_170(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16938;
			if (func_332(PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16943;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_16937;
			if (func_332(PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16942;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_16936;
			if (func_332(PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16941;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_16934;
			if (func_332(PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16939;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_16935;
			if (func_332(PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16940;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_21062;
				if (func_332(PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21063;
				}
			}
			else
			{
				uVar0 = Global_262145.f_21046;
				if (func_332(PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21047;
				}
			}
			break;
	}
	return uVar0;
}

int func_877(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_170(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16919;
			if (func_332(PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16928);
			}
			if (func_332(PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16933);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16920;
			if (func_332(PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16927);
			}
			if (func_332(PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16932);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16921;
			if (func_332(PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16926);
			}
			if (func_332(PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16931);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16922;
			if (func_332(PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16924);
			}
			if (func_332(PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16929);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16923;
			if (func_332(PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16925);
			}
			if (func_332(PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16930);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_21059;
			}
			else
			{
				iVar0 = Global_262145.f_21043;
			}
			if (func_332(PLAYER_ID(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21060);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21044);
				}
			}
			if (func_332(PLAYER_ID(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21061);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21045);
				}
			}
			if (func_874(PLAYER_ID(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_878(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_321(15384, -1, -1);
	}
	return func_321(func_879(iParam0), -1, -1);
}

int func_879(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		case 5:
			return 15372;
		
		default:
	}
	return 9416;
}

void func_880(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		func_320(15384, bParam1, -1, 1);
		return;
	}
	func_320(func_879(iParam0), bParam1, -1, 1);
}

int func_881(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2507929[iParam0];
	iVar1 = func_629(PLAYER_ID(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2507936;
	}
	if (func_875(iVar1))
	{
		if (func_874(PLAYER_ID(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_882(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2507936 = iParam1;
		return;
	}
	Global_2507929[iParam0] = iParam1;
}

int func_883(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_334(iParam0, iParam1))
	{
		iVar0 = func_333(iParam0, iParam1);
		if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_4 > 0 && Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_884()
{
	CLEAR_BIT(&(Global_2531497.f_1737), 28);
	CLEAR_BIT(&(Global_2531497.f_1737), 29);
	func_885(24);
}

void func_885(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	CLEAR_BIT(&(Global_2531497.f_4898.f_7[iVar0]), iVar1);
}

void func_886(struct<14> Param0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	char* sVar0;
	struct<15> Var1;
	struct<19> Var2;
	struct<19> Var3;
	struct<16> Var4;
	struct<17> Var5;
	struct<15> Var6;
	struct<17> Var7;
	struct<17> Var8;
	
	sVar0 = GET_THIS_SCRIPT_NAME();
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (ARE_STRINGS_EQUAL(sVar0, "GB_CARJACKING"))
		{
			Var1 = { Param0 };
			Var1.f_14 = iParam1;
			0x7B18DA61F6BAE9D5(&Var1);
		}
		else if (ARE_STRINGS_EQUAL(sVar0, "GB_ROB_SHOP"))
		{
			Var2 = { Param0 };
			Var2.f_14 = Global_1674861.f_14;
			Var2.f_15 = iParam1;
			Var2.f_16 = iParam2;
			Var2.f_17 = iParam3;
			Var2.f_18 = iParam4;
			0x06EAF70AE066441E(&Var2);
		}
		else if (ARE_STRINGS_EQUAL(sVar0, "GB_COLLECT_MONEY"))
		{
			Var3 = { Param0 };
			Var3.f_14 = Global_1674861.f_14;
			Var3.f_15 = iParam1;
			Var3.f_16 = iParam2;
			Var3.f_17 = iParam3;
			Var3.f_18 = iParam4;
			0x14EDA9EE27BD1626(&Var3);
		}
		else if (ARE_STRINGS_EQUAL(sVar0, "GB_FIVESTAR"))
		{
			Var4 = { Param0 };
			Var4.f_14 = Global_1674861.f_14;
			Var4.f_15 = iParam1;
			0x930F504203F561C9(&Var4);
		}
		else if (ARE_STRINGS_EQUAL(sVar0, "GB_FINDERSKEEPERS"))
		{
			Var5 = { Param0 };
			Var5.f_14 = Global_1674861.f_14;
			Var5.f_15 = iParam1;
			Var5.f_16 = iParam2;
			0xE3261D791EB44ACB(&Var5);
		}
		else if (ARE_STRINGS_EQUAL(sVar0, "GB_POINT_TO_POINT"))
		{
			Var6 = { Param0 };
			Var6.f_14 = Global_1674861.f_14;
			0x73001E34F85137F8(&Var6);
		}
		else if (ARE_STRINGS_EQUAL(sVar0, "GB_CASHING_OUT"))
		{
			Var7 = { Param0 };
			Var7.f_14 = iParam1;
			Var7.f_15 = (to_float(iParam1) / to_float(iParam2));
			Var7.f_16 = iParam3;
			0x53CAE13E9B426993(&Var7);
		}
		else if (ARE_STRINGS_EQUAL(sVar0, "GB_SALVAGE"))
		{
			Var8 = { Param0 };
			Var8.f_14 = iParam1;
			Var8.f_15 = iParam2;
			Var8.f_16 = Global_1674861.f_14;
			0x7D36291161859389(&Var8);
		}
	}
	func_887();
}

void func_887()
{
	struct<18> Var0;
	
	Global_1674861 = { Var0 };
}

bool func_888(var uParam0)
{
	return IS_BIT_SET(*uParam0, 0);
}

void func_889(bool bParam0, bool bParam1)
{
	bool bVar0;
	var uVar1;
	
	if (!func_736(0))
	{
		uVar1 = func_945(func_25(), bParam0, bVar0, bParam1);
		Global_1674861.f_2 = Local_175.f_33;
		Global_1674861.f_3 = Local_175.f_34;
		func_890(bParam0, uVar1, 0, 0, -1, -1, -1, -1, -1, 0);
		func_712(0);
	}
}

void func_890(bool bParam0, var uParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_414(PLAYER_ID());
		Global_1675140.f_4 = func_668();
		Global_1675140.f_5 = func_667();
		if (func_116(PLAYER_ID()) || func_117(PLAYER_ID()))
		{
			Global_1675140.f_6 = 1;
		}
		else
		{
			Global_1675140.f_6 = 0;
		}
		Global_1675140.f_1 = func_941(bParam9);
		Global_1675140.f_8 = 0xF12E6CD06C73D69E();
		Global_1675140.f_9 = func_708(bParam0);
		Global_1675140.f_10 = uParam1;
		Global_1675140.f_17 = Global_1675140.f_2;
		Global_1675140.f_18 = Global_1675140.f_2;
		Global_1675140.f_19 = func_700();
		Global_1675140.f_21 = (Global_1675140.f_8 - Global_1675140.f_7);
		if (func_281(PLAYER_ID(), 1))
		{
			Global_1675140.f_23 = func_708(func_99(1));
		}
		Global_1675140.f_24 = func_940(PLAYER_ID());
		Global_1675140.f_28 = func_709(PLAYER_ID());
		if (Global_1675140.f_24 > 2)
		{
			Global_1675140.f_24 = 2;
		}
		func_938(iVar0);
	}
	else
	{
		iVar0 = func_63(PLAYER_ID());
	}
	if (func_96(iVar0))
	{
		Global_1674879.f_2 = func_668();
		Global_1674879.f_3 = func_667();
		Global_1674879.f_50 = iParam4;
		Global_1674879.f_51 = iParam5;
		Global_1674879.f_10 = 0xF12E6CD06C73D69E();
		Global_1674879.f_20 = (Global_1674879.f_10 - Global_1674879.f_9);
		Global_1674879.f_12 = uParam1;
		Global_1674879.f_19 = func_934(iVar0, bParam0, func_937(bParam3));
		if (bParam0)
		{
			Global_1674879.f_11 = 1;
		}
		else
		{
			Global_1674879.f_11 = 0;
		}
		if ((func_115(PLAYER_ID()) || func_114(PLAYER_ID())) || func_118(PLAYER_ID()))
		{
			Global_1674879.f_8 = 1;
		}
		else
		{
			Global_1674879.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1674879.f_43 = 0;
			Global_1674879.f_45 = func_705(func_176(), iParam2);
			Global_1674879.f_47 = iParam7;
			Global_1674879.f_46 = iParam6;
			Global_1674879.f_52 = func_933(func_176(), iParam2);
		}
		func_931(iVar0);
	}
	else if (func_104(iVar0))
	{
		Global_1674933.f_2 = func_668();
		Global_1674933.f_3 = func_667();
		Global_1674933.f_10 = 0xF12E6CD06C73D69E();
		Global_1674933.f_19 = (Global_1674933.f_10 - Global_1674933.f_9);
		Global_1674933.f_12 = uParam1;
		if (bParam0)
		{
			Global_1674933.f_11 = 1;
		}
		else
		{
			Global_1674933.f_11 = 0;
		}
		if ((func_115(PLAYER_ID()) || func_114(PLAYER_ID())) || func_118(PLAYER_ID()))
		{
			Global_1674933.f_8 = 1;
		}
		else
		{
			Global_1674933.f_8 = 0;
		}
		func_929(iVar0);
	}
	else if (func_133(iVar0))
	{
		Global_1674996.f_2 = func_668();
		Global_1674996.f_3 = func_667();
		Global_1674996.f_9 = 0xF12E6CD06C73D69E();
		Global_1674996.f_18 = (Global_1674996.f_9 - Global_1674996.f_8);
		Global_1674996.f_11 = uParam1;
		Global_1674996.f_7 = func_700();
		Global_1674996.f_42 = func_702(func_49(), 5);
		iVar1 = PLAYER_ID();
		iVar2 = func_156(iVar1);
		Global_1674996.f_28 = iVar2;
		Global_1674996.f_29 = func_708((func_636(iVar1) || func_635(iVar1)));
		Global_1674996.f_30 = func_708(func_928(iVar1));
		Global_1674996.f_32 = func_708(func_633(iVar1));
		Global_1674996.f_33 = func_708(func_634(iVar1));
		Global_1674996.f_34 = func_708(func_927(iVar1));
		Global_1674996.f_35 = func_708(func_632(0, iVar1) == 1);
		Global_1674996.f_36 = func_708(func_926(iVar1));
		Global_1674996.f_37 = func_708(func_925(iVar1));
		Global_1674996.f_38 = func_708(func_924(iVar1));
		Global_1674996.f_39 = func_708(func_332(iVar1, iVar2, 0));
		Global_1674996.f_40 = func_708(func_332(iVar1, iVar2, 2));
		Global_1674996.f_41 = func_708(func_332(iVar1, iVar2, 1));
		if (func_923(iVar1))
		{
			Global_1674996.f_31 = 2;
		}
		else if (func_922(iVar1))
		{
			Global_1674996.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1674996.f_10 = 1;
		}
		else
		{
			Global_1674996.f_10 = 0;
		}
		if ((func_115(PLAYER_ID()) || func_114(PLAYER_ID())) || func_118(PLAYER_ID()))
		{
			Global_1674996.f_6 = 1;
		}
		else
		{
			Global_1674996.f_6 = 0;
		}
		Global_1674996.f_21 = -2;
		Global_1674996.f_22 = -2;
		func_920(iVar0);
	}
	else if (func_132(iVar0))
	{
		Global_1675040.f_2 = func_668();
		Global_1675040.f_3 = func_667();
		if ((func_115(PLAYER_ID()) || func_114(PLAYER_ID())) || func_118(PLAYER_ID()))
		{
			Global_1675040.f_6 = 1;
		}
		else
		{
			Global_1675040.f_6 = 0;
		}
		Global_1675040.f_9 = 0xF12E6CD06C73D69E();
		Global_1675040.f_10 = func_708(bParam0);
		Global_1675040.f_11 = uParam1;
		Global_1675040.f_17 = func_701(func_92());
		Global_1675040.f_18 = (Global_1675040.f_9 - Global_1675040.f_8);
		Global_1675040.f_20 = iParam8;
		Global_1675040.f_21 = -2;
		Global_1675040.f_22 = -2;
		Global_1675040.f_27 = func_919();
		Global_1675040.f_29 = func_141(6107, -1, 0);
		Global_1675040.f_30 = func_141(6103, -1, 0);
		Global_1675040.f_31 = func_141(6104, -1, 0);
		Global_1675040.f_32 = func_141(6106, -1, 0);
		Global_1675040.f_33 = func_141(6105, -1, 0);
		Global_1675040.f_34 = func_141(6108, -1, 0);
		Global_1675040.f_36 = func_708(func_99(1));
		Global_1675040.f_37 = func_917();
		func_907();
		func_905(iVar0);
	}
	else if (func_131(iVar0))
	{
		Global_1675094.f_2 = func_668();
		Global_1675094.f_3 = func_667();
		if ((func_115(PLAYER_ID()) || func_114(PLAYER_ID())) || func_118(PLAYER_ID()))
		{
			Global_1675094.f_6 = 1;
		}
		else
		{
			Global_1675094.f_6 = 0;
		}
		Global_1675094.f_9 = 0xF12E6CD06C73D69E();
		Global_1675094.f_10 = func_708(bParam0);
		Global_1675094.f_11 = uParam1;
		Global_1675094.f_18 = (Global_1675094.f_9 - Global_1675094.f_8);
		Global_1675094.f_20 = iParam8;
		Global_1675094.f_23 = Global_786547;
		Global_1675094.f_36 = Global_786547.f_1;
		Global_1675094.f_24 = func_141(6157, -1, 0);
		Global_1675094.f_25 = func_141(6162, -1, 0);
		Global_1675094.f_26 = func_141(6163, -1, 0);
		Global_1675094.f_27 = func_708((((func_699() || func_698()) || func_697()) || func_696(PLAYER_ID())));
		Global_1675094.f_28 = func_141(6164, -1, 0);
		Global_1675094.f_29 = func_708(func_695());
		Global_1675094.f_35 = -1;
		Global_1675094.f_38 = -1;
		Global_1675094.f_39 = Global_1675094.f_4;
		Global_1675094.f_40 = Global_1675094.f_5;
		Global_1675094.f_41 = func_668();
		Global_1675094.f_42 = func_708(func_99(1));
		Global_1675094.f_44 = Global_1675094.f_18;
		func_903(iVar0);
	}
	else if (func_126(iVar0))
	{
		if (Global_1675228.f_2 == -1)
		{
			Global_1675228.f_2 = func_668();
		}
		if (Global_1675228.f_3 == -1)
		{
			Global_1675228.f_3 = func_667();
		}
		if ((func_115(PLAYER_ID()) || func_114(PLAYER_ID())) || func_118(PLAYER_ID()))
		{
			Global_1675228.f_6 = 1;
		}
		else
		{
			Global_1675228.f_6 = 0;
		}
		Global_1675228.f_1 = func_941(0);
		Global_1675228.f_7 = func_700();
		Global_1675228.f_9 = 0xF12E6CD06C73D69E();
		Global_1675228.f_10 = func_708(bParam0);
		Global_1675228.f_11 = uParam1;
		if (func_176() != -1)
		{
			Global_1675228.f_17 = func_694(func_176());
		}
		Global_1675228.f_18 = (Global_1675228.f_9 - Global_1675228.f_8);
		Global_1675228.f_19 = Global_2531497.f_6307;
		Global_1675228.f_28 = func_709(PLAYER_ID());
		Global_1675228.f_29 = func_708(func_902(PLAYER_ID()));
		Global_1675228.f_30 = func_708(func_901(PLAYER_ID()));
		Global_1675228.f_31 = func_676(PLAYER_ID());
		if (func_281(PLAYER_ID(), 1))
		{
			Global_1675228.f_33 = func_708(func_99(1));
		}
		if (Global_1675228.f_34 > 2)
		{
			Global_1675228.f_34 = 2;
		}
		func_899(iVar0);
	}
	else if (func_130(iVar0))
	{
		Global_1675175.f_2 = func_668();
		Global_1675175.f_3 = func_667();
		if ((func_115(PLAYER_ID()) || func_114(PLAYER_ID())) || func_118(PLAYER_ID()))
		{
			Global_1675175.f_6 = 1;
		}
		else
		{
			Global_1675175.f_6 = 0;
		}
		Global_1675175.f_1 = func_941(0);
		Global_1675175.f_9 = 0xF12E6CD06C73D69E();
		Global_1675175.f_10 = func_708(bParam0);
		Global_1675175.f_11 = uParam1;
		Global_1675175.f_18 = (Global_1675175.f_9 - Global_1675175.f_8);
		Global_1675175.f_28 = func_709(PLAYER_ID());
		if (Global_1675175.f_28)
		{
			Global_1675175.f_29 = func_693(PLAYER_ID());
		}
		else
		{
			Global_1675175.f_29 = 0;
		}
		Global_1675175.f_30 = func_677(PLAYER_ID(), 4, -1);
		Global_1675175.f_31 = func_676(PLAYER_ID());
		Global_1675175.f_32 = func_708(func_675(PLAYER_ID()));
		Global_1675175.f_33 = func_708(func_674(PLAYER_ID()));
		Global_1675175.f_34 = func_708(func_673(PLAYER_ID()));
		Global_1675175.f_35 = func_708(func_672(PLAYER_ID()));
		Global_1675175.f_36 = func_671(PLAYER_ID());
		Global_1675175.f_37 = func_670(PLAYER_ID());
		Global_1675175.f_39 = func_669(PLAYER_ID());
		if (func_281(PLAYER_ID(), 1))
		{
			Global_1675175.f_41 = func_708(func_99(1));
		}
		if (Global_1675175.f_42 > 2)
		{
			Global_1675175.f_42 = 2;
		}
		func_897(iVar0);
	}
	else if (func_125(iVar0))
	{
		Global_1675312.f_2 = func_668();
		Global_1675312.f_3 = func_667();
		Global_1675312.f_4 = func_711(func_176());
		Global_1675312.f_5 = func_710(func_176());
		if ((func_115(PLAYER_ID()) || func_114(PLAYER_ID())) || func_118(PLAYER_ID()))
		{
			Global_1675312.f_6 = 1;
		}
		else
		{
			Global_1675312.f_6 = 0;
		}
		Global_1675312.f_7 = func_700();
		Global_1675312.f_9 = 0xF12E6CD06C73D69E();
		Global_1675312.f_10 = func_708(bParam0);
		Global_1675312.f_11 = uParam1;
		if (func_92() != -1)
		{
			Global_1675312.f_17 = func_694(func_92());
		}
		Global_1675312.f_18 = (Global_1675312.f_9 - Global_1675312.f_8);
		Global_1675312.f_21 = 1;
		Global_1675312.f_22 = 1;
		Global_1675312.f_25 = func_896(PLAYER_ID());
		Global_1675312.f_27 = func_708(func_666(PLAYER_ID()));
		Global_1675312.f_28 = func_664(21, -1);
		Global_1675312.f_29 = func_708(func_895(PLAYER_ID()));
		func_893(iVar0);
	}
	else if (func_124(iVar0))
	{
		Global_1675387.f_6 = func_711(func_176());
		Global_1675387.f_7 = func_710(func_176());
		if (func_281(PLAYER_ID(), 1))
		{
			Global_1675387.f_8 = func_708(func_99(1));
		}
		Global_1675387.f_10 = func_700();
		Global_1675387.f_11 = 1;
		Global_1675387.f_13 = (0xF12E6CD06C73D69E() - Global_1703065);
		Global_1675387.f_14 = uParam1;
		Global_1675387.f_19 = 1;
		Global_1675387.f_20 = 1;
		func_891(iVar0);
	}
	else
	{
		Global_1674861.f_6 = 0xF12E6CD06C73D69E();
		if (bParam0)
		{
			Global_1674861.f_7 = 1;
		}
		else
		{
			Global_1674861.f_7 = 0;
		}
		Global_1674861.f_8 = uParam1;
		if (Global_1674861.f_4 == 0)
		{
			if ((func_115(PLAYER_ID()) || func_114(PLAYER_ID())) || func_118(PLAYER_ID()))
			{
				Global_1674861.f_4 = 1;
			}
		}
	}
}

void func_891(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	0x1A0D4A6C336B7BC5(&Global_1675387);
	func_892();
}

void func_892()
{
	struct<36> Var0;
	
	Global_1675387 = { Var0 };
	Global_1675387.f_23 = 0;
	Global_1675387.f_22 = 0;
	Global_1675387.f_21 = 0;
}

void func_893(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	0x2BCB3EBCFE5801C6(&Global_1675312);
	func_894();
}

void func_894()
{
	struct<31> Var0;
	
	Global_1675312 = { Var0 };
}

int func_895(int iParam0)
{
	if (iParam0 != func_29())
	{
		return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_365.f_2, 6);
	}
	return 0;
}

int func_896(int iParam0)
{
	if (func_63(iParam0) == 243)
	{
		return func_129(iParam0);
	}
	return -1;
}

void func_897(int iParam0)
{
	0x2D7A9B577E72385E(&Global_1675175);
	func_898();
}

void func_898()
{
	struct<53> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1675175 = { Var0 };
}

void func_899(int iParam0)
{
	0x830C3A44EB3F2CF9(&Global_1675228);
	func_900();
}

void func_900()
{
	struct<39> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Global_1675228 = { Var0 };
}

bool func_901(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_318.f_1, 0);
}

bool func_902(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_318.f_1, 19);
}

void func_903(int iParam0)
{
	0xD8AFB345A9C5CCBB(&Global_1675094);
	func_904();
}

void func_904()
{
	struct<46> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Global_1675094 = { Var0 };
	Global_1675094.f_16 = 0;
}

void func_905(int iParam0)
{
	0x320C35147D5B5DDD(&Global_1675040);
	func_906();
}

void func_906()
{
	struct<54> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1675040 = { Var0 };
	Global_1675040.f_23 = 0;
	Global_1675040.f_24 = 0;
	Global_1675040.f_16 = 0;
}

void func_907()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_651(12));
		func_650(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1323611[iVar1 /*141*/].f_66 != 0 && func_909(Global_1323611[iVar1 /*141*/].f_66, 1))
			{
				if (Global_2531497.f_896 != iVar1)
				{
					if (func_908(Global_1323611[iVar1 /*141*/].f_66))
					{
						if (Global_1323611[iVar1 /*141*/].f_66 != 0)
						{
							iVar3 = Global_1323611[iVar1 /*141*/].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1675040.f_38 = iVar3;
								break;
							
							case 1:
								Global_1675040.f_39 = iVar3;
								break;
							
							case 2:
								Global_1675040.f_40 = iVar3;
								break;
							
							case 3:
								Global_1675040.f_41 = iVar3;
								break;
							
							case 4:
								Global_1675040.f_42 = iVar3;
								break;
							
							case 5:
								Global_1675040.f_43 = iVar3;
								break;
							
							case 6:
								Global_1675040.f_44 = iVar3;
								break;
							
							case 7:
								Global_1675040.f_45 = iVar3;
								break;
							
							case 8:
								Global_1675040.f_46 = iVar3;
								break;
							
							case 9:
								Global_1675040.f_47 = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_908(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case -1984275979:
		case -42959138:
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case -749299473:
		case -975345305:
		case -1700874274:
		case -392675425:
		case -1763555241:
		case 1043222410:
		case joaat("lazer"):
		case -1386191424:
		case 1565978651:
		case 1036591958:
		case -1007528109:
		case -32878452:
		case -1523619738:
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case 1181327175:
		case 447548909:
		case -726768679:
			return 1;
		
		default:
	}
	if (iParam0 == 1692272545)
	{
		return 1;
	}
	return 0;
}

int func_909(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("buffalo3") && !NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_916())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < GET_NUM_DLC_VEHICLES())
		{
			if (GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (_IS_DLC_DATA_EMPTY(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_915() && !func_914()) && !func_913()) && !func_912()) && !func_916())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((IS_DURANGO_VERSION() || IS_DURANGO_VERSION()) || IS_DURANGO_VERSION())
		{
		}
		else if (!func_913())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_911(iParam0))
		{
			return 0;
		}
	}
	if (!func_910(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_910(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_173())
	{
		return 1;
	}
	_0x897433D292B44130(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!_NETWORK_SHOP_DOES_ITEM_EXIST(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_911(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2507711)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = 0xF12E6CD06C73D69E();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6599 && !Global_262145.f_12910) && iVar1 < Global_262145.f_12911)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14210 && iVar1 < Global_262145.f_14222)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14206 && iVar1 < Global_262145.f_14218)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14207 && iVar1 < Global_262145.f_14219)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14208 && iVar1 < Global_262145.f_14220)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14209 && iVar1 < Global_262145.f_14221)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14211 && iVar1 < Global_262145.f_14223)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14212 && iVar1 < Global_262145.f_14215)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14213 && iVar1 < Global_262145.f_14216)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14214 && iVar1 < Global_262145.f_14217)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16841 && iVar1 < Global_262145.f_16806)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16836 && iVar1 < Global_262145.f_16801)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16840 && iVar1 < Global_262145.f_16805)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16839 && iVar1 < Global_262145.f_16804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16833 && iVar1 < Global_262145.f_16798)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16834 && iVar1 < Global_262145.f_16799)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16837 && iVar1 < Global_262145.f_16802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16838 && iVar1 < Global_262145.f_16803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16835 && iVar1 < Global_262145.f_16800)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16843 && iVar1 < Global_262145.f_16808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16844 && iVar1 < Global_262145.f_16809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16832 && iVar1 < Global_262145.f_16797)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16831 && iVar1 < Global_262145.f_16796)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16830 && iVar1 < Global_262145.f_16795)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16842 && iVar1 < Global_262145.f_16807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16845 && iVar1 < Global_262145.f_16810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16846 && iVar1 < Global_262145.f_16811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16847 && iVar1 < Global_262145.f_16812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16848 && iVar1 < Global_262145.f_16813)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16995 && iVar1 < Global_262145.f_17017)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16996 && iVar1 < Global_262145.f_17018)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16997 && iVar1 < Global_262145.f_17019)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16998 && iVar1 < Global_262145.f_17020)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16999 && iVar1 < Global_262145.f_17021)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17000 && iVar1 < Global_262145.f_17022)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17002 && iVar1 < Global_262145.f_17023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17003 && iVar1 < Global_262145.f_17024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17004 && iVar1 < Global_262145.f_17025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17005 && iVar1 < Global_262145.f_17026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17006 && iVar1 < Global_262145.f_17027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17007 && iVar1 < Global_262145.f_17028)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17008 && iVar1 < Global_262145.f_17029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17014 && iVar1 < Global_262145.f_17036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17011 && iVar1 < Global_262145.f_17032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17012 && iVar1 < Global_262145.f_17033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17013 && iVar1 < Global_262145.f_17034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17001 && iVar1 < Global_262145.f_17035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17015 && iVar1 < Global_262145.f_17037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17009 && iVar1 < Global_262145.f_17030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17010 && iVar1 < Global_262145.f_17031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17016 && iVar1 < Global_262145.f_17038)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18647 && iVar1 < Global_262145.f_18744)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18648 && iVar1 < Global_262145.f_18745)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18649 && iVar1 < Global_262145.f_18746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18650 && iVar1 < Global_262145.f_18747)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18651 && iVar1 < Global_262145.f_18748)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18652 && iVar1 < Global_262145.f_18749)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18653 && iVar1 < Global_262145.f_18750)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18654 && iVar1 < Global_262145.f_18751)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18655 && iVar1 < Global_262145.f_18752)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18656 && iVar1 < Global_262145.f_18753)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18657 && iVar1 < Global_262145.f_18754)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18658 && iVar1 < Global_262145.f_18755)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18659 && iVar1 < Global_262145.f_18756)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18660 && iVar1 < Global_262145.f_18757)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18661 && iVar1 < Global_262145.f_18758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18662 && iVar1 < Global_262145.f_18759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18663 && iVar1 < Global_262145.f_18760)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18664 && iVar1 < Global_262145.f_18761)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18665 && iVar1 < Global_262145.f_18762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18666 && iVar1 < Global_262145.f_18763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18667 && iVar1 < Global_262145.f_18764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18668 && iVar1 < Global_262145.f_18765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18669 && iVar1 < Global_262145.f_18766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18670 && iVar1 < Global_262145.f_18767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18671 && iVar1 < Global_262145.f_18768)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1234311532)
	{
		if (!Global_262145.f_19728 && iVar1 < Global_262145.f_19724)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1405937764)
	{
		if (!Global_262145.f_19729 && iVar1 < Global_262145.f_19725)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 719660200)
	{
		if (!Global_262145.f_19730 && iVar1 < Global_262145.f_19726)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -982130927)
	{
		if (!Global_262145.f_19731 && iVar1 < Global_262145.f_19727)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 917809321)
	{
		if (!Global_262145.f_20607 && iVar1 < Global_262145.f_20615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223240013)
	{
		if (!Global_262145.f_20608 && iVar1 < Global_262145.f_20616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1504306544)
	{
		if (!Global_262145.f_20609 && iVar1 < Global_262145.f_20617)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1939284556)
	{
		if (!Global_262145.f_20610 && iVar1 < Global_262145.f_20618)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 159274291)
	{
		if (!Global_262145.f_20611 && iVar1 < Global_262145.f_20619)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 433954513)
	{
		if (!Global_262145.f_20612 && iVar1 < Global_262145.f_20620)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1763555241)
	{
		if (!Global_262145.f_21384 && iVar1 < Global_262145.f_21404)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -749299473)
	{
		if (!Global_262145.f_21396 && iVar1 < Global_262145.f_21416)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -975345305)
	{
		if (!Global_262145.f_21387 && iVar1 < Global_262145.f_21407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1700874274)
	{
		if (!Global_262145.f_21397 && iVar1 < Global_262145.f_21417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -392675425)
	{
		if (!Global_262145.f_21385 && iVar1 < Global_262145.f_21405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1043222410)
	{
		if (!Global_262145.f_21401 && iVar1 < Global_262145.f_21421)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1386191424)
	{
		if (!Global_262145.f_21399 && iVar1 < Global_262145.f_21419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1565978651)
	{
		if (!Global_262145.f_21400 && iVar1 < Global_262145.f_21420)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1036591958)
	{
		if (!Global_262145.f_21395 && iVar1 < Global_262145.f_21415)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -32878452)
	{
		if (!Global_262145.f_21402 && iVar1 < Global_262145.f_21422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -42959138)
	{
		if (!Global_262145.f_21398 && iVar1 < Global_262145.f_21418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1984275979)
	{
		if (!Global_262145.f_21394 && iVar1 < Global_262145.f_21414)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1007528109)
	{
		if (!Global_262145.f_21386 && iVar1 < Global_262145.f_21406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523619738)
	{
		if (!Global_262145.f_21388 && iVar1 < Global_262145.f_21408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1392481335)
	{
		if (!Global_262145.f_21389 && iVar1 < Global_262145.f_21409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -998177792)
	{
		if (!Global_262145.f_21390 && iVar1 < Global_262145.f_21410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1242608589)
	{
		if (!Global_262145.f_21391 && iVar1 < Global_262145.f_21411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1841130506)
	{
		if (!Global_262145.f_21392 && iVar1 < Global_262145.f_21412)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2049897956)
	{
		if (!Global_262145.f_21393 && iVar1 < Global_262145.f_21413)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1483171323)
	{
		if (!Global_262145.f_22345 && iVar1 < Global_262145.f_22373)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_262145.f_22346 && iVar1 < Global_262145.f_22374)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1693015116)
	{
		if (!Global_262145.f_22347 && iVar1 < Global_262145.f_22375)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -692292317)
	{
		if (!Global_262145.f_22348 && iVar1 < Global_262145.f_22376)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1435527158)
	{
		if (!Global_262145.f_22349 && iVar1 < Global_262145.f_22377)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181327175)
	{
		if (!Global_262145.f_22350 && iVar1 < Global_262145.f_22378)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1489874736)
	{
		if (!Global_262145.f_22351 && iVar1 < Global_262145.f_22379)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -212993243)
	{
		if (!Global_262145.f_22352 && iVar1 < Global_262145.f_22380)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 447548909)
	{
		if (!Global_262145.f_22353 && iVar1 < Global_262145.f_22381)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1561920505)
	{
		if (!Global_262145.f_22354 && iVar1 < Global_262145.f_22382)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1848994066)
	{
		if (!Global_262145.f_22355 && iVar1 < Global_262145.f_22383)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_262145.f_22356 && iVar1 < Global_262145.f_22384)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1104234922)
	{
		if (!Global_262145.f_22357 && iVar1 < Global_262145.f_22385)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1871995513)
	{
		if (!Global_262145.f_22358 && iVar1 < Global_262145.f_22386)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1352136073)
	{
		if (!Global_262145.f_22359 && iVar1 < Global_262145.f_22387)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -313185164)
	{
		if (!Global_262145.f_22360 && iVar1 < Global_262145.f_22388)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2079788230)
	{
		if (!Global_262145.f_22361 && iVar1 < Global_262145.f_22389)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 600450546)
	{
		if (!Global_262145.f_22362 && iVar1 < Global_262145.f_22390)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -410205223)
	{
		if (!Global_262145.f_22363 && iVar1 < Global_262145.f_22391)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 867799010)
	{
		if (!Global_262145.f_22364 && iVar1 < Global_262145.f_22392)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1529242755)
	{
		if (!Global_262145.f_22365 && iVar1 < Global_262145.f_22393)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 903794909)
	{
		if (!Global_262145.f_22366 && iVar1 < Global_262145.f_22394)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1532697517)
	{
		if (!Global_262145.f_22367 && iVar1 < Global_262145.f_22395)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15219735)
	{
		if (!Global_262145.f_22368 && iVar1 < Global_262145.f_22396)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 661493923)
	{
		if (!Global_262145.f_22369 && iVar1 < Global_262145.f_22397)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 838982985)
	{
		if (!Global_262145.f_22370 && iVar1 < Global_262145.f_22398)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -391595372)
	{
		if (!Global_262145.f_22371 && iVar1 < Global_262145.f_22399)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -121446169)
	{
		if (!Global_262145.f_22372 && iVar1 < Global_262145.f_22400)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1909189272)
	{
		if (!Global_262145.f_23561 && iVar1 < Global_262145.f_23577)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1617472902)
	{
		if (!Global_262145.f_23562 && iVar1 < Global_262145.f_23578)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1267543371)
	{
		if (!Global_262145.f_23566 && iVar1 < Global_262145.f_23582)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 931280609)
	{
		if (!Global_262145.f_23569 && iVar1 < Global_262145.f_23585)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1046206681)
	{
		if (!Global_262145.f_23574 && iVar1 < Global_262145.f_23590)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1259134696)
	{
		if (!Global_262145.f_23568 && iVar1 < Global_262145.f_23584)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1115909093)
	{
		if (!Global_262145.f_23560 && iVar1 < Global_262145.f_23576)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1031562256)
	{
		if (!Global_262145.f_23567 && iVar1 < Global_262145.f_23583)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -376434238)
	{
		if (!Global_262145.f_23573 && iVar1 < Global_262145.f_23589)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -986944621)
	{
		if (!Global_262145.f_23572 && iVar1 < Global_262145.f_23588)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1134706562)
	{
		if (!Global_262145.f_23563 && iVar1 < Global_262145.f_23579)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2120700196)
	{
		if (!Global_262145.f_23565 && iVar1 < Global_262145.f_23581)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -214906006)
	{
		if (!Global_262145.f_23575 && iVar1 < Global_262145.f_23591)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -988501280)
	{
		if (!Global_262145.f_23571 && iVar1 < Global_262145.f_23587)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1254014755)
	{
		if (!Global_262145.f_23564 && iVar1 < Global_262145.f_23580)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -726768679)
	{
		if (!Global_262145.f_23570 && iVar1 < Global_262145.f_23586)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1988428699)
	{
		if (!Global_262145.f_23651 && iVar1 < Global_262145.f_23638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 345756458)
	{
		if (!Global_262145.f_23652 && iVar1 < Global_262145.f_23639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1945374990)
	{
		if (!Global_262145.f_23657 && iVar1 < Global_262145.f_23644)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1653666139)
	{
		if (!Global_262145.f_23656 && iVar1 < Global_262145.f_23643)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 500482303)
	{
		if (!Global_262145.f_23654 && iVar1 < Global_262145.f_23641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2044532910)
	{
		if (!Global_262145.f_23660 && iVar1 < Global_262145.f_23647)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -638562243)
	{
		if (!Global_262145.f_23662 && iVar1 < Global_262145.f_23649)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1692272545)
	{
		if (!Global_262145.f_23663 && iVar1 < Global_262145.f_23650)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2069146067)
	{
		if (!Global_262145.f_23661 && iVar1 < Global_262145.f_23648)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -420911112)
	{
		if (!Global_262145.f_23653 && iVar1 < Global_262145.f_23640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 321186144)
	{
		if (!Global_262145.f_23655 && iVar1 < Global_262145.f_23642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -54332285)
	{
		if (!Global_262145.f_23659 && iVar1 < Global_262145.f_23646)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -307958377)
	{
		if (!Global_262145.f_23658 && iVar1 < Global_262145.f_23645)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1721676810)
	{
	}
	else if (iParam0 == -801550069)
	{
	}
	else if (iParam0 == 679453769)
	{
	}
	else if (iParam0 == 1909700336)
	{
	}
	else if (iParam0 == 2139203625)
	{
	}
	else if (iParam0 == -1890996696)
	{
	}
	else if (iParam0 == 2038858402)
	{
	}
	else if (iParam0 == -1146969353)
	{
	}
	else if (iParam0 == 1542143200)
	{
	}
	else if (iParam0 == -579747861)
	{
	}
	else if (iParam0 == 444994115)
	{
	}
	else if (iParam0 == 1637620610)
	{
	}
	else if (iParam0 == -755532233)
	{
	}
	else if (iParam0 == 540101442)
	{
	}
	else if (iParam0 == -1106120762)
	{
	}
	else if (iParam0 == -1478704292)
	{
	}
	else if (iParam0 == -2096690334)
	{
	}
	else if (iParam0 == 1591739866)
	{
		if (!Global_262145.f_25913 && iVar1 < Global_262145.f_25915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1168952148)
	{
		if (!Global_262145.f_24926 && iVar1 < Global_262145.f_24919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1566607184)
	{
		if (!Global_262145.f_24927 && iVar1 < Global_262145.f_24920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -331467772)
	{
		if (!Global_262145.f_24928 && iVar1 < Global_262145.f_24921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1279262537)
	{
		if (!Global_262145.f_24929 && iVar1 < Global_262145.f_24922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -49115651)
	{
		if (!Global_262145.f_25914 && iVar1 < Global_262145.f_25916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456744817)
	{
		if (!Global_262145.f_24930 && iVar1 < Global_262145.f_24923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -507495760)
	{
		if (!Global_262145.f_24931 && iVar1 < Global_262145.f_24924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -286046740)
	{
		if (!Global_262145.f_24932 && iVar1 < Global_262145.f_24925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1044193113)
	{
		if (!Global_262145.f_24937 && iVar1 < Global_262145.f_24958)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 686471183)
	{
		if (!Global_262145.f_24938 && iVar1 < Global_262145.f_24959)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -941272559)
	{
		if (!Global_262145.f_24939 && iVar1 < Global_262145.f_24960)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1829436850)
	{
		if (!Global_262145.f_24940 && iVar1 < Global_262145.f_24961)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -682108547)
	{
		if (!Global_262145.f_24941 && iVar1 < Global_262145.f_24962)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 722226637)
	{
		if (!Global_262145.f_24942 && iVar1 < Global_262145.f_24963)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1854776567)
	{
		if (!Global_262145.f_24943 && iVar1 < Global_262145.f_24964)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1862507111)
	{
		if (!Global_262145.f_24944 && iVar1 < Global_262145.f_24965)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -882629065)
	{
		if (!Global_262145.f_24945 && iVar1 < Global_262145.f_24966)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -362150785)
	{
		if (!Global_262145.f_24946 && iVar1 < Global_262145.f_24967)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 310284501)
	{
		if (!Global_262145.f_24947 && iVar1 < Global_262145.f_24968)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 916547552)
	{
		if (!Global_262145.f_24948 && iVar1 < Global_262145.f_24969)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1804415708)
	{
		if (!Global_262145.f_24949 && iVar1 < Global_262145.f_24970)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1934384720)
	{
		if (!Global_262145.f_24950 && iVar1 < Global_262145.f_24971)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1349095620)
	{
		if (!Global_262145.f_24951 && iVar1 < Global_262145.f_24972)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -208911803)
	{
		if (!Global_262145.f_24952 && iVar1 < Global_262145.f_24973)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -324618589)
	{
		if (!Global_262145.f_24953 && iVar1 < Global_262145.f_24974)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -664141241)
	{
		if (!Global_262145.f_24954 && iVar1 < Global_262145.f_24975)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1323778901)
	{
		if (!Global_262145.f_24955 && iVar1 < Global_262145.f_24976)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1620126302)
	{
		if (!Global_262145.f_24956 && iVar1 < Global_262145.f_24977)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -447711397)
	{
		if (!Global_262145.f_24957 && iVar1 < Global_262145.f_24978)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1118611807)
	{
		if (!Global_262145.f_27748 && iVar1 < Global_262145.f_27769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 409049982)
	{
		if (!Global_262145.f_27749 && iVar1 < Global_262145.f_27770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1756021720)
	{
		if (!Global_262145.f_27750 && iVar1 < Global_262145.f_27771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2031587082)
	{
		if (!Global_262145.f_27751 && iVar1 < Global_262145.f_27772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1693751655)
	{
		if (!Global_262145.f_27752 && iVar1 < Global_262145.f_27773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 987469656)
	{
		if (!Global_262145.f_27753 && iVar1 < Global_262145.f_27774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 872704284)
	{
		if (!Global_262145.f_27754 && iVar1 < Global_262145.f_27775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 408825843)
	{
		if (!Global_262145.f_27755 && iVar1 < Global_262145.f_27776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 740289177)
	{
		if (!Global_262145.f_27756 && iVar1 < Global_262145.f_27777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -834353991)
	{
		if (!Global_262145.f_27757 && iVar1 < Global_262145.f_27778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 301304410)
	{
		if (!Global_262145.f_27758 && iVar1 < Global_262145.f_27779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 960812448)
	{
		if (!Global_262145.f_27759 && iVar1 < Global_262145.f_27780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1284356689)
	{
		if (!Global_262145.f_27760 && iVar1 < Global_262145.f_27781)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 394110044)
	{
		if (!Global_262145.f_27761 && iVar1 < Global_262145.f_27782)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1938952078)
	{
		if (!Global_262145.f_27762 && iVar1 < Global_262145.f_27783)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_27763 && iVar1 < Global_262145.f_27784)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_27764 && iVar1 < Global_262145.f_27785)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_27765 && iVar1 < Global_262145.f_27786)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1254331310)
	{
		if (!Global_262145.f_27766 && iVar1 < Global_262145.f_27787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_27767 && iVar1 < Global_262145.f_27788)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_27768 && iVar1 < Global_262145.f_27789)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 340154634)
	{
		if ((!Global_262145.f_27791 && iVar1 < Global_262145.f_27792) && !Global_262145.f_27746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1960756985)
	{
		if ((!Global_262145.f_27794 && iVar1 < Global_262145.f_27795) && !Global_262145.f_27747)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1132721664)
	{
		if (!Global_262145.f_27799 && iVar1 < Global_262145.f_27802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 83136452)
	{
		if (!Global_262145.f_27800 && iVar1 < Global_262145.f_27803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456336509)
	{
		if (!Global_262145.f_27801 && iVar1 < Global_262145.f_27804)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_912()
{
	return 0;
}

int func_913()
{
	return 1;
}

int func_914()
{
	return 1;
}

int func_915()
{
	if (IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_916()
{
	int iVar0;
	
	if (NETWORK_IS_SIGNED_IN())
	{
		if (_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (_0x593570C289A77688())
			{
				STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				SET_BIT(&iVar0, 2);
				SET_BIT(&iVar0, 4);
				SET_BIT(&iVar0, 6);
				SET_BIT(&Global_25, 2);
				SET_BIT(&Global_25, 4);
				SET_BIT(&Global_25, 6);
				STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (_0x5AA3BEFA29F03AD4())
				{
					iVar0 = GET_PROFILE_SETTING(866);
					SET_BIT(&iVar0, 0);
					_UNLOCK_EXCLUS_CONTENT(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_150394 == 2)
	{
		return 1;
	}
	else if (Global_150394 == 3)
	{
		return 0;
	}
	if (_0x5AA3BEFA29F03AD4())
	{
		if (IS_BIT_SET(IS_BIT_SET(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

var func_917()
{
	var uVar0;
	
	uVar0 = func_918();
	if (!func_157())
	{
		if (func_176() != func_29())
		{
			uVar0 = func_940(func_176()) + 1;
		}
	}
	return uVar0;
}

int func_918()
{
	return func_940(PLAYER_ID()) + 1;
}

int func_919()
{
	return func_141(6113, -1, 0);
}

void func_920(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	0x0EACDF8487D5155A(&Global_1674996);
	func_921();
}

void func_921()
{
	struct<44> Var0;
	
	Global_1674996 = { Var0 };
	Global_1674996.f_23 = 0;
	Global_1674996.f_24 = 0;
	Global_1674996.f_16 = 0;
}

bool func_922(int iParam0)
{
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 12);
}

bool func_923(int iParam0)
{
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 13);
}

int func_924(int iParam0)
{
	if (iParam0 != func_29())
	{
		if ((IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 12) || IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 13)) || IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_925(int iParam0)
{
	if (iParam0 != func_29())
	{
		if ((IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 0) || IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 1)) || IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_926(int iParam0)
{
	if (iParam0 != func_29())
	{
		if (((((IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 3) || IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 4)) || IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 5)) || IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 0)) || IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 1)) || IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_927(int iParam0)
{
	if (iParam0 != func_29())
	{
		if ((IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 6) || IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 7)) || IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_928(int iParam0)
{
	if (iParam0 == func_29())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 9);
}

void func_929(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	0x7D8BA05688AD64C7(&Global_1674933);
	func_930();
}

void func_930()
{
	struct<63> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Var0.f_62 = -1;
	Global_1674933 = { Var0 };
	Global_1674933.f_24 = 0;
	Global_1674933.f_25 = 0;
	Global_1674933.f_17 = 0;
}

void func_931(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	0xBF371CD2B64212FD(&Global_1674879);
	func_932();
}

void func_932()
{
	struct<54> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1674879 = { Var0 };
	Global_1674879.f_29 = 0;
	Global_1674879.f_30 = 0;
	Global_1674879.f_17 = 0;
}

int func_933(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_332(iParam0, iParam1, 2);
	bVar1 = func_332(iParam0, iParam1, 1);
	bVar2 = func_332(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_934(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_143(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17687;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17686;
		}
		else
		{
			iVar0 = Global_262145.f_17668;
		}
		iVar1 = 19;
	}
	else if (func_707(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_89(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17667;
			iVar1 = 20;
		}
	}
	else if (func_96(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17687;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17686;
		}
		else
		{
			iVar0 = Global_262145.f_17668;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		0x501478855A6074CE(func_711(func_176()), func_710(func_176()), func_668(), func_667(), iVar1, iVar0);
	}
	func_936(iVar0);
	func_935(iVar0);
	return iVar0;
}

void func_935(int iParam0)
{
	int iVar0;
	
	iVar0 = func_141(3968, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1628955[PLAYER_ID() /*614*/].f_11.f_490 = iVar0;
	func_139(3968, iVar0, -1, 1, 0);
}

void func_936(int iParam0)
{
	int iVar0;
	
	iVar0 = PLAYER_ID();
	Global_1628955[iVar0 /*614*/].f_11.f_489 = (Global_1628955[iVar0 /*614*/].f_11.f_489 + iParam0);
	if (Global_1628955[iVar0 /*614*/].f_11.f_489 < -9999)
	{
		Global_1628955[iVar0 /*614*/].f_11.f_489 = 9999;
	}
	else if (Global_1628955[iVar0 /*614*/].f_11.f_489 > 9999)
	{
		Global_1628955[iVar0 /*614*/].f_11.f_489 = 9999;
	}
}

int func_937(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_115(PLAYER_ID()) || func_118(PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_938(var uParam0)
{
	0x316DB59CD14C1774(&Global_1675140);
	func_939();
}

void func_939()
{
	struct<35> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_1675140 = { Var0 };
}

int func_940(int iParam0)
{
	if (func_265(iParam0) == func_29())
	{
		return 0;
	}
	return Global_1628955[iParam0 /*614*/].f_11.f_19;
}

int func_941(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_414(PLAYER_ID());
	}
	else
	{
		iVar0 = func_63(PLAYER_ID());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_944(PLAYER_ID());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_943(PLAYER_ID());
			if (func_127(func_128(PLAYER_ID())))
			{
				iVar1 = 100;
			}
			else
			{
				iVar1 = 200;
			}
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 250:
			iVar2 = func_943(PLAYER_ID());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_942(PLAYER_ID());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_942(PLAYER_ID());
			iVar1 = 500;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 239:
			iVar1 = 600;
			break;
		
		case 240:
			iVar1 = 700;
			break;
		
		case 241:
			iVar1 = 800;
			break;
		
		case 242:
			iVar1 = 900;
			break;
		
		case 244:
			iVar1 = 1100;
			break;
		
		case 248:
			iVar1 = 1200;
			break;
	}
	return iVar1;
}

int func_942(int iParam0)
{
	if (func_63(PLAYER_ID()) == 238 || func_63(PLAYER_ID()) == 249)
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_498;
	}
	return -1;
}

int func_943(int iParam0)
{
	if (func_63(PLAYER_ID()) == 237 || func_63(PLAYER_ID()) == 250)
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_497;
	}
	return -1;
}

int func_944(int iParam0)
{
	if (func_414(iParam0) == 236)
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_496;
	}
	return -1;
}

int func_945(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		return 5;
	}
	switch (iParam0)
	{
		case 2:
			return 8;
		
		case 3:
			return 6;
		
		case 1:
		case 4:
		case 6:
			if (bParam1)
			{
				return 1;
			}
			else if (bParam2)
			{
				return 7;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 4;
}

int func_946(struct<21> Param0)
{
	func_995(func_996(Param0), Param0);
	func_992(0, -1, 0);
	NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_175, 35);
	NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_176, 193);
	SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	func_949(0, 0, 0);
	func_947();
	return 1;
}

void func_947()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	ADD_RELATIONSHIP_GROUP("relJoust0", &(uLocal_150[0]));
	ADD_RELATIONSHIP_GROUP("relJoust1", &(uLocal_150[1]));
	iVar0 = GET_RELATIONSHIP_BETWEEN_GROUPS(GET_RELATIONSHIP_BETWEEN_GROUPS(GET_RELATIONSHIP_BETWEEN_GROUPS()), -1533126372);
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574964[iVar1], uLocal_150[iVar2]);
			SET_RELATIONSHIP_BETWEEN_GROUPS(1, uLocal_150[iVar2], Global_1574964[iVar1]);
			SET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, uLocal_150[iVar2], -1533126372);
			SET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, -1533126372, uLocal_150[iVar2]);
			SET_RELATIONSHIP_BETWEEN_GROUPS(1, uLocal_150[iVar2], Global_1575012[5]);
			SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1575012[5], uLocal_150[iVar2]);
			SET_RELATIONSHIP_BETWEEN_GROUPS(1, uLocal_150[iVar2], Global_1574997);
			SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574997, uLocal_150[iVar2]);
			iVar2++;
		}
		iVar1++;
	}
	SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_150[0], uLocal_150[1]);
	SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_150[1], uLocal_150[0]);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 2)
	{
		SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, uLocal_150[iVar2]);
		func_948(&(uLocal_150[iVar2]));
		iVar2++;
	}
}

void func_948(var uParam0)
{
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1865950624, *uParam0);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, *uParam0, -1865950624);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, 296331235, *uParam0);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, *uParam0, 296331235);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1166638144, *uParam0);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, *uParam0, 1166638144);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2037579709, *uParam0);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, *uParam0, 2037579709);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, *uParam0);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, *uParam0, 2017343592);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1821475077, *uParam0);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, *uParam0, -1821475077);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1782292358, *uParam0);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, *uParam0, 1782292358);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1033021910, *uParam0);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, *uParam0, -1033021910);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1285976420, *uParam0);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, *uParam0, -1285976420);
}

void func_949(int iParam0, int iParam1, bool bParam2)
{
	func_991();
	if (func_748(PLAYER_ID()))
	{
		func_953(1);
	}
	if ((iParam0 != 0 && NETWORK_IS_PLAYER_ACTIVE(iParam1)) && func_952(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				SET_BIT(&Global_1674847, 0);
				break;
			}
	}
	if (!func_157() && !func_281(PLAYER_ID(), 1))
	{
		if (func_779())
		{
			func_951(3);
		}
	}
	func_951(4);
	if (func_174(0))
	{
		Global_1628955[PLAYER_ID() /*614*/].f_11.f_57 = func_176();
	}
	if (func_96(iParam0))
	{
		func_932();
		Global_1674879.f_18 = func_701(func_92());
	}
	else if (func_104(func_864(PLAYER_ID())))
	{
		func_930();
		Global_1674933.f_18 = func_701(func_92());
	}
	if (bParam2)
	{
		if (!func_775())
		{
			func_722(1);
		}
	}
	func_950();
}

void func_950()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1363235.f_534[iVar0 /*42*/].f_1 = func_29();
		Global_1363235.f_534[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

void func_951(int iParam0)
{
	SET_BIT(&(Global_2531497.f_4898.f_43), iParam0);
}

int func_952(int iParam0, bool bParam1)
{
	return func_279(PLAYER_ID(), iParam0, bParam1);
}

void func_953(bool bParam0)
{
	int iVar0;
	
	func_885(33);
	func_885(34);
	func_885(35);
	func_885(36);
	func_885(37);
	func_885(38);
	func_885(39);
	func_885(40);
	func_885(43);
	func_885(41);
	func_885(54);
	func_885(42);
	func_885(47);
	func_990(23);
	func_990(24);
	func_885(92);
	CLEAR_BIT(&(Global_2531497.f_1737), 2);
	func_989();
	func_984();
	func_979();
	func_974();
	func_963();
	func_959();
	func_955();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2531497.f_4898.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_954(3))
	{
		func_990(3);
	}
	else if (func_954(4))
	{
		func_990(4);
	}
	else if (func_954(5))
	{
		func_990(5);
	}
	else if (func_954(6))
	{
		func_990(6);
	}
	else if (func_954(7))
	{
		func_990(7);
	}
	else if (((((((((((((((((func_954(0) || func_954(1)) || func_954(2)) || func_954(8)) || func_954(9)) || func_954(10)) || func_954(11)) || func_954(12)) || func_954(13)) || func_954(14)) || func_954(15)) || func_954(16)) || func_954(17)) || func_954(18)) || func_954(19)) || func_954(20)) || func_954(21)) || func_954(22))
	{
		func_990(8);
		func_990(0);
		func_990(1);
		func_990(2);
		func_990(9);
		func_990(10);
		func_990(11);
		func_990(12);
		func_990(13);
		func_990(14);
		func_990(15);
		func_990(16);
		func_990(17);
		func_990(18);
		func_990(19);
		func_990(20);
		func_990(21);
		func_990(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2531497.f_4898.f_14[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_954(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return IS_BIT_SET(Global_2531497.f_4898.f_14[iVar0], iVar1);
}

void func_955()
{
	if (func_957())
	{
		func_956(0);
		func_956(1);
		func_956(2);
		func_956(3);
	}
}

void func_956(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	CLEAR_BIT(&(Global_2531497.f_4898.f_33[iVar0]), iVar1);
}

int func_957()
{
	if (((func_958(0) || func_958(1)) || func_958(2)) || func_958(3))
	{
		return 1;
	}
	return 0;
}

bool func_958(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return IS_BIT_SET(Global_2531497.f_4898.f_33[iVar0], iVar1);
}

void func_959()
{
	if (func_961())
	{
		func_960(4);
		func_960(5);
		func_960(6);
		func_960(7);
	}
}

void func_960(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	CLEAR_BIT(&(Global_2531497.f_4898.f_31[iVar0]), iVar1);
}

int func_961()
{
	if (((func_962(4) || func_962(5)) || func_962(6)) || func_962(7))
	{
		return 1;
	}
	return 0;
}

bool func_962(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return IS_BIT_SET(Global_2531497.f_4898.f_31[iVar0], iVar1);
}

void func_963()
{
	int iVar0;
	
	if (func_973())
	{
		func_972(8);
		func_972(9);
		func_972(10);
		func_972(12);
		func_972(13);
		func_972(14);
		func_972(19);
		func_972(20);
		func_972(21);
		func_972(22);
		func_972(23);
		func_972(24);
		func_972(25);
		func_972(26);
		func_972(15);
		func_972(16);
		func_972(17);
		func_972(18);
		func_972(35);
		func_972(45);
		func_972(46);
		if (func_971(11))
		{
			func_972(11);
			iVar0 = func_141(7226, -1, 0);
			SET_BIT(&iVar0, 2);
			func_139(7226, iVar0, -1, 1, 0);
		}
	}
	if (func_971(48))
	{
		if (func_969(151, 3))
		{
			func_967(151, 3);
		}
		func_972(48);
	}
	if (func_971(49))
	{
		if (func_969(152, 3))
		{
			func_967(152, 3);
		}
		func_972(49);
	}
	if (func_971(50))
	{
		if (func_969(153, 3))
		{
			func_967(153, 3);
		}
		func_972(50);
	}
	if (func_971(51))
	{
		if (func_969(func_964(), 3))
		{
			func_967(func_964(), 3);
		}
		func_972(51);
	}
}

int func_964()
{
	if (func_966())
	{
		func_965(154, Global_19486, 1);
	}
	return 154;
}

void func_965(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111560.f_28045[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

int func_966()
{
	int iVar0;
	
	iVar0 = func_265(PLAYER_ID());
	if (((iVar0 != PLAYER_ID() && iVar0 != func_29()) && PLAYER_ID(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_967(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_117[iParam0 /*10*/].f_8 != 150)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_968(iParam0, iVar0, 0);
			func_965(iParam0, iVar0, 0);
		}
	}
}

void func_968(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111560.f_28045[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_969(int iParam0, int iParam1)
{
	if (func_970(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_970(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_12[iParam1];
}

bool func_971(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return IS_BIT_SET(Global_2531497.f_4898.f_26[iVar0], iVar1);
}

void func_972(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	CLEAR_BIT(&(Global_2531497.f_4898.f_26[iVar0]), iVar1);
}

int func_973()
{
	if (((((((((((((((((((((func_971(8) || func_971(9)) || func_971(10)) || func_971(12)) || func_971(11)) || func_971(13)) || func_971(14)) || func_971(19)) || func_971(20)) || func_971(21)) || func_971(22)) || func_971(23)) || func_971(24)) || func_971(25)) || func_971(26)) || func_971(15)) || func_971(16)) || func_971(17)) || func_971(18)) || func_971(35)) || func_971(45)) || func_971(46))
	{
		return 1;
	}
	return 0;
}

void func_974()
{
	if (func_978())
	{
		func_977(0);
		func_977(1);
		func_977(2);
		func_977(3);
		func_977(4);
		func_977(5);
		if (func_976(32))
		{
			if (func_969(func_975(), 3))
			{
				func_967(func_975(), 3);
			}
			func_977(32);
		}
	}
}

int func_975()
{
	if (func_966())
	{
		func_965(12, Global_19486, 1);
	}
	return 12;
}

bool func_976(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return IS_BIT_SET(Global_2531497.f_4898.f_23[iVar0], iVar1);
}

void func_977(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	CLEAR_BIT(&(Global_2531497.f_4898.f_23[iVar0]), iVar1);
}

int func_978()
{
	if ((((func_976(1) || func_976(0)) || func_976(2)) || func_976(4)) || func_976(5))
	{
		return 1;
	}
	return 0;
}

void func_979()
{
	if (func_983())
	{
		func_982(0);
		func_982(1);
		func_982(2);
		func_982(3);
		func_982(4);
		func_982(5);
		func_982(6);
		func_982(7);
		if (func_981(8))
		{
			func_982(8);
		}
		if (func_981(15))
		{
			if (func_969(func_980(), 3))
			{
				func_967(func_980(), 3);
			}
			func_982(15);
		}
	}
}

int func_980()
{
	if (func_966())
	{
		func_965(20, Global_19486, 1);
	}
	return 20;
}

bool func_981(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return IS_BIT_SET(Global_2531497.f_4898.f_21[iVar0], iVar1);
}

void func_982(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	CLEAR_BIT(&(Global_2531497.f_4898.f_21[iVar0]), iVar1);
}

int func_983()
{
	if ((((((((func_981(0) || func_981(1)) || func_981(2)) || func_981(3)) || func_981(4)) || func_981(5)) || func_981(6)) || func_981(7)) || func_981(8))
	{
		return 1;
	}
	return 0;
}

void func_984()
{
	if (func_988())
	{
		func_987(0);
		func_987(1);
		func_987(2);
		func_987(3);
		func_987(4);
		func_987(5);
		func_987(6);
		func_987(7);
		func_987(8);
		func_987(9);
		func_987(10);
		func_987(11);
		func_987(12);
		if (func_986(13))
		{
			if (func_969(func_985(), 3))
			{
				func_967(func_985(), 3);
			}
			func_987(13);
		}
	}
}

int func_985()
{
	if (func_966())
	{
		func_965(76, Global_19486, 1);
	}
	return 76;
}

bool func_986(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return IS_BIT_SET(Global_2531497.f_4898.f_19[iVar0], iVar1);
}

void func_987(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	CLEAR_BIT(&(Global_2531497.f_4898.f_19[iVar0]), iVar1);
}

int func_988()
{
	if ((((((((((((func_986(0) || func_986(1)) || func_986(2)) || func_986(3)) || func_986(4)) || func_986(5)) || func_986(6)) || func_986(7)) || func_986(8)) || func_986(9)) || func_986(10)) || func_986(11)) || func_986(12))
	{
		return 1;
	}
	return 0;
}

void func_989()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2531497.f_4898.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_990(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	CLEAR_BIT(&(Global_2531497.f_4898.f_14[iVar0]), iVar1);
}

void func_991()
{
	struct<14> Var0;
	
	Global_1674861 = { Var0 };
	Global_1674861.f_14 = 0;
	Global_1674861.f_15 = 0;
}

int func_992(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_994();
			}
			else
			{
				return 0;
			}
		}
		if (!func_993())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_994();
					}
					else
					{
						return 0;
					}
				}
				if (func_812())
				{
					if (!bParam2)
					{
						func_994();
					}
					else
					{
						return 0;
					}
				}
				if (func_810(157))
				{
					if (!bParam2)
					{
						func_994();
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
					func_994();
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
				func_994();
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
			func_994();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_993()
{
	return Global_1312850;
}

void func_994()
{
	TERMINATE_THIS_THREAD();
}

void func_995(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_994();
	}
	NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_16);
}

int func_996(int iParam0)
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

int func_997(int iParam0, bool bParam1, bool bParam2)
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

__________________________
Native Named by Reliency
1577160872
__________________________
