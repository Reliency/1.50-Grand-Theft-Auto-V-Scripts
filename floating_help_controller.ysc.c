void __EntryFunction__()
{
	NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	while (true)
	{
		wait(0);
		func_1();
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_110212)
	{
		if (Global_110212[iVar0 /*28*/].f_21 != 0)
		{
			iVar1 = iVar0;
			if (GET_GAME_TIMER() > Global_110212[iVar0 /*28*/].f_21 && Global_110212[iVar0 /*28*/].f_21 != -1)
			{
				if (func_3(iVar0))
				{
					CLEAR_FLOATING_HELP(iVar1, 0);
				}
				func_2(iVar0);
			}
			else if (func_3(iVar0))
			{
				if (Global_110212[iVar0 /*28*/].f_21 != -1)
				{
					if (!IS_BIT_SET(Global_110212[iVar0 /*28*/].f_27, 0))
					{
						Global_110212[iVar0 /*28*/].f_21 = (Global_110212[iVar0 /*28*/].f_21 + round((GET_FRAME_TIME() * 1000f)));
						if (_0x2432784ACA090DA4(iVar1))
						{
							SET_BIT(&(Global_110212[iVar0 /*28*/].f_27), 0);
						}
					}
				}
				if (Global_110212[iVar0 /*28*/].f_24.f_2 != 9999f)
				{
					if (Global_110212[iVar0 /*28*/].f_23 != 0)
					{
						if (!IS_ENTITY_DEAD(Global_110212[iVar0 /*28*/].f_23, 0))
						{
							if (!IS_BIT_SET(Global_110212[iVar0 /*28*/].f_27, 3))
							{
								_0x784BA7E0ECEB4178(iVar1, _0x784BA7E0ECEB4178(Global_110212[iVar0 /*28*/].f_23, Global_110212[iVar0 /*28*/].f_24));
							}
							else
							{
								_0xB094BC1DB4018240(iVar1, Global_110212[iVar0 /*28*/].f_23, Global_110212[iVar0 /*28*/].f_24, Global_110212[iVar0 /*28*/].f_24.f_1);
							}
						}
					}
					else if ((Global_110212[iVar0 /*28*/].f_24 != 0f || Global_110212[iVar0 /*28*/].f_24.f_1 != 0f) || Global_110212[iVar0 /*28*/].f_24.f_2 != 0f)
					{
						_0x784BA7E0ECEB4178(iVar1, Global_110212[iVar0 /*28*/].f_24);
					}
				}
				else
				{
					_0x7679CC1BCEBE3D4C(iVar1, Global_110212[iVar0 /*28*/].f_24, Global_110212[iVar0 /*28*/].f_24.f_1);
				}
			}
			else if ((GET_GAME_TIMER() - Global_110212[iVar0 /*28*/].f_22) > 1000)
			{
				func_2(iVar0);
			}
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	Global_110212[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_110212[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_110212[iParam0 /*28*/].f_4), "", 64);
	Global_110212[iParam0 /*28*/].f_23 = 0;
	Global_110212[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_110212[iParam0 /*28*/].f_27 = 0;
	Global_110212[iParam0 /*28*/].f_20 = 0;
	Global_110212[iParam0 /*28*/].f_22 = 0;
}

int func_3(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!ARE_STRINGS_EQUAL(&(Global_110212[iParam0 /*28*/]), "") && !ARE_STRINGS_EQUAL(&(Global_110212[iParam0 /*28*/])))
	{
		if (IS_BIT_SET(Global_110212[iParam0 /*28*/].f_27, 1))
		{
			if (IS_BIT_SET(Global_110212[iParam0 /*28*/].f_27, 2))
			{
				return func_7(iVar0, &(Global_110212[iParam0 /*28*/]), &(Global_110212[iParam0 /*28*/].f_4), Global_110212[iParam0 /*28*/].f_20);
			}
			else
			{
				return func_6(iVar0, &(Global_110212[iParam0 /*28*/]), &(Global_110212[iParam0 /*28*/].f_4));
			}
		}
		else if (IS_BIT_SET(Global_110212[iParam0 /*28*/].f_27, 2))
		{
			return func_5(iVar0, &(Global_110212[iParam0 /*28*/]), Global_110212[iParam0 /*28*/].f_20);
		}
		else
		{
			return func_4(iVar0, &(Global_110212[iParam0 /*28*/]));
		}
	}
	return 0;
}

int func_4(int iParam0, char* sParam1)
{
	BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam1);
	return END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED((1 + iParam0));
}

int func_5(int iParam0, char* sParam1, int iParam2)
{
	BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam1);
	ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED((1 + iParam0));
}

int func_6(int iParam0, char* sParam1, int iParam2)
{
	BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam1);
	ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
	return END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED((1 + iParam0));
}

int func_7(int iParam0, char* sParam1, int iParam2, int iParam3)
{
	BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam1);
	ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
	ADD_TEXT_COMPONENT_INTEGER(iParam3);
	return END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED((1 + iParam0));
}

__________________________
Native Named by Reliency
1577160626
__________________________
