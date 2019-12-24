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
	if (iLocal_20 == 0)
	{
		func_10();
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
					if (iLocal_20 == 1)
					{
						func_6();
					}
					break;
				
				case 8:
					if (func_5(2, Global_19454, 0))
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

int func_5(int iParam0, int iParam1, int iParam2)
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

void func_6()
{
	func_7();
	DISABLE_CONTROL_ACTION(0, 80, 1);
}

void func_7()
{
	BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(27);
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_4269903);
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_4269902);
	func_9("");
	func_9(&Global_4269904);
	END_SCALEFORM_MOVIE_METHOD();
	BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "DISPLAY_VIEW");
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(27);
	END_SCALEFORM_MOVIE_METHOD();
	if (!IS_BIT_SET(Global_4456448.f_21, 30))
	{
		func_8(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 27f, -1f, -1f, 0, 0, 0, 0, 0);
	}
}

void func_8(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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

void func_9(char* sParam0)
{
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_10()
{
	func_7();
	func_8(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 27f, -1f, -1f, 0, 0, 0, 0, 0);
}

__________________________
Native Named by Reliency
1577160388
__________________________
