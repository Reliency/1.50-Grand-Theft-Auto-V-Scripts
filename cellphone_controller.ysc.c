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
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	bool bLocal_38 = 0;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43[4] = { 0, 0, 0, 0 };
	int iLocal_44[4] = { 0, 0, 0, 0 };
	int iLocal_45[4] = { 0, 0, 0, 0 };
	int iLocal_46[4] = { 0, 0, 0, 0 };
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	bool bLocal_66 = 0;
	float fLocal_67 = 0f;
	float fLocal_68 = 0f;
	float fLocal_69 = 0f;
	float fLocal_70 = 0f;
	float fLocal_71 = 0f;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
#endregion

void __EntryFunction__()
{
	struct<57> Var0;
	int iVar1;
	
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
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_36 = 3;
	fLocal_39 = 0f;
	fLocal_40 = 0f;
	fLocal_70 = 0.95f;
	fLocal_71 = 0.07f;
	fLocal_72 = 0.755f;
	iLocal_81 = 9999;
	NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_111502 = GET_GAME_TIMER();
	func_127();
	func_125();
	func_123();
	Global_19486.f_1 = 3;
	Global_19474 = 0;
	Global_19666 = 0;
	Global_21840 = 0;
	Var0.f_23 = 2;
	Var0.f_56 = 16;
	while (true)
	{
		wait(0);
		if (Global_19486.f_1 > 3)
		{
			DISABLE_CONTROL_ACTION(0, 337, 1);
			DISABLE_CONTROL_ACTION(0, 353, 1);
			DISABLE_CONTROL_ACTION(0, 354, 1);
			DISABLE_CONTROL_ACTION(0, 357, 1);
			DISABLE_CONTROL_ACTION(0, 353, 1);
		}
		if (iLocal_79 == 0)
		{
			if (NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_79 = 1;
				iLocal_81 = func_120(9473, -1, 0);
			}
		}
		else if (NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (iLocal_79 == 1)
			{
				switch (_GET_CURRENT_LANGUAGE_ID())
				{
					case -1:
						0x07DBD622D9533857("gta5mkt_en");
						break;
					
					case 0:
						0x07DBD622D9533857("gta5mkt_en");
						break;
					
					case 1:
						0x07DBD622D9533857("gta5mkt_fr");
						break;
					
					case 2:
						0x07DBD622D9533857("gta5mkt_ge");
						break;
					
					case 3:
						0x07DBD622D9533857("gta5mkt_it");
						break;
					
					case 4:
						0x07DBD622D9533857("gta5mkt_sp");
						break;
					
					case 5:
						0x07DBD622D9533857("gta5mkt_pt");
						break;
					
					case 6:
						0x07DBD622D9533857("gta5mkt_pl");
						break;
					
					case 7:
						0x07DBD622D9533857("gta5mkt_ru");
						break;
					
					case 8:
						0x07DBD622D9533857("gta5mkt_ko");
						break;
					
					case 9:
						0x07DBD622D9533857("gta5mkt_ch");
						break;
					
					case 10:
						0x07DBD622D9533857("gta5mkt_ja");
						break;
					
					case 11:
						0x07DBD622D9533857("gta5mkt_me");
						break;
					
					case 12:
						0x07DBD622D9533857("gta5mkt_cn");
						break;
				}
				_SC_INBOX_GET_EMAILS(0, 1);
				iLocal_79 = 2;
			}
			if (iLocal_79 == 2)
			{
				iLocal_80 = _0x16DA8172459434AA();
				switch (iLocal_80)
				{
					case 3:
						break;
					
					case 0:
						if (0x7DB18CA8CAD5B098() > 0)
						{
							_0x4737980E8A283806(0, &Var0);
							if (Var0.f_1 != iLocal_81)
							{
								Global_4268349 = 1;
							}
							else
							{
								Global_4268349 = 0;
							}
						}
						iLocal_79 = 3;
						break;
					
					case 1:
						break;
					
					case 4:
						Global_4268349 = 0;
						iLocal_79 = 3;
						break;
					}
			}
		}
		else
		{
			Global_4268349 = 0;
			iLocal_79 = 0;
		}
		if (IS_PC_VERSION())
		{
			if (IS_STUNT_JUMP_IN_PROGRESS())
			{
				if (Global_19486.f_1 == 6)
				{
					Global_19486.f_1 = 3;
				}
			}
		}
		if (func_119(146))
		{
			if (Global_76577 == 0)
			{
				iVar1 = func_87(0, 0, 119);
				if (iVar1 != 0)
				{
					func_85(iVar1);
				}
				else
				{
					func_84();
				}
				func_80(0);
			}
		}
		if (Global_2531497.f_4543 == 1)
		{
			if (Global_19486.f_1 > 3)
			{
				Global_19486.f_1 = 3;
			}
		}
		if (Global_76577 == 1)
		{
			if (Global_19486.f_1 == 3)
			{
				if (IS_BIT_SET(Global_4269615, 15))
				{
					SET_BIT(&Global_4269615, 14);
					wait(0);
					while (!func_78(3, 0, 1, 0))
					{
						wait(0);
					}
					CLEAR_BIT(&Global_4269615, 14);
					CLEAR_BIT(&Global_4269615, 15);
				}
				if (IS_BIT_SET(Global_4269615, 16))
				{
					SET_BIT(&Global_4269615, 14);
					wait(0);
					while (!func_78(17, 0, 1, 0))
					{
						wait(0);
					}
					CLEAR_BIT(&Global_4269615, 14);
					CLEAR_BIT(&Global_4269615, 16);
					CLEAR_BIT(&Global_4269615, 27);
				}
				if (IS_BIT_SET(Global_4269615, 27))
				{
					SET_BIT(&Global_4269615, 14);
					wait(0);
					while (!func_78(23, 0, 1, 0))
					{
						wait(0);
					}
					CLEAR_BIT(&Global_4269615, 14);
					CLEAR_BIT(&Global_4269615, 16);
					CLEAR_BIT(&Global_4269615, 27);
				}
			}
		}
		if (Global_76577 == 0)
		{
			if (IS_BIT_SET(Global_4269615, 11))
			{
				if ((Global_19486.f_1 != 10 && Global_19486.f_1 != 9) || func_77() == 0)
				{
					CLEAR_BIT(&Global_4269615, 11);
					SET_BIT(&Global_7357, 11);
				}
			}
			else if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
			{
				if (func_77())
				{
					SET_BIT(&Global_4269615, 11);
					SET_BIT(&Global_7357, 11);
				}
			}
			if (IS_BIT_SET(Global_4269615, 12))
			{
				CLEAR_BIT(&Global_4269615, 12);
				SET_BIT(&Global_7357, 11);
			}
		}
		else if (IS_BIT_SET(Global_4269615, 12))
		{
			if ((Global_21868 == 0 || Global_21869 == 0) && !Global_21870)
			{
				CLEAR_BIT(&Global_4269615, 12);
				SET_BIT(&Global_7357, 11);
			}
		}
		else if (Global_21870 || (Global_21868 > 0 && Global_21869 == 1))
		{
			SET_BIT(&Global_4269615, 12);
			SET_BIT(&Global_7357, 11);
		}
		if (IS_PC_VERSION())
		{
			if (_0xC0D2AF00BCC234CA())
			{
				if (!IS_BIT_SET(Global_4269615, 19))
				{
					SET_BIT(&Global_4269615, 19);
					SET_BIT(&Global_7357, 11);
				}
			}
			else if (IS_BIT_SET(Global_4269615, 19))
			{
				CLEAR_BIT(&Global_4269615, 19);
				SET_BIT(&Global_7357, 11);
			}
		}
		if (iLocal_77 == 0)
		{
			if (IS_BIT_SET(Global_7356, 25))
			{
				STAT_GET_INT(joaat("sp_cellphone_sleep_time"), &iLocal_76, -1);
				iLocal_74 = GET_GAME_TIMER();
				iLocal_77 = 1;
			}
		}
		else if (!IS_BIT_SET(Global_7356, 25))
		{
			STAT_GET_INT(joaat("sp_cellphone_sleep_time"), &iLocal_76, -1);
			iLocal_75 = GET_GAME_TIMER();
			iLocal_77 = 0;
			STAT_SET_INT(joaat("sp_cellphone_sleep_time"), (iLocal_76 + (iLocal_75 - iLocal_74)), 1);
		}
		func_76();
		func_75();
		func_74();
		func_72();
		func_55();
		func_54();
		func_53();
		if (IS_BIT_SET(Global_7357, 21))
		{
			if (!_0xC8B1B2425604CDD0())
			{
				CLEAR_BIT(&Global_7357, 21);
			}
		}
		if (IS_BIT_SET(Global_7356, 7))
		{
			func_49();
			CLEAR_BIT(&Global_7356, 7);
		}
		if (IS_BIT_SET(Global_7356, 0))
		{
			func_48();
		}
		if (IS_BIT_SET(Global_4269615, 0))
		{
			func_47();
		}
		if (IS_BIT_SET(Global_7357, 11))
		{
			Global_8060 = 0;
			if (IS_BIT_SET(Global_7356, 25))
			{
				Global_8060++;
			}
			if (IS_BIT_SET(Global_4269615, 11))
			{
				if (Global_76577 == 0)
				{
					Global_8060++;
				}
			}
			if (IS_BIT_SET(Global_4269615, 28))
			{
				if (Global_76577 == 1)
				{
					Global_8060++;
				}
			}
			if (IS_BIT_SET(Global_4269615, 12))
			{
				if (Global_76577 && (Global_21869 || Global_21870))
				{
					Global_8060++;
				}
			}
			if (IS_BIT_SET(Global_4269615, 19))
			{
				Global_8060++;
			}
			if (Global_8060 == 0)
			{
				CLEAR_BIT(&Global_7357, 11);
				iLocal_41 = 0;
			}
			else
			{
				iLocal_41 = 1;
			}
		}
		if (!func_46())
		{
			if (!IS_WARNING_MESSAGE_ACTIVE())
			{
				if (Global_19486.f_1 == 3)
				{
					if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
					{
						if (IS_PLAYER_CONTROL_ON(IS_PLAYER_CONTROL_ON()) || IS_PLAYER_CONTROL_ON())
						{
							if (!IS_PED_INJURED(IS_PED_INJURED()))
							{
								if (Global_76577)
								{
									func_33();
								}
								else
								{
									func_33();
								}
							}
						}
					}
				}
			}
			if (Global_19486.f_1 == 4)
			{
				if (IS_BIT_SET(Global_7357, 21))
				{
					func_33();
				}
			}
			func_22();
		}
		else if (func_15())
		{
		}
		switch (Global_21840)
		{
			case 0:
				func_14();
				if (Global_21842 == 1)
				{
					func_13();
				}
				break;
			
			case 1:
				func_12();
				break;
			
			case 2:
				func_11();
				break;
			
			case 3:
				func_10();
				break;
			
			case 4:
				func_9();
				break;
			
			case 5:
				func_8();
				break;
			
			case 14:
				func_13();
				break;
			
			case 6:
				if (Global_21842 == 1)
				{
					func_13();
				}
				if (Global_21843 == 1)
				{
					Global_21840 = 9;
					Global_21843 = 0;
				}
				break;
			
			case 8:
				func_7();
				break;
			
			case 9:
				func_5();
				break;
			
			case 10:
				func_4();
				break;
			
			case 11:
				func_3();
				break;
			
			case 12:
				func_2();
				break;
			
			case 13:
				func_1();
				break;
		}
	}
}

void func_1()
{
	iLocal_54 = _RETURN_TWO(Global_21844);
	switch (iLocal_54)
	{
		case 0:
			Global_21840 = 4;
			break;
		
		case 1:
			break;
		
		case 2:
			SET_BIT(&Global_7357, 15);
			func_13();
			break;
	}
}

void func_2()
{
	if (_0xEC72C258667BE5EA(Global_21844))
	{
		Global_21840 = 13;
	}
	else
	{
		func_13();
	}
}

void func_3()
{
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_52 = IS_TIME_EQUAL_TO(IS_TIME_EQUAL_TO(), iLocal_50);
	}
	else
	{
		iLocal_51 = GET_GAME_TIMER();
		iLocal_52 = (iLocal_51 - iLocal_49);
	}
	if (iLocal_52 > 3000)
	{
		_REMOVE_LOADING_PROMPT();
	}
	if (iLocal_52 > 3200)
	{
		Global_21840 = 6;
	}
}

void func_4()
{
	iLocal_54 = _0x0C0C4E81E1AC60A0();
	switch (iLocal_54)
	{
		case 0:
			if (NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_50 = 0xBA7F0B77D80A4EB7();
			}
			else
			{
				iLocal_49 = GET_GAME_TIMER();
			}
			Global_21840 = 11;
			settimerb(0);
			break;
		
		case 1:
			break;
		
		case 2:
			func_13();
			break;
	}
}

void func_5()
{
	Global_21845 = -1;
	if (Global_76577)
	{
		if (func_6())
		{
			0xF3F776ADA161E47D(Global_4456448.f_184556, Global_4456448.f_184556.f_1);
		}
	}
	if (_0x3DEC726C25A11BAC(Global_21845))
	{
		Global_21840 = 10;
		BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("CELL_278");
		_END_TEXT_COMMAND_BUSY_STRING(1);
	}
	else
	{
		func_13();
	}
}

bool func_6()
{
	return IS_BIT_SET(Global_4456448.f_184550, 12);
}

void func_7()
{
	iLocal_54 = _0xF5BED327CEA362B1(1);
	switch (iLocal_54)
	{
		case 0:
			Global_21840 = 9;
			break;
		
		case 1:
			break;
		
		case 2:
			func_13();
			break;
	}
}

void func_8()
{
	iLocal_54 = _0xCB82A0BF0E3E3265(iLocal_55);
	switch (iLocal_54)
	{
		case 0:
			_0x1072F115DAB0717E(1, 1);
			Global_21840 = 6;
			break;
		
		case 1:
			break;
		
		case 2:
			if (iLocal_55 == 3)
			{
				SET_BIT(&Global_7357, 14);
				_0x1072F115DAB0717E(0, 0);
				_0xD801CC02177FA3F1();
				_0x6A12D88881435DCA();
				Global_21840 = 6;
			}
			if (Global_21840 == 5)
			{
				if (iLocal_55 == 0)
				{
					Global_21840 = 4;
					iLocal_55 = 1;
					_0x6A12D88881435DCA();
					wait(0);
				}
			}
			if (Global_21840 == 5)
			{
				if (iLocal_55 == 1)
				{
					Global_21840 = 4;
					iLocal_55 = 2;
					_0x6A12D88881435DCA();
					wait(0);
				}
			}
			if (Global_21840 == 5)
			{
				if (iLocal_55 == 2)
				{
					Global_21840 = 4;
					iLocal_55 = 3;
					_0x6A12D88881435DCA();
					wait(0);
				}
			}
			break;
	}
}

void func_9()
{
	if (_0x759650634F07B6B4(iLocal_55))
	{
		Global_21840 = 5;
	}
	else
	{
		SET_BIT(&Global_7357, 15);
		func_13();
	}
}

void func_10()
{
	iLocal_54 = _0x0D6CA79EEEBD8CA3();
	switch (iLocal_54)
	{
		case 0:
			Global_21840 = 4;
			iLocal_55 = 2;
			break;
		
		case 1:
			break;
		
		case 2:
			Global_19486.f_1 = 3;
			func_13();
			break;
	}
}

void func_11()
{
	if (_0xA67C35C56EB1BD9D())
	{
		Global_21840 = 3;
	}
}

void func_12()
{
	if (timerb() > 0)
	{
		Global_21840 = 2;
	}
}

void func_13()
{
	_0x1072F115DAB0717E(0, 0);
	_0xD801CC02177FA3F1();
	_0x6A12D88881435DCA();
	_REMOVE_LOADING_PROMPT();
	Global_21841 = 0;
	Global_21842 = 0;
	Global_21843 = 0;
	Global_21840 = 0;
}

void func_14()
{
	if (Global_21841)
	{
		Global_21840 = 1;
		CLEAR_BIT(&Global_7357, 14);
		settimerb(0);
	}
}

int func_15()
{
	char* sVar0;
	
	if ((func_21(2, Global_19453, 0) && !IS_HUD_COMPONENT_ACTIVE(19)) && !IS_HUD_COMPONENT_ACTIVE())
	{
		if (IS_PC_VERSION())
		{
			if (DECOR_EXIST_ON(DECOR_EXIST_ON(), "Synched"))
			{
				sVar0 = _GET_LABEL_TEXT("CELL_ANTIH_A");
				_SET_NOTIFICATION_TEXT_ENTRY("CELL_ANTIH");
				_SET_NOTIFICATION_MESSAGE_2("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, sVar0, 0);
			}
		}
		if (!IS_PED_INJURED(IS_PED_INJURED()))
		{
			if (func_20(PLAYER_PED_ID()) || PLAYER_PED_ID(PLAYER_PED_ID()))
			{
				if (IS_CONTROL_PRESSED(0, 25) || IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
		Global_21864 = 0;
		Global_21865 = 0;
		if (_GET_CURRENT_NOTIFICATION() == Global_21862 && _GET_CURRENT_NOTIFICATION() != -1)
		{
			Global_21864 = Global_21863;
			iLocal_58 = GET_GAME_TIMER();
			iLocal_60 = 0;
			iLocal_61 = 0;
			while (((func_19(2, Global_19453) && iLocal_60 < 250) && Global_19672 == 0) && !IS_HUD_COMPONENT_ACTIVE(19))
			{
				if (Global_8060 > 0)
				{
					func_16();
				}
				wait(0);
				iLocal_59 = GET_GAME_TIMER();
				iLocal_60 = (iLocal_59 - iLocal_58);
				if (Global_8060 > 0)
				{
					func_16();
				}
			}
			if ((func_19(2, Global_19453) && Global_19672 == 0) && !IS_HUD_COMPONENT_ACTIVE(19))
			{
				iLocal_61 = 1;
			}
			if (Global_19672 == 0)
			{
				if (iLocal_61 == 1)
				{
					Global_21865 = 1;
					Global_21864 = Global_21863;
					if (Global_21864 == 1)
					{
					}
					if (Global_21864 == 2)
					{
					}
					if (Global_21864 == 3)
					{
					}
					if (Global_21864 == 0)
					{
					}
					if (Global_21864 == 4)
					{
					}
				}
				else
				{
					Global_21864 = 0;
				}
			}
			else
			{
				Global_21864 = 0;
			}
		}
		else
		{
			Global_21864 = 0;
		}
		if (!IS_HUD_COMPONENT_ACTIVE(19))
		{
			return 1;
		}
		else
		{
			Global_21864 = 0;
			Global_21865 = 0;
			return 0;
		}
	}
	return 0;
}

void func_16()
{
	int iVar0;
	
	iVar0 = 255;
	if (Global_21870)
	{
		fLocal_71 = -0.055f;
		fLocal_72 = 0.745f;
		fLocal_67 = GET_SAFE_ZONE_SIZE();
		fLocal_73 = ((100f * fLocal_70) - (100f * fLocal_67));
		fLocal_68 = (fLocal_71 + (fLocal_73 * 0.005f));
		fLocal_69 = (fLocal_72 - (fLocal_73 * 0.005f));
		if (!func_18())
		{
			SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
			_SET_UI_LAYER(7);
			if (IS_PC_VERSION())
			{
				_0xEFABC7722293DA7C();
			}
			DRAW_SCALEFORM_MOVIE(iLocal_37, fLocal_68, fLocal_69, 0.27f, 0.45f, 255, 255, 255, iVar0, 0);
			SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
			_SET_UI_LAYER(4);
		}
	}
	else
	{
		if (IS_PC_VERSION())
		{
			if (Global_2416074.f_1491)
			{
				bLocal_38 = false;
			}
			else if (IS_BIT_SET(Global_7356, 13))
			{
				if (IS_BIT_SET(Global_4269615, 19))
				{
					bLocal_38 = false;
				}
				else
				{
					bLocal_38 = true;
				}
			}
			else
			{
				bLocal_38 = false;
			}
		}
		else if (Global_2416074.f_1491 || IS_BIT_SET(Global_7356, 13))
		{
			bLocal_38 = true;
		}
		else
		{
			bLocal_38 = false;
		}
		if (func_46())
		{
			bLocal_38 = true;
		}
		if (IS_BIT_SET(Global_4269615, 28))
		{
			iVar0 = 125;
			if (bLocal_38 == 1)
			{
				bLocal_38 = false;
			}
		}
		if (_IS_RADAR_ENABLED())
		{
			if (!IS_RADAR_HIDDEN())
			{
				if (!bLocal_38)
				{
					if (!func_17())
					{
						if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
						{
							if (!IS_PLAYER_BEING_ARRESTED(IS_PLAYER_BEING_ARRESTED(), 1))
							{
								_SET_UI_LAYER(4);
								if (IS_PC_VERSION() && Global_2416074.f_1491)
								{
									fLocal_71 = 0.165f;
									fLocal_72 = 0.755f;
								}
								else
								{
									fLocal_71 = 0.07f;
									fLocal_72 = 0.755f;
								}
								fLocal_67 = GET_SAFE_ZONE_SIZE();
								fLocal_73 = ((100f * fLocal_70) - (100f * fLocal_67));
								fLocal_68 = (fLocal_71 + (fLocal_73 * 0.005f));
								fLocal_69 = (fLocal_72 - (fLocal_73 * 0.005f));
								if (!func_18())
								{
									if (IS_PC_VERSION())
									{
										_0xEFABC7722293DA7C();
									}
									if (Global_2416074.f_1491)
									{
										fLocal_39 = 0.09f;
										fLocal_40 = -0.25f;
										if (IS_PC_VERSION())
										{
											if (IS_BIT_SET(Global_4269615, 28))
											{
											}
											else
											{
												DRAW_SCALEFORM_MOVIE(iLocal_37, fLocal_68, fLocal_69, 0.27f, 0.45f, 255, 255, 255, iVar0, 0);
											}
										}
										else
										{
											DRAW_SCALEFORM_MOVIE(iLocal_37, (fLocal_68 + fLocal_39), (fLocal_69 + fLocal_40), 0.27f, 0.45f, 255, 255, 255, iVar0, 0);
										}
									}
									else
									{
										DRAW_SCALEFORM_MOVIE(iLocal_37, fLocal_68, fLocal_69, 0.27f, 0.45f, 255, 255, 255, iVar0, 0);
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

int func_17()
{
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_18()
{
	if (IS_BIT_SET(Global_7358, 3))
	{
		return 1;
	}
	return 0;
}

int func_19(int iParam0, int iParam1)
{
	if (IS_CONTROL_PRESSED(iParam0, iParam1))
	{
		if (IS_PC_VERSION())
		{
			if (UPDATE_ONSCREEN_KEYBOARD() == 0)
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

int func_20(int iParam0)
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

int func_21(int iParam0, int iParam1, int iParam2)
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

void func_22()
{
	switch (Global_19486.f_1)
	{
		case 4:
			if (IS_BIT_SET(Global_7357, 21))
			{
			}
			else
			{
				if (IS_THREAD_ACTIVE(Global_19483))
				{
				}
				else
				{
					if (!IS_THREAD_ACTIVE(Global_19483))
					{
						if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
						{
							REQUEST_SCRIPT("cellphone_flashhand");
							while (!HAS_SCRIPT_LOADED("cellphone_flashhand"))
							{
								wait(0);
								if (Global_8060 > 0)
								{
									func_16();
								}
							}
							if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
							{
								Global_19483 = start_new_script("cellphone_flashhand", 1424);
							}
							SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
						}
					}
					func_32(0);
				}
				if (Global_20815 || Global_20816)
				{
					if (!IS_THREAD_ACTIVE(Global_19483))
					{
						if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
						{
							REQUEST_SCRIPT("cellphone_flashhand");
							while (!HAS_SCRIPT_LOADED("cellphone_flashhand"))
							{
								wait(0);
								if (Global_8060 > 0)
								{
									func_16();
								}
							}
							if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
							{
								Global_19483 = start_new_script("cellphone_flashhand", 1424);
							}
							SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
						}
					}
					while (!HAS_SCALEFORM_MOVIE_LOADED(Global_19467) && Global_19469 == 0)
					{
						wait(0);
						if (Global_8060 > 0)
						{
							func_16();
						}
					}
					if (Global_19469 == 0)
					{
						Global_19486.f_1 = 9;
						func_23();
					}
				}
				else
				{
					bLocal_66 = false;
					if (Global_76577 && (Global_21867 || Global_1627599.f_5))
					{
						bLocal_66 = true;
					}
					if (((Global_111560.f_14046[Global_19486 /*20*/].f_18 == 1 || Global_111560.f_14046[Global_19486 /*20*/].f_17 == 1) || bLocal_66 == 1) || Global_21864 != 0)
					{
						while (!HAS_SCALEFORM_MOVIE_LOADED(Global_19467) && Global_19469 == 0)
						{
							wait(0);
							if (Global_8060 > 0)
							{
								func_16();
							}
						}
						if (Global_19469 == 0)
						{
							if (Global_19486.f_1 > 3)
							{
								Global_19486.f_1 = 6;
								if (Global_21864 == 0)
								{
									if (bLocal_66)
									{
									}
									else if (Global_76577 == 0)
									{
										if (Global_111560.f_14046[Global_19486 /*20*/].f_17 == 1)
										{
											func_78(1, 0, 1, 0);
										}
									}
								}
								else
								{
									if (Global_21864 == 3)
									{
									}
									if (Global_21864 == 1)
									{
									}
									if (Global_21864 == 2)
									{
									}
									if (Global_21864 == 4)
									{
									}
								}
							}
						}
					}
					else
					{
						while (!HAS_SCALEFORM_MOVIE_LOADED(Global_19467) && Global_19469 == 0)
						{
							wait(0);
							if (Global_8060 > 0)
							{
								func_16();
							}
						}
						if (Global_19469 == 0)
						{
							if (Global_19486.f_1 > 3)
							{
								if (Global_20815 || Global_20816)
								{
									Global_19486.f_1 = 9;
								}
								else
								{
									Global_19486.f_1 = 6;
								}
							}
						}
					}
				}
			}
			break;
	}
}

void func_23()
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
			func_31(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_29(Global_7961);
			if (Global_7961 == 1)
			{
				func_31(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19490), -1082130432, -1082130432, -1082130432);
				Global_19466 = Global_19490;
			}
			else
			{
				func_31(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19491), -1082130432, -1082130432, -1082130432);
				Global_19466 = Global_19491;
			}
			if (Global_19474)
			{
				func_28(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_28(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_28(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_28(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_19666 == 0)
			{
				func_28(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				CLEAR_BIT(&Global_7356, 17);
			}
			else if (Global_76577)
			{
				func_28(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				CLEAR_BIT(&Global_7356, 17);
			}
			else
			{
				if (Global_19665 == 1)
				{
					if (Global_19474)
					{
						func_28(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_28(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19474)
				{
					func_28(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_28(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				SET_BIT(&Global_7356, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_31(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_28(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_28(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			CLEAR_BIT(&Global_7356, 17);
			if (IS_BIT_SET(Global_7356, 20))
			{
				func_28(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_28(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_28(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_28(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_19485 == 1)
			{
				func_27();
				func_31(Global_19467, "SET_THEME", to_float(Global_111560.f_14046[Global_19486 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_20818)
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(4);
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(2);
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_20820);
					END_TEXT_COMMAND_SCALEFORM_STRING();
					func_26("CELL_300");
					func_26("CELL_217");
					func_26("CELL_217");
					END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_25(Global_6671, Global_19486) == 0)
				{
					func_28(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_28(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), "CELL_217", &(Global_1798[Global_6671 /*29*/].f_3), 0);
				}
				func_31(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_20805 == 4 || Global_20805 == 3)
			{
				func_31(Global_19467, "SET_THEME", to_float(Global_111560.f_14046[Global_19486 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_27();
				if (Global_20818)
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(4);
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(2);
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_20820);
					END_TEXT_COMMAND_SCALEFORM_STRING();
					func_26("CELL_300");
					func_26("CELL_219");
					func_26("CELL_219");
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
					if (func_25(Global_6671, Global_19486) == 0)
					{
						func_31(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_28(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_31(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_28(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), &cVar0, &(Global_1798[Global_6671 /*29*/].f_3), 0);
					}
				}
				func_31(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_24();
			break;
		
		default:
			break;
	}
}

void func_24()
{
	if (HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
	{
		if (Global_19485 == 1)
		{
			if (Global_19474)
			{
				func_28(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_28(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20852)
			{
				func_28(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (IS_BIT_SET(Global_7356, 20))
			{
				func_28(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_28(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_28(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_28(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			CLEAR_BIT(&Global_7356, 17);
		}
		else
		{
			func_28(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_28(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			CLEAR_BIT(&Global_7356, 17);
			if (IS_BIT_SET(Global_7356, 20))
			{
				func_28(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_28(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_28(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_28(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

int func_25(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_24[iParam1];
}

void func_26(char* sParam0)
{
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_27()
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

void func_28(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_26(sParam7);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_26(sParam8);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_26(sParam9);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_26(sParam10);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_26(sParam11);
	}
	END_SCALEFORM_MOVIE_METHOD();
}

void func_29(int iParam0)
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
		if (func_30(14))
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
								func_26(&(Global_7363[iVar1 /*15*/]));
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar2);
								END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2458994)
							{
								if (iVar1 == 14)
								{
									func_28(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_28(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(Global_21873), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_28(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_28(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_28(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_7363[iVar1 /*15*/].f_10);
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
								func_26(&(Global_7363[iVar1 /*15*/]));
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
								func_26(&(Global_7363[iVar1 /*15*/]));
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
								func_26(&(Global_7363[iVar1 /*15*/]));
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
								func_26(&(Global_7363[iVar1 /*15*/]));
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
								func_26(&(Global_7363[iVar1 /*15*/]));
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(42);
								END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_7363[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627599.f_1;
								func_28(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_28(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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

bool func_30(int iParam0)
{
	return Global_41396 == iParam0;
}

void func_31(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_32(bool bParam0)
{
	if (bParam0)
	{
		if (Global_19486.f_1 == 9)
		{
			Global_19664 = 1;
		}
	}
	else
	{
		Global_19664 = 0;
	}
}

void func_33()
{
	if (func_15() || IS_BIT_SET(Global_7356, 8))
	{
		CLEAR_BIT(&Global_7356, 8);
		func_39();
		if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
		{
			if (!IS_PED_SWIMMING_UNDER_WATER(IS_PED_SWIMMING_UNDER_WATER()))
			{
				if (func_38())
				{
				}
				else if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					if (IS_BIT_SET(Global_7357, 21))
					{
						CLEAR_BIT(&Global_7357, 21);
					}
					if (Global_19672 == 1)
					{
						Global_19672 = 0;
					}
					switch (Global_19486.f_1)
					{
						case 3:
							Global_19486.f_1 = 4;
							if (iLocal_78 == 0)
							{
								func_34();
								iLocal_78 = 1;
							}
							break;
						
						default:
							break;
					}
					Global_19662 = 1;
				}
			}
		}
	}
}

void func_34()
{
	if (Global_4268349 == 1)
	{
		if (!func_37())
		{
			return;
		}
		if (func_35(PLAYER_ID()))
		{
			if (GET_PROFILE_SETTING(803) == 1)
			{
				_SET_NOTIFICATION_TEXT_ENTRY("CELL_EMAIL_EVENT");
				END_TEXT_COMMAND_THEFEED_POST_TICKER(1, 1);
			}
			else if (GET_PROFILE_SETTING(803) != 1)
			{
			}
		}
	}
}

int func_35(int iParam0)
{
	int iVar0;
	struct<13> Var1;
	
	if (_0x66B59CFFD78467AF() == 0)
	{
		return 0;
	}
	iVar0 = -1;
	if (iParam0 != PLAYER_ID())
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	if (IS_PS3_VERSION() || IS_PS3_VERSION())
	{
		if (_0xAEEF48CDF5B6CE7C(0, iVar0))
		{
			if (NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	if (IS_XBOX360_VERSION() || IS_XBOX360_VERSION())
	{
		if (iParam0 == PLAYER_ID())
		{
			if (_0x83F28CE49FBBFFBA(0, -3, 1) || _0x83F28CE49FBBFFBA(1, -1))
			{
				return 1;
			}
		}
		else
		{
			Var1 = { func_36(iParam0) };
			if (_0xAEEF48CDF5B6CE7C(0, -1) || (_0xAEEF48CDF5B6CE7C(1, -1) && _0xAEEF48CDF5B6CE7C(&Var1)))
			{
				return 1;
			}
		}
	}
	if (IS_PC_VERSION())
	{
		if (_0xAEEF48CDF5B6CE7C(0, iVar0))
		{
			if (NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_36(int iParam0)
{
	struct<13> Var0;
	
	NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_37()
{
	if (IS_PS3_VERSION() && IS_PS3_VERSION() == 3)
	{
		return 1;
	}
	if (IS_XBOX360_VERSION() && IS_XBOX360_VERSION() == 3)
	{
		return 1;
	}
	if (IS_ORBIS_VERSION() && IS_ORBIS_VERSION() == 0)
	{
		return 1;
	}
	if (IS_DURANGO_VERSION() && IS_DURANGO_VERSION() == 0)
	{
		return 1;
	}
	if (IS_PC_VERSION() && IS_PC_VERSION())
	{
		return 1;
	}
	return 0;
}

int func_38()
{
	if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
	{
		if ((((GET_PED_CONFIG_FLAG(GET_PED_CONFIG_FLAG(), 78, 1) || GET_PED_CONFIG_FLAG(GET_PED_CONFIG_FLAG())) || GET_PED_CONFIG_FLAG(GET_PED_CONFIG_FLAG(), 0)) || GET_PED_CONFIG_FLAG(GET_PED_CONFIG_FLAG())) || GET_PED_CONFIG_FLAG(GET_PED_CONFIG_FLAG()) == 1)
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

void func_39()
{
	if (func_30(14))
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
		Global_19486 = func_40();
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

var func_40()
{
	func_41();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_41()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()))
	{
		if (func_44(Global_111560.f_2358.f_539.f_4321) != GET_ENTITY_MODEL(GET_ENTITY_MODEL()))
		{
			iVar0 = func_43(PLAYER_PED_ID());
			if (func_42(iVar0) && (!func_30(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_42(Global_111560.f_2358.f_539.f_4321))
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

bool func_42(int iParam0)
{
	return iParam0 < 3;
}

int func_43(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_44(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_44(int iParam0)
{
	if (func_42(iParam0))
	{
		return func_45(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_45(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

int func_46()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_47()
{
	char cVar0[64];
	int iVar1;
	char cVar2[64];
	char cVar3[64];
	char cVar4[64];
	char cVar5[64];
	
	CLEAR_BIT(&Global_4269615, 0);
	if (Global_21866 != 0)
	{
		if (IS_PEDHEADSHOT_VALID(Global_21866))
		{
			if (IS_PEDHEADSHOT_READY(Global_21866))
			{
				StringCopy(&cVar0, GET_PEDHEADSHOT_TXD_STRING(Global_21866), 64);
				Global_21874[Global_21872] = Global_21866;
			}
			else
			{
				StringCopy(&cVar0, "CHAR_DEFAULT", 64);
				Global_21874[Global_4269599] = 0;
			}
		}
		else
		{
			StringCopy(&cVar0, "CHAR_DEFAULT", 64);
			Global_21874[Global_4269599] = 0;
		}
	}
	else
	{
		StringCopy(&cVar0, _GET_LABEL_TEXT(&(Global_1798[Global_4268350[Global_4269599 /*104*/].f_17 /*29*/].f_7)), 64);
		Global_21874[Global_4269599] = 0;
	}
	if (IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	else if (ARE_STRINGS_EQUAL(&cVar0, "NULL"))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	if (((((((Global_4268350[Global_4269599 /*104*/].f_32 == 4 || Global_4268350[Global_4269599 /*104*/].f_32 == 5) || Global_4268350[Global_4269599 /*104*/].f_32 == 6) || Global_4268350[Global_4269599 /*104*/].f_32 == 7) || Global_4268350[Global_4269599 /*104*/].f_32 == 8) || Global_4268350[Global_4269599 /*104*/].f_32 == 9) || Global_4268350[Global_4269599 /*104*/].f_32 == 10) || Global_4268350[Global_4269599 /*104*/].f_32 == 11)
	{
		iVar1 = 0;
		switch (Global_4268350[Global_4269599 /*104*/].f_49)
		{
			case 1:
				_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL01");
				break;
			
			case 2:
				_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL02");
				break;
			
			case 3:
				_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL03");
				break;
			
			case 4:
				_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL04");
				break;
			
			case 5:
				_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL05");
				break;
			
			case 6:
				_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL06");
				break;
			
			case 7:
				_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL07");
				break;
			
			case 8:
				_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL08");
				break;
			
			case 9:
				_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL09");
				break;
		}
		ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268350[Global_4269599 /*104*/]));
		while (iVar1 < Global_4268350[Global_4269599 /*104*/].f_49)
		{
			switch (Global_4268350[Global_4269599 /*104*/].f_32)
			{
				case 4:
					ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2531497.f_1662[iVar1 /*4*/]));
					break;
				
				case 5:
					ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1662564[iVar1 /*4*/]));
					break;
				
				case 6:
					ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1662605[iVar1 /*4*/]));
					break;
				
				case 7:
					ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1662626[iVar1 /*4*/]));
					break;
				
				case 8:
					ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1662643[iVar1 /*4*/]));
					break;
				
				case 9:
					ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1662656[iVar1 /*4*/]));
					break;
				
				case 10:
					ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1662669[iVar1 /*4*/]));
					break;
				
				case 11:
					ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1662682[iVar1 /*4*/]));
					break;
			}
			iVar1++;
		}
		StringCopy(&cVar2, _GET_LABEL_TEXT(&(Global_1798[Global_4268350[Global_4269599 /*104*/].f_17 /*29*/].f_3)), 64);
		iLocal_48 = _SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 2, &cVar2, 0);
		SET_BIT(&Global_4269615, 1);
		Global_21863 = 1;
		Global_21862 = iLocal_48;
		Global_21866 = 0;
	}
	else
	{
		_SET_NOTIFICATION_TEXT_ENTRY(&(Global_4268350[Global_4269599 /*104*/]));
		switch (Global_4268350[Global_4269599 /*104*/].f_32)
		{
			case 0:
				break;
			
			case 1:
				ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268350[Global_4269599 /*104*/].f_33));
				if (Global_4268350[Global_4269599 /*104*/].f_66 == 1 && !ARE_STRINGS_EQUAL(&(Global_4268350[Global_4269599 /*104*/].f_67), "NULL"))
				{
					ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268350[Global_4269599 /*104*/].f_67));
				}
				if ((Global_4268350[Global_4269599 /*104*/].f_66 == 2 && !ARE_STRINGS_EQUAL(&(Global_4268350[Global_4269599 /*104*/].f_67), "NULL")) && !ARE_STRINGS_EQUAL(&(Global_4268350[Global_4269599 /*104*/].f_83), "NULL"))
				{
					if (DOES_TEXT_LABEL_EXIST(&(Global_4268350[Global_4269599 /*104*/].f_67)))
					{
						ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268350[Global_4269599 /*104*/].f_67));
					}
					else
					{
						ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268350[Global_4269599 /*104*/].f_67));
					}
					if (DOES_TEXT_LABEL_EXIST(&(Global_4268350[Global_4269599 /*104*/].f_83)))
					{
						ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268350[Global_4269599 /*104*/].f_83));
					}
					else
					{
						ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268350[Global_4269599 /*104*/].f_83));
					}
				}
				break;
			
			case 2:
				ADD_TEXT_COMPONENT_INTEGER(Global_4268350[Global_4269599 /*104*/].f_49);
				break;
			
			case 3:
				ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268350[Global_4269599 /*104*/].f_33));
				ADD_TEXT_COMPONENT_INTEGER(Global_4268350[Global_4269599 /*104*/].f_49);
				if (Global_4268350[Global_4269599 /*104*/].f_66 == 1 && !ARE_STRINGS_EQUAL(&(Global_4268350[Global_4269599 /*104*/].f_67), "NULL"))
				{
					ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268350[Global_4269599 /*104*/].f_67));
				}
				if ((Global_4268350[Global_4269599 /*104*/].f_66 == 2 && !ARE_STRINGS_EQUAL(&(Global_4268350[Global_4269599 /*104*/].f_67), "NULL")) && !ARE_STRINGS_EQUAL(&(Global_4268350[Global_4269599 /*104*/].f_83), "NULL"))
				{
					if (DOES_TEXT_LABEL_EXIST(&(Global_4268350[Global_4269599 /*104*/].f_67)))
					{
						ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268350[Global_4269599 /*104*/].f_67));
					}
					else
					{
						ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268350[Global_4269599 /*104*/].f_67));
					}
					if (DOES_TEXT_LABEL_EXIST(&(Global_4268350[Global_4269599 /*104*/].f_83)))
					{
						ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268350[Global_4269599 /*104*/].f_83));
					}
					else
					{
						ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268350[Global_4269599 /*104*/].f_83));
					}
				}
				break;
		}
		if (Global_4268350[Global_4269599 /*104*/].f_17 == 145)
		{
			StringCopy(&cVar3, "<C>", 64);
			StringConCat(&cVar3, &Global_8044, 64);
			StringConCat(&cVar3, "</C>", 64);
			iLocal_48 = _SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 2, &cVar3, 0);
			SET_BIT(&Global_4269615, 1);
			Global_21863 = 1;
			Global_21862 = iLocal_48;
		}
		else
		{
			StringCopy(&cVar4, _GET_LABEL_TEXT(&(Global_1798[Global_4268350[Global_4269599 /*104*/].f_17 /*29*/].f_3)), 64);
			if (Global_4268350[Global_4269599 /*104*/].f_17 == 98)
			{
				StringCopy(&cVar5, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar5, &cVar4, 64);
				iLocal_48 = _SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 2, &cVar5, 0);
			}
			else
			{
				iLocal_48 = _SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 2, &cVar4, 0);
			}
			SET_BIT(&Global_4269615, 1);
			Global_21863 = 1;
			Global_21862 = iLocal_48;
			Global_21866 = 0;
		}
	}
	Global_4268350[Global_4269599 /*104*/].f_16 = iLocal_48;
}

void func_48()
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, _GET_LABEL_TEXT(&(Global_1798[Global_8042 /*29*/].f_7)), 64);
	if (Global_8061 == 0)
	{
		_SET_NOTIFICATION_TEXT_ENTRY("");
		StringCopy(&cVar1, _GET_LABEL_TEXT(&(Global_7966[1 /*6*/])), 64);
		sVar2 = _GET_LABEL_TEXT("CELL_253");
		_SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
	}
	else
	{
		_SET_NOTIFICATION_TEXT_ENTRY("CELL_255");
		ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_7966[1 /*6*/]));
		_SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 3, "", 0);
	}
	CLEAR_BIT(&Global_7356, 0);
}

void func_49()
{
	if (IS_BIT_SET(Global_7356, 1))
	{
		func_52();
		func_50();
		Global_111560.f_14046[Global_19486 /*20*/].f_18 = 1;
		if (NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_45[Global_19486] = 0xBA7F0B77D80A4EB7();
			iLocal_43[Global_19486] = 1;
		}
		else if (!IS_BIT_SET(Global_7356, 10))
		{
			iLocal_44[Global_19486] = GET_GAME_TIMER();
			iLocal_43[Global_19486] = 1;
		}
		else
		{
			iLocal_44[0] = GET_GAME_TIMER();
			iLocal_44[2] = GET_GAME_TIMER();
			iLocal_44[1] = GET_GAME_TIMER();
			iLocal_43[0] = 1;
			iLocal_43[2] = 1;
			iLocal_43[1] = 1;
		}
		CLEAR_BIT(&Global_7356, 1);
	}
}

void func_50()
{
	func_39();
	if (Global_76577)
	{
		Global_111560.f_14046[3 /*20*/].f_10 = func_120(1197, -1, 0);
	}
	if (Global_111560.f_14046[Global_19486 /*20*/].f_10 == 1)
	{
		if (!func_51(0))
		{
			SET_PAD_SHAKE(0, 2000, 100);
		}
	}
}

int func_51(int iParam0)
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

void func_52()
{
	char cVar0[64];
	int iVar1;
	char cVar2[64];
	char cVar3[64];
	char cVar4[64];
	char cVar5[64];
	
	if (Global_21866 != 0)
	{
		if (IS_PEDHEADSHOT_VALID(Global_21866))
		{
			if (IS_PEDHEADSHOT_READY(Global_21866))
			{
				StringCopy(&cVar0, GET_PEDHEADSHOT_TXD_STRING(Global_21866), 64);
				Global_21874[Global_21872] = Global_21866;
			}
			else
			{
				StringCopy(&cVar0, "CHAR_DEFAULT", 64);
				Global_21874[Global_21872] = 0;
			}
		}
		else
		{
			StringCopy(&cVar0, "CHAR_DEFAULT", 64);
			Global_21874[Global_21872] = 0;
		}
	}
	else
	{
		StringCopy(&cVar0, _GET_LABEL_TEXT(&(Global_1798[Global_111560.f_14136[Global_21872 /*104*/].f_17 /*29*/].f_7)), 64);
		if (Global_111560.f_14136[Global_21872 /*104*/].f_17 == 159)
		{
			StringCopy(&cVar0, _GET_LABEL_TEXT("CELL_COMIC_P"), 64);
		}
		Global_21874[Global_21872] = 0;
	}
	if (IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	else if (ARE_STRINGS_EQUAL(&cVar0, "NULL"))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	if (((((((Global_111560.f_14136[Global_21872 /*104*/].f_32 == 4 || Global_111560.f_14136[Global_21872 /*104*/].f_32 == 5) || Global_111560.f_14136[Global_21872 /*104*/].f_32 == 6) || Global_111560.f_14136[Global_21872 /*104*/].f_32 == 7) || Global_111560.f_14136[Global_21872 /*104*/].f_32 == 8) || Global_111560.f_14136[Global_21872 /*104*/].f_32 == 9) || Global_111560.f_14136[Global_21872 /*104*/].f_32 == 10) || Global_111560.f_14136[Global_21872 /*104*/].f_32 == 11)
	{
		iVar1 = 0;
		switch (Global_111560.f_14136[Global_21872 /*104*/].f_49)
		{
			case 1:
				_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL01");
				break;
			
			case 2:
				_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL02");
				break;
			
			case 3:
				_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL03");
				break;
			
			case 4:
				_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL04");
				break;
			
			case 5:
				_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL05");
				break;
			
			case 6:
				_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL06");
				break;
			
			case 7:
				_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL07");
				break;
			
			case 8:
				_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL08");
				break;
			
			case 9:
				_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL09");
				break;
		}
		ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_111560.f_14136[Global_21872 /*104*/]));
		while (iVar1 < Global_111560.f_14136[Global_21872 /*104*/].f_49)
		{
			switch (Global_111560.f_14136[Global_21872 /*104*/].f_32)
			{
				case 4:
					ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2531497.f_1662[iVar1 /*4*/]));
					break;
				
				case 5:
					ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1662564[iVar1 /*4*/]));
					break;
				
				case 6:
					ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1662605[iVar1 /*4*/]));
					break;
				
				case 7:
					ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1662626[iVar1 /*4*/]));
					break;
				
				case 8:
					ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1662643[iVar1 /*4*/]));
					break;
				
				case 9:
					ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1662656[iVar1 /*4*/]));
					break;
				
				case 10:
					ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1662669[iVar1 /*4*/]));
					break;
				
				case 11:
					ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1662682[iVar1 /*4*/]));
					break;
			}
			iVar1++;
		}
		StringCopy(&cVar2, _GET_LABEL_TEXT(&(Global_1798[Global_111560.f_14136[Global_21872 /*104*/].f_17 /*29*/].f_3)), 64);
		iLocal_48 = _SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 1, &cVar2, 0);
		Global_21863 = 3;
		Global_21862 = iLocal_48;
		Global_21866 = 0;
	}
	else
	{
		_SET_NOTIFICATION_TEXT_ENTRY(&(Global_111560.f_14136[Global_21872 /*104*/]));
		switch (Global_111560.f_14136[Global_21872 /*104*/].f_32)
		{
			case 0:
				break;
			
			case 1:
				ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_111560.f_14136[Global_21872 /*104*/].f_33));
				if (Global_111560.f_14136[Global_21872 /*104*/].f_66 == 1 && !ARE_STRINGS_EQUAL(&(Global_111560.f_14136[Global_21872 /*104*/].f_67), "NULL"))
				{
					ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_111560.f_14136[Global_21872 /*104*/].f_67));
				}
				if ((Global_111560.f_14136[Global_21872 /*104*/].f_66 == 2 && !ARE_STRINGS_EQUAL(&(Global_111560.f_14136[Global_21872 /*104*/].f_67), "NULL")) && !ARE_STRINGS_EQUAL(&(Global_111560.f_14136[Global_21872 /*104*/].f_83), "NULL"))
				{
					if (DOES_TEXT_LABEL_EXIST(&(Global_111560.f_14136[Global_21872 /*104*/].f_67)))
					{
						ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_111560.f_14136[Global_21872 /*104*/].f_67));
					}
					else
					{
						ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_111560.f_14136[Global_21872 /*104*/].f_67));
					}
					if (DOES_TEXT_LABEL_EXIST(&(Global_111560.f_14136[Global_21872 /*104*/].f_83)))
					{
						ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_111560.f_14136[Global_21872 /*104*/].f_83));
					}
					else
					{
						ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_111560.f_14136[Global_21872 /*104*/].f_83));
					}
				}
				break;
			
			case 2:
				ADD_TEXT_COMPONENT_INTEGER(Global_111560.f_14136[Global_21872 /*104*/].f_49);
				break;
			
			case 3:
				ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_111560.f_14136[Global_21872 /*104*/].f_33));
				ADD_TEXT_COMPONENT_INTEGER(Global_111560.f_14136[Global_21872 /*104*/].f_49);
				if (Global_111560.f_14136[Global_21872 /*104*/].f_66 == 1 && !ARE_STRINGS_EQUAL(&(Global_111560.f_14136[Global_21872 /*104*/].f_67), "NULL"))
				{
					ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_111560.f_14136[Global_21872 /*104*/].f_67));
				}
				if ((Global_111560.f_14136[Global_21872 /*104*/].f_66 == 2 && !ARE_STRINGS_EQUAL(&(Global_111560.f_14136[Global_21872 /*104*/].f_67), "NULL")) && !ARE_STRINGS_EQUAL(&(Global_111560.f_14136[Global_21872 /*104*/].f_83), "NULL"))
				{
					if (DOES_TEXT_LABEL_EXIST(&(Global_111560.f_14136[Global_21872 /*104*/].f_67)))
					{
						ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_111560.f_14136[Global_21872 /*104*/].f_67));
					}
					else
					{
						ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_111560.f_14136[Global_21872 /*104*/].f_67));
					}
					if (DOES_TEXT_LABEL_EXIST(&(Global_111560.f_14136[Global_21872 /*104*/].f_83)))
					{
						ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_111560.f_14136[Global_21872 /*104*/].f_83));
					}
					else
					{
						ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_111560.f_14136[Global_21872 /*104*/].f_83));
					}
				}
				break;
		}
		if (Global_111560.f_14136[Global_21872 /*104*/].f_17 == 145)
		{
			StringCopy(&cVar3, "<C>", 64);
			StringConCat(&cVar3, &Global_8044, 64);
			StringConCat(&cVar3, "</C>", 64);
			iLocal_48 = _SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 1, &cVar3, 0);
			Global_21863 = 3;
			Global_21862 = iLocal_48;
		}
		else
		{
			StringCopy(&cVar4, _GET_LABEL_TEXT(&(Global_1798[Global_111560.f_14136[Global_21872 /*104*/].f_17 /*29*/].f_3)), 64);
			if (Global_111560.f_14136[Global_21872 /*104*/].f_17 == 98)
			{
				StringCopy(&cVar5, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar5, &cVar4, 64);
				iLocal_48 = _SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 1, &cVar5, 0);
			}
			else
			{
				iLocal_48 = _SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 1, &cVar4, 0);
			}
			Global_21863 = 3;
			Global_21862 = iLocal_48;
			Global_21866 = 0;
		}
	}
	Global_111560.f_14136[Global_21872 /*104*/].f_16 = iLocal_48;
}

void func_53()
{
	if (IS_BIT_SET(Global_7356, 19))
	{
		CLEAR_BIT(&Global_7356, 19);
		func_39();
		Global_111560.f_14046[3 /*20*/].f_18 = 0;
		Global_111560.f_14046[3 /*20*/].f_17 = 0;
	}
}

void func_54()
{
	if (iLocal_43[Global_19486] == 1)
	{
		if (NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_47 = IS_TIME_EQUAL_TO(IS_TIME_EQUAL_TO(), iLocal_45[Global_19486]);
		}
		else
		{
			iLocal_46[Global_19486] = GET_GAME_TIMER();
			iLocal_47 = (iLocal_46[Global_19486] - iLocal_44[Global_19486]);
		}
		if (iLocal_47 > 300000)
		{
			Global_111560.f_14046[Global_19486 /*20*/].f_18 = 0;
			Global_111560.f_14046[Global_19486 /*20*/].f_17 = 0;
			iLocal_43[Global_19486] = 0;
		}
	}
}

void func_55()
{
	int iVar0;
	
	func_39();
	if (Global_76577 == 0)
	{
		if (!func_46())
		{
			if (iLocal_53 == 0)
			{
				if ((Global_111560.f_14136[21 /*104*/].f_24 != 0 || Global_111560.f_14136[22 /*104*/].f_24 != 0) || Global_111560.f_14136[23 /*104*/].f_24 != 0)
				{
					switch (Global_19486)
					{
						case 0:
							if (Global_111560.f_14136[21 /*104*/].f_24 != 0)
							{
								iLocal_42 = 21;
								iLocal_53 = 1;
								settimera(0);
							}
							break;
						
						case 1:
							if (Global_111560.f_14136[22 /*104*/].f_24 != 0)
							{
								iLocal_42 = 22;
								iLocal_53 = 1;
								settimera(0);
							}
							break;
						
						case 2:
							if (Global_111560.f_14136[23 /*104*/].f_24 != 0)
							{
								iLocal_42 = 23;
								iLocal_53 = 1;
								settimera(0);
							}
							break;
						
						default:
							break;
						}
				}
			}
			else if (timera() > 15000)
			{
				iLocal_53 = 0;
				iVar0 = 0;
				func_39();
				if (iLocal_42 == 21 && Global_19486 != 0)
				{
					iVar0 = 1;
				}
				if (iLocal_42 == 22 && Global_19486 != 1)
				{
					iVar0 = 1;
				}
				if (iLocal_42 == 23 && Global_19486 != 2)
				{
					iVar0 = 1;
				}
				if (Global_111560.f_14136[iLocal_42 /*104*/].f_24 != 0 && iVar0 == 0)
				{
					if (!func_30(14))
					{
						if (func_58(Global_111560.f_14136[iLocal_42 /*104*/].f_17, &(Global_111560.f_14136[iLocal_42 /*104*/]), Global_111560.f_14136[iLocal_42 /*104*/].f_24, Global_111560.f_14136[iLocal_42 /*104*/].f_25, Global_111560.f_14136[iLocal_42 /*104*/].f_26, Global_111560.f_14136[iLocal_42 /*104*/].f_29, 0, 1, Global_111560.f_14136[iLocal_42 /*104*/].f_31, Global_111560.f_14136[iLocal_42 /*104*/].f_30))
						{
							Global_111560.f_14136[iLocal_42 /*104*/].f_24 = 0;
						}
					}
				}
			}
			if (iLocal_64 == 0)
			{
				if (Global_8032[Global_19486])
				{
					iLocal_64 = 1;
					iLocal_65 = Global_19486;
					if (NETWORK_IS_GAME_IN_PROGRESS())
					{
						iLocal_62 = 0xBA7F0B77D80A4EB7();
					}
					else
					{
						iLocal_56 = GET_GAME_TIMER();
					}
				}
			}
			else
			{
				if (NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_63 = IS_TIME_EQUAL_TO(IS_TIME_EQUAL_TO(), iLocal_62);
				}
				else
				{
					iLocal_57 = GET_GAME_TIMER();
					iLocal_63 = (iLocal_57 - iLocal_56);
				}
				if (iLocal_63 > 7000)
				{
					if (func_56(0))
					{
						Global_7966[1 /*6*/] = { Global_8015[Global_19486 /*4*/] };
						Global_8042 = Global_8037[Global_19486];
						Global_8032[Global_19486] = 0;
						iLocal_64 = 0;
					}
				}
				if (iLocal_65 != Global_19486)
				{
					iLocal_64 = 0;
				}
			}
		}
	}
}

bool func_56(int iParam0)
{
	return func_57(iParam0, Global_41396);
}

int func_57(int iParam0, int iParam1)
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

int func_58(int iParam0, char* sParam1, int iParam2, int iParam3, var uParam4, var uParam5, int iParam6, bool bParam7, var uParam8, var uParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	CLEAR_BIT(&Global_7356, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_60(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, uParam4, uParam5, bParam7, uParam8, uParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			Global_7966[3 /*6*/] = { func_59(iParam0) };
			Global_8043 = iParam0;
			SET_BIT(&Global_7356, 1);
			SET_BIT(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_59(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_3;
}

int func_60(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_39();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19486 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19486 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19486 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
		{
			if (IS_PED_SWIMMING_UNDER_WATER(IS_PED_SWIMMING_UNDER_WATER()))
			{
				return 0;
			}
		}
		if (Global_111560.f_14046[Global_19486 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_71() == 0)
	{
		func_69();
		return 0;
	}
	func_68(Global_21872);
	StringCopy(&(Global_111560.f_14136[Global_21872 /*104*/]), sParam1, 64);
	Global_111560.f_14136[Global_21872 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_111560.f_14136[Global_21872 /*104*/].f_24 = iParam2;
	}
	Global_111560.f_14136[Global_21872 /*104*/].f_25 = iParam7;
	Global_111560.f_14136[Global_21872 /*104*/].f_26 = uParam8;
	Global_111560.f_14136[Global_21872 /*104*/].f_29 = uParam9;
	Global_111560.f_14136[Global_21872 /*104*/].f_30 = uParam12;
	Global_111560.f_14136[Global_21872 /*104*/].f_31 = uParam11;
	Global_111560.f_14136[Global_21872 /*104*/].f_28 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_111560.f_14136[Global_21872 /*104*/].f_33), sParam4, 64);
	Global_111560.f_14136[Global_21872 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_111560.f_14136[Global_21872 /*104*/].f_50), sParam5, 64);
	Global_111560.f_14136[Global_21872 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_111560.f_14136[Global_21872 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_111560.f_14136[Global_21872 /*104*/].f_83), sParam15, 64);
	if (IS_BIT_SET(Global_7356, 10))
	{
		Global_111560.f_14136[Global_21872 /*104*/].f_99[0] = 1;
		Global_111560.f_14136[Global_21872 /*104*/].f_99[1] = 1;
		Global_111560.f_14136[Global_21872 /*104*/].f_99[2] = 1;
		Global_8062 = 4;
		func_67(0);
		func_67(2);
		func_67(1);
	}
	else
	{
		func_39();
		switch (iParam16)
		{
			case 3:
				Global_111560.f_14136[Global_21872 /*104*/].f_99[Global_19486] = 1;
				break;
			
			case 0:
				Global_111560.f_14136[Global_21872 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_111560.f_14136[Global_21872 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_111560.f_14136[Global_21872 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_19486)
			{
				case 0:
					func_67(0);
					Global_8062 = 0;
					break;
				
				case 1:
					func_67(1);
					Global_8062 = 1;
					break;
				
				case 2:
					func_67(2);
					Global_8062 = 2;
					break;
				
				case 3:
					func_67(3);
					Global_8062 = 3;
					break;
				
				default:
					Global_8062 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (IS_BIT_SET(Global_7356, 10))
		{
			Global_111560.f_14046[0 /*20*/].f_17 = 1;
			Global_111560.f_14046[1 /*20*/].f_17 = 1;
			Global_111560.f_14046[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_111560.f_14046[Global_19486 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_111560.f_14046[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_111560.f_14046[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_111560.f_14046[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_21874[Global_21872] = 0;
	if (bParam10)
	{
		func_39();
		if (Global_19429)
		{
			StringCopy(&Global_19475, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19486)
			{
				case 0:
					StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_66())
			{
				PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_19475, true);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_31(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_29(1);
			func_31(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19466), -1082130432, -1082130432, -1082130432);
		}
	}
	func_61(iParam0, sParam1);
	return 1;
}

void func_61(int iParam0, char* sParam1)
{
	if (!func_62())
	{
		return;
	}
	0x0077F15613D36993(iParam0, 1654525105, 0x0077F15613D36993(sParam1), 0);
}

int func_62()
{
	if (!Global_262145.f_28013)
	{
		return 0;
	}
	if (!Global_76577)
	{
		return 0;
	}
	if (PLAYER_ID() == func_65())
	{
		return 0;
	}
	if (func_63(PLAYER_ID()))
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

bool func_63(int iParam0)
{
	return func_64(iParam0, 20);
}

bool func_64(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

int func_65()
{
	return -1;
}

bool func_66()
{
	return Global_1312873;
}

void func_67(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_111560.f_14046[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_68(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = GET_CLOCK_SECONDS();
	iVar1 = GET_CLOCK_MINUTES();
	iVar2 = GET_CLOCK_HOURS();
	iVar3 = GET_CLOCK_DAY_OF_MONTH();
	uVar4 = GET_CLOCK_MONTH() + 1;
	iVar5 = GET_CLOCK_YEAR();
	Global_111560.f_14136[iParam0 /*104*/].f_18 = iVar0;
	Global_111560.f_14136[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_111560.f_14136[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_111560.f_14136[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_111560.f_14136[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_111560.f_14136[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_69()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76577)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_21872 = 34;
	Global_111560.f_14136[Global_21872 /*104*/].f_18 = -1;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_1 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_2 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_3 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_70(Global_111560.f_14136[iVar2 /*104*/].f_18, Global_111560.f_14136[Global_21872 /*104*/].f_18))
		{
			Global_21872 = iVar2;
		}
		iVar2++;
	}
	Global_111560.f_14136[Global_21872 /*104*/].f_24 = 1;
}

int func_70(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_71()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76577)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_111560.f_14136[iVar2 /*104*/].f_24 == 0)
		{
			Global_21872 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_21872 = 34;
	Global_111560.f_14136[Global_21872 /*104*/].f_18 = -1;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_1 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_2 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_3 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_111560.f_14136[iVar2 /*104*/].f_24 == 0 || Global_111560.f_14136[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_70(Global_111560.f_14136[iVar2 /*104*/].f_18, Global_111560.f_14136[Global_21872 /*104*/].f_18))
			{
				Global_21872 = iVar2;
			}
		}
		if (Global_111560.f_14136[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_21872 == 34)
	{
		return 0;
	}
	Global_111560.f_14136[Global_21872 /*104*/].f_99[0] = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_99[1] = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_99[2] = 0;
	return 1;
}

void func_72()
{
	if (IS_BIT_SET(Global_7356, 6))
	{
		if (Global_8060 > 0)
		{
			if (IS_BIT_SET(Global_7357, 11))
			{
				if (iLocal_41)
				{
					func_73(iLocal_37, "CLEAR_ALL");
					if (IS_BIT_SET(Global_7356, 25))
					{
						BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_37, "CREATE_ALERT");
						_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(26);
						_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(222f);
						_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(222f);
						END_SCALEFORM_MOVIE_METHOD();
					}
					if (IS_BIT_SET(Global_4269615, 11))
					{
						BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_37, "CREATE_ALERT");
						_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(53);
						_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(222f);
						_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(222f);
						END_SCALEFORM_MOVIE_METHOD();
					}
					if (Global_76577 == 1)
					{
						if (IS_BIT_SET(Global_4269615, 12))
						{
							BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_37, "CREATE_ALERT");
							_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(52);
							_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(222f);
							_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(222f);
							END_SCALEFORM_MOVIE_METHOD();
						}
						if (IS_BIT_SET(Global_4269615, 28))
						{
							BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_37, "CREATE_ALERT");
							_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(60);
							_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(222f);
							_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(148f);
							END_SCALEFORM_MOVIE_METHOD();
						}
					}
					if (IS_BIT_SET(Global_4269615, 19))
					{
						BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_37, "CREATE_ALERT");
						_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(55);
						_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(222f);
						if ((IS_BIT_SET(Global_4269615, 12) || IS_BIT_SET(Global_4269615, 11)) || IS_BIT_SET(Global_7356, 25))
						{
							_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(192f);
						}
						else
						{
							_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(222f);
						}
						END_SCALEFORM_MOVIE_METHOD();
					}
					CLEAR_BIT(&Global_7357, 11);
					iLocal_41 = 0;
				}
			}
		}
		if (Global_8060 < 1)
		{
			SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_37);
			CLEAR_BIT(&Global_7356, 6);
		}
		else
		{
			func_16();
		}
	}
	else if (Global_8060 > 0)
	{
		iLocal_37 = 0x67D02A194A2FC2BD("cellphone_alert_popup");
		while (!HAS_SCALEFORM_MOVIE_LOADED(iLocal_37))
		{
			wait(0);
		}
		_SET_UI_LAYER(4);
		SET_BIT(&Global_7356, 6);
	}
}

void func_73(int iParam0, char* sParam1)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	END_SCALEFORM_MOVIE_METHOD();
}

void func_74()
{
	if (IS_BIT_SET(Global_7357, 7))
	{
		SET_BIT(&Global_7357, 6);
		CLEAR_BIT(&Global_7357, 7);
		return;
	}
	if (!IS_BIT_SET(Global_7357, 7))
	{
		CLEAR_BIT(&Global_7357, 6);
		return;
	}
}

void func_75()
{
	if (IS_BIT_SET(Global_7357, 4))
	{
		SET_BIT(&Global_7357, 3);
		CLEAR_BIT(&Global_7357, 4);
		return;
	}
	if (!IS_BIT_SET(Global_7357, 4))
	{
		CLEAR_BIT(&Global_7357, 3);
		return;
	}
}

void func_76()
{
	if (IS_BIT_SET(Global_7357, 2))
	{
		if (!Global_19486.f_1 == 1)
		{
			Global_19486.f_1 = 0;
		}
		CLEAR_BIT(&Global_7357, 2);
		return;
	}
	if (!IS_BIT_SET(Global_7357, 2))
	{
		if (!Global_19486.f_1 == 1)
		{
			if (Global_19486.f_1 < 4)
			{
				Global_19486.f_1 = 3;
			}
		}
		return;
	}
}

int func_77()
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
		if (func_30(14))
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

int func_78(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	func_39();
	if (Global_76577 == 0)
	{
		if (func_30(14))
		{
			if (Global_21864 == 2 || Global_21864 == 4)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (Global_19486.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_51(0) == 1)
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
				func_79("cellphone_flashhand");
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
	func_125();
	func_123();
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_7363[iParam0 /*15*/].f_9) == 0)
	{
		Global_7962 = 0;
		Global_19486.f_1 = 7;
		func_79(&(Global_7363[iParam0 /*15*/].f_5));
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

void func_79(char* sParam0)
{
	REQUEST_SCRIPT(sParam0);
	while (!HAS_SCRIPT_LOADED(sParam0))
	{
		wait(0);
	}
}

void func_80(int iParam0)
{
	if (func_83())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_82())
		{
			func_81(1, 1);
		}
		else
		{
			func_81(0, 0);
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
	if (!func_46())
	{
		Global_19486.f_1 = 3;
	}
}

void func_81(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_51(0))
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

bool func_82()
{
	return IS_BIT_SET(Global_1687880, 5);
}

bool func_83()
{
	return IS_BIT_SET(Global_1687880, 19);
}

void func_84()
{
	float fVar0;
	
	SET_GAME_PAUSED(true);
	SET_INPUT_EXCLUSIVE(2, 201);
	SET_INPUT_EXCLUSIVE(2, 202);
	fVar0 = 0f;
	while ((!IS_CONTROL_JUST_PRESSED(2, 201) && !IS_CONTROL_JUST_PRESSED(2, 202)) || fVar0 < 1f)
	{
		_set_warning_message_2("VEUI_HDR_ALERT", "VE_DIR_MODE_SURE", 18, 0, 0, -1, 0, 0, 1, 0);
		wait(0);
		fVar0 = (fVar0 + GET_FRAME_TIME());
	}
	SET_GAME_PAUSED(false);
	if (IS_CONTROL_JUST_PRESSED(2, 201))
	{
		DO_SCREEN_FADE_OUT(0);
		Global_110505 = 1;
	}
}

void func_85(int iParam0)
{
	float fVar0;
	int iVar1;
	
	SET_GAME_PAUSED(true);
	SET_INPUT_EXCLUSIVE(2, 201);
	fVar0 = 0f;
	while (!IS_CONTROL_JUST_PRESSED(2, 201) || fVar0 < 1f)
	{
		iVar1 = func_86(iParam0, 119);
		set_warning_message("FBR_GENERIC", 16384, 0, 0, -1, "FBR_DIR_MODE", iVar1, 1, 0);
		wait(0);
		fVar0 = (fVar0 + GET_FRAME_TIME());
	}
	SET_GAME_PAUSED(false);
}

char* func_86(int iParam0, int iParam1)
{
	iParam1 = iParam1;
	switch (iParam0)
	{
		case 1:
			return "FBR_BLK_CLEAN";
			break;
		
		case 2:
			return "FBR_BLK_RNNNG";
			break;
		
		case 13:
			return "FBR_BLK_DEAD";
			break;
		
		case 3:
			return "FBR_BLK_MISS";
			break;
		
		case 5:
			return "FBR_BLK_SHOP";
			break;
		
		case 4:
			return "FBR_BLK_CUTS";
			break;
		
		case 6:
			return "FBR_BLK_WANT";
			break;
		
		case 7:
			return "FBR_BLK_ONLI";
			break;
		
		case 8:
			return "FBR_BLK_ACT";
			break;
		
		case 9:
			return "FBR_BLK_LOC";
			break;
		
		case 10:
			return "FBR_BLK_VEH";
			break;
		
		case 11:
			return "FBR_BLK_PARA";
			break;
		
		case 12:
			return "FBR_BLK_FALL";
			break;
		
		default:
			return "ERROR";
			break;
	}
	return "ERROR";
}

int func_87(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iParam2 = iParam2;
	if (IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
	{
		return 13;
	}
	if (bParam1)
	{
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH()) > 1)
		{
			return 2;
		}
	}
	if (func_118() && !func_30(14))
	{
		return 3;
	}
	if (func_117())
	{
		return 3;
	}
	if (func_116())
	{
		return 8;
	}
	if (bParam1)
	{
		if (func_115())
		{
			return 8;
		}
	}
	if (Global_95619)
	{
		return 3;
	}
	if (Global_30990)
	{
		return 8;
	}
	if (Global_30884)
	{
		return 8;
	}
	if (Global_2621550)
	{
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1516147206) > 0)
		{
			return 3;
		}
	}
	else if (Global_2621549)
	{
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(2006115718) > 0)
		{
			return 3;
		}
	}
	else if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher")) > 0)
	{
		return 3;
	}
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("finale_choice")) > 0)
	{
		return 3;
	}
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("creator")) > 0)
	{
		return 3;
	}
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("respawn_controller")) > 0)
	{
		return 13;
	}
	if (func_114(bParam1))
	{
		return 3;
	}
	if (IS_PED_FALLING(IS_PED_FALLING()) || IS_PED_FALLING(IS_PED_FALLING()))
	{
		return 12;
	}
	if (func_113(Global_110585, 256))
	{
		return 3;
	}
	if (((func_112() || func_111()) || func_106()) || func_105())
	{
		return 5;
	}
	if (func_105())
	{
		return 5;
	}
	if (func_104())
	{
		return 5;
	}
	if (func_103())
	{
		return 5;
	}
	if (func_111())
	{
		return 5;
	}
	if (func_102() && !Global_110510)
	{
		return 8;
	}
	if (func_106())
	{
		return 5;
	}
	if (IS_PLAYER_SWITCH_IN_PROGRESS() || func_101())
	{
		return 4;
	}
	if (func_66())
	{
		return 4;
	}
	if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()))
	{
		if (!IS_PED_INJURED(IS_PED_INJURED()))
		{
			iVar0 = func_91(60);
			if (iVar0 != 0)
			{
				return iVar0;
			}
			if (IS_PED_IN_PARACHUTE_FREE_FALL(IS_PED_IN_PARACHUTE_FREE_FALL()) || IS_PED_IN_PARACHUTE_FREE_FALL(IS_PED_IN_PARACHUTE_FREE_FALL()) != -1)
			{
				return 11;
			}
			if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 1) || Global_110607)
			{
				return 10;
			}
		}
	}
	if (Global_30988)
	{
		return 8;
	}
	if (Global_76575)
	{
		return 4;
	}
	if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
	{
		if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) > 0 || GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL(), 1))
		{
			return 6;
		}
		if (IS_PLAYER_CLIMBING(IS_PLAYER_CLIMBING()))
		{
			return 8;
		}
		if (IS_PED_GETTING_UP(IS_PED_GETTING_UP()))
		{
			return 8;
		}
	}
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 7;
	}
	if (func_90())
	{
		return 8;
	}
	if (Global_30738)
	{
		return 3;
	}
	if (IS_GAMEPLAY_HINT_ACTIVE())
	{
		return 4;
	}
	if (IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), 439.4357f, -997.4747f, 28.9584f, 428.3288f, -997.0398f, 24.8372f, 8f, 0, true, 0))
	{
		return 9;
	}
	if (IS_ENTITY_IN_WATER(IS_ENTITY_IN_WATER()))
	{
		return 9;
	}
	if (bParam1)
	{
		if (!func_88(0))
		{
			return 8;
		}
	}
	if (IS_PED_ON_VEHICLE(IS_PED_ON_VEHICLE()))
	{
		return 9;
	}
	return 0;
}

int func_88(bool bParam0)
{
	if (IS_PED_INJURED(IS_PED_INJURED()))
	{
		return 0;
	}
	if ((((((((((!IS_PLAYER_CONTROL_ON(IS_PLAYER_CONTROL_ON()) || !IS_PLAYER_CONTROL_ON(IS_PLAYER_CONTROL_ON())) || IS_PLAYER_CONTROL_ON(IS_PLAYER_CONTROL_ON())) || IS_PLAYER_CONTROL_ON(IS_PLAYER_CONTROL_ON(), 0)) || IS_PLAYER_CONTROL_ON(IS_PLAYER_CONTROL_ON())) || IS_PLAYER_CONTROL_ON(IS_PLAYER_CONTROL_ON())) || IS_PLAYER_CONTROL_ON(IS_PLAYER_CONTROL_ON())) || IS_PLAYER_CONTROL_ON(IS_PLAYER_CONTROL_ON())) || IS_PLAYER_CONTROL_ON(IS_PLAYER_CONTROL_ON())) || IS_PLAYER_CONTROL_ON(IS_PLAYER_CONTROL_ON())) || IS_PLAYER_CONTROL_ON(IS_PLAYER_CONTROL_ON(), 1))
	{
		return 0;
	}
	if ((((((func_66() || Global_22211.f_4) || func_89()) || IS_MEMORY_CARD_IN_USE()) || IS_MEMORY_CARD_IN_USE()) || func_101()) || func_117())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (GET_MISSION_FLAG())
		{
			return 0;
		}
	}
	return 1;
}

int func_89()
{
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_96177.f_44 == 1;
	}
	return 0;
}

bool func_90()
{
	return Global_58652;
}

int func_91(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	
	if (IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0) && IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), 1))
	{
		return 5;
	}
	vVar0 = { func_100(PLAYER_ID()) };
	if (Global_110647[10 /*10*/].f_1)
	{
		if (vdist2(vVar0, 241.9889f, 360.4732f, 105.6166f) < 2f)
		{
			return 3;
		}
	}
	if (func_99(2) && !func_99(17))
	{
		if (vdist2(vVar0, -59.96629f, -1099.005f, 25.52088f) < 8f)
		{
			if (IS_POINT_IN_ANGLED_AREA(vVar0, -61.26628f, -1096.505f, 25.52088f, -58.43333f, -1101.147f, 29.24937f, 1.25f, 0, true))
			{
				return 9;
			}
		}
	}
	if (vdist2(vVar0, -740.9346f, 5599.426f, 40.71515f) < 11f)
	{
		if (IS_POINT_IN_ANGLED_AREA(vVar0, -746.1299f, 5599.226f, 40.47561f, -737.632f, 5599.364f, 44.1693f, 3.375f, 0, true))
		{
			return 9;
		}
	}
	if (vdist2(vVar0, -740.9346f, 5590.426f, 40.71515f) < 11f)
	{
		if (IS_POINT_IN_ANGLED_AREA(vVar0, -746.1299f, 5590.667f, 40.4392f, -737.6585f, 5590.592f, 44.52327f, 3.375f, 0, true))
		{
			return 9;
		}
	}
	if (vdist2(vVar0, 446.3265f, 5566.35f, 780.2151f) < 11f)
	{
		if (IS_POINT_IN_ANGLED_AREA(vVar0, 451.1661f, 5566.451f, 780.1703f, 442.5211f, 5566.374f, 783.9819f, 3.375f, 0, true))
		{
			return 9;
		}
	}
	if (vdist2(vVar0, 446.3265f, 5577.35f, 780.2151f) < 11f)
	{
		if (IS_POINT_IN_ANGLED_AREA(vVar0, 451.1661f, 5577.867f, 780.1899f, 442.5765f, 5577.579f, 783.9086f, 3.375f, 0, true))
		{
			return 9;
		}
	}
	if (vdist2(vVar0, 128.83f, -1297.98f, 29.3f) < 2f || vdist2(vVar0, 95.07f, -1284.98f, 29.3f) < 2f)
	{
		return 9;
	}
	if (vdist2(vVar0, 1081.951f, -1976.762f, 30.47218f) < 6f && func_98(26))
	{
		return 9;
	}
	if (!iLocal_27)
	{
		func_92(iParam0);
	}
	iVar1 = GET_INTERIOR_FROM_ENTITY(GET_INTERIOR_FROM_ENTITY());
	if (iVar1 == 0)
	{
		return 0;
	}
	else if ((iVar1 == Global_110523 || iVar1 == Global_110524) || iVar1 == Global_110525)
	{
		return 9;
	}
	else if (iVar1 == Global_110514)
	{
		return 9;
	}
	else if (iVar1 == Global_110515)
	{
		return 9;
	}
	else if (iVar1 == Global_110518)
	{
		return 9;
	}
	else if (iVar1 == Global_110517)
	{
		return 9;
	}
	else if (iVar1 == Global_110519)
	{
		return 9;
	}
	else if (iVar1 == Global_110520)
	{
		return 9;
	}
	else if (iVar1 == Global_110521)
	{
		return 9;
	}
	else if (iVar1 == Global_110522)
	{
		return 9;
	}
	else if (iVar1 == Global_110526)
	{
		return 9;
	}
	else if (iVar1 == Global_110527)
	{
		return 9;
	}
	else if (iVar1 == Global_110528)
	{
		return 9;
	}
	else if (iVar1 == Global_110529)
	{
		return 9;
	}
	else if (iVar1 == Global_110530)
	{
		return 9;
	}
	else if ((iVar1 == Global_110531 || iVar1 == Global_110532) && func_99(67))
	{
		return 9;
	}
	iVar2 = 0;
	while (iVar2 <= (19 - 1))
	{
		if (iVar1 == Global_110533[iVar2])
		{
			return 9;
		}
		iVar2++;
	}
	return 0;
}

void func_92(var uParam0)
{
	int iVar0;
	
	uParam0 = uParam0;
	func_95(24, &Global_110514);
	func_95(47, &Global_110515);
	func_95(10, &Global_110523);
	func_95(9, &Global_110524);
	func_95(8, &Global_110525);
	func_95(21, &Global_110526);
	func_95(11, &Global_110527);
	func_95(18, &Global_110531);
	func_95(19, &Global_110532);
	Global_110518 = GET_INTERIOR_AT_COORDS_WITH_TYPE(-76.6618f, 6222.191f, 32.2412f, "V_factory1");
	Global_110517 = GET_INTERIOR_AT_COORDS_WITH_TYPE(-98.2637f, 6210.022f, 31.924f, "V_factory2");
	Global_110519 = GET_INTERIOR_AT_COORDS_WITH_TYPE(-115.8956f, 6179.749f, 32.4102f, "V_factory3");
	Global_110520 = GET_INTERIOR_AT_COORDS_WITH_TYPE(-149.8199f, 6144.978f, 31.3353f, "V_factory4");
	Global_110521 = GET_INTERIOR_AT_COORDS_WITH_TYPE(16.3605f, -1100.259f, 28.797f, "v_gun");
	Global_110522 = GET_INTERIOR_AT_COORDS_WITH_TYPE(125.1948f, -1284.13f, 28.2847f, "v_strip3");
	Global_110528 = GET_INTERIOR_AT_COORDS_WITH_TYPE(-545.5717f, 1987.145f, 126.0262f, "cs6_08_mine_int");
	Global_110529 = GET_INTERIOR_AT_COORDS_WITH_TYPE(2330.598f, 2571.935f, 45.6802f, "ch3_01_trlr_int");
	Global_110530 = GET_INTERIOR_AT_COORDS_WITH_TYPE(-54.7f, -1092.7f, 26.4f, "v_carshowroom");
	iVar0 = 0;
	while (iVar0 <= (19 - 1))
	{
		Global_110533[iVar0] = GET_INTERIOR_AT_COORDS(func_93(iVar0));
		iVar0++;
	}
	iLocal_27 = 1;
}

Vector3 func_93(int iParam0)
{
	if (!func_94(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -711.8212f, -915.9057f, 18.2377f;
		
		case 1:
			return -52.7185f, -1756.175f, 28.4432f;
		
		case 2:
			return 1159.441f, -325.6666f, 68.2272f;
		
		case 3:
			return 1699.429f, 4928.642f, 41.0858f;
		
		case 4:
			return -1822.926f, 788.9531f, 137.212f;
		
		case 5:
			return 1166.427f, 2703.528f, 37.1574f;
		
		case 6:
			return -2973.414f, 390.6885f, 14.0433f;
		
		case 7:
			return -1225.86f, -903.5782f, 11.3263f;
		
		case 8:
			return 1140.659f, -981.0806f, 45.4158f;
		
		case 9:
			return -1490.275f, -382.8514f, 39.1634f;
		
		case 10:
			return -3240.719f, 1004.508f, 11.8468f;
		
		case 11:
			return -3039.249f, 589.3831f, 6.9251f;
		
		case 12:
			return 544.4275f, 2672.061f, 41.1726f;
		
		case 13:
			return 2558.754f, 385.599f, 107.6391f;
		
		case 14:
			return 2681.511f, 3282.763f, 54.2573f;
		
		case 15:
			return 1731.153f, 6411.633f, 34.0373f;
		
		case 16:
			return 1964.931f, 3741.207f, 31.3599f;
		
		case 17:
			return 29.0707f, -1348.773f, 28.5101f;
		
		case 18:
			return 376.8503f, 323.9777f, 102.5825f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_94(int iParam0)
{
	if (iParam0 >= 19)
	{
		return 0;
	}
	else if (iParam0 <= -1)
	{
		return 0;
	}
	return 1;
}

var func_95(int iParam0, var uParam1)
{
	struct<5> Var0;
	
	Var0 = { func_96(iParam0) };
	*uParam1 = GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_96(int iParam0)
{
	struct<5> Var0;
	vector3 vVar1;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			vVar1 = { func_97(1, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			vVar1 = { func_97(2, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			vVar1 = { func_97(3, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			vVar1 = { func_97(4, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			vVar1 = { func_97(5, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			vVar1 = { func_97(6, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			vVar1 = { func_97(7, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1049852[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			vVar1 = { func_97(35, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			vVar1 = { func_97(36, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			vVar1 = { func_97(37, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			vVar1 = { func_97(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			vVar1 = { func_97(39, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			vVar1 = { func_97(40, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			vVar1 = { func_97(41, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			vVar1 = { func_97(42, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			vVar1 = { func_97(43, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 79:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			vVar1 = { func_97(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			vVar1 = { func_97(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			vVar1 = { func_97(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			vVar1 = { func_97(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			vVar1 = { func_97(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			vVar1 = { func_97(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			vVar1 = { func_97(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			vVar1 = { func_97(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			vVar1 = { func_97(87, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			vVar1 = { func_97(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			vVar1 = { func_97(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			vVar1 = { func_97(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			vVar1 = { func_97(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			vVar1 = { func_97(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			vVar1 = { func_97(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			vVar1 = { func_97(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			vVar1 = { func_97(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			vVar1 = { func_97(88, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			vVar1 = { func_97(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			vVar1 = { func_97(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			vVar1 = { func_97(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			vVar1 = { func_97(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			vVar1 = { func_97(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			vVar1 = { func_97(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			vVar1 = { func_97(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			vVar1 = { func_97(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			vVar1 = { func_97(89, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			vVar1 = { func_97(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			vVar1 = { func_97(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			vVar1 = { func_97(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			vVar1 = { func_97(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			vVar1 = { func_97(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			vVar1 = { func_97(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			vVar1 = { func_97(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			vVar1 = { func_97(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			vVar1 = { func_97(90, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			vVar1 = { func_97(91, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			vVar1 = { func_97(97, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			vVar1 = { func_97(103, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			vVar1 = { func_97(104, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			vVar1 = { func_97(105, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			vVar1 = { func_97(106, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			vVar1 = { func_97(107, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			vVar1 = { func_97(108, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			vVar1 = { func_97(109, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			vVar1 = { func_97(110, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			vVar1 = { func_97(111, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			vVar1 = { func_97(112, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			vVar1 = { func_97(113, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			vVar1 = { func_97(114, 0) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			vVar1 = { func_97(103, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			vVar1 = { func_97(106, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			vVar1 = { func_97(109, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			vVar1 = { func_97(112, 1) };
			Var0 = { vVar1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938.3077f, -3196.112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 138:
			Var0 = { 512.5f, 4852f, -62.6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 139:
			Var0 = { 2047f, 2942f, -61.9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 140:
			Var0 = { -1047.6f, -232.3503f, 38.0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 149:
			Var0 = { 520.0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 150:
			Var0 = { -1266.802f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974.9203f, -3000.065f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969.5376f, -3000.411f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094.997f, -3100.012f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059.995f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010.008f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 156:
			Var0 = { 372.6707f, 405.5235f, 144.5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 157:
			Var0 = { -282.0588f, -955.17f, 85.3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 158:
			Var0 = { 342.7946f, -997.4225f, -99.7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 159:
			Var0 = { 260.3268f, -997.4298f, -100.0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 160:
			Var0 = { 108.2369f, -753.5364f, 233.1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 161:
			Var0 = { 135.3226f, -746.3677f, 253.1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 162:
			Var0 = { 108.2572f, -753.5342f, 44.7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 163:
			Var0 = { 228.6161f, -992.053f, -99.9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 164:
			Var0 = { 199.9716f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 165:
			Var0 = { 173.1165f, -1003.28f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 166:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 167:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 168:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 169:
			Var0 = { 1257f, 4796.7f, -39.1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 170:
			Var0 = { 694.4f, 5898.9f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 171:
			Var0 = { 1121.8f, 5516.3f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 172:
			Var0 = { 1279.6f, 5233.2f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 173:
			Var0 = { 1158.6f, 5467.1f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 174:
			Var0 = { 705.9f, 5838.5f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 175:
			Var0 = { 1316.5f, 5184f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 176:
			Var0 = { 1248f, 5276.1f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 177:
			Var0 = { 1090.2f, 5559.2f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 178:
			Var0 = { 1261f, 4808.6f, -39.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 179:
			Var0 = { 721.8f, 5781.4f, -146.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 180:
			Var0 = { 780.8f, 5703.4f, -136.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 181:
			Var0 = { 868.1f, 5659.2f, -126.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 182:
			Var0 = { 1218.2f, 5321.2f, -85.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 183:
			Var0 = { 1278.5f, 4859.7f, -44.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 184:
			Var0 = { 1187.2f, 5419.8f, -96.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 185:
			Var0 = { 1344.7f, 5136.4f, -75.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 186:
			Var0 = { 1363.4f, 5039.5f, -65.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 187:
			Var0 = { 1049.3f, 5602.1f, -107.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 188:
			Var0 = { 1337.8f, 4944.3f, -55.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 189:
			Var0 = { 961.5f, 5646.9f, -117.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { 345.0041f, 4842.001f, -59.9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
			Var0 = { 279.9322f, -1337.49f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 192:
			Var0 = { -1604.664f, -3012.583f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 193:
			Var0 = { -1505.783f, -3012.587f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 194:
			Var0 = { -630.4205f, -236.7843f, 37.057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 195:
			Var0 = { 2800f, -3800f, 100f };
			Var0.f_3 = "xs_x18_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 196:
			Var0 = { 2800f, -3942f, 182.5f };
			Var0.f_3 = "xs_arena_vip";
			Var0.f_4 = Var0.f_3;
			break;
			break;
		
		case 197:
			Var0 = { 1049.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 198:
			Var0 = { 1093.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 199:
			Var0 = { 1009.5f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 200:
			Var0 = { 1100f, 245f, -49f };
			Var0.f_3 = "vw_dlc_casino_main";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 201:
			Var0 = { 1380f, 200f, -50f };
			Var0.f_3 = "vw_dlc_casino_carpark";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 202:
			Var0 = { 976.6364f, 70.29476f, 115.1641f };
			Var0.f_3 = "vw_dlc_casino_apart";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 203:
			Var0 = { 1295f, 230f, -50f };
			Var0.f_3 = "vw_dlc_casino_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 204:
			Var0 = { 2479.3f, -273.9f, -58f };
			Var0.f_3 = "ch_DLC_Casino_Heist";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 205:
			Var0 = { 2730f, -380f, -49f };
			Var0.f_3 = "ch_DLC_Arcade";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 206:
			Var0 = { 2800f, -380f, -48.5f };
			Var0.f_3 = "ch_DLC_Plan";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 207:
			Var0 = { 2497.7f, -312.8f, -69.9f };
			Var0.f_3 = "ch_DLC_Tunnel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 208:
			Var0 = { 2523.4f, -270f, -58.7f };
			Var0.f_3 = "ch_DLC_Casino_Back";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 209:
			Var0 = { 2504.4f, -257.2f, -39.1f };
			Var0.f_3 = "ch_DLC_Casino_Hotel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 210:
			Var0 = { 2554f, -281.4f, -64.7f };
			Var0.f_3 = "ch_DLC_Casino_Loading";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 211:
			Var0 = { 2488.3f, -267.4f, -70.6f };
			Var0.f_3 = "ch_DLC_Casino_Vault";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 212:
			Var0 = { 2519.9f, -255.3f, -24.1f };
			Var0.f_3 = "ch_DLC_Casino_Utility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 213:
			Var0 = { 2572.9f, -253.4f, -64.7f };
			Var0.f_3 = "ch_dlc_casino_shaft";
			Var0.f_4 = Var0.f_3;
			break;
			return Var0;
	}
}

struct<6> func_97(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case 79:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_98(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_92684[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_89451)
	{
		if (Global_89451[iVar0 /*5*/] != -1)
		{
			if (Global_76846.f_109[Global_89451[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_99(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111560.f_9080.f_330[iParam0 /*6*/];
}

Vector3 func_100(int iParam0)
{
	return GET_ENTITY_COORDS(GET_ENTITY_COORDS(iParam0), false);
}

int func_101()
{
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_102()
{
	return GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

bool func_103()
{
	return IS_BIT_SET(Global_76825, 9);
}

bool func_104()
{
	return IS_BIT_SET(Global_76825, 8);
}

int func_105()
{
	if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0) && !IS_ENTITY_DEAD(IS_ENTITY_DEAD()))
	{
		if (((((((((((((((IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "misshair_shop@barbers", "player_intro", 3) || IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "misshair_shop@barbers", "player_base", 3)) || IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "misshair_shop@barbers", "player_enterchair", 3)) || IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "misshair_shop@barbers", "player_exitchair", 3)) || IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "misshair_shop@barbers", "player_idle_a", 3)) || IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "misshair_shop@barbers", "player_idle_b", 3)) || IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "misshair_shop@barbers", "player_idle_c", 3)) || IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "misshair_shop@barbers", "player_idle_d", 3)) || IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "misshair_shop@hair_dressers", "player_intro", 3)) || IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "misshair_shop@hair_dressers", "player_base", 3)) || IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "misshair_shop@hair_dressers", "player_enterchair", 3)) || IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "misshair_shop@hair_dressers", "player_exitchair", 3)) || IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "misshair_shop@hair_dressers", "player_idle_a", 3)) || IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "misshair_shop@hair_dressers", "player_idle_b", 3)) || IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "misshair_shop@hair_dressers", "player_idle_c", 3)) || IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "misshair_shop@hair_dressers", "player_idle_d", 3))
		{
			return 1;
		}
	}
	return 0;
}

int func_106()
{
	int iVar0;
	
	if (func_112())
	{
		iVar0 = 0;
		while (iVar0 < 53)
		{
			if (func_107(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_107(int iParam0)
{
	return func_108(iParam0, 20, 1);
}

int func_108(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return IS_BIT_SET(Global_98721.f_1357[iParam0], iParam1);
	}
	else if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_110() == 0)
		{
			return IS_BIT_SET(func_120(func_109(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return IS_BIT_SET(Global_111560.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 9470;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		case 52:
			return 8912;
			break;
		
		case 50:
			return 8265;
			break;
		
		case 51:
			return 8267;
			break;
		
		default:
			break;
	}
	return 10999;
}

int func_110()
{
	return Global_30736;
}

bool func_111()
{
	return Global_98721.f_346 > 0;
}

bool func_112()
{
	return Global_98721.f_345 > 0;
}

bool func_113(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_114(bool bParam0)
{
	if (!bParam0 && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return IS_BIT_SET(Global_76825, 0);
}

bool func_115()
{
	return Global_98708.f_1;
}

bool func_116()
{
	return Global_76844;
}

int func_117()
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

int func_118()
{
	if (Global_41396 == 15)
	{
		return 0;
	}
	return 1;
}

int func_119(int iParam0)
{
	if ((Global_21919 || Global_21918) || Global_21920)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 150)
	{
		if (Global_19486.f_1 == 10)
		{
			if (Global_6671 == iParam0)
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
	return 0;
}

int func_120(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_121(iParam1)];
	if (STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_121(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_122();
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

var func_122()
{
	return Global_1312745;
}

void func_123()
{
	if (Global_76577 == 0)
	{
		Global_7363[14 /*15*/].f_4 = -99;
		Global_7363[4 /*15*/].f_4 = -99;
		if (Global_2458994)
		{
			if (func_30(14))
			{
				func_124(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_124(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_124(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_124(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_124(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

void func_125()
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
			if (func_126(iVar2, Global_19486) == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_124(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_124(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_124(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_41396 == 15 && func_114(0) == 0) && Global_7361 == 0)
		{
			func_124(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_19667 = 0;
			Global_7362 = 255;
		}
		else
		{
			func_124(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_19667 = 1;
			Global_7362 = 42;
		}
		if (iVar1 == 1)
		{
			func_124(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_124(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_124(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_124(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_124(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_111560.f_14046.f_89 == 1)
		{
			func_124(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_111560.f_14046.f_88 == 1)
		{
			func_124(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_124(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_124(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_124(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_124(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_124(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_124(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_124(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_124(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_124(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_124(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_124(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_124(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_124(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_124(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_124(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_124(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_124(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (IS_BIT_SET(Global_4269615, 4) == 1)
		{
			func_124(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_124(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_124(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_124(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_124(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_124(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_124(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_124(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_124(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_124(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_124(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_124(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_124(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_124(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_124(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_124(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_124(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!IS_BIT_SET(Global_4269615, 4) == 1)
		{
			if (Global_1573923)
			{
				func_124(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (IS_BIT_SET(Global_4269615, 20) == 1)
			{
				func_124(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (IS_BIT_SET(Global_4269615, 22) == 1)
			{
				func_124(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (IS_BIT_SET(Global_4269615, 26) == 1)
			{
				func_124(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
			}
		}
		if ((((IS_BIT_SET(Global_4269615, 4) == 0 && Global_1573923 == 0) && IS_BIT_SET(Global_4269615, 20) == 0) && IS_BIT_SET(Global_4269615, 22) == 0) && IS_BIT_SET(Global_4269615, 26) == 0)
		{
			func_124(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
		}
	}
}

int func_126(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_19[iParam1];
}

void func_127()
{
}

__________________________
Native Named by Reliency
1577160489
__________________________
