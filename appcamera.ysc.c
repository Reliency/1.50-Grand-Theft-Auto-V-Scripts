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
	char* sLocal_19[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_20[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_21 = 0;
	char* sLocal_22[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	vector3 vLocal_34 = { 0f, 0f, 0f };
	vector3 vLocal_35 = { 0f, 0f, 0f };
	float fLocal_36 = 0f;
	float fLocal_37 = 0f;
	float fLocal_38 = 0f;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	vector3 vLocal_41 = { 0f, 0f, 0f };
	vector3 vLocal_42 = { 0f, 0f, 0f };
	vector3 vLocal_43 = { 0f, 0f, 0f };
	vector3 vLocal_44 = { 0f, 0f, 0f };
	vector3 vLocal_45 = { 0f, 0f, 0f };
	vector3 vLocal_46 = { 0f, 0f, 0f };
	float fLocal_47 = 0f;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	float fLocal_50 = 0f;
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
	float fLocal_65 = 0f;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
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
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	char cLocal_96[16] = "";
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	float fLocal_107 = 0f;
	float fLocal_108 = 0f;
	float fLocal_109 = 0f;
	float fLocal_110 = 0f;
	float fLocal_111 = 0f;
	float fLocal_112 = 0f;
	float fLocal_113 = 0f;
	float fLocal_114 = 0f;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	iLocal_26 = 1;
	bLocal_29 = true;
	bLocal_30 = true;
	fLocal_36 = 0f;
	fLocal_37 = 172f;
	fLocal_40 = 0.7f;
	iLocal_88 = 1200;
	iLocal_89 = 1200;
	iLocal_90 = 166;
	fLocal_107 = 0.5f;
	fLocal_108 = 0.85f;
	fLocal_109 = 0.5f;
	fLocal_110 = -0.25f;
	fLocal_111 = 0.25f;
	fLocal_112 = 0.3f;
	fLocal_113 = 0.3f;
	fLocal_114 = 0.075f;
	NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (_GET_CURRENT_LANGUAGE_ID() == 0)
	{
		fLocal_40 = 1f;
	}
	else
	{
		fLocal_40 = 0.7f;
	}
	if (!func_158())
	{
		Global_4268339 = 99;
		Global_4268340 = 99;
		iLocal_24 = 99;
	}
	else
	{
		Global_4268339 = 0;
		Global_4268340 = 0;
	}
	sLocal_19[0] = "No_Filter";
	sLocal_19[1] = "phone_cam1";
	sLocal_19[2] = "phone_cam2";
	sLocal_19[3] = "phone_cam3";
	sLocal_19[4] = "phone_cam4";
	sLocal_19[5] = "phone_cam5";
	sLocal_19[6] = "phone_cam6";
	sLocal_19[7] = "phone_cam7";
	sLocal_19[8] = "phone_cam8";
	sLocal_19[9] = "phone_cam9";
	sLocal_19[10] = "phone_cam10";
	sLocal_19[11] = "phone_cam11";
	sLocal_19[12] = "phone_cam12";
	sLocal_20[0] = "No_Border";
	sLocal_20[1] = "frame1";
	sLocal_20[2] = "frame2";
	sLocal_20[3] = "frame3";
	sLocal_20[4] = "frame4";
	sLocal_20[5] = "frame5";
	sLocal_20[6] = "frame6";
	sLocal_20[7] = "frame7";
	sLocal_20[8] = "frame8";
	sLocal_20[9] = "frame9";
	sLocal_20[10] = "frame10";
	sLocal_20[11] = "frame11";
	sLocal_20[12] = "frame12";
	sLocal_22[0] = "No_Expression";
	sLocal_22[1] = "mood_Aiming_1";
	sLocal_22[2] = "mood_Happy_1";
	sLocal_22[3] = "mood_smug_1";
	sLocal_22[4] = "mood_Injured_1";
	sLocal_22[5] = "mood_sulk_1";
	sLocal_22[6] = "mood_Angry_1";
	func_157();
	if (func_156(1, 1, !iLocal_31, 1))
	{
		iLocal_31 = 1;
	}
	func_155();
	iLocal_63 = GET_SOUND_ID();
	if (Global_19431 == 0)
	{
		fLocal_47 = 0.207f;
		fLocal_48 = 0.158f;
		fLocal_49 = 0.207f;
		fLocal_50 = 0.335f;
	}
	else
	{
		fLocal_47 = 0.24f;
		fLocal_48 = 0.258f;
		fLocal_49 = 0.24f;
		fLocal_50 = 0.435f;
	}
	Global_21838 = 0;
	Global_21839 = 0;
	if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
	{
		if (IS_PED_ON_MOUNT(IS_PED_ON_MOUNT()))
		{
			Global_21838 = 1;
		}
		if (_IS_NIGHTVISION_ACTIVE())
		{
			Global_21838 = 1;
		}
		if (IS_VEHICLE_DRIVEABLE(IS_VEHICLE_DRIVEABLE(IS_VEHICLE_DRIVEABLE()), 0))
		{
			Global_21838 = 1;
		}
		if (GET_PED_CONFIG_FLAG(GET_PED_CONFIG_FLAG(), 78, 1))
		{
			Global_21838 = 1;
		}
		if (IS_PED_IN_ANY_TRAIN(IS_PED_IN_ANY_TRAIN()))
		{
			Global_21838 = 1;
		}
		if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
		{
			if (iLocal_82 == 1)
			{
				Global_21838 = 1;
			}
			iLocal_99 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
			if ((((GET_ENTITY_MODEL(iLocal_99) == joaat("rhino") || GET_ENTITY_MODEL(iLocal_99) == joaat("cutter")) || GET_ENTITY_MODEL(iLocal_99) == joaat("submersible")) || GET_ENTITY_MODEL(iLocal_99) == -1435527158) || (GET_ENTITY_MODEL(iLocal_99) == -212993243 && GET_ENTITY_MODEL(iLocal_99, func_154(GET_ENTITY_MODEL(), 1))))
			{
				Global_21838 = 1;
			}
			else if (GET_PED_IN_VEHICLE_SEAT(iLocal_99, -1, 0) == GET_PED_IN_VEHICLE_SEAT())
			{
				if (GET_ENTITY_UPRIGHT_VALUE(iLocal_99) > 0f)
				{
					if (!Global_76577)
					{
						if (!func_153())
						{
							TASK_VEHICLE_TEMP_ACTION(TASK_VEHICLE_TEMP_ACTION(), iLocal_99, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_76577)
	{
		if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
		{
			SET_PLAYER_CAN_DO_DRIVE_BY(SET_PLAYER_CAN_DO_DRIVE_BY(), 0);
		}
	}
	CLEAR_BIT(&Global_7356, 21);
	func_152(0);
	SET_BIT(&Global_7356, 17);
	if (Global_19428 == 0)
	{
		func_151();
	}
	else
	{
		iLocal_91 = 0x67D02A194A2FC2BD("camera_gallery");
		iLocal_92 = 0x67D02A194A2FC2BD("instructional_buttons");
		while (!HAS_SCALEFORM_MOVIE_LOADED(iLocal_91) || !HAS_SCALEFORM_MOVIE_LOADED(iLocal_92))
		{
			wait(0);
			_0xEB2D525B57F42B40();
			DISABLE_CONTROL_ACTION(0, 25, 1);
		}
		if (Global_76577)
		{
			iLocal_95 = 2;
		}
		else
		{
			switch (func_150())
			{
				case 0:
					iLocal_95 = 2;
					break;
				
				case 2:
					iLocal_95 = 2;
					break;
				
				case 3:
					iLocal_95 = 2;
					break;
				}
		}
		func_149(iLocal_91, "DISPLAY_VIEW", to_float(iLocal_95), -1082130432, -1082130432, -1082130432, -1082130432);
		func_148(iLocal_91, "CLOSE_SHUTTER");
		BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "DISPLAY_VIEW");
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(16);
		END_SCALEFORM_MOVIE_METHOD();
	}
	vLocal_41 = { Global_19446 };
	vLocal_42 = { Global_19439[Global_19431 /*3*/] };
	Global_21839 = 1;
	iLocal_69 = 1;
	iLocal_70 = 1;
	iLocal_71 = 1;
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 0;
	iLocal_76 = 0;
	if (Global_19486.f_1 > 3)
	{
		Global_19486.f_1 = 8;
	}
	if (iLocal_82 == 0)
	{
		CLEAR_BIT(&Global_7358, 3);
	}
	func_146();
	_SET_UI_LAYER(4);
	if (_0x76BF03FADBF154F5())
	{
	}
	if (Global_4456448.f_185407)
	{
	}
	if (Global_4456448.f_185409 == 1)
	{
		iLocal_106 = 1;
	}
	if (iLocal_106 == 1)
	{
	}
	while (true)
	{
		wait(0);
		SET_INPUT_EXCLUSIVE(0, Global_19455);
		SET_INPUT_EXCLUSIVE(0, 186);
		_0xEB2D525B57F42B40();
		DISABLE_CONTROL_ACTION(0, 25, 1);
		DISABLE_CONTROL_ACTION(0, 0, 1);
		if (func_145())
		{
			if (!IS_BIT_SET(Global_4269615, 2))
			{
				SET_BIT(&Global_4269615, 2);
				func_149(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (!Global_111560.f_14046.f_81)
		{
			if (!IS_BIT_SET(Global_4269615, 13))
			{
				if (!IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (!IS_BIT_SET(Global_7357, 28))
					{
						if ((iLocal_79 && iLocal_82 == 0) && !func_145())
						{
							SET_BIT(&Global_4269615, 13);
							Global_111560.f_14046.f_81 = 1;
							func_144("CELL_FOC_HLP", -1);
						}
					}
				}
			}
		}
		if (!IS_PAUSE_MENU_ACTIVE())
		{
			if (Global_4456448.f_185406 == 0 && Global_4456448.f_185407 == 0)
			{
				SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
			}
			HIDE_HUD_COMPONENT_THIS_FRAME(7);
			func_143();
			if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
			{
				SET_PED_RESET_FLAG(SET_PED_RESET_FLAG(), 200, true);
			}
			DISABLE_CONTROL_ACTION(0, 44, 1);
			DISABLE_CONTROL_ACTION(0, 47, 1);
			DISABLE_CONTROL_ACTION(0, 91, 1);
			DISABLE_CONTROL_ACTION(0, 92, 1);
			DISABLE_CONTROL_ACTION(0, 68, 1);
			if (iLocal_100 == 0)
			{
				SET_INPUT_EXCLUSIVE(0, Global_19459);
			}
			SET_INPUT_EXCLUSIVE(0, Global_19456);
			if ((IS_SCREEN_FADED_OUT() || IS_SCREEN_FADED_OUT()) && !func_145())
			{
				iLocal_81 = 1;
				Global_19486.f_1 = 3;
				SET_GAME_PAUSED(false);
			}
			if (IS_STUNT_JUMP_IN_PROGRESS())
			{
				Global_19486.f_1 = 3;
				SET_GAME_PAUSED(false);
			}
			if (IS_BIT_SET(Global_7357, 3))
			{
				Global_19486.f_1 = 3;
				SET_GAME_PAUSED(false);
			}
			if (NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (func_132())
				{
					Global_19486.f_1 = 3;
					SET_GAME_PAUSED(false);
				}
			}
			if (!IS_PED_INJURED(IS_PED_INJURED()))
			{
				if (IS_PED_IN_COVER(IS_PED_IN_COVER(), 0))
				{
					Global_19486.f_1 = 3;
					SET_GAME_PAUSED(false);
				}
				if ((GET_PED_CONFIG_FLAG(GET_PED_CONFIG_FLAG(), 78, 1) || GET_PED_CONFIG_FLAG(GET_PED_CONFIG_FLAG())) || GET_PED_CONFIG_FLAG(GET_PED_CONFIG_FLAG()))
				{
					if (func_131())
					{
					}
					else
					{
						Global_19486.f_1 = 3;
						SET_GAME_PAUSED(false);
					}
				}
				if (IS_PED_RAGDOLL(IS_PED_RAGDOLL()) || IS_PED_RAGDOLL(IS_PED_RAGDOLL()))
				{
					if (Global_76577 == 1)
					{
						Global_19486.f_1 = 3;
					}
				}
				if (IS_ENTITY_IN_WATER(IS_ENTITY_IN_WATER()))
				{
					if (GET_ENTITY_SUBMERGED_LEVEL(GET_ENTITY_SUBMERGED_LEVEL()) > 0.3f)
					{
						Global_19486.f_1 = 3;
					}
				}
				if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
				{
					func_130();
					iLocal_99 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
					if (GET_ENTITY_UPRIGHT_VALUE(iLocal_99) < 0f)
					{
						func_127(0);
					}
					if (iLocal_66 == 1)
					{
						if (iLocal_67 == 1)
						{
							if (!_0x1F2300CB7FA7B7F6())
							{
								func_127(0);
							}
						}
						else if (!_0x1F2300CB7FA7B7F6())
						{
							iLocal_67 = 1;
							wait(0);
							_0xEB2D525B57F42B40();
						}
					}
				}
				else if (Global_76577 == 0)
				{
					if (IS_BIT_SET(Global_7356, 18))
					{
						func_126();
						if ((Global_19486 == 0 || Global_19486 == 1) || Global_19486 == 2)
						{
							if (!IS_PED_RUNNING_MOBILE_PHONE_TASK(IS_PED_RUNNING_MOBILE_PHONE_TASK()))
							{
								if (GET_PED_PARACHUTE_STATE(GET_PED_PARACHUTE_STATE()) == 2)
								{
								}
								else
								{
									Global_19486.f_1 = 3;
									SET_GAME_PAUSED(false);
								}
							}
						}
					}
				}
			}
			if (iLocal_93)
			{
				func_125();
			}
			if (Global_19486.f_1 < 4)
			{
			}
			if (iLocal_103 == 0)
			{
				if (iLocal_54 == 0)
				{
					if (iLocal_55 == 0)
					{
						if (iLocal_62 == 0)
						{
							if (Global_19486.f_1 > 3)
							{
								if (iLocal_100)
								{
									func_123();
									if (Global_21843 == 0 && Global_21840 == 6)
									{
										CLEAR_FLOATING_HELP(0, 1);
										_REMOVE_LOADING_PROMPT();
										iLocal_100 = 0;
										func_122();
										if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
										{
											vLocal_34 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true) };
										}
										func_121();
										iLocal_60++;
										if (func_158())
										{
											func_149(iLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
										}
										else
										{
											func_149(iLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
										}
										iLocal_83 = 0;
										iLocal_84 = 0;
										iLocal_85 = 0;
										iLocal_78 = 0;
										func_115();
									}
									if (Global_21840 == 0)
									{
										iLocal_100 = 0;
										_REMOVE_LOADING_PROMPT();
										if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
										{
											vLocal_34 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true) };
										}
										func_114();
										iLocal_83 = 0;
										iLocal_84 = 0;
										iLocal_85 = 0;
										iLocal_78 = 0;
										func_115();
										if (func_158())
										{
											if (Global_4268340 == 0)
											{
												if (!IS_BIT_SET(Global_4269615, 2))
												{
													func_149(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
										else if (!IS_BIT_SET(Global_4269615, 2))
										{
											func_149(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
										}
										func_113();
										func_112(1);
									}
								}
								else if (Global_19486.f_1 != 9)
								{
									if (Global_21839 == 1)
									{
										if (Global_21838 == 0)
										{
											func_111();
										}
									}
									else if ((Global_7964 - Global_7963) > Global_7965)
									{
										if (IS_SCREEN_FADED_OUT() && func_110())
										{
											if (func_109() && iLocal_78)
											{
											}
											else if (iLocal_78 == 0)
											{
												SET_GAME_PAUSED(false);
												STOP_SOUND(iLocal_63);
												iLocal_94 = 0;
												if (Global_21838 == 0)
												{
													func_121();
													Global_21838 = 1;
													CLEAR_FLOATING_HELP(0, 1);
													iLocal_79 = 0;
													iLocal_69 = 1;
													iLocal_70 = 1;
													iLocal_71 = 1;
													iLocal_72 = 1;
													iLocal_73 = 1;
													iLocal_74 = 1;
													func_108(0, 0);
													func_112(0);
													iLocal_66 = 0;
													func_103(1);
													iLocal_93 = 0;
													func_101(0, 1);
													func_149(Global_19467, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
													func_99(1);
												}
											}
										}
										if (func_98(2, Global_19454, 0))
										{
											if (func_145())
											{
												if (((Global_1662552 || Global_1312791) || Global_21841) || IS_BIT_SET(Global_7356, 21))
												{
												}
												else if (func_109() && iLocal_78)
												{
												}
												else if (!func_110())
												{
													if (iLocal_78 == 0)
													{
														DO_SCREEN_FADE_OUT(500);
														iLocal_94 = 0;
														func_101(1, 1);
														func_97(1);
													}
												}
											}
											else if (func_109() && iLocal_78)
											{
											}
											else if (iLocal_78 == 0)
											{
												SET_GAME_PAUSED(false);
												STOP_SOUND(iLocal_63);
												iLocal_94 = 0;
												if (Global_21838 == 0)
												{
													func_121();
													Global_21838 = 1;
													CLEAR_FLOATING_HELP(0, 1);
													iLocal_79 = 0;
													iLocal_69 = 1;
													iLocal_70 = 1;
													iLocal_71 = 1;
													iLocal_72 = 1;
													iLocal_73 = 1;
													iLocal_74 = 1;
													func_108(0, 0);
													func_112(0);
													iLocal_66 = 0;
													func_103(1);
													iLocal_93 = 0;
													func_101(0, 1);
													func_149(Global_19467, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
									}
									if (iLocal_52 == 0)
									{
										if (IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											func_96();
											iLocal_52 = 1;
										}
									}
									else if (!IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_96();
										iLocal_52 = 0;
									}
									if (iLocal_53 == 0)
									{
										if (IS_BIT_SET(Global_7356, 28))
										{
											func_96();
											iLocal_53 = 1;
										}
									}
									else if (!IS_BIT_SET(Global_7356, 28))
									{
										func_96();
										iLocal_53 = 0;
									}
									if (Global_21838 == 1)
									{
										func_88();
									}
									else if (Global_19486.f_1 > 4)
									{
										if (iLocal_75 == 1 && iLocal_76 == 0)
										{
											func_84();
										}
										if (iLocal_75 == 0 && iLocal_76 == 1)
										{
											func_114();
											if (iLocal_87 == 1 || iLocal_87 == 0)
											{
												if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
												{
													if (!IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
													{
														func_148(iLocal_91, "CLOSE_SHUTTER");
														iLocal_86 = GET_GAME_TIMER();
														while (GET_GAME_TIMER() < (iLocal_86 + iLocal_88) && Global_19486.f_1 > 3)
														{
															func_143();
															func_125();
															func_83();
															_0xEB2D525B57F42B40();
															wait(0);
														}
													}
												}
												if (func_158())
												{
													if (Global_4268340 == 0)
													{
														if (!IS_BIT_SET(Global_4269615, 2))
														{
															func_149(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
														}
													}
												}
												else if (!IS_BIT_SET(Global_4269615, 2))
												{
													func_149(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
												func_125();
												func_143();
												iLocal_83 = 0;
												iLocal_84 = 0;
												iLocal_85 = 0;
												iLocal_78 = 0;
												func_115();
												iLocal_87 = 0;
												func_148(iLocal_91, "OPEN_SHUTTER");
											}
											func_113();
											func_112(1);
											func_82();
										}
									}
									if (iLocal_94 == 1)
									{
										func_79();
									}
									if (iLocal_80)
									{
										if (timerb() > 500)
										{
											iLocal_79 = 1;
											iLocal_80 = 0;
											SET_BIT(&Global_7356, 18);
											if (Global_21838 == 0)
											{
												func_101(1, 1);
											}
										}
									}
									if (iLocal_78 == 0)
									{
										if (iLocal_79 && Global_21838 == 0)
										{
											if ((iLocal_81 == 0 && iLocal_76 == 0) && Global_21841 == 0)
											{
												func_10();
											}
										}
										else
										{
											func_83();
										}
									}
									else if (iLocal_75 == 0)
									{
										func_5();
									}
								}
							}
						}
					}
				}
				else
				{
					if (Global_19486.f_1 > 3)
					{
						if (Global_21839 == 1)
						{
							if (Global_21838 == 0)
							{
								func_111();
							}
						}
					}
					func_4();
				}
			}
			else
			{
				if (iLocal_105 == 1)
				{
					_set_warning_message_2("CELL_CAM_ALERT", "CELL_CAM_FW_1", iLocal_102, "CELL_CAM_FW_2", 0, -1, "", "", 1, 0);
				}
				if (iLocal_105 == 2)
				{
					_set_warning_message_2("CELL_CAM_ALERT", "ERROR_NO_SC_CAMERAPHONE", iLocal_102, "", 0, -1, "", "", 1, 0);
				}
				if (iLocal_105 == 6)
				{
					_set_warning_message_2("CELL_CAM_ALERT", "SC_ERROR_BANNED", iLocal_102, "", 0, -1, "", "", 1, 0);
				}
				if (iLocal_105 == 3)
				{
					_set_warning_message_2("CELL_CAM_ALERT", "ERROR_UPDATE_SC_CAMERAPHONE", iLocal_102, "", 0, -1, "", "", 1, 0);
				}
				if (iLocal_105 == 7)
				{
					if (IS_XBOX360_VERSION() || IS_XBOX360_VERSION())
					{
						_set_warning_message_2("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_102, "", 0, -1, "", "", 1, 0);
					}
					if (IS_PS3_VERSION() || IS_PS3_VERSION())
					{
						_set_warning_message_2("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_102, "", 0, -1, "", "", 1, 0);
					}
					if (IS_PC_VERSION())
					{
						_set_warning_message_2("CELL_CAM_ALERT", "CELL_CAM_TEMP_30", iLocal_102, "", 0, -1, "", "", 1, 0);
					}
				}
				if (iLocal_105 == 4)
				{
					_set_warning_message_2("CELL_CAM_ALERT", "CELL_CAM_CCW_1", iLocal_102, "CELL_CAM_CCW_2", 0, -1, "", "", 1, 0);
				}
				if (iLocal_105 == 5)
				{
					iVar0 = _0x9614B71F8ADB982B();
					switch (iVar0)
					{
						case -1:
							_set_warning_message_2("CELL_CAM_ALERT", "HUD_AGE_I", iLocal_102, "", 0, -1, "", "", 1, 0);
							break;
						
						case 0:
							_set_warning_message_2("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_102, "", 0, -1, "", "", 1, 0);
							break;
						
						case 1:
							_set_warning_message_2("CELL_CAM_ALERT", "HUD_AGE_C", iLocal_102, "", 0, -1, "", "", 1, 0);
							break;
						
						case 2:
							_set_warning_message_2("CELL_CAM_ALERT", "HUD_AGE_T", iLocal_102, "", 0, -1, "", "", 1, 0);
							break;
						
						default:
							_set_warning_message_2("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_102, "", 0, -1, "", "", 1, 0);
							break;
						}
				}
				if (iLocal_105 == 0)
				{
				}
				if (iLocal_105 == 2 || iLocal_105 == 3)
				{
					if (IS_CONTROL_JUST_PRESSED(2, 202))
					{
						iLocal_103 = 0;
						iLocal_105 = 0;
						func_101(0, 1);
					}
					if (IS_CONTROL_JUST_PRESSED(2, 201))
					{
						iLocal_104 = 1;
					}
					if (iLocal_104 == 1)
					{
						if (IS_CONTROL_JUST_RELEASED(2, 201))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							func_101(0, 1);
							iLocal_104 = 0;
							_0x9E778248D6685FE0("Gallery");
							_0x75D3691713C3B05A();
						}
					}
				}
				else if (iLocal_105 == 7)
				{
					if (IS_ORBIS_VERSION())
					{
						if (IS_CONTROL_JUST_PRESSED(2, 201))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							func_101(0, 1);
							iLocal_62 = 0;
						}
					}
					else if (IS_CONTROL_JUST_PRESSED(2, 202))
					{
						iLocal_103 = 0;
						iLocal_105 = 0;
						func_101(0, 1);
						iLocal_62 = 0;
					}
					if (!IS_ORBIS_VERSION())
					{
						if (IS_CONTROL_JUST_PRESSED(2, Global_19458))
						{
							iLocal_103 = 0;
							iLocal_105 = 0;
							func_101(0, 1);
							if (IS_BIT_SET(Global_7357, 28))
							{
								iLocal_62 = 0;
							}
							else
							{
								iLocal_62 = 2;
							}
							iLocal_58 = GET_GAME_TIMER();
							DISPLAY_SYSTEM_SIGNIN_UI(1);
						}
					}
				}
				else if (IS_CONTROL_JUST_PRESSED(2, 201))
				{
					iLocal_103 = 0;
					iLocal_105 = 0;
					func_101(0, 1);
				}
			}
		}
		iLocal_59 = GET_GAME_TIMER();
		if (func_145())
		{
			if (!IS_BIT_SET(Global_4269615, 2))
			{
				SET_BIT(&Global_4269615, 2);
				func_149(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (func_3() || iLocal_81)
		{
			func_1(0);
			func_108(0, 0);
			func_112(0);
			iLocal_66 = 0;
			func_103(1);
			Global_21838 = 0;
			Global_21839 = 0;
			Global_21841 = 0;
			SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_91);
			SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_92);
			SET_GAME_PAUSED(false);
			if (Global_19666 == 1)
			{
				SET_BIT(&Global_7356, 17);
			}
			else
			{
				CLEAR_BIT(&Global_7356, 17);
			}
			CLEAR_FLOATING_HELP(0, 1);
			SET_PLAYER_CAN_DO_DRIVE_BY(SET_PLAYER_CAN_DO_DRIVE_BY(), 1);
			CLEAR_BIT(&Global_7358, 3);
			CLEAR_BIT(&Global_4269615, 3);
			RESET_HUD_COMPONENT_VALUES(15);
			Global_21842 = 1;
			STOP_SOUND(iLocal_63);
			RELEASE_SOUND_ID(iLocal_63);
			_REMOVE_LOADING_PROMPT();
			func_103(1);
			_0xA2CCBE62CD4C91A4(0);
			0x375A706A5C2FD084(0);
			_0x1B0B4AEED5B9B41C(1f);
			if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
			{
				SET_FACIAL_IDLE_ANIM_OVERRIDE(SET_FACIAL_IDLE_ANIM_OVERRIDE(), "Mood_Normal_1", 0);
				CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(CLEAR_FACIAL_IDLE_ANIM_OVERRIDE());
			}
			if (Global_4268340 > 0 && Global_4268340 < 13)
			{
				SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_20[Global_4268340]);
			}
			CLEAR_BIT(&Global_7356, 18);
			if (func_145())
			{
				func_101(1, 1);
			}
			else
			{
				func_101(0, 1);
			}
			if (func_156(0, 1, iLocal_31, 1))
			{
				iLocal_31 = 0;
			}
			TERMINATE_THIS_THREAD();
		}
	}
}

void func_1(int iParam0)
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			_SET_PHONE_LEAN(1);
		}
		else if (Global_19486.f_1 > 3)
		{
			_SET_PHONE_LEAN(0);
		}
	}
}

int func_2()
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

int func_3()
{
	if (((Global_19486.f_1 == 1 || Global_19486.f_1 == 3) || Global_19486.f_1 == 0) || Global_19430 == 1)
	{
		Global_19473 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	iLocal_57 = _0xF5BED327CEA362B1(0);
	switch (iLocal_57)
	{
		case 0:
			iLocal_54 = 0;
			iLocal_60 = _GET_NUMBER_OF_PHOTOS();
			iLocal_61 = _GET_MAXIMUM_NUMBER_OF_PHOTOS_2();
			if (iLocal_55 == 1)
			{
				if (iLocal_78 == 0)
				{
					if (HAS_SCALEFORM_MOVIE_LOADED(iLocal_91))
					{
						if (func_158())
						{
							if (Global_4268340 == 0)
							{
								if (!IS_BIT_SET(Global_4269615, 2))
								{
									func_149(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								}
							}
							func_149(iLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
						}
						else
						{
							if (!IS_BIT_SET(Global_4269615, 2))
							{
								func_149(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							func_149(iLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (HAS_SCALEFORM_MOVIE_LOADED(iLocal_91))
				{
					func_149(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_149(iLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
				}
				iLocal_55 = 0;
			}
			_REMOVE_LOADING_PROMPT();
			break;
		
		case 1:
			if (!_IS_LOADING_PROMPT_BEING_DISPLAYED())
			{
				BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("CELL_SPINNER2");
				_END_TEXT_COMMAND_BUSY_STRING(1);
			}
			break;
		
		case 2:
			if (IS_BIT_SET(Global_7357, 28))
			{
				iLocal_54 = 0;
				iLocal_60 = 0;
				iLocal_61 = 0;
			}
			else
			{
				Global_19486.f_1 = 3;
				Global_21842 = 1;
			}
			_REMOVE_LOADING_PROMPT();
			break;
	}
}

void func_5()
{
	if (func_98(2, Global_19455, 0))
	{
		func_1(0);
		if (IS_BIT_SET(Global_7357, 28))
		{
			SET_GAME_PAUSED(false);
			settimerb(0);
			func_122();
			iLocal_78 = 0;
			if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
			{
				vLocal_34 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true) };
			}
			func_121();
			iLocal_87 = 1;
		}
		else if (func_9())
		{
			if (IS_BIT_SET(Global_7357, 14))
			{
				func_144("CELL_299", -1);
			}
			else
			{
				func_121();
				func_8();
			}
		}
		else
		{
			iLocal_103 = 1;
			func_101(1, 1);
		}
	}
	if (IS_BIT_SET(Global_7356, 22))
	{
		func_1(0);
		while (timera() < 2000)
		{
			wait(0);
			func_143();
			_0xEB2D525B57F42B40();
			func_83();
			func_130();
			func_125();
		}
		SET_GAME_PAUSED(false);
		func_122();
		settimerb(0);
		iLocal_78 = 0;
		if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
		{
			vLocal_34 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true) };
		}
		func_115();
		func_121();
	}
	if (func_98(2, Global_19459, 0))
	{
		func_1(0);
		if (func_109() || IS_BIT_SET(Global_7357, 28))
		{
		}
		else
		{
			SET_GAME_PAUSED(false);
			settimerb(0);
			iLocal_87 = 1;
			func_122();
			iLocal_78 = 0;
			if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
			{
				vLocal_34 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true) };
			}
			func_121();
		}
	}
	if (IS_BIT_SET(Global_7356, 28))
	{
		if (func_98(2, Global_19458, 0))
		{
			func_1(0);
			SET_GAME_PAUSED(false);
			_0x1072F115DAB0717E(0, 0);
			wait(0);
			_0xEB2D525B57F42B40();
			func_143();
			wait(0);
			_0xEB2D525B57F42B40();
			func_143();
			_0xD801CC02177FA3F1();
			_0x6A12D88881435DCA();
			Global_21842 = 1;
			iLocal_94 = 0;
			iLocal_77 = 0;
			func_101(0, 1);
			Global_21838 = 1;
			CLEAR_FLOATING_HELP(0, 1);
			iLocal_79 = 0;
			iLocal_69 = 1;
			iLocal_70 = 1;
			iLocal_71 = 1;
			iLocal_72 = 1;
			iLocal_73 = 1;
			iLocal_74 = 1;
			func_6();
			iLocal_78 = 0;
			if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
			{
				vLocal_34 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true) };
			}
			func_108(0, 0);
			func_112(0);
			iLocal_66 = 0;
			func_103(1);
			if (!Global_2531497.f_6251)
			{
				SET_BIT(&Global_7356, 9);
			}
			iLocal_93 = 0;
			func_149(Global_19467, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_6()
{
	if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
	{
		PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_19475, true);
		func_7();
	}
}

void func_7()
{
	if (func_2())
	{
		_MOVE_FINGER(5);
	}
}

void func_8()
{
	iLocal_100 = 1;
	Global_21843 = 1;
	CLEAR_FLOATING_HELP(0, 1);
}

int func_9()
{
	if (iLocal_58 == iLocal_59)
	{
		if (iLocal_56)
		{
			iLocal_56 = 1;
		}
	}
	if (Global_19486.f_1 < 4)
	{
		return 0;
	}
	if (iLocal_60 == iLocal_61 || iLocal_60 > iLocal_61)
	{
		iLocal_105 = 1;
		iLocal_102 = 2;
		return 0;
	}
	return 1;
}

void func_10()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (_IS_INPUT_DISABLED(2))
	{
		iVar0 = 179;
		iVar1 = 21;
	}
	else
	{
		iVar0 = 228;
		iVar1 = 229;
	}
	if (iLocal_82)
	{
		func_74();
		func_70();
		func_69();
		fLocal_36 = GET_GAMEPLAY_CAM_RELATIVE_PITCH();
		fLocal_37 = GET_GAMEPLAY_CAM_RELATIVE_HEADING();
		if (iLocal_84 == 0)
		{
			if (IS_CONTROL_PRESSED(2, iVar0) && !IS_CONTROL_PRESSED(2, iVar1))
			{
				iLocal_84 = 1;
				func_149(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_149(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (IS_BIT_SET(Global_7356, 28))
				{
					func_67(iLocal_92, "SET_DATA_SLOT", 0f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
					func_67(iLocal_92, "SET_DATA_SLOT", 1f, GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, true), func_65());
					func_67(iLocal_92, "SET_DATA_SLOT", 2f, GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 178, true), "CELL_CAM_SELFIE_2");
				}
				else
				{
					func_67(iLocal_92, "SET_DATA_SLOT", 0f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_280");
					func_67(iLocal_92, "SET_DATA_SLOT", 1f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
					func_67(iLocal_92, "SET_DATA_SLOT", 2f, GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 178, true), "CELL_CAM_SELFIE_2");
				}
				func_64();
				BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_MAX_WIDTH");
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fLocal_40);
				END_SCALEFORM_MOVIE_METHOD();
				func_149(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!IS_CONTROL_PRESSED(2, iVar0) || IS_CONTROL_PRESSED(2, iVar1))
		{
			iLocal_84 = 0;
			func_115();
		}
		if (iLocal_85 == 0)
		{
			if (IS_CONTROL_PRESSED(2, iVar1) && !IS_CONTROL_PRESSED(2, iVar0))
			{
				iLocal_85 = 1;
				func_149(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_149(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (IS_BIT_SET(Global_7356, 28))
				{
					func_67(iLocal_92, "SET_DATA_SLOT", 0f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
					func_67(iLocal_92, "SET_DATA_SLOT", 1f, GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, true), func_65());
				}
				else if (!func_145())
				{
					func_67(iLocal_92, "SET_DATA_SLOT", 0f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_280");
					func_67(iLocal_92, "SET_DATA_SLOT", 1f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
				}
				else
				{
					func_67(iLocal_92, "SET_DATA_SLOT", 2f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_280");
					func_67(iLocal_92, "SET_DATA_SLOT", 3f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
				}
				func_63();
				BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_MAX_WIDTH");
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fLocal_40);
				END_SCALEFORM_MOVIE_METHOD();
				func_149(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!IS_CONTROL_PRESSED(2, iVar1) || IS_CONTROL_PRESSED(2, iVar0))
		{
			iLocal_85 = 0;
			func_115();
		}
	}
	else
	{
		ENABLE_CONTROL_ACTION(0, 2, 1);
		ENABLE_CONTROL_ACTION(0, 1, 1);
	}
	if (_0x6CD79468A1E595C6(2))
	{
		func_115();
	}
	func_130();
	if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
	{
		SET_PED_RESET_FLAG(SET_PED_RESET_FLAG(), 200, true);
	}
	if (func_145())
	{
		if (!IS_BIT_SET(Global_4269615, 2))
		{
			SET_BIT(&Global_4269615, 2);
			func_149(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	if ((IS_CONTROL_JUST_PRESSED(2, 183) && iLocal_106 == 0) && !func_145())
	{
		PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, true);
		if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
		{
			if (!GET_PED_PARACHUTE_STATE(GET_PED_PARACHUTE_STATE()) == 2)
			{
				if (IS_BIT_SET(Global_4269615, 2))
				{
					CLEAR_BIT(&Global_4269615, 2);
					if (!IS_BIT_SET(Global_4269615, 2))
					{
						func_149(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					SET_BIT(&Global_4269615, 2);
					func_149(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
		}
	}
	if (iLocal_82)
	{
		if (iLocal_83 == 1)
		{
			iLocal_83 = 0;
			BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_91, "SET_FOCUS_LOCK");
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(false);
			func_62("CELL_FOCUS");
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(true);
			END_SCALEFORM_MOVIE_METHOD();
		}
		if (!func_61(14))
		{
			if (IS_BIT_SET(Global_4269615, 10))
			{
				if ((Global_76577 == 0 && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("pi_menu")) > 0) && func_60())
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_91, "SET_FOCUS_LOCK");
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(true);
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_ACTTL");
					ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4270600));
					END_TEXT_COMMAND_SCALEFORM_STRING();
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(false);
					END_SCALEFORM_MOVIE_METHOD();
					CLEAR_BIT(&Global_4269615, 10);
				}
			}
		}
		else if (IS_BIT_SET(Global_4269615, 10))
		{
			CLEAR_BIT(&Global_4269615, 10);
		}
		iLocal_33 = GET_GAME_TIMER();
		if ((iLocal_33 - iLocal_32) > 1500)
		{
			if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
			{
				vLocal_35 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true) };
				if (GET_DISTANCE_BETWEEN_COORDS(vLocal_35, vLocal_34, true) > 5f)
				{
					Global_19486.f_1 = 3;
					SET_GAME_PAUSED(false);
				}
				iLocal_32 = GET_GAME_TIMER();
			}
		}
	}
	else if (iLocal_83)
	{
		if (!IS_CONTROL_PRESSED(0, 182) && !func_145())
		{
			PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, true);
			iLocal_83 = 0;
			BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_91, "SET_FOCUS_LOCK");
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(false);
			func_62("CELL_FOCUS");
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(true);
			END_SCALEFORM_MOVIE_METHOD();
		}
	}
	else if (IS_CONTROL_PRESSED(0, 182) && !func_145())
	{
		PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, true);
		iLocal_83 = 1;
		if (!func_61(14))
		{
			BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_91, "SET_FOCUS_LOCK");
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(true);
			func_62("CELL_FOCUS");
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(true);
			END_SCALEFORM_MOVIE_METHOD();
		}
	}
	if (func_158())
	{
		if ((IS_CONTROL_JUST_PRESSED(2, 186) && iLocal_106 == 0) && !func_145())
		{
			if (iLocal_82)
			{
				iLocal_24++;
				if (iLocal_24 > 0 && iLocal_24 < 7)
				{
					if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
					{
						PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, true);
						SET_FACIAL_IDLE_ANIM_OVERRIDE(SET_FACIAL_IDLE_ANIM_OVERRIDE(), "Mood_Normal_1", 0);
						CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(CLEAR_FACIAL_IDLE_ANIM_OVERRIDE());
						if (Global_19486 == 0)
						{
							iVar4 = 0;
							iVar2 = GET_PED_PROP_INDEX(GET_PED_PROP_INDEX(), 0);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = GET_PED_PROP_INDEX(GET_PED_PROP_INDEX(), 1);
							if (iVar3 != -1)
							{
								iVar4 = 1;
							}
							if (iVar4 == 1)
							{
								if ((((iLocal_24 == 2 || iLocal_24 == 3) || iLocal_24 == 4) || iLocal_24 == 8) || iLocal_24 == 9)
								{
									if (iVar2 == -1 && iVar3 > -1)
									{
										if (iLocal_24 == 3)
										{
											SET_FACIAL_IDLE_ANIM_OVERRIDE(SET_FACIAL_IDLE_ANIM_OVERRIDE(), sLocal_22[iLocal_24], 0);
										}
									}
								}
								else
								{
									SET_FACIAL_IDLE_ANIM_OVERRIDE(SET_FACIAL_IDLE_ANIM_OVERRIDE(), sLocal_22[iLocal_24], 0);
								}
							}
							else
							{
								SET_FACIAL_IDLE_ANIM_OVERRIDE(SET_FACIAL_IDLE_ANIM_OVERRIDE(), sLocal_22[iLocal_24], 0);
							}
						}
						else
						{
							SET_FACIAL_IDLE_ANIM_OVERRIDE(SET_FACIAL_IDLE_ANIM_OVERRIDE(), sLocal_22[iLocal_24], 0);
						}
					}
				}
				if (iLocal_24 == 7 || iLocal_24 > 7)
				{
					iLocal_24 = 0;
				}
				if (iLocal_24 == 0)
				{
					if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
					{
						SET_FACIAL_IDLE_ANIM_OVERRIDE(SET_FACIAL_IDLE_ANIM_OVERRIDE(), "Mood_Normal_1", 0);
						CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(CLEAR_FACIAL_IDLE_ANIM_OVERRIDE());
						PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, true);
					}
				}
			}
		}
		if ((IS_CONTROL_JUST_PRESSED(2, 185) && iLocal_106 == 0) && !func_145())
		{
			if (iLocal_82)
			{
				if (bLocal_29 == 1)
				{
					PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, true);
					if (iLocal_28 == 0)
					{
						iLocal_28 = 1;
						iLocal_27 = 1;
						if (ARE_STRINGS_EQUAL(sLocal_19[Global_4268339], "phone_cam12DUMMY"))
						{
						}
						else
						{
							_0xA2CCBE62CD4C91A4(1);
							0x375A706A5C2FD084(1);
						}
					}
					else
					{
						iLocal_28 = 0;
						iLocal_27 = 0;
						_0xA2CCBE62CD4C91A4(0);
						0x375A706A5C2FD084(0);
					}
				}
			}
			else if (bLocal_30 == 1)
			{
				if (iLocal_27 == 0)
				{
					iLocal_27 = 1;
					iLocal_28 = 1;
					_0xA2CCBE62CD4C91A4(1);
					0x375A706A5C2FD084(1);
				}
				else
				{
					iLocal_27 = 0;
					iLocal_28 = 0;
					_0xA2CCBE62CD4C91A4(0);
					0x375A706A5C2FD084(0);
				}
			}
		}
	}
	if (iLocal_26 == 1 && !func_145())
	{
		if (IS_CONTROL_JUST_PRESSED(0, 172) && iLocal_106 == 0)
		{
			if (func_158())
			{
				Global_4268340++;
				PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, true);
			}
			if (Global_4268340 == 13)
			{
				func_112(0);
				_0x1B0B4AEED5B9B41C(1f);
				SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_20[(Global_4268340 - 1)]);
				Global_4268340 = 0;
				func_59();
				if (iLocal_21 == 1)
				{
					CLEAR_BIT(&Global_4269615, 2);
					iLocal_21 = 0;
					func_149(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			if (Global_4268340 > 0 && Global_4268340 < 13)
			{
				iLocal_26 = 0;
				iLocal_25 = 0;
				REQUEST_STREAMED_TEXTURE_DICT(sLocal_20[Global_4268340], false);
			}
		}
	}
	if (Global_4268340 > 0)
	{
		if (iLocal_26 == 0)
		{
			if (HAS_STREAMED_TEXTURE_DICT_LOADED(sLocal_20[Global_4268340]))
			{
				iLocal_25 = 1;
				iLocal_26 = 1;
				if (!_0xBCEDB009461DA156())
				{
					func_112(1);
				}
				if (iLocal_21 == 0)
				{
					if (!IS_BIT_SET(Global_4269615, 2))
					{
						iLocal_21 = 1;
					}
				}
				SET_BIT(&Global_4269615, 2);
				func_149(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				_0x1B0B4AEED5B9B41C(0.25f);
				_0x27FEB5254759CDE3(sLocal_20[Global_4268340], 0);
			}
		}
		if (iLocal_25 == 1)
		{
			if (Global_4268340 == 1 || Global_4268340 == 3)
			{
			}
			if (Global_4268340 == 2 || Global_4268340 == 4)
			{
			}
		}
	}
	if ((IS_CONTROL_JUST_PRESSED(0, 173) && iLocal_106 == 0) && !func_145())
	{
		if (func_158())
		{
			func_103(0);
			Global_4268339++;
			PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, true);
		}
		if (Global_4268339 == 13)
		{
			Global_4268339 = 0;
		}
		if (Global_4268339 == 0)
		{
			if (func_158())
			{
				func_103(0);
			}
		}
		else
		{
			func_113();
		}
		func_58();
	}
	if ((IS_DISABLED_CONTROL_JUST_PRESSED(0, 184) && iLocal_106 == 0) && !func_145())
	{
		if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
		{
			if (!IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0) && !IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE()) == 2)
			{
				vLocal_34 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true) };
				PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, true);
				func_149(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_148(iLocal_91, "CLOSE_SHUTTER");
				iLocal_86 = GET_GAME_TIMER();
				while (GET_GAME_TIMER() < (iLocal_86 + iLocal_90) && Global_19486.f_1 > 3)
				{
					func_143();
					func_125();
					func_83();
					_0xEB2D525B57F42B40();
					wait(0);
				}
				if (iLocal_82 == 0)
				{
					STOP_SOUND(iLocal_63);
					iLocal_82 = 1;
					func_57(1);
					func_56();
					SET_BIT(&Global_7358, 3);
					iLocal_32 = GET_GAME_TIMER();
				}
				else
				{
					iLocal_84 = 0;
					iLocal_85 = 0;
					func_57(0);
					iLocal_82 = 0;
					CLEAR_BIT(&Global_7358, 3);
				}
				iLocal_86 = GET_GAME_TIMER();
				while (GET_GAME_TIMER() < (iLocal_86 + iLocal_88) && Global_19486.f_1 > 3)
				{
					func_143();
					func_125();
					func_83();
					_0xEB2D525B57F42B40();
					wait(0);
				}
				func_148(iLocal_91, "OPEN_SHUTTER");
				if (func_158())
				{
					if (Global_4268340 == 0)
					{
						if (!IS_BIT_SET(Global_4269615, 2))
						{
							func_149(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (!IS_BIT_SET(Global_4269615, 2))
				{
					func_149(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_125();
				func_143();
				if (IS_BIT_SET(Global_7356, 28))
				{
					StringCopy(&cLocal_96, "CELL_296", 16);
					func_54();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_295", 16);
					func_28();
				}
			}
		}
	}
	if (iLocal_82 == 0)
	{
		if (iLocal_64 == 0)
		{
			if (IS_CONTROL_JUST_PRESSED(0, 40) || IS_CONTROL_JUST_PRESSED(0, 41))
			{
				fLocal_65 = _GET_GAMEPLAY_CAM_ZOOM();
				if (fLocal_65 > 1f && fLocal_65 < 4.5f)
				{
					if (HAS_SOUND_FINISHED(iLocal_63))
					{
						PLAY_SOUND_FRONTEND(iLocal_63, "Camera_Zoom", &Global_19475, true);
					}
				}
				else
				{
					STOP_SOUND(iLocal_63);
				}
				iLocal_64 = 1;
			}
		}
		else if (IS_CONTROL_PRESSED(0, 40) || IS_CONTROL_PRESSED(0, 41))
		{
			fLocal_65 = _GET_GAMEPLAY_CAM_ZOOM();
			if (fLocal_65 > 1f && fLocal_65 < 4.5f)
			{
				if (HAS_SOUND_FINISHED(iLocal_63))
				{
					PLAY_SOUND_FRONTEND(iLocal_63, "Camera_Zoom", &Global_19475, true);
				}
			}
			else
			{
				STOP_SOUND(iLocal_63);
			}
		}
		else
		{
			STOP_SOUND(iLocal_63);
		}
	}
	if ((func_98(2, Global_19455, 0) && !func_110()) && !func_98(2, Global_19454, 0))
	{
		fLocal_38 = GET_GAMEPLAY_CAM_RELATIVE_PITCH();
		fLocal_39 = GET_GAMEPLAY_CAM_RELATIVE_HEADING();
		_0x1072F115DAB0717E(0, 0);
		SET_BIT(&Global_7356, 21);
		STOP_SOUND(iLocal_63);
		iLocal_78 = 1;
		func_149(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_149(iLocal_91, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		PLAY_SOUND_FRONTEND(-1, "Camera_Shoot", &Global_19475, true);
		func_148(iLocal_91, "CLOSE_SHUTTER");
		vLocal_43 = { -90.3f, 0f, 90f };
		SET_MOBILE_PHONE_ROTATION(vLocal_43, 0);
		if (!func_158())
		{
			func_103(1);
		}
		Global_21841 = 1;
		CLEAR_FLOATING_HELP(0, 1);
		while (Global_21840 < 6 && Global_19486.f_1 > 3)
		{
			func_143();
			func_125();
			func_83();
			func_130();
			_0xEB2D525B57F42B40();
			wait(0);
		}
		CELL_CAM_ACTIVATE(0, 0);
		if (Global_19428)
		{
			func_1(1);
		}
		iLocal_86 = GET_GAME_TIMER();
		while (GET_GAME_TIMER() < (iLocal_86 + iLocal_89) && Global_19486.f_1 > 3)
		{
			func_143();
			func_125();
			func_83();
			_0xEB2D525B57F42B40();
			wait(0);
		}
		settimera(0);
		func_148(iLocal_91, "OPEN_SHUTTER");
		CLEAR_BIT(&Global_7356, 21);
		func_115();
		if (Global_19486.f_1 > 3)
		{
			if (Global_76577)
			{
				func_21(1086, 1, -1);
				func_20();
				func_17(-1492367786, 23, 0);
			}
			else
			{
				switch (func_11())
				{
					case 0:
						STAT_INCREMENT(joaat("sp0_no_photos_taken"), 1f);
						break;
					
					case 1:
						STAT_INCREMENT(joaat("sp1_no_photos_taken"), 1f);
						break;
					
					case 2:
						STAT_INCREMENT(joaat("sp2_no_photos_taken"), 1f);
						break;
				}
				func_20();
			}
			func_112(0);
		}
		func_125();
	}
	if (IS_BIT_SET(Global_7356, 28))
	{
		if (func_98(2, Global_19458, 0))
		{
			_0x1072F115DAB0717E(0, 0);
			wait(0);
			_0xEB2D525B57F42B40();
			func_143();
			wait(0);
			_0xEB2D525B57F42B40();
			func_143();
			_0xD801CC02177FA3F1();
			_0x6A12D88881435DCA();
			Global_21842 = 1;
			iLocal_94 = 0;
			iLocal_77 = 1;
			Global_21838 = 1;
			CLEAR_FLOATING_HELP(0, 1);
			iLocal_79 = 0;
			iLocal_69 = 1;
			iLocal_70 = 1;
			iLocal_71 = 1;
			iLocal_72 = 1;
			iLocal_73 = 1;
			iLocal_74 = 1;
			func_6();
			iLocal_78 = 0;
			if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
			{
				vLocal_34 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true) };
			}
			func_108(0, 0);
			func_112(0);
			iLocal_66 = 0;
			func_103(1);
			if (!Global_2531497.f_6251)
			{
				SET_BIT(&Global_7356, 9);
			}
			SET_GAME_PAUSED(false);
			iLocal_93 = 0;
			func_149(Global_19467, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

int func_11()
{
	func_12();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_12()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()))
	{
		if (func_15(Global_111560.f_2358.f_539.f_4321) != GET_ENTITY_MODEL(GET_ENTITY_MODEL()))
		{
			iVar0 = func_14(PLAYER_PED_ID());
			if (func_13(iVar0) && (!func_61(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_13(Global_111560.f_2358.f_539.f_4321))
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

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)
{
	if (func_13(iParam0))
	{
		return func_16(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_16(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_17(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_19(iParam1, iParam2))
	{
		iVar0 = func_18();
		Global_2458876[iVar0] = iParam1;
		Global_2458887[iVar0] = iParam0;
	}
}

int func_18()
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

int func_19(int iParam0, var uParam1)
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

void func_20()
{
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 1;
	iLocal_76 = 0;
	Global_19423 = { Global_19439[Global_19431 /*3*/] };
	func_101(0, 1);
	func_108(0, 0);
	func_112(0);
	iLocal_66 = 0;
	func_103(1);
	if (!IS_BIT_SET(Global_7357, 28))
	{
		if (_0x76BF03FADBF154F5() == 0)
		{
			if (IS_XBOX360_VERSION())
			{
				if (iLocal_68 == 0)
				{
					iLocal_68 = 1;
				}
			}
		}
	}
}

void func_21(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_25(iParam0, func_26(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_24(iParam0))
	{
		func_23(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_22(iParam0, iVar0, iParam2, 1);
	}
}

void func_22(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2542527[iParam0 /*3*/][func_26(uParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1384207[func_26(uParam2)] = iParam1;
			break;
		
		case 788:
			Global_1384213[func_26(uParam2)] = iParam1;
			break;
		
		case 789:
			Global_1384219[func_26(uParam2)] = iParam1;
			break;
		
		case 790:
			Global_1384225[func_26(uParam2)] = iParam1;
			break;
		
		case 777:
			Global_1384177[func_26(uParam2)] = iParam1;
			break;
		
		case 778:
			Global_1384183[func_26(uParam2)] = iParam1;
			break;
		
		case 779:
			Global_1384189[func_26(uParam2)] = iParam1;
			break;
		
		case 780:
			Global_1384195[func_26(uParam2)] = iParam1;
			break;
		
		case 767:
			Global_1384147[func_26(uParam2)] = iParam1;
			break;
		
		case 768:
			Global_1384153[func_26(uParam2)] = iParam1;
			break;
		
		case 769:
			Global_1384159[func_26(uParam2)] = iParam1;
			break;
		
		case 770:
			Global_1384165[func_26(uParam2)] = iParam1;
			break;
		
		case 757:
			Global_1384237[func_26(uParam2)] = iParam1;
			break;
		
		case 758:
			Global_1384243[func_26(uParam2)] = iParam1;
			break;
		
		case 759:
			Global_1384249[func_26(uParam2)] = iParam1;
			break;
		
		case 760:
			Global_1384255[func_26(uParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1384267[func_26(uParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1384273[func_26(uParam2)] = iParam1;
			break;
		
		case 639:
			Global_1384279[func_26(uParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1384285[func_26(uParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2578592[0 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2578592[1 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2578592[2 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2578592[3 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 9509:
			Global_2578729[func_26(uParam2)] = iParam1;
			break;
		
		case 764:
			Global_1384291[func_26(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_1384297[func_26(uParam2)] = iParam1;
			break;
		
		case 766:
			Global_1384303[func_26(uParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1384315[func_26(uParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2578659[0 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2578659[1 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2578659[2 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2578659[3 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2578659[4 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2578732[0 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2578732[1 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2578732[2 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2578732[3 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2578732[4 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2578748[0 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2578748[1 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2578748[2 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2578748[3 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2578748[4 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2578659[5 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2578592[4 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2578764[func_26(uParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2578773[func_26(uParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2578767[func_26(uParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2578776[func_26(uParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2578770[func_26(uParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2578779[func_26(uParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2578782[func_26(uParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2578659[6 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2578592[5 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2578659[7 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2578592[6 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2578659[8 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2578592[7 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2578659[9 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2578592[8 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2578659[10 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2578592[9 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2578659[11 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2578592[10 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2578659[12 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2578592[11 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2578659[13 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2578592[12 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2578659[14 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2578592[13 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2578659[15 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2578592[14 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2578659[16 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2578592[15 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2578659[17 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2578592[16 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2578592[17 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2578592[18 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2578592[19 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2578592[20 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2578785[func_26(uParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2578788[func_26(uParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2578791[func_26(uParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2578794[func_26(uParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2578797[func_26(uParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2578800[func_26(uParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2578803[func_26(uParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2578806[func_26(uParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2578809[func_26(uParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2578812[func_26(uParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2578815[func_26(uParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2578818[func_26(uParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2578821[func_26(uParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2578824[func_26(uParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2578592[21 /*3*/][func_26(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_23(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_26(uParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_24(int iParam0)
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

int func_25(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_26(uParam1)];
	if (STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_26(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
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

var func_27()
{
	return Global_1312745;
}

void func_28()
{
	if (iLocal_106 == 1)
	{
		func_53();
		return;
	}
	if (iLocal_84 == 0 && iLocal_85 == 0)
	{
		func_149(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_149(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		if (!func_145())
		{
			func_67(iLocal_92, "SET_DATA_SLOT", 1f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
			func_67(iLocal_92, "SET_DATA_SLOT", 0f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_280");
		}
		else
		{
			func_67(iLocal_92, "SET_DATA_SLOT", 3f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
			func_67(iLocal_92, "SET_DATA_SLOT", 2f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_280");
		}
		if (iLocal_82)
		{
			if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
			{
				if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0) || IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE()) == 2)
				{
					if (_IS_INPUT_DISABLED(2) || _IS_INPUT_DISABLED())
					{
						func_67(iLocal_92, "SET_DATA_SLOT", 2f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_67(iLocal_92, "SET_DATA_SLOT", 2f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
					}
				}
				else if ((Global_76577 == 0 && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("pi_menu")) > 0) && func_60())
				{
					func_51();
				}
				else
				{
					if (_IS_INPUT_DISABLED(2) || _IS_INPUT_DISABLED())
					{
						func_67(iLocal_92, "SET_DATA_SLOT", 2f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_67(iLocal_92, "SET_DATA_SLOT", 2f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
					}
					func_67(iLocal_92, "SET_DATA_SLOT", 3f, GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, true), "CELL_GRID");
					func_67(iLocal_92, "SET_DATA_SLOT", 4f, _0x80C2FD58D720C801(0, 1, true), "CELL_285");
					if (func_158())
					{
						func_50(5f);
						func_49(6f);
						if (func_30(1))
						{
							func_29(7f);
							if (bLocal_29)
							{
								func_67(iLocal_92, "SET_DATA_SLOT", 8f, GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
							}
						}
						else if (bLocal_29)
						{
							func_67(iLocal_92, "SET_DATA_SLOT", 7f, GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
		{
			if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0) || IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE()) == 2)
			{
				if (!GET_PED_PARACHUTE_STATE(GET_PED_PARACHUTE_STATE()) == 2)
				{
					if (!func_145())
					{
						func_67(iLocal_92, "SET_DATA_SLOT", 2f, _0x80C2FD58D720C801(0, 1, true), "CELL_285");
						func_67(iLocal_92, "SET_DATA_SLOT", 3f, GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, true), "CELL_GRID");
						func_67(iLocal_92, "SET_DATA_SLOT", 4f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, true), "CELL_284");
					}
					else
					{
						func_67(iLocal_92, "SET_DATA_SLOT", 0f, _0x80C2FD58D720C801(0, 1, true), "CELL_285");
						if (!_IS_INPUT_DISABLED(0))
						{
							func_67(iLocal_92, "SET_DATA_SLOT", 1f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 210, true), "CELL_284");
						}
						else
						{
							func_67(iLocal_92, "SET_DATA_SLOT", 1f, _0x80C2FD58D720C801(0, 29, true), "CELL_284");
						}
					}
					if (!func_145())
					{
						if (func_158())
						{
							func_50(6f);
							func_49(7f);
							if (bLocal_30)
							{
								func_67(iLocal_92, "SET_DATA_SLOT", 3f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 182, true), "CELL_FOCUS");
							}
							func_67(iLocal_92, "SET_DATA_SLOT", 8f, GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_67(iLocal_92, "SET_DATA_SLOT", 2f, _0x80C2FD58D720C801(0, 1, true), "CELL_285");
					if (func_158())
					{
						func_50(3f);
						func_49(4f);
						func_67(iLocal_92, "SET_DATA_SLOT", 8f, GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
					}
				}
			}
			else
			{
				if (!func_145())
				{
					if (_IS_INPUT_DISABLED(2) || _IS_INPUT_DISABLED())
					{
						func_67(iLocal_92, "SET_DATA_SLOT", 2f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_1NP_XB");
					}
					else
					{
						func_67(iLocal_92, "SET_DATA_SLOT", 2f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_1NP_XB");
					}
				}
				if (!GET_PED_PARACHUTE_STATE(GET_PED_PARACHUTE_STATE()) == 2)
				{
					if (!func_145())
					{
						func_67(iLocal_92, "SET_DATA_SLOT", 4f, GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, true), "CELL_GRID");
						func_67(iLocal_92, "SET_DATA_SLOT", 5f, _0x80C2FD58D720C801(0, 1, true), "CELL_285");
					}
					else
					{
						func_67(iLocal_92, "SET_DATA_SLOT", 0f, _0x80C2FD58D720C801(0, 1, true), "CELL_285");
						if (!_IS_INPUT_DISABLED(0))
						{
							func_67(iLocal_92, "SET_DATA_SLOT", 1f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 210, true), "CELL_284");
						}
						else
						{
							func_67(iLocal_92, "SET_DATA_SLOT", 1f, _0x80C2FD58D720C801(0, 29, true), "CELL_284");
						}
					}
					if (!func_145())
					{
						func_67(iLocal_92, "SET_DATA_SLOT", 6f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, true), "CELL_284");
					}
					if (!func_145())
					{
						if (func_158())
						{
							func_50(7f);
							func_49(8f);
							if (bLocal_30)
							{
								func_67(iLocal_92, "SET_DATA_SLOT", 3f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 182, true), "CELL_FOCUS");
							}
							func_67(iLocal_92, "SET_DATA_SLOT", 9f, GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_67(iLocal_92, "SET_DATA_SLOT", 2f, _0x80C2FD58D720C801(0, 1, true), "CELL_285");
					if (func_158())
					{
						func_50(3f);
						func_49(4f);
						func_67(iLocal_92, "SET_DATA_SLOT", 5f, GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
					}
				}
			}
		}
		BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_MAX_WIDTH");
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fLocal_40);
		END_SCALEFORM_MOVIE_METHOD();
		func_149(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_29(float fParam0)
{
	func_67(iLocal_92, "SET_DATA_SLOT", fParam0, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 174, true), "CELL_ACTION");
}

int func_30(int iParam0)
{
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_48(Global_4194378, Global_4194379))
		{
			if (iParam0 == 0 || !func_31(Global_4194378, Global_4194379, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_31(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	return func_32(PLAYER_PED_ID(), iParam0, iParam1, bParam2, bParam3, bParam4);
}

int func_32(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (func_47())
	{
		return 0;
	}
	uVar0 = 5;
	uVar1 = 5;
	uVar2 = 6;
	if (iParam1 == 0)
	{
		iVar6 = 3;
	}
	else if (bParam3)
	{
		iVar6 = 1;
	}
	else if (bParam4)
	{
		iVar6 = 2;
	}
	else
	{
		iVar6 = 0;
	}
	func_40(iParam1, iParam2, &uVar0, &uVar1, &uVar2, iVar6, bParam5);
	if (!IS_ENTITY_DEAD(iParam0, 0))
	{
		if (GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar3 = func_39(iParam0);
			if (!iVar3 == -1)
			{
				if (func_38(&uVar0, iVar3))
				{
					return 1;
				}
			}
		}
		else
		{
			iVar4 = func_37(iParam0);
			if (!iVar4 == -1)
			{
				if (func_35(&uVar1, iVar4))
				{
					return 1;
				}
			}
		}
		if (NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar5 = func_34(iParam0);
			if (!iVar5 == 0)
			{
				if (func_33(&uVar2, iVar5))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_33(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = floor((to_float(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (IS_BIT_SET((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

int func_34(int iParam0)
{
	int iVar0;
	
	iVar0 = GET_PED_DRAWABLE_VARIATION(iParam0, 1);
	return iVar0;
}

bool func_35(var uParam0, int iParam1)
{
	return func_36(uParam0, iParam1);
}

int func_36(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = floor((to_float(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (IS_BIT_SET((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

int func_37(int iParam0)
{
	int iVar0;
	
	iVar0 = GET_PED_PROP_INDEX(iParam0, 0);
	return iVar0;
}

bool func_38(var uParam0, int iParam1)
{
	return func_36(uParam0, iParam1);
}

int func_39(int iParam0)
{
	int iVar0;
	
	iVar0 = GET_PED_PROP_INDEX(iParam0, 0);
	return iVar0;
}

void func_40(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_46(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
		case 0:
			func_45(iParam0, iParam1, uParam2, uParam3, uParam4, iParam5, bParam6);
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 13, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 1:
							func_44(uParam3, 4, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 2:
							func_44(uParam3, 13, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 39, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 38, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
					}
					break;
				
				case 5:
				case 24:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 62, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_46(uParam4, 136, 1);
							func_46(uParam4, 138, 1);
							func_46(uParam4, 139, 1);
							func_46(uParam4, 143, 1);
							func_46(uParam4, 144, 1);
							func_46(uParam4, 145, 1);
							func_46(uParam4, 147, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 1:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 2:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_46(uParam4, 136, 1);
							func_46(uParam4, 138, 1);
							func_46(uParam4, 139, 1);
							func_46(uParam4, 143, 1);
							func_46(uParam4, 144, 1);
							func_46(uParam4, 145, 1);
							func_46(uParam4, 147, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
					}
					break;
				
				case 52:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 66, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 77, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 53:
					func_44(uParam3, 67, 1);
					func_44(uParam3, 68, 1);
					func_44(uParam3, 69, 1);
					func_44(uParam3, 70, 1);
					func_44(uParam3, 71, 1);
					func_44(uParam3, 72, 1);
					func_44(uParam3, 73, 1);
					func_44(uParam3, 74, 1);
					func_44(uParam3, 78, 1);
					func_44(uParam3, 79, 1);
					func_44(uParam3, 80, 1);
					func_44(uParam3, 81, 1);
					func_44(uParam3, 82, 1);
					func_44(uParam3, 91, 1);
					func_44(uParam3, 92, 1);
					func_42(uParam2, 66, 1);
					func_42(uParam2, 67, 1);
					func_42(uParam2, 68, 1);
					func_42(uParam2, 69, 1);
					func_42(uParam2, 70, 1);
					func_42(uParam2, 71, 1);
					func_42(uParam2, 72, 1);
					func_42(uParam2, 73, 1);
					func_42(uParam2, 77, 1);
					func_42(uParam2, 78, 1);
					func_42(uParam2, 79, 1);
					func_42(uParam2, 80, 1);
					func_42(uParam2, 81, 1);
					func_42(uParam2, 90, 1);
					func_42(uParam2, 91, 1);
					func_44(uParam3, 38, 1);
					func_44(uParam3, 47, 1);
					func_44(uParam3, 111, 1);
					func_42(uParam2, 37, 1);
					func_42(uParam2, 46, 1);
					func_42(uParam2, 110, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_41(uParam2, uParam3, uParam4);
					break;
				
				case 54:
					func_44(uParam3, 67, 1);
					func_44(uParam3, 68, 1);
					func_44(uParam3, 69, 1);
					func_44(uParam3, 70, 1);
					func_44(uParam3, 71, 1);
					func_44(uParam3, 72, 1);
					func_44(uParam3, 73, 1);
					func_44(uParam3, 74, 1);
					func_44(uParam3, 78, 1);
					func_44(uParam3, 79, 1);
					func_44(uParam3, 80, 1);
					func_44(uParam3, 81, 1);
					func_44(uParam3, 82, 1);
					func_44(uParam3, 91, 1);
					func_44(uParam3, 92, 1);
					func_42(uParam2, 66, 1);
					func_42(uParam2, 67, 1);
					func_42(uParam2, 68, 1);
					func_42(uParam2, 69, 1);
					func_42(uParam2, 70, 1);
					func_42(uParam2, 71, 1);
					func_42(uParam2, 72, 1);
					func_42(uParam2, 73, 1);
					func_42(uParam2, 77, 1);
					func_42(uParam2, 78, 1);
					func_42(uParam2, 79, 1);
					func_42(uParam2, 80, 1);
					func_42(uParam2, 81, 1);
					func_42(uParam2, 90, 1);
					func_42(uParam2, 91, 1);
					func_44(uParam3, 38, 1);
					func_44(uParam3, 47, 1);
					func_44(uParam3, 111, 1);
					func_42(uParam2, 37, 1);
					func_42(uParam2, 46, 1);
					func_42(uParam2, 110, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_41(uParam2, uParam3, uParam4);
					break;
				
				case 55:
					func_44(uParam3, 67, 1);
					func_44(uParam3, 68, 1);
					func_44(uParam3, 69, 1);
					func_44(uParam3, 70, 1);
					func_44(uParam3, 71, 1);
					func_44(uParam3, 72, 1);
					func_44(uParam3, 73, 1);
					func_44(uParam3, 74, 1);
					func_44(uParam3, 78, 1);
					func_44(uParam3, 79, 1);
					func_44(uParam3, 80, 1);
					func_44(uParam3, 81, 1);
					func_44(uParam3, 82, 1);
					func_44(uParam3, 91, 1);
					func_44(uParam3, 92, 1);
					func_42(uParam2, 66, 1);
					func_42(uParam2, 67, 1);
					func_42(uParam2, 68, 1);
					func_42(uParam2, 69, 1);
					func_42(uParam2, 70, 1);
					func_42(uParam2, 71, 1);
					func_42(uParam2, 72, 1);
					func_42(uParam2, 73, 1);
					func_42(uParam2, 77, 1);
					func_42(uParam2, 78, 1);
					func_42(uParam2, 79, 1);
					func_42(uParam2, 80, 1);
					func_42(uParam2, 81, 1);
					func_42(uParam2, 90, 1);
					func_42(uParam2, 91, 1);
					func_44(uParam3, 38, 1);
					func_44(uParam3, 47, 1);
					func_44(uParam3, 111, 1);
					func_42(uParam2, 37, 1);
					func_42(uParam2, 46, 1);
					func_42(uParam2, 110, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_41(uParam2, uParam3, uParam4);
					break;
				
				case 56:
				case 57:
				case 58:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 10:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 3, 1);
							func_44(uParam3, 4, 1);
							func_44(uParam3, 6, 1);
							func_44(uParam3, 10, 1);
							func_44(uParam3, 54, 1);
							func_44(uParam3, 55, 1);
							func_44(uParam3, 56, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 20, 1);
							func_44(uParam3, 26, 1);
							func_44(uParam3, 27, 1);
							func_44(uParam3, 32, 1);
							func_44(uParam3, 33, 1);
							func_44(uParam3, 37, 1);
							func_44(uParam3, 39, 1);
							func_44(uParam3, 55, 1);
							func_44(uParam3, 106, 1);
							func_44(uParam3, 114, 1);
							func_44(uParam3, 116, 1);
							func_44(uParam3, 117, 1);
							func_44(uParam3, 118, 1);
							func_44(uParam3, 119, 1);
							func_42(uParam2, 3, 1);
							func_42(uParam2, 4, 1);
							func_42(uParam2, 6, 1);
							func_42(uParam2, 8, 1);
							func_42(uParam2, 9, 1);
							func_42(uParam2, 10, 1);
							func_42(uParam2, 53, 1);
							func_42(uParam2, 56, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 13, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 21, 1);
							func_42(uParam2, 26, 1);
							func_42(uParam2, 27, 1);
							func_42(uParam2, 28, 1);
							func_42(uParam2, 32, 1);
							func_42(uParam2, 36, 1);
							func_42(uParam2, 38, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 14, 1);
							func_42(uParam2, 105, 1);
							func_42(uParam2, 113, 1);
							func_42(uParam2, 114, 1);
							func_42(uParam2, 115, 1);
							func_42(uParam2, 116, 1);
							func_42(uParam2, 117, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_44(uParam3, 3, 1);
							func_44(uParam3, 4, 1);
							func_44(uParam3, 6, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 19, 1);
							func_44(uParam3, 20, 1);
							func_44(uParam3, 26, 1);
							func_44(uParam3, 27, 1);
							func_44(uParam3, 32, 1);
							func_44(uParam3, 33, 1);
							func_44(uParam3, 37, 1);
							func_44(uParam3, 39, 1);
							func_44(uParam3, 55, 1);
							func_44(uParam3, 106, 1);
							func_44(uParam3, 114, 1);
							func_44(uParam3, 116, 1);
							func_44(uParam3, 117, 1);
							func_44(uParam3, 118, 1);
							func_44(uParam3, 119, 1);
							func_42(uParam2, 3, 1);
							func_42(uParam2, 4, 1);
							func_42(uParam2, 6, 1);
							func_42(uParam2, 8, 1);
							func_42(uParam2, 9, 1);
							func_42(uParam2, 10, 1);
							func_42(uParam2, 53, 1);
							func_42(uParam2, 56, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 11, 1);
							func_42(uParam2, 13, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 21, 1);
							func_42(uParam2, 22, 1);
							func_42(uParam2, 54, 1);
							func_42(uParam2, 26, 1);
							func_42(uParam2, 27, 1);
							func_42(uParam2, 28, 1);
							func_42(uParam2, 30, 1);
							func_42(uParam2, 31, 1);
							func_42(uParam2, 32, 1);
							func_42(uParam2, 36, 1);
							func_42(uParam2, 38, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 14, 1);
							func_42(uParam2, 105, 1);
							func_42(uParam2, 113, 1);
							func_42(uParam2, 114, 1);
							func_42(uParam2, 115, 1);
							func_42(uParam2, 116, 1);
							func_42(uParam2, 117, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 39, 1);
							func_44(uParam3, 106, 1);
							func_44(uParam3, 114, 1);
							func_44(uParam3, 116, 1);
							func_44(uParam3, 117, 1);
							func_44(uParam3, 118, 1);
							func_44(uParam3, 119, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 38, 1);
							func_42(uParam2, 14, 1);
							func_42(uParam2, 105, 1);
							func_42(uParam2, 113, 1);
							func_42(uParam2, 114, 1);
							func_42(uParam2, 115, 1);
							func_42(uParam2, 116, 1);
							func_42(uParam2, 117, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 13:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 19, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_41(uParam2, uParam3, uParam4);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 2:
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_46(uParam4, 115, 1);
							func_46(uParam4, 116, 1);
							func_41(uParam2, uParam3, uParam4);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
					}
					break;
				
				case 16:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 4, 1);
							break;
						
						case 1:
							func_46(uParam4, 43, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 23:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 1:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
						
						case 2:
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_46(uParam4, 110, 1);
							func_46(uParam4, 112, 1);
							func_41(uParam2, uParam3, uParam4);
							break;
					}
					break;
				
				case 17:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 6, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 1:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 6, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 2:
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 5, 1);
							func_46(uParam4, 6, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
					}
					break;
				
				case 19:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 3, 1);
							func_44(uParam3, 7, 1);
							func_44(uParam3, 0, 1);
							func_44(uParam3, 12, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 15, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 17, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 20, 1);
							func_44(uParam3, 21, 1);
							func_44(uParam3, 25, 1);
							func_44(uParam3, 26, 1);
							func_44(uParam3, 27, 1);
							func_44(uParam3, 30, 1);
							func_44(uParam3, 31, 1);
							func_44(uParam3, 32, 1);
							func_44(uParam3, 33, 1);
							func_44(uParam3, 39, 1);
							func_44(uParam3, 37, 1);
							func_42(uParam2, 0, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 3, 1);
							func_42(uParam2, 4, 1);
							func_42(uParam2, 6, 1);
							func_42(uParam2, 7, 1);
							func_42(uParam2, 8, 1);
							func_42(uParam2, 11, 1);
							func_42(uParam2, 13, 1);
							func_42(uParam2, 15, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 17, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 19, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 21, 1);
							func_42(uParam2, 22, 1);
							func_42(uParam2, 54, 1);
							func_42(uParam2, 24, 1);
							func_42(uParam2, 26, 1);
							func_42(uParam2, 27, 1);
							func_42(uParam2, 28, 1);
							func_42(uParam2, 30, 1);
							func_42(uParam2, 31, 1);
							func_42(uParam2, 32, 1);
							func_42(uParam2, 38, 1);
							func_42(uParam2, 36, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 77, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 1:
							func_44(uParam3, 3, 1);
							func_44(uParam3, 7, 1);
							func_44(uParam3, 0, 1);
							func_44(uParam3, 12, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 15, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 17, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 20, 1);
							func_44(uParam3, 21, 1);
							func_44(uParam3, 25, 1);
							func_44(uParam3, 26, 1);
							func_44(uParam3, 27, 1);
							func_44(uParam3, 30, 1);
							func_44(uParam3, 31, 1);
							func_44(uParam3, 32, 1);
							func_44(uParam3, 33, 1);
							func_44(uParam3, 39, 1);
							func_42(uParam2, 0, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 3, 1);
							func_42(uParam2, 4, 1);
							func_42(uParam2, 6, 1);
							func_42(uParam2, 7, 1);
							func_42(uParam2, 11, 1);
							func_42(uParam2, 13, 1);
							func_42(uParam2, 15, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 17, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 19, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 21, 1);
							func_42(uParam2, 22, 1);
							func_42(uParam2, 54, 1);
							func_42(uParam2, 24, 1);
							func_42(uParam2, 38, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 6, 1);
							func_46(uParam4, 7, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 43, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 77, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
						
						case 2:
							func_44(uParam3, 1, 1);
							func_44(uParam3, 3, 1);
							func_44(uParam3, 4, 1);
							func_44(uParam3, 5, 1);
							func_44(uParam3, 7, 1);
							func_44(uParam3, 10, 1);
							func_44(uParam3, 54, 1);
							func_44(uParam3, 55, 1);
							func_44(uParam3, 56, 1);
							func_44(uParam3, 0, 1);
							func_44(uParam3, 12, 1);
							func_44(uParam3, 13, 1);
							func_44(uParam3, 15, 1);
							func_44(uParam3, 16, 1);
							func_44(uParam3, 48, 1);
							func_44(uParam3, 49, 1);
							func_44(uParam3, 17, 1);
							func_44(uParam3, 18, 1);
							func_44(uParam3, 50, 1);
							func_44(uParam3, 51, 1);
							func_44(uParam3, 52, 1);
							func_44(uParam3, 53, 1);
							func_44(uParam3, 62, 1);
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_44(uParam3, 20, 1);
							func_44(uParam3, 21, 1);
							func_44(uParam3, 25, 1);
							func_44(uParam3, 26, 1);
							func_44(uParam3, 27, 1);
							func_44(uParam3, 30, 1);
							func_44(uParam3, 31, 1);
							func_44(uParam3, 32, 1);
							func_44(uParam3, 33, 1);
							func_44(uParam3, 37, 1);
							func_44(uParam3, 39, 1);
							func_42(uParam2, 0, 1);
							func_42(uParam2, 1, 1);
							func_42(uParam2, 2, 1);
							func_42(uParam2, 3, 1);
							func_42(uParam2, 4, 1);
							func_42(uParam2, 5, 1);
							func_42(uParam2, 6, 1);
							func_42(uParam2, 7, 1);
							func_42(uParam2, 8, 1);
							func_42(uParam2, 9, 1);
							func_42(uParam2, 10, 1);
							func_42(uParam2, 53, 1);
							func_42(uParam2, 56, 1);
							func_42(uParam2, 55, 1);
							func_42(uParam2, 11, 1);
							func_42(uParam2, 12, 1);
							func_42(uParam2, 13, 1);
							func_42(uParam2, 14, 1);
							func_42(uParam2, 15, 1);
							func_42(uParam2, 16, 1);
							func_42(uParam2, 47, 1);
							func_42(uParam2, 48, 1);
							func_42(uParam2, 17, 1);
							func_42(uParam2, 18, 1);
							func_42(uParam2, 49, 1);
							func_42(uParam2, 50, 1);
							func_42(uParam2, 51, 1);
							func_42(uParam2, 52, 1);
							func_42(uParam2, 62, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							func_42(uParam2, 19, 1);
							func_42(uParam2, 20, 1);
							func_42(uParam2, 21, 1);
							func_42(uParam2, 22, 1);
							func_42(uParam2, 54, 1);
							func_42(uParam2, 23, 1);
							func_42(uParam2, 24, 1);
							func_42(uParam2, 26, 1);
							func_42(uParam2, 27, 1);
							func_42(uParam2, 28, 1);
							func_42(uParam2, 29, 1);
							func_42(uParam2, 30, 1);
							func_42(uParam2, 31, 1);
							func_42(uParam2, 32, 1);
							func_42(uParam2, 33, 1);
							func_42(uParam2, 36, 1);
							func_42(uParam2, 38, 1);
							func_42(uParam2, 55, 1);
							func_46(uParam4, 1, 1);
							func_46(uParam4, 2, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 3, 1);
							func_46(uParam4, 4, 1);
							func_46(uParam4, 14, 1);
							func_46(uParam4, 15, 1);
							func_46(uParam4, 16, 1);
							func_46(uParam4, 6, 1);
							func_46(uParam4, 8, 1);
							func_46(uParam4, 9, 1);
							func_46(uParam4, 10, 1);
							func_46(uParam4, 12, 1);
							func_46(uParam4, 13, 1);
							func_46(uParam4, 17, 1);
							func_46(uParam4, 18, 1);
							func_46(uParam4, 19, 1);
							func_46(uParam4, 20, 1);
							func_46(uParam4, 59, 1);
							func_46(uParam4, 60, 1);
							func_46(uParam4, 61, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 62, 1);
							func_46(uParam4, 63, 1);
							func_46(uParam4, 64, 1);
							func_46(uParam4, 65, 1);
							func_46(uParam4, 66, 1);
							func_46(uParam4, 67, 1);
							func_46(uParam4, 68, 1);
							func_46(uParam4, 69, 1);
							func_46(uParam4, 70, 1);
							func_46(uParam4, 71, 1);
							func_46(uParam4, 72, 1);
							func_46(uParam4, 21, 1);
							func_46(uParam4, 22, 1);
							func_46(uParam4, 23, 1);
							func_46(uParam4, 24, 1);
							func_46(uParam4, 25, 1);
							func_46(uParam4, 26, 1);
							func_46(uParam4, 36, 1);
							func_46(uParam4, 46, 1);
							func_46(uParam4, 38, 1);
							func_46(uParam4, 29, 1);
							func_46(uParam4, 28, 1);
							func_46(uParam4, 31, 1);
							func_46(uParam4, 33, 1);
							func_46(uParam4, 34, 1);
							func_46(uParam4, 32, 1);
							func_46(uParam4, 92, 1);
							func_46(uParam4, 93, 1);
							func_46(uParam4, 94, 1);
							func_46(uParam4, 96, 1);
							func_46(uParam4, 97, 1);
							func_46(uParam4, 98, 1);
							func_46(uParam4, 100, 1);
							func_46(uParam4, 103, 1);
							func_46(uParam4, 104, 1);
							func_46(uParam4, 105, 1);
							func_46(uParam4, 106, 1);
							func_46(uParam4, 107, 1);
							func_46(uParam4, 108, 1);
							func_44(uParam3, 65, 1);
							func_44(uParam3, 67, 1);
							func_44(uParam3, 68, 1);
							func_44(uParam3, 69, 1);
							func_44(uParam3, 70, 1);
							func_44(uParam3, 71, 1);
							func_44(uParam3, 72, 1);
							func_44(uParam3, 73, 1);
							func_44(uParam3, 74, 1);
							func_44(uParam3, 75, 1);
							func_44(uParam3, 76, 1);
							func_44(uParam3, 77, 1);
							func_44(uParam3, 78, 1);
							func_44(uParam3, 79, 1);
							func_44(uParam3, 80, 1);
							func_44(uParam3, 81, 1);
							func_44(uParam3, 82, 1);
							func_44(uParam3, 91, 1);
							func_44(uParam3, 92, 1);
							func_42(uParam2, 64, 1);
							func_42(uParam2, 65, 1);
							func_42(uParam2, 66, 1);
							func_42(uParam2, 67, 1);
							func_42(uParam2, 68, 1);
							func_42(uParam2, 69, 1);
							func_42(uParam2, 70, 1);
							func_42(uParam2, 71, 1);
							func_42(uParam2, 72, 1);
							func_42(uParam2, 73, 1);
							func_42(uParam2, 74, 1);
							func_42(uParam2, 75, 1);
							func_42(uParam2, 77, 1);
							func_42(uParam2, 78, 1);
							func_42(uParam2, 79, 1);
							func_42(uParam2, 80, 1);
							func_42(uParam2, 81, 1);
							func_42(uParam2, 90, 1);
							func_42(uParam2, 91, 1);
							break;
					}
					break;
				
				case 18:
					switch (iParam5)
					{
						case 0:
							break;
						
						case 1:
							func_42(uParam2, 2, 1);
							func_42(uParam2, 20, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 0:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 9:
				case 11:
				case 13:
				case 15:
				case 19:
				case 23:
				case 26:
				case 30:
				case 34:
				case 20:
				case 22:
					func_40(2, 52, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 32:
					func_40(2, 53, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 17:
				case 27:
				case 31:
					break;
			}
			break;
	}
}

void func_41(var uParam0, var uParam1, var uParam2)
{
	if ((*uParam0)[0] == 0 || (*uParam1)[0] == 0)
	{
	}
	func_46(uParam2, 124, 1);
	func_46(uParam2, 125, 1);
	func_46(uParam2, 126, 1);
	func_46(uParam2, 127, 1);
	func_46(uParam2, 128, 1);
	func_46(uParam2, 129, 1);
	func_46(uParam2, 130, 1);
	func_46(uParam2, 131, 1);
	func_46(uParam2, 132, 1);
	func_46(uParam2, 133, 1);
	func_46(uParam2, 136, 1);
	func_46(uParam2, 138, 1);
	func_46(uParam2, 139, 1);
	func_46(uParam2, 143, 1);
	func_46(uParam2, 144, 1);
	func_46(uParam2, 145, 1);
	func_46(uParam2, 147, 1);
}

void func_42(var uParam0, int iParam1, bool bParam2)
{
	func_43(uParam0, iParam1, bParam2);
}

void func_43(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = floor((to_float(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		SET_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		CLEAR_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

void func_44(var uParam0, int iParam1, bool bParam2)
{
	func_43(uParam0, iParam1, bParam2);
}

void func_45(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_46(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam5)
					{
						case 0:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							break;
						
						case 1:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							break;
						
						case 2:
							func_44(uParam3, 38, 1);
							func_44(uParam3, 47, 1);
							func_44(uParam3, 111, 1);
							func_42(uParam2, 37, 1);
							func_42(uParam2, 46, 1);
							func_42(uParam2, 110, 1);
							break;
					}
					break;
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 6:
				case 26:
					if (bParam6)
					{
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_42(uParam2, 16, 1);
						func_42(uParam2, 47, 1);
						func_42(uParam2, 48, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
					}
					func_46(uParam4, 3, 1);
					func_46(uParam4, 4, 1);
					func_46(uParam4, 5, 1);
					func_46(uParam4, 6, 1);
					func_46(uParam4, 7, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 9, 1);
					func_46(uParam4, 12, 1);
					func_46(uParam4, 14, 1);
					func_46(uParam4, 15, 1);
					func_46(uParam4, 16, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_46(uParam4, 110, 1);
					func_46(uParam4, 112, 1);
					func_46(uParam4, 115, 1);
					func_46(uParam4, 116, 1);
					break;
				
				case 1:
					if (bParam6)
					{
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
					}
					func_46(uParam4, 9, 1);
					func_46(uParam4, 12, 1);
					func_46(uParam4, 13, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 31, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 34, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					break;
				
				case 10:
					func_46(uParam4, 28, 1);
					break;
				
				case 12:
					if (bParam6)
					{
						func_44(uParam3, 3, 1);
						func_44(uParam3, 4, 1);
						func_44(uParam3, 6, 1);
						func_44(uParam3, 10, 1);
						func_44(uParam3, 54, 1);
						func_44(uParam3, 55, 1);
						func_44(uParam3, 56, 1);
						func_44(uParam3, 13, 1);
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_44(uParam3, 20, 1);
						func_44(uParam3, 26, 1);
						func_44(uParam3, 27, 1);
						func_44(uParam3, 32, 1);
						func_44(uParam3, 33, 1);
						func_44(uParam3, 37, 1);
						func_44(uParam3, 39, 1);
						func_44(uParam3, 106, 1);
						func_44(uParam3, 114, 1);
						func_44(uParam3, 116, 1);
						func_44(uParam3, 117, 1);
						func_44(uParam3, 118, 1);
						func_44(uParam3, 119, 1);
						func_42(uParam2, 3, 1);
						func_42(uParam2, 4, 1);
						func_42(uParam2, 6, 1);
						func_42(uParam2, 8, 1);
						func_42(uParam2, 9, 1);
						func_42(uParam2, 10, 1);
						func_42(uParam2, 53, 1);
						func_42(uParam2, 56, 1);
						func_42(uParam2, 55, 1);
						func_42(uParam2, 13, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
						func_42(uParam2, 21, 1);
						func_42(uParam2, 26, 1);
						func_42(uParam2, 27, 1);
						func_42(uParam2, 28, 1);
						func_42(uParam2, 32, 1);
						func_42(uParam2, 36, 1);
						func_42(uParam2, 38, 1);
						func_42(uParam2, 55, 1);
						func_42(uParam2, 14, 1);
						func_42(uParam2, 105, 1);
						func_42(uParam2, 113, 1);
						func_42(uParam2, 114, 1);
						func_42(uParam2, 115, 1);
						func_42(uParam2, 116, 1);
						func_42(uParam2, 117, 1);
					}
					func_46(uParam4, 2, 1);
					func_46(uParam4, 3, 1);
					func_46(uParam4, 4, 1);
					func_46(uParam4, 14, 1);
					func_46(uParam4, 15, 1);
					func_46(uParam4, 16, 1);
					func_46(uParam4, 9, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 12, 1);
					func_46(uParam4, 13, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 31, 1);
					func_46(uParam4, 32, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 34, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_46(uParam4, 110, 1);
					func_46(uParam4, 112, 1);
					break;
				
				case 15:
					if (bParam6)
					{
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
						func_42(uParam2, 19, 1);
					}
					func_46(uParam4, 3, 1);
					func_46(uParam4, 6, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 9, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 13, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 31, 1);
					func_46(uParam4, 32, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 34, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					func_46(uParam4, 110, 1);
					func_46(uParam4, 112, 1);
					func_46(uParam4, 115, 1);
					func_46(uParam4, 116, 1);
					break;
				
				case 18:
					if (bParam6)
					{
						func_44(uParam3, 4, 1);
					}
					break;
				
				case 17:
					func_46(uParam4, 9, 1);
					break;
				
				case 19:
					if (bParam6)
					{
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_42(uParam2, 16, 1);
						func_42(uParam2, 47, 1);
						func_42(uParam2, 48, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
					}
					func_46(uParam4, 9, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					break;
				
				case 21:
					if (bParam6)
					{
						func_44(uParam3, 3, 1);
						func_44(uParam3, 7, 1);
						func_44(uParam3, 0, 1);
						func_44(uParam3, 12, 1);
						func_44(uParam3, 13, 1);
						func_44(uParam3, 15, 1);
						func_44(uParam3, 16, 1);
						func_44(uParam3, 48, 1);
						func_44(uParam3, 49, 1);
						func_44(uParam3, 17, 1);
						func_44(uParam3, 18, 1);
						func_44(uParam3, 50, 1);
						func_44(uParam3, 51, 1);
						func_44(uParam3, 52, 1);
						func_44(uParam3, 53, 1);
						func_44(uParam3, 38, 1);
						func_44(uParam3, 47, 1);
						func_44(uParam3, 111, 1);
						func_44(uParam3, 62, 1);
						func_44(uParam3, 20, 1);
						func_44(uParam3, 21, 1);
						func_44(uParam3, 25, 1);
						func_44(uParam3, 26, 1);
						func_44(uParam3, 27, 1);
						func_44(uParam3, 30, 1);
						func_44(uParam3, 31, 1);
						func_44(uParam3, 32, 1);
						func_44(uParam3, 33, 1);
						func_44(uParam3, 39, 1);
						func_44(uParam3, 37, 1);
						func_44(uParam3, 55, 1);
						func_42(uParam2, 0, 1);
						func_42(uParam2, 2, 1);
						func_42(uParam2, 3, 1);
						func_42(uParam2, 4, 1);
						func_42(uParam2, 6, 1);
						func_42(uParam2, 7, 1);
						func_42(uParam2, 8, 1);
						func_42(uParam2, 11, 1);
						func_42(uParam2, 13, 1);
						func_42(uParam2, 15, 1);
						func_42(uParam2, 16, 1);
						func_42(uParam2, 47, 1);
						func_42(uParam2, 48, 1);
						func_42(uParam2, 17, 1);
						func_42(uParam2, 18, 1);
						func_42(uParam2, 49, 1);
						func_42(uParam2, 50, 1);
						func_42(uParam2, 51, 1);
						func_42(uParam2, 52, 1);
						func_42(uParam2, 62, 1);
						func_42(uParam2, 37, 1);
						func_42(uParam2, 46, 1);
						func_42(uParam2, 110, 1);
						func_42(uParam2, 19, 1);
						func_42(uParam2, 20, 1);
						func_42(uParam2, 21, 1);
						func_42(uParam2, 22, 1);
						func_42(uParam2, 54, 1);
						func_42(uParam2, 24, 1);
						func_42(uParam2, 26, 1);
						func_42(uParam2, 27, 1);
						func_42(uParam2, 28, 1);
						func_42(uParam2, 30, 1);
						func_42(uParam2, 31, 1);
						func_42(uParam2, 32, 1);
						func_42(uParam2, 38, 1);
						func_42(uParam2, 36, 1);
					}
					func_46(uParam4, 3, 1);
					func_46(uParam4, 3, 1);
					func_46(uParam4, 4, 1);
					func_46(uParam4, 14, 1);
					func_46(uParam4, 15, 1);
					func_46(uParam4, 16, 1);
					func_46(uParam4, 8, 1);
					func_46(uParam4, 9, 1);
					func_46(uParam4, 10, 1);
					func_46(uParam4, 12, 1);
					func_46(uParam4, 13, 1);
					func_46(uParam4, 17, 1);
					func_46(uParam4, 18, 1);
					func_46(uParam4, 19, 1);
					func_46(uParam4, 20, 1);
					func_46(uParam4, 59, 1);
					func_46(uParam4, 60, 1);
					func_46(uParam4, 61, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 62, 1);
					func_46(uParam4, 63, 1);
					func_46(uParam4, 64, 1);
					func_46(uParam4, 65, 1);
					func_46(uParam4, 66, 1);
					func_46(uParam4, 67, 1);
					func_46(uParam4, 68, 1);
					func_46(uParam4, 69, 1);
					func_46(uParam4, 70, 1);
					func_46(uParam4, 71, 1);
					func_46(uParam4, 72, 1);
					func_46(uParam4, 21, 1);
					func_46(uParam4, 22, 1);
					func_46(uParam4, 23, 1);
					func_46(uParam4, 24, 1);
					func_46(uParam4, 25, 1);
					func_46(uParam4, 26, 1);
					func_46(uParam4, 36, 1);
					func_46(uParam4, 46, 1);
					func_46(uParam4, 38, 1);
					func_46(uParam4, 29, 1);
					func_46(uParam4, 28, 1);
					func_46(uParam4, 31, 1);
					func_46(uParam4, 33, 1);
					func_46(uParam4, 34, 1);
					func_46(uParam4, 92, 1);
					func_46(uParam4, 93, 1);
					func_46(uParam4, 94, 1);
					func_46(uParam4, 96, 1);
					func_46(uParam4, 97, 1);
					func_46(uParam4, 98, 1);
					func_46(uParam4, 100, 1);
					func_46(uParam4, 103, 1);
					func_46(uParam4, 104, 1);
					func_46(uParam4, 105, 1);
					func_46(uParam4, 106, 1);
					func_46(uParam4, 107, 1);
					func_46(uParam4, 108, 1);
					break;
			}
			break;
	}
}

void func_46(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = floor((to_float(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		SET_BIT(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		CLEAR_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

int func_47()
{
	if (Global_4254407.f_904 > -1)
	{
		return 1;
	}
	return 0;
}

int func_48(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 7:
				case 5:
				case 10:
				case 11:
				case 12:
				case 13:
				case 15:
				case 14:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
				case 23:
				case 26:
				case 25:
				case 24:
				case 30:
				case 34:
				case 40:
				case 41:
				case 42:
				case 43:
				case 44:
				case 45:
				case 46:
				case 47:
				case 48:
				case 49:
				case 50:
				case 51:
					return 1;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_49(float fParam0)
{
	func_67(iLocal_92, "SET_DATA_SLOT", fParam0, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 172, true), "CELL_BORDER");
}

void func_50(float fParam0)
{
	if (Global_1672541 == 1)
	{
		fParam0 = -1f;
	}
	func_67(iLocal_92, "SET_DATA_SLOT", fParam0, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 173, true), "CELL_FILTER");
}

void func_51()
{
	if (_IS_INPUT_DISABLED(2) || _IS_INPUT_DISABLED())
	{
		func_67(iLocal_92, "SET_DATA_SLOT", 2f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
	}
	else
	{
		func_67(iLocal_92, "SET_DATA_SLOT", 2f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
	}
	func_67(iLocal_92, "SET_DATA_SLOT", 3f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 183, true), "CELL_GRID");
	func_67(iLocal_92, "SET_DATA_SLOT", 4f, _0x80C2FD58D720C801(0, 1, true), "CELL_285");
	func_50(5f);
	func_49(6f);
	func_52(7f);
	func_29(8f);
	if (bLocal_29)
	{
		func_67(iLocal_92, "SET_DATA_SLOT", 9f, GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
	}
	if (!func_61(14))
	{
		if ((Global_76577 == 0 && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("pi_menu")) > 0) && func_60())
		{
			BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_91, "SET_FOCUS_LOCK");
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(true);
			BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_ACTTL");
			ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4270600));
			END_TEXT_COMMAND_SCALEFORM_STRING();
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(false);
			END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_52(float fParam0)
{
	func_67(iLocal_92, "SET_DATA_SLOT", fParam0, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 175, true), "CELL_ACCYC");
}

void func_53()
{
	func_149(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_149(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_67(iLocal_92, "SET_DATA_SLOT", 3f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, true), "CELL_284");
	func_67(iLocal_92, "SET_DATA_SLOT", 2f, _0x80C2FD58D720C801(0, 1, true), "CELL_285");
	func_67(iLocal_92, "SET_DATA_SLOT", 1f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
	func_67(iLocal_92, "SET_DATA_SLOT", 0f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_280");
	BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_MAX_WIDTH");
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fLocal_40);
	END_SCALEFORM_MOVIE_METHOD();
	func_149(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_54()
{
	if (iLocal_106 == 1)
	{
		func_55();
		return;
	}
	if (iLocal_84 == 0 && iLocal_85 == 0)
	{
		func_149(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_149(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_67(iLocal_92, "SET_DATA_SLOT", 0f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
		func_67(iLocal_92, "SET_DATA_SLOT", 1f, GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, true), func_65());
		if (iLocal_82)
		{
			if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
			{
				if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0) || IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE()) == 2)
				{
					if (_IS_INPUT_DISABLED(2) || _IS_INPUT_DISABLED())
					{
						func_67(iLocal_92, "SET_DATA_SLOT", 2f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_67(iLocal_92, "SET_DATA_SLOT", 2f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
					}
					if (func_158())
					{
						func_50(3f);
						func_49(4f);
					}
				}
				else if ((Global_76577 == 0 && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("pi_menu")) > 0) && func_60())
				{
					func_51();
				}
				else
				{
					if (_IS_INPUT_DISABLED(2) || _IS_INPUT_DISABLED())
					{
						func_67(iLocal_92, "SET_DATA_SLOT", 2f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
					}
					else
					{
						func_67(iLocal_92, "SET_DATA_SLOT", 2f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
					}
					func_67(iLocal_92, "SET_DATA_SLOT", 3f, GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, true), "CELL_GRID");
					func_67(iLocal_92, "SET_DATA_SLOT", 4f, _0x80C2FD58D720C801(0, 1, true), "CELL_285");
					if (func_158())
					{
						func_50(5f);
						func_49(6f);
						if (func_30(1))
						{
							func_29(7f);
							if (bLocal_29)
							{
								func_67(iLocal_92, "SET_DATA_SLOT", 8f, GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
							}
						}
						else if (bLocal_29)
						{
							func_67(iLocal_92, "SET_DATA_SLOT", 7f, GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
		{
			if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0) || IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE()) == 2)
			{
				if (!GET_PED_PARACHUTE_STATE(GET_PED_PARACHUTE_STATE()) == 2)
				{
					func_67(iLocal_92, "SET_DATA_SLOT", 3f, GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, true), "CELL_GRID");
					func_67(iLocal_92, "SET_DATA_SLOT", 4f, _0x80C2FD58D720C801(0, 1, true), "CELL_285");
					func_67(iLocal_92, "SET_DATA_SLOT", 5f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, true), "CELL_284");
					if (func_158())
					{
						func_50(6f);
						func_49(7f);
						func_67(iLocal_92, "SET_DATA_SLOT", 8f, GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
					}
				}
				else
				{
					func_67(iLocal_92, "SET_DATA_SLOT", 2f, _0x80C2FD58D720C801(0, 1, true), "CELL_285");
					if (func_158())
					{
						func_50(3f);
						func_49(4f);
						func_67(iLocal_92, "SET_DATA_SLOT", 5f, GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
					}
				}
			}
			else if (!GET_PED_PARACHUTE_STATE(GET_PED_PARACHUTE_STATE()) == 2)
			{
				if (!func_145())
				{
					if (_IS_INPUT_DISABLED(2) || _IS_INPUT_DISABLED())
					{
						func_67(iLocal_92, "SET_DATA_SLOT", 2f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_1NP_XB");
					}
					else
					{
						func_67(iLocal_92, "SET_DATA_SLOT", 2f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_1NP_XB");
					}
				}
				func_67(iLocal_92, "SET_DATA_SLOT", 4f, GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, true), "CELL_GRID");
				func_67(iLocal_92, "SET_DATA_SLOT", 5f, _0x80C2FD58D720C801(0, 1, true), "CELL_285");
				func_67(iLocal_92, "SET_DATA_SLOT", 6f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, true), "CELL_284");
				if (func_158())
				{
					if (!func_145())
					{
						func_50(7f);
						func_49(8f);
						if (bLocal_30)
						{
							func_67(iLocal_92, "SET_DATA_SLOT", 3f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 182, true), "CELL_FOCUS");
						}
						func_67(iLocal_92, "SET_DATA_SLOT", 9f, GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
					}
				}
				else
				{
					if (!func_145())
					{
						if (_IS_INPUT_DISABLED(2) || _IS_INPUT_DISABLED())
						{
							func_67(iLocal_92, "SET_DATA_SLOT", 2f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_1NP_XB");
						}
						else
						{
							func_67(iLocal_92, "SET_DATA_SLOT", 2f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_1NP_XB");
						}
					}
					func_67(iLocal_92, "SET_DATA_SLOT", 3f, _0x80C2FD58D720C801(0, 1, true), "CELL_285");
					if (func_158())
					{
						if (!func_145())
						{
							func_50(4f);
							func_49(5f);
							func_67(iLocal_92, "SET_DATA_SLOT", 6f, GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, true), "CELL_DEPTH");
						}
					}
				}
			}
		}
		BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_MAX_WIDTH");
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fLocal_40);
		END_SCALEFORM_MOVIE_METHOD();
		func_149(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_55()
{
	func_149(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_149(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_67(iLocal_92, "SET_DATA_SLOT", 3f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, true), "CELL_284");
	func_67(iLocal_92, "SET_DATA_SLOT", 2f, _0x80C2FD58D720C801(0, 1, true), "CELL_285");
	func_67(iLocal_92, "SET_DATA_SLOT", 1f, GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, true), func_65());
	func_67(iLocal_92, "SET_DATA_SLOT", 0f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, true), "CELL_281");
	BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_MAX_WIDTH");
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fLocal_40);
	END_SCALEFORM_MOVIE_METHOD();
	func_149(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_56()
{
	if (iLocal_82)
	{
		SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_36, 1065353216);
		SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_37);
	}
}

void func_57(int iParam0)
{
	if (iLocal_106 == 1)
	{
		return;
	}
	if (Global_4456448.f_185406 == 1)
	{
	}
	else if (Global_4456448.f_185407 == 1)
	{
	}
	else
	{
		_DISABLE_PHONE_THIS_FRAME(iParam0);
	}
}

void func_58()
{
	if (iLocal_28 == 1)
	{
		if (ARE_STRINGS_EQUAL(sLocal_19[Global_4268339], "phone_cam12DUMMY"))
		{
			_0xA2CCBE62CD4C91A4(0);
			0x375A706A5C2FD084(0);
		}
		else
		{
			_0xA2CCBE62CD4C91A4(1);
			0x375A706A5C2FD084(1);
		}
	}
}

void func_59()
{
	func_149(iLocal_91, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (!func_158())
	{
		if (Global_1672541 == 0)
		{
			SET_TIMECYCLE_MODIFIER("phone_cam");
		}
	}
}

int func_60()
{
	if (func_61(14))
	{
		if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
		{
			if ((GET_ENTITY_MODEL(GET_ENTITY_MODEL()) == Global_111560.f_28045[0 /*29*/] || GET_ENTITY_MODEL(GET_ENTITY_MODEL()) == Global_111560.f_28045[1 /*29*/]) || GET_ENTITY_MODEL(GET_ENTITY_MODEL()) == Global_111560.f_28045[2 /*29*/])
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
	return 1;
}

bool func_61(int iParam0)
{
	return Global_41396 == iParam0;
}

void func_62(char* sParam0)
{
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_63()
{
	if (_IS_INPUT_DISABLED(2) || _IS_INPUT_DISABLED())
	{
		func_67(iLocal_92, "SET_DATA_SLOT", 2f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
	}
	else
	{
		func_67(iLocal_92, "SET_DATA_SLOT", 2f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
	}
	if (_IS_INPUT_DISABLED(2))
	{
		func_67(iLocal_92, "SET_DATA_SLOT", 3f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 30, true), "CELL_RT_RSTICK");
		func_67(iLocal_92, "SET_DATA_SLOT", 4f, _0x80C2FD58D720C801(2, 1, true), "CELL_RT_LSTICK");
	}
	else
	{
		func_67(iLocal_92, "SET_DATA_SLOT", 3f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 1, true), "CELL_RT_RSTICK");
		func_67(iLocal_92, "SET_DATA_SLOT", 4f, _0x80C2FD58D720C801(2, 0, true), "CELL_RT_LSTICK");
	}
}

void func_64()
{
	if (_IS_INPUT_DISABLED(2) || _IS_INPUT_DISABLED())
	{
		func_67(iLocal_92, "SET_DATA_SLOT", 3f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
	}
	else
	{
		func_67(iLocal_92, "SET_DATA_SLOT", 3f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, true), "CELL_SP_2NP_XB");
	}
	func_67(iLocal_92, "SET_DATA_SLOT", 4f, _0x80C2FD58D720C801(0, 1, true), "CELL_LT_RSTICK");
	if (func_61(14))
	{
		func_67(iLocal_92, "SET_DATA_SLOT", 5f, GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 30, true), "CELL_LT_LSTICK");
	}
	else
	{
		func_67(iLocal_92, "SET_DATA_SLOT", 5f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, true), "CELL_LT_LSTICKZ");
		func_67(iLocal_92, "SET_DATA_SLOT", 6f, GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 30, true), "CELL_LT_LSTICK");
	}
}

char* func_65()
{
	if (func_66())
	{
		return "FHHUD_SENDLES";
	}
	return "CELL_287";
}

int func_66()
{
	switch (Global_1628955[PLAYER_ID() /*614*/].f_11.f_33)
	{
		case 233:
			switch (Global_1628955[PLAYER_ID() /*614*/].f_11.f_181)
			{
				case 9:
					return 1;
				
				default:
			}
			break;
		
		case 158:
			switch (Global_1628955[PLAYER_ID() /*614*/].f_11.f_181)
			{
				case 3:
				case 1:
				case 41:
					return 1;
				
				default:
			}
			break;
	}
	if (Global_1703066)
	{
		return 1;
	}
	return 0;
}

void func_67(int iParam0, char* sParam1, float fParam2, char* sParam3, char* sParam4)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(round(fParam2));
	if (!IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_68(sParam3);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_62(sParam4);
	}
	END_SCALEFORM_MOVIE_METHOD();
}

void func_68(char* sParam0)
{
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam0);
}

void func_69()
{
	if (Global_76577)
	{
		switch (Global_21922)
		{
			case 0:
				if (_IS_INPUT_DISABLED(2))
				{
					func_144("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_144("CELL_CAM_SELFIE_0", -1);
				}
				Global_21922++;
				break;
			
			case 1:
				if (!IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (_IS_INPUT_DISABLED(2))
					{
						func_144("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_144("CELL_CAM_SELFIE_1", -1);
					}
					Global_21922++;
				}
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		switch (Global_21921)
		{
			case 0:
				if (_IS_INPUT_DISABLED(2))
				{
					func_144("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_144("CELL_CAM_SELFIE_0", -1);
				}
				Global_21921++;
				break;
			
			case 1:
				if (!IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (_IS_INPUT_DISABLED(2))
					{
						func_144("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_144("CELL_CAM_SELFIE_1", -1);
					}
					Global_21921++;
				}
				break;
			
			case 2:
				break;
			}
	}
}

void func_70()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	
	if (_IS_INPUT_DISABLED(2))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (IS_CONTROL_PRESSED(2, iVar10) && !IS_CONTROL_PRESSED(2, iVar9))
	{
		DISABLE_CONTROL_ACTION(0, 2, 1);
		DISABLE_CONTROL_ACTION(0, 1, 1);
		iVar0 = floor(_0x4F8A26A890FD62FB(0, 30)) * 127;
		iVar1 = floor(_0x4F8A26A890FD62FB(0, 31)) * 127;
		iVar2 = floor(_0x4F8A26A890FD62FB(0, 1)) * 127;
		iVar3 = floor(_0x4F8A26A890FD62FB(0, 2)) * 127;
		if (_IS_INPUT_DISABLED(2))
		{
			if (ABSI(iVar0) > 28 || ABSI(iVar1) > 28)
			{
				fVar6 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			}
		}
		else if (ABSI(iVar2) > 28 || ABSI(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
		}
		if (_IS_INPUT_DISABLED(2))
		{
			fVar7 = _0x4F8A26A890FD62FB(0, 290);
			fVar8 = _0x4F8A26A890FD62FB(0, 291);
			if (_0xE1615EC03B3BB4FD())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (ABSI(iVar0) > 28 || ABSI(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(-iVar1) / 128f) * fLocal_114);
		}
		func_73(fVar5);
		func_72(fVar6);
		func_71(fVar4);
	}
	else if (!IS_CONTROL_PRESSED(2, iVar9))
	{
		ENABLE_CONTROL_ACTION(0, 2, 1);
		ENABLE_CONTROL_ACTION(0, 1, 1);
	}
}

void func_71(float fParam0)
{
	fLocal_111 = (fLocal_111 + fParam0);
	if (fLocal_111 > 1f)
	{
		fLocal_111 = 1f;
	}
	else if (fLocal_111 < -1f)
	{
		fLocal_111 = -1f;
	}
	_0xD6ADE981781FCA09(fLocal_111);
}

void func_72(float fParam0)
{
	fLocal_112 = (fLocal_112 + fParam0);
	if (fLocal_112 > 1f)
	{
		fLocal_112 = 1f;
	}
	else if (fLocal_112 < -1f)
	{
		fLocal_112 = -1f;
	}
	_0xF1E22DC13F5EEBAD(fLocal_112);
}

void func_73(float fParam0)
{
	fLocal_113 = (fLocal_113 + fParam0);
	if (fLocal_113 > 1f)
	{
		fLocal_113 = 1f;
	}
	else if (fLocal_113 < -1f)
	{
		fLocal_113 = -1f;
	}
	_0x466DA42C89865553(fLocal_113);
}

void func_74()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	
	if (_IS_INPUT_DISABLED(2))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (IS_CONTROL_PRESSED(2, iVar10))
		{
			if (IS_CONTROL_JUST_PRESSED(2, 178) && !func_145())
			{
				_0x53F4892D18EC90A4(0.5f);
				_0x3117D84EFA60F77B(0.85f);
				_0xAC2890471901861C(0.5f);
				_0x15E69E2802C24B8D(-0.25f);
				fLocal_107 = 0.5f;
				fLocal_108 = 0.85f;
				fLocal_109 = 0.5f;
				fLocal_110 = -0.25f;
			}
		}
	}
	else
	{
		iVar10 = 228;
		iVar11 = 229;
	}
	if (IS_CONTROL_PRESSED(2, iVar10) && !IS_CONTROL_PRESSED(2, iVar11))
	{
		if (IS_CONTROL_JUST_PRESSED(2, 178) && !func_145())
		{
			_0x53F4892D18EC90A4(0.5f);
			_0x3117D84EFA60F77B(0.85f);
			_0xAC2890471901861C(0.5f);
			_0x15E69E2802C24B8D(-0.25f);
			fLocal_107 = 0.5f;
			fLocal_108 = 0.85f;
			fLocal_109 = 0.5f;
			fLocal_110 = -0.25f;
		}
		DISABLE_CONTROL_ACTION(0, 2, 1);
		DISABLE_CONTROL_ACTION(0, 1, 1);
		iVar0 = floor(_0x4F8A26A890FD62FB(0, 30)) * 127;
		iVar1 = floor(_0x4F8A26A890FD62FB(0, 31)) * 127;
		iVar2 = floor(_0x4F8A26A890FD62FB(0, 1)) * 127;
		iVar3 = floor(_0x4F8A26A890FD62FB(0, 2)) * 127;
		if (_IS_INPUT_DISABLED(2))
		{
			iVar1 = floor(_0x4F8A26A890FD62FB(0, 39)) * 127;
			fVar8 = _0x4F8A26A890FD62FB(0, 290);
			fVar9 = _0x4F8A26A890FD62FB(0, 291);
			if (_0xE1615EC03B3BB4FD())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (ABSI(iVar2) > 15 || ABSI(iVar3) > 15)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_114);
		}
		if (ABSI(iVar0) > 28 || ABSI(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_114);
		}
		func_78(fVar6);
		func_77(fVar7);
		func_76(fVar4);
		if (!func_61(14))
		{
			func_75(fVar5);
		}
	}
	else if (!IS_DISABLED_CONTROL_PRESSED(2, iVar11))
	{
		ENABLE_CONTROL_ACTION(0, 2, 1);
		ENABLE_CONTROL_ACTION(0, 1, 1);
	}
	if (!IS_DISABLED_CONTROL_PRESSED(2, iVar10) && !IS_DISABLED_CONTROL_PRESSED(2, iVar11))
	{
		iVar0 = floor(_0x4F8A26A890FD62FB(0, 30)) * 127;
		iVar1 = floor(_0x4F8A26A890FD62FB(0, 31)) * 127;
		iVar2 = floor(_0x4F8A26A890FD62FB(0, 290)) * 127;
		iVar3 = floor(_0x4F8A26A890FD62FB(0, 291)) * 127;
		iVar2 = floor(_0x4F8A26A890FD62FB(0, 294)) * 127;
		iVar2 = floor(_0x4F8A26A890FD62FB(0, 295)) * 127;
		iVar3 = floor(_0x4F8A26A890FD62FB(0, 292)) * 127;
		iVar3 = floor(_0x4F8A26A890FD62FB(0, 293)) * 127;
		if (ABSI(iVar2) > 28 || ABSI(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_114);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_114);
		}
		if (ABSI(iVar0) > 28 || ABSI(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_114);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_114);
		}
		if (!func_61(14))
		{
			func_75(fVar5);
		}
	}
}

void func_75(float fParam0)
{
	fLocal_109 = (fLocal_109 + fParam0);
	if (fLocal_109 > 1f)
	{
		fLocal_109 = 1f;
	}
	else if (fLocal_109 < 0f)
	{
		fLocal_109 = 0f;
	}
	_0xAC2890471901861C(fLocal_109);
}

void func_76(float fParam0)
{
	fLocal_110 = (fLocal_110 + fParam0);
	if (fLocal_110 > 1f)
	{
		fLocal_110 = 1f;
	}
	else if (fLocal_110 < -1f)
	{
		fLocal_110 = -1f;
	}
	_0x15E69E2802C24B8D(fLocal_110);
}

void func_77(float fParam0)
{
	fLocal_108 = (fLocal_108 + fParam0);
	if (fLocal_108 > 1.5f)
	{
		fLocal_108 = 1.5f;
	}
	else if (fLocal_108 < 0.5f)
	{
		fLocal_108 = 0.5f;
	}
	_0x3117D84EFA60F77B(fLocal_108);
}

void func_78(float fParam0)
{
	fLocal_107 = (fLocal_107 + fParam0);
	if (fLocal_107 > 2f)
	{
		fLocal_107 = 2f;
	}
	else if (fLocal_107 < -1.7f)
	{
		fLocal_107 = -1.7f;
	}
	_0x53F4892D18EC90A4(fLocal_107);
}

void func_79()
{
	if (Global_76837 || Global_76838)
	{
		return;
	}
	if (iLocal_75 == 0)
	{
		if (!iLocal_100)
		{
			if (Global_4456448.f_185406 == 0 && Global_4456448.f_185407 == 0)
			{
				DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_92, 255, 255, 255, 0, 0);
			}
		}
	}
	if (iLocal_78 == 0)
	{
		if (Global_19428)
		{
			if (Global_19664)
			{
				if (iLocal_100 == 0)
				{
					if (Global_19486.f_1 > 3)
					{
					}
				}
			}
		}
		else
		{
			func_81(255, 255, 255, 255);
			func_80(0.059f, 0.644f, "CELL_284", 0);
			func_81(255, 255, 255, 255);
			func_80(0.165f, 0.644f, "CELL_285", 0);
			func_81(255, 255, 255, 255);
			func_80(0.275f, 0.75f, "CELL_280", 0);
			func_81(255, 255, 255, 255);
			func_80(0.275f, 0.83f, "CELL_281", 0);
		}
	}
	else if (Global_19428)
	{
	}
	else
	{
		func_81(255, 255, 255, 255);
		func_80(0.275f, 0.75f, func_65(), 0);
		func_81(255, 255, 255, 255);
		func_80(0.275f, 0.79f, "CELL_286", 0);
		func_81(255, 255, 255, 255);
		func_80(0.275f, 0.83f, "CELL_281", 0);
	}
}

void func_80(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam3);
}

void func_81(int iParam0, int iParam1, int iParam2, int iParam3)
{
	SET_TEXT_SCALE(0.4f, 0.4f);
	SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	SET_TEXT_EDGE(1, 0, 0, 0, 205);
	SET_TEXT_PROPORTIONAL(1);
	SET_TEXT_FONT(0);
	SET_TEXT_COLOUR(iParam0, iParam1, iParam2, iParam3);
}

void func_82()
{
	SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_38, 1065353216);
	SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_39);
}

void func_83()
{
	DISABLE_CONTROL_ACTION(0, 25, 1);
	DISABLE_CONTROL_ACTION(0, 44, 1);
	DISABLE_CONTROL_ACTION(0, 3, 1);
	DISABLE_CONTROL_ACTION(0, 4, 1);
	DISABLE_CONTROL_ACTION(0, 5, 1);
	DISABLE_CONTROL_ACTION(0, 6, 1);
	DISABLE_CONTROL_ACTION(0, 1, 1);
	DISABLE_CONTROL_ACTION(0, 2, 1);
	DISABLE_CONTROL_ACTION(0, 39, 1);
	DISABLE_CONTROL_ACTION(0, 47, 1);
	DISABLE_CONTROL_ACTION(0, 56, 1);
}

void func_84()
{
	vLocal_44 = { Global_19439[Global_19431 /*3*/] };
	if (Global_19428)
	{
		if (func_87())
		{
			GET_MOBILE_PHONE_POSITION(&vLocal_46);
			vLocal_44 = { vLocal_46 };
			iLocal_72 = 0;
			iLocal_73 = 0;
			iLocal_74 = 0;
		}
		func_1(1);
		if (iLocal_72)
		{
			vLocal_42.x = (vLocal_42.x + 12f);
		}
		if (vLocal_42.x > vLocal_44.x || vLocal_42.x == vLocal_44.x)
		{
			vLocal_42.x = vLocal_44.x;
			iLocal_72 = 0;
		}
		if (iLocal_73)
		{
			vLocal_42.y = (vLocal_42.y - 6f);
		}
		if (IS_BIT_SET(Global_7358, 4))
		{
			if (vLocal_42.y < (vLocal_44.y + 15f) || vLocal_42.y == (vLocal_44.y + 15f))
			{
				vLocal_42.y = (vLocal_44.y + 15f);
				iLocal_73 = 0;
			}
		}
		else if (vLocal_42.y < (vLocal_44.y + 10f) || vLocal_42.y == (vLocal_44.y + 10f))
		{
			vLocal_42.y = (vLocal_44.y + 10f);
			iLocal_73 = 0;
		}
		if (iLocal_74)
		{
			vLocal_42.z = (vLocal_42.z - 10f);
		}
		if (vLocal_42.z < vLocal_44.z || vLocal_42.z == vLocal_44.z)
		{
			vLocal_42.z = vLocal_44.z;
			iLocal_74 = 0;
		}
		if (func_87() == 0)
		{
			if (IS_BIT_SET(Global_7358, 4))
			{
				vLocal_44.y = (vLocal_44.y + 15f);
			}
			else
			{
				vLocal_44.y = (vLocal_44.y + 10f);
			}
			vLocal_44.x = (vLocal_44.x - 14f);
		}
		else
		{
			vLocal_44 = { Global_19432[Global_19431 /*3*/] };
		}
		vLocal_42 = { vLocal_44 };
		iLocal_74 = 0;
		iLocal_73 = 0;
		iLocal_72 = 0;
		SET_MOBILE_PHONE_POSITION(vLocal_42);
		if ((iLocal_72 == 0 && iLocal_73 == 0) && iLocal_74 == 0)
		{
			iLocal_75 = 0;
			vLocal_43 = { -90.3f, 0f, 90f };
			SET_MOBILE_PHONE_ROTATION(vLocal_43, 0);
			if (!IS_BIT_SET(Global_7356, 22))
			{
				if (IS_BIT_SET(Global_7356, 28))
				{
					StringCopy(&cLocal_96, "CELL_294", 16);
					func_86();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_293", 16);
					func_85();
				}
				iLocal_51 = 2;
			}
		}
	}
}

void func_85()
{
	func_149(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_149(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (IS_BIT_SET(Global_7357, 28))
	{
		func_67(iLocal_92, "SET_DATA_SLOT", 0f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_286");
	}
	else
	{
		func_67(iLocal_92, "SET_DATA_SLOT", 1f, GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 178, true), "CELL_277");
		func_67(iLocal_92, "SET_DATA_SLOT", 0f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_GALSAVE");
	}
	BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_MAX_WIDTH");
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fLocal_40);
	END_SCALEFORM_MOVIE_METHOD();
	func_149(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_86()
{
	func_149(iLocal_92, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_149(iLocal_92, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (IS_BIT_SET(Global_7357, 28))
	{
		func_67(iLocal_92, "SET_DATA_SLOT", 1f, GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, true), func_65());
		func_67(iLocal_92, "SET_DATA_SLOT", 0f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_286");
	}
	else
	{
		func_67(iLocal_92, "SET_DATA_SLOT", 2f, GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, true), func_65());
		func_67(iLocal_92, "SET_DATA_SLOT", 1f, GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 178, true), "CELL_277");
		func_67(iLocal_92, "SET_DATA_SLOT", 0f, GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, true), "CELL_GALSAVE");
	}
	BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_92, "SET_MAX_WIDTH");
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fLocal_40);
	END_SCALEFORM_MOVIE_METHOD();
	func_149(iLocal_92, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_87()
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
		if (func_61(14))
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

void func_88()
{
	DISABLE_CONTROL_ACTION(0, 47, 1);
	SET_INPUT_EXCLUSIVE(0, Global_19456);
	vLocal_43 = { Global_19446 };
	vLocal_44 = { Global_19439[Global_19431 /*3*/] };
	if (func_87())
	{
		GET_MOBILE_PHONE_ROTATION(&vLocal_45, 0);
		vLocal_43 = { vLocal_45 };
		GET_MOBILE_PHONE_POSITION(&vLocal_46);
		vLocal_44 = { vLocal_46 };
		iLocal_69 = 0;
		iLocal_70 = 0;
		iLocal_71 = 0;
		iLocal_72 = 0;
		iLocal_73 = 0;
		iLocal_74 = 0;
	}
	if (Global_19428)
	{
		func_149(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_57(0);
		iLocal_82 = 0;
		if (IS_BIT_SET(Global_7356, 30))
		{
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			func_89();
		}
		if (iLocal_72)
		{
			if (IS_BIT_SET(Global_7356, 9))
			{
				vLocal_42.x = (vLocal_42.x + 2f);
			}
			else
			{
				vLocal_42.x = (vLocal_42.x + 12f);
			}
		}
		if (vLocal_42.x > vLocal_44.x || vLocal_42.x == vLocal_44.x)
		{
			vLocal_42.x = vLocal_44.x;
			iLocal_72 = 0;
		}
		if (iLocal_73)
		{
			vLocal_42.y = (vLocal_42.y - 6f);
		}
		if (vLocal_42.y < vLocal_44.y || vLocal_42.y == vLocal_44.y)
		{
			vLocal_42.y = vLocal_44.y;
			iLocal_73 = 0;
		}
		if (iLocal_74)
		{
			vLocal_42.z = (vLocal_42.z - 10f);
		}
		if (vLocal_42.z < vLocal_44.z || vLocal_42.z == vLocal_44.z)
		{
			vLocal_42.z = vLocal_44.z;
			iLocal_74 = 0;
		}
		if (iLocal_74 == 0)
		{
			if (iLocal_69)
			{
				vLocal_41.x = (vLocal_41.x + 1f);
			}
			if (vLocal_41.x > vLocal_43.x || vLocal_41.x == vLocal_43.x)
			{
				vLocal_41.x = vLocal_43.x;
				iLocal_69 = 0;
			}
			if (iLocal_70)
			{
				vLocal_41.y = (vLocal_41.y - 2f);
			}
			if (vLocal_41.y < vLocal_43.y || vLocal_41.y == vLocal_43.y)
			{
				vLocal_41.y = vLocal_43.y;
				iLocal_70 = 0;
			}
			if (iLocal_71)
			{
				vLocal_41.z = (vLocal_41.z - 14f);
			}
			if (vLocal_41.z < vLocal_43.z || vLocal_41.z == vLocal_43.z)
			{
				vLocal_41.z = vLocal_43.z;
				iLocal_71 = 0;
			}
		}
		if (iLocal_77)
		{
			vLocal_41 = { vLocal_43 };
			vLocal_42 = { vLocal_44 };
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			if (func_87() == 0)
			{
				SET_MOBILE_PHONE_ROTATION(vLocal_41, 0);
				SET_MOBILE_PHONE_POSITION(vLocal_42);
			}
			func_101(0, 1);
		}
		else if (func_87() == 0)
		{
			SET_MOBILE_PHONE_ROTATION(vLocal_41, 0);
			SET_MOBILE_PHONE_POSITION(vLocal_42);
		}
		if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
		{
			func_89();
		}
	}
	else
	{
		if (iLocal_69)
		{
			vLocal_41.x = (vLocal_41.x + 1f);
		}
		if (vLocal_41.x > vLocal_43.x || vLocal_41.x == vLocal_43.x)
		{
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			vLocal_41.y = (vLocal_41.y - 2f);
		}
		if (vLocal_41.y < vLocal_43.y || vLocal_41.y == vLocal_43.y)
		{
			iLocal_70 = 0;
		}
		if (iLocal_71)
		{
			vLocal_41.z = (vLocal_41.z - 7f);
		}
		if (vLocal_41.z < vLocal_43.z || vLocal_41.z == vLocal_43.z)
		{
			iLocal_71 = 0;
		}
		if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
		{
			func_89();
		}
	}
	SET_MOBILE_PHONE_ROTATION(vLocal_41, 0);
}

void func_89()
{
	func_1(0);
	if (func_87() == 0)
	{
		if (IS_BIT_SET(Global_7356, 30))
		{
			SET_MOBILE_PHONE_POSITION(Global_19432[Global_19431 /*3*/]);
		}
		else
		{
			SET_MOBILE_PHONE_POSITION(Global_19439[Global_19431 /*3*/]);
		}
		vLocal_41 = { vLocal_43 };
		SET_MOBILE_PHONE_ROTATION(vLocal_41, 0);
	}
	Global_21838 = 0;
	func_108(0, 0);
	func_112(0);
	iLocal_66 = 0;
	func_103(1);
	Global_19473 = 1;
	Global_21841 = 0;
	if (Global_19486.f_1 > 4)
	{
		Global_19486.f_1 = 6;
		Global_19464 = 1;
		func_90();
	}
	if (HAS_SCALEFORM_MOVIE_LOADED(iLocal_91))
	{
		func_148(iLocal_91, "SHUTDOWN_MOVIE");
	}
	wait(0);
	_0xEB2D525B57F42B40();
	SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_92);
	SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_91);
	if (Global_19666 == 1)
	{
		SET_BIT(&Global_7356, 17);
	}
	else
	{
		CLEAR_BIT(&Global_7356, 17);
	}
	CLEAR_BIT(&Global_7356, 18);
	CLEAR_BIT(&Global_7356, 21);
	CLEAR_FLOATING_HELP(0, 1);
	CLEAR_BIT(&Global_7358, 3);
	CLEAR_BIT(&Global_4269615, 3);
	SET_GAME_PAUSED(false);
	SET_PLAYER_CAN_DO_DRIVE_BY(SET_PLAYER_CAN_DO_DRIVE_BY(), 1);
	RESET_HUD_COMPONENT_VALUES(15);
	Global_21842 = 1;
	STOP_SOUND(iLocal_63);
	RELEASE_SOUND_ID(iLocal_63);
	_REMOVE_LOADING_PROMPT();
	if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
	{
		SET_FACIAL_IDLE_ANIM_OVERRIDE(SET_FACIAL_IDLE_ANIM_OVERRIDE(), "Mood_Normal_1", 0);
		CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(CLEAR_FACIAL_IDLE_ANIM_OVERRIDE());
	}
	func_103(1);
	_0xA2CCBE62CD4C91A4(0);
	0x375A706A5C2FD084(0);
	_0x1B0B4AEED5B9B41C(1f);
	if (Global_4268340 > 0 && Global_4268340 < 13)
	{
		SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_20[Global_4268340]);
	}
	func_101(0, 1);
	if (func_156(0, 1, iLocal_31, 1))
	{
		iLocal_31 = 0;
	}
	TERMINATE_THIS_THREAD();
}

void func_90()
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
			func_149(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_95(Global_7961);
			if (Global_7961 == 1)
			{
				func_149(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19490), -1082130432, -1082130432, -1082130432);
				Global_19466 = Global_19490;
			}
			else
			{
				func_149(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19491), -1082130432, -1082130432, -1082130432);
				Global_19466 = Global_19491;
			}
			if (Global_19474)
			{
				func_94(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_94(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_94(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_94(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_19666 == 0)
			{
				func_94(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				CLEAR_BIT(&Global_7356, 17);
			}
			else if (Global_76577)
			{
				func_94(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				CLEAR_BIT(&Global_7356, 17);
			}
			else
			{
				if (Global_19665 == 1)
				{
					if (Global_19474)
					{
						func_94(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_94(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19474)
				{
					func_94(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_94(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				SET_BIT(&Global_7356, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_149(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_94(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_94(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			CLEAR_BIT(&Global_7356, 17);
			if (IS_BIT_SET(Global_7356, 20))
			{
				func_94(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_94(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_94(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_94(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_19485 == 1)
			{
				func_93();
				func_149(Global_19467, "SET_THEME", to_float(Global_111560.f_14046[Global_19486 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_20818)
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(4);
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(2);
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_20820);
					END_TEXT_COMMAND_SCALEFORM_STRING();
					func_62("CELL_300");
					func_62("CELL_217");
					func_62("CELL_217");
					END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_92(Global_6671, Global_19486) == 0)
				{
					func_94(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_94(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), "CELL_217", &(Global_1798[Global_6671 /*29*/].f_3), 0);
				}
				func_149(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_20805 == 4 || Global_20805 == 3)
			{
				func_149(Global_19467, "SET_THEME", to_float(Global_111560.f_14046[Global_19486 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_93();
				if (Global_20818)
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(4);
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(2);
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_20820);
					END_TEXT_COMMAND_SCALEFORM_STRING();
					func_62("CELL_300");
					func_62("CELL_219");
					func_62("CELL_219");
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
					if (func_92(Global_6671, Global_19486) == 0)
					{
						func_149(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_94(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_149(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_94(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), &cVar0, &(Global_1798[Global_6671 /*29*/].f_3), 0);
					}
				}
				func_149(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_91();
			break;
		
		default:
			break;
	}
}

void func_91()
{
	if (HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
	{
		if (Global_19485 == 1)
		{
			if (Global_19474)
			{
				func_94(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_94(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20852)
			{
				func_94(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (IS_BIT_SET(Global_7356, 20))
			{
				func_94(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_94(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_94(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_94(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			CLEAR_BIT(&Global_7356, 17);
		}
		else
		{
			func_94(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_94(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			CLEAR_BIT(&Global_7356, 17);
			if (IS_BIT_SET(Global_7356, 20))
			{
				func_94(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_94(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_94(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_94(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

int func_92(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_24[iParam1];
}

void func_93()
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

void func_94(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_62(sParam7);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_62(sParam8);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_62(sParam9);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_62(sParam10);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_62(sParam11);
	}
	END_SCALEFORM_MOVIE_METHOD();
}

void func_95(int iParam0)
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
		if (func_61(14))
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
								func_62(&(Global_7363[iVar1 /*15*/]));
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar2);
								END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2458994)
							{
								if (iVar1 == 14)
								{
									func_94(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_94(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(Global_21873), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_94(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_94(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_94(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_7363[iVar1 /*15*/].f_10);
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
								func_62(&(Global_7363[iVar1 /*15*/]));
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
								func_62(&(Global_7363[iVar1 /*15*/]));
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
								func_62(&(Global_7363[iVar1 /*15*/]));
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
								func_62(&(Global_7363[iVar1 /*15*/]));
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
								func_62(&(Global_7363[iVar1 /*15*/]));
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(42);
								END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_7363[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627599.f_1;
								func_94(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_94(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_96()
{
	switch (iLocal_51)
	{
		case 1:
			CLEAR_FLOATING_HELP(0, 1);
			if (IS_BIT_SET(Global_7356, 28))
			{
				StringCopy(&cLocal_96, "CELL_296", 16);
				func_54();
			}
			else
			{
				StringCopy(&cLocal_96, "CELL_295", 16);
				func_28();
			}
			break;
		
		case 2:
			if (!IS_BIT_SET(Global_7356, 22))
			{
				CLEAR_FLOATING_HELP(0, 1);
				if (IS_BIT_SET(Global_7356, 28))
				{
					StringCopy(&cLocal_96, "CELL_294", 16);
					func_86();
				}
				else
				{
					StringCopy(&cLocal_96, "CELL_293", 16);
					func_85();
				}
				iLocal_51 = 2;
			}
			break;
		
		default:
			break;
	}
}

void func_97(bool bParam0)
{
	if (bParam0)
	{
		if (!func_110())
		{
			SET_BIT(&Global_1687880, 17);
		}
	}
	else if (func_110())
	{
		CLEAR_BIT(&Global_1687880, 17);
	}
}

int func_98(int iParam0, int iParam1, int iParam2)
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

void func_99(bool bParam0)
{
	if (bParam0)
	{
		if (!func_100())
		{
			SET_BIT(&Global_1687880, 18);
		}
	}
	else if (func_100())
	{
		CLEAR_BIT(&Global_1687880, 18);
	}
}

bool func_100()
{
	return IS_BIT_SET(Global_1687880, 18);
}

void func_101(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_102(0))
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

int func_102(int iParam0)
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

void func_103(int iParam0)
{
	if ((Global_4456448.f_185406 == 0 && Global_4456448.f_185407 == 0) && Global_1672541 == 0)
	{
		if (func_104(PLAYER_ID()) && iParam0)
		{
			Global_1703199 = 1;
		}
		else
		{
			CLEAR_TIMECYCLE_MODIFIER();
		}
	}
}

int func_104(int iParam0)
{
	if (iParam0 != func_107())
	{
		if (func_106(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_105(Global_2424073[iParam0 /*421*/].f_309.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_105(int iParam0)
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

int func_106(int iParam0, bool bParam1, bool bParam2)
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

int func_107()
{
	return -1;
}

void func_108(int iParam0, int iParam1)
{
	if (Global_4456448.f_185406 == 1)
	{
	}
	else if (Global_4456448.f_185407 == 1)
	{
	}
	else
	{
		CELL_CAM_ACTIVATE(iParam0, iParam1);
	}
}

int func_109()
{
	if (IS_BIT_SET(Global_7356, 15))
	{
		return 1;
	}
	return 0;
}

bool func_110()
{
	return IS_BIT_SET(Global_1687880, 17);
}

void func_111()
{
	if (Global_19428)
	{
		vLocal_43 = { -90.3f, 0f, 90f };
		vLocal_44 = { 1.5f, 0f, -17f };
		if (func_87())
		{
			GET_MOBILE_PHONE_ROTATION(&vLocal_45, 0);
			vLocal_43 = { vLocal_45 };
			GET_MOBILE_PHONE_POSITION(&vLocal_46);
			vLocal_44 = { vLocal_46 };
			iLocal_69 = 0;
			iLocal_70 = 0;
			iLocal_71 = 0;
			iLocal_72 = 0;
			iLocal_73 = 0;
			iLocal_74 = 0;
		}
		if (iLocal_71 == 0)
		{
			if (iLocal_72)
			{
				vLocal_42.x = (vLocal_42.x - 14f);
			}
			if (vLocal_42.x < vLocal_44.x || vLocal_42.x == vLocal_44.x)
			{
				iLocal_72 = 0;
			}
			if (iLocal_73)
			{
				vLocal_42.y = (vLocal_42.y + 7f);
			}
			if (vLocal_42.y > vLocal_44.y || vLocal_42.y == vLocal_44.y)
			{
				iLocal_73 = 0;
			}
			if (iLocal_74)
			{
				vLocal_42.z = (vLocal_42.z + 12f);
			}
			if (vLocal_42.z > vLocal_44.z || vLocal_42.z == vLocal_44.z)
			{
				iLocal_74 = 0;
			}
		}
		if (iLocal_69)
		{
			vLocal_41.x = (vLocal_41.x - 1f);
		}
		if (vLocal_41.x < vLocal_43.x || vLocal_41.x == vLocal_43.x)
		{
			vLocal_41.x = vLocal_43.x;
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			vLocal_41.y = (vLocal_41.y - 0.5f);
		}
		if (vLocal_41.y < vLocal_43.y || vLocal_41.y == vLocal_43.y)
		{
			vLocal_41.y = vLocal_43.y;
			iLocal_70 = 0;
		}
		if (iLocal_71)
		{
			vLocal_41.z = (vLocal_41.z + 11f);
		}
		if (vLocal_41.z > vLocal_43.z || vLocal_41.z == vLocal_43.z)
		{
			vLocal_41.z = vLocal_43.z;
			iLocal_71 = 0;
		}
		if (func_87() == 0)
		{
			SET_MOBILE_PHONE_ROTATION(vLocal_41, 0);
			SET_MOBILE_PHONE_POSITION(vLocal_42);
		}
	}
	else
	{
		vLocal_43 = { -93.9f, 4.9f, 90.7f };
		if (iLocal_69)
		{
			vLocal_41.x = (vLocal_41.x - 1f);
		}
		if (vLocal_41.x < vLocal_43.x || vLocal_41.x == vLocal_43.x)
		{
			iLocal_69 = 0;
		}
		if (iLocal_70)
		{
			vLocal_41.y = (vLocal_41.y + 2f);
		}
		if (vLocal_41.y > vLocal_43.y || vLocal_41.y == vLocal_43.y)
		{
			iLocal_70 = 0;
		}
		if (iLocal_71)
		{
			vLocal_41.z = (vLocal_41.z + 7f);
		}
		if (vLocal_41.z > vLocal_43.z || vLocal_41.z == vLocal_43.z)
		{
			iLocal_71 = 0;
		}
		SET_MOBILE_PHONE_ROTATION(vLocal_41, 0);
	}
	if (Global_19428)
	{
		if (((((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0) && iLocal_72 == 0) && iLocal_73 == 0) && iLocal_74 == 0)
		{
			if (func_87())
			{
			}
			else
			{
				vLocal_41 = { vLocal_43 };
				SET_MOBILE_PHONE_ROTATION(vLocal_41, 0);
				vLocal_42 = { vLocal_44 };
				SET_MOBILE_PHONE_POSITION(vLocal_42);
			}
			if (iLocal_54 == 0)
			{
				Global_21839 = 0;
				func_108(1, 1);
				iLocal_66 = 1;
				func_112(1);
				func_59();
				func_113();
				func_57(0);
				settimera(0);
				iLocal_93 = 1;
				iLocal_94 = 1;
				func_125();
				func_149(iLocal_91, "DISPLAY_VIEW", to_float(iLocal_95), -1082130432, -1082130432, -1082130432, -1082130432);
				if (!IS_BIT_SET(Global_4269615, 2))
				{
					func_149(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_149(iLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
				func_151();
			}
		}
	}
	else if ((iLocal_69 == 0 && iLocal_70 == 0) && iLocal_71 == 0)
	{
		vLocal_41 = { vLocal_43 };
		SET_MOBILE_PHONE_ROTATION(vLocal_41, 0);
		Global_21839 = 0;
	}
}

void func_112(bool bParam0)
{
	if (func_158())
	{
		if (bParam0)
		{
			if (!_0xBCEDB009461DA156())
			{
				_0x7AC24EAB6D74118D(1);
				if (Global_4268340 > 0 && Global_4268340 < 99)
				{
					_0x27FEB5254759CDE3(sLocal_20[Global_4268340], 0);
					_0x1B0B4AEED5B9B41C(0.25f);
				}
			}
		}
		else if (_0xBCEDB009461DA156())
		{
			_0x7AC24EAB6D74118D(0);
		}
	}
}

void func_113()
{
	if (Global_4268339 > 0 && Global_4268339 < 99)
	{
		if (Global_1672541 == 0)
		{
			SET_TIMECYCLE_MODIFIER(sLocal_19[Global_4268339]);
		}
	}
}

void func_114()
{
	if (Global_19428)
	{
		iLocal_76 = 0;
		func_59();
		func_101(1, 1);
		func_108(1, 1);
		iLocal_66 = 1;
		Global_21842 = 1;
	}
}

void func_115()
{
	if (Global_4456448.f_185406 == 1 && func_116())
	{
		return;
	}
	if (iLocal_78 == 0)
	{
		if (IS_BIT_SET(Global_7356, 28))
		{
			StringCopy(&cLocal_96, "CELL_296", 16);
			func_54();
		}
		else
		{
			StringCopy(&cLocal_96, "CELL_295", 16);
			func_28();
		}
		if (ARE_STRINGS_EQUAL(&cLocal_96, "DUMMYCOMPARISON"))
		{
			fLocal_49 = fLocal_50;
			fLocal_47 = fLocal_48;
			fLocal_50 = fLocal_49;
			fLocal_48 = fLocal_47;
		}
		iLocal_51 = 1;
	}
}

int func_116()
{
	if (((func_120() || func_119()) || func_118()) || func_117())
	{
		return 1;
	}
	return 0;
}

var func_117()
{
	return Global_2448961.f_19;
}

var func_118()
{
	return Global_2448961.f_17;
}

var func_119()
{
	return Global_2448961.f_16;
}

var func_120()
{
	return Global_2448961.f_15;
}

void func_121()
{
	if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
	{
		PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_19475, true);
	}
}

void func_122()
{
	_0x1072F115DAB0717E(0, 0);
	iLocal_72 = 1;
	iLocal_73 = 1;
	iLocal_74 = 1;
	iLocal_75 = 0;
	iLocal_76 = 1;
}

void func_123()
{
	func_124();
}

void func_124()
{
	if (iLocal_101)
	{
		if (timera() > 50)
		{
			iLocal_101 = 0;
		}
	}
	if (iLocal_101 == 0)
	{
	}
}

void func_125()
{
	if (Global_19486.f_1 > 3)
	{
		if (!IS_PAUSE_MENU_ACTIVE())
		{
			DRAW_SCALEFORM_MOVIE(iLocal_91, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_126()
{
	if (func_61(14))
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
		Global_19486 = func_11();
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

void func_127(int iParam0)
{
	if (func_129())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_145())
		{
			func_101(1, 1);
		}
		else
		{
			func_101(0, 0);
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
	if (!func_128())
	{
		Global_19486.f_1 = 3;
	}
}

int func_128()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_129()
{
	return IS_BIT_SET(Global_1687880, 19);
}

void func_130()
{
	DISABLE_CONTROL_ACTION(0, 0, 1);
	DISABLE_CONTROL_ACTION(0, 56, 1);
	if (iLocal_100 == 0)
	{
		SET_INPUT_EXCLUSIVE(0, Global_19459);
		SET_INPUT_EXCLUSIVE(0, Global_19456);
		DISABLE_CONTROL_ACTION(0, 278, 1);
		DISABLE_CONTROL_ACTION(0, 279, 1);
		DISABLE_CONTROL_ACTION(0, 280, 1);
		DISABLE_CONTROL_ACTION(0, 281, 1);
		DISABLE_CONTROL_ACTION(0, 282, 1);
		DISABLE_CONTROL_ACTION(0, 282, 1);
		DISABLE_CONTROL_ACTION(0, 284, 1);
		DISABLE_CONTROL_ACTION(0, 285, 1);
		DISABLE_CONTROL_ACTION(0, 69, 1);
		DISABLE_CONTROL_ACTION(0, 70, 1);
		DISABLE_CONTROL_ACTION(0, 114, 1);
		DISABLE_CONTROL_ACTION(0, 71, 1);
		DISABLE_CONTROL_ACTION(0, 72, 1);
		DISABLE_CONTROL_ACTION(0, 74, 1);
		DISABLE_CONTROL_ACTION(0, 75, 1);
		DISABLE_CONTROL_ACTION(0, 76, 1);
		DISABLE_CONTROL_ACTION(0, 73, 1);
		DISABLE_CONTROL_ACTION(0, 77, 1);
		DISABLE_CONTROL_ACTION(0, 78, 1);
		DISABLE_CONTROL_ACTION(0, 286, 1);
		DISABLE_CONTROL_ACTION(0, 287, 1);
		DISABLE_CONTROL_ACTION(0, 79, 1);
		DISABLE_CONTROL_ACTION(0, 80, 1);
		DISABLE_CONTROL_ACTION(0, 81, 1);
		DISABLE_CONTROL_ACTION(0, 82, 1);
		DISABLE_CONTROL_ACTION(0, 86, 1);
		DISABLE_CONTROL_ACTION(0, 59, 1);
		DISABLE_CONTROL_ACTION(0, 60, 1);
		DISABLE_CONTROL_ACTION(0, 61, 1);
		DISABLE_CONTROL_ACTION(0, 62, 1);
		DISABLE_CONTROL_ACTION(0, 63, 1);
		DISABLE_CONTROL_ACTION(0, 64, 1);
		DISABLE_CONTROL_ACTION(0, 87, 1);
		DISABLE_CONTROL_ACTION(0, 88, 1);
		DISABLE_CONTROL_ACTION(0, 89, 1);
		DISABLE_CONTROL_ACTION(0, 90, 1);
		DISABLE_CONTROL_ACTION(0, 107, 1);
		DISABLE_CONTROL_ACTION(0, 108, 1);
		DISABLE_CONTROL_ACTION(0, 109, 1);
		DISABLE_CONTROL_ACTION(0, 110, 1);
		DISABLE_CONTROL_ACTION(0, 111, 1);
		DISABLE_CONTROL_ACTION(0, 112, 1);
		DISABLE_CONTROL_ACTION(0, 113, 1);
		DISABLE_CONTROL_ACTION(0, 114, 1);
		DISABLE_CONTROL_ACTION(0, 91, 1);
		DISABLE_CONTROL_ACTION(0, 92, 1);
		DISABLE_CONTROL_ACTION(0, 68, 1);
		DISABLE_CONTROL_ACTION(0, 102, 1);
		DISABLE_CONTROL_ACTION(0, 136, 1);
		DISABLE_CONTROL_ACTION(0, 137, 1);
		DISABLE_CONTROL_ACTION(0, 138, 1);
		DISABLE_CONTROL_ACTION(0, 139, 1);
		DISABLE_CONTROL_ACTION(0, 102, 1);
	}
}

int func_131()
{
	int iVar0;
	
	if (!IS_PED_INJURED(IS_PED_INJURED()))
	{
		if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
		{
			iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
			if (IS_VEHICLE_SEAT_FREE(iVar0, -1, 0))
			{
				return 1;
			}
			else if (!GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) == GET_PED_IN_VEHICLE_SEAT())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_132()
{
	var uVar0;
	
	func_140(&uVar0);
	if (Global_1312850 == 0)
	{
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_139())
	{
		return 1;
	}
	if (Global_2461241)
	{
		return 1;
	}
	if (func_138())
	{
		return 1;
	}
	if (func_137(159))
	{
		if (!func_136())
		{
			return 1;
		}
	}
	if (func_137(157))
	{
		return 1;
	}
	if (!NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_133() != 0)
	{
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_133()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_133()
{
	switch (func_135())
	{
		case 0:
			return func_134();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_134()
{
	switch (Global_2461343)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_135()
{
	return Global_30736;
}

bool func_136()
{
	return Global_2448961.f_598;
}

int func_137(int iParam0)
{
	if (GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_138()
{
	return Global_2458999;
}

bool func_139()
{
	return Global_2448961.f_593;
}

void func_140(var uParam0)
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
					func_141(iVar0);
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

void func_141(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_106(vVar0.y, 1, 1))
		{
			iVar1 = GET_PLAYER_PED(vVar0.y);
			if (DOES_ENTITY_EXIST(iVar1))
			{
				if (IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && IS_VEHICLE_WINDOW_INTACT())
					{
						if (func_142(iVar2, &bVar3))
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

int func_142(int iParam0, var uParam1)
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

void func_143()
{
	if (iLocal_106 == 1)
	{
		HIDE_HUD_COMPONENT_THIS_FRAME(7);
		HIDE_HUD_COMPONENT_THIS_FRAME(1);
		HIDE_HUD_COMPONENT_THIS_FRAME(3);
		HIDE_HUD_COMPONENT_THIS_FRAME(4);
		HIDE_HUD_COMPONENT_THIS_FRAME(6);
		HIDE_HUD_COMPONENT_THIS_FRAME(8);
		HIDE_HUD_COMPONENT_THIS_FRAME(9);
		HIDE_HUD_COMPONENT_THIS_FRAME(2);
	}
	else
	{
		HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
}

void func_144(char* sParam0, int iParam1)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

bool func_145()
{
	return IS_BIT_SET(Global_1687880, 5);
}

void func_146()
{
	if (func_147())
	{
		_0x4AF92ACD3141D96C();
		if (_0x2A893980E96B659A(0))
		{
			iLocal_54 = 1;
			iLocal_62 = 0;
		}
		else
		{
			Global_21842 = 1;
			Global_19486.f_1 = 3;
			_REMOVE_LOADING_PROMPT();
		}
	}
	else
	{
		iLocal_60 = 0;
		iLocal_61 = 0;
		if (iLocal_55 == 1)
		{
			if (iLocal_78 == 0)
			{
				if (HAS_SCALEFORM_MOVIE_LOADED(iLocal_91))
				{
					if (func_158())
					{
						if (Global_4268340 == 0)
						{
							if (!IS_BIT_SET(Global_4269615, 2))
							{
								func_149(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						func_149(iLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
					}
					else
					{
						if (!IS_BIT_SET(Global_4269615, 2))
						{
							func_149(iLocal_91, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
						func_149(iLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (HAS_SCALEFORM_MOVIE_LOADED(iLocal_91))
			{
				func_149(iLocal_91, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_149(iLocal_91, "SET_REMAINING_PHOTOS", to_float(iLocal_60), to_float(iLocal_61), -1082130432, -1082130432, -1082130432);
			}
			iLocal_55 = 0;
		}
		iLocal_62 = 0;
		_REMOVE_LOADING_PROMPT();
	}
}

int func_147()
{
	if (Global_4456448.f_185406 == 1)
	{
		if (Global_76577)
		{
			return 0;
		}
	}
	if (Global_4456448.f_185407 == 1)
	{
		if (Global_76577)
		{
			return 0;
		}
	}
	if (IS_XBOX360_VERSION() || IS_XBOX360_VERSION())
	{
		if (IS_BIT_SET(Global_7357, 28))
		{
			return 0;
		}
	}
	return 1;
}

void func_148(int iParam0, char* sParam1)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	END_SCALEFORM_MOVIE_METHOD();
}

void func_149(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

int func_150()
{
	if (Global_76577)
	{
		Global_19486 = 3;
	}
	else
	{
		Global_19486 = func_11();
	}
	if (Global_19486 > 3)
	{
		Global_19486 = 3;
	}
	return Global_111560.f_14046[Global_19486 /*20*/].f_7;
}

void func_151()
{
	if (Global_19486.f_1 > 3)
	{
		Global_19486.f_1 = 8;
	}
	Global_21841 = 0;
	iLocal_78 = 0;
	if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
	{
		vLocal_34 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true) };
	}
	if (Global_19428)
	{
		while (timera() < iLocal_88)
		{
			wait(0);
			func_125();
			func_83();
			_0xEB2D525B57F42B40();
		}
		func_148(iLocal_91, "OPEN_SHUTTER");
		func_143();
		func_115();
		iLocal_80 = 1;
		settimerb(0);
	}
	else
	{
		func_108(1, 1);
		func_112(1);
		func_59();
		func_113();
		func_57(0);
		iLocal_66 = 1;
	}
}

void func_152(int iParam0)
{
	if (iParam0 == 1)
	{
		SET_BIT(&Global_7356, 15);
	}
	else
	{
		CLEAR_BIT(&Global_7356, 15);
	}
}

bool func_153()
{
	return Global_1312850;
}

int func_154(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!IS_PED_INJURED(iParam0))
	{
		if (IS_PED_IN_ANY_VEHICLE(iParam0, iParam1))
		{
			iVar0 = GET_VEHICLE_PED_IS_IN(iParam0, iParam1);
			if (DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = GET_VEHICLE_MODEL_NUMBER_OF_SEATS(GET_VEHICLE_MODEL_NUMBER_OF_SEATS(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!IS_VEHICLE_SEAT_FREE(iVar0, iVar3, 0))
					{
						if (GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

void func_155()
{
}

int func_156(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_PC_VERSION())
	{
		if (_0xA0FE76168A189DDB() != iParam0 && bParam2)
		{
			_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_157()
{
	if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
	{
		if (GET_PED_STEALTH_MOVEMENT(GET_PED_STEALTH_MOVEMENT()))
		{
			SET_PED_STEALTH_MOVEMENT(SET_PED_STEALTH_MOVEMENT(), 0, 0);
			_0x53F4892D18EC90A4(fLocal_107);
			_0x3117D84EFA60F77B(fLocal_108);
			_0xAC2890471901861C(fLocal_109);
		}
		else
		{
			_0x53F4892D18EC90A4(fLocal_107);
			_0x3117D84EFA60F77B(fLocal_108);
			_0xAC2890471901861C(fLocal_109);
		}
	}
	_0x15E69E2802C24B8D(fLocal_110);
	_0xD6ADE981781FCA09(fLocal_111);
	_0xF1E22DC13F5EEBAD(fLocal_112);
	_0x466DA42C89865553(fLocal_113);
	func_56();
}

int func_158()
{
	if (iLocal_23 == 0)
	{
		iLocal_23 = 1;
	}
	return 1;
}

__________________________
Native Named by Reliency
1577160374
__________________________
