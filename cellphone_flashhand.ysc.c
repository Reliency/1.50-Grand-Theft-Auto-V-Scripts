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
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	struct<2> Local_33 = { 0, 0 } ;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	vector3 vLocal_38 = { 0f, 0f, 0f };
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	struct<2> Local_47 = { 0, 0 } ;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
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
	var uLocal_63 = 0;
	bool bLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	vector3 vLocal_71 = { 0f, 0f, 0f };
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	struct<13> Var1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	
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
	fLocal_22 = 0.73f;
	fLocal_23 = 0.55f;
	fLocal_24 = 0.73f;
	fLocal_25 = 0.45f;
	fLocal_26 = 0f;
	fLocal_27 = 0f;
	NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_19661 = 145;
	CLEAR_BIT(&Global_7357, 8);
	CLEAR_BIT(&Global_7356, 14);
	CLEAR_BIT(&Global_4269615, 3);
	CLEAR_BIT(&Global_7357, 10);
	CLEAR_BIT(&Global_7356, 17);
	CLEAR_BIT(&Global_7356, 9);
	CLEAR_BIT(&Global_7356, 26);
	CLEAR_BIT(&Global_7356, 23);
	CLEAR_BIT(&Global_7357, 24);
	CLEAR_BIT(&Global_7357, 25);
	CLEAR_BIT(&Global_7357, 27);
	CLEAR_BIT(&Global_7357, 26);
	CLEAR_BIT(&Global_7356, 30);
	Global_2541153 = 0;
	iLocal_72 = 0;
	_0x1072F115DAB0717E(0, 0);
	SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(0);
	Global_19452 = 0;
	iLocal_30 = 0;
	Global_19430 = 0;
	Global_19470 = 0;
	Global_19471 = 0;
	func_110();
	Global_19417 = { Global_19449 };
	Global_19490 = 4;
	Global_19491 = 0;
	Global_7961 = 1;
	Global_19466 = Global_19490;
	if (Global_19468 == 0)
	{
		Global_19469 = 0;
		if (Global_76577)
		{
			Global_19467 = 0x67D02A194A2FC2BD("cellphone_ifruit");
			iLocal_41 = 1;
			if (iLocal_41 == 1)
			{
			}
		}
		else if (Global_19429)
		{
			Global_19474 = 1;
			Global_19467 = 0x67D02A194A2FC2BD("cellphone_prologue");
		}
		else
		{
			Global_19467 = 0x67D02A194A2FC2BD(&(Global_111560.f_14046[Global_19486 /*20*/]));
		}
		settimera(0);
		while (!HAS_SCALEFORM_MOVIE_LOADED(Global_19467) && Global_19469 == 0)
		{
			wait(0);
			if (timera() > 20000)
			{
				Global_19469 = 1;
			}
			if (IS_PC_VERSION())
			{
				if (DECOR_EXIST_ON(DECOR_EXIST_ON(), "Synched"))
				{
					if (timera() > 2000)
					{
						Global_19469 = 1;
					}
				}
			}
			if (Global_19485 == 1)
			{
				func_109();
			}
		}
		if (Global_19469 == 1)
		{
			if (HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
			{
				func_108(Global_19467, "SHUTDOWN_MOVIE");
			}
			wait(0);
			SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_19467);
			Global_19427 = 0;
			Global_19468 = 0;
			Global_19662 = 0;
			if (Global_111560.f_14046.f_84 == 1)
			{
				Global_111560.f_14046.f_84 = 0;
				CLEAR_FLOATING_HELP(0, 1);
			}
			Global_19430 = 1;
			Global_19486.f_1 = 3;
			func_107();
			Global_19474 = 0;
			DESTROY_MOBILE_PHONE();
			CLEAR_BIT(&Global_7356, 9);
			CLEAR_BIT(&Global_7356, 27);
			CLEAR_BIT(&Global_7356, 30);
			CLEAR_BIT(&Global_7357, 5);
			CLEAR_BIT(&Global_7357, 21);
			CLEAR_BIT(&Global_7358, 2);
			if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
			{
				STOP_PED_RINGTONE(STOP_PED_RINGTONE());
			}
			if (IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
			{
				STOP_PED_RINGTONE(STOP_PED_RINGTONE());
			}
			Global_19664 = 0;
			Global_21865 = 0;
			Global_21864 = 0;
			Global_20818 = 0;
			func_105();
			func_103();
			Global_4269894 = 0;
			TERMINATE_THIS_THREAD();
		}
		Global_19410 = 0.1f;
		Global_19411 = 0.38f;
		Global_19412 = 0.195f;
		Global_19413 = 0.05f;
		if ((IS_XBOX360_VERSION() || IS_XBOX360_VERSION()) || IS_XBOX360_VERSION())
		{
			GET_HUD_COLOUR(18, &iLocal_60, &iLocal_61, &iLocal_62, &uLocal_63);
			func_102(Global_19467, "SET_SOFT_KEYS_COLOUR", 2f, to_float(iLocal_60), to_float(iLocal_61), to_float(iLocal_62), -1082130432);
			GET_HUD_COLOUR(9, &iLocal_60, &iLocal_61, &iLocal_62, &uLocal_63);
			func_102(Global_19467, "SET_SOFT_KEYS_COLOUR", 1f, to_float(iLocal_60), to_float(iLocal_61), to_float(iLocal_62), -1082130432);
			GET_HUD_COLOUR(6, &iLocal_60, &iLocal_61, &iLocal_62, &uLocal_63);
			func_102(Global_19467, "SET_SOFT_KEYS_COLOUR", 3f, to_float(iLocal_60), to_float(iLocal_61), to_float(iLocal_62), -1082130432);
		}
		else
		{
			GET_HUD_COLOUR(9, &iLocal_60, &iLocal_61, &iLocal_62, &uLocal_63);
			func_102(Global_19467, "SET_SOFT_KEYS_COLOUR", 2f, to_float(iLocal_60), to_float(iLocal_61), to_float(iLocal_62), -1082130432);
			GET_HUD_COLOUR(126, &iLocal_60, &iLocal_61, &iLocal_62, &uLocal_63);
			func_102(Global_19467, "SET_SOFT_KEYS_COLOUR", 1f, to_float(iLocal_60), to_float(iLocal_61), to_float(iLocal_62), -1082130432);
			GET_HUD_COLOUR(6, &iLocal_60, &iLocal_61, &iLocal_62, &uLocal_63);
			func_102(Global_19467, "SET_SOFT_KEYS_COLOUR", 3f, to_float(iLocal_60), to_float(iLocal_61), to_float(iLocal_62), -1082130432);
		}
		if (Global_19469 == 0)
		{
		}
		func_101();
		if (Global_76577)
		{
			StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
		}
		Global_19468 = 1;
	}
	Global_7359 = 99;
	func_100();
	if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
	{
		iLocal_52 = GET_ENTITY_HEALTH(GET_ENTITY_HEALTH());
	}
	if (IS_RADAR_HIDDEN())
	{
		Global_21819 = 1;
	}
	else
	{
		Global_21819 = 0;
	}
	func_102(Global_19467, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	Global_19428 = 1;
	if (Global_76577)
	{
		Global_19666 = 0;
		Global_4269891 = func_97(2028, -1, 0);
		if (Global_4269891 < 1 || Global_4269891 > 7)
		{
			Global_4269891 = 1;
		}
		func_102(Global_19467, "SET_THEME", to_float(Global_4269891), -1082130432, -1082130432, -1082130432, -1082130432);
		func_96();
		Global_4269892 = func_97(2027, -1, 0);
		if (Global_4269892 == 0)
		{
			Var1 = { func_95(PLAYER_ID()) };
			iVar2 = 0;
			if (_0x72D918C99BCACC54(0) == 0)
			{
			}
			if (Global_4269895 == 1)
			{
			}
			if ((NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var1) && NETWORK_CLAN_PLAYER_IS_ACTIVE(0)) && Global_4269895 == 0)
			{
				if (_NETWORK_GET_PLAYER_CREW_EMBLEM_TXD_NAME(&Var1, &uVar0))
				{
				}
				else
				{
					iVar2 = 1;
				}
				if (iVar2 == 0)
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_BACKGROUND_CREW_IMAGE");
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
					ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&uVar0);
					END_TEXT_COMMAND_SCALEFORM_STRING();
					END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					func_102(Global_19467, "SET_BACKGROUND_IMAGE", to_float(0), -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			else
			{
				func_102(Global_19467, "SET_BACKGROUND_IMAGE", to_float(0), -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else
		{
			func_102(Global_19467, "SET_BACKGROUND_IMAGE", to_float(Global_4269892), -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else
	{
		if (Global_19429)
		{
			Global_19666 = 0;
		}
		else if (Global_111560.f_14046.f_88 == 1 || Global_111560.f_14046.f_89 == 1)
		{
			Global_19666 = 0;
		}
		else
		{
			Global_19666 = 0;
		}
		func_102(Global_19467, "SET_THEME", to_float(Global_111560.f_14046[Global_19486 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
		if (Global_8160 == 0)
		{
			func_102(Global_19467, "SET_BACKGROUND_IMAGE", to_float(Global_111560.f_14046[Global_19486 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			SET_MOBILE_PHONE_SCALE(575f);
		}
		func_96();
	}
	iLocal_42 = func_94();
	if (Global_19429 == 0)
	{
		func_82();
	}
	Global_19464 = 0;
	Global_19665 = 0;
	CLEAR_BIT(&Global_7356, 9);
	Global_2458994 = 0;
	if (func_80(0) && NETWORK_IS_SIGNED_ONLINE())
	{
		Global_2458994 = 1;
	}
	func_102(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_78();
	func_76();
	func_75(1);
	PLAY_SOUND_FRONTEND(-1, "Pull_Out", &Global_19475, true);
	settimerb(0);
	while (Global_19486.f_1 < 6 && Global_19469 == 0)
	{
		wait(0);
		if (timerb() > 10000)
		{
			Global_19469 = 1;
		}
		if (Global_19486.f_1 < 4)
		{
			Global_19469 = 1;
		}
	}
	if (Global_19486.f_1 == 5 || Global_19486.f_1 == 6)
	{
		if (func_74(14))
		{
			func_102(Global_19467, "DISPLAY_VIEW", 1f, to_float(6), -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_102(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19490), -1082130432, -1082130432, -1082130432);
		}
		if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
		{
			func_102(Global_19467, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_102(Global_19467, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		if (Global_19474)
		{
			func_73(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		}
		else
		{
			func_73(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_19474)
		{
			func_73(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			func_73(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_19666 == 0)
		{
			func_73(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			CLEAR_BIT(&Global_7356, 17);
		}
		else if (Global_76577)
		{
			func_73(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			CLEAR_BIT(&Global_7356, 17);
		}
		else
		{
			if (Global_19665 == 1)
			{
				if (Global_19474)
				{
					func_73(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_73(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else if (Global_19474)
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
			}
			else
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			SET_BIT(&Global_7356, 17);
		}
	}
	Global_19472 = 1;
	func_72();
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_58 = 0xBA7F0B77D80A4EB7();
	}
	else
	{
		iLocal_53 = GET_GAME_TIMER();
	}
	if (Global_19662 == 1)
	{
		if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
		{
			if (Global_111560.f_14046.f_84 == 0)
			{
				Global_111560.f_14046.f_84 = 1;
				if (Global_19431 == 0)
				{
					fVar3 = 0.75f;
					fVar4 = 0.8f;
				}
				else
				{
					fVar3 = 0.65f;
					fVar4 = 0.77f;
				}
				if (fVar3 == fVar4)
				{
				}
				func_71("CELL_7052", 10000);
			}
		}
	}
	if (Global_76577 == 0)
	{
		iLocal_18 = GET_GAME_TIMER() + 375;
	}
	if (func_70())
	{
		iLocal_35 = 1;
	}
	else
	{
		iLocal_35 = 0;
	}
	if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
	{
		if (IS_PED_IN_COVER(IS_PED_IN_COVER(), 0))
		{
			iLocal_36 = 1;
			if (func_70())
			{
				func_69();
			}
		}
		else
		{
			iLocal_36 = 0;
		}
	}
	if (IS_PC_VERSION())
	{
		if (Global_76577 == 0)
		{
			iLocal_55 = GET_GAME_TIMER();
			iLocal_57 = 0;
		}
	}
	while (true)
	{
		wait(0);
		if (IS_BIT_SET(Global_4269615, 24))
		{
			if (!Global_19665)
			{
				if (Global_19486.f_1 == 6 || Global_19486.f_1 > 6)
				{
					CLEAR_BIT(&Global_4269615, 24);
					func_78();
					func_102(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_75(1);
					if (Global_19486.f_1 == 6)
					{
						func_102(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19466), -1082130432, -1082130432, -1082130432);
					}
				}
			}
		}
		if (func_68())
		{
			DISABLE_CONTROL_ACTION(0, 114, 1);
		}
		if (Global_76577 == 0)
		{
			if (iLocal_32)
			{
				if (Global_19486.f_1 == 6 || Global_19486.f_1 == 7)
				{
					iLocal_32 = 0;
				}
			}
			if (Global_19486.f_1 > 4)
			{
				if ((IS_BIT_SET(Global_7356, 14) && Global_4269894 == 0) && Global_19426 == 0)
				{
					if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
					{
						if (func_67())
						{
							GET_MOBILE_PHONE_POSITION(&Local_33);
							if (Global_19432[Global_19431 /*3*/].f_1 != Local_33.f_1)
							{
								func_65();
							}
						}
						else
						{
							GET_MOBILE_PHONE_POSITION(&Local_33);
							if (Global_19439[Global_19431 /*3*/].f_1 != Local_33.f_1)
							{
								if (!func_68())
								{
								}
								if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) < 1)
								{
									func_63();
								}
							}
						}
						if (iLocal_36 == 0)
						{
							if (IS_PED_IN_COVER(IS_PED_IN_COVER(), 0))
							{
								iLocal_36 = 1;
								func_63();
								func_69();
							}
						}
						else if (!IS_PED_IN_COVER(IS_PED_IN_COVER(), 0))
						{
							iLocal_36 = 0;
							func_65();
							if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
							{
								if (Global_20805 != 2)
								{
									func_62();
								}
							}
						}
						if (iLocal_35 == 0)
						{
							if (func_70())
							{
								iLocal_35 = 1;
								if (IS_PED_IN_COVER(IS_PED_IN_COVER(), 0))
								{
									func_69();
								}
								func_65();
							}
						}
						else
						{
							if (GET_PED_STEALTH_MOVEMENT(GET_PED_STEALTH_MOVEMENT()))
							{
								if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
								{
									DISABLE_CONTROL_ACTION(0, 26, 1);
								}
							}
							if (func_70() == 0)
							{
								iLocal_35 = 0;
								func_63();
							}
						}
					}
				}
			}
		}
		if (Global_2458994 == 1)
		{
			if (!func_80(0) || !NETWORK_IS_SIGNED_ONLINE())
			{
				if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) == 0)
				{
					if (Global_19486.f_1 > 3)
					{
						Global_19471 = 1;
						func_61();
						func_57(0);
						Global_2458994 = 0;
					}
				}
			}
		}
		if (Global_19667 == 0)
		{
			if ((Global_41396 != 15 || Global_7361 == 1) || func_56(0))
			{
				if (!Global_19665)
				{
					if (Global_19486.f_1 == 6)
					{
						Global_7362 = 42;
						func_102(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_78();
						func_76();
						func_75(1);
						func_102(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19466), -1082130432, -1082130432, -1082130432);
					}
				}
				Global_19667 = 1;
			}
		}
		else if ((Global_41396 == 15 && func_56(0) == 0) && Global_7361 == 0)
		{
			if (!Global_19665)
			{
				if (Global_19486.f_1 == 6)
				{
					Global_7362 = 255;
					func_102(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_78();
					func_76();
					func_75(1);
					func_102(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19466), -1082130432, -1082130432, -1082130432);
				}
			}
			Global_19667 = 0;
		}
		if (Global_19668 == 0)
		{
			if (IS_BIT_SET(Global_7357, 3))
			{
				if (!Global_19665)
				{
					if (Global_19486.f_1 == 6)
					{
						func_102(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_78();
						func_76();
						func_75(1);
						func_102(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19466), -1082130432, -1082130432, -1082130432);
					}
				}
				Global_19668 = 1;
			}
		}
		else if (!IS_BIT_SET(Global_7357, 3))
		{
			if (!Global_19665)
			{
				if (Global_19486.f_1 == 6)
				{
					func_102(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_78();
					func_76();
					func_75(1);
					func_102(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19466), -1082130432, -1082130432, -1082130432);
				}
			}
			Global_19668 = 0;
		}
		if (!IS_PAUSE_MENU_ACTIVE())
		{
			if (Global_19414.f_1 != Global_19432[Global_19431 /*3*/].f_1 || func_70())
			{
				if (Global_19486.f_1 > 3)
				{
					if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) == 0)
					{
						if (Global_76577)
						{
							if (Global_19486.f_1 == 9)
							{
								if (Global_20858 == 1 || IS_BIT_SET(Global_7357, 23))
								{
									SET_INPUT_EXCLUSIVE(0, Global_19455);
								}
							}
							else
							{
								SET_INPUT_EXCLUSIVE(0, Global_19455);
							}
						}
						else
						{
							SET_INPUT_EXCLUSIVE(0, Global_19455);
						}
					}
					if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1641206367) == 0)
					{
						SET_INPUT_EXCLUSIVE(0, Global_19456);
						if (IS_BIT_SET(Global_7356, 17))
						{
							SET_INPUT_EXCLUSIVE(0, Global_19457);
						}
					}
					if (!func_55() && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1641206367) == 0)
					{
						SET_INPUT_EXCLUSIVE(0, Global_19458);
					}
				}
			}
			if (Global_19414.f_1 == Global_19432[Global_19431 /*3*/].f_1)
			{
			}
		}
		if (!_IS_INPUT_DISABLED(2))
		{
			DISABLE_CONTROL_ACTION(0, 140, 1);
			DISABLE_CONTROL_ACTION(0, 141, 1);
		}
		if (!IS_PAUSE_MENU_ACTIVE())
		{
			if (!Global_73784)
			{
				if (!func_68())
				{
					SET_INPUT_EXCLUSIVE(0, 180);
					SET_INPUT_EXCLUSIVE(0, 181);
					ENABLE_CONTROL_ACTION(0, 180, 1);
					ENABLE_CONTROL_ACTION(0, 181, 1);
				}
				SET_INPUT_EXCLUSIVE(0, Global_19460);
				if (!func_55())
				{
					SET_INPUT_EXCLUSIVE(0, Global_19461);
				}
				if (Global_19486.f_1 > 4)
				{
					SET_INPUT_EXCLUSIVE(0, Global_19463);
				}
			}
		}
		if (func_54(2, Global_19454, 0))
		{
			iLocal_50 = 1;
			settimera(0);
		}
		if (iLocal_31 == 1)
		{
			if (!IS_CONTROL_PRESSED(2, Global_19455))
			{
				Global_7360 = 1;
				iLocal_31 = 0;
			}
			if (!Global_19486.f_1 > 3)
			{
				iLocal_31 = 0;
			}
		}
		if (iLocal_50)
		{
			if (IS_CONTROL_PRESSED(2, Global_19454))
			{
				if (timera() > 5000)
				{
					Global_19486.f_1 = 3;
					func_52();
				}
			}
			else
			{
				iLocal_50 = 0;
			}
		}
		Global_7964 = GET_GAME_TIMER();
		if (Global_19473)
		{
			func_72();
			Global_19472 = 1;
			Global_19473 = 0;
		}
		if (Global_19664 == 0)
		{
			HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HIDE_HUD_COMPONENT_THIS_FRAME(9);
			func_45();
			func_44();
			SET_TEXT_RENDER_ID(iLocal_39);
			if (Global_19472 == 1)
			{
				_SET_UI_LAYER(4);
				if (Global_19429)
				{
					DRAW_SCALEFORM_MOVIE(Global_19467, Global_19406, Global_19407, Global_19408, Global_19409, 255, 255, 255, 255, 0);
				}
				else
				{
					DRAW_SCALEFORM_MOVIE(Global_19467, Global_19406, Global_19407, Global_19408, Global_19409, 255, 255, 255, 255, 0);
				}
				func_100();
			}
			if (Global_19426 == 1)
			{
				if (Global_19486.f_1 > 3)
				{
					func_43();
				}
			}
			else if (Global_19486.f_1 > 3)
			{
				if (Global_4269894 == 1)
				{
					func_42();
				}
				if (IS_BIT_SET(Global_7357, 25))
				{
					if (Global_76577 == 1)
					{
						func_41();
					}
				}
				else if (!IS_BIT_SET(Global_7357, 24))
				{
					if (IS_BIT_SET(Global_7357, 26))
					{
						if (func_54(2, Global_19453, 0))
						{
							SET_BIT(&Global_7357, 25);
							CLEAR_BIT(&Global_7357, 26);
							CLEAR_BIT(&Global_7358, 2);
						}
					}
				}
				else if (Global_76577 == 1)
				{
					func_40();
				}
			}
		}
		if (iLocal_30)
		{
			if (Global_19486.f_1 == 6)
			{
				func_36();
			}
		}
		else if (!IS_BIT_SET(Global_7356, 23))
		{
			if (Global_19486.f_1 == 5 || Global_19486.f_1 == 6)
			{
				if (Global_19664 == 0)
				{
					if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) < 1 && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) < 1)
					{
						if (Global_19429 == 0)
						{
							if (IS_BIT_SET(Global_7356, 14))
							{
								if (!Global_76577)
								{
									if (iLocal_31 == 0)
									{
										if (!func_74(14))
										{
											func_35();
										}
										else if (Global_2458994)
										{
											func_34();
										}
									}
								}
								else
								{
									func_23();
								}
							}
						}
						if (IS_BIT_SET(Global_7356, 9))
						{
							func_20(0, 0, 1, 1);
						}
						else if (Global_21864 == 0)
						{
							if (!IS_BIT_SET(Global_4269615, 3))
							{
								if (Global_76577)
								{
									func_19();
								}
								func_18();
								func_16();
							}
						}
						else
						{
							if (Global_76577)
							{
								func_19();
							}
							if (!IS_BIT_SET(Global_4269615, 3))
							{
								if (Global_21864 == 1)
								{
									if (IS_BIT_SET(Global_4269615, 1))
									{
										if (IS_BIT_SET(Global_7356, 14))
										{
											if (Global_76577)
											{
												func_20(7, 0, 1, 0);
											}
											else
											{
												Global_21865 = 0;
											}
											Global_21864 = 0;
											CLEAR_BIT(&Global_4269615, 1);
										}
									}
									else if (IS_BIT_SET(Global_7356, 14))
									{
										func_20(7, 0, 1, 0);
										Global_21864 = 0;
									}
								}
								else
								{
									if (Global_21864 == 3)
									{
										func_20(1, 0, 1, 0);
										Global_21864 = 0;
									}
									if (Global_21864 == 2)
									{
										func_20(14, 0, 1, 0);
										Global_21864 = 0;
									}
									if (Global_21864 == 4)
									{
										func_20(23, 0, 1, 0);
										Global_21864 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		else if (HAS_SCRIPT_LOADED(&(Global_7363[Global_19489 /*15*/].f_5)))
		{
			if (Global_19489 == 0)
			{
				if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_7363[Global_19489 /*15*/].f_9) == 0)
				{
					Global_19484 = start_new_script(&(Global_7363[Global_19489 /*15*/].f_5), 4000);
				}
			}
			else
			{
				iVar5 = 0;
				if (Global_19489 == 23)
				{
					if (IS_BIT_SET(Global_4269615, 4) == 0 && Global_1573923 == 0)
					{
					}
				}
				if (Global_19489 == 2 || iVar5 == 1)
				{
					if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_7363[Global_19489 /*15*/].f_9) == 0)
					{
						Global_19484 = start_new_script(&(Global_7363[Global_19489 /*15*/].f_5), 4592);
					}
				}
				else if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_7363[Global_19489 /*15*/].f_9) == 0)
				{
					Global_19484 = start_new_script(&(Global_7363[Global_19489 /*15*/].f_5), 2552);
				}
			}
			SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_7363[Global_19489 /*15*/].f_5));
			Global_7359 = 99;
			CLEAR_BIT(&Global_7356, 23);
		}
		if (_IS_INPUT_DISABLED(2))
		{
			if (IS_PAUSE_MENU_ACTIVE())
			{
				DISABLE_CONTROL_ACTION(2, 200, 1);
			}
		}
		if (Global_19486.f_1 == 1)
		{
			func_7();
		}
		if (Global_19486.f_1 == 0)
		{
			func_7();
		}
		if (Global_19486.f_1 == 3)
		{
			func_7();
		}
		else
		{
			if (Global_20818)
			{
				if (Global_19486.f_1 == 9)
				{
					if (Global_76577)
					{
						if (!IS_BIT_SET(Global_7357, 31))
						{
							if (!IS_BIT_SET(Global_7357, 27))
							{
								if (func_6())
								{
									if (!IS_BIT_SET(Global_7356, 9))
									{
										if (func_54(2, Global_19458, 0))
										{
											if (!IS_PC_VERSION())
											{
												if (!Global_19485 == 1)
												{
													if (Global_19486.f_1 > 6)
													{
														SET_BIT(&Global_7357, 24);
														SET_BIT(&Global_7357, 27);
														CLEAR_BIT(&Global_7357, 26);
														CLEAR_BIT(&Global_7357, 25);
														SET_BIT(&(Global_2531497.f_1732), 17);
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
			if (Global_19469 == 1)
			{
				Global_19471 = 1;
				func_57(0);
			}
			if (Global_19470 == 1)
			{
				Global_19471 = 1;
				func_57(0);
			}
			if (Global_76577)
			{
				if (!IS_BIT_SET(Global_7358, 0))
				{
					if (IS_PAUSE_MENU_ACTIVE() && !func_5())
					{
						if (Global_2537824.f_1 == 1)
						{
						}
						else
						{
							func_61();
							func_57(0);
						}
					}
				}
			}
			if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
			{
				if (IS_ENTITY_IN_WATER(IS_ENTITY_IN_WATER()))
				{
					if (GET_ENTITY_SUBMERGED_LEVEL(GET_ENTITY_SUBMERGED_LEVEL()) > 0.3f)
					{
						SET_BIT(&Global_7357, 4);
					}
					if (GET_ENTITY_SUBMERGED_LEVEL(GET_ENTITY_SUBMERGED_LEVEL()) == 1f)
					{
						Global_19471 = 1;
						func_61();
						func_57(0);
					}
				}
				if (func_74(14))
				{
					if ((GET_ENTITY_MODEL(GET_ENTITY_MODEL()) == Global_111560.f_28045[0 /*29*/] || GET_ENTITY_MODEL(GET_ENTITY_MODEL()) == Global_111560.f_28045[1 /*29*/]) || GET_ENTITY_MODEL(GET_ENTITY_MODEL()) == Global_111560.f_28045[2 /*29*/])
					{
						iLocal_73 = 0;
					}
					else if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
					{
						iLocal_73 = 1;
					}
				}
				if ((((((((((((((IS_PED_IN_ANY_TRAIN(IS_PED_IN_ANY_TRAIN()) || IS_PED_IN_ANY_TRAIN(IS_PED_IN_ANY_TRAIN())) || IS_PED_IN_ANY_TRAIN(IS_PED_IN_ANY_TRAIN())) || IS_PED_IN_ANY_TRAIN()) || IS_PED_IN_ANY_TRAIN(IS_PED_IN_ANY_TRAIN())) || IS_PED_IN_ANY_TRAIN(IS_PED_IN_ANY_TRAIN())) || IS_PED_IN_ANY_TRAIN(IS_PED_IN_ANY_TRAIN(), 0)) || IS_PED_IN_ANY_TRAIN(IS_PED_IN_ANY_TRAIN())) || IS_PED_IN_ANY_TRAIN(joaat("michael1")) > 0) || Global_76838 == 1) || func_3(IS_PED_IN_ANY_TRAIN())) || IS_PED_IN_ANY_TRAIN(IS_PED_IN_ANY_TRAIN(IS_PED_IN_ANY_TRAIN()), 0)) || IS_PED_IN_ANY_TRAIN(IS_PED_IN_ANY_TRAIN())) || IS_PED_IN_ANY_TRAIN()) || iLocal_73)
				{
					if (!Global_19429)
					{
						SET_BIT(&Global_7357, 4);
					}
				}
				if (IS_PC_VERSION())
				{
					if (Global_76577 == 0)
					{
						if (iLocal_57 == 0)
						{
							if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
							{
								if (!IS_PED_SITTING_IN_VEHICLE(IS_PED_SITTING_IN_VEHICLE(), IS_PED_SITTING_IN_VEHICLE(IS_PED_SITTING_IN_VEHICLE(), 0)))
								{
									iLocal_55 = GET_GAME_TIMER();
									iLocal_57 = 1;
								}
							}
						}
						else
						{
							iLocal_56 = GET_GAME_TIMER();
							iLocal_59 = (iLocal_56 - iLocal_55);
							if (iLocal_59 < 4000)
							{
								SET_BIT(&Global_7357, 4);
							}
							else
							{
								iLocal_57 = 0;
							}
						}
					}
				}
				if (IS_CONTROL_PRESSED(0, 25) || IS_CONTROL_PRESSED(0, 68))
				{
					if (Global_76577)
					{
						GET_CURRENT_PED_WEAPON(GET_CURRENT_PED_WEAPON(), &iLocal_65, 1);
						if (iLocal_65 != joaat("weapon_unarmed") && Global_19486.f_1 < 7)
						{
							SET_BIT(&Global_7357, 4);
						}
					}
				}
				if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
				{
					iLocal_66 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
					if (GET_ENTITY_MODEL(iLocal_66) == joaat("submersible") || GET_ENTITY_MODEL(iLocal_66) == joaat("submersible2"))
					{
						iLocal_69 = 1;
					}
					else
					{
						iLocal_69 = 0;
					}
					if (((((GET_ENTITY_MODEL(iLocal_66) == joaat("rhino") || GET_ENTITY_MODEL(iLocal_66) == joaat("cutter")) || GET_ENTITY_MODEL(iLocal_66) == -692292317) || GET_ENTITY_MODEL(iLocal_66) == -1435527158) || iLocal_69) || GET_ENTITY_MODEL(iLocal_66, 0) == 0)
					{
						SET_BIT(&Global_7357, 4);
					}
					if (((((((((((((((GET_ENTITY_MODEL(iLocal_66) == joaat("valkyrie") || GET_ENTITY_MODEL(iLocal_66) == joaat("insurgent")) || GET_ENTITY_MODEL(iLocal_66) == joaat("technical")) || GET_ENTITY_MODEL(iLocal_66) == joaat("trash")) || GET_ENTITY_MODEL(iLocal_66) == joaat("trash2")) || GET_ENTITY_MODEL(iLocal_66) == joaat("limo2")) || GET_ENTITY_MODEL(iLocal_66) == -1924433270) || GET_ENTITY_MODEL(iLocal_66) == -32236122) || GET_ENTITY_MODEL(iLocal_66) == 1897744184) || GET_ENTITY_MODEL(iLocal_66) == -1881846085) || GET_ENTITY_MODEL(iLocal_66) == joaat("technical2")) || GET_ENTITY_MODEL(iLocal_66) == joaat("boxville5")) || GET_ENTITY_MODEL(iLocal_66) == -749299473) || GET_ENTITY_MODEL(iLocal_66) == -32878452) || GET_ENTITY_MODEL(iLocal_66) == 1043222410) || GET_ENTITY_MODEL(iLocal_66) == -692292317)
					{
						if (IS_PED_SITTING_IN_VEHICLE(IS_PED_SITTING_IN_VEHICLE(), iLocal_66))
						{
							iVar6 = func_2(PLAYER_PED_ID(), iLocal_66);
							if (iVar6 != -2)
							{
								if (GET_ENTITY_MODEL(iLocal_66) == joaat("insurgent") || GET_ENTITY_MODEL(iLocal_66) == joaat("limo2"))
								{
									if (iVar6 == 3)
									{
										SET_BIT(&Global_7357, 4);
									}
								}
								if (GET_ENTITY_MODEL(iLocal_66) == joaat("trash") || GET_ENTITY_MODEL(iLocal_66) == joaat("trash2"))
								{
									if (iVar6 == 2 || iVar6 == 1)
									{
										SET_BIT(&Global_7357, 4);
									}
								}
								if (GET_ENTITY_MODEL(iLocal_66) == joaat("technical2"))
								{
									if (iVar6 == 1)
									{
										SET_BIT(&Global_7357, 4);
									}
								}
								if (GET_ENTITY_MODEL(iLocal_66) == joaat("boxville5"))
								{
									if (iVar6 == 3)
									{
										SET_BIT(&Global_7357, 4);
									}
								}
								if (GET_ENTITY_MODEL(iLocal_66) == -1924433270)
								{
									if (iVar6 == 3)
									{
										SET_BIT(&Global_7357, 4);
									}
								}
								if (GET_ENTITY_MODEL(iLocal_66) == -32236122)
								{
									if (iVar6 == 1)
									{
										SET_BIT(&Global_7357, 4);
									}
								}
								if (GET_ENTITY_MODEL(iLocal_66) == 1897744184)
								{
									if (iVar6 == 0)
									{
										SET_BIT(&Global_7357, 4);
									}
								}
								if (GET_ENTITY_MODEL(iLocal_66) == -1881846085)
								{
									if (iVar6 == -1)
									{
										SET_BIT(&Global_7357, 4);
									}
								}
								if (_0xE33FFA906CE74880(iLocal_66, iVar6))
								{
									SET_BIT(&Global_7357, 4);
								}
							}
						}
					}
					if (IS_CONTROL_JUST_PRESSED(0, 69))
					{
						if (Global_76577 == 0)
						{
							if (Global_19486.f_1 == 6 || Global_19486.f_1 == 7)
							{
								bVar7 = true;
								if (GET_ENTITY_MODEL(iLocal_66) == 886810209 && GET_ENTITY_MODEL(iLocal_66))
								{
									bVar7 = false;
								}
								if (((IS_THIS_MODEL_A_HELI(IS_THIS_MODEL_A_HELI(iLocal_66)) || IS_THIS_MODEL_A_HELI(IS_THIS_MODEL_A_HELI(iLocal_66))) || IS_THIS_MODEL_A_HELI(iLocal_66) == joaat("submersible")) || IS_THIS_MODEL_A_HELI(iLocal_66) == joaat("submersible2"))
								{
									bVar7 = false;
								}
								if (bVar7)
								{
									func_57(0);
								}
							}
						}
					}
				}
				else
				{
					if (IS_CONTROL_JUST_PRESSED(0, 24))
					{
						if (Global_76577 == 0)
						{
							if (Global_19486.f_1 == 6 || Global_19486.f_1 == 7)
							{
								func_57(0);
							}
						}
					}
					iLocal_69 = 0;
				}
				if (IS_PED_SWIMMING_UNDER_WATER(IS_PED_SWIMMING_UNDER_WATER()))
				{
					Global_19471 = 1;
					func_61();
					func_57(0);
				}
				if (Global_76577 == 0)
				{
					if (GET_ENTITY_HEALTH(GET_ENTITY_HEALTH()) < iLocal_52)
					{
						if (!IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
						{
							Global_19471 = 1;
							func_61();
							func_57(0);
						}
					}
					if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
					{
						if (IS_PED_SWIMMING_UNDER_WATER(IS_PED_SWIMMING_UNDER_WATER()))
						{
							Global_19471 = 1;
							func_61();
							func_57(0);
						}
					}
				}
				else if (func_68())
				{
					if (GET_ENTITY_HEALTH(GET_ENTITY_HEALTH()) < iLocal_52)
					{
						if (!IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
						{
							Global_19471 = 1;
							func_61();
							func_57(0);
						}
					}
				}
				if (IS_AIM_CAM_ACTIVE())
				{
					if (!IS_PED_IN_COVER(IS_PED_IN_COVER(), 1))
					{
						if (!func_68())
						{
							GET_CURRENT_PED_WEAPON(GET_CURRENT_PED_WEAPON(), &iLocal_65, 1);
							if ((iLocal_65 == joaat("weapon_sniperrifle") || iLocal_65 == joaat("weapon_heavysniper")) || iLocal_65 == joaat("weapon_remotesniper"))
							{
								bLocal_64 = true;
							}
							else
							{
								bLocal_64 = false;
							}
							if (IS_FIRST_PERSON_AIM_CAM_ACTIVE())
							{
								if (bLocal_64)
								{
									Global_19471 = 1;
									func_61();
									func_57(0);
								}
							}
						}
					}
				}
				if (IS_PED_BEING_JACKED(IS_PED_BEING_JACKED()))
				{
					Global_19471 = 1;
					func_61();
					func_57(0);
				}
				if (IS_PED_BEING_STUNNED(IS_PED_BEING_STUNNED(), 0))
				{
					Global_19471 = 1;
					func_61();
					func_57(0);
				}
				if (IS_PLAYER_BEING_ARRESTED(IS_PLAYER_BEING_ARRESTED(), 1))
				{
					Global_19471 = 1;
					func_61();
					func_57(0);
				}
				if (IS_PED_RAGDOLL(IS_PED_RAGDOLL()) || IS_PED_RAGDOLL(IS_PED_RAGDOLL()))
				{
					if (Global_76577 == 0)
					{
						Global_19471 = 1;
						func_61();
						func_57(0);
					}
				}
			}
			else
			{
				iVar8 = 0;
				if (((Global_76577 && Global_2537824.f_1) && Global_2537824.f_37) && Global_19486.f_1 == 9)
				{
					iVar8 = 1;
					if (!IS_BIT_SET(Global_7357, 24))
					{
						if (IS_BIT_SET(Global_7357, 26))
						{
							SET_BIT(&Global_7357, 25);
							CLEAR_BIT(&Global_7357, 26);
							CLEAR_BIT(&Global_7358, 2);
						}
					}
				}
				if (iVar8 == 0)
				{
					Global_19471 = 1;
					func_61();
					func_57(0);
				}
			}
		}
		if (Global_19464 == 1)
		{
			func_1();
		}
		if (Global_19485 == 2)
		{
			if (_IS_INPUT_DISABLED(2))
			{
				SET_INPUT_EXCLUSIVE(0, Global_19455);
				SET_INPUT_EXCLUSIVE(0, Global_19456);
				DISABLE_CONTROL_ACTION(0, 24, 1);
				DISABLE_CONTROL_ACTION(0, 257, 1);
			}
			if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
			{
				STOP_PED_RINGTONE(STOP_PED_RINGTONE());
			}
		}
	}
}

void func_1()
{
	if (!IS_CONTROL_PRESSED(2, Global_19455) && !IS_CONTROL_PRESSED(2, Global_19454))
	{
		Global_19464 = 0;
	}
}

int func_2(int iParam0, int iParam1)
{
	if (!IS_ENTITY_DEAD(iParam0, 0) && !IS_ENTITY_DEAD(iParam1, 0))
	{
		if (IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (GET_PED_IN_VEHICLE_SEAT(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (GET_PED_IN_VEHICLE_SEAT(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (GET_PED_IN_VEHICLE_SEAT(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (GET_PED_IN_VEHICLE_SEAT(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
			if (GET_PED_IN_VEHICLE_SEAT(iParam1, 3, 0) == iParam0)
			{
				return 3;
			}
			if (GET_PED_IN_VEHICLE_SEAT(iParam1, 4, 0) == iParam0)
			{
				return 4;
			}
			if (GET_PED_IN_VEHICLE_SEAT(iParam1, 5, 0) == iParam0)
			{
				return 5;
			}
			if (GET_PED_IN_VEHICLE_SEAT(iParam1, 6, 0) == iParam0)
			{
				return 6;
			}
			if (GET_PED_IN_VEHICLE_SEAT(iParam1, 7, 0) == iParam0)
			{
				return 3;
			}
			if (GET_PED_IN_VEHICLE_SEAT(iParam1, 8, 0) == iParam0)
			{
				return 4;
			}
		}
	}
	return -2;
}

int func_3(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_4(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_4(int iParam0)
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

bool func_5()
{
	return IS_BIT_SET(Global_1687880, 5);
}

bool func_6()
{
	return Global_2537824.f_1;
}

void func_7()
{
	float fVar0;
	vector3 vVar1;
	float fVar2;
	
	Global_21864 = 0;
	Global_21865 = 0;
	SET_INPUT_EXCLUSIVE(0, Global_19456);
	HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HIDE_HUD_COMPONENT_THIS_FRAME(9);
	if (Global_19452 == 0)
	{
		SET_MOBILE_PHONE_SCALE(500f);
		if (func_67())
		{
			iLocal_18 = GET_GAME_TIMER();
		}
		else
		{
			iLocal_18 = 0;
		}
		SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(1);
		Global_19452 = 1;
	}
	if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
	{
		if (IS_PED_RINGTONE_PLAYING(IS_PED_RINGTONE_PLAYING()))
		{
			STOP_PED_RINGTONE(STOP_PED_RINGTONE());
		}
	}
	if (IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
	{
		if (IS_PED_RINGTONE_PLAYING(IS_PED_RINGTONE_PLAYING()))
		{
			STOP_PED_RINGTONE(STOP_PED_RINGTONE());
		}
	}
	if (Global_111560.f_14046.f_84 == 1)
	{
		Global_111560.f_14046.f_84 = 0;
		CLEAR_FLOATING_HELP(0, 1);
	}
	fVar0 = 350f;
	if (IS_BIT_SET(Global_7356, 30) || IS_BIT_SET(Global_7358, 2))
	{
		fVar0 = 25f;
	}
	vVar1 = { Global_19446 };
	if (Global_19471 == 1)
	{
		vVar1 = { -45f, 45f, 25f };
	}
	if ((IS_BIT_SET(Global_7357, 26) || IS_BIT_SET(Global_7356, 30)) || IS_BIT_SET(Global_7358, 2))
	{
		vLocal_71 = { Global_19432[Global_19431 /*3*/] };
	}
	else
	{
		vLocal_71 = { Global_19439[Global_19431 /*3*/] };
	}
	fVar2 = func_13(vLocal_71, Global_19432[Global_19431 /*3*/], Global_19446, vVar1, fVar0, 0);
	if (!iLocal_40 && fVar2 >= 1f)
	{
		DESTROY_MOBILE_PHONE();
		iLocal_40 = 1;
	}
	if (iLocal_40 && (GET_GAME_TIMER() - iLocal_18) > 500)
	{
		SET_INPUT_EXCLUSIVE(0, Global_19456);
		if (Global_19486.f_1 == 3)
		{
		}
		if (Global_19486.f_1 == 1)
		{
		}
		if (Global_19486.f_1 == 0)
		{
		}
		SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(0);
		Global_19427 = 0;
		Global_19468 = 0;
		Global_19662 = 0;
		if (Global_111560.f_14046.f_84 == 1)
		{
			Global_111560.f_14046.f_84 = 0;
			CLEAR_FLOATING_HELP(0, 1);
		}
		Global_19430 = 1;
		if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
		{
			STOP_PED_RINGTONE(STOP_PED_RINGTONE());
		}
		if (Global_21819 == 0)
		{
		}
		Global_19664 = 0;
		if (func_10(0))
		{
			func_9();
		}
		CLEAR_BIT(&Global_7357, 8);
		CLEAR_BIT(&Global_7356, 14);
		CLEAR_BIT(&Global_7356, 9);
		CLEAR_BIT(&Global_7356, 27);
		CLEAR_BIT(&Global_7356, 30);
		CLEAR_BIT(&Global_7357, 5);
		CLEAR_BIT(&Global_7357, 19);
		CLEAR_BIT(&Global_7357, 21);
		CLEAR_BIT(&Global_7357, 24);
		CLEAR_BIT(&Global_7357, 25);
		CLEAR_BIT(&Global_7357, 27);
		CLEAR_BIT(&Global_7357, 26);
		CLEAR_BIT(&Global_7358, 2);
		Global_2541153 = 0;
		iLocal_72 = 0;
		if (!IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
		{
			func_8();
		}
		settimera(0);
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_7363[2 /*15*/].f_9) == 0)
		{
			while (IS_THREAD_ACTIVE(Global_19484))
			{
				wait(0);
				SET_INPUT_EXCLUSIVE(0, Global_19456);
				if (HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
				{
					SET_TEXT_RENDER_ID(iLocal_39);
					DRAW_SCALEFORM_MOVIE(Global_19467, Global_19406, Global_19407, Global_19408, Global_19409, 255, 255, 255, 255, 0);
				}
				if (timera() > 5000)
				{
					TERMINATE_THREAD(Global_19484);
				}
			}
		}
		Global_19474 = 0;
		if (HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
		{
			func_108(Global_19467, "SHUTDOWN_MOVIE");
		}
		wait(0);
		SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_19467);
		Global_19452 = 0;
		SET_INPUT_EXCLUSIVE(0, Global_19456);
		if (IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
		{
			if (Global_2537824.f_1)
			{
				if (Global_76577)
				{
					PLAY_SOUND_FRONTEND(-1, "Hang_Up", "Phone_SoundSet_Michael", true);
				}
				else
				{
					PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_19475, true);
				}
			}
		}
		func_105();
		func_103();
		Global_20818 = 0;
		Global_4269894 = 0;
		TERMINATE_THIS_THREAD();
	}
}

void func_8()
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

void func_9()
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

int func_10(int iParam0)
{
	if (Global_41396 == 15)
	{
		return 0;
	}
	if (func_11(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_11(int iParam0)
{
	return func_12(iParam0, Global_41396);
}

int func_12(int iParam0, int iParam1)
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

float func_13(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4, bool bParam5)
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
	if (func_67() && Global_4269894 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = GET_GAME_TIMER();
	}
	fVar1 = func_15((to_float((GET_GAME_TIMER() - iLocal_18)) / fParam4), 0f, 1f);
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
		Global_19414 = { func_14(vParam0, vParam1, fVar2) };
		Global_19417 = { func_14(vParam2, vParam3, fVar2) };
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

Vector3 func_14(vector3 vParam0, vector3 vParam1, float fParam2)
{
	return vParam0 + vParam1 - vParam0 * Vector(fParam2, fParam2, fParam2);
}

float func_15(float fParam0, float fParam1, float fParam2)
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

void func_16()
{
	if (Global_19464 == 0)
	{
		if (func_54(2, Global_19458, 0))
		{
			if (Global_76577 == 0)
			{
				if (Global_19666)
				{
					if (Global_19665 == 0)
					{
						Global_19665 = 1;
						func_102(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_75(2);
						func_17();
						func_102(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19491), -1082130432, -1082130432, -1082130432);
						Global_19466 = Global_19491;
					}
					else
					{
						Global_19665 = 0;
						func_102(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_75(1);
						func_17();
						func_102(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19490), -1082130432, -1082130432, -1082130432);
						Global_19466 = Global_19490;
					}
				}
			}
		}
	}
}

void func_17()
{
	if (Global_19666 == 0)
	{
		func_73(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		CLEAR_BIT(&Global_7356, 17);
	}
	else if (Global_76577)
	{
		func_73(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		CLEAR_BIT(&Global_7356, 17);
	}
	else
	{
		if (Global_19665 == 1)
		{
			if (Global_19474)
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
			}
			else
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else if (Global_19474)
		{
			func_73(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
		}
		else
		{
			func_73(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		SET_BIT(&Global_7356, 17);
	}
}

void func_18()
{
	if (IS_BIT_SET(Global_7357, 10) || iLocal_72 == 1)
	{
		Global_7963 = GET_GAME_TIMER();
		Global_7962 = 0;
		Global_19464 = 1;
		BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "GET_CURRENT_SELECTION");
		iLocal_29 = _END_SCALEFORM_MOVIE_METHOD_RETURN();
		iLocal_30 = 1;
	}
	else if (Global_19464 == 0)
	{
		if (func_54(2, Global_19455, 0))
		{
			if (iLocal_31 == 0)
			{
				Global_7963 = GET_GAME_TIMER();
				Global_7962 = 0;
				Global_19464 = 1;
				BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "GET_CURRENT_SELECTION");
				iLocal_29 = _END_SCALEFORM_MOVIE_METHOD_RETURN();
				iLocal_30 = 1;
			}
		}
	}
}

void func_19()
{
	if (Global_19464 == 0)
	{
		if (func_54(2, Global_19453, 1))
		{
			if (func_97(2090, -1, 0) == 1)
			{
				if (Global_111560.f_14046[Global_19486 /*20*/].f_17 == 0)
				{
					if (!IS_BIT_SET(Global_7357, 3))
					{
						if (!Global_19429)
						{
							if (!IS_BIT_SET(Global_4269615, 3))
							{
								if (!IS_BIT_SET(Global_7356, 14))
								{
									Global_19464 = 1;
									SET_BIT(&Global_4269615, 3);
									func_20(3, 0, 1, 0);
									Global_21864 = 0;
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_20(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	func_110();
	if (Global_76577 == 0)
	{
		if (func_74(14))
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
		if (func_22(0) == 1)
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
				func_21("cellphone_flashhand");
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
	func_78();
	func_76();
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_7363[iParam0 /*15*/].f_9) == 0)
	{
		Global_7962 = 0;
		Global_19486.f_1 = 7;
		func_21(&(Global_7363[iParam0 /*15*/].f_5));
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

void func_21(char* sParam0)
{
	REQUEST_SCRIPT(sParam0);
	while (!HAS_SCRIPT_LOADED(sParam0))
	{
		wait(0);
	}
}

int func_22(int iParam0)
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

void func_23()
{
	if (Global_19465)
	{
		if (timera() > 50)
		{
			Global_19465 = 0;
		}
	}
	if (_IS_INPUT_DISABLED(2))
	{
		if (IS_CONTROL_JUST_PRESSED(2, 180))
		{
			switch (Global_19466)
			{
				case 0:
					if (Global_7925[1])
					{
						func_32();
						Global_19466 = 1;
					}
					break;
				
				case 1:
					if (Global_7925[2])
					{
						func_32();
						Global_19466 = 2;
					}
					break;
				
				case 2:
					if (Global_7925[3])
					{
						func_32();
						func_30();
						Global_19466 = 3;
					}
					else
					{
						func_28();
						func_30();
						Global_19466 = 4;
					}
					break;
				
				case 3:
					if (Global_7925[4])
					{
						func_32();
						Global_19466 = 4;
					}
					break;
				
				case 4:
					if (Global_7925[5])
					{
						func_32();
						Global_19466 = 5;
					}
					break;
				
				case 5:
					if (Global_7925[6])
					{
						func_32();
						func_30();
						Global_19466 = 6;
					}
					break;
				
				case 6:
					if (Global_7925[7])
					{
						func_32();
						Global_19466 = 7;
					}
					break;
				
				case 7:
					if (Global_7925[8])
					{
						func_32();
						Global_19466 = 8;
					}
					else
					{
						func_28();
						func_30();
						Global_19466 = 0;
					}
					break;
				
				case 8:
					if (Global_7925[0])
					{
						func_32();
						func_30();
						Global_19466 = 0;
					}
					else
					{
						func_28();
						func_30();
					}
					break;
				}
		}
		if (IS_CONTROL_JUST_PRESSED(2, 181))
		{
			switch (Global_19466)
			{
				case 0:
					if (Global_7925[8])
					{
						func_28();
						func_25();
						Global_19466 = 8;
					}
					else
					{
						func_32();
						func_25();
						Global_19466 = 7;
					}
					break;
				
				case 1:
					if (Global_7925[0])
					{
						func_28();
						Global_19466 = 0;
					}
					else if (Global_7925[8])
					{
						func_25();
						func_32();
					}
					else
					{
						func_25();
					}
					break;
				
				case 2:
					if (Global_7925[1])
					{
						func_28();
						Global_19466 = 1;
					}
					break;
				
				case 3:
					if (Global_7925[2])
					{
						func_28();
						func_25();
						Global_19466 = 2;
					}
					break;
				
				case 4:
					if (Global_7925[3])
					{
						func_28();
						Global_19466 = 3;
					}
					else
					{
						func_25();
						func_32();
						Global_19669 = 1;
						Global_19466 = 2;
					}
					break;
				
				case 5:
					if (Global_7925[4])
					{
						func_28();
						Global_19466 = 4;
					}
					break;
				
				case 6:
					if (Global_7925[5])
					{
						func_25();
						func_28();
						Global_19466 = 5;
					}
					break;
				
				case 7:
					if (Global_7925[6])
					{
						func_28();
						Global_19466 = 6;
					}
					break;
				
				case 8:
					if (Global_7925[7])
					{
						func_28();
						Global_19466 = 7;
					}
					break;
				}
			}
	}
	if (Global_19465 == 0)
	{
		if (func_54(2, Global_19461, 0))
		{
			Global_19669 = 0;
			switch (Global_19466)
			{
				case 2:
					if (Global_7925[0] == 1)
					{
						Global_19466 = 0;
					}
					else
					{
						Global_19466 = 1;
						Global_19669 = 1;
					}
					break;
				
				case 5:
					Global_19466 = 3;
					break;
				
				case 6:
					Global_19466 = 7;
					break;
				
				case 7:
					if (Global_7925[Global_19466 + 1] == 1)
					{
						Global_19466 = 8;
					}
					else
					{
						Global_19466 = 6;
						Global_19669 = 1;
					}
					break;
				
				case 8:
					Global_19466 = 6;
					break;
				
				default:
					Global_19466++;
					break;
			}
			if (Global_19669 == 1)
			{
				func_28();
			}
			else
			{
				func_32();
			}
			Global_19465 = 1;
			settimera(0);
		}
		if (func_54(2, Global_19460, 0))
		{
			Global_19669 = 0;
			switch (Global_19466)
			{
				case 0:
					Global_19466 = 2;
					break;
				
				case 1:
					if (Global_7925[0] == 1)
					{
						Global_19466 = 0;
					}
					else
					{
						Global_19466 = 2;
						Global_19669 = 1;
					}
					break;
				
				case 3:
					Global_19466 = 5;
					break;
				
				case 6:
					if (Global_7925[8] == 1)
					{
						Global_19466 = 8;
					}
					else
					{
						Global_19466 = 7;
						Global_19669 = 1;
					}
					break;
				
				default:
					Global_19466 = (Global_19466 - 1);
					break;
			}
			if (Global_19669 == 1)
			{
				func_32();
			}
			else
			{
				func_28();
			}
			Global_19465 = 1;
			settimera(0);
		}
		if (func_54(2, Global_19462, 0))
		{
			Global_19669 = 0;
			switch (Global_19466)
			{
				case 0:
					if (Global_7925[6])
					{
						Global_19466 = 6;
					}
					break;
				
				case 1:
					if (Global_7925[7])
					{
						Global_19466 = 7;
					}
					else
					{
						Global_19669 = 1;
						Global_19466 = 4;
					}
					break;
				
				case 2:
					if (Global_7925[8])
					{
						Global_19466 = 8;
					}
					else
					{
						Global_19669 = 1;
						Global_19466 = 5;
					}
					break;
				
				case 3:
					if (Global_7925[0])
					{
						Global_19466 = 0;
					}
					else
					{
						Global_19669 = 1;
						Global_19466 = 6;
					}
					break;
				
				case 4:
					if (Global_7925[1])
					{
						Global_19466 = 1;
					}
					break;
				
				case 5:
					if (Global_7925[2])
					{
						Global_19466 = 2;
					}
					break;
				
				case 6:
					if (Global_7925[3])
					{
						Global_19466 = 3;
					}
					break;
				
				case 7:
					if (Global_7925[4])
					{
						Global_19466 = 4;
					}
					break;
				
				case 8:
					if (Global_7925[5])
					{
						Global_19466 = 5;
					}
					break;
			}
			if (Global_19669 == 1)
			{
				func_30();
			}
			else
			{
				func_25();
			}
			Global_19465 = 1;
			settimera(0);
		}
		if (func_54(2, Global_19463, 0))
		{
			Global_19669 = 0;
			switch (Global_19466)
			{
				case 0:
					if (Global_7925[3])
					{
						Global_19466 = 3;
					}
					break;
				
				case 1:
					if (Global_7925[4])
					{
						Global_19466 = 4;
					}
					break;
				
				case 2:
					if (Global_7925[5])
					{
						Global_19466 = 5;
					}
					break;
				
				case 3:
					if (Global_7925[6])
					{
						Global_19466 = 6;
					}
					break;
				
				case 4:
					if (Global_7925[7])
					{
						Global_19466 = 7;
					}
					else
					{
						Global_19669 = 1;
						Global_19466 = 1;
					}
					break;
				
				case 5:
					if (Global_7925[8])
					{
						Global_19466 = 8;
					}
					else
					{
						Global_19669 = 1;
						Global_19466 = 2;
					}
					break;
				
				case 6:
					if (Global_7925[0])
					{
						Global_19466 = 0;
					}
					else
					{
						Global_19669 = 1;
						Global_19466 = 3;
					}
					break;
				
				case 7:
					if (Global_7925[1])
					{
						Global_19466 = 1;
					}
					break;
				
				case 8:
					if (Global_7925[2])
					{
						Global_19466 = 2;
					}
					break;
			}
			if (Global_19669 == 1)
			{
				func_25();
			}
			else
			{
				func_30();
			}
			Global_19465 = 1;
			settimera(0);
		}
	}
	if (Global_7363[23 /*15*/].f_10 == 57)
	{
		if (Global_19465 == 1 && Global_19466 == 8)
		{
			if (iLocal_74 == 0)
			{
				iLocal_74 = 1;
				func_24(12);
			}
		}
	}
}

void func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	SET_BIT(&(Global_2531497.f_4898.f_7[iVar0]), iVar1);
}

void func_25()
{
	func_102(Global_19467, "SET_INPUT_EVENT", to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, true);
	func_26();
}

void func_26()
{
	if (func_27())
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

int func_27()
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

void func_28()
{
	func_102(Global_19467, "SET_INPUT_EVENT", to_float(4), -1082130432, -1082130432, -1082130432, -1082130432);
	PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, true);
	func_29();
}

void func_29()
{
	if (func_27())
	{
		if (Global_19669 == 0)
		{
			_MOVE_FINGER(3);
		}
		else
		{
			_MOVE_FINGER(4);
		}
	}
}

void func_30()
{
	func_102(Global_19467, "SET_INPUT_EVENT", to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, true);
	func_31();
}

void func_31()
{
	if (func_27())
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

void func_32()
{
	func_102(Global_19467, "SET_INPUT_EVENT", to_float(2), -1082130432, -1082130432, -1082130432, -1082130432);
	PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, true);
	func_33();
}

void func_33()
{
	if (func_27())
	{
		if (Global_19669 == 0)
		{
			_MOVE_FINGER(4);
		}
		else
		{
			_MOVE_FINGER(3);
		}
	}
}

void func_34()
{
	if (Global_19465)
	{
		if (timera() > 50)
		{
			Global_19465 = 0;
		}
	}
	if (_IS_INPUT_DISABLED(2))
	{
		if (IS_CONTROL_JUST_PRESSED(2, 180))
		{
			switch (Global_19466)
			{
				case 6:
					if (Global_7925[7])
					{
						func_32();
						Global_19466 = 7;
					}
					break;
				
				case 7:
					if (Global_7925[6])
					{
						func_28();
						Global_19466 = 6;
					}
					break;
				}
		}
		if (IS_CONTROL_JUST_PRESSED(2, 181))
		{
			switch (Global_19466)
			{
				case 6:
					if (Global_7925[7])
					{
						func_32();
						Global_19466 = 7;
					}
					break;
				
				case 7:
					if (Global_7925[6])
					{
						func_28();
						Global_19466 = 6;
					}
					break;
				}
			}
	}
	if (Global_19465 == 0)
	{
		if (func_54(2, Global_19461, 0))
		{
			Global_19669 = 0;
			switch (Global_19466)
			{
				case 2:
					Global_19466 = 0;
					break;
				
				case 5:
					Global_19466 = 3;
					break;
				
				case 7:
					if (Global_7925[Global_19466 + 1] == 1)
					{
						Global_19466 = 8;
					}
					else
					{
						Global_19466 = 6;
						Global_19669 = 1;
					}
					break;
				
				case 8:
					Global_19466 = 6;
					break;
				
				default:
					Global_19466++;
					break;
			}
			if (Global_19669 == 1)
			{
				func_28();
			}
			else
			{
				func_32();
			}
			Global_19465 = 1;
			settimera(0);
		}
		if (func_54(2, Global_19460, 0))
		{
			Global_19669 = 0;
			switch (Global_19466)
			{
				case 0:
					Global_19466 = 2;
					break;
				
				case 3:
					Global_19466 = 5;
					break;
				
				case 6:
					if (Global_7925[8] == 1)
					{
						Global_19466 = 8;
					}
					else
					{
						Global_19466 = 7;
						Global_19669 = 1;
					}
					break;
				
				default:
					Global_19466 = (Global_19466 - 1);
					break;
			}
			if (Global_19669 == 1)
			{
				func_32();
			}
			else
			{
				func_28();
			}
			Global_19465 = 1;
			settimera(0);
		}
	}
}

void func_35()
{
	if (Global_19465)
	{
		if (timera() > 50)
		{
			Global_19465 = 0;
		}
	}
	if (_IS_INPUT_DISABLED(2))
	{
		if (IS_CONTROL_JUST_PRESSED(2, 180))
		{
			switch (Global_19466)
			{
				case 0:
					if (Global_7925[1])
					{
						func_32();
						Global_19466 = 1;
					}
					break;
				
				case 1:
					if (Global_7925[2])
					{
						func_32();
						Global_19466 = 2;
					}
					break;
				
				case 2:
					if (Global_7925[3])
					{
						func_32();
						func_30();
						Global_19466 = 3;
					}
					else
					{
						func_28();
						func_30();
						Global_19466 = 4;
					}
					break;
				
				case 3:
					if (Global_7925[4])
					{
						func_32();
						Global_19466 = 4;
					}
					break;
				
				case 4:
					if (Global_7925[5])
					{
						func_32();
						Global_19466 = 5;
					}
					break;
				
				case 5:
					if (Global_7925[6])
					{
						func_32();
						func_30();
						Global_19466 = 6;
					}
					break;
				
				case 6:
					if (Global_7925[7])
					{
						func_32();
						Global_19466 = 7;
					}
					break;
				
				case 7:
					if (Global_7925[8])
					{
						func_32();
						Global_19466 = 8;
					}
					else
					{
						func_28();
						func_30();
						Global_19466 = 0;
					}
					break;
				
				case 8:
					if (Global_7925[0])
					{
						func_32();
						func_30();
						Global_19466 = 0;
					}
					break;
				}
		}
		if (IS_CONTROL_JUST_PRESSED(2, 181))
		{
			switch (Global_19466)
			{
				case 0:
					if (Global_7925[8])
					{
						func_28();
						func_25();
						Global_19466 = 8;
					}
					else
					{
						func_32();
						func_25();
						Global_19466 = 7;
					}
					break;
				
				case 1:
					if (Global_7925[0])
					{
						func_28();
						Global_19466 = 0;
					}
					break;
				
				case 2:
					if (Global_7925[1])
					{
						func_28();
						Global_19466 = 1;
					}
					break;
				
				case 3:
					if (Global_7925[2])
					{
						func_28();
						func_25();
						Global_19466 = 2;
					}
					break;
				
				case 4:
					if (Global_7925[3])
					{
						func_28();
						Global_19466 = 3;
					}
					else
					{
						func_25();
						func_32();
						Global_19669 = 1;
						Global_19466 = 2;
					}
					break;
				
				case 5:
					if (Global_7925[4])
					{
						func_28();
						Global_19466 = 4;
					}
					break;
				
				case 6:
					if (Global_7925[5])
					{
						func_25();
						func_28();
						Global_19466 = 5;
					}
					break;
				
				case 7:
					if (Global_7925[6])
					{
						func_28();
						Global_19466 = 6;
					}
					break;
				
				case 8:
					if (Global_7925[7])
					{
						func_28();
						Global_19466 = 7;
					}
					break;
				}
			}
	}
	if (Global_19465 == 0)
	{
		if (func_54(2, Global_19461, 0))
		{
			Global_19669 = 0;
			switch (Global_19466)
			{
				case 2:
					Global_19466 = 0;
					break;
				
				case 5:
					Global_19466 = 3;
					break;
				
				case 7:
					if (Global_7925[Global_19466 + 1] == 1)
					{
						Global_19466 = 8;
					}
					else
					{
						Global_19466 = 6;
						Global_19669 = 1;
					}
					break;
				
				case 8:
					Global_19466 = 6;
					break;
				
				default:
					Global_19466++;
					break;
			}
			if (Global_19669 == 1)
			{
				func_28();
			}
			else
			{
				func_32();
			}
			Global_19465 = 1;
			settimera(0);
		}
		if (func_54(2, Global_19460, 0))
		{
			Global_19669 = 0;
			switch (Global_19466)
			{
				case 0:
					Global_19466 = 2;
					break;
				
				case 3:
					Global_19466 = 5;
					break;
				
				case 6:
					if (Global_7925[8] == 1)
					{
						Global_19466 = 8;
					}
					else
					{
						Global_19466 = 7;
						Global_19669 = 1;
					}
					break;
				
				default:
					Global_19466 = (Global_19466 - 1);
					break;
			}
			if (Global_19669 == 1)
			{
				func_32();
			}
			else
			{
				func_28();
			}
			Global_19465 = 1;
			settimera(0);
		}
		if (func_54(2, Global_19462, 0))
		{
			Global_19669 = 0;
			switch (Global_19466)
			{
				case 0:
					if (Global_7925[6])
					{
						Global_19466 = 6;
					}
					break;
				
				case 1:
					if (Global_7925[7])
					{
						Global_19466 = 7;
					}
					break;
				
				case 2:
					if (Global_7925[8])
					{
						Global_19466 = 8;
					}
					else
					{
						Global_19669 = 1;
						Global_19466 = 5;
					}
					break;
				
				case 3:
					if (Global_7925[0])
					{
						Global_19466 = 0;
					}
					break;
				
				case 4:
					if (Global_7925[1])
					{
						Global_19466 = 1;
					}
					break;
				
				case 5:
					if (Global_7925[2])
					{
						Global_19466 = 2;
					}
					break;
				
				case 6:
					if (Global_7925[3])
					{
						Global_19466 = 3;
					}
					break;
				
				case 7:
					if (Global_7925[4])
					{
						Global_19466 = 4;
					}
					break;
				
				case 8:
					if (Global_7925[5])
					{
						Global_19466 = 5;
					}
					break;
			}
			if (Global_19669 == 1)
			{
				func_30();
			}
			else
			{
				func_25();
			}
			Global_19465 = 1;
			settimera(0);
		}
		if (func_54(2, Global_19463, 0))
		{
			Global_19669 = 0;
			switch (Global_19466)
			{
				case 0:
					if (Global_7925[3])
					{
						Global_19466 = 3;
					}
					break;
				
				case 1:
					if (Global_7925[4])
					{
						Global_19466 = 4;
					}
					break;
				
				case 2:
					if (Global_7925[5])
					{
						Global_19466 = 5;
					}
					break;
				
				case 3:
					if (Global_7925[6])
					{
						Global_19466 = 6;
					}
					break;
				
				case 4:
					if (Global_7925[7])
					{
						Global_19466 = 7;
					}
					break;
				
				case 5:
					if (Global_7925[8])
					{
						Global_19466 = 8;
					}
					else
					{
						Global_19669 = 1;
						Global_19466 = 2;
					}
					break;
				
				case 6:
					if (Global_7925[0])
					{
						Global_19466 = 0;
					}
					break;
				
				case 7:
					if (Global_7925[1])
					{
						Global_19466 = 1;
					}
					break;
				
				case 8:
					if (Global_7925[2])
					{
						Global_19466 = 2;
					}
					break;
			}
			if (Global_19669 == 1)
			{
				func_25();
			}
			else
			{
				func_30();
			}
			Global_19465 = 1;
			settimera(0);
		}
	}
}

void func_36()
{
	int iVar0;
	int iVar1;
	
	if (_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(iLocal_29))
	{
		iLocal_30 = 0;
		iLocal_28 = _GET_SCALEFORM_MOVIE_FUNCTION_RETURN_INT(iLocal_29);
		if (Global_19665 == 0)
		{
			Global_19490 = iLocal_28;
		}
		else
		{
			Global_19491 = iLocal_28;
		}
		if (iLocal_28 < 0)
		{
			iLocal_28 = 0;
		}
		Global_19489 = Global_7889[iLocal_28];
		if (IS_BIT_SET(Global_7357, 10))
		{
			Global_19489 = 2;
			CLEAR_BIT(&Global_7357, 10);
		}
		if (iLocal_72 == 1)
		{
			Global_19490 = 1;
			Global_19489 = 0;
			Global_2541153 = 0;
			iLocal_72 = 0;
		}
		iVar0 = 0;
		if (IS_THREAD_ACTIVE(Global_19484))
		{
			iVar0 = 1;
		}
		if (Global_19489 == 3)
		{
			if (IS_BIT_SET(Global_7357, 3))
			{
				iVar0 = 1;
			}
			else if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
			{
				if (((((((IS_PED_ON_MOUNT(IS_PED_ON_MOUNT()) || IS_PED_ON_MOUNT()) || IS_PED_ON_MOUNT(IS_PED_ON_MOUNT())) || IS_PED_ON_MOUNT(IS_PED_ON_MOUNT())) || IS_PED_ON_MOUNT(IS_PED_ON_MOUNT())) || IS_PED_ON_MOUNT(IS_PED_ON_MOUNT())) || IS_PED_ON_MOUNT(IS_PED_ON_MOUNT(IS_PED_ON_MOUNT()), 0)) || IS_PED_ON_MOUNT())
				{
					iVar0 = 1;
				}
				if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
				{
					if (IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE()) == 0)
					{
						iVar0 = 1;
					}
					iVar1 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
					if (GET_ENTITY_UPRIGHT_VALUE(iVar1) < 0f)
					{
						iVar0 = 1;
					}
				}
				if (IS_PLAYER_TARGETTING_ANYTHING(IS_PLAYER_TARGETTING_ANYTHING()))
				{
					iVar0 = 1;
				}
				if (Global_76577)
				{
					if (IS_CONTROL_PRESSED(0, 25) || IS_CONTROL_PRESSED(0, 68))
					{
						GET_CURRENT_PED_WEAPON(GET_CURRENT_PED_WEAPON(), &iLocal_65, 1);
						if (iLocal_65 != joaat("weapon_unarmed"))
						{
							iVar0 = 1;
						}
					}
				}
			}
		}
		if (Global_19489 == 2)
		{
			if (IS_BIT_SET(Global_7357, 6))
			{
				iVar0 = 1;
			}
		}
		if (Global_19489 == 23 && ARE_STRINGS_EQUAL(&(Global_7363[Global_19489 /*15*/]), "CELL_BENWEB"))
		{
			if (IS_BIT_SET(Global_7357, 6))
			{
				iVar0 = 1;
			}
		}
		if (Global_76577)
		{
			if (Global_19489 == 15 || Global_19489 == 5)
			{
			}
			else
			{
				if (Global_19489 == 23)
				{
					if (((IS_BIT_SET(Global_4269615, 4) == 0 && Global_1573923 == 0) && IS_BIT_SET(Global_4269615, 20) == 0) && IS_BIT_SET(Global_4269615, 22) == 0)
					{
					}
					if ((((IS_BIT_SET(Global_4269615, 20) == 1 && IS_BIT_SET(Global_4269615, 4) == 0) && Global_1573923 == 0) && IS_BIT_SET(Global_4269615, 22) == 0) && IS_BIT_SET(Global_4269615, 26) == 0)
					{
						iVar0 = 1;
						SET_BIT(&Global_4269615, 21);
					}
				}
				if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
				{
					if (GET_PED_CONFIG_FLAG(GET_PED_CONFIG_FLAG(), 78, 1) || GET_PED_CONFIG_FLAG(GET_PED_CONFIG_FLAG()))
					{
						if (Global_19489 == 3)
						{
							iVar0 = 1;
						}
					}
				}
				if (iVar0 == 0)
				{
					func_73(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
					CLEAR_BIT(&Global_7356, 17);
					Global_19486.f_1 = 7;
					if (IS_BIT_SET(Global_7356, 23))
					{
					}
					else
					{
						func_38();
						REQUEST_SCRIPT(&(Global_7363[Global_19489 /*15*/].f_5));
						SET_BIT(&Global_7356, 23);
					}
				}
				else
				{
					if (Global_19489 == 2 || Global_19489 == 3)
					{
					}
					func_37();
				}
			}
		}
		else
		{
			switch (Global_19489)
			{
				case 3:
					if (Global_110613 == 1)
					{
						iVar0 = 1;
					}
					break;
				
				case 8:
					iVar0 = 1;
					break;
				
				case 15:
					iVar0 = 1;
					break;
				
				case 16:
					iVar0 = 1;
					SET_BIT(&Global_7356, 26);
					break;
				
				case 5:
					iVar0 = 1;
					break;
				
				case 20:
					iVar0 = 1;
					if (Global_19667 == 0)
					{
						if ((Global_7360 == 0 && iLocal_31 == 0) && Global_41396 == 15)
						{
							iLocal_31 = 1;
							func_38();
							if (!Global_111560.f_14046.f_85)
							{
							}
						}
					}
					else
					{
						func_37();
					}
					break;
				
				default:
					break;
			}
			if (_0x5EDEF0CF8C1DAB3C())
			{
				if (Global_19489 != 0)
				{
					iVar0 = 1;
				}
			}
			if (func_74(14))
			{
				if (Global_19489 != 3 && Global_19489 != 14)
				{
					iVar0 = 1;
				}
			}
			if (iVar0 == 0)
			{
				func_38();
				func_73(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				CLEAR_BIT(&Global_7356, 17);
				Global_19486.f_1 = 7;
				if (IS_BIT_SET(Global_7356, 23))
				{
				}
				else
				{
					REQUEST_SCRIPT(&(Global_7363[Global_19489 /*15*/].f_5));
					SET_BIT(&Global_7356, 23);
				}
			}
			else if (Global_19489 != 20)
			{
				if (Global_111560.f_14046.f_86 == 0)
				{
					if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("paparazzo3b")) > 0)
					{
						if (Global_19489 == 3)
						{
							if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
							{
								if (IS_PED_IN_COVER(IS_PED_IN_COVER(), 0))
								{
									func_71("CELL_38", -1);
									Global_111560.f_14046.f_86 = 1;
								}
							}
						}
					}
				}
				func_37();
			}
		}
	}
}

void func_37()
{
	if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
	{
		PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_19475, true);
	}
}

void func_38()
{
	if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
	{
		PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_19475, true);
		func_39();
	}
}

void func_39()
{
	if (func_27())
	{
		_MOVE_FINGER(5);
	}
}

void func_40()
{
	if (Global_19452 == 0)
	{
		if (func_13(Global_19439[Global_19431 /*3*/], Global_19432[Global_19431 /*3*/], Global_19446, Global_19446, 350f, 0) >= 1f)
		{
			iLocal_18 = 0;
			CLEAR_BIT(&Global_7357, 24);
			SET_BIT(&Global_7357, 26);
		}
	}
}

void func_41()
{
	if (Global_19452 == 0)
	{
		if (func_13(Global_19432[Global_19431 /*3*/], Global_19439[Global_19431 /*3*/], Global_19446, Global_19446, 350f, 1) >= 1f)
		{
			iLocal_18 = 0;
			CLEAR_BIT(&Global_7357, 25);
			if (Global_20818)
			{
				CLEAR_BIT(&Global_7357, 27);
			}
		}
	}
}

void func_42()
{
	if (Global_19452 == 0 && Global_19426 == 0)
	{
		if (func_13(Global_19439[Global_19431 /*3*/], Global_19432[Global_19431 /*3*/], Global_19446, Global_19446, 350f, 0) >= 1f)
		{
			iLocal_18 = 0;
			Global_4269894 = 0;
		}
	}
}

void func_43()
{
	float fVar0;
	float fVar1;
	
	if (IS_BIT_SET(Global_7358, 2))
	{
		SET_BIT(&Global_7357, 8);
		SET_BIT(&Global_7356, 14);
		Global_19426 = 0;
		iLocal_18 = 0;
		SET_MOBILE_PHONE_ROTATION(Global_19446, 0);
	}
	else if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) < 1)
	{
		fVar0 = func_13(Global_19432[Global_19431 /*3*/], Global_19439[Global_19431 /*3*/], Global_19449, Global_19446, 450f, 1);
		if (fVar0 >= 1f)
		{
			SET_BIT(&Global_7357, 8);
			SET_BIT(&Global_7356, 14);
			Global_19426 = 0;
			iLocal_18 = 0;
			CLEAR_BIT(&Global_7358, 2);
			iLocal_37 = 0;
		}
		else if (fVar0 >= 0.75f)
		{
			SET_BIT(&Global_7357, 8);
		}
	}
	else
	{
		if (iLocal_37 == 0)
		{
			vLocal_38 = { Global_19439[Global_19431 /*3*/] };
			vLocal_38.x = (vLocal_38.x - 10f);
			vLocal_38.y = (vLocal_38.y + 20f);
			iLocal_37 = 1;
		}
		fVar1 = func_13(Global_19432[Global_19431 /*3*/], vLocal_38, -90f, 0f, 90f, -90f, 0f, 90f, 450f, 1);
		if (fVar1 >= 1f)
		{
			SET_BIT(&Global_7357, 8);
			SET_BIT(&Global_7356, 14);
			Global_19426 = 0;
			iLocal_18 = 0;
			CLEAR_BIT(&Global_7358, 2);
			iLocal_37 = 0;
		}
		else if (fVar1 >= 0.75f)
		{
			SET_BIT(&Global_7357, 8);
		}
	}
}

void func_44()
{
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_59 = IS_TIME_EQUAL_TO(IS_TIME_EQUAL_TO(), iLocal_58);
	}
	else
	{
		iLocal_54 = GET_GAME_TIMER();
		iLocal_59 = (iLocal_54 - iLocal_53);
	}
	if (iLocal_59 > 4000)
	{
		iLocal_42 = func_94();
		if (IS_MOBILE_PHONE_CALL_ONGOING())
		{
		}
		if (NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_58 = 0xBA7F0B77D80A4EB7();
		}
		else
		{
			iLocal_53 = GET_GAME_TIMER();
		}
	}
}

void func_45()
{
	if (Global_19485 == 1)
	{
		func_109();
		if (Global_19464 == 0)
		{
			if (func_54(2, Global_19456, 0))
			{
				if (IS_BIT_SET(Global_7357, 8))
				{
					if (Global_20852 == 0)
					{
						func_37();
						Global_19464 = 1;
						Global_19485 = 3;
						Global_20854 = 1;
						if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
						{
							STOP_PED_RINGTONE(STOP_PED_RINGTONE());
						}
					}
				}
			}
		}
		if (Global_19464 == 0)
		{
			if (func_54(2, Global_19455, 0))
			{
				if (IS_BIT_SET(Global_7357, 8))
				{
					func_38();
					Global_19464 = 1;
					Global_19485 = 2;
					if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
					{
						STOP_PED_RINGTONE(STOP_PED_RINGTONE());
					}
					func_51();
					func_50();
				}
			}
		}
	}
	else
	{
		if (iLocal_51 == 0)
		{
			if (IS_BIT_SET(Global_7356, 27))
			{
				iLocal_51 = 1;
				settimerb(0);
			}
		}
		else
		{
			if (Global_19486.f_1 > 3)
			{
				if (timerb() > 1500)
				{
					if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
					{
						if (!IS_PED_RINGTONE_PLAYING(IS_PED_RINGTONE_PLAYING()))
						{
							if (Global_19429)
							{
								PLAY_PED_RINGTONE("Dial_and_Remote_Ring", PLAY_PED_RINGTONE(), 1);
							}
							else if (!IS_BIT_SET(Global_7358, 5))
							{
								PLAY_PED_RINGTONE("Remote_Ring", PLAY_PED_RINGTONE(), 1);
							}
						}
					}
				}
			}
			if (!IS_BIT_SET(Global_7356, 27))
			{
				iLocal_51 = 0;
				if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
				{
					STOP_PED_RINGTONE(STOP_PED_RINGTONE());
				}
			}
		}
		if (Global_19485 == 0)
		{
			if (Global_19464 == 0)
			{
				if (func_54(2, Global_19454, 0) || Global_2541153 == 1)
				{
					if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
					{
						if (IS_PLAYER_CONTROL_ON(IS_PLAYER_CONTROL_ON()))
						{
							if (IS_BIT_SET(Global_7357, 8))
							{
								switch (Global_19486.f_1)
								{
									case 3:
										break;
									
									case 4:
										break;
									
									case 6:
										if (Global_19664 == 0)
										{
											if (Global_19665 == 1)
											{
												func_37();
												Global_19665 = 0;
												func_102(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
												func_78();
												func_76();
												func_75(1);
												func_102(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19490), -1082130432, -1082130432, -1082130432);
											}
											else
											{
												if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
												{
													PLAY_SOUND_FRONTEND(-1, "Put_Away", &Global_19475, true);
												}
												iLocal_18 = 0;
												Global_19486.f_1 = 3;
											}
										}
										break;
									
									case 5:
										Global_19486.f_1 = 3;
										break;
									
									case 7:
										if (IS_BIT_SET(Global_7356, 23) == 1)
										{
										}
										if ((Global_7964 - Global_7963) > Global_7965 && IS_BIT_SET(Global_7356, 23) == 0)
										{
											if (IS_BIT_SET(Global_7357, 0))
											{
											}
											else
											{
												func_37();
												Global_7962 = 1;
												Global_19486.f_1 = 6;
												if (Global_76577)
												{
													func_102(Global_19467, "SET_THEME", to_float(Global_4269891), -1082130432, -1082130432, -1082130432, -1082130432);
												}
												Global_7359 = 99;
												if (Global_2541153 == 0)
												{
													func_46();
												}
											}
										}
										break;
									
									case 8:
										break;
									
									case 10:
										if (Global_6671 == 132)
										{
											if (Global_2537824.f_1 || IS_BIT_SET(Global_7357, 20))
											{
												func_37();
												func_69();
											}
										}
										else
										{
											func_37();
											func_69();
											Global_20854 = 1;
										}
										break;
									
									case 9:
										if (Global_20805 == 0)
										{
											Global_19486.f_1 = 3;
										}
										break;
									
									default:
										break;
								}
								if (Global_2541153 == 1)
								{
									iLocal_72 = 1;
									Global_2541153 = 0;
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_46()
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
			func_102(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_75(Global_7961);
			if (Global_7961 == 1)
			{
				func_102(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19490), -1082130432, -1082130432, -1082130432);
				Global_19466 = Global_19490;
			}
			else
			{
				func_102(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19491), -1082130432, -1082130432, -1082130432);
				Global_19466 = Global_19491;
			}
			if (Global_19474)
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_73(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_73(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_19666 == 0)
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				CLEAR_BIT(&Global_7356, 17);
			}
			else if (Global_76577)
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				CLEAR_BIT(&Global_7356, 17);
			}
			else
			{
				if (Global_19665 == 1)
				{
					if (Global_19474)
					{
						func_73(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_73(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19474)
				{
					func_73(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_73(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				SET_BIT(&Global_7356, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_102(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_73(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_73(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			CLEAR_BIT(&Global_7356, 17);
			if (IS_BIT_SET(Global_7356, 20))
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_73(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_19485 == 1)
			{
				func_96();
				func_102(Global_19467, "SET_THEME", to_float(Global_111560.f_14046[Global_19486 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_20818)
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(4);
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(2);
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_20820);
					END_TEXT_COMMAND_SCALEFORM_STRING();
					func_49("CELL_300");
					func_49("CELL_217");
					func_49("CELL_217");
					END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_48(Global_6671, Global_19486) == 0)
				{
					func_73(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_73(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(2), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), "CELL_217", &(Global_1798[Global_6671 /*29*/].f_3), 0);
				}
				func_102(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_20805 == 4 || Global_20805 == 3)
			{
				func_102(Global_19467, "SET_THEME", to_float(Global_111560.f_14046[Global_19486 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_96();
				if (Global_20818)
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(4);
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(2);
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_20820);
					END_TEXT_COMMAND_SCALEFORM_STRING();
					func_49("CELL_300");
					func_49("CELL_219");
					func_49("CELL_219");
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
					if (func_48(Global_6671, Global_19486) == 0)
					{
						func_102(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_73(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_102(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_73(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), &cVar0, &(Global_1798[Global_6671 /*29*/].f_3), 0);
					}
				}
				func_102(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_47();
			break;
		
		default:
			break;
	}
}

void func_47()
{
	if (HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
	{
		if (Global_19485 == 1)
		{
			if (Global_19474)
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20852)
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (IS_BIT_SET(Global_7356, 20))
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_73(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			CLEAR_BIT(&Global_7356, 17);
		}
		else
		{
			func_73(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_73(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			CLEAR_BIT(&Global_7356, 17);
			if (IS_BIT_SET(Global_7356, 20))
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_73(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

int func_48(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_24[iParam1];
}

void func_49(char* sParam0)
{
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_50()
{
	if (Global_20818)
	{
		if (Global_76577)
		{
			if (HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
			{
				if (!IS_PC_VERSION())
				{
					func_73(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					SET_BIT(&(Global_2531497.f_1732), 15);
				}
			}
		}
	}
}

void func_51()
{
	if (HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
	{
		if (!Global_20813)
		{
			func_73(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_73(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			CLEAR_BIT(&Global_7356, 17);
			if (IS_BIT_SET(Global_7356, 20))
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_73(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_73(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
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
				func_49("CELL_300");
				func_49("CELL_219");
				func_49("CELL_219");
				END_SCALEFORM_MOVIE_METHOD();
			}
			else if (func_48(Global_6671, Global_19486) == 0)
			{
				func_73(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_117[Global_6671 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_73(Global_19467, "SET_DATA_SLOT", to_float(4), to_float(0), to_float(3), -1f, -1f, &(Global_1798[Global_6671 /*29*/].f_3), &(Global_1798[Global_6671 /*29*/].f_7), "CELL_219", &(Global_1798[Global_6671 /*29*/].f_3), 0);
			}
		}
		func_102(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_52()
{
	Global_19671 = 0;
	func_53();
}

void func_53()
{
	if (IS_MOBILE_PHONE_CALL_ONGOING() || Global_19485 == 1)
	{
		RESTART_SCRIPTED_CONVERSATION();
		Global_21816 = 0;
		STOP_SCRIPTED_CONVERSATION(false);
		Global_20805 = 6;
		Global_19486.f_1 = Global_19488;
		return;
	}
}

int func_54(int iParam0, int iParam1, int iParam2)
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

int func_55()
{
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_56(bool bParam0)
{
	if (!bParam0 && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return IS_BIT_SET(Global_76825, 0);
}

void func_57(int iParam0)
{
	if (func_60())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_5())
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
		if (func_22(0))
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
	return IS_BIT_SET(Global_1687880, 19);
}

void func_61()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_62()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!IS_PED_INJURED(IS_PED_INJURED()))
	{
		if (func_70() && IS_PED_IN_COVER(IS_PED_IN_COVER(), 0))
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

void func_63()
{
	if ((IS_BIT_SET(Global_7356, 14) && Global_4269894 == 0) && Global_19426 == 0)
	{
		if (func_68())
		{
		}
		else
		{
			func_64();
		}
		if (Global_19486.f_1 == 9)
		{
			if (Global_20818 == 0)
			{
				iLocal_32 = 1;
			}
		}
	}
}

void func_64()
{
	struct<2> Var0;
	
	GET_MOBILE_PHONE_POSITION(&Var0);
	if (Global_19439[Global_19431 /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_19426 = 1;
	}
}

void func_65()
{
	if ((IS_BIT_SET(Global_7356, 14) && Global_4269894 == 0) && Global_19426 == 0)
	{
		if (iLocal_32 == 0)
		{
			if (IS_BIT_SET(Global_7357, 26))
			{
				CLEAR_BIT(&Global_7357, 24);
				CLEAR_BIT(&Global_7357, 25);
				CLEAR_BIT(&Global_7357, 27);
				CLEAR_BIT(&Global_7357, 26);
				if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
				{
					if (!IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
					{
						func_64();
					}
					else if (func_67() == 0)
					{
						func_64();
					}
				}
			}
		}
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			if (func_67())
			{
				func_66();
			}
		}
		else if (func_68())
		{
		}
		else if (func_67())
		{
			func_66();
		}
		if (Global_19486.f_1 == 9)
		{
			if (Global_20818 == 0)
			{
				iLocal_32 = 1;
			}
		}
	}
}

void func_66()
{
	struct<2> Var0;
	
	GET_MOBILE_PHONE_POSITION(&Var0);
	if (Global_19432[Global_19431 /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_4269894 = 1;
	}
}

int func_67()
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
		if (func_74(14))
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

int func_68()
{
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_69()
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

int func_70()
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

void func_71(char* sParam0, int iParam1)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

void func_72()
{
	GET_MOBILE_PHONE_RENDER_ID(&iLocal_39);
	if (iLocal_39 == -1)
	{
	}
}

void func_73(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_49(sParam7);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_49(sParam8);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_49(sParam9);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_49(sParam10);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_49(sParam11);
	}
	END_SCALEFORM_MOVIE_METHOD();
}

bool func_74(int iParam0)
{
	return Global_41396 == iParam0;
}

void func_75(int iParam0)
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
		if (func_74(14))
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
								func_49(&(Global_7363[iVar1 /*15*/]));
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar2);
								END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2458994)
							{
								if (iVar1 == 14)
								{
									func_73(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_73(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(Global_21873), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_73(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_73(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_73(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_7363[iVar1 /*15*/].f_10);
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
								func_49(&(Global_7363[iVar1 /*15*/]));
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
								func_49(&(Global_7363[iVar1 /*15*/]));
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
								func_49(&(Global_7363[iVar1 /*15*/]));
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
								func_49(&(Global_7363[iVar1 /*15*/]));
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
								func_49(&(Global_7363[iVar1 /*15*/]));
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(42);
								END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_7363[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627599.f_1;
								func_73(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_73(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_76()
{
	if (Global_76577 == 0)
	{
		Global_7363[14 /*15*/].f_4 = -99;
		Global_7363[4 /*15*/].f_4 = -99;
		if (Global_2458994)
		{
			if (func_74(14))
			{
				func_77(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_77(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_77(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_77(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_77(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

void func_78()
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
			if (func_79(iVar2, Global_19486) == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_77(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_77(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_77(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_41396 == 15 && func_56(0) == 0) && Global_7361 == 0)
		{
			func_77(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_19667 = 0;
			Global_7362 = 255;
		}
		else
		{
			func_77(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_19667 = 1;
			Global_7362 = 42;
		}
		if (iVar1 == 1)
		{
			func_77(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_77(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_77(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_77(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_77(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_111560.f_14046.f_89 == 1)
		{
			func_77(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_111560.f_14046.f_88 == 1)
		{
			func_77(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_77(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_77(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_77(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_77(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_77(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_77(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_77(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_77(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_77(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_77(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_77(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_77(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_77(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_77(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_77(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_77(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_77(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (IS_BIT_SET(Global_4269615, 4) == 1)
		{
			func_77(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_77(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_77(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_77(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_77(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_77(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_77(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_77(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_77(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_77(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_77(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_77(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_77(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_77(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_77(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_77(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_77(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!IS_BIT_SET(Global_4269615, 4) == 1)
		{
			if (Global_1573923)
			{
				func_77(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (IS_BIT_SET(Global_4269615, 20) == 1)
			{
				func_77(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (IS_BIT_SET(Global_4269615, 22) == 1)
			{
				func_77(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (IS_BIT_SET(Global_4269615, 26) == 1)
			{
				func_77(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
			}
		}
		if ((((IS_BIT_SET(Global_4269615, 4) == 0 && Global_1573923 == 0) && IS_BIT_SET(Global_4269615, 20) == 0) && IS_BIT_SET(Global_4269615, 22) == 0) && IS_BIT_SET(Global_4269615, 26) == 0)
		{
			func_77(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
		}
	}
}

int func_79(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_19[iParam1];
}

int func_80(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 1)
	{
	}
	if (iParam0 == 0)
	{
		if (func_81() == 0)
		{
			return 0;
		}
	}
	if (NETWORK_CAN_ACCESS_MULTIPLAYER(&iVar0) && NETWORK_CAN_ACCESS_MULTIPLAYER(903) == 1)
	{
		return 1;
	}
	if (!NETWORK_CAN_ACCESS_MULTIPLAYER(&iVar0))
	{
		if (iVar0 == 6)
		{
			return 1;
		}
		else if (iVar0 == 7)
		{
			return 1;
		}
		else if (iVar0 == 8)
		{
			return 1;
		}
		else if (iVar0 == 9)
		{
			return 1;
		}
		else if (iVar0 == 11)
		{
			return 1;
		}
		else if (iVar0 == 12)
		{
			return 1;
		}
		else if (iVar0 == 10)
		{
			return 1;
		}
	}
	return 0;
}

int func_81()
{
	if (IS_ORBIS_VERSION())
	{
		if (!_0xBD545D44CCE70597())
		{
			if (_0x74FB3E29E6D10FA9() == 4)
			{
				return 0;
			}
			if (_0x74FB3E29E6D10FA9() == 2)
			{
				return 0;
			}
			if (_0x74FB3E29E6D10FA9() == 1)
			{
				return 0;
			}
			if (_0x74FB3E29E6D10FA9() == 5)
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_82()
{
	if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
	{
		iLocal_67 = GET_ZONE_SCUMMINESS(GET_ZONE_SCUMMINESS(GET_ZONE_SCUMMINESS(GET_ZONE_SCUMMINESS(), true)));
	}
	switch (iLocal_67)
	{
		case 0:
			iLocal_43 = 5;
			break;
		
		case 1:
			iLocal_43 = 5;
			break;
		
		case 2:
			iLocal_43 = 4;
			break;
		
		case 3:
			iLocal_43 = 4;
			break;
		
		case 4:
			iLocal_43 = 3;
			break;
		
		case 5:
			iLocal_43 = 2;
			break;
		
		default:
			iLocal_43 = 3;
			break;
	}
	iLocal_68 = GET_RANDOM_INT_IN_RANGE(0, 8);
	if (iLocal_68 < 2)
	{
		if (iLocal_43 > 2)
		{
			iLocal_43 = (iLocal_43 - 1);
		}
	}
	if (iLocal_69 == 1 || func_83())
	{
		iLocal_43 = 0;
	}
	func_102(Global_19467, "SET_PROVIDER_ICON", to_float(iLocal_42), to_float(iLocal_43), -1082130432, -1082130432, -1082130432);
}

int func_83()
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
	{
		iVar0 = func_89();
		if (func_88(iVar0))
		{
			vVar1 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true) };
			iVar2 = 0;
			while (iVar2 < Global_111560.f_7683.f_136)
			{
				if (IS_BIT_SET(Global_111560.f_7683[iVar2 /*15*/].f_2, iVar0))
				{
					if (func_86(vVar1, func_87(iVar2)))
					{
						return 1;
					}
				}
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 < Global_111560.f_7683.f_764)
			{
				if (IS_BIT_SET(Global_111560.f_7683.f_651[iVar2 /*14*/].f_2, iVar0))
				{
					if (func_86(vVar1, func_85(iVar2)))
					{
						return 1;
					}
				}
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 < Global_111560.f_7683.f_866)
			{
				if (IS_BIT_SET(Global_111560.f_7683.f_765[iVar2 /*10*/].f_2, iVar0))
				{
					if (func_86(vVar1, func_84(iVar2)))
					{
						return 1;
					}
				}
				iVar2++;
			}
		}
	}
	return 0;
}

int func_84(int iParam0)
{
	return Global_111560.f_7683.f_765[iParam0 /*10*/].f_7;
}

int func_85(int iParam0)
{
	return Global_111560.f_7683.f_651[iParam0 /*14*/].f_7;
}

int func_86(vector3 vParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		if (iParam1 >= Global_41397)
		{
			return 0;
		}
		if (vdist2(vParam0, Global_41397[iParam1 /*5*/]) <= (Global_41397[iParam1 /*5*/].f_3 * Global_41397[iParam1 /*5*/].f_3))
		{
			return 1;
		}
		else if (Global_41397[iParam1 /*5*/].f_4 != -1)
		{
			return func_86(vParam0, Global_41397[iParam1 /*5*/].f_4);
		}
	}
	return 0;
}

int func_87(int iParam0)
{
	return Global_111560.f_7683[iParam0 /*15*/].f_7;
}

bool func_88(int iParam0)
{
	return iParam0 < 3;
}

var func_89()
{
	func_90();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_90()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()))
	{
		if (func_92(Global_111560.f_2358.f_539.f_4321) != GET_ENTITY_MODEL(GET_ENTITY_MODEL()))
		{
			iVar0 = func_91(PLAYER_PED_ID());
			if (func_88(iVar0) && (!func_74(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_88(Global_111560.f_2358.f_539.f_4321))
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

int func_91(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_92(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_92(int iParam0)
{
	if (func_88(iParam0))
	{
		return func_93(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_93(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

int func_94()
{
	func_110();
	return Global_111560.f_14046[Global_19486 /*20*/].f_8;
}

struct<13> func_95(int iParam0)
{
	struct<13> Var0;
	
	NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_96()
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

int func_97(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_98(iParam1)];
	if (STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_98(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_99();
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

var func_99()
{
	return Global_1312745;
}

void func_100()
{
	if (func_74(14))
	{
		if (Global_2458994)
		{
			if (Global_19486.f_1 == 6)
			{
				if (Global_19466 == 7)
				{
					func_102(Global_19467, "DISPLAY_VIEW", 1f, to_float(7), -1082130432, -1082130432, -1082130432);
				}
				else
				{
					Global_19466 = 6;
					func_102(Global_19467, "DISPLAY_VIEW", 1f, to_float(6), -1082130432, -1082130432, -1082130432);
				}
			}
		}
		else if (Global_19486.f_1 == 6)
		{
			func_102(Global_19467, "DISPLAY_VIEW", 1f, to_float(6), -1082130432, -1082130432, -1082130432);
		}
	}
	iLocal_45 = GET_CLOCK_MINUTES();
	if (iLocal_45 != Global_7359)
	{
		Global_7359 = iLocal_45;
		iLocal_44 = GET_CLOCK_HOURS();
		iLocal_46 = GET_CLOCK_DAY_OF_WEEK();
		switch (iLocal_46)
		{
			case 0:
				StringCopy(&Local_47, "CELL_920", 16);
				break;
			
			case 1:
				StringCopy(&Local_47, "CELL_921", 16);
				break;
			
			case 2:
				StringCopy(&Local_47, "CELL_922", 16);
				break;
			
			case 3:
				StringCopy(&Local_47, "CELL_923", 16);
				break;
			
			case 4:
				StringCopy(&Local_47, "CELL_924", 16);
				break;
			
			case 5:
				StringCopy(&Local_47, "CELL_925", 16);
				break;
			
			case 6:
				StringCopy(&Local_47, "CELL_926", 16);
				break;
			
			default:
				StringCopy(&Local_47, "CELL_206", 16);
				break;
		}
		func_73(Global_19467, "SET_TITLEBAR_TIME", to_float(iLocal_44), to_float(iLocal_45), -1f, -1f, -1f, &Local_47, 0, 0, 0, 0);
		if (Global_19429 == 0)
		{
			func_82();
		}
		if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
		{
			iLocal_52 = GET_ENTITY_HEALTH(GET_ENTITY_HEALTH());
		}
	}
}

void func_101()
{
	if (Global_76577)
	{
		StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
		CREATE_MOBILE_PHONE(0);
	}
	else if (Global_19429)
	{
		CREATE_MOBILE_PHONE(4);
		StringCopy(&Global_19475, "Phone_SoundSet_Prologue", 24);
	}
	else
	{
		switch (Global_19486)
		{
			case 0:
				StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
				CREATE_MOBILE_PHONE(0);
				break;
			
			case 2:
				StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
				CREATE_MOBILE_PHONE(1);
				break;
			
			case 1:
				StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
				CREATE_MOBILE_PHONE(2);
				break;
			
			default:
				StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
				CREATE_MOBILE_PHONE(0);
				break;
			}
	}
	Global_19449 = { -90f, -130f, 0f };
	if (GET_IS_HIDEF())
	{
		Global_19431 = 0;
		Global_19432[0 /*3*/] = { (GET_SAFE_ZONE_SIZE() * 117.2f), (GET_SAFE_ZONE_SIZE() * -158.8f), -113f };
		Global_19439[0 /*3*/] = { (GET_SAFE_ZONE_SIZE() * 117.2f), (GET_SAFE_ZONE_SIZE() * -53.3f), -113f };
	}
	else
	{
		Global_19431 = 0;
		Global_19432[0 /*3*/] = { (GET_SAFE_ZONE_SIZE() * 85.7f), (GET_SAFE_ZONE_SIZE() * -121.8f), -91.5f };
		Global_19439[0 /*3*/] = { (GET_SAFE_ZONE_SIZE() * 85.7f), (GET_SAFE_ZONE_SIZE() * -35.3f), -91.5f };
	}
	Global_19414 = { Global_19432[Global_19431 /*3*/] };
	SET_MOBILE_PHONE_POSITION(Global_19432[Global_19431 /*3*/]);
	SET_MOBILE_PHONE_ROTATION(Global_19449, 0);
	Global_19426 = 1;
}

void func_102(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_103()
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
	func_104(&(Global_2537824.f_20));
}

void func_104(var uParam0)
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

void func_105()
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
		else if (func_106(Global_2537824.f_20))
		{
			if (NETWORK_IS_FRIEND(&(Global_2537824.f_20)))
			{
				if (!_NETWORK_IS_FRIEND_HANDLE_ONLINE(&(Global_2537824.f_20)))
				{
					func_103();
				}
			}
		}
		else
		{
			func_103();
		}
	}
	else
	{
		func_103();
	}
	if (Global_2537824.f_37)
	{
		func_57(0);
	}
	Global_2537824.f_37 = 0;
	Global_2537824.f_3 = 0;
}

bool func_106(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_107()
{
	Global_19671 = 0;
	func_8();
}

void func_108(int iParam0, char* sParam1)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	END_SCALEFORM_MOVIE_METHOD();
}

void func_109()
{
	SET_INPUT_EXCLUSIVE(0, Global_19455);
	DISABLE_CONTROL_ACTION(0, 70, 1);
	DISABLE_CONTROL_ACTION(0, 69, 1);
	if (_IS_INPUT_DISABLED(2))
	{
		SET_INPUT_EXCLUSIVE(0, Global_19455);
		SET_INPUT_EXCLUSIVE(0, Global_19456);
		DISABLE_CONTROL_ACTION(0, 24, 1);
		DISABLE_CONTROL_ACTION(0, 257, 1);
	}
	if (Global_76577)
	{
		Global_111560.f_14046[3 /*20*/].f_10 = func_97(1197, -1, 0);
	}
	if (IS_PC_VERSION())
	{
		if (DECOR_EXIST_ON(DECOR_EXIST_ON(), "Synched"))
		{
		}
		else if (((GET_GAME_TIMER() - iLocal_70) >= 300 || iLocal_70 == 0) || iLocal_70 > GET_GAME_TIMER())
		{
			SET_PAD_SHAKE(0, 100, 100);
			iLocal_70 = GET_GAME_TIMER();
		}
	}
	else if (Global_111560.f_14046[Global_19486 /*20*/].f_10 == 1)
	{
		if (((GET_GAME_TIMER() - iLocal_70) >= 300 || iLocal_70 == 0) || iLocal_70 > GET_GAME_TIMER())
		{
			SET_PAD_SHAKE(0, 100, 100);
			iLocal_70 = GET_GAME_TIMER();
		}
	}
	if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
	{
		if (!IS_PED_RINGTONE_PLAYING(IS_PED_RINGTONE_PLAYING()))
		{
			if (Global_76577)
			{
				if (!ARE_STRINGS_EQUAL(&(Global_8161[3 /*2811*/][1 /*281*/].f_144[func_97(1198, -1, 0) /*6*/]), "Silent Ringtone Dummy"))
				{
					PLAY_PED_RINGTONE(&(Global_8161[3 /*2811*/][1 /*281*/].f_144[func_97(1198, -1, 0) /*6*/]), PLAY_PED_RINGTONE(), 1);
				}
			}
			else if (!ARE_STRINGS_EQUAL(&(Global_111560.f_14046[Global_19486 /*20*/].f_11), "Silent Ringtone Dummy"))
			{
				if (!Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 1)
				{
					if (IS_PC_VERSION())
					{
						if (DECOR_EXIST_ON(DECOR_EXIST_ON(), "Synched"))
						{
						}
						else
						{
							PLAY_PED_RINGTONE(&(Global_111560.f_14046[Global_19486 /*20*/].f_11), PLAY_PED_RINGTONE(), 1);
						}
					}
					else
					{
						PLAY_PED_RINGTONE(&(Global_111560.f_14046[Global_19486 /*20*/].f_11), PLAY_PED_RINGTONE(), 1);
					}
				}
			}
		}
	}
}

void func_110()
{
	if (func_74(14))
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
		Global_19486 = func_89();
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

__________________________
Native Named by Reliency
1577160489
__________________________
