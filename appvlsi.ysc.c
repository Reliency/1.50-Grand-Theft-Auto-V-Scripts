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
	int iLocal_20 = 0;
	int iLocal_21 = 0;
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
	NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	iLocal_21 = 0;
	if (iLocal_20 == 0)
	{
		func_10();
		func_9();
		iLocal_20 = 1;
	}
	while (true)
	{
		wait(0);
		if (Global_19486.f_1 != 9)
		{
			switch (Global_19486.f_1)
			{
				case 7:
					if (iLocal_21 == 1)
					{
						if (func_8(2, Global_19455, 0))
						{
							PLAY_SOUND_FRONTEND(-1, "Lester_Laugh_Phone", "DLC_HEIST_HACKING_SNAKE_SOUNDS", true);
							Global_19464 = 1;
							func_10();
							func_5();
							settimera(0);
							settimerb(0);
						}
					}
					if (iLocal_21 == 2)
					{
						if (timerb() > 499)
						{
							settimerb(0);
						}
						if (timera() > 2200)
						{
							iLocal_21 = 3;
						}
					}
					if (iLocal_21 == 3)
					{
						Global_1573924 = 1;
					}
					break;
				
				case 8:
					if (func_8(2, Global_19454, 0))
					{
						func_4();
						Global_19464 = 1;
						if (Global_19486.f_1 > 3)
						{
							Global_19486.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_3())
			{
				func_2();
			}
		}
		else
		{
			Global_19488 = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()
{
	if (((Global_19486.f_1 == 1 || Global_19486.f_1 == 3) || Global_19486.f_1 == 0) || Global_19430 == 1)
	{
		Global_19473 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_MPHEIST/HEIST_HACK_SNAKE");
	TERMINATE_THIS_THREAD();
}

int func_3()
{
	if (Global_7962 == 1 || Global_19486.f_1 < 7)
	{
		Global_19473 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
	{
		PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_19475, true);
	}
}

void func_5()
{
	if (Global_19474)
	{
		func_6(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_6(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	CLEAR_BIT(&Global_7356, 17);
}

void func_6(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_7(sParam7);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_7(sParam8);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_7(sParam9);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_7(sParam10);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_7(sParam11);
	}
	END_SCALEFORM_MOVIE_METHOD();
}

void func_7(char* sParam0)
{
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_8(int iParam0, int iParam1, int iParam2)
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

void func_9()
{
	if (Global_19474)
	{
		func_6(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_6(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	CLEAR_BIT(&Global_7356, 17);
}

void func_10()
{
	if (iLocal_21 == 0)
	{
		REQUEST_SCRIPT_AUDIO_BANK("DLC_MPHEIST/HEIST_HACK_SNAKE", false, -1);
		while (REQUEST_SCRIPT_AUDIO_BANK("DLC_MPHEIST/HEIST_HACK_SNAKE", false, -1) == 0)
		{
			wait(0);
		}
		func_11(Global_19467, "SET_DATA_SLOT_EMPTY", 23f, -1082130432, -1082130432, -1082130432, -1082130432);
		BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(23);
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(-99);
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(100);
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(2);
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(false);
		if (IS_BIT_SET(Global_7358, 1))
		{
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(0f);
		}
		END_SCALEFORM_MOVIE_METHOD();
		func_11(Global_19467, "DISPLAY_VIEW", 23f, to_float(1), -1082130432, -1082130432, -1082130432);
		iLocal_21 = 1;
	}
	else if (iLocal_21 == 1)
	{
		func_11(Global_19467, "SET_DATA_SLOT_EMPTY", 23f, -1082130432, -1082130432, -1082130432, -1082130432);
		BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(23);
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(-99);
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(100);
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(3);
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(false);
		if (IS_BIT_SET(Global_7358, 1))
		{
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(0f);
		}
		END_SCALEFORM_MOVIE_METHOD();
		func_11(Global_19467, "DISPLAY_VIEW", 23f, to_float(1), -1082130432, -1082130432, -1082130432);
		iLocal_21 = 2;
	}
}

void func_11(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

__________________________
Native Named by Reliency
1577160389
__________________________
