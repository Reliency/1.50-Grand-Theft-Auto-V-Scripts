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
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
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
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 2;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 7;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 4;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 4;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 4;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 4;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 4;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 4;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 4;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
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
	iLocal_33 = joaat("s_m_y_sheriff_01");
	iLocal_34 = joaat("sheriff");
	if (HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_38();
	}
	SET_MISSION_FLAG(1);
	if (IS_PC_VERSION())
	{
		iLocal_32 = 6451;
	}
	else
	{
		iLocal_32 = 4516;
	}
	while (true)
	{
		_0x0B919E1FB47CC4E0(2f);
		_SET_SOME_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(2f);
		func_36();
		switch (iLocal_28)
		{
			case 0:
				_0x0218BA067D249DEA();
				DESTROY_ALL_CAMS(0);
				if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
				{
					SET_ENTITY_INVINCIBLE(SET_ENTITY_INVINCIBLE(), true);
					SET_ENTITY_VISIBLE(SET_ENTITY_VISIBLE(), false, 0);
					FREEZE_ENTITY_POSITION(FREEZE_ENTITY_POSITION(), true);
					SET_ENABLE_SCUBA(SET_ENABLE_SCUBA(), 1);
					SET_MAX_WANTED_LEVEL(0);
				}
				if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
				{
					SET_PLAYER_CONTROL(SET_PLAYER_CONTROL(), false, 0);
				}
				iLocal_127 = GET_GAME_TIMER();
				switch (Global_95143)
				{
					case 0:
						if (!Global_95142)
						{
							PLAY_END_CREDITS_MUSIC(1);
							SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(1);
							SET_MOBILE_PHONE_RADIO_STATE(1);
							SET_RADIO_TO_STATION_NAME("RADIO_01_CLASS_ROCK");
							_0x4E404A9361F75BB2("RADIO_01_CLASS_ROCK", "END_CREDITS_KILL_TREVOR", 1);
						}
						break;
					
					case 1:
						if (!Global_95142)
						{
							PLAY_END_CREDITS_MUSIC(1);
							SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(1);
							SET_MOBILE_PHONE_RADIO_STATE(1);
							SET_RADIO_TO_STATION_NAME("RADIO_01_CLASS_ROCK");
							_0x4E404A9361F75BB2("RADIO_01_CLASS_ROCK", "END_CREDITS_KILL_MICHAEL", 1);
						}
						break;
					
					case 2:
						if (!Global_95142)
						{
							PLAY_END_CREDITS_MUSIC(1);
							SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(1);
							SET_MOBILE_PHONE_RADIO_STATE(1);
							SET_RADIO_TO_STATION_NAME("RADIO_01_CLASS_ROCK");
							_0x4E404A9361F75BB2("RADIO_01_CLASS_ROCK", "END_CREDITS_SAVE_MICHAEL_TREVOR", 1);
						}
						break;
				}
				REQUEST_ADDITIONAL_TEXT("CREDIT", 0);
				while (!HAS_ADDITIONAL_TEXT_LOADED(0))
				{
					wait(0);
				}
				if (!IS_AUDIO_SCENE_ACTIVE("END_CREDITS_SCENE"))
				{
					START_AUDIO_SCENE("END_CREDITS_SCENE");
				}
				if (!Global_95142)
				{
					SET_CREDITS_ACTIVE(1);
					_0xB51B9AB9EF81868C(0);
				}
				SET_GAME_PAUSES_FOR_STREAMING(0);
				DISPLAY_RADAR(false);
				iLocal_28 = 1;
				break;
			
			case 1:
				HIDE_HUD_AND_RADAR_THIS_FRAME();
				_0x23227DF0B2115469();
				switch (iLocal_29)
				{
					case 0:
						func_35();
						iLocal_29 = 18;
						break;
					
					case 18:
						if (func_34())
						{
							iLocal_29 = 2;
						}
						break;
					
					case 2:
						if (func_33())
						{
							iLocal_29 = 3;
						}
						break;
					
					case 3:
						if (func_32())
						{
							iLocal_29 = 4;
						}
						break;
					
					case 4:
						if (func_31())
						{
							iLocal_29 = 5;
						}
						break;
					
					case 5:
						if (func_30())
						{
							iLocal_29 = 6;
						}
						break;
					
					case 6:
						if (func_29())
						{
							iLocal_29 = 7;
						}
						break;
					
					case 7:
						if (func_28())
						{
							iLocal_29 = 15;
						}
						break;
					
					case 15:
						if (func_27())
						{
							iLocal_29 = 16;
						}
						break;
					
					case 16:
						if (func_26())
						{
							iLocal_29 = 9;
						}
						break;
					
					case 9:
						if (func_25())
						{
							iLocal_29 = 8;
						}
						break;
					
					case 8:
						if (func_24())
						{
							iLocal_29 = 17;
						}
						break;
					
					case 17:
						if (func_23())
						{
							iLocal_29 = 10;
						}
						break;
					
					case 10:
						if (func_22())
						{
							iLocal_29 = 11;
						}
						break;
					
					case 11:
						if (func_21())
						{
							iLocal_29 = 12;
						}
						break;
					
					case 12:
						if (func_20())
						{
							iLocal_29 = 13;
						}
						break;
					
					case 13:
						if (func_19())
						{
							iLocal_29 = 14;
						}
						break;
					
					case 14:
						if (func_18())
						{
							iLocal_29 = 1;
						}
						break;
					
					case 1:
						if (func_17())
						{
							iLocal_29 = 19;
						}
						break;
					
					case 19:
						if (func_16())
						{
							iLocal_29 = 20;
						}
						break;
					
					case 20:
						if (func_15())
						{
							iLocal_29 = 21;
						}
						break;
					
					case 21:
						if (func_14())
						{
							iLocal_29 = 22;
						}
						break;
					
					case 22:
						if (func_13())
						{
							iLocal_29 = 23;
						}
						break;
					
					case 23:
						if (func_12())
						{
							iLocal_29 = 24;
						}
						break;
					
					case 24:
						if (func_11())
						{
							iLocal_29 = 25;
						}
						break;
					
					case 25:
						if (func_10())
						{
							iLocal_29 = 26;
						}
						break;
					
					case 26:
						if (func_9())
						{
							iLocal_29 = 28;
						}
						break;
					
					case 28:
						if (func_8())
						{
							iLocal_29 = 29;
						}
						break;
					
					case 29:
						if (func_7())
						{
							iLocal_29 = 30;
						}
						break;
					
					case 30:
						if (func_6())
						{
							iLocal_29 = 31;
						}
						break;
					
					case 31:
						if (func_5())
						{
							iLocal_29 = 32;
						}
						break;
					
					case 32:
						if (func_3())
						{
							iLocal_29 = 34;
						}
						break;
					
					case 34:
						DO_SCREEN_FADE_OUT(5000);
						iLocal_29 = 35;
						break;
				}
				func_36();
				func_2();
				if (iLocal_29 > 0)
				{
					_SET_ENTITY_COORDS_2(_SET_ENTITY_COORDS_2(), _SET_ENTITY_COORDS_2() + Vector(3f, 0f, 0f), 1, 0, 0, 1);
					SET_ENTITY_VISIBLE(SET_ENTITY_VISIBLE(), false, 0);
					SET_ENTITY_INVINCIBLE(SET_ENTITY_INVINCIBLE(), true);
				}
				DISABLE_CONTROL_ACTION(0, 37, 1);
				DISABLE_CONTROL_ACTION(0, 167, 1);
				DISABLE_CONTROL_ACTION(0, 166, 1);
				DISABLE_CONTROL_ACTION(0, 166, 1);
				DISABLE_CONTROL_ACTION(0, 169, 1);
				if (((to_float(GET_GAME_TIMER()) - to_float(iLocal_127)) / 60000f) > 39f && iLocal_128 == 0)
				{
					iLocal_128 = 1;
				}
				if (HAVE_CREDITS_REACHED_END())
				{
					if (iLocal_126 == 0)
					{
						settimera(0);
						iLocal_126 = 1;
					}
				}
				if ((timera() > 40000 && iLocal_126) || func_1())
				{
					START_AUDIO_SCENE("CAR_MOD_RADIO_MUTE_SCENE");
					_0xB51B9AB9EF81868C(1);
					if (!IS_SCREEN_FADED_OUT())
					{
						DO_SCREEN_FADE_OUT(5000);
					}
					settimerb(0);
					while (timerb() < 5000)
					{
						HIDE_HUD_AND_RADAR_THIS_FRAME();
						func_36();
						wait(0);
					}
					SET_WEATHER_TYPE_NOW("EXTRASUNNY");
					STOP_AUDIO_SCENE("END_CREDITS_SCENE");
					PLAY_END_CREDITS_MUSIC(0);
					STOP_AUDIO_SCENE("CAR_MOD_RADIO_MUTE_SCENE");
					SET_GAME_PAUSES_FOR_STREAMING(1);
					_0x14FC5833464340A8();
					SET_TIME_SCALE(1f);
					SET_PLAYER_CONTROL(SET_PLAYER_CONTROL(), true, 0);
					func_38();
				}
				break;
		}
		wait(0);
	}
}

int func_1()
{
	if (IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (IS_CONTROL_JUST_PRESSED(0, 18) || IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_2()
{
	Global_22211.f_6 = 1;
}

int func_3()
{
	switch (iLocal_31)
	{
		case 0:
			if (IS_SCREEN_FADED_OUT())
			{
				DESTROY_ALL_CAMS(0);
				iLocal_30 = CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
				_0xD1B0F412F109EA5D(iLocal_30, 2);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -1761.323f, -862.844f, 8.164f, 0.4405f, 0f, 92.1012f, 45f, 1, 2), (35000 + (iLocal_32 / 3)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -1789.12f, -863.8638f, 8.3779f, 0.4405f, 0f, 92.1012f, 45f, 1, 2), (35000 + (iLocal_32 / 3)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -1919.929f, -868.6623f, 5.5128f, 5.0195f, 0f, 92.1012f, 45f, 1, 2), (35000 + (iLocal_32 / 3)), 3);
				SET_CAM_ACTIVE(iLocal_30, true);
				RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				SHAKE_CAM(iLocal_30, "HAND_SHAKE", 0.1f);
				SET_WEATHER_TYPE_NOW("EXTRASUNNY");
				SET_CLOCK_TIME(19, 20, 0);
				settimerb(0);
				iLocal_31++;
			}
			break;
		
		case 1:
			if (timerb() > 10000)
			{
				func_4();
				iLocal_31++;
			}
			break;
		
		case 2:
			if (timerb() > (95000 + iLocal_32))
			{
				func_35();
				return 1;
			}
			break;
	}
	return 0;
}

void func_4()
{
	if (IS_SCREEN_FADED_OUT())
	{
		DO_SCREEN_FADE_IN(5000);
	}
}

int func_5()
{
	switch (iLocal_31)
	{
		case 0:
			if (IS_SCREEN_FADED_OUT())
			{
				DESTROY_ALL_CAMS(0);
				iLocal_30 = CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
				_0xD1B0F412F109EA5D(iLocal_30, 0);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -2024.12f, -556.459f, 10.3882f, 7.8994f, 0f, -42.1714f, 45f, 1, 2), (35000 + (iLocal_32 / 6)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -2010.884f, -568.449f, 10.3882f, 7.8994f, 0f, -42.1714f, 45f, 1, 2), (35000 + (iLocal_32 / 6)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -1986.421f, -590.6094f, 10.3882f, 7.8994f, 0f, -42.1714f, 45f, 1, 2), (35000 + (iLocal_32 / 6)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -1949.009f, -624.4987f, 10.3882f, 7.8994f, 0f, -42.1714f, 45f, 1, 2), (35000 + (iLocal_32 / 6)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -1902.043f, -667.0425f, 10.3882f, 7.8994f, 0f, -42.1714f, 45f, 1, 2), (35000 + (iLocal_32 / 6)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -1859.102f, -705.9395f, 10.3882f, 7.8994f, 0f, -42.1714f, 45f, 1, 2), (35000 + (iLocal_32 / 6)), 3);
				SET_CAM_ACTIVE(iLocal_30, true);
				RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				SHAKE_CAM(iLocal_30, "HAND_SHAKE", 0.1f);
				SET_WEATHER_TYPE_NOW("CLOUDS");
				SET_CLOCK_TIME(16, 20, 0);
				settimerb(0);
				iLocal_31++;
			}
			break;
		
		case 1:
			if (timerb() > 15000)
			{
				func_4();
				iLocal_31++;
			}
			break;
		
		case 2:
			if (timerb() > (95000 + iLocal_32))
			{
				func_35();
				return 1;
			}
			break;
	}
	return 0;
}

int func_6()
{
	switch (iLocal_31)
	{
		case 0:
			if (IS_SCREEN_FADED_OUT())
			{
				DESTROY_ALL_CAMS(0);
				iLocal_30 = CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
				_0xD1B0F412F109EA5D(iLocal_30, 2);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 190.783f, -1399.541f, 28.7482f, 9.2974f, 0f, 15.6743f, 45f, 1, 2), (27000 + (iLocal_32 / 3)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 189.3631f, -1388.63f, 28.7482f, 9.2974f, 0f, 15.6743f, 45f, 1, 2), (27000 + (iLocal_32 / 3)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 187.3559f, -1378.546f, 28.7482f, 13.7276f, 0f, 17.0204f, 45f, 1, 2), (32000 + (iLocal_32 / 3)), 3);
				SET_CAM_ACTIVE(iLocal_30, true);
				SET_WEATHER_TYPE_NOW("THUNDER");
				SHAKE_CAM(iLocal_30, "HAND_SHAKE", 0.06f);
				RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				SET_CLOCK_TIME(21, 0, 0);
				settimerb(0);
				iLocal_31++;
			}
			break;
		
		case 1:
			if (timerb() > 11000)
			{
				func_4();
				iLocal_31++;
			}
			break;
		
		case 2:
			if (timerb() > (50000 + iLocal_32))
			{
				func_35();
				return 1;
			}
			break;
	}
	return 0;
}

int func_7()
{
	switch (iLocal_31)
	{
		case 0:
			if (IS_SCREEN_FADED_OUT())
			{
				DESTROY_ALL_CAMS(0);
				iLocal_30 = CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
				_0xD1B0F412F109EA5D(iLocal_30, 2);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 1138.231f, -560.4722f, 59.6695f, -19.2128f, 0f, 131.1068f, 45f, 1, 2), (15000 + (iLocal_32 / 8)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 1135.092f, -561.3561f, 57.37753f, 1.84264f, -0.199522f, 131.7344f, 45f, 1, 2), (15000 + (iLocal_32 / 8)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 1131.004f, -565.2379f, 57.093f, 1.8431f, -0.2123f, 128.403f, 45f, 1, 2), (15000 + (iLocal_32 / 8)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 1122.95f, -574.3373f, 56.15794f, 2.104707f, -0.199523f, 136.0166f, 45f, 1, 2), (15000 + (iLocal_32 / 8)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 1100.843f, -597.2391f, 56.50692f, 2.104707f, -0.199523f, 136.0166f, 45f, 1, 2), (15000 + (iLocal_32 / 8)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 1070.652f, -628.5199f, 57.8283f, 2.104707f, -0.199523f, 119.1877f, 45f, 1, 2), (15000 + (iLocal_32 / 8)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 1040.776f, -644.9377f, 73.35931f, 2.104707f, -0.199523f, 113.079f, 45f, 1, 2), (15000 + (iLocal_32 / 8)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 1013.072f, -658.9576f, 105.4972f, 3.742157f, -0.199525f, 113.9499f, 45f, 1, 2), (15000 + (iLocal_32 / 8)), 3);
				SET_CAM_ACTIVE(iLocal_30, true);
				SET_WEATHER_TYPE_NOW("EXTRASUNNY");
				SHAKE_CAM(iLocal_30, "HAND_SHAKE", 0.06f);
				RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				SET_CLOCK_TIME(19, 0, 0);
				settimerb(0);
				iLocal_31++;
			}
			break;
		
		case 1:
			if (timerb() > 11000)
			{
				func_4();
				iLocal_31++;
			}
			break;
		
		case 2:
			if (timerb() > (70000 + iLocal_32))
			{
				func_35();
				return 1;
			}
			break;
	}
	return 0;
}

int func_8()
{
	switch (iLocal_31)
	{
		case 0:
			if (IS_SCREEN_FADED_OUT())
			{
				DESTROY_ALL_CAMS(0);
				iLocal_30 = CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
				_0xD1B0F412F109EA5D(iLocal_30, 0);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 570.1339f, 624.7344f, 181.2577f, 8.233f, 0f, -15.99f, 45f, 1, 2), 0, 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 609.7789f, 763.0852f, 205.4756f, 7.075f, 0f, -15.99f, 45f, 1, 2), (30000 + (iLocal_32 / 4)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 665.679f, 986.974f, 269.0323f, 15.0379f, 0f, -13.2777f, 45f, 1, 2), (30000 + (iLocal_32 / 4)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 735.5938f, 1290.784f, 389.334f, 21.7942f, 0f, -12.8878f, 45f, 1, 2), (30000 + (iLocal_32 / 4)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 764.2928f, 1416.215f, 450.2523f, 26.2951f, 0f, -12.8878f, 45f, 1, 2), (30000 + (iLocal_32 / 4)), 3);
				SET_CAM_ACTIVE(iLocal_30, true);
				RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				SET_CLOCK_TIME(0, 0, 0);
				SET_WEATHER_TYPE_NOW("FOGGY");
				settimerb(0);
				iLocal_31++;
			}
			break;
		
		case 1:
			if (timerb() > 10000)
			{
				func_4();
				iLocal_31++;
			}
			break;
		
		case 2:
			if (timerb() > (80000 + iLocal_32))
			{
				func_35();
				return 1;
			}
			break;
	}
	return 0;
}

int func_9()
{
	switch (iLocal_31)
	{
		case 0:
			if (IS_SCREEN_FADED_OUT())
			{
				DESTROY_ALL_CAMS(0);
				iLocal_30 = CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
				_0xD1B0F412F109EA5D(iLocal_30, 0);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 405.4927f, 110.5945f, 105.0361f, 28.7364f, 0f, 4.2586f, 45f, 1, 2), (15000 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 351.9488f, 127.5968f, 104.7248f, 28.5356f, 0f, -29.4515f, 45f, 1, 2), (15000 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 311.4437f, 151.5636f, 104.7248f, 25.4354f, 0f, -59.721f, 45f, 1, 2), (15000 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 274.0936f, 167.2445f, 104.7248f, 25.4354f, 0f, -48.9993f, 45f, 1, 2), (15000 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 218.1894f, 190.2665f, 123.8651f, 0.2697f, 0f, -110.6178f, 45f, 1, 2), (15000 + (iLocal_32 / 5)), 3);
				SET_CAM_ACTIVE(iLocal_30, true);
				SHAKE_CAM(iLocal_30, "HAND_SHAKE", 0.2f);
				RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				SET_CLOCK_TIME(22, 0, 0);
				settimerb(0);
				iLocal_31++;
			}
			break;
		
		case 1:
			if (timerb() > 12000)
			{
				func_4();
				iLocal_31++;
			}
			break;
		
		case 2:
			if (timerb() > (54000 + iLocal_32))
			{
				func_35();
				return 1;
			}
			break;
	}
	return 0;
}

int func_10()
{
	switch (iLocal_31)
	{
		case 0:
			if (IS_SCREEN_FADED_OUT())
			{
				DESTROY_ALL_CAMS(0);
				iLocal_30 = CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
				_0xD1B0F412F109EA5D(iLocal_30, 0);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 191.2012f, -1188.771f, 59.37577f, -62.41468f, -0.001852f, 103.989f, 45f, 1, 2), (22000 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 100.7434f, -1188.259f, 59.37577f, -62.41468f, -0.001852f, 103.989f, 45f, 1, 2), (22000 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -41.31043f, -1187.095f, 59.37577f, -45.18603f, -0.001852f, 103.989f, 45f, 1, 2), (22000 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -177.9301f, -1187.095f, 59.37577f, -33.29221f, -0.001851f, 103.989f, 45f, 1, 2), (22000 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -308.133f, -1187.095f, 59.37577f, -8.678455f, -0.001852f, 115.1301f, 45f, 1, 2), (22000 + (iLocal_32 / 5)), 3);
				SET_WEATHER_TYPE_NOW("CLEAR");
				SET_CAM_ACTIVE(iLocal_30, true);
				SHAKE_CAM(iLocal_30, "HAND_SHAKE", 0.2f);
				RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				SET_CLOCK_TIME(19, 0, 0);
				settimerb(0);
				iLocal_31++;
			}
			break;
		
		case 1:
			if (timerb() > 12000)
			{
				func_4();
				iLocal_31++;
			}
			break;
		
		case 2:
			if (timerb() > (83000 + iLocal_32))
			{
				func_35();
				return 1;
			}
			break;
	}
	return 0;
}

int func_11()
{
	switch (iLocal_31)
	{
		case 0:
			if (IS_SCREEN_FADED_OUT())
			{
				DESTROY_ALL_CAMS(0);
				iLocal_30 = CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
				_0xD1B0F412F109EA5D(iLocal_30, 0);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 888.9525f, -408.1645f, 37.6499f, -79.3137f, -0.5998f, 88.7316f, 45f, 1, 2), (23000 + (iLocal_32 / 3)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 821.9319f, -422.6405f, 37.4952f, 3.0949f, -0.5998f, 104.4012f, 45f, 1, 2), (23000 + (iLocal_32 / 3)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 696.0519f, -464.1059f, 64.8772f, 4.243f, -0.5998f, 112.2643f, 45f, 1, 2), (23000 + (iLocal_32 / 3)), 3);
				SET_CAM_ACTIVE(iLocal_30, true);
				RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				SET_CLOCK_TIME(19, 0, 0);
				settimerb(0);
				iLocal_31++;
			}
			break;
		
		case 1:
			if (timerb() > 6500)
			{
				func_4();
				iLocal_31++;
			}
			break;
		
		case 2:
			if (timerb() > (40000 + iLocal_32))
			{
				func_35();
				return 1;
			}
			break;
	}
	return 0;
}

int func_12()
{
	switch (iLocal_31)
	{
		case 0:
			SET_ENTITY_COORDS(SET_ENTITY_COORDS(), 2339.135f, 3033.743f, 49.2209f, 1, false, 0, 1);
			if (IS_SCREEN_FADED_OUT())
			{
				DESTROY_ALL_CAMS(0);
				iLocal_30 = CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
				_0xD1B0F412F109EA5D(iLocal_30, 0);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -44.3122f, 2999.557f, 41.1735f, -2.7641f, 0.0005f, 109.3277f, 45f, 1, 2), (20000 + (iLocal_32 / 8)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -164.9796f, 2964.199f, 32.6669f, -2.8667f, 0.0005f, 101.2396f, 45f, 1, 2), (20000 + (iLocal_32 / 8)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -283.8676f, 2949.943f, 30.103f, 0.687f, 0.0005f, 82.314f, 45f, 1, 2), (20000 + (iLocal_32 / 8)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -351.918f, 2953.701f, 26.1939f, 2.1626f, 0.0005f, 79.5006f, 45f, 1, 2), (20000 + (iLocal_32 / 8)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -420.6262f, 2965.089f, 25.2746f, 3.4231f, 0.1093f, 78.6793f, 45f, 1, 2), (20000 + (iLocal_32 / 8)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -467.0213f, 2974.305f, 26.1414f, 4.5971f, 0.1093f, 78.7363f, 45f, 1, 2), (20000 + (iLocal_32 / 8)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -533.4514f, 3001.715f, 28.4767f, -2.3009f, 0.1093f, 66.7469f, 45f, 1, 2), (20000 + (iLocal_32 / 8)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -596.659f, 3018.226f, 26.4333f, -2.7551f, 0.1093f, 96.0962f, 45f, 1, 2), (20000 + (iLocal_32 / 8)), 3);
				SET_CAM_ACTIVE(iLocal_30, true);
				RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				SHAKE_CAM(iLocal_30, "HAND_SHAKE", 0.1f);
				SET_WEATHER_TYPE_NOW("EXTRASUNNY");
				settimerb(0);
				iLocal_31++;
			}
			break;
		
		case 1:
			SET_CLOCK_TIME(18, 30, 0);
			if (timerb() > 10000)
			{
				func_4();
				iLocal_31++;
			}
			break;
		
		case 2:
			if (timerb() > (130000 + iLocal_32))
			{
				func_35();
				return 1;
			}
			break;
	}
	return 0;
}

int func_13()
{
	switch (iLocal_31)
	{
		case 0:
			if (IS_SCREEN_FADED_OUT())
			{
				DESTROY_ALL_CAMS(0);
				iLocal_30 = CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
				_0xD1B0F412F109EA5D(iLocal_30, 0);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 2174.177f, 1735.244f, 109.4122f, 7.6816f, 0f, -0.0482f, 34.8528f, 1, 2), (20000 + (iLocal_32 / 3)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 2174.177f, 1732.022f, 133.2939f, 7.6816f, 0f, -0.0482f, 34.8528f, 1, 2), (20000 + (iLocal_32 / 3)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 2174.174f, 1727.594f, 175.5751f, 3.7588f, 0f, -7.0037f, 36.6129f, 1, 2), (20000 + (iLocal_32 / 3)), 3);
				SET_CAM_ACTIVE(iLocal_30, true);
				SHAKE_CAM(iLocal_30, "HAND_SHAKE", 0.05f);
				RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				settimerb(0);
				iLocal_31++;
			}
			break;
		
		case 1:
			if (timerb() > 5000)
			{
				func_4();
				iLocal_31++;
			}
			break;
		
		case 2:
			if (timerb() > (40000 + iLocal_32))
			{
				func_35();
				return 1;
			}
			break;
	}
	return 0;
}

int func_14()
{
	vector3 vVar0;
	
	_SET_SOME_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(2f);
	_0x0B919E1FB47CC4E0(2f);
	vVar0 = { 8f, 8f, 8f };
	switch (iLocal_31)
	{
		case 0:
			SET_ENTITY_COORDS(SET_ENTITY_COORDS(), -1905.508f, 4765.541f, 2.6826f, 1, false, 0, 1);
			if (IS_SCREEN_FADED_OUT())
			{
				iLocal_120 = ADD_SCENARIO_BLOCKING_AREA(Vector(12.629f, 4359.485f, -954.3553f) - vVar0, Vector(12.629f, 4359.485f, -954.3553f) + vVar0, 0, 1, 1, 1);
				DESTROY_ALL_CAMS(0);
				iLocal_30 = CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
				_0xD1B0F412F109EA5D(iLocal_30, 0);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -1916.084f, 4795.219f, 3.1379f, 3.8531f, 0f, -171.7801f, 45f, 1, 2), (15000 + (iLocal_32 / 11)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -1905.508f, 4765.541f, 2.6826f, 9.3203f, -0.0565f, -173.3257f, 45f, 1, 2), (15000 + (iLocal_32 / 11)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -1832.65f, 4621.594f, 1.7506f, 10.6206f, -0.0565f, -136.3462f, 45f, 1, 2), (15000 + (iLocal_32 / 11)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -1710.094f, 4487.106f, 2.1122f, 8.2661f, -0.0565f, -111.2185f, 45f, 1, 2), (15000 + (iLocal_32 / 11)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -1593.169f, 4394.148f, 8.9492f, 8.6634f, -0.0565f, -123.0239f, 45f, 1, 2), (15000 + (iLocal_32 / 11)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -1435.347f, 4321.225f, 17.1582f, 3.6862f, -0.0565f, -85.5017f, 45f, 1, 2), (15000 + (iLocal_32 / 11)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -1242.052f, 4394.287f, 27.8612f, 2.4464f, -0.0565f, -89.9662f, 45f, 1, 2), (15000 + (iLocal_32 / 11)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -1078.79f, 4384.103f, 22.3137f, 6.5176f, -0.0565f, -90.2124f, 45f, 1, 2), (15000 + (iLocal_32 / 11)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -923.3418f, 4390.717f, 30.8799f, 2.7141f, -0.0565f, -69.9486f, 45f, 1, 2), (15000 + (iLocal_32 / 11)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -652.7346f, 4436.492f, 33.5175f, 4.6974f, -0.0565f, -92.9723f, 45f, 1, 2), (15000 + (iLocal_32 / 11)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -383.5358f, 4422.515f, 81.1759f, 44.6958f, -0.0565f, -92.3987f, 45f, 1, 2), (15000 + (iLocal_32 / 11)), 3);
				SET_CAM_ACTIVE(iLocal_30, true);
				SET_WEATHER_TYPE_NOW("EXTRASUNNY");
				RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				SET_CLOCK_TIME(8, 0, 0);
				settimerb(0);
				iLocal_31++;
			}
			break;
		
		case 1:
			if (timerb() > 15000)
			{
				func_4();
				iLocal_31++;
			}
			break;
		
		case 2:
			if (timerb() > (115000 + iLocal_32))
			{
				REMOVE_SCENARIO_BLOCKING_AREA(iLocal_120, 0);
				func_35();
				return 1;
			}
			break;
	}
	return 0;
}

int func_15()
{
	switch (iLocal_31)
	{
		case 0:
			if (IS_SCREEN_FADED_OUT())
			{
				DESTROY_ALL_CAMS(0);
				iLocal_30 = CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
				_0xD1B0F412F109EA5D(iLocal_30, 2);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -352.8542f, 6076.338f, 32.166f, -1.1628f, 0f, 105.5219f, 45f, 1, 2), (20000 + (iLocal_32 / 8)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -381.4112f, 6066.082f, 32.3482f, 0.6536f, 0f, 130.2366f, 45f, 1, 2), (20000 + (iLocal_32 / 8)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -410.881f, 6045.556f, 32.594f, 0.3665f, 0f, 106.2762f, 45f, 1, 2), (20000 + (iLocal_32 / 8)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -463.5055f, 6026.212f, 35.196f, 2.9584f, 0f, 107.0341f, 45f, 1, 2), (20000 + (iLocal_32 / 8)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -522.7526f, 6009.109f, 38.1065f, 2.3686f, 0f, 106.278f, 45f, 1, 2), (20000 + (iLocal_32 / 8)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -571.135f, 5995.075f, 32.9546f, -8.7694f, 0f, 105.3941f, 45f, 1, 2), (20000 + (iLocal_32 / 8)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -633.3229f, 5991.047f, 24.4397f, -7.9325f, 0f, 80.077f, 45f, 1, 2), (20000 + (iLocal_32 / 8)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -715.5418f, 6010.523f, 17.5661f, 3.6859f, 0f, 73.0103f, 45f, 1, 2), (20000 + (iLocal_32 / 8)), 3);
				SET_WEATHER_TYPE_NOW("EXTRASUNNY");
				SET_CAM_ACTIVE(iLocal_30, true);
				RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				SET_CLOCK_TIME(19, 20, 0);
				settimerb(0);
				SET_TIME_SCALE(1f);
				iLocal_31++;
			}
			break;
		
		case 1:
			SET_CLOCK_TIME(19, 20, 0);
			if (timerb() > 13000)
			{
				func_4();
				iLocal_31++;
			}
			break;
		
		case 2:
			if (timerb() > (120000 + iLocal_32))
			{
				func_35();
				return 1;
			}
			break;
	}
	return 0;
}

int func_16()
{
	switch (iLocal_31)
	{
		case 0:
			if (IS_SCREEN_FADED_OUT())
			{
				DESTROY_ALL_CAMS(0);
				iLocal_30 = CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
				_0xD1B0F412F109EA5D(iLocal_30, 0);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -133.3582f, -2571.779f, 168.8322f, -67.4567f, 0f, -77.0854f, 45f, 1, 2), (20000 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -281.9736f, -2437.404f, 176.1545f, -74.7325f, 0f, -55.6515f, 45f, 1, 2), (20000 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -426.4573f, -2339.119f, 176.1545f, -74.7325f, 0f, -55.6515f, 45f, 1, 2), (20000 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -558.7574f, -2242.28f, 176.1545f, -74.7325f, 0f, -55.6515f, 45f, 1, 2), (20000 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -769.587f, -2104.665f, 176.1545f, -74.7325f, 0f, -55.6515f, 45f, 1, 2), (20000 + (iLocal_32 / 5)), 3);
				SET_WEATHER_TYPE_NOW("EXTRASUNNY");
				SET_CAM_ACTIVE(iLocal_30, true);
				RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				SET_CLOCK_TIME(8, 0, 0);
				settimerb(0);
				SET_TIME_SCALE(1f);
				iLocal_31++;
			}
			break;
		
		case 1:
			if (timerb() > 10000)
			{
				func_4();
				iLocal_31++;
			}
			break;
		
		case 2:
			if (timerb() > (75000 + iLocal_32))
			{
				func_35();
				return 1;
			}
			break;
	}
	return 0;
}

int func_17()
{
	switch (iLocal_31)
	{
		case 0:
			REQUEST_IPL("prologue01");
			REQUEST_IPL("prologue01c");
			REQUEST_IPL("prologue01d");
			REQUEST_IPL("prologue01e");
			REQUEST_IPL("prologue01f");
			REQUEST_IPL("prologue01g");
			REQUEST_IPL("prologue01h");
			REQUEST_IPL("prologue01i");
			REQUEST_IPL("prologue01j");
			REQUEST_IPL("prologue01k");
			REQUEST_IPL("prologue01z");
			REQUEST_IPL("prologue02");
			REQUEST_IPL("prologue03");
			REQUEST_IPL("prologue03b");
			REQUEST_IPL("prologue04");
			REQUEST_IPL("prologue04b");
			REQUEST_IPL("prologue05");
			REQUEST_IPL("prologue05b");
			REQUEST_IPL("prologue06");
			REQUEST_IPL("prologue06b");
			REQUEST_IPL("prologuerd");
			REQUEST_IPL("prologuerdb");
			REQUEST_IPL("prologue_occl");
			SET_ROADS_IN_ANGLED_AREA(5526.24f, -5137.23f, 61.78925f, 3679.327f, -4973.879f, 125.0828f, 192f, 1, true, 1);
			SET_ROADS_IN_ANGLED_AREA(3691.211f, -4941.24f, 94.59368f, 3511.115f, -4869.191f, 126.7621f, 16f, 1, true, 1);
			SET_ROADS_IN_ANGLED_AREA(3510.004f, -4865.81f, 94.69557f, 3204.424f, -4833.817f, 126.8152f, 16f, 1, true, 1);
			SET_ROADS_IN_ANGLED_AREA(3186.534f, -4832.798f, 109.8148f, 3202.187f, -4833.993f, 114.815f, 16f, 1, true, 1);
			iLocal_31++;
			break;
		
		case 1:
			if (IS_SCREEN_FADED_OUT())
			{
				SET_CLOCK_TIME(19, 0, 0);
				DESTROY_ALL_CAMS(0);
				iLocal_30 = CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
				_0xD1B0F412F109EA5D(iLocal_30, 0);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 3185.889f, -4832.746f, 114.2106f, 3.8204f, 0f, 83.179f, 48.7373f, 1, 2), (43000 + (iLocal_32 / 3)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 3289.757f, -4842.213f, 114.2106f, 3.8204f, 0f, 83.179f, 48.7373f, 1, 2), (43000 + (iLocal_32 / 3)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 3443.775f, -4856.407f, 114.2106f, 3.8204f, 0f, 83.179f, 48.7373f, 1, 2), (43000 + (iLocal_32 / 3)), 3);
				SET_WEATHER_TYPE_NOW("SNOWLIGHT");
				SET_CAM_ACTIVE(iLocal_30, true);
				RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				settimerb(0);
				iLocal_31++;
			}
			break;
		
		case 2:
			PAUSE_CLOCK(true);
			if (timerb() > 10000)
			{
				func_4();
				iLocal_31++;
			}
			break;
		
		case 3:
			PAUSE_CLOCK(true);
			if (timerb() > (76000 + iLocal_32))
			{
				SET_ROADS_IN_ANGLED_AREA(5526.24f, -5137.23f, 61.78925f, 3679.327f, -4973.879f, 125.0828f, 192f, 0, true, 1);
				SET_ROADS_IN_ANGLED_AREA(3691.211f, -4941.24f, 94.59368f, 3511.115f, -4869.191f, 126.7621f, 16f, 0, true, 1);
				SET_ROADS_IN_ANGLED_AREA(3510.004f, -4865.81f, 94.69557f, 3204.424f, -4833.817f, 126.8152f, 16f, 0, true, 1);
				SET_ROADS_IN_ANGLED_AREA(3186.534f, -4832.798f, 109.8148f, 3202.187f, -4833.993f, 114.815f, 16f, 0, true, 1);
				func_35();
				return 1;
			}
			break;
	}
	return 0;
}

int func_18()
{
	switch (iLocal_31)
	{
		case 0:
			if (IS_SCREEN_FADED_OUT())
			{
				DESTROY_ALL_CAMS(0);
				iLocal_30 = CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
				_0xD1B0F412F109EA5D(iLocal_30, 2);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 1894.21f, 3752.368f, 38.8232f, -3.2748f, 0f, 74.7403f, 45f, 1, 2), (25000 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 1822.434f, 3752.692f, 38.8232f, -0.6732f, 0f, 73.203f, 45f, 1, 2), (25000 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 1721.525f, 3753.527f, 38.8232f, -0.6732f, 0f, 73.203f, 45f, 1, 2), (25000 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 1670.582f, 3766.587f, 43.3779f, -1.7418f, 0f, 81.1962f, 45f, 1, 2), (25000 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 1550.969f, 3785.112f, 39.979f, -1.4286f, 0f, 81.1962f, 45f, 1, 2), (25000 + (iLocal_32 / 5)), 3);
				SET_CAM_ACTIVE(iLocal_30, true);
				SET_WEATHER_TYPE_NOW("EXTRASUNNY");
				SHAKE_CAM(iLocal_30, "HAND_SHAKE", 0.06f);
				RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				SET_CLOCK_TIME(20, 0, 0);
				settimerb(0);
				iLocal_31++;
			}
			break;
		
		case 1:
			if (timerb() > 11000)
			{
				func_4();
				iLocal_31++;
			}
			break;
		
		case 2:
			if (timerb() > (70000 + iLocal_32))
			{
				func_35();
				return 1;
			}
			break;
	}
	return 0;
}

int func_19()
{
	switch (iLocal_31)
	{
		case 0:
			if (IS_SCREEN_FADED_OUT())
			{
				DESTROY_ALL_CAMS(0);
				iLocal_30 = CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
				_0xD1B0F412F109EA5D(iLocal_30, 0);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 1921.736f, 2969.344f, 58.458f, 5.9884f, 0f, -115.0092f, 42.011f, 1, 2), (15000 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 1977.809f, 2989.481f, 61.3841f, 3.4807f, 0f, -138.1117f, 42.011f, 1, 2), (15000 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 2055.791f, 3005.162f, 63.5793f, 0.0466f, 0f, -152.9442f, 42.011f, 1, 2), (15000 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 2153.164f, 2973.802f, 63.6353f, 0.225f, 0f, 143.9263f, 42.011f, 1, 2), (20000 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 2207.884f, 2911.434f, 62.6499f, 1.6293f, 0f, 80.4066f, 42.011f, 1, 2), (25000 + (iLocal_32 / 5)), 3);
				SET_CAM_ACTIVE(iLocal_30, true);
				SHAKE_CAM(iLocal_30, "HAND_SHAKE", 0.2f);
				RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				SET_CLOCK_TIME(0, 0, 0);
				SET_WEATHER_TYPE_NOW("EXTRASUNNY");
				settimerb(0);
				iLocal_31++;
			}
			break;
		
		case 1:
			if (timerb() > 12000)
			{
				func_4();
				iLocal_31++;
			}
			break;
		
		case 2:
			if (timerb() > (69000 + iLocal_32))
			{
				func_35();
				return 1;
			}
			break;
	}
	return 0;
}

int func_20()
{
	switch (iLocal_31)
	{
		case 0:
			SET_ENTITY_COORDS(SET_ENTITY_COORDS(), 2339.135f, 3033.743f, 49.2209f, 1, false, 0, 1);
			if (IS_SCREEN_FADED_OUT())
			{
				DESTROY_ALL_CAMS(0);
				iLocal_30 = CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
				_0xD1B0F412F109EA5D(iLocal_30, 0);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 2339.135f, 3033.743f, 49.2209f, -0.8334f, 0f, -69.9175f, 45f, 1, 2), (23000 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 2360.396f, 3041.517f, 48.8916f, 2.003f, 0f, -69.8641f, 45f, 1, 2), (23000 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 2386.251f, 3048.823f, 49.832f, 2.003f, 0f, -77.7654f, 45f, 1, 2), (23000 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 2424.438f, 3057.382f, 54.1784f, 9.9176f, 0f, -76.9599f, 45f, 1, 2), (23000 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 2483.286f, 3071.011f, 64.7622f, 10.1908f, 0f, -75.0095f, 45f, 1, 2), (23000 + (iLocal_32 / 5)), 3);
				SET_CAM_ACTIVE(iLocal_30, true);
				RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				SHAKE_CAM(iLocal_30, "HAND_SHAKE", 0.1f);
				SET_WEATHER_TYPE_NOW("EXTRASUNNY");
				settimerb(0);
				iLocal_31++;
			}
			break;
		
		case 1:
			SET_CLOCK_TIME(7, 0, 0);
			if (timerb() > 12000)
			{
				func_4();
				iLocal_31++;
			}
			break;
		
		case 2:
			if (timerb() > (70000 + iLocal_32))
			{
				func_35();
				return 1;
			}
			break;
	}
	return 0;
}

int func_21()
{
	switch (iLocal_31)
	{
		case 0:
			if (IS_SCREEN_FADED_OUT())
			{
				DESTROY_ALL_CAMS(0);
				iLocal_30 = CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
				_0xD1B0F412F109EA5D(iLocal_30, 2);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -237.0719f, 4715.175f, 137.1838f, 3.6968f, 0f, 49.6506f, 45f, 1, 2), 23000, 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -304.0869f, 4774.08f, 141.6331f, 3.4343f, 0f, 49.1929f, 45f, 1, 2), 23000, 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -366.7834f, 4826.342f, 145.2321f, 2.1269f, 0f, 49.7593f, 45f, 1, 2), 23000, 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -443.3375f, 4887.394f, 146.8382f, 2.541f, 0f, 52.2997f, 45f, 1, 2), 23000, 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -502.994f, 4933.501f, 154.1842f, 2.541f, 0f, 52.2997f, 45f, 1, 2), 23000, 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -547.4118f, 4979.292f, 184.8952f, -15.0925f, 0f, 13.8734f, 45f, 1, 2), 23000, 3);
				SET_CAM_ACTIVE(iLocal_30, true);
				RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				SHAKE_CAM(iLocal_30, "HAND_SHAKE", 0.1f);
				SET_CLOCK_TIME(22, 0, 0);
				SET_WEATHER_TYPE_NOW("EXTRASUNNY");
				settimerb(0);
				iLocal_31++;
			}
			break;
		
		case 1:
			SET_CLOCK_TIME(22, 0, 0);
			if (timerb() > 10000)
			{
				func_4();
				iLocal_31++;
			}
			break;
		
		case 2:
			SET_CLOCK_TIME(22, 0, 0);
			if (timerb() > 105000)
			{
				func_35();
				return 1;
			}
			break;
	}
	return 0;
}

int func_22()
{
	switch (iLocal_31)
	{
		case 0:
			if (IS_SCREEN_FADED_OUT())
			{
				DESTROY_ALL_CAMS(0);
				iLocal_30 = CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
				_0xD1B0F412F109EA5D(iLocal_30, 0);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 3338.006f, -621.7776f, -44.9584f, -14.9351f, 0f, 24.5152f, 45f, 1, 2), (18000 + (iLocal_32 / 9)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 3287.102f, -490.8297f, -61.6814f, -0.1146f, 0f, 5.9119f, 45f, 1, 2), (18000 + (iLocal_32 / 9)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 3246.816f, -420.7375f, -40.05f, 18.2685f, 0f, 36.753f, 45f, 1, 2), (18000 + (iLocal_32 / 9)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 3202.109f, -357.5204f, -24.0778f, 6.5175f, 0f, 50.9221f, 45f, 1, 2), (18000 + (iLocal_32 / 9)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 3164.882f, -328.2462f, -20.4826f, 9.0396f, 0f, 55.5429f, 45f, 1, 2), (18000 + (iLocal_32 / 9)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 3140.673f, -303.8229f, -16.9478f, 1.1297f, 0f, 15.8418f, 45f, 1, 2), (18000 + (iLocal_32 / 9)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 3127.556f, -226.4933f, -22.8197f, -0.6468f, 0f, 23.3618f, 45f, 1, 2), (18000 + (iLocal_32 / 9)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 3072.322f, -156.1007f, -17.7341f, 3.7494f, 0f, 40.322f, 45f, 1, 2), (18000 + (iLocal_32 / 9)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 3068.951f, -152.1308f, 1.0045f, 6.0711f, 0f, 26.0366f, 45f, 1, 2), (18000 + (iLocal_32 / 9)), 3);
				SET_CAM_ACTIVE(iLocal_30, true);
				RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				settimerb(0);
				iLocal_31++;
			}
			break;
		
		case 1:
			if (timerb() > 10000)
			{
				func_4();
				iLocal_31++;
			}
			break;
		
		case 2:
			if (timerb() > (116000 + iLocal_32))
			{
				func_35();
				return 1;
			}
			break;
	}
	return 0;
}

int func_23()
{
	switch (iLocal_31)
	{
		case 0:
			if (IS_SCREEN_FADED_OUT())
			{
				DESTROY_ALL_CAMS(0);
				iLocal_30 = CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
				_0xD1B0F412F109EA5D(iLocal_30, 0);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -2026.197f, -2744.839f, 19.8858f, -0.3979f, -0.057f, -120.6251f, 45f, 1, 2), (20000 + (iLocal_32 / 4)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -1885.261f, -2826.456f, 18.7531f, -0.3979f, -0.057f, -120.6251f, 45f, 1, 2), (20000 + (iLocal_32 / 4)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -1767.411f, -2894.296f, 17.8071f, -0.3979f, -0.057f, -120.6251f, 45f, 1, 2), (20000 + (iLocal_32 / 4)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -1631.421f, -2973f, 15.6656f, -0.3979f, -0.057f, -120.6251f, 45f, 1, 2), (20000 + (iLocal_32 / 4)), 3);
				SET_CAM_ACTIVE(iLocal_30, true);
				RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				settimerb(0);
				iLocal_31++;
			}
			break;
		
		case 1:
			if (timerb() > 10000)
			{
				func_4();
				iLocal_31++;
			}
			break;
		
		case 2:
			if (timerb() > (50000 + iLocal_32))
			{
				func_35();
				return 1;
			}
			break;
	}
	return 0;
}

int func_24()
{
	switch (iLocal_31)
	{
		case 0:
			if (IS_SCREEN_FADED_OUT())
			{
				DESTROY_ALL_CAMS(0);
				iLocal_30 = CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
				_0xD1B0F412F109EA5D(iLocal_30, 2);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -1253.068f, -1415.438f, 18.0304f, 3.5572f, -0.0007f, 93.1711f, 45f, 1, 2), (23000 + (iLocal_32 / 4)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -1252.216f, -1443.228f, 18.03f, 3.5572f, -0.0007f, 88.3789f, 45f, 1, 2), (23000 + (iLocal_32 / 4)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -1253.896f, -1464.018f, 18.0297f, 3.5572f, -0.0007f, 82.0894f, 45f, 1, 2), (23000 + (iLocal_32 / 4)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -1261.993f, -1503.591f, 18.0293f, 3.5572f, -0.0007f, 70.0711f, 45f, 1, 2), (23000 + (iLocal_32 / 4)), 3);
				SET_CAM_ACTIVE(iLocal_30, true);
				SHAKE_CAM(iLocal_30, "HAND_SHAKE", 0.05f);
				SET_CLOCK_TIME(19, 10, 0);
				RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				settimerb(0);
				iLocal_31++;
			}
			break;
		
		case 1:
			if (timerb() > 10000)
			{
				func_4();
				iLocal_31++;
			}
			break;
		
		case 2:
			if (timerb() > (60000 + iLocal_32))
			{
				func_35();
				return 1;
			}
			break;
	}
	return 0;
}

int func_25()
{
	switch (iLocal_31)
	{
		case 0:
			SET_ENTITY_COORDS(SET_ENTITY_COORDS(), 2581.335f, 2621.898f, 36.8885f, 1, false, 0, 1);
			if (IS_SCREEN_FADED_OUT())
			{
				DESTROY_ALL_CAMS(0);
				iLocal_30 = CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
				_0xD1B0F412F109EA5D(iLocal_30, 2);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 2581.335f, 2621.898f, 36.8885f, -0.2545f, 0f, 166.5471f, 45f, 1, 2), (25000 + (iLocal_32 / 3)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 2581.335f, 2621.879f, 41.8131f, -0.2545f, 0f, 166.5471f, 45f, 1, 2), (25000 + (iLocal_32 / 3)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 2581.333f, 2621.83f, 52.8645f, -0.2545f, 0f, 166.5471f, 45f, 1, 2), (25000 + (iLocal_32 / 3)), 3);
				SET_CAM_ACTIVE(iLocal_30, true);
				SHAKE_CAM(iLocal_30, "HAND_SHAKE", 0.05f);
				RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				SET_CLOCK_TIME(20, 0, 0);
				settimerb(0);
				iLocal_31++;
			}
			break;
		
		case 1:
			if (timerb() > 12000)
			{
				func_4();
				iLocal_31++;
			}
			break;
		
		case 2:
			if (timerb() > (50000 + iLocal_32))
			{
				func_35();
				return 1;
			}
			break;
	}
	return 0;
}

int func_26()
{
	switch (iLocal_31)
	{
		case 0:
			if (IS_SCREEN_FADED_OUT())
			{
				DESTROY_ALL_CAMS(0);
				iLocal_30 = CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
				_0xD1B0F412F109EA5D(iLocal_30, 0);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -262.8899f, 308.8326f, 93.8405f, 0.1817f, 0f, -159.0937f, 45f, 1, 2), (23000 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -248.2659f, 274.7704f, 93.9581f, 0.1817f, 0f, -155.6208f, 45f, 1, 2), (23000 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -231.0772f, 231.8714f, 96.5047f, 0.1817f, 0f, -159.1501f, 45f, 1, 2), (23000 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -187.7147f, 94.3744f, 117.7859f, 2.0378f, 0f, -168.487f, 45f, 1, 2), (23000 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -125.3929f, -211.5931f, 129.3175f, 2.0378f, 0f, -168.487f, 45f, 1, 2), (23000 + (iLocal_32 / 5)), 3);
				SET_CAM_ACTIVE(iLocal_30, true);
				RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				SET_WEATHER_TYPE_NOW("EXTRASUNNY");
				SET_CLOCK_TIME(0, 0, 0);
				settimerb(0);
				iLocal_31++;
			}
			break;
		
		case 1:
			if (timerb() > 10000)
			{
				func_4();
				iLocal_31++;
			}
			break;
		
		case 2:
			if (timerb() > (70000 + iLocal_32))
			{
				func_35();
				return 1;
			}
			break;
	}
	return 0;
}

int func_27()
{
	switch (iLocal_31)
	{
		case 0:
			if (IS_SCREEN_FADED_OUT())
			{
				DESTROY_ALL_CAMS(0);
				iLocal_30 = CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
				_0xD1B0F412F109EA5D(iLocal_30, 2);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -865.1187f, -2432.063f, 14.3939f, 3.4252f, 0f, 148.9827f, 45f, 1, 2), (22000 + (iLocal_32 / 3)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -864.8112f, -2431.552f, 23.657f, 10.5248f, 0f, 148.9827f, 45f, 1, 2), (22000 + (iLocal_32 / 3)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -865.5177f, -2432.725f, 98.3512f, -5.9302f, 0f, 148.9827f, 45f, 1, 2), (35000 + (iLocal_32 / 3)), 3);
				SET_CAM_ACTIVE(iLocal_30, true);
				SHAKE_CAM(iLocal_30, "HAND_SHAKE", 0.05f);
				RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				SET_WEATHER_TYPE_NOW("CLEAR");
				SET_CLOCK_TIME(19, 0, 0);
				settimerb(0);
				iLocal_31++;
			}
			break;
		
		case 1:
			if (timerb() > 12000)
			{
				func_4();
				iLocal_31++;
			}
			break;
		
		case 2:
			if (timerb() > (48000 + iLocal_32))
			{
				func_35();
				return 1;
			}
			break;
	}
	return 0;
}

int func_28()
{
	switch (iLocal_31)
	{
		case 0:
			if (IS_SCREEN_FADED_OUT())
			{
				DESTROY_ALL_CAMS(0);
				iLocal_30 = CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
				_0xD1B0F412F109EA5D(iLocal_30, 0);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 1877.069f, 4189.788f, 37.3659f, 7.5546f, 0.0017f, 73.6847f, 45f, 1, 2), (26000 + (iLocal_32 / 4)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 1488.104f, 4241.624f, 37.3659f, 7.5546f, 0.0017f, 64.4795f, 45f, 1, 2), (26000 + (iLocal_32 / 4)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 1290.755f, 4243.994f, 37.3659f, 7.5546f, 0.0017f, 20.472f, 45f, 1, 2), (26000 + (iLocal_32 / 4)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 1076.597f, 4244.019f, 37.3659f, 16.9531f, 0.0017f, 20.472f, 45f, 1, 2), (26000 + (iLocal_32 / 4)), 3);
				SET_CAM_ACTIVE(iLocal_30, true);
				RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				SET_CLOCK_TIME(20, 0, 0);
				SET_WEATHER_TYPE_NOW("CLEAR");
				iLocal_121 = ADD_NAVMESH_BLOCKING_OBJECT(1132.87f, -564.3635f, 55.8749f, 4f, 4f, 4f, 0f, 0, 7);
				settimerb(0);
				iLocal_31++;
			}
			break;
		
		case 1:
			if (timerb() > 10000)
			{
				func_4();
				iLocal_31++;
			}
			break;
		
		case 2:
			if (timerb() > (70000 + iLocal_32))
			{
				REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_121);
				func_35();
				return 1;
			}
			break;
	}
	return 0;
}

int func_29()
{
	switch (iLocal_31)
	{
		case 0:
			if (IS_SCREEN_FADED_OUT())
			{
				DESTROY_ALL_CAMS(0);
				iLocal_30 = CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
				_0xD1B0F412F109EA5D(iLocal_30, 0);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 2432.456f, 3784.288f, 40.5582f, 3.6923f, 0f, -92.5777f, 45f, 1, 2), (16500 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 2448.433f, 3784.291f, 41.2309f, 8.4183f, 0f, -91.8215f, 45f, 1, 2), (16500 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 2461.687f, 3784.315f, 45.2641f, 8.4183f, 0f, -91.8215f, 45f, 1, 2), (16500 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 2487.57f, 3783.681f, 49.687f, 8.4183f, 0f, -91.8215f, 45f, 1, 2), (16500 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 2580.391f, 3780.907f, 83.9326f, 32.8287f, 0f, -91.3104f, 45f, 1, 2), (16500 + (iLocal_32 / 5)), 3);
				SET_CAM_ACTIVE(iLocal_30, true);
				RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				SET_CLOCK_TIME(8, 0, 0);
				SET_WEATHER_TYPE_NOW("EXTRASUNNY");
				settimerb(0);
				iLocal_31++;
			}
			break;
		
		case 1:
			if (timerb() > 10000)
			{
				func_4();
				iLocal_31++;
			}
			break;
		
		case 2:
			if (timerb() > (65000 + iLocal_32))
			{
				func_35();
				return 1;
			}
			break;
	}
	return 0;
}

int func_30()
{
	switch (iLocal_31)
	{
		case 0:
			if (IS_SCREEN_FADED_OUT())
			{
				DESTROY_ALL_CAMS(0);
				iLocal_30 = CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
				_0xD1B0F412F109EA5D(iLocal_30, 0);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 3587.535f, 4860.792f, 3.9609f, 6.6324f, -0.0179f, 27.2506f, 45f, 1, 2), (22000 + (iLocal_32 / 4)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 3533.498f, 4960.601f, 3.9609f, 6.2686f, -0.0179f, 27.2506f, 45f, 1, 2), (22000 + (iLocal_32 / 4)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 3459.745f, 5087.12f, 5.2853f, 6.2686f, -0.0179f, 27.2506f, 45f, 1, 2), (22000 + (iLocal_32 / 4)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 3375.903f, 5228.506f, 5.2853f, 14.2505f, -0.0179f, 28.1868f, 45f, 1, 2), (22000 + (iLocal_32 / 4)), 3);
				SET_CAM_ACTIVE(iLocal_30, true);
				RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				SET_CLOCK_TIME(7, 0, 0);
				SET_WEATHER_TYPE_NOW("CLOUDS");
				settimerb(0);
				iLocal_31++;
			}
			break;
		
		case 1:
			if (timerb() > 12000)
			{
				func_4();
				iLocal_31++;
			}
			break;
		
		case 2:
			if (timerb() > (60000 + iLocal_32))
			{
				func_35();
				return 1;
			}
			break;
	}
	return 0;
}

int func_31()
{
	switch (iLocal_31)
	{
		case 0:
			if (IS_SCREEN_FADED_OUT())
			{
				DESTROY_ALL_CAMS(0);
				iLocal_30 = CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
				_0xD1B0F412F109EA5D(iLocal_30, 0);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -2204.959f, 1620.865f, 267.1454f, -8.5002f, -0.0025f, -49.987f, 45f, 1, 2), (22000 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -2043.704f, 1738.258f, 219.7041f, -12.5074f, -0.0025f, -51.8025f, 45f, 1, 2), (22000 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -1910.65f, 1852.888f, 179.1081f, -7.4417f, -0.0025f, -31.5586f, 45f, 1, 2), (22000 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -1864.61f, 1979.204f, 161.5704f, -5.0407f, -0.0025f, -33.7065f, 45f, 1, 2), (22000 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -1789.553f, 2127.887f, 140.8785f, -1.5848f, -0.0025f, -25.4394f, 45f, 1, 2), (22000 + (iLocal_32 / 5)), 3);
				SET_CAM_ACTIVE(iLocal_30, true);
				RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				SET_CLOCK_TIME(17, 0, 0);
				SET_WEATHER_TYPE_NOW("CLEAR");
				settimerb(0);
				iLocal_31++;
			}
			break;
		
		case 1:
			if (timerb() > 13000)
			{
				func_4();
				iLocal_31++;
			}
			break;
		
		case 2:
			if (timerb() > (65000 + iLocal_32))
			{
				func_35();
				return 1;
			}
			break;
	}
	return 0;
}

int func_32()
{
	switch (iLocal_31)
	{
		case 0:
			if (IS_SCREEN_FADED_OUT())
			{
				DESTROY_ALL_CAMS(0);
				iLocal_30 = CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
				_0xD1B0F412F109EA5D(iLocal_30, 0);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 920.1297f, -2895.537f, 30.41158f, -42.44789f, -0.00047f, -166.2714f, 50.09348f, 1, 2), (20000 + (iLocal_32 / 6)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 920.1297f, -2971.776f, 30.41158f, -42.44789f, -0.00047f, -166.2714f, 50.09348f, 1, 2), (20000 + (iLocal_32 / 6)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 920.1297f, -3010.082f, 30.41158f, -42.44789f, -0.00047f, -166.2714f, 50.09348f, 1, 2), (20000 + (iLocal_32 / 6)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 920.1297f, -3059.167f, 30.41158f, -42.44789f, -0.00047f, -166.2714f, 50.09348f, 1, 2), (20000 + (iLocal_32 / 6)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 920.1297f, -3097.478f, 30.41158f, -42.44789f, -0.00047f, -166.2714f, 50.09348f, 1, 2), (20000 + (iLocal_32 / 6)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", 920.1297f, -3124.06f, 30.4116f, -42.4479f, -0.0005f, -166.2714f, 50.09348f, 1, 2), (20000 + (iLocal_32 / 6)), 3);
				SET_CAM_ACTIVE(iLocal_30, true);
				RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				SET_CLOCK_TIME(17, 0, 0);
				SET_WEATHER_TYPE_NOW("CLEAR");
				settimerb(0);
				iLocal_31++;
			}
			break;
		
		case 1:
			if (timerb() > 13000)
			{
				func_4();
				iLocal_31++;
			}
			break;
		
		case 2:
			if (timerb() > (90000 + iLocal_32))
			{
				func_35();
				return 1;
			}
			break;
	}
	return 0;
}

int func_33()
{
	switch (iLocal_31)
	{
		case 0:
			if (IS_SCREEN_FADED_OUT())
			{
				DESTROY_ALL_CAMS(0);
				iLocal_30 = CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
				_0xD1B0F412F109EA5D(iLocal_30, 0);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -1355.741f, 187.977f, 59.08f, 1.8665f, 0f, -135.1039f, 45f, 1, 2), (20000 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -1329.714f, 161.8555f, 57.9754f, 1.8665f, 0f, -135.1039f, 45f, 1, 2), (20000 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -1283.708f, 115.683f, 60.0995f, 1.8665f, 0f, -135.1039f, 45f, 1, 2), (20000 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -1201.903f, 48.3632f, 63.5646f, 1.8665f, 0f, -124.3969f, 45f, 1, 2), (20000 + (iLocal_32 / 5)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -984.733f, -100.3193f, 82.0615f, 4.914f, 0f, -124.3969f, 45f, 1, 2), (20000 + (iLocal_32 / 5)), 3);
				SET_CAM_ACTIVE(iLocal_30, true);
				RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				SET_CLOCK_TIME(7, 0, 0);
				SET_WEATHER_TYPE_NOW("EXTRASUNNY");
				settimerb(0);
				iLocal_31++;
			}
			break;
		
		case 1:
			if (timerb() > 10000)
			{
				func_4();
				iLocal_31++;
			}
			break;
		
		case 2:
			if (timerb() > (75000 + iLocal_32))
			{
				func_35();
				return 1;
			}
			break;
	}
	return 0;
}

int func_34()
{
	switch (iLocal_31)
	{
		case 0:
			if (IS_SCREEN_FADED_OUT())
			{
				DESTROY_ALL_CAMS(0);
				iLocal_30 = CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
				_0xD1B0F412F109EA5D(iLocal_30, 2);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -1692.157f, -1108.044f, 13.0504f, 0.7654f, 0.0022f, -92.6355f, 45f, 1, 2), (27000 + (iLocal_32 / 4)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -1692.278f, -1108.037f, 22.1027f, 0.7654f, 0.0022f, -92.6355f, 45f, 1, 2), (27000 + (iLocal_32 / 4)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -1689.383f, -1106.982f, 60.2891f, 2.9995f, 0.0022f, -72.0565f, 45f, 1, 2), (27000 + (iLocal_32 / 4)), 3);
				_0x0FB82563989CF4FB(iLocal_30, _0x0FB82563989CF4FB("DEFAULT_SCRIPTED_CAMERA", -1689.383f, -1106.982f, 60.2891f, 2.9995f, 0.0022f, -72.0565f, 45f, 1, 2), (27000 + (iLocal_32 / 4)), 3);
				SET_CAM_ACTIVE(iLocal_30, true);
				SHAKE_CAM(iLocal_30, "HAND_SHAKE", 0.05f);
				RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				SET_CLOCK_TIME(0, 0, 0);
				settimerb(0);
				iLocal_31++;
			}
			break;
		
		case 1:
			if (timerb() > 10000)
			{
				func_4();
				iLocal_31++;
			}
			break;
		
		case 2:
			if (timerb() > (35000 + iLocal_32))
			{
				func_35();
				return 1;
			}
			break;
	}
	return 0;
}

void func_35()
{
	DO_SCREEN_FADE_OUT(5000);
	iLocal_31 = 0;
}

void func_36()
{
	_0xEB2D525B57F42B40();
	func_37();
}

void func_37()
{
	Global_22211.f_134 = 1;
}

void func_38()
{
	int iVar0;
	
	REMOVE_IPL("prologue01");
	REMOVE_IPL("prologue01c");
	REMOVE_IPL("prologue01d");
	REMOVE_IPL("prologue01e");
	REMOVE_IPL("prologue01f");
	REMOVE_IPL("prologue01g");
	REMOVE_IPL("prologue01h");
	REMOVE_IPL("prologue01i");
	REMOVE_IPL("prologue01j");
	REMOVE_IPL("prologue01k");
	REMOVE_IPL("prologue01z");
	REMOVE_IPL("prologue02");
	REMOVE_IPL("prologue03");
	REMOVE_IPL("prologue03b");
	REMOVE_IPL("prologue04");
	REMOVE_IPL("prologue04b");
	REMOVE_IPL("prologue05");
	REMOVE_IPL("prologue05b");
	REMOVE_IPL("prologue06");
	REMOVE_IPL("prologue06b");
	REMOVE_IPL("prologuerd");
	REQUEST_IPL("prologuerdb");
	REMOVE_IPL("prologue_occl");
	SET_ROADS_IN_ANGLED_AREA(5526.24f, -5137.23f, 61.78925f, 3679.327f, -4973.879f, 125.0828f, 192f, 0, true, 1);
	SET_ROADS_IN_ANGLED_AREA(3691.211f, -4941.24f, 94.59368f, 3511.115f, -4869.191f, 126.7621f, 16f, 0, true, 1);
	SET_ROADS_IN_ANGLED_AREA(3510.004f, -4865.81f, 94.69557f, 3204.424f, -4833.817f, 126.8152f, 16f, 0, true, 1);
	SET_ROADS_IN_ANGLED_AREA(3186.534f, -4832.798f, 109.8148f, 3202.187f, -4833.993f, 114.815f, 16f, 0, true, 1);
	RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
	wait(0);
	if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
	{
		FREEZE_ENTITY_POSITION(FREEZE_ENTITY_POSITION(), false);
		SET_ENTITY_INVINCIBLE(SET_ENTITY_INVINCIBLE(), false);
		SET_ENTITY_VISIBLE(SET_ENTITY_VISIBLE(), true, 0);
		SET_ENTITY_COORDS(SET_ENTITY_COORDS(), -1579.245f, 5162.347f, 18.7032f, 1, false, 0, 1);
		SET_ENTITY_HEADING(SET_ENTITY_HEADING(), 187.9143f);
		SET_ENABLE_SCUBA(SET_ENABLE_SCUBA(), 0);
	}
	SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(0);
	SET_MOBILE_PHONE_RADIO_STATE(0);
	_0x1654F24A88A8E3FE("RADIO_01_CLASS_ROCK");
	SKIP_RADIO_FORWARD();
	iVar0 = GET_GAME_TIMER() + 5000;
	NEW_LOAD_SCENE_START_SPHERE(-1579.245f, 5162.347f, 18.7032f, 150f, 0);
	while (GET_GAME_TIMER() < iVar0 && !GET_GAME_TIMER())
	{
		wait(0);
	}
	if (IS_NEW_LOAD_SCENE_ACTIVE())
	{
		NEW_LOAD_SCENE_STOP();
	}
	PAUSE_CLOCK(false);
	SET_CREDITS_ACTIVE(0);
	func_45(0, 0, 2000, 1);
	SET_MAX_WANTED_LEVEL(5);
	_0xB51B9AB9EF81868C(0);
	SET_TIME_SCALE(1f);
	Global_95142 = 0;
	func_44(1, 0);
	func_40(0, 0);
	func_39();
}

void func_39()
{
	SET_CREDITS_ACTIVE(0);
	TERMINATE_THIS_THREAD();
}

void func_40(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_61473)
	{
		Global_61473 = iParam1;
	}
	if (bParam0)
	{
		if ((func_43(0) && Global_76823.f_1 == 1) && func_42(Global_76823))
		{
		}
		else
		{
			Global_61471 = 1;
		}
	}
	if (Global_111560.f_9080 || func_43(0))
	{
		iVar0 = func_41();
		iVar1 = Global_89451[iVar0 /*5*/];
		uVar2 = Global_76846.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_111560.f_9080)
			{
			}
			return;
		}
		if (IS_BIT_SET(Global_89451[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (IS_BIT_SET(Global_89451[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		SET_BIT(&(Global_89451[iVar0 /*5*/].f_1), 4);
		SET_BIT(&Global_76825, 1);
		Global_76841 = uVar2;
		Global_76842 = GET_GAME_TIMER();
	}
}

int func_41()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (IS_BIT_SET(Global_89451[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_42(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

bool func_43(bool bParam0)
{
	if (!bParam0 && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return IS_BIT_SET(Global_76825, 0);
}

void func_44(int iParam0, int iParam1)
{
	Global_76845 = iParam1;
	if (Global_61465)
	{
		return;
	}
	if (Global_61492)
	{
		Global_61492 = 0;
		return;
	}
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher")) > 0)
	{
		if (Global_61465)
		{
		}
		Global_61491 = iParam0;
		Global_61465 = 1;
		Global_61476 = 1;
	}
}

void func_45(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	SET_WIDESCREEN_BORDERS(bParam0, 0);
	if (iParam3 == 1)
	{
		SET_PLAYER_CONTROL(SET_PLAYER_CONTROL(), !bParam0, 64);
	}
	else
	{
		SET_PLAYER_CONTROL(SET_PLAYER_CONTROL(), !bParam0, 0);
	}
	RENDER_SCRIPT_CAMS(bParam0, bParam1, iParam2, 1, 0, 0);
	CLEAR_HELP(1);
	CLEAR_PRINTS();
	func_54(bParam0, 1, 1, 0, 0, 0);
	func_46(bParam0);
	DISPLAY_HUD(!bParam0);
	DISPLAY_RADAR(!bParam0);
}

void func_46(bool bParam0)
{
	if (bParam0)
	{
		func_53();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			SET_BIT(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_52(0))
		{
			func_47(0);
		}
	}
	else if (Global_19486.f_1 == 1)
	{
		if (!Global_19486.f_1 == 0)
		{
			Global_19486.f_1 = 3;
		}
	}
}

void func_47(int iParam0)
{
	if (func_51())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_50())
		{
			func_49(1, 1);
		}
		else
		{
			func_49(0, 0);
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
	if (!func_48())
	{
		Global_19486.f_1 = 3;
	}
}

int func_48()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_49(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_52(0))
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

bool func_50()
{
	return IS_BIT_SET(Global_1687880, 5);
}

bool func_51()
{
	return IS_BIT_SET(Global_1687880, 19);
}

int func_52(int iParam0)
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

void func_53()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_54(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		SPECIAL_ABILITY_DEACTIVATE_FAST(SPECIAL_ABILITY_DEACTIVATE_FAST());
		SET_ALL_RANDOM_PEDS_FLEE(SET_ALL_RANDOM_PEDS_FLEE(), 1);
		SET_POLICE_IGNORE_PLAYER(SET_POLICE_IGNORE_PLAYER(), 1);
		func_62(1);
		_0xA8FDB297A8D25FBA();
		THEFEED_PAUSE();
		if (Global_19486.f_1 > 3)
		{
			if (IS_MOBILE_PHONE_CALL_ONGOING())
			{
				STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_48())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_61(1, iParam3, iParam2, 0);
		Global_61477 = 1;
		Global_73787 = 1;
		Global_76575 = 1;
	}
	else
	{
		func_62(0);
		THEFEED_RESUME();
		Global_61477 = 0;
		if (bParam1)
		{
			_0x03FC694AE06C5A20();
		}
		SET_ALL_RANDOM_PEDS_FLEE(SET_ALL_RANDOM_PEDS_FLEE(), 0);
		SET_POLICE_IGNORE_PLAYER(SET_POLICE_IGNORE_PLAYER(), 0);
		func_61(0, iParam3, iParam2, 0);
		if (NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!IS_PED_INJURED(IS_PED_INJURED()) && !func_59(IS_PED_INJURED())) && !func_56(IS_PED_INJURED(), 0)) && !func_55()) && !bParam4) && !bParam5)
			{
				SET_ENTITY_INVINCIBLE(SET_ENTITY_INVINCIBLE(), false);
			}
		}
		else if (((!IS_PED_INJURED(IS_PED_INJURED()) && !func_59(IS_PED_INJURED())) && !bParam4) && !bParam5)
		{
			SET_ENTITY_INVINCIBLE(SET_ENTITY_INVINCIBLE(), false);
		}
		Global_76575 = 0;
	}
}

bool func_55()
{
	return IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_39.f_18, 14);
}

bool func_56(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER_ID())
	{
		bVar0 = func_57(-1, 0) == 8;
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

int func_57(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_58();
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

int func_58()
{
	return Global_1312745;
}

int func_59(int iParam0)
{
	if (func_56(iParam0, 0))
	{
		return 1;
	}
	if (func_60())
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

bool func_60()
{
	return IS_BIT_SET(Global_2359302, 3);
}

int func_61(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_PC_VERSION())
	{
		if (_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_62(int iParam0)
{
	if (iParam0 == 1)
	{
		SET_BIT(&Global_7356, 13);
	}
	else
	{
		CLEAR_BIT(&Global_7356, 13);
	}
}

__________________________
Native Named by Reliency
1577160609
__________________________
