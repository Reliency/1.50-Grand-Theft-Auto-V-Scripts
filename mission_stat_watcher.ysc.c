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
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	struct<563> Local_45 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	float fLocal_68 = 0f;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	bool bLocal_71 = 0;
	int iLocal_72 = 0;
	bool bLocal_73 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_62 = iLocal_61;
	iLocal_63 = iLocal_62;
	fLocal_68 = 100f;
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher")) > 1)
	{
		TERMINATE_THIS_THREAD();
	}
	Global_61465 = 0;
	Global_61472 = 0;
	iVar0 = 1;
	if (HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		func_112();
		Global_73566 = 0;
		Global_61466 = 0;
		Global_61492 = 0;
		TERMINATE_THIS_THREAD();
	}
	iVar1 = 0;
	wait(0);
	func_110();
	while (!Global_61464)
	{
		wait(200);
		if (Global_61472)
		{
			func_112();
			TERMINATE_THIS_THREAD();
		}
	}
	Global_61479 = 0;
	Global_61466 = 1;
	while (!Global_61465)
	{
		if (Global_73566 > 0)
		{
			func_104();
			if (Global_61499 == -1)
			{
				Global_61499 = GET_GAME_TIMER();
			}
			else if ((GET_GAME_TIMER() - Global_61499) > 1000)
			{
				func_103();
			}
		}
		if (Global_61472)
		{
			func_112();
			Global_61466 = 0;
			TERMINATE_THIS_THREAD();
		}
		wait(0);
	}
	Global_61466 = 0;
	if (func_102())
	{
		while (func_102())
		{
			wait(0);
		}
	}
	bVar2 = false;
	while (!bVar2)
	{
		if (!Global_61467 == iLocal_70)
		{
			if (Global_61467)
			{
				settimerb(0);
				iLocal_60 = 0;
				Global_61482 = 0;
			}
			iLocal_70 = Global_61467;
		}
		while (Global_61471)
		{
			wait(1000);
		}
		if (Global_61465 && !Global_61472)
		{
			if (Global_61464 || iLocal_72)
			{
				Global_61469 = 0;
				if (bLocal_71)
				{
				}
				if (Global_61465)
				{
				}
				if (!bLocal_71 == Global_61465)
				{
					func_101(&Local_45);
					Local_45.f_562 = 1;
					func_100();
					func_99();
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < Global_73566)
					{
						if (Global_73567[iVar3 /*9*/] > 0)
						{
							if (Global_61696[Global_73567[iVar3 /*9*/] /*13*/] == 4)
							{
								if (!Global_61696[Global_73567[iVar3 /*9*/] /*13*/].f_7)
								{
									if (Global_61696[Global_73567[iVar3 /*9*/] /*13*/].f_3)
									{
										if (Global_73567[iVar3 /*9*/].f_1 == 0)
										{
											Global_73567[iVar3 /*9*/].f_3 = 5;
										}
									}
								}
							}
						}
						iVar3++;
					}
					bVar4 = false;
					if ((Global_76837 && !Global_61461) || Global_61473)
					{
						bVar4 = true;
					}
					bVar5 = false;
					if (IS_SCREEN_FADED_IN() || IS_SCREEN_FADED_IN())
					{
						bVar5 = true;
					}
					else
					{
						if (Global_98708.f_8)
						{
							bVar5 = true;
						}
						if (Global_61491)
						{
							bVar5 = true;
						}
					}
					if (func_98(0))
					{
						bVar5 = true;
						Global_61491 = 1;
					}
					iVar6 = Global_73717;
					if (Global_61474)
					{
						func_95(Global_61475);
						iVar0 = 2;
						func_94(&Local_45, "HISHPA", &Global_61486, 0);
						if (iVar6 == 69 || iVar6 == 70)
						{
							func_93(&Local_45, 3, "ACTATAKE_AG", "", Global_111560.f_1.f_126[Global_61475 /*23*/], 0, 0, 0);
						}
						else
						{
							func_93(&Local_45, 3, "POTATAKE", "", Global_111560.f_1.f_126[Global_61475 /*23*/], 0, 0, 0);
						}
						iVar7 = 0;
						iVar7 = 0;
						while (iVar7 < Global_94929[Global_61475 /*38*/].f_37)
						{
							if (Global_94929[Global_61475 /*38*/].f_31[iVar7] > 0)
							{
								func_93(&Local_45, 3, func_92(Global_94929[Global_61475 /*38*/].f_25[iVar7]), "", (-1 * Global_94929[Global_61475 /*38*/].f_31[iVar7]), 0, 0, 0);
							}
							iVar7++;
						}
						if ((((Global_111560.f_1.f_126[Global_61475 /*23*/].f_2[0] > 0 || iVar6 == 74) || iVar6 == 75) || iVar6 == 69) || iVar6 == 70)
						{
							func_93(&Local_45, 3, "ACTATAKE_M", "", Global_111560.f_1.f_126[Global_61475 /*23*/].f_2[0], 0, 0, 0);
						}
						if ((Global_111560.f_1.f_126[Global_61475 /*23*/].f_2[1] > 0 || iVar6 == 74) || iVar6 == 75)
						{
							func_93(&Local_45, 3, "ACTATAKE_F", "", Global_111560.f_1.f_126[Global_61475 /*23*/].f_2[1], 0, 0, 0);
						}
						if ((Global_111560.f_1.f_126[Global_61475 /*23*/].f_2[2] > 0 || iVar6 == 74) || iVar6 == 75)
						{
							func_93(&Local_45, 3, "ACTATAKE_T", "", Global_111560.f_1.f_126[Global_61475 /*23*/].f_2[2], 0, 0, 0);
						}
						if (Global_94919.f_7 > 0)
						{
							func_93(&Local_45, 3, "ACTATAKE_L", "", Global_94919.f_7, 0, 0, 0);
						}
						iVar8 = func_90(func_91(Global_61475));
						iVar9 = 0;
						iVar10 = 0;
						iVar7 = 0;
						while (iVar7 < Global_94728[iVar8 /*19*/])
						{
							if (!func_89(Global_111560.f_1.f_12[iVar8 /*6*/][iVar7]))
							{
								iVar9 = (iVar9 + Global_111560.f_1.f_126[Global_61475 /*23*/].f_17[iVar7]);
							}
							else
							{
								iVar10 = (iVar10 + Global_111560.f_1.f_126[Global_61475 /*23*/].f_17[iVar7]);
							}
							iVar7++;
						}
						if (iVar6 == 74 || iVar6 == 75)
						{
							func_93(&Local_45, 3, "LACKTAKE", "", iVar9, 0, 0, 0);
						}
						else
						{
							func_93(&Local_45, 3, "CREWTAKE", "", iVar9, 0, 0, 0);
						}
						if (iVar10 > 0)
						{
							if (!func_98(0))
							{
								switch (iVar6)
								{
									case 90:
										STAT_SET_INT(joaat("hcs_penalty_jewel_funeral"), iVar10, 1);
										break;
									
									case 93:
										STAT_SET_INT(joaat("hcs_penalty_paleto_funeral"), iVar10, 1);
										break;
									
									case 69:
									case 70:
										STAT_SET_INT(joaat("hcs_penalty_bureau_funeral"), iVar10, 1);
										break;
									
									case 84:
									case 85:
										STAT_SET_INT(joaat("hcs_penalty_bigs_funeral"), iVar10, 1);
										break;
									}
							}
							func_93(&Local_45, 3, "HSTENDPFUN", "", iVar10, 0, 0, 0);
						}
					}
					else
					{
						func_94(&Local_45, "MISHPA", &Global_61486, 0);
					}
					if (Global_73566 > 0)
					{
						func_74(&Local_45);
					}
					if (!Global_61461)
					{
						func_68();
					}
					while (!bVar5)
					{
						if (IS_SCREEN_FADED_IN() || IS_SCREEN_FADED_IN())
						{
							bVar5 = true;
						}
						wait(0);
					}
					if ((bVar5 || Global_61491) && !bVar4)
					{
						if (!Global_61473)
						{
							func_64(&Local_45, 0, 0);
						}
						bVar11 = false;
						if (!Global_73716)
						{
							switch (Global_73717)
							{
								case 50:
								case 51:
								case 52:
									SET_AUDIO_FLAG("HoldMissionCompleteWhenPrepared", 1);
									func_60(1);
									bVar11 = true;
									break;
								
								default:
									SET_AUDIO_FLAG("HoldMissionCompleteWhenPrepared", 1);
									func_60(0);
									bVar11 = true;
									break;
							}
						}
						else
						{
							SET_AUDIO_FLAG("HoldMissionCompleteWhenPrepared", 1);
							func_60(1);
							bVar11 = true;
						}
						iVar1 = func_59();
						REQUEST_ADDITIONAL_TEXT("MISHSTA", 3);
						while (!HAS_ADDITIONAL_TEXT_LOADED(3))
						{
							wait(0);
						}
						bLocal_73 = true;
						while (IS_CUTSCENE_PLAYING())
						{
							wait(0);
						}
						while (IS_PLAYER_DEAD(IS_PLAYER_DEAD()))
						{
							wait(0);
						}
						func_64(&Local_45, 1, 0);
						SET_AUDIO_FLAG("HoldMissionCompleteWhenPrepared", 0);
						if (bVar11)
						{
							while (!_0x6F259F82D873B8B8())
							{
								wait(0);
							}
						}
						UNREGISTER_SCRIPT_WITH_AUDIO();
					}
					if (Global_61464)
					{
						iLocal_72 = 1;
						Global_61464 = 0;
					}
					settimera(0);
				}
				if (bLocal_73 && !Global_61472)
				{
					if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
					{
						func_55(0);
					}
					if (Global_73566 > 0 || Global_61461)
					{
						if (Global_61491)
						{
							_SET_UI_LAYER(7);
						}
						if (iVar1 && !Global_61461)
						{
							Global_42316 = 1;
						}
						if (!Global_61473)
						{
							if (func_21(&Local_45, 0, to_float(iVar0), 0, 0, 0))
							{
								Global_61472 = 1;
							}
							func_20();
						}
						if (Global_61491)
						{
							_SET_UI_LAYER(7);
						}
					}
					func_19(1);
					if (!IS_SCREEN_FADED_IN())
					{
						func_17();
					}
					if (!func_16(0))
					{
						switch (func_14("AM_H_PASS"))
						{
							case 2:
								func_11("AM_H_PASS", 3, 2000, 2500, 10000, 7, 0, 0, 0);
								break;
							
							case 1:
								func_10(0);
								break;
							}
						}
				}
				bLocal_71 = Global_61465;
				if (Global_61462)
				{
				}
				else
				{
					IS_PLAYER_DEAD(IS_PLAYER_DEAD());
					if (GET_ENTITY_HEALTH(GET_ENTITY_HEALTH(GET_ENTITY_HEALTH())) < 1)
					{
						Global_61473 = 1;
					}
					if (((((func_102() || func_9()) || Global_61472) || Global_76846) || Global_61473) || !bLocal_73)
					{
						Global_61461 = 0;
						Global_61465 = 0;
						iLocal_72 = 0;
						Global_61468 = 0;
						Global_61469 = 0;
						Global_61479 = 0;
						Global_61482 = 0;
						func_19(0);
						func_2();
						Global_61472 = 0;
						bVar2 = true;
					}
				}
			}
		}
		wait(0);
	}
	func_1(&Local_45);
	Global_30986 = 0;
	Global_61476 = 0;
	TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
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
				if (IS_SCREEN_FADED_OUT() && !func_98(0))
				{
					DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_19(0);
}

void func_2()
{
	if (Global_61471)
	{
		return;
	}
	Global_61480 = 0;
	Global_73566 = 0;
	Global_61482 = 0;
	if (Global_61479)
	{
	}
	Global_61479 = 0;
	func_19(0);
	func_8();
	Global_73718 = 0;
	Global_61470 = 1;
	func_6();
	func_5();
	func_4();
	func_3();
	Global_61461 = 0;
	Global_61491 = 0;
	Global_61499 = -1;
}

void func_3()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_73753[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_73762 = 0;
}

void func_4()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_73719[iVar0 /*2*/] = 0;
		Global_73719[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_73752 = 0;
}

void func_5()
{
	Global_61630 = 0;
}

void func_6()
{
	Global_61490 = 0;
	Global_61494 = func_7(joaat("sp0_shots"));
	Global_61493 = func_7(joaat("sp0_hits"));
	Global_61496 = func_7(joaat("sp1_shots"));
	Global_61495 = func_7(joaat("sp1_hits"));
	Global_61498 = func_7(joaat("sp2_shots"));
	Global_61497 = func_7(joaat("sp2_hits"));
}

int func_7(int iParam0)
{
	var uVar0;
	
	STAT_GET_INT(iParam0, &uVar0, -1);
	return uVar0;
}

void func_8()
{
	int iVar0;
	
	Global_61500 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_61501[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

var func_9()
{
	return Global_1312873;
}

void func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		SET_BIT(&(Global_111560.f_20405.f_150[iVar1]), iVar0);
	}
}

void func_11(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_12(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_12(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111560.f_20405.f_145)
	{
		if (ARE_STRINGS_EQUAL(&(Global_111560.f_20405[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_111560.f_20405.f_145 < 9)
	{
		StringCopy(&(Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_4), sParam1, 16);
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_8 = (GET_GAME_TIMER() + iParam3);
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_9 = iParam5;
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_11 = iParam6;
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_12 = uParam2;
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_13 = iParam7;
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_14 = iParam8;
		Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_10 = ((GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_111560.f_20405[Global_111560.f_20405.f_145 /*16*/].f_10 = -1;
		}
		Global_111560.f_20405.f_145++;
		func_13();
	}
}

void func_13()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_111560.f_20405.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111560.f_20405.f_145)
	{
		if (IS_BIT_SET(Global_111560.f_20405[iVar0 /*16*/].f_11, 0))
		{
			if (Global_111560.f_20405[iVar0 /*16*/].f_12 > Global_111560.f_20405.f_146[0])
			{
				Global_111560.f_20405.f_146[0] = Global_111560.f_20405[iVar0 /*16*/].f_12;
			}
		}
		if (IS_BIT_SET(Global_111560.f_20405[iVar0 /*16*/].f_11, 1))
		{
			if (Global_111560.f_20405[iVar0 /*16*/].f_12 > Global_111560.f_20405.f_146[1])
			{
				Global_111560.f_20405.f_146[1] = Global_111560.f_20405[iVar0 /*16*/].f_12;
			}
		}
		if (IS_BIT_SET(Global_111560.f_20405[iVar0 /*16*/].f_11, 2))
		{
			if (Global_111560.f_20405[iVar0 /*16*/].f_12 > Global_111560.f_20405.f_146[2])
			{
				Global_111560.f_20405.f_146[2] = Global_111560.f_20405[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_14(char* sParam0)
{
	if (ARE_STRINGS_EQUAL(sParam0, &Global_110203))
	{
		return 1;
	}
	if (func_15(sParam0))
	{
		return 0;
	}
	return 2;
}

int func_15(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_111560.f_20405.f_145)
	{
		if (ARE_STRINGS_EQUAL(sParam0, &(Global_111560.f_20405[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return IS_BIT_SET(Global_111560.f_20405.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_17()
{
	_0xEB2D525B57F42B40();
	func_18();
}

void func_18()
{
	Global_22211.f_134 = 1;
}

void func_19(int iParam0)
{
	Global_76837 = iParam0;
	Global_76838 = iParam0;
}

void func_20()
{
	Global_22211.f_6 = 1;
}

int func_21(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	
	if (GET_FRAME_COUNT() == uParam0->f_574)
	{
		return uParam0->f_575;
	}
	uParam0->f_574 = GET_FRAME_COUNT();
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (IS_PED_DEAD_OR_DYING(IS_PED_DEAD_OR_DYING(IS_PED_DEAD_OR_DYING()), 1))
		{
			uParam0->f_575 = 1;
			return 1;
		}
		if (IS_PED_BEING_ARRESTED(IS_PED_BEING_ARRESTED(IS_PED_BEING_ARRESTED())))
		{
			uParam0->f_575 = 1;
			return 1;
		}
	}
	if (!uParam0->f_564)
	{
		if (IS_SCREEN_FADED_OUT() || IS_SCREEN_FADED_OUT())
		{
			SET_NO_LOADING_SCREEN(true);
			uParam0->f_564 = 1;
		}
	}
	if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
	{
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (IS_SPECIAL_ABILITY_ACTIVE(IS_SPECIAL_ABILITY_ACTIVE()))
			{
				SPECIAL_ABILITY_DEACTIVATE(SPECIAL_ABILITY_DEACTIVATE());
			}
		}
	}
	HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HIDE_HUD_COMPONENT_THIS_FRAME(19);
	DISABLE_CONTROL_ACTION(2, 19, 1);
	DISABLE_CONTROL_ACTION(0, 37, 1);
	DISABLE_CONTROL_ACTION(0, 21, 1);
	DISABLE_CONTROL_ACTION(0, 28, 1);
	DISABLE_CONTROL_ACTION(0, 29, 1);
	DISABLE_CONTROL_ACTION(0, 171, 1);
	func_52(0);
	if (_IS_INPUT_DISABLED(2))
	{
		if (_IS_PLAYER_CAM_CONTROL_DISABLED() || (_IS_PLAYER_CAM_CONTROL_DISABLED() && !_IS_PLAYER_CAM_CONTROL_DISABLED()))
		{
			_SHOW_CURSOR_THIS_FRAME();
		}
	}
	Global_41946 = 1;
	if (!uParam0->f_563)
	{
		switch (func_48(GET_PLAYER_PED(GET_PLAYER_PED())))
		{
			case 1:
				ANIMPOSTFX_PLAY("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				ANIMPOSTFX_PLAY("SuccessTrevor", 1000, 0);
				break;
			
			default:
				ANIMPOSTFX_PLAY("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_563 = 1;
	}
	if (uParam0->f_558 == 0)
	{
		uParam0->f_558 = (uParam0->f_572 + floor((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_572 >= (uParam0->f_558 - 1500))
	{
		uParam0->f_558 = uParam0->f_572 + 3000;
	}
	if (uParam0->f_560 == 0f)
	{
		uParam0->f_560 = (uParam0->f_560 + func_47(30f));
		uParam0->f_560 = (uParam0->f_560 + (IntToFloat(uParam0->f_56) * func_47(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_560 = (uParam0->f_560 + func_47((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_560 = (uParam0->f_560 + (func_47(30f) - func_47(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_19(1);
		uParam0->f_572 = (uParam0->f_572 + round((0f + (1000f * timestep()))));
		func_26(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0.225f) * timestep())));
			}
		}
		uParam0->f_30 = func_25(uParam0->f_30, 0f, 1f);
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_565)
				{
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_573 = 0.75f;
					BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_UP_BACKGROUND");
					END_SCALEFORM_MOVIE_METHOD();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1.215f) * timestep())));
			}
		}
		uParam0->f_547 = func_25(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0.7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "TRANSITION_OUT");
			END_SCALEFORM_MOVIE_METHOD();
			uParam0->f_546 = uParam0->f_572;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_548 < 1f)
				{
					uParam0->f_548 = (uParam0->f_548 + (0f + ((1f / 0.3f) * timestep())));
				}
			}
		}
		uParam0->f_548 = func_25(uParam0->f_548, 0f, 1f);
		if (uParam0->f_562)
		{
			if (_0x6CD79468A1E595C6(2))
			{
				if (HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						func_22(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (IS_CONTROL_JUST_PRESSED(2, 216) && uParam0->f_558 > uParam0->f_572 + 333)
		{
			if (((!uParam0->f_566 && uParam0->f_56 != 0) && HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4)) && IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_565)
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					END_SCALEFORM_MOVIE_METHOD();
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					if (uParam0->f_572 > (uParam0->f_558 - 5000))
					{
						uParam0->f_558 = uParam0->f_572 + 5000;
					}
				}
				else if (bParam5)
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_UP_BACKGROUND");
					END_SCALEFORM_MOVIE_METHOD();
					uParam0->f_565 = 0;
					uParam0->f_573 = 0.75f;
				}
				func_22(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
			}
		}
		if ((uParam0->f_565 || uParam0->f_566) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_566 && !uParam0->f_565)
				{
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					END_SCALEFORM_MOVIE_METHOD();
				}
				uParam0->f_559 = func_25((uParam0->f_559 + (((1f / 0.3f) * uParam0->f_573) * timestep())), 0f, 1f);
				uParam0->f_573 = func_25((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_559 = func_25((uParam0->f_559 - ((((1f / 0.3f) * uParam0->f_573) * 0.01f) * timestep())), 0f, 1f);
			uParam0->f_573 = func_25((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_572 > uParam0->f_558)
		{
			if (uParam0->f_561)
			{
				if (!uParam0->f_567)
				{
					if (IS_CONTROL_JUST_PRESSED(2, 215))
					{
						uParam0->f_561 = 0;
					}
				}
			}
			else if ((uParam0->f_572 - uParam0->f_546) > 1000 && uParam0->f_545)
			{
				bVar0 = false;
			}
		}
		uParam0->f_575 = !bVar0;
		if (bParam1)
		{
			wait(0);
		}
		else
		{
			if (!bVar0)
			{
				func_19(0);
			}
			return !bVar0;
		}
	}
	func_19(0);
	return 1;
}

void func_22(var uParam0, bool bParam1)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "CLEAR_ALL");
	END_SCALEFORM_MOVIE_METHOD();
	if (IS_PC_VERSION())
	{
		BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(true);
		END_SCALEFORM_MOVIE_METHOD();
	}
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
	func_24(GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 215, true));
	func_23("ES_HELP");
	if (IS_PC_VERSION())
	{
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(true);
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(215);
	}
	END_SCALEFORM_MOVIE_METHOD();
	if (bParam1)
	{
		BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
		func_24(GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 216, true));
		func_23("ES_XPAND");
		if (IS_PC_VERSION())
		{
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(true);
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(216);
		}
		END_SCALEFORM_MOVIE_METHOD();
	}
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	END_SCALEFORM_MOVIE_METHOD();
}

void func_23(char* sParam0)
{
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_24(char* sParam0)
{
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam0);
}

float func_25(float fParam0, float fParam1, float fParam2)
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

void func_26(var uParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar24[32];
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	float fVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	
	iVar0 = round((uParam0->f_547 * 255f));
	fVar1 = (func_46() * 0.25f);
	if (HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_23(&(uParam0->f_5));
				if (uParam0->f_556 == 4)
				{
					func_45(&(uParam0->f_13));
				}
				else
				{
					func_23(&(uParam0->f_13));
				}
				if (NETWORK_IS_GAME_IN_PROGRESS())
				{
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(150);
				}
				else
				{
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(100);
				}
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(true);
				if (uParam0->f_556 == 4)
				{
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT((uParam0->f_56 - 1));
				}
				else
				{
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam0->f_56);
				}
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(bParam2);
				if (uParam0->f_556 == 4 || uParam0->f_556 == 3)
				{
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(2);
				}
				else
				{
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(69);
				}
				END_SCALEFORM_MOVIE_METHOD();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_572 > 600)
			{
				BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "TRANSITION_UP");
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(0.15f);
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(true);
				END_SCALEFORM_MOVIE_METHOD();
				uParam0->f_3 = 1;
			}
		}
		func_44();
		DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_560 * uParam0->f_559) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_567)
	{
		fVar3 = (((0.1388889f + func_47((2f * 2f))) * uParam0->f_568) * (1f - uParam0->f_548));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_548 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_30 >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_46());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_556 != 4)
	{
		fVar7 = func_43(&(uParam0->f_13));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (_GET_ASPECT_RATIO(0) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		fVar7 = func_43(&(uParam0->f_550));
		fVar8 = (((0.119f + 0.05f) / func_46()) / 2.5f);
		if ((uParam0->f_556 == 1 || uParam0->f_556 == 0) && uParam0->f_557 != 0)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (uParam0->f_556 == 5)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (fVar6 < (fVar7 + (1.9f * fVar8)))
		{
			fVar6 = (fVar7 + (2f * fVar8));
		}
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	SET_INPUT_EXCLUSIVE(2, 215);
	SET_INPUT_EXCLUSIVE(2, 216);
	SET_INPUT_EXCLUSIVE(2, 200);
	DISABLE_CONTROL_ACTION(2, 200, 1);
	if (uParam0->f_562 || uParam0->f_567)
	{
		if ((IntToFloat(uParam0->f_558) - (14000f * fParam1)) < IntToFloat(uParam0->f_572) || ((uParam0->f_567 && uParam0->f_559 > 0.95f) && (uParam0->f_558 - 10000) < uParam0->f_572))
		{
			if (uParam0->f_567)
			{
				if (uParam0->f_570 < 0)
				{
					uParam0->f_570 = (uParam0->f_570 * -1);
					uParam0->f_570 = (uParam0->f_572 + uParam0->f_570);
				}
				if (uParam0->f_570 > 0)
				{
					if ((uParam0->f_570 - uParam0->f_572) > 0)
					{
						func_40((uParam0->f_570 - uParam0->f_572), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					else
					{
						uParam0->f_570 = 0;
						uParam0->f_569 = 1;
						uParam0->f_567 = 0;
						uParam0->f_561 = 0;
						uParam0->f_562 = 0;
						uParam0->f_558 = uParam0->f_572 + 500;
						uParam0->f_570 = 0;
					}
				}
				if (uParam0->f_568 < 1f)
				{
					uParam0->f_568 = (uParam0->f_568 + (0f + ((1f / 0.166f) * timestep())));
					if (uParam0->f_568 > 1f)
					{
						uParam0->f_568 = 1f;
					}
				}
			}
			if (IS_SCREEN_FADED_OUT())
			{
				HIDE_LOADING_ON_FADE_THIS_FRAME();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0.1f) && uParam0->f_572 <= uParam0->f_558)
			{
				HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HIDE_HUD_COMPONENT_THIS_FRAME(8);
				HIDE_HUD_COMPONENT_THIS_FRAME(9);
				HIDE_HUD_COMPONENT_THIS_FRAME(6);
				DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_567)
			{
				DISABLE_CONTROL_ACTION(0, 140, 1);
				DISABLE_CONTROL_ACTION(0, 141, 1);
				DISABLE_CONTROL_ACTION(0, 142, 1);
				DISABLE_CONTROL_ACTION(2, 188, 1);
				if (IS_DISABLED_CONTROL_JUST_PRESSED(2, 188))
				{
					PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 3;
					uParam0->f_570 = 0;
					PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
				DISABLE_CONTROL_ACTION(2, 187, 1);
				if (IS_DISABLED_CONTROL_JUST_PRESSED(2, 187))
				{
					PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 4;
					uParam0->f_570 = 0;
					PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
				DISABLE_CONTROL_ACTION(2, 202, 1);
				if (IS_DISABLED_CONTROL_JUST_PRESSED(2, 202))
				{
					PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 2;
					uParam0->f_570 = 0;
					PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
			}
			else if (uParam0->f_562)
			{
				HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HIDE_HUD_COMPONENT_THIS_FRAME(8);
				HIDE_HUD_COMPONENT_THIS_FRAME(9);
				HIDE_HUD_COMPONENT_THIS_FRAME(6);
				DISABLE_CONTROL_ACTION(0, 140, 1);
				DISABLE_CONTROL_ACTION(0, 141, 1);
				DISABLE_CONTROL_ACTION(0, 142, 1);
				if (IS_CONTROL_JUST_PRESSED(2, 215) || IS_CONTROL_JUST_PRESSED(2, 200))
				{
					PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
					uParam0->f_562 = 0;
					uParam0->f_561 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", false);
				}
			}
		}
	}
	GET_HUD_COLOUR(1, &iVar13, &iVar14, &iVar15, &iVar16);
	SET_TEXT_COLOUR(iVar13, iVar14, iVar15, iVar0);
	SET_TEXT_WRAP(fVar9, fVar10);
	SET_TEXT_JUSTIFICATION(0);
	SET_TEXT_SCALE(1f, 0.4f);
	fVar1 = (fVar1 - func_47(6f));
	fVar1 = (fVar1 + (func_47(30f) - func_47((2f * 2f))));
	fVar11 = (fVar2 - func_47((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_25((fVar11 / (0.6f * func_47(25f))), 0f, 1f);
		func_44();
		DRAW_RECT(0.5f, (fVar1 - (func_47((2f - 0.5f)) - 0.001388889f)), fVar6, func_39(1f), iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_47((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_47((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_46())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_25((fVar11 / (0.8f * func_47(25f))), 0f, 1f);
			func_36(uParam0, iVar17, (fVar1 + func_47(2f)), fVar9, fVar10, round((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_47(25f));
		if (uParam0->f_556 == 4)
		{
			if (iVar17 == (uParam0->f_576 - 1))
			{
				fVar1 = (fVar1 + func_47((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_46())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_47(2f));
					fVar12 = func_25((fVar11 / (0.6f * func_47(25f))), 0f, 1f);
					func_44();
					DRAW_RECT(0.5f, (fVar1 + func_47((2f * 0.5f))), fVar6, func_39(1f), iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_47((2f * 0.3f)));
					if (uParam0->f_56 > 0)
					{
						fVar1 = (fVar1 + func_47((25f * 0.2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_556 == 4)
	{
		return;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_47((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_46())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_47(2f));
			fVar12 = func_25((fVar11 / (0.6f * func_47(25f))), 0f, 1f);
			func_44();
			DRAW_RECT(0.5f, (fVar1 + func_47((2f * 0.5f))), fVar6, func_39(1f), iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_47((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_46())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_25((fVar11 / (0.8f * func_47(25f))), 0f, 1f);
			SET_TEXT_COLOUR(iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar0))));
			func_29(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (_GET_CURRENT_LANGUAGE_ID() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_46()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_46()) / 2.5f));
				if (uParam0->f_556 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_46()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_46()) / 2.5f));
				}
			}
			if (uParam0->f_557 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			if (uParam0->f_556 != 3)
			{
				SET_TEXT_WRAP(fVar20, fVar21);
				SET_TEXT_JUSTIFICATION(1);
			}
			else
			{
				fVar20 = 0.5f;
				SET_TEXT_JUSTIFICATION(0);
			}
			SET_TEXT_SCALE(1f, 0.4f);
			func_28(&(uParam0->f_550), fVar20, (fVar1 + func_47((2f * 2f))), 0, 0, 0);
			SET_TEXT_WRAP(fVar20, fVar21);
			SET_TEXT_JUSTIFICATION(2);
			SET_TEXT_SCALE(1f, 0.4f);
			SET_TEXT_CENTRE(0);
			func_44();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar24, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			SET_TEXT_WRAP(fVar20, fVar22);
			SET_TEXT_COLOUR(iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_556)
			{
				case 0:
					BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PERCENTAGE");
					ADD_TEXT_COMPONENT_INTEGER(uParam0->f_554);
					END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_47((2f * 2f))), 0);
					break;
				
				case 1:
					BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_NUM");
					ADD_TEXT_COMPONENT_INTEGER(uParam0->f_554);
					ADD_TEXT_COMPONENT_INTEGER(uParam0->f_555);
					END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_47((2f * 2f))), 0);
					break;
				
				case 2:
					BEGIN_TEXT_COMMAND_DISPLAY_TEXT("MTPHPER_XPNO");
					ADD_TEXT_COMPONENT_INTEGER(uParam0->f_554);
					END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_47((2f * 2f))), 0);
					break;
				
				case 5:
					BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESDOLLA");
					ADD_TEXT_COMPONENT_FORMATTED_INTEGER(uParam0->f_554, 1);
					END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_47((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_557 != 0)
			{
				iVar25 = 255;
				iVar26 = 255;
				iVar27 = 255;
				iVar28 = iVar0;
				switch (uParam0->f_557)
				{
					case 1:
						GET_HUD_COLOUR(107, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 3:
						GET_HUD_COLOUR(109, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 2:
						GET_HUD_COLOUR(108, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
				}
				fVar29 = (0.001388889f * 5f);
				fVar30 = ((0.00078125f * 16f) * 2f);
				fVar31 = ((0.001388889f * 16f) * 2f);
				fVar32 = ((fVar21 + func_27(4f)) - 0.006f);
				fVar33 = ((fVar1 + func_47(10f)) + fVar29);
				if (uParam0->f_556 == -1)
				{
					fVar32 = (fVar32 - (0.006f * 6f));
				}
				fVar30 = (fVar30 * 0.65f);
				fVar31 = (fVar31 * 0.65f);
				DRAW_SPRITE(&cVar23, &cVar24, fVar32, fVar33, fVar30, fVar31, 0f, iVar25, iVar26, iVar27, round((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_47(30f) - 2f));
		}
	}
}

float func_27(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_28(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	SET_TEXT_CENTRE(iParam3);
	SET_TEXT_FONT(iParam5);
	func_44();
	if (bParam4)
	{
		BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	}
	else
	{
		BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam0);
	}
	END_TEXT_COMMAND_DISPLAY_TEXT(fParam1, fParam2, 0);
}

int func_29(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_35(iParam0), 64);
	StringCopy(&cVar1, func_32(iParam0, bParam1), 64);
	if (GET_HASH_KEY(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			_GET_ACTIVE_SCREEN_RESOLUTION(&iVar2, &iVar3);
			fVar5 = _GET_ASPECT_RATIO(0);
			if (func_31())
			{
				iVar2 = round((to_float(iVar3) * fVar5));
			}
			fVar6 = (to_float(iVar2) / to_float(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_31())
			{
				fVar4 = 1f;
			}
			if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("director_mode")) > 0)
			{
				GET_SCREEN_RESOLUTION(&iVar2, &iVar3);
			}
			iVar2 = round((to_float(iVar2) / fVar4));
			iVar3 = round((to_float(iVar3) / fVar4));
		}
		else
		{
			GET_SCREEN_RESOLUTION(&iVar2, &iVar3);
		}
		vVar7 = { GET_TEXTURE_RESOLUTION(&cVar0, &cVar1) };
		vVar7.x = (vVar7.x * (func_30(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_30(iParam0) / fVar4));
		if (!bParam2)
		{
			vVar7.x = (vVar7.x - 2f);
			vVar7.y = (vVar7.y - 2f);
		}
		if (iParam0 == 30)
		{
			vVar7.x = 288f;
			vVar7.y = 106f;
		}
		if (iParam0 == 29 && GET_HASH_KEY(&(Global_22350.f_7013[29 /*16*/])) == -1487683087)
		{
			vVar7.x = 106f;
			vVar7.y = 106f;
		}
		*fParam3 = ((vVar7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((vVar7.y / IntToFloat(iVar3)) / (vVar7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_22349)
			{
				*fParam4 = (*fParam4 * (Global_22349 / *fParam3));
				*fParam3 = Global_22349;
			}
		}
		return 1;
	}
	return 0;
}

float func_30(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 51:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 61:
			return 0.5f;
			break;
		
		case 60:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_31()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &iVar1);
	fVar2 = (to_float(iVar0) / to_float(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

var func_32(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_7013[iParam0 /*16*/])))
	{
		if (GET_HASH_KEY(&(Global_22350.f_7013[iParam0 /*16*/])) == -1487683087)
		{
			Var2 = { func_34(PLAYER_ID()) };
			if (_NETWORK_GET_PLAYER_CREW_EMBLEM_TXD_NAME(&Var2, &uVar1))
			{
				return func_33(&uVar1);
			}
		}
		else
		{
			return func_33(&(Global_22350.f_7013[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 50:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 51:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 53:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 54:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 55:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 59:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 60:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_33(var uParam0)
{
	return uParam0;
}

struct<13> func_34(int iParam0)
{
	struct<13> Var0;
	
	NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

char* func_35(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_6020[iParam0 /*16*/])))
	{
		if (GET_HASH_KEY(&(Global_22350.f_6020[iParam0 /*16*/])) == -1487683087)
		{
			Var1 = { func_34(PLAYER_ID()) };
			_NETWORK_GET_PLAYER_CREW_EMBLEM_TXD_NAME(&Var1, &uVar0);
			return func_33(&uVar0);
		}
		else
		{
			return func_33(&(Global_22350.f_6020[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 50)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_36(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &uVar3);
	SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iParam5);
	SET_TEXT_WRAP(fParam3, fParam4);
	SET_TEXT_JUSTIFICATION(1);
	SET_TEXT_SCALE(1f, func_38(14f));
	SET_TEXT_CENTRE(0);
	SET_TEXT_FONT(0);
	func_44();
	if (uParam0->f_531[iParam1])
	{
		BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_71[iParam1 /*16*/]));
	}
	else
	{
		BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(uParam0->f_71[iParam1 /*16*/]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			ADD_TEXT_COMPONENT_INTEGER(uParam0->f_489[iParam1]);
		}
	}
	END_TEXT_COMMAND_DISPLAY_TEXT(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_29(7, 0, 1, &fVar5, &fVar6, 0);
			DRAW_SPRITE("CommonMenu", func_32(7, 0), (fParam4 - 0.006f), ((fParam2 + func_47(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_29(5, 0, 1, &fVar5, &fVar6, 0);
			DRAW_SPRITE("CommonMenu", func_32(5, 0), (fParam4 - 0.006f), ((fParam2 + func_47(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_29(6, 0, 1, &fVar5, &fVar6, 0);
			DRAW_SPRITE("CommonMenu", func_32(6, 0), (fParam4 - 0.006f), ((fParam2 + func_47(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		SET_TEXT_JUSTIFICATION(1);
	}
	else
	{
		SET_TEXT_JUSTIFICATION(2);
	}
	SET_TEXT_SCALE(1f, func_38(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		SET_TEXT_WRAP(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		SET_TEXT_WRAP(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iParam5);
	func_37(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}

void func_37(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	SET_TEXT_CENTRE(0);
	SET_TEXT_FONT(0);
	func_44();
	fVar1 = 0f;
	fVar2 = (8f * 0.00078125f);
	fVar3 = (16f * 0.001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			SET_TEXT_SCALE(1f, func_38(18f));
			SET_TEXT_FONT(4);
			if (iParam0 < 0)
			{
				_BEGIN_TEXT_COMMAND_WIDTH("ESMINDOLLA");
				ADD_TEXT_COMPONENT_FORMATTED_INTEGER((-1 * iParam0), 1);
				fVar1 = _END_TEXT_COMMAND_GET_WIDTH(0);
			}
			else
			{
				_BEGIN_TEXT_COMMAND_WIDTH("ESDOLLA");
				ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam0, 1);
				fVar1 = _END_TEXT_COMMAND_GET_WIDTH(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			DRAW_SPRITE("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			DRAW_SPRITE("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			DRAW_SPRITE("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			SET_TEXT_SCALE(1f, func_38(14f));
			break;
	}
	_SET_NOTIFICATION_COLOR_NEXT(iVar0);
	switch (iParam5)
	{
		case 11:
			BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PERCENTAGE");
			ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 1:
			SET_TEXT_FONT(5);
			BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_NUM");
			ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 2:
			SET_TEXT_FONT(5);
			BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_NUM");
			ADD_TEXT_COMPONENT_INTEGER(iParam0);
			ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 4:
		case 5:
			SET_TEXT_SCALE(1f, func_38(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESMINDOLLA");
				ADD_TEXT_COMPONENT_FORMATTED_INTEGER((-1 * iParam0), 1);
			}
			else
			{
				BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESDOLLA");
				ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam0, 1);
			}
			break;
		
		case 6:
			BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			break;
		
		case 7:
			BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam4);
			break;
		
		case 8:
			SET_TEXT_FONT(5);
			BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 14);
			break;
		
		case 9:
			SET_TEXT_FONT(5);
			BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 6);
			break;
		
		case 10:
			SET_TEXT_FONT(5);
			BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 2055);
			break;
		
		case 18:
			SET_TEXT_FONT(5);
			BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 2055);
			break;
		
		case 12:
			BEGIN_TEXT_COMMAND_DISPLAY_TEXT("AHD_DIST");
			ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 13:
			BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			ADD_TEXT_COMPONENT_INTEGER(iParam0);
			ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 15:
		case 14:
			BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			ADD_TEXT_COMPONENT_INTEGER(iParam0);
			ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 16:
			BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 20:
			BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			END_TEXT_COMMAND_DISPLAY_TEXT((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			SET_TEXT_SCALE(1f, func_38(14f));
		}
		else
		{
			END_TEXT_COMMAND_DISPLAY_TEXT(fParam2, fParam3, 0);
		}
	}
}

float func_38(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_39(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

void func_40(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_42(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1375006.f_1 = 1;
		func_41(7, iVar0);
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

void func_41(int iParam0, int iParam1)
{
	SET_BIT(&(Global_1375006.f_6184[iParam0]), iParam1);
}

bool func_42(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_1375006.f_6184[iParam0], iParam1);
}

float func_43(char* sParam0)
{
	_BEGIN_TEXT_COMMAND_WIDTH(sParam0);
	return (_END_TEXT_COMMAND_GET_WIDTH(1) / 2f);
}

void func_44()
{
	_SET_UI_LAYER(1);
	if (IS_SCREEN_FADING_OUT() || IS_SCREEN_FADING_OUT())
	{
		_SET_UI_LAYER(7);
	}
	SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
}

void func_45(char* sParam0)
{
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam0);
}

float func_46()
{
	float fVar0;
	
	fVar0 = 1f;
	if (IS_PC_VERSION())
	{
	}
	return fVar0;
}

float func_47(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

int func_48(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_49(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_49(int iParam0)
{
	if (func_51(iParam0))
	{
		return func_50(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_50(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_51(int iParam0)
{
	return iParam0 < 3;
}

void func_52(int iParam0)
{
	if (func_54())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_53(0))
		{
			func_55(iParam0);
		}
		SET_BIT(&Global_7357, 2);
	}
}

int func_53(int iParam0)
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

bool func_54()
{
	return IS_BIT_SET(Global_1687880, 19);
}

void func_55(int iParam0)
{
	if (func_54())
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
		if (func_53(0))
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

int func_59()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_73566)
	{
		if (Global_73567[iVar0 /*9*/] > 0)
		{
			if (Global_61696[Global_73567[iVar0 /*9*/] /*13*/].f_7 == 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_60(bool bParam0)
{
	char* sVar0;
	
	REGISTER_SCRIPT_WITH_AUDIO(0);
	switch (func_61())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	PLAY_MISSION_COMPLETE_AUDIO(sVar0);
}

int func_61()
{
	func_62();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_62()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()))
	{
		if (func_49(Global_111560.f_2358.f_539.f_4321) != GET_ENTITY_MODEL(GET_ENTITY_MODEL()))
		{
			iVar0 = func_48(PLAYER_PED_ID());
			if (func_51(iVar0) && (!func_63(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_51(Global_111560.f_2358.f_539.f_4321))
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

bool func_63(int iParam0)
{
	return Global_41396 == iParam0;
}

int func_64(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_67(uParam0);
	func_66(uParam0);
	if (ARE_STRINGS_EQUAL(&(uParam0->f_550), "SPR_RESULT") || (ARE_STRINGS_EQUAL(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_566 = 1;
	}
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		REQUEST_STREAMED_TEXTURE_DICT("MPHud", false);
	}
	if (uParam0->f_1 == 0)
	{
		REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
		REQUEST_STREAMED_TEXTURE_DICT("MPLeaderboard", false);
		REQUEST_STREAMED_TEXTURE_DICT("MPHud", false);
		uParam0->f_1 = 0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = REQUEST_SCALEFORM_MOVIE_INSTANCE("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1) || !HAS_SCALEFORM_MOVIE_LOADED("CommonMenu")) || !HAS_SCALEFORM_MOVIE_LOADED("MPLeaderboard")) || !HAS_SCALEFORM_MOVIE_LOADED("MPHud"))
		{
			wait(0);
		}
		if (uParam0->f_562 || uParam0->f_567)
		{
			while (!HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
			{
				wait(0);
			}
		}
	}
	else
	{
		if (((!HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1) || !HAS_SCALEFORM_MOVIE_LOADED("CommonMenu")) || !HAS_SCALEFORM_MOVIE_LOADED("MPLeaderboard")) || !HAS_SCALEFORM_MOVIE_LOADED("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_562)
		{
			if (!HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_562)
	{
		if (uParam0->f_567)
		{
			func_65(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_22(uParam0, 1);
		}
		else
		{
			func_22(uParam0, 0);
		}
	}
	Global_76838 = 1;
	return 1;
}

void func_65(var uParam0)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "CLEAR_ALL");
	END_SCALEFORM_MOVIE_METHOD();
	if (IS_PC_VERSION())
	{
		BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(true);
		END_SCALEFORM_MOVIE_METHOD();
	}
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(2);
	func_24(GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 188, true));
	func_23("ES_HELP_TU");
	END_SCALEFORM_MOVIE_METHOD();
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
	func_24(GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 187, true));
	func_23("ES_HELP_TD");
	END_SCALEFORM_MOVIE_METHOD();
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
	func_24(GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 202, true));
	func_23("ES_HELP_AB");
	END_SCALEFORM_MOVIE_METHOD();
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	END_SCALEFORM_MOVIE_METHOD();
}

void func_66(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	SET_TEXT_JUSTIFICATION(0);
	SET_TEXT_SCALE(1f, func_38(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			_BEGIN_TEXT_COMMAND_WIDTH("STRING");
			ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_13));
			fVar0 = _END_TEXT_COMMAND_GET_WIDTH(1);
		}
		else
		{
			_BEGIN_TEXT_COMMAND_WIDTH(&(uParam0->f_13));
			fVar0 = _END_TEXT_COMMAND_GET_WIDTH(1);
		}
	}
	else
	{
		_BEGIN_TEXT_COMMAND_WIDTH("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					ADD_TEXT_COMPONENT_INTEGER(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = _END_TEXT_COMMAND_GET_WIDTH(1);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_67(var uParam0)
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

void func_68()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	var uVar6;
	float fVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	vector3 vVar13;
	
	if (Global_73566 == 0)
	{
		return;
	}
	if (Global_73717 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_73566)
	{
		if (Global_73567[iVar0 /*9*/].f_3 != 0)
		{
			return;
		}
		iVar0++;
	}
	iVar1 = 0;
	iVar0 = 0;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_73566)
	{
		iVar3 = Global_73567[iVar0 /*9*/];
		bVar4 = !Global_61696[iVar3 /*13*/].f_7;
		bVar5 = Global_61696[iVar3 /*13*/].f_8;
		uVar6 = Global_61696[iVar3 /*13*/].f_12;
		fVar7 = Global_61696[iVar3 /*13*/].f_9;
		bVar8 = false;
		bVar8 = false;
		if (func_73(iVar3, Global_73567[iVar0 /*9*/].f_1))
		{
			bVar8 = true;
		}
		if (bVar4)
		{
			if (bVar8)
			{
				iVar1 = (iVar1 + 100000000);
			}
		}
		if (bVar5)
		{
			iVar9 = Global_73567[iVar0 /*9*/].f_1;
			iVar10 = floor((IntToFloat(iVar9) * fVar7));
			iVar2 = (iVar2 + iVar10);
			iVar1 = (iVar1 + iVar10);
		}
		iVar0++;
	}
	Global_73712 = iVar1;
	Global_73713 = iVar2;
	if (NETWORK_IS_SIGNED_ONLINE())
	{
		if (Global_73716 == 0)
		{
			iVar11 = Global_73717;
			if (iVar11 == 90)
			{
				if (Global_111560.f_9080.f_99.f_205[func_72(0)] == 2)
				{
					vVar12.f_2.f_1 = 4;
					vVar12.x = 716;
					LEADERBOARDS2_WRITE_DATA(&vVar12);
					_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
					_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
					_0x0BCA1D2C47B0D269(126, 1, 0f);
					_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
					_0x0BCA1D2C47B0D269(135, func_71(810), 0f);
					_0x0BCA1D2C47B0D269(136, func_71(811), 0f);
					_0x0BCA1D2C47B0D269(132, func_71(812), 0f);
					_0x0BCA1D2C47B0D269(2, func_71(813), 0f);
					_0x0BCA1D2C47B0D269(141, func_71(814), 0f);
					_0x0BCA1D2C47B0D269(127, func_71(815), 0f);
					_0x0BCA1D2C47B0D269(137, func_71(816), 0f);
					_0x0BCA1D2C47B0D269(7, func_71(817), 0f);
					_0x0BCA1D2C47B0D269(133, func_71(818), 0f);
					_0x0BCA1D2C47B0D269(90, func_71(819), 0f);
					vVar12.x = 717;
					LEADERBOARDS2_WRITE_DATA(&vVar12);
					_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
					_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
					_0x0BCA1D2C47B0D269(126, 1, 0f);
					_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
					_0x0BCA1D2C47B0D269(135, func_71(810), 0f);
					_0x0BCA1D2C47B0D269(136, func_71(811), 0f);
					_0x0BCA1D2C47B0D269(132, func_71(812), 0f);
					_0x0BCA1D2C47B0D269(2, func_71(813), 0f);
					_0x0BCA1D2C47B0D269(141, func_71(814), 0f);
					_0x0BCA1D2C47B0D269(127, func_71(815), 0f);
					_0x0BCA1D2C47B0D269(137, func_71(816), 0f);
					_0x0BCA1D2C47B0D269(7, func_71(817), 0f);
					_0x0BCA1D2C47B0D269(133, func_71(818), 0f);
					_0x0BCA1D2C47B0D269(90, func_71(819), 0f);
				}
				else
				{
					func_70(iVar11);
				}
			}
			else if (iVar11 == 47)
			{
				vVar13.f_2.f_1 = 4;
				vVar13.x = 673;
				LEADERBOARDS2_WRITE_DATA(&vVar13);
				_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
				_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
				_0x0BCA1D2C47B0D269(126, 1, 0f);
				_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
				_0x0BCA1D2C47B0D269(142, func_71(413), 0f);
				_0x0BCA1D2C47B0D269(1, func_71(414), 0f);
				_0x0BCA1D2C47B0D269(87, func_71(415), 0f);
				_0x0BCA1D2C47B0D269(138, func_71(416), 0f);
				_0x0BCA1D2C47B0D269(133, func_71(417), 0f);
				_0x0BCA1D2C47B0D269(7, func_71(418), 0f);
				_0x0BCA1D2C47B0D269(90, func_71(419), 0f);
				_0x0BCA1D2C47B0D269(92, func_71(420), 0f);
				_0x0BCA1D2C47B0D269(5, func_71(421), 0f);
				_0x0BCA1D2C47B0D269(127, func_71(422), 0f);
				_0x0BCA1D2C47B0D269(139, func_71(423), 0f);
				_0x0BCA1D2C47B0D269(134, func_71(424), 0f);
				_0x0BCA1D2C47B0D269(141, func_71(425), 0f);
				_0x0BCA1D2C47B0D269(137, func_71(426), 0f);
				_0x0BCA1D2C47B0D269(132, func_71(427), 0f);
				_0x0BCA1D2C47B0D269(2, func_71(428), 0f);
				_0x0BCA1D2C47B0D269(140, 0, 0f);
				vVar13.x = 672;
				LEADERBOARDS2_WRITE_DATA(&vVar13);
				_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
				_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
				_0x0BCA1D2C47B0D269(126, 1, 0f);
				_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
				_0x0BCA1D2C47B0D269(142, func_71(413), 0f);
				_0x0BCA1D2C47B0D269(1, func_71(414), 0f);
				_0x0BCA1D2C47B0D269(87, func_71(415), 0f);
				_0x0BCA1D2C47B0D269(138, func_71(416), 0f);
				_0x0BCA1D2C47B0D269(133, func_71(417), 0f);
				_0x0BCA1D2C47B0D269(7, func_71(418), 0f);
				_0x0BCA1D2C47B0D269(90, func_71(419), 0f);
				_0x0BCA1D2C47B0D269(92, func_71(420), 0f);
				_0x0BCA1D2C47B0D269(5, func_71(421), 0f);
				_0x0BCA1D2C47B0D269(127, func_71(422), 0f);
				_0x0BCA1D2C47B0D269(139, func_71(423), 0f);
				_0x0BCA1D2C47B0D269(134, func_71(424), 0f);
				_0x0BCA1D2C47B0D269(141, func_71(425), 0f);
				_0x0BCA1D2C47B0D269(135, func_71(426), 0f);
				_0x0BCA1D2C47B0D269(132, func_71(427), 0f);
				_0x0BCA1D2C47B0D269(2, func_71(428), 0f);
				_0x0BCA1D2C47B0D269(140, 0, 0f);
			}
			else
			{
				func_70(iVar11);
			}
			Global_111560.f_9080.f_330[iVar11 /*6*/].f_4 = Global_73712;
		}
		else
		{
			func_69(Global_73717);
		}
	}
}

void func_69(var uParam0)
{
	var uVar0;
	
	uVar0 = uParam0;
	uVar0 = uVar0;
}

void func_70(int iParam0)
{
	vector3 vVar0;
	struct<13> Var1;
	var uVar2;
	
	vVar0.f_2.f_1 = 4;
	if (!NETWORK_IS_SIGNED_ONLINE())
	{
		return;
	}
	if (_NETWORK_PLAYER_IS_IN_CLAN())
	{
		Var1 = { func_34(PLAYER_ID()) };
		if (NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var1))
		{
			if (NETWORK_CLAN_PLAYER_GET_DESC(&uVar2, 35, &Var1))
			{
				vVar0.y = uVar2;
			}
		}
	}
	switch (iParam0)
	{
		case 0:
			vVar0.x = 577;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(7, func_71(0), 0f);
			_0x0BCA1D2C47B0D269(148, func_71(1), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(2), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(3), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(4), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(5), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(6), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(7), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(8), 0f);
			vVar0.x = 913;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(7, func_71(0), 0f);
			_0x0BCA1D2C47B0D269(148, func_71(1), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(2), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(3), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(4), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(5), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(6), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(7), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(8), 0f);
			return;
		
		case 1:
			vVar0.x = 576;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(9), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(10), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(11), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(12), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(13), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(14), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(15), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(16), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(17), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(18), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(19), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(20), 0f);
			vVar0.x = 575;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(9), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(10), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(11), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(12), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(13), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(14), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(15), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(16), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(17), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(18), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(19), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(20), 0f);
			return;
		
		case 2:
			vVar0.x = 579;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(21), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(22), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(23), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(24), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(25), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(26), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(27), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(28), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(29), 0f);
			vVar0.x = 578;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(21), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(22), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(23), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(24), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(25), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(26), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(27), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(28), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(29), 0f);
			return;
		
		case 3:
			vVar0.x = 797;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(30), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(31), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(32), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(33), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(34), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(35), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(36), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(37), 0f);
			vVar0.x = 796;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(30), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(31), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(32), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(33), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(34), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(35), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(36), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(37), 0f);
			return;
		
		case 4:
			vVar0.x = 799;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(43), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(44), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(45), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(46), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(47), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(48), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(49), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(50), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(51), 0f);
			vVar0.x = 798;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(43), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(44), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(45), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(46), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(47), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(48), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(49), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(50), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(51), 0f);
			return;
		
		case 5:
			vVar0.x = 801;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(57), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(58), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(59), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(60), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(61), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(62), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(63), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(64), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(65), 0f);
			vVar0.x = 800;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(57), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(58), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(59), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(60), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(61), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(62), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(63), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(64), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(65), 0f);
			return;
		
		case 6:
			vVar0.x = 803;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(71), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(72), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(73), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(74), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(75), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(76), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(77), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(78), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(79), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(80), 0f);
			vVar0.x = 802;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(71), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(72), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(73), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(74), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(75), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(76), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(77), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(78), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(79), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(80), 0f);
			return;
		
		case 7:
			vVar0.x = 805;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(86), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(87), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(88), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(89), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(90), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(91), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(92), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(93), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(94), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(95), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(96), 0f);
			vVar0.x = 804;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(86), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(87), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(88), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(89), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(90), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(91), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(92), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(93), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(94), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(95), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(96), 0f);
			return;
		
		case 9:
			vVar0.x = 639;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(7, func_71(102), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(103), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(104), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(105), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(106), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(107), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(108), 0f);
			_0x0BCA1D2C47B0D269(137, func_71(109), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(110), 0f);
			vVar0.x = 638;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(7, func_71(102), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(103), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(104), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(105), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(106), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(107), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(108), 0f);
			_0x0BCA1D2C47B0D269(137, func_71(109), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(110), 0f);
			return;
		
		case 8:
			vVar0.x = 641;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(134, func_71(111), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(112), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(113), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(114), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(115), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(116), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(117), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(118), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(119), 0f);
			vVar0.x = 640;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(134, func_71(111), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(112), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(113), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(114), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(115), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(116), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(117), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(118), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(119), 0f);
			return;
		
		case 10:
			vVar0.x = 646;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(7, func_71(120), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(121), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(122), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(123), 0f);
			_0x0BCA1D2C47B0D269(137, func_71(124), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(125), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(126), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(127), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(128), 0f);
			vVar0.x = 645;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(7, func_71(120), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(121), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(122), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(123), 0f);
			_0x0BCA1D2C47B0D269(137, func_71(124), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(125), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(126), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(127), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(128), 0f);
			return;
		
		case 11:
			vVar0.x = 671;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(129), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(130), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(131), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(132), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(133), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(134), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(135), 0f);
			vVar0.x = 670;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(129), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(130), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(131), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(132), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(133), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(134), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(135), 0f);
			return;
		
		case 12:
			vVar0.x = 603;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(92, func_71(136), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(137), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(138), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(139), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(140), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(141), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(142), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(143), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(144), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(145), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(146), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(147), 0f);
			vVar0.x = 602;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(92, func_71(136), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(137), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(138), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(139), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(140), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(141), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(142), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(143), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(144), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(145), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(146), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(147), 0f);
			return;
		
		case 13:
			vVar0.x = 605;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(87, func_71(148), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(149), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(150), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(151), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(152), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(153), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(154), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(155), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(156), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(157), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(158), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(159), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(160), 0f);
			vVar0.x = 604;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(87, func_71(148), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(149), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(150), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(151), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(152), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(153), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(154), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(155), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(156), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(157), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(158), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(159), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(160), 0f);
			return;
		
		case 14:
			vVar0.x = 648;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(1, func_71(161), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(162), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(163), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(164), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(165), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(166), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(167), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(168), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(169), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(170), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(171), 0f);
			vVar0.x = 647;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(1, func_71(161), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(162), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(163), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(164), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(165), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(166), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(167), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(168), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(169), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(170), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(171), 0f);
			return;
		
		case 15:
			vVar0.x = 650;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(1, func_71(172), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(173), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(174), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(175), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(176), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(177), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(178), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(179), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(180), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(181), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(182), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(183), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(184), 0f);
			vVar0.x = 649;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(1, func_71(172), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(173), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(174), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(175), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(176), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(177), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(178), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(179), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(180), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(181), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(182), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(183), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(184), 0f);
			return;
		
		case 16:
			vVar0.x = 656;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(185), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(186), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(187), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(188), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(189), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(190), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(191), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(192), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(193), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(194), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(195), 0f);
			vVar0.x = 655;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(185), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(186), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(187), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(188), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(189), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(190), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(191), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(192), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(193), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(194), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(195), 0f);
			return;
		
		case 17:
			vVar0.x = 583;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(138, func_71(196), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(197), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(198), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(199), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(200), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(201), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(202), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(203), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(204), 0f);
			vVar0.x = 582;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(138, func_71(196), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(197), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(198), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(199), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(200), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(201), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(202), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(203), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(204), 0f);
			return;
		
		case 18:
			vVar0.x = 585;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(133, func_71(205), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(206), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(207), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(208), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(209), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(210), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(211), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(212), 0f);
			_0x0BCA1D2C47B0D269(140, func_71(213), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(214), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(215), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(216), 0f);
			vVar0.x = 584;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(133, func_71(205), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(206), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(207), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(208), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(209), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(210), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(211), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(212), 0f);
			_0x0BCA1D2C47B0D269(140, func_71(213), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(214), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(215), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(216), 0f);
			return;
		
		case 19:
			vVar0.x = 587;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(7, func_71(217), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(218), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(219), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(220), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(221), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(222), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(223), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(224), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(225), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(226), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(227), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(228), 0f);
			vVar0.x = 586;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(7, func_71(217), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(218), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(219), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(220), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(221), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(222), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(223), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(224), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(225), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(226), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(227), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(228), 0f);
			return;
		
		case 20:
			vVar0.x = 609;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(95, func_71(229), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(230), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(231), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(232), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(233), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(234), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(235), 0f);
			_0x0BCA1D2C47B0D269(137, func_71(236), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(237), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(238), 0f);
			vVar0.x = 608;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(95, func_71(229), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(230), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(231), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(232), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(233), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(234), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(235), 0f);
			_0x0BCA1D2C47B0D269(137, func_71(236), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(237), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(238), 0f);
			return;
		
		case 21:
			vVar0.x = 621;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(239), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(240), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(241), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(242), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(243), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(244), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(245), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(246), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(247), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(248), 0f);
			vVar0.x = 620;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(239), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(240), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(241), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(242), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(243), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(244), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(245), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(246), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(247), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(248), 0f);
			return;
		
		case 22:
			vVar0.x = 675;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(249), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(250), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(251), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(252), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(253), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(254), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(255), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(256), 0f);
			vVar0.x = 674;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(249), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(250), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(251), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(252), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(253), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(254), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(255), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(256), 0f);
			return;
		
		case 26:
			vVar0.x = 712;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(257), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(258), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(259), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(260), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(261), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(262), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(263), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(264), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(265), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(266), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(267), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(268), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(269), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(270), 0f);
			_0x0BCA1D2C47B0D269(137, func_71(271), 0f);
			_0x0BCA1D2C47B0D269(103, func_71(272), 0f);
			vVar0.x = 711;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(257), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(258), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(259), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(260), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(261), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(262), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(263), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(264), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(265), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(266), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(267), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(268), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(269), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(270), 0f);
			_0x0BCA1D2C47B0D269(137, func_71(271), 0f);
			_0x0BCA1D2C47B0D269(103, func_71(272), 0f);
			return;
		
		case 29:
			vVar0.x = 611;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(1, func_71(273), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(274), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(275), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(276), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(277), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(278), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(279), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(280), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(281), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(282), 0f);
			vVar0.x = 610;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(1, func_71(273), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(274), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(275), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(276), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(277), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(278), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(279), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(280), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(281), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(282), 0f);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 30:
			vVar0.x = 615;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(283), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(284), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(285), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(286), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(287), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(288), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(289), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(290), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(291), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(292), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(293), 0f);
			vVar0.x = 614;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(283), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(284), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(285), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(286), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(287), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(288), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(289), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(290), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(291), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(292), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(293), 0f);
			return;
		
		case 31:
			vVar0.x = 623;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(133, func_71(294), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(295), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(296), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(297), 0f);
			_0x0BCA1D2C47B0D269(137, func_71(298), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(299), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(300), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(301), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(302), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(303), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(304), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(305), 0f);
			vVar0.x = 622;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(133, func_71(294), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(295), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(296), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(297), 0f);
			_0x0BCA1D2C47B0D269(137, func_71(298), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(299), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(300), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(301), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(302), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(303), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(304), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(305), 0f);
			return;
		
		case 38:
			vVar0.x = 627;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(127, func_71(306), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(307), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(308), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(309), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(310), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(311), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(312), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(313), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(314), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(315), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(316), 0f);
			vVar0.x = 626;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(127, func_71(306), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(307), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(308), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(309), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(310), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(311), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(312), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(313), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(314), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(315), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(316), 0f);
			return;
		
		case 33:
			vVar0.x = 741;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(317), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(318), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(319), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(320), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(321), 0f);
			vVar0.x = 740;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(317), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(318), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(319), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(320), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(321), 0f);
			return;
		
		case 34:
			vVar0.x = 745;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(322), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(323), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(324), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(325), 0f);
			vVar0.x = 742;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(322), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(323), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(324), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(325), 0f);
			return;
		
		case 39:
			vVar0.x = 658;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(133, func_71(326), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(327), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(328), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(329), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(330), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(331), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(332), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(333), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(334), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(335), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(336), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(337), 0f);
			vVar0.x = 657;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(133, func_71(326), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(327), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(328), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(329), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(330), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(331), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(332), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(333), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(334), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(335), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(336), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(337), 0f);
			return;
		
		case 40:
			vVar0.x = 581;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(7, func_71(338), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(339), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(340), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(341), 0f);
			_0x0BCA1D2C47B0D269(140, func_71(342), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(343), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(344), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(345), 0f);
			vVar0.x = 580;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(7, func_71(338), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(339), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(340), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(341), 0f);
			_0x0BCA1D2C47B0D269(140, func_71(342), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(343), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(344), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(345), 0f);
			return;
		
		case 41:
			vVar0.x = 619;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(346), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(347), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(348), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(349), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(350), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(351), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(352), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(353), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(354), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(355), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(356), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(357), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(358), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(359), 0f);
			vVar0.x = 618;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(346), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(347), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(348), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(349), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(350), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(351), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(352), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(353), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(354), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(355), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(356), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(357), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(358), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(359), 0f);
			return;
		
		case 42:
			vVar0.x = 704;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(127, func_71(360), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(361), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(362), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(363), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(364), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(365), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(366), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(367), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(368), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(369), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(370), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(371), 0f);
			vVar0.x = 703;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(127, func_71(360), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(361), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(362), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(363), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(364), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(365), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(366), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(367), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(368), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(369), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(370), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(371), 0f);
			return;
		
		case 43:
			vVar0.x = 593;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(1, func_71(372), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(373), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(374), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(375), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(376), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(377), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(378), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(379), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(380), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(381), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(382), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(383), 0f);
			vVar0.x = 592;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(1, func_71(372), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(373), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(374), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(375), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(376), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(377), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(378), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(379), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(380), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(381), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(382), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(383), 0f);
			return;
		
		case 44:
			vVar0.x = 589;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(384), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(385), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(386), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(387), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(388), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(389), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(390), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(391), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(392), 0f);
			vVar0.x = 588;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(384), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(385), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(386), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(387), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(388), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(389), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(390), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(391), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(392), 0f);
			return;
		
		case 45:
			vVar0.x = 635;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(133, func_71(393), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(394), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(395), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(396), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(397), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(398), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(399), 0f);
			vVar0.x = 634;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(133, func_71(393), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(394), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(395), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(396), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(397), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(398), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(399), 0f);
			return;
		
		case 46:
			vVar0.x = 669;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(400), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(401), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(402), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(403), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(404), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(405), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(406), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(407), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(408), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(409), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(410), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(411), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(412), 0f);
			vVar0.x = 668;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(400), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(401), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(402), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(403), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(404), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(405), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(406), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(407), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(408), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(409), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(410), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(411), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(412), 0f);
			return;
		
		case 47:
			vVar0.x = 673;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(142, func_71(413), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(414), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(415), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(416), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(417), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(418), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(419), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(420), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(421), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(422), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(423), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(424), 0f);
			_0x0BCA1D2C47B0D269(141, func_71(425), 0f);
			_0x0BCA1D2C47B0D269(137, func_71(426), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(427), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(428), 0f);
			vVar0.x = 672;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(142, func_71(413), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(414), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(415), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(416), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(417), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(418), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(419), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(420), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(421), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(422), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(423), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(424), 0f);
			_0x0BCA1D2C47B0D269(141, func_71(425), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(426), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(427), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(428), 0f);
			return;
		
		case 48:
			vVar0.x = 694;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(429), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(430), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(431), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(432), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(433), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(434), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(435), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(436), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(437), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(438), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(439), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(440), 0f);
			vVar0.x = 693;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(429), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(430), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(431), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(432), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(433), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(434), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(435), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(436), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(437), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(438), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(439), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(440), 0f);
			return;
		
		case 49:
			vVar0.x = 702;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(441), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(442), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(443), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(444), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(445), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(446), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(447), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(448), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(449), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(450), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(451), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(452), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(453), 0f);
			vVar0.x = 701;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(441), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(442), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(443), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(444), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(445), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(446), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(447), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(448), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(449), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(450), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(451), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(452), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(453), 0f);
			return;
		
		case 53:
			vVar0.x = 714;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(95, func_71(454), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(455), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(456), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(457), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(458), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(459), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(460), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(461), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(462), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(463), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(464), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(465), 0f);
			vVar0.x = 713;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(95, func_71(454), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(455), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(456), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(457), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(458), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(459), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(460), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(461), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(462), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(463), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(464), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(465), 0f);
			return;
		
		case 60:
			vVar0.x = 809;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(466), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(467), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(468), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(469), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(470), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(471), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(472), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(473), 0f);
			vVar0.x = 808;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(466), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(467), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(468), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(469), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(470), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(471), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(472), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(473), 0f);
			return;
		
		case 61:
			vVar0.x = 637;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(474), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(475), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(476), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(477), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(478), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(479), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(480), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(481), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(482), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(483), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(484), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(485), 0f);
			vVar0.x = 636;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(474), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(475), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(476), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(477), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(478), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(479), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(480), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(481), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(482), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(483), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(484), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(485), 0f);
			return;
		
		case 62:
			vVar0.x = 599;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(136, func_71(486), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(487), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(488), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(489), 0f);
			_0x0BCA1D2C47B0D269(137, func_71(490), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(491), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(492), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(493), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(494), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(495), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(496), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(497), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(498), 0f);
			vVar0.x = 598;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(136, func_71(486), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(487), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(488), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(489), 0f);
			_0x0BCA1D2C47B0D269(137, func_71(490), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(491), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(492), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(493), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(494), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(495), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(496), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(497), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(498), 0f);
			return;
		
		case 63:
			vVar0.x = 601;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(87, func_71(499), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(500), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(501), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(502), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(503), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(504), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(505), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(506), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(507), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(508), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(509), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(510), 0f);
			_0x0BCA1D2C47B0D269(137, func_71(511), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(512), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(513), 0f);
			_0x0BCA1D2C47B0D269(9, func_71(514), 0f);
			vVar0.x = 600;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(87, func_71(499), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(500), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(501), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(502), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(503), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(504), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(505), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(506), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(507), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(508), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(509), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(510), 0f);
			_0x0BCA1D2C47B0D269(137, func_71(511), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(512), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(513), 0f);
			_0x0BCA1D2C47B0D269(9, func_71(514), 0f);
			return;
		
		case 64:
			vVar0.x = 607;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(87, func_71(515), 0f);
			_0x0BCA1D2C47B0D269(137, func_71(516), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(517), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(518), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(519), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(520), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(521), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(522), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(523), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(524), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(525), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(526), 0f);
			vVar0.x = 606;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(87, func_71(515), 0f);
			_0x0BCA1D2C47B0D269(137, func_71(516), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(517), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(518), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(519), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(520), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(521), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(522), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(523), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(524), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(525), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(526), 0f);
			return;
		
		case 66:
			vVar0.x = 680;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(133, func_71(527), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(528), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(529), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(530), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(531), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(532), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(533), 0f);
			vVar0.x = 676;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(133, func_71(527), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(528), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(529), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(530), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(531), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(532), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(533), 0f);
			return;
		
		case 67:
			vVar0.x = 679;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(139, func_71(534), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(535), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(536), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(537), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(538), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(539), 0f);
			vVar0.x = 678;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(139, func_71(534), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(535), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(536), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(537), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(538), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(539), 0f);
			return;
		
		case 68:
			vVar0.x = 725;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(95, func_71(540), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(541), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(542), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(543), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(544), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(545), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(546), 0f);
			vVar0.x = 724;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(95, func_71(540), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(541), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(542), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(543), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(544), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(545), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(546), 0f);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 69:
			vVar0.x = 686;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(92, func_71(547), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(548), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(549), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(550), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(551), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(552), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(553), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(554), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(555), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(556), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(557), 0f);
			_0x0BCA1D2C47B0D269(137, func_71(558), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(559), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(560), 0f);
			vVar0.x = 681;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(92, func_71(547), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(548), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(549), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(550), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(551), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(552), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(553), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(554), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(555), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(556), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(557), 0f);
			_0x0BCA1D2C47B0D269(137, func_71(558), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(559), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(560), 0f);
			return;
		
		case 70:
			vVar0.x = 721;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(142, func_71(561), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(562), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(563), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(564), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(565), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(566), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(567), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(568), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(569), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(570), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(571), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(572), 0f);
			_0x0BCA1D2C47B0D269(137, func_71(573), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(574), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(575), 0f);
			vVar0.x = 720;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(142, func_71(561), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(562), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(563), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(564), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(565), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(566), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(567), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(568), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(569), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(570), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(571), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(572), 0f);
			_0x0BCA1D2C47B0D269(137, func_71(573), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(574), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(575), 0f);
			return;
		
		case 71:
			vVar0.x = 617;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(576), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(577), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(578), 0f);
			_0x0BCA1D2C47B0D269(137, func_71(579), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(580), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(581), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(582), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(583), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(584), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(585), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(586), 0f);
			vVar0.x = 616;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(576), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(577), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(578), 0f);
			_0x0BCA1D2C47B0D269(137, func_71(579), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(580), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(581), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(582), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(583), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(584), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(585), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(586), 0f);
			return;
		
		case 72:
			vVar0.x = 727;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(138, func_71(587), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(588), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(589), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(590), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(591), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(592), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(593), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(594), 0f);
			vVar0.x = 726;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(138, func_71(587), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(588), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(589), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(590), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(591), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(592), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(593), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(594), 0f);
			return;
		
		case 73:
			vVar0.x = 729;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(92, func_71(595), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(596), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(597), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(598), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(599), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(600), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(601), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(602), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(603), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(604), 0f);
			vVar0.x = 728;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(92, func_71(595), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(596), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(597), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(598), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(599), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(600), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(601), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(602), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(603), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(604), 0f);
			return;
		
		case 74:
			vVar0.x = 625;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(87, func_71(605), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(606), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(607), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(608), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(609), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(610), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(611), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(612), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(613), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(614), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(615), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(616), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(617), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(618), 0f);
			_0x0BCA1D2C47B0D269(137, func_71(619), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(620), 0f);
			vVar0.x = 624;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(87, func_71(605), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(606), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(607), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(608), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(609), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(610), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(611), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(612), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(613), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(614), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(615), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(616), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(617), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(618), 0f);
			_0x0BCA1D2C47B0D269(137, func_71(619), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(620), 0f);
			return;
		
		case 75:
			vVar0.x = 719;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(127, func_71(621), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(622), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(623), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(624), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(625), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(626), 0f);
			_0x0BCA1D2C47B0D269(137, func_71(627), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(628), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(629), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(630), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(631), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(632), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(633), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(634), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(635), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(636), 0f);
			vVar0.x = 718;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(127, func_71(621), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(622), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(623), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(624), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(625), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(626), 0f);
			_0x0BCA1D2C47B0D269(137, func_71(627), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(628), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(629), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(630), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(631), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(632), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(633), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(634), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(635), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(636), 0f);
			return;
		
		case 76:
			vVar0.x = 667;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(7, func_71(637), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(638), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(639), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(640), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(641), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(642), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(643), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(644), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(645), 0f);
			_0x0BCA1D2C47B0D269(137, func_71(646), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(647), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(648), 0f);
			vVar0.x = 666;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(7, func_71(637), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(638), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(639), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(640), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(641), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(642), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(643), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(644), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(645), 0f);
			_0x0BCA1D2C47B0D269(137, func_71(646), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(647), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(648), 0f);
			return;
		
		case 78:
			vVar0.x = 735;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(138, func_71(649), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(650), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(651), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(652), 0f);
			vVar0.x = 734;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(138, func_71(649), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(650), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(651), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(652), 0f);
			return;
		
		case 79:
			vVar0.x = 737;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(7, func_71(653), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(654), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(655), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(656), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(657), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(658), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(659), 0f);
			vVar0.x = 736;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(7, func_71(653), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(654), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(655), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(656), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(657), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(658), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(659), 0f);
			return;
		
		case 84:
			vVar0.x = 706;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(7, func_71(660), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(661), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(662), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(663), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(664), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(665), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(666), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(667), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(668), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(669), 0f);
			_0x0BCA1D2C47B0D269(137, func_71(670), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(671), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(672), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(673), 0f);
			vVar0.x = 705;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(7, func_71(660), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(661), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(662), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(663), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(664), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(665), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(666), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(667), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(668), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(669), 0f);
			_0x0BCA1D2C47B0D269(137, func_71(670), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(671), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(672), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(673), 0f);
			return;
		
		case 85:
			vVar0.x = 723;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(133, func_71(674), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(675), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(676), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(677), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(678), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(679), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(680), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(681), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(682), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(683), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(684), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(685), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(686), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(687), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(688), 0f);
			vVar0.x = 722;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(133, func_71(674), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(675), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(676), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(677), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(678), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(679), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(680), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(681), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(682), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(683), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(684), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(685), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(686), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(687), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(688), 0f);
			return;
		
		case 86:
			vVar0.x = 595;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(7, func_71(689), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(690), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(691), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(692), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(693), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(694), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(695), 0f);
			vVar0.x = 594;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(7, func_71(689), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(690), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(691), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(692), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(693), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(694), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(695), 0f);
			return;
		
		case 87:
			vVar0.x = 731;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(90, func_71(696), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(697), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(698), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(699), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(700), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(701), 0f);
			vVar0.x = 730;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(90, func_71(696), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(697), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(698), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(699), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(700), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(701), 0f);
			return;
		
		case 88:
			vVar0.x = 733;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(95, func_71(702), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(703), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(704), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(705), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(706), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(707), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(708), 0f);
			vVar0.x = 732;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(95, func_71(702), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(703), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(704), 0f);
			_0x0BCA1D2C47B0D269(139, func_71(705), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(706), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(707), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(708), 0f);
			return;
		
		case 91:
			vVar0.x = 652;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(138, func_71(709), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(710), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(711), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(712), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(713), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(714), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(715), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(716), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(717), 0f);
			vVar0.x = 651;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(138, func_71(709), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(710), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(711), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(712), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(713), 0f);
			_0x0BCA1D2C47B0D269(142, func_71(714), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(715), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(716), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(717), 0f);
			return;
		
		case 92:
			vVar0.x = 739;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(95, func_71(718), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(719), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(720), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(721), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(722), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(723), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(724), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(725), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(726), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(727), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(728), 0f);
			vVar0.x = 738;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(95, func_71(718), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(719), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(720), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(721), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(722), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(723), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(724), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(725), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(726), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(727), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(728), 0f);
			return;
		
		case 93:
			vVar0.x = 654;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(7, func_71(729), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(730), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(731), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(732), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(733), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(734), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(735), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(736), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(737), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(738), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(739), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(740), 0f);
			vVar0.x = 653;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(7, func_71(729), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(730), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(731), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(732), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(733), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(734), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(735), 0f);
			_0x0BCA1D2C47B0D269(87, func_71(736), 0f);
			_0x0BCA1D2C47B0D269(1, func_71(737), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(738), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(739), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(740), 0f);
			return;
		
		case 90:
			vVar0.x = 597;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(135, func_71(810), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(811), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(812), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(813), 0f);
			_0x0BCA1D2C47B0D269(141, func_71(814), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(815), 0f);
			_0x0BCA1D2C47B0D269(137, func_71(816), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(817), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(818), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(819), 0f);
			vVar0.x = 596;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(135, func_71(810), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(811), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(812), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(813), 0f);
			_0x0BCA1D2C47B0D269(141, func_71(814), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(815), 0f);
			_0x0BCA1D2C47B0D269(137, func_71(816), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(817), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(818), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(819), 0f);
			return;
		
		case 36:
			vVar0.x = 831;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(138, func_71(820), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(821), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(822), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(823), 0f);
			vVar0.x = 832;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(138, func_71(820), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(821), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(822), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(823), 0f);
			return;
		
		case 37:
			vVar0.x = 833;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(138, func_71(824), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(825), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(826), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(827), 0f);
			vVar0.x = 834;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(138, func_71(824), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(825), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(826), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(827), 0f);
			return;
		
		case 24:
			vVar0.x = 848;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(133, func_71(846), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(847), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(848), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(849), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(850), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(851), 0f);
			vVar0.x = 847;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(133, func_71(846), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(847), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(848), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(849), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(850), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(851), 0f);
			return;
		
		case 25:
			vVar0.x = 846;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(133, func_71(852), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(853), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(854), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(855), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(856), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(857), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(858), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(859), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(860), 0f);
			vVar0.x = 845;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(133, func_71(852), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(853), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(854), 0f);
			_0x0BCA1D2C47B0D269(5, func_71(855), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(856), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(857), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(858), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(859), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(860), 0f);
			return;
		
		case 59:
			vVar0.x = 807;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(861), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(862), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(863), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(864), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(865), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(866), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(867), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(868), 0f);
			_0x0BCA1D2C47B0D269(137, func_71(869), 0f);
			vVar0.x = 806;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(861), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(862), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(863), 0f);
			_0x0BCA1D2C47B0D269(135, func_71(864), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(865), 0f);
			_0x0BCA1D2C47B0D269(136, func_71(866), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(867), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(868), 0f);
			_0x0BCA1D2C47B0D269(137, func_71(869), 0f);
			return;
		
		case 65:
			vVar0.x = 838;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(870), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(871), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(872), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(873), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(874), 0f);
			vVar0.x = 837;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(870), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(871), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(872), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(873), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(874), 0f);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 80:
			vVar0.x = 917;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(133, func_71(875), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(876), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(877), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(878), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(879), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(880), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(881), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(882), 0f);
			vVar0.x = 916;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(133, func_71(875), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(876), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(877), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(878), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(879), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(880), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(881), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(882), 0f);
			return;
		
		case 81:
			vVar0.x = 919;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(133, func_71(883), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(884), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(885), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(886), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(887), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(888), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(889), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(890), 0f);
			vVar0.x = 918;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(133, func_71(883), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(884), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(885), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(886), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(887), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(888), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(889), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(890), 0f);
			return;
		
		case 82:
			vVar0.x = 921;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(133, func_71(891), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(892), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(893), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(894), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(895), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(896), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(897), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(898), 0f);
			vVar0.x = 920;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(133, func_71(891), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(892), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(893), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(894), 0f);
			_0x0BCA1D2C47B0D269(138, func_71(895), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(896), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(897), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(898), 0f);
			return;
		
		case 83:
			vVar0.x = 923;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(899), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(900), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(901), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(902), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(903), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(904), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(905), 0f);
			vVar0.x = 922;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(2, func_71(899), 0f);
			_0x0BCA1D2C47B0D269(134, func_71(900), 0f);
			_0x0BCA1D2C47B0D269(92, func_71(901), 0f);
			_0x0BCA1D2C47B0D269(133, func_71(902), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(903), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(904), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(905), 0f);
			return;
		
		case 89:
			vVar0.x = 925;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(138, func_71(906), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(907), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(908), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(909), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(910), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(911), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(912), 0f);
			vVar0.x = 924;
			LEADERBOARDS2_WRITE_DATA(&vVar0);
			_0x0BCA1D2C47B0D269(131, Global_73712, 0f);
			_0x0BCA1D2C47B0D269(162, Global_73713, 0f);
			_0x0BCA1D2C47B0D269(126, 1, 0f);
			_0x0BCA1D2C47B0D269(161, Global_73715, 0f);
			_0x0BCA1D2C47B0D269(138, func_71(906), 0f);
			_0x0BCA1D2C47B0D269(2, func_71(907), 0f);
			_0x0BCA1D2C47B0D269(7, func_71(908), 0f);
			_0x0BCA1D2C47B0D269(127, func_71(909), 0f);
			_0x0BCA1D2C47B0D269(95, func_71(910), 0f);
			_0x0BCA1D2C47B0D269(90, func_71(911), 0f);
			_0x0BCA1D2C47B0D269(132, func_71(912), 0f);
			return;
		
		default:
	}
}

int func_71(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	switch (iParam0)
	{
		case 665:
		case 676:
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (Global_111560.f_1.f_126[Global_61475 /*23*/].f_11[iVar0] == 1)
				{
					iVar1 = (iVar1 + Global_111560.f_1.f_126[Global_61475 /*23*/].f_17[iVar0]);
				}
				iVar0++;
			}
			return iVar1;
		
		default:
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_73566)
	{
		if (Global_73567[iVar0 /*9*/] == iParam0)
		{
			return Global_73567[iVar0 /*9*/].f_1;
		}
		iVar0++;
	}
	return 0;
}

int func_72(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7;
			break;
		
		case 1:
			return 8;
			break;
		
		case 2:
			return 9;
			break;
		
		case 3:
			return 10;
			break;
		
		case 4:
			return 11;
			break;
	}
	return -1;
}

int func_73(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	switch (Global_61696[iParam0 /*13*/])
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 17:
			if (iParam1 < 1)
			{
				return 0;
			}
			break;
	}
	if (iParam1 == 2147483647)
	{
		return 0;
	}
	if (((iParam0 == 881 || iParam0 == 889) || iParam0 == 897) && Global_111560.f_24899[4 /*4*/] == func_61())
	{
		Global_61696[iParam0 /*13*/].f_2 = 0;
	}
	if (Global_61696[iParam0 /*13*/].f_3)
	{
		if (iParam1 < Global_61696[iParam0 /*13*/].f_2)
		{
			return 1;
		}
	}
	else if (iParam1 >= Global_61696[iParam0 /*13*/].f_2)
	{
		return 1;
	}
	return 0;
}

void func_74(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	
	if (Global_61461)
	{
		Global_61476 = 0;
		return;
	}
	iLocal_61 = 0;
	iLocal_62 = 0;
	iVar0 = 0;
	if (func_98(0))
	{
		CLEAR_REPLAY_STATS();
		Global_61463 = 1;
		BEGIN_REPLAY_STATS(33, 33);
	}
	iVar1 = -1;
	iLocal_66 = 0;
	bVar2 = false;
	iVar0 = 0;
	while (iVar0 < Global_73566)
	{
		switch (Global_73567[iVar0 /*9*/])
		{
			case 852:
			case 846:
				Global_73567[iVar0 /*9*/].f_1 = 1;
				break;
		}
		if (func_85(uParam0, iVar0))
		{
		}
		if (Global_73567[iVar0 /*9*/] >= 0)
		{
			if (!Global_61696[Global_73567[iVar0 /*9*/] /*13*/].f_7)
			{
				iLocal_62++;
				if (Global_73567[iVar0 /*9*/].f_3 == 2)
				{
					bVar2 = true;
				}
			}
		}
		switch (Global_73567[iVar0 /*9*/])
		{
			case 84:
			case 100:
			case 69:
			case 41:
			case 54:
				iVar1 = Global_73567[iVar0 /*9*/].f_1;
				break;
		}
		iVar0++;
	}
	Global_73715 = iLocal_61;
	fVar3 = func_80(uParam0, iLocal_61, iLocal_62, bVar2);
	if (func_98(0))
	{
		ADD_REPLAY_STAT_VALUE(Global_73717);
		ADD_REPLAY_STAT_VALUE(round(fVar3));
		if (bVar2)
		{
			ADD_REPLAY_STAT_VALUE(1);
		}
		else
		{
			ADD_REPLAY_STAT_VALUE(0);
		}
		if (Global_73716)
		{
			ADD_REPLAY_STAT_VALUE(1);
		}
		else
		{
			ADD_REPLAY_STAT_VALUE(0);
		}
		END_REPLAY_STATS();
		Global_61463 = 0;
	}
	Global_61476 = 0;
	if (iVar1 > -1)
	{
		fVar3 = to_float(iVar1);
	}
	func_75(fVar3, bVar2);
}

void func_75(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	if (Global_73716)
	{
		iVar1 = Global_73717;
		fVar0 = func_79(iVar1);
		if (fVar0 < 100f)
		{
			if (fParam0 >= 100f)
			{
				Global_111560.f_10011.f_22++;
			}
		}
		if (fParam0 >= fVar0)
		{
			func_78(iVar1, fParam0, bParam1);
		}
	}
	else if (Global_73717 == -1)
	{
	}
	else
	{
		iVar2 = Global_73717;
		fVar0 = func_77(iVar2);
		if (fVar0 < 100f)
		{
			if (fParam0 >= 100f)
			{
				Global_111560.f_10011.f_22++;
			}
		}
		if (fParam0 >= fVar0)
		{
			func_76(iVar2, fParam0, bParam1);
		}
	}
}

void func_76(int iParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_111560.f_9080.f_330[iParam0 /*6*/].f_5 = 50f;
	}
	else
	{
		Global_111560.f_9080.f_330[iParam0 /*6*/].f_5 = fParam1;
	}
	Global_30745 = 1;
}

float func_77(int iParam0)
{
	return Global_111560.f_9080.f_330[iParam0 /*6*/].f_5;
}

void func_78(int iParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_111560.f_18569[iParam0 /*6*/].f_5 = 50f;
	}
	else
	{
		Global_111560.f_18569[iParam0 /*6*/].f_5 = fParam1;
	}
	Global_30745 = 1;
}

var func_79(int iParam0)
{
	return Global_111560.f_18569[iParam0 /*6*/].f_5;
}

float func_80(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = func_84(iParam1, iParam2, 0);
	iVar1 = func_83(fVar0);
	if (bParam3)
	{
		fVar0 = 50f;
		iVar1 = 1;
	}
	if (fVar0 == 0f)
	{
		func_82(uParam0, 1, "MTPHPER", 0, 0, 0, 0, 0);
		return fVar0;
	}
	iVar2 = 0;
	switch (func_81(iVar1))
	{
		case 109:
			iVar2 = 3;
			break;
		
		case 108:
			iVar2 = 2;
			break;
		
		case 107:
			iVar2 = 1;
			break;
	}
	switch (func_81(iVar1))
	{
		case 109:
			func_82(uParam0, 1, "MTPHPER", round(fVar0), 0, 0, iVar2, 0);
			break;
		
		case 108:
			func_82(uParam0, 1, "MTPHPER", round(fVar0), 0, 0, iVar2, 0);
			break;
		
		case 107:
			func_82(uParam0, 1, "MTPHPER", round(fVar0), 0, 0, iVar2, 0);
			break;
	}
	return fVar0;
}

int func_81(int iParam0)
{
	int iVar0;
	
	iVar0 = 107;
	switch (iParam0)
	{
		case 3:
			iVar0 = 109;
			break;
		
		case 2:
			iVar0 = 108;
			break;
		
		case 1:
			iVar0 = 107;
			break;
	}
	return iVar0;
}

void func_82(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	uParam0->f_554 = iParam3;
	uParam0->f_555 = iParam4;
	uParam0->f_556 = iParam5;
	uParam0->f_557 = iParam6;
	uParam0->f_576 = iParam7;
}

int func_83(float fParam0)
{
	if (fParam0 == 0f)
	{
		return 0;
	}
	if (fParam0 == 100f)
	{
		return 3;
	}
	else if (fParam0 > 50f)
	{
		return 2;
	}
	return 1;
}

float func_84(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	
	if (bParam2)
	{
		return 0f;
	}
	if (iParam0 == iParam1)
	{
		return 100f;
	}
	fVar0 = (to_float(iParam0) / to_float(iParam1));
	fVar1 = ((50f * fVar0) + 50f);
	fVar1 = to_float(ceil(fVar1));
	if (fVar1 > 100f)
	{
		fVar1 = 100f;
	}
	return fVar1;
}

int func_85(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	char* sVar8;
	int iVar9;
	
	fVar0 = 0f;
	fVar1 = 0f;
	if (Global_73567[iParam1 /*9*/] >= 0)
	{
	}
	else
	{
		return 0;
	}
	Var2 = { Global_61696[Global_73567[iParam1 /*9*/] /*13*/] };
	if (Var2 == 15)
	{
		Global_73567[iParam1 /*9*/].f_1 = iLocal_69;
	}
	if (Var2 == 9)
	{
		Global_73567[iParam1 /*9*/].f_2 = fLocal_68;
	}
	if (Var2 == 14)
	{
		Global_73567[iParam1 /*9*/].f_1 = floor(Global_73567[iParam1 /*9*/].f_2);
	}
	if (func_73(Global_73567[iParam1 /*9*/], Global_73567[iParam1 /*9*/].f_1))
	{
		fVar0 = 1f;
	}
	if (Global_73567[iParam1 /*9*/].f_3 != 0)
	{
		fVar0 = 0f;
	}
	if (!Var2.f_2 == 0)
	{
		fVar1 = to_float(floor(((to_float(Global_73567[iParam1 /*9*/].f_1) / to_float(Var2.f_2)) * 100f)));
		if (fVar1 > 100f)
		{
			fVar1 = 100f;
		}
	}
	iVar3 = func_88(Var2.f_4);
	iVar4 = 0;
	switch (Global_73567[iParam1 /*9*/])
	{
		case 42:
		case 55:
		case 85:
		case 70:
		case 101:
			iVar4 = 1;
			break;
		
		case 84:
		case 100:
		case 69:
		case 41:
		case 54:
			iVar4 = 1;
			break;
	}
	if (Global_73567[iParam1 /*9*/].f_3 == 0 || iVar4)
	{
		if (Var2.f_3)
		{
			if ((iVar3 > Global_73567[iParam1 /*9*/].f_1 || iVar3 < 0) || iVar3 == -1)
			{
				func_87(Global_73567[iParam1 /*9*/].f_1, Global_73567[iParam1 /*9*/]);
			}
		}
		else if ((Global_73567[iParam1 /*9*/].f_1 > iVar3 || iVar3 < 0) || iVar3 == -1)
		{
			func_87(Global_73567[iParam1 /*9*/].f_1, Global_73567[iParam1 /*9*/]);
		}
	}
	iVar5 = Global_73567[iParam1 /*9*/].f_1;
	if (Var2.f_7)
	{
		return 1;
	}
	iVar6 = 1;
	if (fVar0 == 1f)
	{
		iLocal_61++;
		iVar6 = 2;
	}
	sVar7 = func_86(Global_73567[iParam1 /*9*/]);
	if (Global_73567[iParam1 /*9*/].f_3 != 0)
	{
		if (!func_98(0))
		{
			func_87(-1, Global_73567[iParam1 /*9*/]);
		}
		sVar8 = "MTPHPERRET";
		switch (Global_73567[iParam1 /*9*/].f_3)
		{
			case 4:
				sVar8 = "MTPHPERCHE";
				break;
			
			case 2:
				sVar8 = "MTPHPERSKI";
				break;
			
			case 3:
				sVar8 = "MTPHPERTAX";
				break;
			
			case 5:
				sVar8 = "MTPHPERNOREC";
				break;
		}
		if (iLocal_66 == Global_73567[iParam1 /*9*/].f_3)
		{
			sVar8 = "";
		}
		iLocal_66 = Global_73567[iParam1 /*9*/].f_3;
		func_93(uParam0, 6, sVar7, sVar8, Global_73567[iParam1 /*9*/].f_1, 0, 3, 0);
	}
	else
	{
		iLocal_66 = 0;
		switch (Var2)
		{
			case 1:
				func_93(uParam0, 8, sVar7, "", Global_73567[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 2:
				func_93(uParam0, 9, sVar7, "", Global_73567[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 3:
				func_93(uParam0, 0, sVar7, "", Global_73567[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 4:
			case 17:
				func_93(uParam0, 9, sVar7, "", Global_73567[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 5:
				func_93(uParam0, 11, sVar7, "", ceil(((to_float(Global_73567[iParam1 /*9*/].f_1) / to_float(Var2.f_2)) * 100f)), 0, iVar6, 0);
				break;
			
			case 6:
				func_93(uParam0, 0, sVar7, "", Global_73567[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 7:
				if (iVar5 > Var2.f_2)
				{
					iVar5 = Var2.f_2;
				}
				func_93(uParam0, 2, sVar7, "", iVar5, Var2.f_2, iVar6, 0);
				break;
			
			case 8:
				iVar9 = Global_73567[iParam1 /*9*/].f_1;
				if (iVar9 > Var2.f_2)
				{
					iVar9 = Var2.f_2;
				}
				func_93(uParam0, 2, sVar7, "", iVar9, Var2.f_2, iVar6, 0);
				break;
			
			case 9:
				func_93(uParam0, 11, sVar7, "", round(Global_73567[iParam1 /*9*/].f_2), 0, iVar6, 0);
				break;
			
			case 10:
			case 15:
			case 16:
				func_93(uParam0, 1, sVar7, "", Global_73567[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 11:
				func_93(uParam0, 11, sVar7, "", Global_73567[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 14:
				func_93(uParam0, 12, sVar7, "", Global_73567[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			case 12:
			case 13:
				func_93(uParam0, 3, sVar7, "", Global_73567[iParam1 /*9*/].f_1, 0, iVar6, 0);
				break;
			
			default:
				break;
			}
	}
	return 0;
}

char* func_86(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MISHSTA_0";
		
		case 9:
			return "MISHSTA_1";
		
		case 10:
			return "MISHSTA_2";
		
		case 21:
			return "MISHSTA_1";
		
		case 22:
			return "MISHSTA_3";
		
		case 338:
			return "MISHSTA_0";
		
		case 339:
			return "MISHSTA_4";
		
		case 196:
			return "MISHSTA_5";
		
		case 197:
			return "MISHSTA_0";
		
		case 205:
			return "MISHSTA_6";
		
		case 206:
			return "MISHSTA_7";
		
		case 207:
			return "MISHSTA_8";
		
		case 218:
			return "MISHSTA_1";
		
		case 217:
			return "MISHSTA_0";
		
		case 384:
			return "MISHSTA_1";
		
		case 385:
			return "MISHSTA_9";
		
		case 372:
			return "MISHSTA_10";
		
		case 373:
			return "MISHSTA_11";
		
		case 375:
			return "MISHSTA_1";
		
		case 374:
			return "MISHSTA_12";
		
		case 486:
			return "MISHSTA_13";
		
		case 487:
			return "MISHSTA_11";
		
		case 488:
			return "MISHSTA_1";
		
		case 489:
			return "MISHSTA_14";
		
		case 490:
			return "MISHSTA_15";
		
		case 499:
			return "MISHSTA_11";
		
		case 500:
			return "MISHSTA_1";
		
		case 501:
			return "MISHSTA_16";
		
		case 502:
			return "MISHSTA_17";
		
		case 515:
			return "MISHSTA_11";
		
		default:
	}
	switch (iParam0)
	{
		case 516:
			return "MISHSTA_18";
		
		case 517:
			return "MISHSTA_12";
		
		case 518:
			return "MISHSTA_19";
		
		case 137:
			return "MISHSTA_12";
		
		case 136:
			return "MISHSTA_20";
		
		case 148:
			return "MISHSTA_11";
		
		case 149:
			return "MISHSTA_12";
		
		case 150:
			return "MISHSTA_21";
		
		case 229:
			return "MISHSTA_6";
		
		case 230:
			return "MISHSTA_22";
		
		case 273:
			return "MISHSTA_10";
		
		case 274:
			return "MISHSTA_11";
		
		case 275:
			return "MISHSTA_1";
		
		case 276:
			return "MISHSTA_23";
		
		case 277:
			return "MISHSTA_12";
		
		case 283:
			return "MISHSTA_1";
		
		case 284:
			return "MISHSTA_10";
		
		case 285:
			return "MISHSTA_11";
		
		case 346:
			return "MISHSTA_1";
		
		case 239:
			return "MISHSTA_1";
		
		case 240:
			return "MISHSTA_24";
		
		case 241:
			return "MISHSTA_25";
		
		case 242:
			return "MISHSTA_26";
		
		case 294:
			return "MISHSTA_27";
		
		case 295:
			return "MISHSTA_28";
		
		case 296:
			return "MISHSTA_29";
		
		case 297:
			return "MISHSTA_30";
		
		case 298:
			return "MISHSTA_31";
		
		case 308:
			return "MISHSTA_32";
		
		case 102:
			return "MISHSTA_0";
		
		case 115:
			return "MISHSTA_33";
		
		default:
	}
	switch (iParam0)
	{
		case 114:
			return "MISHSTA_1";
		
		case 111:
			return "MISHSTA_34";
		
		case 112:
			return "MISHSTA_35";
		
		case 113:
			return "MISHSTA_36";
		
		case 396:
			return "MISHSTA_1";
		
		case 393:
			return "MISHSTA_37";
		
		case 394:
			return "MISHSTA_38";
		
		case 395:
			return "MISHSTA_39";
		
		case 120:
			return "MISHSTA_0";
		
		case 121:
			return "MISHSTA_6";
		
		case 122:
			return "MISHSTA_40";
		
		case 123:
			return "MISHSTA_41";
		
		case 124:
			return "MISHSTA_42";
		
		case 161:
			return "MISHSTA_43";
		
		case 172:
			return "MISHSTA_43";
		
		case 173:
			return "MISHSTA_1";
		
		case 174:
			return "MISHSTA_11";
		
		case 175:
			return "MISHSTA_44";
		
		case 185:
			return "MISHSTA_1";
		
		case 186:
			return "MISHSTA_6";
		
		case 187:
			return "MISHSTA_45";
		
		case 326:
			return "MISHSTA_46";
		
		case 129:
			return "MISHSTA_1";
		
		case 130:
			return "MISHSTA_0";
		
		case 466:
			return "MISHSTA_1";
		
		case 400:
			return "MISHSTA_1";
		
		case 401:
			return "MISHSTA_47";
		
		case 413:
			return "MISHSTA_48";
		
		case 414:
			return "MISHSTA_10";
		
		case 415:
			return "MISHSTA_11";
		
		case 416:
			return "MISHSTA_49";
		
		default:
	}
	switch (iParam0)
	{
		case 417:
			return "MISHSTA_50";
		
		case 249:
			return "MISHSTA_1";
		
		case 474:
			return "MISHSTA_1";
		
		case 257:
			return "MISHSTA_1";
		
		case 527:
			return "MISHSTA_51";
		
		case 528:
			return "MISHSTA_52";
		
		case 529:
			return "MISHSTA_53";
		
		case 534:
			return "MISHSTA_54";
		
		case 709:
			return "MISHSTA_55";
		
		case 576:
			return "MISHSTA_1";
		
		case 577:
			return "MISHSTA_56";
		
		case 578:
			return "MISHSTA_57";
		
		case 579:
			return "MISHSTA_58";
		
		case 742:
			return "MISHSTA_59";
		
		case 741:
			return "MISHSTA_60";
		
		case 743:
			return "MISHSTA_61";
		
		case 745:
			return "MISHSTA_62";
		
		case 748:
			return "MISHSTA_62";
		
		case 747:
			return "MISHSTA_63";
		
		case 749:
			return "MISHSTA_64";
		
		case 750:
			return "MISHSTA_65";
		
		case 751:
			return "MISHSTA_66";
		
		case 754:
			return "MISHSTA_67";
		
		case 753:
			return "MISHSTA_68";
		
		case 757:
			return "MISHSTA_69";
		
		case 756:
			return "MISHSTA_70";
		
		case 755:
			return "MISHSTA_71";
		
		case 759:
			return "MISHSTA_72";
		
		case 758:
			return "MISHSTA_73";
		
		case 761:
			return "MISHSTA_74";
		
		case 760:
			return "MISHSTA_75";
		
		default:
	}
	switch (iParam0)
	{
		case 762:
			return "MISHSTA_76";
		
		case 763:
			return "MISHSTA_77";
		
		case 766:
			return "MISHSTA_78";
		
		case 769:
			return "MISHSTA_79";
		
		case 768:
			return "MISHSTA_80";
		
		case 767:
			return "MISHSTA_81";
		
		case 771:
			return "MISHSTA_82";
		
		case 770:
			return "MISHSTA_83";
		
		case 773:
			return "MISHSTA_84";
		
		case 772:
			return "MISHSTA_85";
		
		case 775:
			return "MISHSTA_86";
		
		case 774:
			return "MISHSTA_87";
		
		case 777:
			return "MISHSTA_88";
		
		case 776:
			return "MISHSTA_89";
		
		case 779:
			return "MISHSTA_90";
		
		case 778:
			return "MISHSTA_91";
		
		case 782:
			return "MISHSTA_92";
		
		case 780:
			return "MISHSTA_93";
		
		case 781:
			return "MISHSTA_94";
		
		case 784:
			return "MISHSTA_95";
		
		case 783:
			return "MISHSTA_96";
		
		case 786:
			return "MISHSTA_97";
		
		case 785:
			return "MISHSTA_98";
		
		case 788:
			return "MISHSTA_99";
		
		case 787:
			return "MISHSTA_100";
		
		case 789:
			return "MISHSTA_101";
		
		case 792:
			return "MISHSTA_102";
		
		case 791:
			return "MISHSTA_103";
		
		case 790:
			return "MISHSTA_104";
		
		case 793:
			return "MISHSTA_105";
		
		case 794:
			return "MISHSTA_106";
		
		default:
	}
	switch (iParam0)
	{
		case 795:
			return "MISHSTA_0";
		
		case 796:
			return "MISHSTA_107";
		
		case 797:
			return "MISHSTA_108";
		
		case 798:
			return "MISHSTA_109";
		
		case 799:
			return "MISHSTA_110";
		
		case 800:
			return "MISHSTA_111";
		
		case 801:
			return "MISHSTA_112";
		
		case 802:
			return "MISHSTA_113";
		
		case 803:
			return "MISHSTA_114";
		
		case 804:
			return "MISHSTA_115";
		
		case 805:
			return "MISHSTA_116";
		
		case 806:
			return "MISHSTA_117";
		
		case 807:
			return "MISHSTA_118";
		
		case 808:
			return "MISHSTA_119";
		
		case 809:
			return "MISHSTA_120";
		
		case 429:
			return "MISHSTA_1";
		
		case 441:
			return "MISHSTA_1";
		
		case 4:
			return "MISHSTA_121";
		
		case 13:
			return "MISHSTA_11";
		
		case 341:
			return "MISHSTA_122";
		
		case 5:
			return "MISHSTA_123";
		
		case 6:
			return "MISHSTA_124";
		
		case 20:
			return "MISHSTA_10";
		
		case 169:
			return "MISHSTA_125";
		
		case 731:
			return "MISHSTA_126";
		
		case 737:
			return "MISHSTA_10";
		
		case 145:
			return "MISHSTA_127";
		
		case 159:
			return "MISHSTA_10";
		
		case 353:
			return "MISHSTA_10";
		
		case 357:
			return "MISHSTA_11";
		
		case 605:
			return "MISHSTA_11";
		
		default:
	}
	switch (iParam0)
	{
		case 606:
			return "MISHSTA_10";
		
		case 613:
			return "MISHSTA_128";
		
		case 616:
			return "MISHSTA_129";
		
		case 628:
			return "MISHSTA_130";
		
		case 309:
			return "MISHSTA_11";
		
		case 310:
			return "MISHSTA_10";
		
		case 313:
			return "MISHSTA_131";
		
		case 477:
			return "MISHSTA_37";
		
		case 482:
			return "MISHSTA_132";
		
		case 484:
			return "MISHSTA_133";
		
		case 715:
			return "MISHSTA_123";
		
		case 570:
			return "MISHSTA_10";
		
		case 566:
			return "MISHSTA_11";
		
		case 565:
			return "MISHSTA_134";
		
		case 572:
			return "MISHSTA_135";
		
		case 574:
			return "MISHSTA_136";
		
		case 431:
			return "MISHSTA_11";
		
		case 443:
			return "MISHSTA_137";
		
		case 446:
			return "MISHSTA_138";
		
		case 452:
			return "MISHSTA_139";
		
		case 364:
			return "MISHSTA_11";
		
		case 365:
			return "MISHSTA_10";
		
		case 369:
			return "MISHSTA_140";
		
		case 668:
			return "MISHSTA_11";
		
		case 670:
			return "MISHSTA_141";
		
		case 678:
			return "MISHSTA_11";
		
		case 265:
			return "MISHSTA_11";
		
		case 266:
			return "MISHSTA_10";
		
		case 270:
			return "MISHSTA_142";
		
		case 271:
			return "MISHSTA_143";
		
		case 272:
			return "MISHSTA_144";
		
		default:
	}
	switch (iParam0)
	{
		case 765:
			return "MISHSTA_145";
		
		case 764:
			return "MISHSTA_146";
		
		case 330:
			return "MISHSTA_11";
		
		case 331:
			return "MISHSTA_10";
		
		case 643:
			return "MISHSTA_147";
		
		case 644:
			return "MISHSTA_148";
		
		case 645:
			return "MISHSTA_149";
		
		case 646:
			return "MISHSTA_150";
		
		case 404:
			return "MISHSTA_10";
		
		case 721:
			return "MISHSTA_151";
		
		case 752:
			return "MISHSTA_152";
		
		case 147:
			return "MISHSTA_1";
		
		case 336:
			return "MISHSTA_1";
		
		case 371:
			return "MISHSTA_1";
		
		case 557:
			return "MISHSTA_1";
		
		case 575:
			return "MISHSTA_1";
		
		case 629:
			return "MISHSTA_1";
		
		case 647:
			return "MISHSTA_1";
		
		case 685:
			return "MISHSTA_1";
		
		case 693:
			return "MISHSTA_1";
		
		case 738:
			return "MISHSTA_1";
		
		case 650:
			return "MISHSTA_0";
		
		case 649:
			return "MISHSTA_153";
		
		case 825:
			return "MISHSTA_154";
		
		case 824:
			return "MISHSTA_155";
		
		case 821:
			return "MISHSTA_156";
		
		case 820:
			return "MISHSTA_157";
		
		case 319:
			return "MISHSTA_158";
		
		case 318:
			return "MISHSTA_159";
		
		case 317:
			return "MISHSTA_1";
		
		case 322:
			return "MISHSTA_1";
		
		default:
	}
	switch (iParam0)
	{
		case 323:
			return "MISHSTA_0";
		
		case 324:
			return "MISHSTA_160";
		
		case 816:
			return "MISHSTA_161";
		
		case 815:
			return "MISHSTA_162";
		
		case 814:
			return "MISHSTA_163";
		
		case 746:
			return "MISHSTA_164";
		
		case 514:
			return "MISHSTA_165";
		
		case 744:
			return "MISHSTA_166";
		
		case 841:
			return "MISHSTA_167";
		
		case 840:
			return "MISHSTA_1";
		
		case 838:
			return "MISHSTA_167";
		
		case 828:
			return "MISHSTA_1";
		
		case 829:
			return "MISHSTA_167";
		
		case 831:
			return "MISHSTA_1";
		
		case 832:
			return "MISHSTA_167";
		
		case 834:
			return "MISHSTA_1";
		
		case 835:
			return "MISHSTA_167";
		
		case 837:
			return "MISHSTA_1";
		
		case 739:
			return "MISHSTA_168";
		
		case 619:
			return "MISHSTA_169";
		
		case 560:
			return "MISHSTA_170";
		
		case 559:
			return "MISHSTA_171";
		
		case 558:
			return "MISHSTA_172";
		
		case 673:
			return "MISHSTA_10";
		
		case 688:
			return "MISHSTA_10";
		
		case 687:
			return "MISHSTA_173";
		
		case 844:
			return "MISHSTA_174";
		
		case 845:
			return "MISHSTA_175";
		
		case 843:
			return "MISHSTA_176";
		
		case 236:
			return "MISHSTA_177";
		
		case 29:
			return "MISHSTA_178";
		
		default:
	}
	switch (iParam0)
	{
		case 109:
			return "MISHSTA_179";
		
		case 108:
			return "MISHSTA_180";
		
		case 135:
			return "MISHSTA_181";
		
		case 227:
			return "MISHSTA_182";
		
		case 852:
			return "MISHSTA_183";
		
		case 846:
			return "MISHSTA_184";
		
		case 440:
			return "MISHSTA_185";
		
		case 864:
			return "MISHSTA_186";
		
		case 863:
			return "MISHSTA_187";
		
		case 861:
			return "MISHSTA_1";
		
		case 862:
			return "MISHSTA_188";
		
		case 870:
			return "MISHSTA_1";
		
		case 544:
			return "MISHSTA_0";
		
		case 543:
			return "MISHSTA_189";
		
		case 593:
			return "MISHSTA_190";
		
		case 592:
			return "MISHSTA_1";
		
		case 603:
			return "MISHSTA_1";
		
		case 899:
			return "MISHSTA_1";
		
		case 900:
			return "MISHSTA_191";
		
		case 883:
			return "MISHSTA_192";
		
		case 891:
			return "MISHSTA_192";
		
		case 657:
			return "MISHSTA_193";
		
		case 875:
			return "MISHSTA_192";
		
		case 906:
			return "MISHSTA_194";
		
		case 706:
			return "MISHSTA_195";
		
		case 699:
			return "MISHSTA_196";
		
		case 726:
			return "MISHSTA_197";
		
		case 237:
			return "MISHSTA_198";
		
		case 658:
			return "MISHSTA_1";
		
		case 877:
			return "MISHSTA_0";
		
		case 885:
			return "MISHSTA_0";
		
		default:
	}
	switch (iParam0)
	{
		case 893:
			return "MISHSTA_0";
		
		case 694:
			return "MISHSTA_110";
		
		case 881:
			return "MISHSTA_199";
		
		case 889:
			return "MISHSTA_199";
		
		case 897:
			return "MISHSTA_199";
		
		case 633:
			return "MISHSTA_200";
		
		case 632:
			return "MISHSTA_201";
		
		case 38:
			return "MISHSTA_202";
		
		case 41:
			return "MISHSTA_203";
		
		case 39:
			return "MISHSTA_204";
		
		case 40:
			return "MISHSTA_205";
		
		case 42:
			return "MISHSTA_206";
		
		case 56:
			return "MISHSTA_205";
		
		case 52:
			return "MISHSTA_202";
		
		case 53:
			return "MISHSTA_207";
		
		case 54:
			return "MISHSTA_203";
		
		case 55:
			return "MISHSTA_206";
		
		case 70:
			return "MISHSTA_206";
		
		case 69:
			return "MISHSTA_203";
		
		case 67:
			return "MISHSTA_132";
		
		case 68:
			return "MISHSTA_205";
		
		case 66:
			return "MISHSTA_202";
		
		case 81:
			return "MISHSTA_202";
		
		case 82:
			return "MISHSTA_208";
		
		case 84:
			return "MISHSTA_203";
		
		case 83:
			return "MISHSTA_205";
		
		case 85:
			return "MISHSTA_206";
		
		case 97:
			return "MISHSTA_202";
		
		case 98:
			return "MISHSTA_209";
		
		case 100:
			return "MISHSTA_203";
		
		case 99:
			return "MISHSTA_205";
		
		default:
	}
	switch (iParam0)
	{
		case 101:
			return "MISHSTA_206";
		
		default:
	}
	return "MISSING_MISSION_STAT_STRING";
}

void func_87(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_61696[iParam1 /*13*/].f_4;
	if (iVar0 == 0)
	{
		return;
	}
	Global_61696[iParam1 /*13*/].f_1 = iParam0;
	iVar1 = iParam0 + 1;
	STAT_SET_INT(iVar0, iVar1, 1);
	if (func_98(0) && Global_61463)
	{
		ADD_REPLAY_STAT_VALUE(iVar0);
		ADD_REPLAY_STAT_VALUE(iParam0);
		ADD_REPLAY_STAT_VALUE(iParam1);
	}
}

int func_88(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (STAT_GET_INT(iParam0, &iVar0, -1))
	{
		return (iVar0 - 1);
	}
	return -1;
}

bool func_89(int iParam0)
{
	return IS_BIT_SET(Global_111560.f_1.f_118, iParam0);
}

int func_90(int iParam0)
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111560.f_9080.f_99.f_205[iParam0];
}

int func_91(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 7;
			break;
		
		case 1:
			iVar0 = 8;
			break;
		
		case 2:
			iVar0 = 9;
			break;
		
		case 3:
			iVar0 = 10;
			break;
		
		case 4:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

char* func_92(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "JCSLMVANR";
		
		case 2:
			return "JCHMDRAZ";
		
		case 3:
			return "HSTAGNCUT";
		
		case 4:
			return "UNSELLWEAP";
		
		case 0:
			return "HSTECUT";
		
		case 5:
			return "HSTSLWLD";
		
		case 6:
			return "HSTCASECUT";
		
		default:
	}
	return "UNSET_HEISTPENALTY";
}

void func_93(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_489[iVar0] = iParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_94(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
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
	
	if (Global_94919.f_3)
	{
		return;
	}
	switch (iParam0)
	{
		case 4:
			Global_111560.f_1.f_126[iParam0 /*23*/].f_1 = 201600000;
			Global_111560.f_1.f_126[iParam0 /*23*/] = 201600000;
			break;
		
		case 3:
			Global_111560.f_1.f_126[iParam0 /*23*/].f_1 = 331985;
			Global_111560.f_1.f_126[iParam0 /*23*/] = 331985;
			break;
		
		case 1:
			Global_111560.f_1.f_126[iParam0 /*23*/] = 20000000;
			Global_111560.f_1.f_126[iParam0 /*23*/].f_1 = 20000000;
			break;
	}
	iVar0 = func_90(func_72(iParam0));
	iVar1 = Global_111560.f_1.f_126[iParam0 /*23*/].f_1;
	switch (iParam0)
	{
		case 0:
			func_97(iParam0, 2, 2500000);
			break;
		
		case 1:
			func_97(iParam0, 4, 20000000);
			break;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		Global_111560.f_1.f_126[iParam0 /*23*/].f_17[iVar2] = 0;
		iVar2++;
	}
	iVar2 = 0;
	iVar3 = 0;
	iVar2 = 0;
	while (iVar2 < Global_94929[iParam0 /*38*/].f_37)
	{
		if (Global_94929[iParam0 /*38*/].f_31[iVar2] > 0)
		{
			iVar3 = (iVar3 + Global_94929[iParam0 /*38*/].f_31[iVar2]);
			Global_111560.f_1.f_126[iParam0 /*23*/].f_1 = (Global_111560.f_1.f_126[iParam0 /*23*/].f_1 - Global_94929[iParam0 /*38*/].f_31[iVar2]);
		}
		iVar2++;
	}
	iVar1 = (iVar1 - iVar3);
	if (iParam0 == 2)
	{
		iVar4 = floor((to_float(Global_111560.f_1.f_126[iParam0 /*23*/].f_1) * 0.78f));
		func_97(iParam0, 3, iVar4);
		Global_111560.f_1.f_126[iParam0 /*23*/].f_1 = (Global_111560.f_1.f_126[iParam0 /*23*/].f_1 - iVar4);
		iVar1 = (iVar1 - iVar4);
	}
	iVar2 = 0;
	while (iVar2 < 5)
	{
		iVar5 = Global_111560.f_1.f_12[iVar0 /*6*/][iVar2];
		switch (Global_111560.f_1.f_126[iParam0 /*23*/].f_11[iVar2])
		{
			case 1:
			case 2:
			case 0:
				Global_111560.f_1.f_126[iParam0 /*23*/].f_17[iVar2] = ceil(((to_float(Global_94574[iVar5 /*5*/].f_1) * 0.01f) * IntToFloat(Global_111560.f_1.f_126[iParam0 /*23*/].f_1)));
				break;
			
			case 3:
				Global_111560.f_1.f_126[iParam0 /*23*/].f_17[iVar2] = ceil(((to_float(Global_94574[iVar5 /*5*/].f_1) * 0.015f) * IntToFloat(Global_111560.f_1.f_126[iParam0 /*23*/].f_1)));
				break;
		}
		iVar2++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < Global_94728[iVar0 /*19*/])
	{
		iVar1 = (iVar1 - Global_111560.f_1.f_126[iParam0 /*23*/].f_17[iVar2]);
		iVar2++;
	}
	Global_111560.f_1.f_126[0 /*23*/].f_2[0] = 0;
	Global_111560.f_1.f_126[0 /*23*/].f_2[1] = 0;
	Global_111560.f_1.f_126[0 /*23*/].f_2[2] = 0;
	Global_94919.f_7 = 0;
	switch (iParam0)
	{
		case 0:
			Global_111560.f_1.f_126[0 /*23*/].f_6[0] = 0f;
			Global_111560.f_1.f_126[0 /*23*/].f_6[1] = 0f;
			Global_111560.f_1.f_126[0 /*23*/].f_6[2] = -1f;
			Global_111560.f_1.f_126[0 /*23*/].f_2[1] = ceil((0.12f * IntToFloat(Global_111560.f_1.f_126[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_111560.f_1.f_126[0 /*23*/].f_2[1]);
			Global_94919.f_7 = ceil((0.14f * IntToFloat(Global_111560.f_1.f_126[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_94919.f_7);
			Global_94919.f_6 = 14f;
			Global_111560.f_1.f_126[0 /*23*/].f_2[0] = iVar1;
			break;
		
		case 1:
			Global_111560.f_1.f_126[1 /*23*/].f_6[0] = 0f;
			Global_111560.f_1.f_126[1 /*23*/].f_6[1] = 0f;
			Global_111560.f_1.f_126[1 /*23*/].f_6[2] = 0f;
			Global_111560.f_1.f_126[1 /*23*/].f_2[0] = 0;
			Global_111560.f_1.f_126[1 /*23*/].f_2[1] = 0;
			Global_111560.f_1.f_126[1 /*23*/].f_2[2] = 0;
			Global_94919.f_6 = -1f;
			break;
		
		case 2:
			Global_111560.f_1.f_126[2 /*23*/].f_6[0] = 0f;
			Global_111560.f_1.f_126[2 /*23*/].f_6[1] = 0f;
			Global_111560.f_1.f_126[2 /*23*/].f_6[2] = 0f;
			Global_94919.f_7 = ceil((0.12f * IntToFloat(Global_111560.f_1.f_126[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_94919.f_7);
			Global_94919.f_6 = 12f;
			Global_111560.f_1.f_126[2 /*23*/].f_2[0] = (iVar1 / 3);
			Global_111560.f_1.f_126[2 /*23*/].f_2[1] = (iVar1 / 3);
			Global_111560.f_1.f_126[2 /*23*/].f_2[2] = (iVar1 / 3);
			Global_94919.f_6 = 0f;
			break;
		
		case 3:
			Global_111560.f_1.f_126[3 /*23*/].f_6[0] = -1f;
			Global_111560.f_1.f_126[3 /*23*/].f_6[1] = 0f;
			Global_111560.f_1.f_126[3 /*23*/].f_6[2] = 0f;
			Global_94919.f_7 = ceil((0.12f * IntToFloat(Global_111560.f_1.f_126[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_94919.f_7);
			Global_94919.f_6 = 12f;
			Global_111560.f_1.f_126[3 /*23*/].f_2[1] = iVar1;
			break;
		
		case 4:
			Global_111560.f_1.f_126[4 /*23*/].f_6[0] = 0f;
			Global_111560.f_1.f_126[4 /*23*/].f_6[1] = 0f;
			Global_111560.f_1.f_126[4 /*23*/].f_6[2] = 0f;
			Global_94919.f_7 = ceil((0.12f * IntToFloat(Global_111560.f_1.f_126[iParam0 /*23*/].f_1)));
			iVar1 = (iVar1 - Global_94919.f_7);
			Global_94919.f_6 = 12f;
			Global_111560.f_1.f_126[4 /*23*/].f_2[0] = (iVar1 / 3);
			Global_111560.f_1.f_126[4 /*23*/].f_2[1] = (iVar1 / 3);
			Global_111560.f_1.f_126[4 /*23*/].f_2[2] = (iVar1 / 3);
			Global_94919.f_6 = 0f;
			break;
	}
	iVar6 = Global_111560.f_1.f_126[iParam0 /*23*/].f_1;
	if (Global_111560.f_1.f_126[iParam0 /*23*/].f_6[0] != -1f)
	{
		Global_111560.f_1.f_126[iParam0 /*23*/].f_6[0] = ((to_float(Global_111560.f_1.f_126[iParam0 /*23*/].f_2[0]) / to_float(iVar6)) * 100f);
	}
	if (Global_111560.f_1.f_126[iParam0 /*23*/].f_6[1] != -1f)
	{
		Global_111560.f_1.f_126[iParam0 /*23*/].f_6[1] = ((to_float(Global_111560.f_1.f_126[iParam0 /*23*/].f_2[1]) / to_float(iVar6)) * 100f);
	}
	if (Global_111560.f_1.f_126[iParam0 /*23*/].f_6[2] != -1f)
	{
		Global_111560.f_1.f_126[iParam0 /*23*/].f_6[2] = ((to_float(Global_111560.f_1.f_126[iParam0 /*23*/].f_2[2]) / to_float(iVar6)) * 100f);
	}
	if (Global_94919.f_6 != -1f)
	{
		Global_94919.f_6 = ((to_float(Global_94919.f_7) / to_float(iVar6)) * 100f);
	}
	switch (iParam0)
	{
		case 0:
			STAT_SET_INT(joaat("jewel_heist_raw_take"), Global_111560.f_1.f_126[iParam0 /*23*/], 1);
			break;
	}
	iVar7 = 0;
	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 < 3)
	{
		iVar7 = (iVar7 + Global_111560.f_1.f_126[iParam0 /*23*/].f_2[iVar8]);
		iVar8++;
	}
	switch (iParam0)
	{
		case 0:
			func_96(810, Global_111560.f_1.f_126[iParam0 /*23*/].f_1, 1);
			func_96(811, iVar7, 1);
			break;
		
		case 1:
			switch (func_90(8))
			{
				case 3:
					func_96(610, Global_111560.f_1.f_126[iParam0 /*23*/].f_1, 1);
					func_96(611, iVar7, 1);
					break;
				
				case 4:
					func_96(622, Global_111560.f_1.f_126[iParam0 /*23*/].f_1, 1);
					func_96(623, iVar7, 1);
					break;
			}
			break;
		
		case 2:
			func_96(734, Global_111560.f_1.f_126[iParam0 /*23*/].f_1, 1);
			func_96(735, iVar7, 1);
			break;
		
		case 3:
			switch (func_90(10))
			{
				case 6:
					break;
				
				case 7:
					break;
			}
			break;
		
		case 4:
			switch (func_90(11))
			{
				case 8:
					func_96(664, Global_111560.f_1.f_126[iParam0 /*23*/].f_1, 1);
					func_96(671, iVar7, 1);
					break;
				
				case 9:
					func_96(674, Global_111560.f_1.f_126[iParam0 /*23*/].f_1, 1);
					func_96(682, iVar7, 1);
					break;
			}
			break;
	}
	Global_94919.f_3 = 1;
	Global_61471 = 0;
}

void func_96(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_73566)
	{
		if (Global_73567[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_73567[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_73567[iVar0 /*9*/].f_1 = (Global_73567[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_73567[iVar0 /*9*/] != -1)
	{
		if (Global_61696[Global_73567[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_73567[iVar0 /*9*/].f_1 > 1)
			{
				Global_73567[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_73567[iVar0 /*9*/].f_1 < 0)
			{
				Global_73567[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_97(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == 0)
	{
		return;
	}
	iVar0 = iParam2;
	if (iVar0 < 0)
	{
		iVar0 = (iVar0 * -1);
	}
	bVar1 = false;
	if (Global_94929[iParam0 /*38*/].f_37 == 5)
	{
		bVar1 = true;
	}
	iVar2 = Global_94929[iParam0 /*38*/].f_37;
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (Global_94929[iParam0 /*38*/].f_25[iVar3] == iParam1)
		{
			Global_94929[iParam0 /*38*/].f_25[iVar3] = iParam1;
			Global_94929[iParam0 /*38*/].f_31[iVar3] = iVar0;
			return;
		}
		iVar3++;
	}
	if (bVar1)
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					STAT_SET_INT(joaat("hcs_penalty_jewel_drop_money"), iParam2, 1);
					break;
				
				case 2:
					STAT_SET_INT(joaat("hcs_penalty_paleto_drop_money"), iParam2, 1);
					break;
				
				case 4:
					STAT_SET_INT(joaat("hcs_penalty_bigs_drop_money"), iParam2, 1);
					break;
			}
			break;
		
		case 1:
			STAT_SET_INT(joaat("hcs_penalty_jewel_drop_money"), iParam2, 1);
			break;
		
		case 2:
			STAT_SET_INT(joaat("hcs_penalty_jewel_madr_house"), iParam2, 1);
			break;
		
		case 4:
			STAT_SET_INT(joaat("hcs_penalty_docks_unsell_wpn"), iParam2, 1);
			break;
		
		case 3:
			STAT_SET_INT(joaat("hcs_penalty_paleto_agent_cut"), iParam2, 1);
			break;
		
		case 5:
			STAT_SET_INT(joaat("hcs_penalty_bigs_slow_loading"), iParam2, 1);
			break;
		
		case 6:
			STAT_SET_INT(joaat("hcs_penalty_bigs_hostage_gift"), iParam2, 1);
			break;
	}
	Global_94929[iParam0 /*38*/].f_25[Global_94929[iParam0 /*38*/].f_37] = iParam1;
	Global_94929[iParam0 /*38*/].f_31[Global_94929[iParam0 /*38*/].f_37] = iVar0;
	Global_94929[iParam0 /*38*/].f_37++;
}

bool func_98(bool bParam0)
{
	if (!bParam0 && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return IS_BIT_SET(Global_76825, 0);
}

void func_99()
{
	int iVar0;
	int iVar1;
	
	if (Global_73566 > 16)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_73566)
	{
		if (Global_73567[iVar0 /*9*/].f_1 == 0)
		{
			if (Global_73567[iVar0 /*9*/].f_2 != 0f)
			{
				Global_73567[iVar0 /*9*/].f_1 = floor(Global_73567[iVar0 /*9*/].f_2);
			}
		}
		iVar1 = Global_73567[iVar0 /*9*/];
		if (iVar1 > 0)
		{
			if (Global_61696[iVar1 /*13*/] == 9)
			{
				Global_73567[iVar0 /*9*/].f_1 = round(fLocal_68);
			}
			if (Global_61696[iVar1 /*13*/] == 15)
			{
				Global_73567[iVar0 /*9*/].f_1 = iLocal_69;
			}
		}
		iVar0++;
	}
}

void func_100()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (Global_61490)
	{
		return;
	}
	Global_61490 = 1;
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = (func_7(joaat("sp0_shots")) - Global_61494);
	iVar1 = (func_7(joaat("sp0_hits")) - Global_61493);
	iVar0 = (iVar0 + (func_7(joaat("sp1_shots")) - Global_61496));
	iVar1 = (iVar1 + (func_7(joaat("sp1_hits")) - Global_61495));
	iVar0 = (iVar0 + (func_7(joaat("sp2_shots")) - Global_61498));
	iVar1 = (iVar1 + (func_7(joaat("sp2_hits")) - Global_61497));
	wait(0);
	fVar2 = 100f;
	if (!iVar0 == 0)
	{
		fVar3 = to_float(iVar0);
		fVar4 = to_float(iVar1);
		fVar2 = to_float(floor(((fVar4 / fVar3) * 100f)));
		if (fVar2 > 100f)
		{
			fVar2 = 100f;
		}
	}
	fLocal_68 = fVar2;
	iLocal_69 = iVar0;
}

void func_101(var uParam0)
{
	func_67(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

int func_102()
{
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_96177.f_44 == 1;
	}
	return 0;
}

void func_103()
{
	int iVar0;
	
	if (Global_30982 == 0 && !Global_30986)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_73566)
	{
		Global_73567[iVar0 /*9*/].f_3 = 4;
		iVar0++;
	}
}

void func_104()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	func_105();
	if (((Global_61477 && IS_PLAYER_PLAYING(IS_PLAYER_PLAYING())) && !IS_PLAYER_PLAYING()) && !IS_PLAYER_PLAYING())
	{
		Global_61477 = 0;
	}
	if (Global_61470)
	{
		Global_61470 = 0;
		iLocal_60 = 0;
	}
	bVar0 = true;
	bVar1 = true;
	if (IS_PAUSE_MENU_ACTIVE())
	{
		bVar0 = false;
	}
	if (!HAS_CUTSCENE_FINISHED())
	{
		bVar0 = false;
		bVar1 = false;
	}
	if (Global_61477)
	{
		bVar0 = false;
		bVar1 = false;
	}
	if (!IS_PLAYER_CONTROL_ON(IS_PLAYER_CONTROL_ON()))
	{
		bVar0 = false;
		bVar1 = false;
	}
	if (bVar0)
	{
		iLocal_60 = round((GET_FRAME_TIME() * 1000f));
	}
	iVar2 = 0;
	fVar3 = 0f;
	iVar2 = 0;
	while (iVar2 < Global_73566)
	{
		if (Global_73567[iVar2 /*9*/] >= 0)
		{
			iVar4 = Global_61696[Global_73567[iVar2 /*9*/] /*13*/];
			switch (iVar4)
			{
				case 6:
					if (Global_73567[iVar2 /*9*/].f_6 != 0)
					{
						if (Global_73567[iVar2 /*9*/].f_7 == 1)
						{
							Global_73567[iVar2 /*9*/].f_8 = 0;
							Global_73567[iVar2 /*9*/].f_1 = 0;
							Global_73567[iVar2 /*9*/].f_7 = 0;
						}
						else if (DOES_ENTITY_EXIST(Global_73567[iVar2 /*9*/].f_6))
						{
							if (!IS_ENTITY_DEAD(Global_73567[iVar2 /*9*/].f_6, 0))
							{
								iLocal_64 = Global_73567[iVar2 /*9*/].f_8;
								iLocal_63 = GET_ENTITY_HEALTH(Global_73567[iVar2 /*9*/].f_6);
								iLocal_65 = (iLocal_64 - iLocal_63);
								if (iLocal_65 > 0)
								{
									Global_73567[iVar2 /*9*/].f_1 = (Global_73567[iVar2 /*9*/].f_1 + iLocal_65);
									if (Global_73567[iVar2 /*9*/].f_1 < 0)
									{
										Global_73567[iVar2 /*9*/].f_1 = (Global_73567[iVar2 /*9*/].f_1 * -1);
									}
								}
								Global_73567[iVar2 /*9*/].f_8 = iLocal_63;
							}
						}
						else
						{
							Global_73567[iVar2 /*9*/].f_6 = 0;
						}
					}
					break;
				
				case 1:
					Global_73567[iVar2 /*9*/].f_1 = (Global_73567[iVar2 /*9*/].f_1 + iLocal_60);
					break;
				
				case 2:
					if (Global_61478)
					{
						Global_73567[iVar2 /*9*/].f_1 = (Global_73567[iVar2 /*9*/].f_1 + iLocal_60);
					}
					break;
				
				case 3:
					break;
				
				case 4:
					if (Global_61479)
					{
						if (Global_61481 == -1 || Global_73567[iVar2 /*9*/] == Global_61481)
						{
							if (((Global_73567[iVar2 /*9*/] == 339 || Global_73567[iVar2 /*9*/] == 179) || Global_73567[iVar2 /*9*/] == 342) || Global_73567[iVar2 /*9*/] == 234)
							{
								Global_73567[iVar2 /*9*/].f_1 = (Global_73567[iVar2 /*9*/].f_1 + round((GET_FRAME_TIME() * 1000f)));
							}
							else
							{
								Global_73567[iVar2 /*9*/].f_1 = (Global_73567[iVar2 /*9*/].f_1 + iLocal_60);
							}
						}
					}
					break;
				
				case 5:
					if (bVar1)
					{
						if (Global_61483 == -1 || Global_61483 == Global_73567[iVar2 /*9*/])
						{
							if (!Global_61482 == 0)
							{
								if (DOES_ENTITY_EXIST(Global_61482))
								{
									if (!IS_ENTITY_DEAD(Global_61482, 0))
									{
										if (IS_ENTITY_A_VEHICLE(Global_61482))
										{
											fVar3 = GET_ENTITY_SPEED(Global_61482);
											if (fVar3 > Global_73567[iVar2 /*9*/].f_2)
											{
												Global_73567[iVar2 /*9*/].f_2 = fVar3;
											}
										}
									}
								}
							}
						}
					}
					break;
				
				case 7:
					break;
				
				case 8:
					break;
				
				case 9:
					break;
				
				case 13:
					break;
				
				case 12:
					break;
				
				case 10:
				case 11:
				case 14:
					break;
				
				case 16:
					break;
				
				case 17:
					if (func_51(func_61()))
					{
						if (IS_SPECIAL_ABILITY_ACTIVE(IS_SPECIAL_ABILITY_ACTIVE()) && IS_SPECIAL_ABILITY_ACTIVE(IS_SPECIAL_ABILITY_ACTIVE()))
						{
							Global_73567[iVar2 /*9*/].f_1 = (Global_73567[iVar2 /*9*/].f_1 + iLocal_60);
						}
					}
					break;
				
				case 15:
					break;
				
				default:
					break;
				}
		}
		iVar2++;
	}
}

void func_105()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if ((((Global_73762 == 0 && Global_73752 == 0) && Global_61630 == 0) && Global_61500 == 0) && !Global_73718)
	{
		return;
	}
	iVar10 = 0;
	if (Global_61500 > 0)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 64)
		{
			if (Global_61501[iVar0 /*2*/] != 0)
			{
				if (!DOES_ENTITY_EXIST(Global_61501[iVar0 /*2*/]))
				{
					Global_61501[iVar0 /*2*/] = 0;
					Global_61500 = (Global_61500 - 1);
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < GET_NUMBER_OF_EVENTS(0))
	{
		iVar3 = GET_EVENT_AT_INDEX(0, iVar0);
		switch (iVar3)
		{
			case 142:
				GET_EVENT_DATA(0, iVar0, &iVar4, 1);
				if (DOES_ENTITY_EXIST(iVar4))
				{
					IS_ENTITY_DEAD(iVar4, 0);
					if (Global_61630 > 0)
					{
						iVar7 = GET_ENTITY_MODEL(iVar4);
						iVar1 = 0;
						iVar1 = 0;
						while (iVar1 < Global_61630)
						{
							if (Global_61631[iVar1 /*2*/] == iVar7)
							{
								iVar10 = (iVar10 + Global_61631[iVar1 /*2*/].f_1);
							}
							iVar1++;
						}
					}
					if (IS_ENTITY_A_PED(iVar4) && IS_ENTITY_A_PED(iVar4) != IS_ENTITY_A_PED())
					{
						iVar5 = GET_PED_SOURCE_OF_DEATH(GET_PED_SOURCE_OF_DEATH(iVar4));
						iVar14 = 0;
						if (DOES_ENTITY_EXIST(iVar5))
						{
							if (IS_ENTITY_A_VEHICLE(iVar5))
							{
								if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
								{
									iVar15 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
								}
								else
								{
									iVar15 = GET_PLAYERS_LAST_VEHICLE();
								}
								if (DOES_ENTITY_EXIST(iVar15) && DOES_ENTITY_EXIST(iVar5) == iVar15)
								{
									iVar14 = 1;
								}
							}
						}
						if ((IS_ENTITY_A_PED(iVar5) && IS_ENTITY_A_PED(IS_ENTITY_A_PED()) == IS_ENTITY_A_PED(iVar5)) || iVar14)
						{
							if (IS_ENTITY_A_PED(iVar5))
							{
								iVar6 = GET_PED_CAUSE_OF_DEATH(GET_PED_CAUSE_OF_DEATH(iVar4));
								if (Global_61500 > 0)
								{
									iVar11 = func_109(iVar4);
									if (iVar11 != -1)
									{
										GET_PED_LAST_DAMAGE_BONE(GET_PED_LAST_DAMAGE_BONE(Global_61501[iVar11 /*2*/]), &iLocal_67);
										if (iLocal_67 == 31086 || iLocal_67 == 39317)
										{
											if (iVar6 != 0 && iVar6 != joaat("weapon_unarmed"))
											{
												func_108();
												Global_61501[iVar11 /*2*/] = 0;
												Global_61500 = (Global_61500 - 1);
											}
										}
									}
								}
								if (Global_73762 > 0)
								{
									iVar1 = 0;
									iVar1 = 0;
									while (iVar1 < Global_73762)
									{
										if (Global_73753[iVar1 /*2*/] == iVar6)
										{
											func_96(Global_73753[iVar1 /*2*/].f_1, 1, 0);
										}
										iVar1++;
									}
								}
							}
							if (Global_73718)
							{
								iVar12 = GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4);
								iVar13 = GET_PED_TYPE(iVar12);
								if (!IS_ENTITY_A_MISSION_ENTITY(iVar4) && ((((((!iVar13 == 22 && !iVar13 == 19) && !iVar13 == 17) && !iVar13 == 18) && !iVar13 == 27) && !iVar13 == 29) && !iVar13 == 28))
								{
									iVar9 = GET_RELATIONSHIP_BETWEEN_PEDS(GET_RELATIONSHIP_BETWEEN_PEDS(GET_RELATIONSHIP_BETWEEN_PEDS()), GET_RELATIONSHIP_BETWEEN_PEDS(iVar4));
									switch (iVar9)
									{
										case 255:
										case 0:
										case 1:
										case 2:
											if (IS_PED_HUMAN(IS_PED_HUMAN(iVar4)))
											{
												func_107();
											}
											break;
										
										default:
											break;
										}
									}
							}
							if (Global_73752 > 0)
							{
								iVar1 = 0;
								iVar2 = Global_73752;
								bVar8 = false;
								while (!bVar8)
								{
									if (Global_73719[iVar1 /*2*/] != 0)
									{
										if (DOES_ENTITY_EXIST(Global_73719[iVar1 /*2*/]))
										{
											if (IS_ENTITY_DEAD(Global_73719[iVar1 /*2*/], 0))
											{
												if (Global_73719[iVar1 /*2*/] == iVar4)
												{
													func_96(Global_73719[iVar1 /*2*/].f_1, 1, 0);
													Global_73719[iVar1 /*2*/] = 0;
												}
											}
										}
										else
										{
											Global_73719[iVar1 /*2*/] = 0;
										}
										iVar2 = (iVar2 - 1);
									}
									iVar1++;
									if (iVar1 == 16 || iVar2 == 0)
									{
										bVar8 = true;
									}
								}
								if (Global_73752 > 0)
								{
									while (Global_73719[(Global_73752 - 1) /*2*/] == 0 && Global_73752 > 1)
									{
										if (Global_73752 > 1)
										{
											Global_73752 = (Global_73752 - 1);
										}
									}
								}
							}
						}
					}
				}
				break;
		}
		iVar0++;
	}
	if (iVar10 > 0)
	{
		func_106(iVar10);
	}
}

void func_106(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_73566)
	{
		iVar1 = Global_73567[iVar0 /*9*/];
		if (Global_61696[iVar1 /*13*/] == 13)
		{
			Global_73567[iVar0 /*9*/].f_1 = (Global_73567[iVar0 /*9*/].f_1 + iParam0);
		}
		iVar0++;
	}
}

void func_107()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_73566)
	{
		iVar1 = Global_73567[iVar0 /*9*/];
		if (Global_61696[iVar1 /*13*/] == 16)
		{
			Global_73567[iVar0 /*9*/].f_1++;
		}
		iVar0++;
	}
}

void func_108()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (Global_61500 == 0)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < Global_73566)
	{
		iVar2 = Global_73567[iVar1 /*9*/];
		if (Global_61696[iVar2 /*13*/] == 7)
		{
			Global_73567[iVar1 /*9*/].f_1++;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

int func_109(int iParam0)
{
	int iVar0;
	
	if (Global_61500 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_61501[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_110()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (_0xD642319C54AADEB6())
	{
		if (_0x5B1F2E327B6B6FE1() == 33)
		{
			if (_0x2B626A0150E4D449() == 33)
			{
				iVar0 = _0xDC9274A7EF6B2867();
				iVar1 = -1;
				iVar2 = (iVar0 - 4);
				if (((iVar0 - 4) % 3) == 0)
				{
					iVar0 = ((iVar0 - 4) / 3);
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < iVar0)
					{
						iVar4 = _0x8098C8D6597AAE18(iVar3 * 3 + 1);
						iVar5 = _0x8098C8D6597AAE18(iVar3 * 3 + 2);
						switch (iVar5)
						{
							case 84:
							case 100:
							case 69:
							case 41:
							case 54:
								iVar1 = iVar4;
								break;
						}
						func_87(iVar4, iVar5);
						iVar3++;
					}
					iVar6 = _0x8098C8D6597AAE18(iVar2);
					iVar7 = _0x8098C8D6597AAE18(iVar2 + 1);
					bVar8 = false;
					if (_0x8098C8D6597AAE18(iVar2 + 2) > 0)
					{
						bVar8 = true;
					}
					iVar9 = 0;
					if (_0x8098C8D6597AAE18(iVar2 + 3) > 0)
					{
						iVar9 = 1;
					}
					Global_73716 = iVar9;
					Global_73717 = iVar6;
					if (iVar1 == -1)
					{
						func_75(to_float(iVar7), bVar8);
					}
					else
					{
						func_75(to_float(iVar1), bVar8);
					}
				}
				func_111();
			}
		}
		if (_0x5B1F2E327B6B6FE1() == 13)
		{
			if (_0x2B626A0150E4D449() == 37)
			{
				iVar10 = _0xDC9274A7EF6B2867();
				if (iVar10 == 3)
				{
					iVar11 = _0x8098C8D6597AAE18(0);
					iVar12 = _0x8098C8D6597AAE18(1);
					iVar13 = _0x8098C8D6597AAE18(2);
					Global_111560.f_2347[iVar11 /*2*/] = iVar12;
					Global_111560.f_2347[iVar11 /*2*/].f_1 = iVar13;
					func_111();
				}
			}
		}
	}
}

int func_111()
{
	if (func_98(0))
	{
		return 0;
	}
	if (Global_98708.f_8)
	{
		if (Global_98708.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98708.f_10 > 1)
	{
		return 0;
	}
	Global_98708.f_10++;
	return 1;
}

void func_112()
{
	Global_76837 = 0;
	Global_76838 = 0;
	Global_61471 = 0;
	settimera(0);
	settimerb(0);
	THEFEED_RESUME();
	iLocal_60 = 0;
	Global_61467 = 0;
	Global_61481 = -1;
	iLocal_70 = 0;
	Global_61465 = 0;
	Global_61464 = 0;
	iLocal_72 = 0;
	Global_61482 = 0;
	Global_61480 = 0;
	Global_61461 = 0;
	Global_73762 = 0;
	Global_73752 = 0;
	func_4();
	func_3();
	if (bLocal_73)
	{
		func_1(&Local_45);
		bLocal_73 = false;
	}
	if (Global_3)
	{
		TERMINATE_THIS_THREAD();
	}
	Global_61476 = 0;
	Global_61472 = 0;
}

__________________________
Native Named by Reliency
1577161260
__________________________
