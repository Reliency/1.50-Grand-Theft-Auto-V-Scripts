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
	vector3 vLocal_20 = { 0f, 0f, 0f };
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	int iLocal_29 = 0;
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
	fLocal_25 = 9.99f;
	fLocal_26 = 0f;
	fLocal_27 = 0f;
	fLocal_28 = 0f;
	NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_10();
	func_7();
	settimera(0);
	settimerb(0);
	while (true)
	{
		wait(0);
		if (Global_19486.f_1 != 9)
		{
			switch (Global_19486.f_1)
			{
				case 7:
					if (timera() > 125)
					{
						func_10();
						settimera(0);
					}
					if (timerb() > floor(fLocal_27) * 30 && timerb() > 150)
					{
						BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "APP_FUNCTION");
						_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
						END_SCALEFORM_MOVIE_METHOD();
						settimerb(0);
					}
					if (timerb() > 2000)
					{
						BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "APP_FUNCTION");
						_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
						END_SCALEFORM_MOVIE_METHOD();
						settimerb(0);
					}
					break;
				
				case 8:
					if (func_6(2, Global_19454, 0))
					{
						func_5();
						Global_19464 = 1;
						func_10();
						func_7();
						if (Global_19486.f_1 > 3)
						{
							Global_19486.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_4())
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
	func_3(0, 0);
	func_3(1, 0);
	func_3(2, 0);
	func_3(3, 0);
	func_3(4, 0);
	CLEAR_BIT(&Global_7357, 22);
	TERMINATE_THIS_THREAD();
}

void func_3(int iParam0, int iParam1)
{
	Global_4269868[iParam0] = iParam1;
}

int func_4()
{
	if (Global_7962 == 1 || Global_19486.f_1 < 7)
	{
		Global_19473 = 1;
		return 1;
	}
	return 0;
}

void func_5()
{
	if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
	{
		PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_19475, true);
	}
}

int func_6(int iParam0, int iParam1, int iParam2)
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

void func_7()
{
	if (Global_19474)
	{
		func_8(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_8(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_8(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_8(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_8(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	CLEAR_BIT(&Global_7356, 17);
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
	int iVar0;
	bool bVar1;
	
	if (func_18() == 0)
	{
		if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
		{
			vLocal_20 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true) };
			fLocal_21 = GET_ENTITY_HEADING(GET_ENTITY_HEADING());
			func_17();
			func_16();
			func_15();
			fLocal_22 = (360f - fLocal_21);
			fLocal_25 = (fLocal_25 - fLocal_22);
			if (fLocal_25 < 0f)
			{
				fLocal_25 = (fLocal_25 + 360f);
			}
			if (iLocal_29 == 0)
			{
				BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(23);
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
				if (IS_BIT_SET(Global_7357, 30))
				{
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(-99);
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
				}
				else
				{
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(floor(fLocal_25));
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(floor(fLocal_26));
				}
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(100);
				if (IS_BIT_SET(Global_7357, 22))
				{
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
				}
				else
				{
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
				}
				if (IS_BIT_SET(Global_7357, 29))
				{
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(false);
				}
				else
				{
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(true);
				}
				if (IS_BIT_SET(Global_7358, 1))
				{
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fLocal_28);
				}
				END_SCALEFORM_MOVIE_METHOD();
			}
			if (fLocal_21 == fLocal_21)
			{
			}
			func_14(Global_19467, "DISPLAY_VIEW", 23f, to_float(1), -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
	{
		vLocal_20 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true) };
		fLocal_21 = GET_ENTITY_HEADING(GET_ENTITY_HEADING());
		if (Global_4269890 > 21)
		{
		}
		iVar0 = 0;
		while (iVar0 < Global_4269890)
		{
			func_13(iVar0);
			func_12(iVar0);
			func_11(iVar0);
			fLocal_22 = (360f - fLocal_21);
			fLocal_25 = (fLocal_25 - fLocal_22);
			if (fLocal_25 < 0f)
			{
				fLocal_25 = (fLocal_25 + 360f);
			}
			if (iLocal_29 == 0)
			{
				BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(23);
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
				bVar1 = false;
				switch (iVar0)
				{
					case 0:
						if (IS_BIT_SET(Global_4269615, 5))
						{
							bVar1 = true;
						}
						break;
					
					case 1:
						if (IS_BIT_SET(Global_4269615, 6))
						{
							bVar1 = true;
						}
						break;
					
					case 2:
						if (IS_BIT_SET(Global_4269615, 7))
						{
							bVar1 = true;
						}
						break;
					
					case 3:
						if (IS_BIT_SET(Global_4269615, 8))
						{
							bVar1 = true;
						}
						break;
				}
				if (bVar1)
				{
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(-99);
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
				}
				else
				{
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(floor(fLocal_25));
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(floor(fLocal_26));
				}
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(100);
				if (IS_BIT_SET(Global_7357, 22))
				{
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(true);
				}
				else
				{
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(true);
				}
				if (IS_BIT_SET(Global_7357, 29))
				{
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(false);
				}
				else
				{
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(true);
				}
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fLocal_28);
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_4269868[iVar0]);
				END_SCALEFORM_MOVIE_METHOD();
			}
			if (fLocal_21 == fLocal_21)
			{
			}
			func_14(Global_19467, "DISPLAY_VIEW", 23f, to_float(1), -1082130432, -1082130432, -1082130432);
			iVar0++;
		}
	}
}

float func_11(int iParam0)
{
	fLocal_23 = (Global_4269804[iParam0 /*3*/] - vLocal_20.x);
	fLocal_24 = (cos(((3.14159f / 180f) * vLocal_20.x)) * (Global_4269804[iParam0 /*3*/].f_1 - vLocal_20.y));
	fLocal_25 = ATAN2(fLocal_23, fLocal_24);
	if (fLocal_25 < 0f)
	{
		fLocal_25 = (fLocal_25 + 360f);
	}
	return fLocal_25;
}

float func_12(int iParam0)
{
	fLocal_27 = sqrt(vdist2(Global_4269804[iParam0 /*3*/], vLocal_20));
	fLocal_28 = (Global_4269804[iParam0 /*3*/].f_2 - vLocal_20.z);
	return fLocal_27;
}

float func_13(int iParam0)
{
	fLocal_26 = sqrt((((Global_4269804[iParam0 /*3*/] - vLocal_20.x) * (Global_4269804[iParam0 /*3*/] - vLocal_20.x)) + ((Global_4269804[iParam0 /*3*/].f_1 - vLocal_20.y) * (Global_4269804[iParam0 /*3*/].f_1 - vLocal_20.y))));
	return fLocal_26;
}

void func_14(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

float func_15()
{
	fLocal_23 = (Global_21911 - vLocal_20.x);
	fLocal_24 = (cos(((3.14159f / 180f) * vLocal_20.x)) * (Global_21911.f_1 - vLocal_20.y));
	fLocal_25 = ATAN2(fLocal_23, fLocal_24);
	if (fLocal_25 < 0f)
	{
		fLocal_25 = (fLocal_25 + 360f);
	}
	return fLocal_25;
}

float func_16()
{
	fLocal_27 = sqrt(vdist2(Global_21911, vLocal_20));
	fLocal_28 = (Global_21911.f_2 - vLocal_20.z);
	return fLocal_27;
}

float func_17()
{
	fLocal_26 = sqrt((((Global_21911 - vLocal_20.x) * (Global_21911 - vLocal_20.x)) + ((Global_21911.f_1 - vLocal_20.y) * (Global_21911.f_1 - vLocal_20.y))));
	return fLocal_26;
}

int func_18()
{
	if (Global_76577 == 1)
	{
		return 1;
	}
	return 0;
}

__________________________
Native Named by Reliency
1577160389
__________________________
