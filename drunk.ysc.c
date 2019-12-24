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
	struct<5> Local_43 = { 0, 0, 0, 0, 0 } ;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	bool bLocal_46 = 0;
	bool bLocal_47 = 0;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	char* sLocal_50 = NULL;
	struct<5> Local_51 = { 0, 0, 0, 0, 0 } ;
	vector3 vLocal_52 = { 0f, 0f, 0f };
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	struct<5> Local_55 = { 0, 0, 0, 0, 0 } ;
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
	iLocal_44 = -1;
	iLocal_45 = -1;
	fLocal_48 = 1.7f;
	fLocal_49 = 0f;
	sLocal_50 = "";
	iLocal_53 = -1;
	if (HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_173();
	}
	Local_43 = { ScriptParam_55 };
	func_172();
	func_171();
	func_166(iLocal_44, 0, 0);
	settimera(0);
	func_165();
	func_161();
	while (true)
	{
		wait(0);
		func_160(iLocal_44);
		func_159();
		func_157();
		func_150();
		func_166(iLocal_44, 0, 0);
		func_172();
		func_9();
		if ((NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK_IS_GAME_IN_PROGRESS()) && !func_8())
		{
			func_1();
		}
	}
}

void func_1()
{
	if (func_7() || func_6())
	{
		func_5();
		func_2();
	}
}

void func_2()
{
	if ((!func_4() && !func_3()) && Global_2449754)
	{
		Global_4456448.f_154360 = 0;
	}
}

bool func_3()
{
	return Global_2448961.f_591;
}

bool func_4()
{
	return Global_1590446[PLAYER_ID() /*871*/].f_196 != 0;
}

void func_5()
{
	Global_2448961.f_656 = 1;
}

var func_6()
{
	return Global_2448961.f_635;
}

bool func_7()
{
	return IS_BIT_SET(Global_2448961.f_2, 11);
}

bool func_8()
{
	return IS_BIT_SET(Global_2449755.f_1.f_2810, 3);
}

void func_9()
{
	bool bVar0;
	
	if (IS_ENTITY_DEAD(Local_43.f_1, 0))
	{
		func_173();
	}
	if (bLocal_46)
	{
		if (!IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
		{
			func_173();
		}
	}
	func_149();
	bVar0 = true;
	switch (vLocal_52.x)
	{
		case 4:
			func_148();
			return;
		
		case 5:
			func_145();
			return;
		
		case 6:
			func_143();
			return;
		
		case 7:
			func_142();
			return;
		
		case 8:
			func_141();
			return;
		
		case 9:
			func_139();
			return;
		
		case 10:
			func_138();
			func_135();
			func_134();
			return;
		
		case 11:
			func_133();
			return;
		
		case 12:
			break;
		
		default:
			bVar0 = false;
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (!vLocal_52.x == 12)
	{
		return;
	}
	switch (vLocal_52.y)
	{
		case 1:
			if (!func_132())
			{
				func_121();
				func_135();
			}
			break;
		
		case 2:
			func_119();
			break;
		
		case 12:
			func_106();
			break;
		
		case 3:
			func_10();
			break;
		
		default:
			break;
	}
}

void func_10()
{
	var uVar0;
	char* sVar1;
	struct<53> Var2;
	int iVar3;
	
	if (!IS_BIT_SET(Global_1676879.f_3, 27))
	{
		SET_PED_TO_RAGDOLL(Local_43.f_1, 3000, 3500, 0, 1, 1, 0);
	}
	Global_1671734 = 1;
	if (!IS_SCREEN_FADED_OUT())
	{
		DO_SCREEN_FADE_OUT(2500);
		while (IS_SCREEN_FADING_OUT())
		{
			wait(0);
		}
	}
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_105(&uVar0, 0, 0);
		if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()) && !DOES_ENTITY_EXIST(DOES_ENTITY_EXIST(), 0))
		{
			FADE_OUT_LOCAL_PLAYER(FADE_OUT_LOCAL_PLAYER(), 0, 1);
		}
		while ((DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()) && !DOES_ENTITY_EXIST(DOES_ENTITY_EXIST(), 0)) && DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()))
		{
			wait(0);
		}
		CLEAR_BIT(&(Global_1676879.f_3), 27);
		func_91(PLAYER_ID(), 0, 57344, 0);
		Global_2405071.f_2670 = 1;
		if (IS_BIT_SET(Global_1676879, 15))
		{
			CLEAR_BIT(&Global_1676879, 15);
		}
		if (IS_BIT_SET(Global_1676879.f_2, 6))
		{
			CLEAR_BIT(&(Global_1676879.f_2), 6);
		}
		if (IS_PLAYER_WANTED_LEVEL_GREATER(IS_PLAYER_WANTED_LEVEL_GREATER(), 0))
		{
			Global_2405071.f_2671 = 1;
		}
		else
		{
			Global_2405071.f_2671 = 0;
		}
		if (IS_SCRIPT_GLOBAL_SHAKING())
		{
			STOP_SCRIPT_GLOBAL_SHAKING(0);
		}
		if (func_87(1))
		{
			func_75(0);
		}
		func_73(1);
		func_173();
	}
	sVar1 = "";
	Var2.f_3 = 1064514355;
	Var2.f_30 = 1148829696;
	Var2.f_31 = 1148829696;
	Var2.f_52 = 1148829696;
	iVar3 = 7;
	switch (func_67())
	{
		case 0:
			if (func_65() != 2)
			{
				iVar3 = 0;
			}
			else
			{
				iVar3 = 1;
			}
			break;
		
		case 1:
			if (!func_64(126))
			{
				iVar3 = 2;
			}
			else
			{
				iVar3 = 3;
			}
			break;
		
		case 2:
			if (!func_63(4))
			{
				if (func_64(58))
				{
					iVar3 = 4;
				}
				if (func_64(59))
				{
					iVar3 = 5;
				}
				if (iVar3 == 7)
				{
					if (!func_62())
					{
						iVar3 = 4;
					}
					else
					{
						iVar3 = 5;
					}
				}
			}
			else
			{
				iVar3 = 6;
			}
			break;
	}
	switch (iVar3)
	{
		case 0:
			sVar1 = "DWC_MICHAEL_mansion";
			Var2 = "SAVEM_Default@";
			Var2.f_1 = "M_GetOut_R";
			Var2.f_2 = "M_GetOut_R_CAM";
			Var2.f_5 = { -814.181f, 181.1f, 75.74f };
			Var2.f_8 = { 0f, 0f, 21.1994f };
			Var2.f_4 = -1871534317;
			break;
		
		case 1:
			sVar1 = "DWC_MICHAEL_trailer";
			Var2 = "SAVECountryside@";
			Var2.f_1 = "M_GetOut_countryside";
			Var2.f_2 = "M_GetOut_countryside_CAM";
			Var2.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = -1871534317;
			break;
		
		case 2:
			sVar1 = "DWC_FRANKLIN_city";
			Var2 = "SWITCH@FRANKLIN@BED";
			Var2.f_1 = "Sleep_GetUp_RubEyes";
			Var2.f_2 = "Sleep_GetUp_RubEyes_CAM";
			Var2.f_5 = { -17.2168f, -1441.224f, 30.1015f };
			Var2.f_8 = { 0f, 0f, -179.653f };
			Var2.f_4 = -1871534317;
			break;
		
		case 3:
			sVar1 = "DWC_FRANKLIN_hills";
			Var2 = "SAVEBighouse@";
			Var2.f_1 = "F_GetOut_r_bighouse";
			Var2.f_2 = "F_GetOut_r_bighouse_CAM";
			Var2.f_5 = { -1.049f, 524.283f, 170.064f };
			Var2.f_8 = { 0f, 0f, 24f };
			Var2.f_4 = -1871534317;
			break;
		
		case 4:
			sVar1 = "DWC_TREVOR_trailer";
			Var2 = "SAVECountryside@";
			Var2.f_1 = "T_GetOut_countryside";
			Var2.f_2 = "T_GetOut_countryside_CAM";
			Var2.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = -1871534317;
			break;
		
		case 5:
			sVar1 = "DWC_TREVOR_beach";
			Var2 = "SAVEVeniceB@";
			Var2.f_1 = "T_GetOut_r_veniceB";
			Var2.f_2 = "T_GetOut_r_veniceB_CAM";
			Var2.f_5 = { -1148.438f, -1512.246f, 9.689f };
			Var2.f_8 = { 0f, 0f, 36.25f };
			Var2.f_4 = -1871534317;
			break;
		
		case 6:
			sVar1 = "DWC_TREVOR_stripclub";
			Var2 = "SAVECouch@";
			Var2.f_1 = "T_GetOut_couch";
			Var2.f_2 = "T_GetOut_couch_CAM";
			Var2.f_5 = { 94.53f, -1289.86f, 28.27f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = -1871534317;
			break;
	}
	if (!IS_ENTITY_DEAD(Local_43.f_1, 0))
	{
		SET_ENTITY_COORDS(Local_43.f_1, Var2.f_5, 1, false, 0, 1);
	}
	wait(500);
	StringCopy(&(Var2.f_11), "", 16);
	Var2.f_15 = -1f;
	func_12(sVar1, &Var2, "");
	func_11(126, 1);
	func_173();
}

void func_11(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57213[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_57213[iParam0 /*7*/])
	{
		STAT_GET_INT(Global_57213[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STAT_SET_INT(Global_57213[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_12(char* sParam0, var uParam1, char* sParam2)
{
	float fVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	char* sVar12;
	char* sVar13;
	char* sVar14;
	int iVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	float fVar21;
	vector3 vVar22;
	vector3 vVar23;
	float fVar24;
	float fVar25;
	float fVar26;
	vector3 vVar27;
	float fVar28;
	float fVar29;
	float fVar30;
	vector3 vVar31;
	vector3 vVar32;
	float fVar33;
	int iVar34;
	float fVar35;
	float fVar36;
	vector3 vVar37;
	float fVar38;
	float fVar39;
	float fVar40;
	vector3 vVar41;
	vector3 vVar42;
	float fVar43;
	int iVar44;
	bool bVar45;
	bool bVar46;
	int iVar47;
	
	fVar0 = 0f;
	SET_PLAYER_CONTROL(SET_PLAYER_CONTROL(), false, 0);
	if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
	{
		SET_ENTITY_INVINCIBLE(SET_ENTITY_INVINCIBLE(), true);
	}
	REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_5, 4500f);
	REMOVE_DECALS_IN_RANGE(uParam1->f_5, 4500f);
	CLEAR_AREA(uParam1->f_5, 5f, 1, 0, 0, false);
	SET_ENTITY_COORDS(SET_ENTITY_COORDS(), uParam1->f_5, 1, false, 0, 1);
	FREEZE_ENTITY_POSITION(FREEZE_ENTITY_POSITION(), true);
	wait(0);
	SET_GAME_PAUSED(true);
	REQUEST_ANIM_DICT(*uParam1);
	if (IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
	{
	}
	else
	{
		REQUEST_ANIM_DICT(uParam1->f_16);
	}
	if (!IS_SCREEN_FADED_OUT())
	{
		DO_SCREEN_FADE_OUT(0);
	}
	func_57(uParam1->f_5, uParam1->f_8.f_2, 0, 1);
	if (!IS_SCREEN_FADED_OUT())
	{
		DO_SCREEN_FADE_OUT(0);
	}
	iVar1 = GET_GAME_TIMER() + 20000;
	bVar2 = false;
	uParam1->f_33 = 0;
	while (!bVar2 && iVar1 > GET_GAME_TIMER())
	{
		bVar2 = true;
		REQUEST_ANIM_DICT(*uParam1);
		if (!HAS_ANIM_DICT_LOADED(*uParam1))
		{
			bVar2 = false;
		}
		if (!IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
		{
			REQUEST_ANIM_DICT(uParam1->f_16);
			if (!HAS_ANIM_DICT_LOADED(uParam1->f_16))
			{
				bVar2 = false;
			}
		}
		if (!IS_SCREEN_FADED_OUT())
		{
			DO_SCREEN_FADE_OUT(0);
		}
		wait(0);
	}
	func_54();
	if (!func_53(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		SET_ROADS_IN_AREA(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, false, 1);
		CLEAR_AREA_OF_VEHICLES(uParam1->f_5 + uParam1->f_19, (vmag(uParam1->f_22) + 25f), 0, 0, 0, 0, false, 0);
		CLEAR_AREA(uParam1->f_5 + uParam1->f_19, (vmag(uParam1->f_22) + 25f), 1, 0, 0, false);
	}
	if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
	{
		CLEAR_PLAYER_WANTED_LEVEL(CLEAR_PLAYER_WANTED_LEVEL());
		SET_CURRENT_PED_WEAPON(SET_CURRENT_PED_WEAPON(), joaat("weapon_unarmed"), true);
		CLEAR_PED_TASKS_IMMEDIATELY(CLEAR_PED_TASKS_IMMEDIATELY());
	}
	FREEZE_ENTITY_POSITION(FREEZE_ENTITY_POSITION(), false);
	SET_GAME_PAUSED(false);
	CLEAR_AREA(uParam1->f_5, 15f, 1, 0, 0, false);
	_0x4759CC730F947C81();
	_0x48ADC8A773564670();
	func_51();
	while (func_50())
	{
		wait(0);
	}
	if (!IS_SCREEN_FADED_IN() && !IS_SCREEN_FADED_IN())
	{
		DO_SCREEN_FADE_IN(250);
	}
	SET_FADE_IN_AFTER_DEATH_ARREST(1);
	if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
	{
		iVar4 = CREATE_SYNCHRONIZED_SCENE(uParam1->f_5, uParam1->f_8, 2);
		SET_SYNCHRONIZED_SCENE_LOOPED(iVar4, false);
		_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(iVar4, false);
		iVar5 = CREATE_CAM("DEFAULT_ANIMATED_CAMERA", true);
		iVar6 = 4;
		if (uParam1->f_4 != -1871534317)
		{
			iVar6 |= 2;
		}
		func_48(PLAYER_PED_ID(), uParam1->f_18);
		TASK_SYNCHRONIZED_SCENE(TASK_SYNCHRONIZED_SCENE(), iVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0, 1148846080, 0);
		_0x129466ED55140F8D(_0x129466ED55140F8D(), 1);
		SET_PLAYER_CLOTH_PIN_FRAMES(SET_PLAYER_CLOTH_PIN_FRAMES(), 1);
		bVar3 = GET_PED_RESET_FLAG(GET_PED_RESET_FLAG(), 77);
		SET_PED_RESET_FLAG(SET_PED_RESET_FLAG(), 77, true);
		PLAY_SYNCHRONIZED_CAM_ANIM(iVar5, iVar4, uParam1->f_2, *uParam1);
		RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
		if (!IS_STRING_NULL_OR_EMPTY(uParam1->f_16) && !IS_STRING_NULL_OR_EMPTY(uParam1->f_17))
		{
			TASK_PLAY_ANIM(TASK_PLAY_ANIM(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0, 0, 0, 0);
		}
	}
	else
	{
		iVar4 = -1;
	}
	if (!uParam1->f_25)
	{
		if (!IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_47(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}
	bVar7 = false;
	bVar8 = false;
	uVar9 = 16;
	if (!IS_STRING_NULL_OR_EMPTY(&(uParam1->f_11)))
	{
		iVar10 = func_67();
		iVar11 = -1;
		sVar12 = "";
		switch (iVar10)
		{
			case 0:
				iVar11 = 0;
				sVar12 = "MICHAEL";
				break;
			
			case 1:
				iVar11 = 1;
				sVar12 = "FRANKLIN";
				break;
			
			case 2:
				iVar11 = 2;
				sVar12 = "TREVOR";
				break;
			
			default:
				break;
		}
		func_46(&uVar9, iVar11, PLAYER_PED_ID(), sVar12, 0, 1);
	}
	if (IS_SYNCHRONIZED_SCENE_RUNNING(iVar4))
	{
		sVar13 = "WalkInterruptible";
		sVar14 = "ForceBlendout";
		while (IS_SYNCHRONIZED_SCENE_RUNNING(iVar4) && !IS_SYNCHRONIZED_SCENE_RUNNING(IS_SYNCHRONIZED_SCENE_RUNNING(), 0))
		{
			if (!bVar8)
			{
				if (!IS_SCREEN_FADED_OUT())
				{
					if (!IS_STRING_NULL_OR_EMPTY(uParam1->f_26))
					{
						ANIMPOSTFX_PLAY(uParam1->f_26, 0, 0);
						bVar8 = true;
					}
					if (!IS_STRING_NULL_OR_EMPTY(uParam1->f_27))
					{
						if (!IS_STRING_NULL_OR_EMPTY(uParam1->f_28))
						{
							PLAY_SOUND_FRONTEND(-1, uParam1->f_28, uParam1->f_27, false);
							bVar8 = true;
						}
						if (!IS_STRING_NULL_OR_EMPTY(uParam1->f_29))
						{
							PLAY_SOUND_FRONTEND(-1, uParam1->f_29, uParam1->f_27, false);
							bVar8 = true;
						}
					}
				}
			}
			HIDE_HUD_AND_RADAR_THIS_FRAME();
			HIDE_HUD_COMPONENT_THIS_FRAME(18);
			CLEAR_REMINDER_MESSAGE();
			func_40(0);
			iVar15 = GET_GAME_TIMER();
			if (iVar15 >= (Global_41947 - 500))
			{
				func_39(4000);
			}
			fVar16 = -1f;
			fVar17 = -1f;
			fVar0 = GET_SYNCHRONIZED_SCENE_PHASE(iVar4);
			if (!IS_STRING_NULL_OR_EMPTY(&(uParam1->f_11)))
			{
				if (!bVar7)
				{
					if (fVar0 >= uParam1->f_15)
					{
						if (func_22(&uVar9, "PRSAUD", &(uParam1->f_11), 3, 0, 0, 0))
						{
							bVar7 = true;
						}
					}
				}
			}
			iVar18 = 0;
			if (HAS_ANIM_EVENT_FIRED(HAS_ANIM_EVENT_FIRED(), HAS_ANIM_EVENT_FIRED(sVar13)))
			{
				iVar19 = (GET_CONTROL_VALUE(2, 195) - 128);
				iVar20 = (GET_CONTROL_VALUE(2, 196) - 128);
				if (((iVar19 < 64 && iVar19 > -64) && iVar20 < 64) && iVar20 > -64)
				{
				}
				else
				{
					iVar18 = 1;
				}
			}
			else
			{
				fVar16 = -1f;
				fVar17 = -1f;
				iVar18 = 0;
				uParam1->f_3 = uParam1->f_3;
				fVar16 = fVar16;
				fVar17 = fVar17;
			}
			if (GET_FOLLOW_PED_CAM_VIEW_MODE() == 4 && uParam1->f_52 > 0f)
			{
				if (fVar0 >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						fVar21 = 1.5f;
						vVar22 = { _GET_GAMEPLAY_CAM_COORDS() };
						vVar23 = { GET_PED_BONE_COORDS(GET_PED_BONE_COORDS(), 31086, 0f, 0f, 0f) };
						fVar24 = GET_DISTANCE_BETWEEN_COORDS(vVar22, vVar23, true);
						fVar21 = func_21(fVar21, 0.001f, (fVar24 - 0.75f));
						if (fVar21 < 0f)
						{
							fVar21 = 0.001f;
						}
						func_20(&(uParam1->f_34), PLAYER_PED_ID(), func_67(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_19(&(uParam1->f_34), uParam1->f_53);
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = GET_GAME_TIMER();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
						if (uParam1->f_57 == 999f)
						{
							uParam1->f_56 = 0f;
						}
						if (uParam1->f_57 == 999f)
						{
							vVar27 = { _GET_GAMEPLAY_CAM_ROT(2) };
							fVar28 = GET_ENTITY_HEADING(GET_ENTITY_HEADING());
							fVar29 = vVar27.z;
							fVar30 = fVar28;
							uParam1->f_57 = (fVar29 - fVar30);
							if (uParam1->f_57 < 360f)
							{
								uParam1->f_57 = (uParam1->f_57 + 360f);
							}
							if (uParam1->f_57 > 360f)
							{
								uParam1->f_57 = (uParam1->f_57 - 360f);
							}
						}
						fVar25 = uParam1->f_56;
						fVar26 = uParam1->f_57;
						SET_GAMEPLAY_CAM_RELATIVE_PITCH(fVar25, 1065353216);
						SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar26);
						_SET_GAMEPLAY_CAM_RAW_PITCH(fVar25);
						_SET_GAMEPLAY_CAM_RAW_YAW(fVar26);
						vVar31 = { _GET_GAMEPLAY_CAM_COORDS() };
						vVar32 = { GET_GAMEPLAY_CAM_COORD() };
						fVar33 = GET_DISTANCE_BETWEEN_COORDS(vVar31, vVar32, true);
						iVar34 = round((fVar33 * 1000f));
						uParam1->f_32 = 1;
					}
					if (uParam1->f_32)
					{
						_0x59424BD75174C9B1();
						if (func_16(&(uParam1->f_34), 1, 1, 1, 0, 0, 0))
						{
						}
					}
				}
			}
			if (HAS_ANIM_EVENT_FIRED(HAS_ANIM_EVENT_FIRED(), HAS_ANIM_EVENT_FIRED(sVar14)) || iVar18)
			{
				if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
				{
					CLEAR_PED_TASKS(CLEAR_PED_TASKS());
					switch (uParam1->f_4)
					{
						case -1871534317:
							FORCE_PED_MOTION_STATE(FORCE_PED_MOTION_STATE(), -1871534317, true, 0, 0);
							_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0);
							break;
						
						case -668482597:
							FORCE_PED_MOTION_STATE(FORCE_PED_MOTION_STATE(), -668482597, true, 0, 0);
							SIMULATE_PLAYER_INPUT_GAIT(SIMULATE_PLAYER_INPUT_GAIT(), 1f, 500, 0, 1, 0);
							if (GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
							{
								if (uParam1->f_31 == 999f)
								{
									uParam1->f_30 = 0f;
								}
								if (uParam1->f_31 == 999f)
								{
									vVar37 = { _GET_GAMEPLAY_CAM_ROT(2) };
									fVar38 = GET_ENTITY_HEADING(GET_ENTITY_HEADING());
									fVar39 = vVar37.z;
									fVar40 = fVar38;
									uParam1->f_31 = (fVar39 - fVar40);
									if (uParam1->f_31 < 360f)
									{
										uParam1->f_31 = (uParam1->f_31 + 360f);
									}
									if (uParam1->f_31 > 360f)
									{
										uParam1->f_31 = (uParam1->f_31 - 360f);
									}
								}
								fVar35 = uParam1->f_30;
								fVar36 = uParam1->f_31;
								SET_GAMEPLAY_CAM_RELATIVE_PITCH(fVar35, 1065353216);
								SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar36);
								vVar41 = { _GET_GAMEPLAY_CAM_COORDS() };
								vVar42 = { GET_GAMEPLAY_CAM_COORD() };
								fVar43 = GET_DISTANCE_BETWEEN_COORDS(vVar41, vVar42, true);
								iVar44 = round((fVar43 * 1000f));
								RENDER_SCRIPT_CAMS(false, true, iVar44, 0, 0, 0);
							}
							break;
						
						default:
							break;
					}
					if (IS_SYNCHRONIZED_SCENE_RUNNING(iVar4))
					{
						DETACH_SYNCHRONIZED_SCENE(iVar4);
						iVar4 = -1;
					}
				}
			}
			wait(0);
		}
	}
	if (!func_53(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		SET_ROADS_BACK_TO_ORIGINAL(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, true);
	}
	SET_PLAYER_CONTROL(SET_PLAYER_CONTROL(), true, 0);
	if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
	{
		CLEAR_PED_TASKS(CLEAR_PED_TASKS());
	}
	bVar45 = _0x3044240D2E0FA842();
	bVar46 = false;
	if (uParam1->f_32)
	{
		_0x59424BD75174C9B1();
		if (!func_16(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
		{
			bVar46 = true;
		}
	}
	if (bVar45 || bVar46)
	{
		while ((bVar45 || bVar46) && !IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (bVar45)
			{
			}
			if (bVar46)
			{
			}
			iVar47 = 2;
			func_15(1, 26, &iVar47);
			func_15(1, 79, &iVar47);
			func_15(1, 1, &iVar47);
			func_15(1, 2, &iVar47);
			func_15(0, 22, &iVar47);
			func_15(0, 36, &iVar47);
			func_15(0, 142, &iVar47);
			func_15(0, 141, &iVar47);
			func_15(0, 140, &iVar47);
			func_15(0, 263, &iVar47);
			func_15(0, 264, &iVar47);
			wait(0);
			bVar45 = _0x3044240D2E0FA842();
			bVar46 = false;
			if (uParam1->f_32)
			{
				_0x59424BD75174C9B1();
				if (!func_16(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
				{
					bVar46 = true;
				}
			}
		}
	}
	if (!IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
	{
		REMOVE_ANIM_DICT(uParam1->f_16);
	}
	REMOVE_ANIM_DICT(*uParam1);
	DESTROY_CAM(iVar5, 0);
	func_13(&(uParam1->f_34));
	if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
	{
		SET_PED_RESET_FLAG(SET_PED_RESET_FLAG(), 77, bVar3);
		SET_ENTITY_INVINCIBLE(SET_ENTITY_INVINCIBLE(), false);
	}
	sParam0 = sParam0;
}

void func_13(var uParam0)
{
	func_14(uParam0);
	*uParam0 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
}

void func_14(var uParam0)
{
	if (DOES_CAM_EXIST(uParam0->f_1))
	{
		DESTROY_CAM(uParam0->f_1, 0);
	}
	if (DOES_CAM_EXIST(uParam0->f_2))
	{
		DESTROY_CAM(uParam0->f_2, 0);
	}
	if (DOES_CAM_EXIST(uParam0->f_3))
	{
		DESTROY_CAM(uParam0->f_3, 0);
	}
	if (DOES_CAM_EXIST(uParam0->f_4))
	{
		DESTROY_CAM(uParam0->f_4, 0);
	}
}

void func_15(int iParam0, int iParam1, int iParam2)
{
	DISABLE_CONTROL_ACTION(iParam0, iParam1, 1);
	*iParam2++;
}

int func_16(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	float fVar7;
	
	switch (*uParam0)
	{
		case 0:
			func_17();
			if (!IS_ENTITY_DEAD(uParam0->f_5, 0))
			{
				func_14(uParam0);
				vVar0 = { _GET_GAMEPLAY_CAM_COORDS() };
				if (bParam1)
				{
					vVar0 = { vVar0 + GET_ENTITY_VELOCITY(uParam0->f_5) * FtoV(GET_ENTITY_VELOCITY()) };
				}
				vVar1 = { GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_5, vVar0) };
				vVar2 = { _GET_GAMEPLAY_CAM_ROT(2) };
				vVar3 = { vVar2 + uParam0->f_9 };
				vVar4 = { vVar3 - GET_ENTITY_ROTATION(uParam0->f_5, 2) };
				vVar5 = { (-sin(vVar3.z) * cos(vVar3.x)), (cos(vVar3.z) * cos(vVar3.x)), sin(vVar3.x) };
				vVar6 = { (-sin(vVar4.z) * cos(vVar4.x)), (cos(vVar4.z) * cos(vVar4.x)), sin(vVar4.x) };
				fVar7 = _0x80EC114669DAEFF4();
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = CREATE_CAMERA(1775630800, 0);
				}
				uParam0->f_1 = CREATE_CAMERA(26379945, 1);
				if (bParam1)
				{
					ATTACH_CAM_TO_ENTITY(uParam0->f_1, uParam0->f_5, vVar1, 1);
				}
				else
				{
					SET_CAM_COORD(uParam0->f_1, vVar0);
				}
				SET_CAM_ROT(uParam0->f_1, vVar2, 2);
				SET_CAM_FOV(uParam0->f_1, fVar7);
				uParam0->f_2 = CREATE_CAMERA(26379945, 1);
				if (bParam1 && !bParam4)
				{
					ATTACH_CAM_TO_ENTITY(uParam0->f_2, uParam0->f_5, vVar1 + vVar6 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), 1);
				}
				else
				{
					SET_CAM_COORD(uParam0->f_2, vVar0 + vVar5 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12));
				}
				SET_CAM_ROT(uParam0->f_2, vVar2, 2);
				SET_CAM_FOV(uParam0->f_2, fVar7);
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = CREATE_CAMERA(26379945, 1);
					if (bParam1 && !bParam4)
					{
						ATTACH_CAM_TO_ENTITY(uParam0->f_4, uParam0->f_5, vVar1 + vVar6 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13), 1);
					}
					else
					{
						SET_CAM_COORD(uParam0->f_4, vVar0 + vVar5 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13));
					}
					SET_CAM_ROT(uParam0->f_4, vVar2, 2);
					SET_CAM_FOV(uParam0->f_4, fVar7);
				}
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					_0x0FB82563989CF4FB(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						_0x0FB82563989CF4FB(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
					}
					_0x0FB82563989CF4FB(uParam0->f_3, uParam0->f_2, (uParam0->f_14 - uParam0->f_17), 2);
					_0xD1B0F412F109EA5D(uParam0->f_3, iParam6);
					SET_CAM_ACTIVE(uParam0->f_3, true);
				}
				else
				{
					SET_CAM_ACTIVE_WITH_INTERP(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
				RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				uParam0->f_7 = GET_GAME_TIMER();
				uParam0->f_8 = 0;
				*uParam0 = 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			func_17();
			if (bParam3)
			{
				if (!uParam0->f_8)
				{
					if (GET_GAME_TIMER() >= (uParam0->f_7 + uParam0->f_16))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									ANIMPOSTFX_PLAY("CamPushInFranklin", 0, 0);
									break;
								
								case 0:
									ANIMPOSTFX_PLAY("CamPushInMichael", 0, 0);
									break;
								
								case 2:
									ANIMPOSTFX_PLAY("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
						}
						PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						uParam0->f_8 = 1;
					}
				}
			}
			if (GET_GAME_TIMER() >= (uParam0->f_7 + uParam0->f_15))
			{
				if (bParam2)
				{
					func_14(uParam0);
					RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
				}
				return 1;
			}
			break;
		
		case 2:
			return 1;
			break;
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

void func_19(var uParam0, vector3 vParam1)
{
	uParam0->f_9 = { vParam1 };
}

void func_20(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	uParam0->f_5 = iParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_12 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_17 = iParam7;
	uParam0->f_13 = iParam8;
}

float func_21(float fParam0, float fParam1, float fParam2)
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

bool func_22(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	return func_23(sParam2, iParam3, 0);
}

int func_23(char* sParam0, int iParam1, bool bParam2)
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam1 > Global_20807)
			{
				if (Global_20812 == 0)
				{
					STOP_SCRIPTED_CONVERSATION(false);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
					Global_20816 = 0;
					Global_20815 = 0;
					Global_19485 = 0;
				}
				else
				{
					func_37();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_36(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_35();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_21801 = Global_21802;
		Global_20424.f_370 = Global_21794;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20801 = Global_20802;
		if (Global_20811)
		{
			CLEAR_BIT(&Global_7356, 20);
			CLEAR_BIT(&Global_7357, 17);
			CLEAR_BIT(&Global_7358, 0);
			if (bParam2)
			{
				func_33();
				if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
			{
				if (IS_PED_IN_MELEE_COMBAT(IS_PED_IN_MELEE_COMBAT()))
				{
					return 0;
				}
				if (func_32())
				{
					return 0;
				}
				if (IS_PED_SPRINTING(IS_PED_SPRINTING()))
				{
					return 0;
				}
				if (IS_PED_RAGDOLL(IS_PED_RAGDOLL()))
				{
					return 0;
				}
				if (IS_PED_IN_PARACHUTE_FREE_FALL(IS_PED_IN_PARACHUTE_FREE_FALL()))
				{
					return 0;
				}
				if (GET_IS_PED_GADGET_EQUIPPED(GET_IS_PED_GADGET_EQUIPPED(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_76577)
				{
					if (IS_ENTITY_IN_WATER(IS_ENTITY_IN_WATER()))
					{
						return 0;
					}
					if (IS_PLAYER_CLIMBING(IS_PLAYER_CLIMBING()))
					{
						return 0;
					}
					if (IS_PED_PLANTING_BOMB(IS_PED_PLANTING_BOMB()))
					{
						return 0;
					}
					if (IS_SPECIAL_ABILITY_ACTIVE(IS_SPECIAL_ABILITY_ACTIVE()))
					{
						return 0;
					}
				}
			}
			if (func_31())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (IS_BIT_SET(Global_7356, 9))
				{
					return 0;
				}
			}
			func_30();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_29();
		func_24();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_20807 || iParam1 == Global_20807)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_37();
	}
	return 0;
}

void func_24()
{
	if (!func_25())
	{
		return;
	}
	if (Global_20811)
	{
		MemCopy(&(Global_1703200.f_1), {Global_20424}, 4);
		Global_1703200 = Global_6671;
		Global_1703200.f_6 = Global_20815;
	}
}

int func_25()
{
	if (!Global_262145.f_28013)
	{
		return 0;
	}
	if (!Global_76577)
	{
		return 0;
	}
	if (PLAYER_ID() == func_28())
	{
		return 0;
	}
	if (func_26(PLAYER_ID()))
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

bool func_26(int iParam0)
{
	return func_27(iParam0, 20);
}

bool func_27(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

int func_28()
{
	return -1;
}

void func_29()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	STOP_SCRIPTED_CONVERSATION(false);
	Global_20805 = 1;
}

void func_30()
{
	Global_20858 = Global_20857;
	Global_20852 = Global_20853;
	Global_20899 = { Global_20887 };
	Global_20905 = { Global_20893 };
	Global_20860 = Global_20859;
	Global_20929 = { Global_20911 };
	Global_20935 = { Global_20917 };
	Global_20941 = { Global_20923 };
	Global_20947 = { Global_20953 };
	Global_6671 = Global_6672;
	Global_6673 = Global_6674;
	Global_20816 = Global_20817;
	Global_20818 = Global_20819;
	Global_20820 = { Global_20836 };
	Global_20809 = Global_20810;
	Global_21821 = 0;
	Global_20854 = 0;
	Global_20855 = 0;
	CLEAR_BIT(&Global_7357, 16);
}

int func_31()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_32()
{
	int iVar0;
	int iVar1;
	
	if (Global_76577)
	{
		iVar0 = 0;
		GET_CURRENT_PED_WEAPON(GET_CURRENT_PED_WEAPON(), &iVar1, 1);
		if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
	{
		if (GET_PED_CONFIG_FLAG(GET_PED_CONFIG_FLAG(), 78, 1))
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

void func_33()
{
	if (func_34(14))
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
		Global_19486 = func_67();
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

bool func_34(int iParam0)
{
	return Global_41396 == iParam0;
}

void func_35()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20094[iVar0 /*10*/].f_1), "", 24);
		Global_20094[iVar0 /*10*/].f_7 = 0;
		Global_20094[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

bool func_36(int iParam0, int iParam1)
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

void func_37()
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

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = uParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

void func_39(int iParam0)
{
	Global_41947 = (GET_GAME_TIMER() + iParam0);
}

void func_40(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_44(0))
		{
			func_41(iParam0);
		}
		SET_BIT(&Global_7357, 2);
	}
}

void func_41(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_43())
		{
			func_42(1, 1);
		}
		else
		{
			func_42(0, 0);
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
	if (!func_31())
	{
		Global_19486.f_1 = 3;
	}
}

void func_42(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_44(0))
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

bool func_43()
{
	return IS_BIT_SET(Global_1687880, 5);
}

int func_44(int iParam0)
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

bool func_45()
{
	return IS_BIT_SET(Global_1687880, 19);
}

void func_46(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76577)
	{
		if (!IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

void func_47(char* sParam0, int iParam1)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

void func_48(int iParam0, var uParam1)
{
	if (func_49(uParam1, 1))
	{
		APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (func_49(uParam1, 2))
	{
		APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (func_49(uParam1, 4))
	{
		APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (func_49(uParam1, 8))
	{
		APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (func_49(uParam1, 16))
	{
		APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (func_49(uParam1, 32))
	{
		APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (func_49(uParam1, 64))
	{
		APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (func_49(uParam1, 128))
	{
		APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (func_49(uParam1, 256))
	{
		APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (func_49(uParam1, 512))
	{
		APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_9", 0f, 1f);
	}
	if (func_49(uParam1, 0))
	{
	}
}

bool func_49(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_50()
{
	if (((Global_98669 == 13 || Global_98669 == 10) || Global_98669 == 11) || Global_98669 == 12)
	{
		return 0;
	}
	return 1;
}

void func_51()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_95632[iVar0 /*17*/] && !Global_95632[iVar0 /*17*/].f_1)
		{
			if (Global_95632[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_95632[iVar0 /*17*/].f_5 != 88 && Global_95632[iVar0 /*17*/].f_5 != 89) && Global_95632[iVar0 /*17*/].f_5 != 92)
				{
					func_52(Global_95632[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_52(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_92684[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_92684[iParam0 /*2*/] = 0;
	}
}

bool func_53(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_54()
{
	func_55();
	func_73(1);
}

void func_55()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		iVar1 = Global_42348[iVar0 /*5*/];
		if (!iVar1 == -1)
		{
			func_166(1, iVar1, 1);
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_42322[iVar2 /*5*/] == 0)
		{
			func_56(iVar2);
		}
		iVar2++;
	}
}

void func_56(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_42322[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_42322[iParam0 /*5*/].f_1 == PLAYER_PED_ID())
		{
			Global_42559 = 0;
		}
	}
	Global_42322[iParam0 /*5*/] = 13;
	Global_42322[iParam0 /*5*/].f_1 = 0;
	Global_42322[iParam0 /*5*/].f_2 = 0;
	Global_42322[iParam0 /*5*/].f_3 = 0;
	Global_42322[iParam0 /*5*/].f_4 = 0;
	Global_42320 = (Global_42320 - 1);
	if (Global_42320 < 0)
	{
		Global_42320 = 0;
	}
}

int func_57(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
	{
		func_61(0);
		CLEAR_AREA(vParam0, 5f, 1, 0, 0, false);
		if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()))
		{
			if (!IS_PED_INJURED(IS_PED_INJURED()))
			{
				SET_ENTITY_COORDS(SET_ENTITY_COORDS(), vParam0, 1, false, 0, 1);
				SET_ENTITY_HEADING(SET_ENTITY_HEADING(), fParam1);
				SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
		}
		NEW_LOAD_SCENE_START_SPHERE(vParam0, 4500f, 0);
		wait(0);
		CLEAR_AREA(vParam0, 5000f, 1, 0, 0, false);
		CLEAR_AREA_OF_OBJECTS(vParam0, 5000f, 0);
		REMOVE_PARTICLE_FX_IN_RANGE(vParam0, 5000f);
		REMOVE_DECALS_IN_RANGE(vParam0, 5000f);
		func_60();
		func_59();
		settimera(0);
		func_61(1);
		if (!IS_NEW_LOAD_SCENE_ACTIVE())
		{
			while (!NEW_LOAD_SCENE_START_SPHERE(vParam0, 4500f, 0))
			{
				wait(0);
				if (timera() > 2000)
				{
					SET_GAME_PAUSED(false);
					return 0;
				}
			}
		}
		settimera(0);
		while (!IS_NEW_LOAD_SCENE_LOADED())
		{
			wait(0);
			if (timera() > 20000)
			{
				SET_GAME_PAUSED(false);
				if (IS_NEW_LOAD_SCENE_ACTIVE())
				{
					NEW_LOAD_SCENE_STOP();
				}
				return 0;
			}
		}
		if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()))
		{
			if (!IS_PED_INJURED(IS_PED_INJURED()))
			{
				if (IS_NEW_LOAD_SCENE_ACTIVE())
				{
					NEW_LOAD_SCENE_STOP();
				}
				SET_GAME_PAUSED(false);
				settimera(0);
				_0x4759CC730F947C81();
				if (iParam3 == 1)
				{
					_0x48ADC8A773564670();
				}
				else
				{
					settimera(5000);
				}
				POPULATE_NOW();
			}
		}
		while ((!_0x91D6DD290888CBAB() && !func_58()) && timera() < 1500)
		{
			wait(0);
		}
		if (timera() > 1500)
		{
			if (iParam3 == 1)
			{
			}
		}
		if (iParam2 == 1)
		{
			GET_GROUND_Z_FOR_3D_COORD(vParam0, &(vParam0.f_2), 0, 0);
			CLEAR_AREA(vParam0, 5f, 1, 0, 0, false);
			if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()))
			{
				if (!IS_PED_INJURED(IS_PED_INJURED()))
				{
					SET_ENTITY_COORDS(SET_ENTITY_COORDS(), vParam0, 1, false, 0, 1);
					SET_ENTITY_HEADING(SET_ENTITY_HEADING(), fParam1);
				}
			}
		}
		SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		func_61(0);
		return 1;
	}
	func_61(0);
	return 0;
}

bool func_58()
{
	return !Global_75396.f_553;
}

void func_59()
{
	Global_75396.f_553 = 1;
	Global_75396.f_554 = 0;
}

void func_60()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		Global_75396[iVar0] = 0;
		iVar0++;
	}
}

void func_61(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!IS_BIT_SET(Global_98669.f_20, 2))
			{
				SET_GAME_PAUSED(true);
				SET_BIT(&(Global_98669.f_20), 2);
			}
		}
		else if (IS_BIT_SET(Global_98669.f_20, 2))
		{
			SET_GAME_PAUSED(false);
			CLEAR_BIT(&(Global_98669.f_20), 2);
		}
	}
}

int func_62()
{
	if (IS_BIT_SET(IS_BIT_SET(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

bool func_63(int iParam0)
{
	return IS_BIT_SET(Global_111560.f_7224[iParam0], 0);
}

int func_64(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111560.f_9080.f_99.f_58[iParam0];
}

int func_65()
{
	if (Global_38761[11] == 1)
	{
		return 4;
	}
	if (!func_66(21))
	{
		return 0;
	}
	if (!func_64(130))
	{
		return 1;
	}
	if (!func_64(131))
	{
		return 2;
	}
	if (!func_66(22))
	{
		return 1;
	}
	if (!func_66(49))
	{
		return 3;
	}
	if (!func_66(28))
	{
		return 1;
	}
	return 3;
}

int func_66(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111560.f_9080.f_330[iParam0 /*6*/];
}

int func_67()
{
	func_68();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_68()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()))
	{
		if (func_71(Global_111560.f_2358.f_539.f_4321) != GET_ENTITY_MODEL(GET_ENTITY_MODEL()))
		{
			iVar0 = func_70(PLAYER_PED_ID());
			if (func_69(iVar0) && (!func_34(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_69(Global_111560.f_2358.f_539.f_4321))
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

bool func_69(int iParam0)
{
	return iParam0 < 3;
}

int func_70(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_71(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_71(int iParam0)
{
	if (func_69(iParam0))
	{
		return func_72(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_72(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_73(bool bParam0)
{
	CUSTOM_MENU_COORDINATES(0f);
	_0x0225778816FDC28C(0f);
	SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(0f);
	STOP_GAMEPLAY_CAM_SHAKING(true);
	SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(0f);
	STOP_CINEMATIC_CAM_SHAKING(1);
	_0x12561FCBB62D5B9C(0);
	if (IS_AUDIO_SCENE_ACTIVE("SAFEHOUSE_STONED_MICHAEL"))
	{
		STOP_AUDIO_SCENE("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!IS_STRING_NULL_OR_EMPTY(&Global_42539))
	{
		if (IS_AUDIO_SCENE_ACTIVE(&Global_42539))
		{
			STOP_AUDIO_SCENE(&Global_42539);
		}
	}
	if (DOES_CAM_EXIST(Global_42528))
	{
		if (IS_CAM_SHAKING(Global_42528))
		{
			SET_CAM_SHAKE_AMPLITUDE(Global_42528, 0f);
			STOP_CAM_SHAKING(Global_42528, 1);
		}
	}
	if (IS_SCRIPT_GLOBAL_SHAKING())
	{
		STOP_SCRIPT_GLOBAL_SHAKING(0);
	}
	if (bParam0)
	{
		if (GET_TIMECYCLE_MODIFIER_INDEX() != -1 || GET_TIMECYCLE_MODIFIER_INDEX() != -1)
		{
			CLEAR_TIMECYCLE_MODIFIER();
		}
		else if (IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			CLEAR_TIMECYCLE_MODIFIER();
		}
	}
	Global_42534 = 0f;
	StringCopy(&Global_42535, "", 16);
	StringCopy(&Global_42539, "", 64);
	StringCopy(&Global_42555, "", 16);
	func_74();
}

void func_74()
{
	Global_42527 = 0;
	Global_42528 = 0;
	Global_42529 = 0;
	Global_42530 = 30000;
	Global_42531 = 0f;
	Global_42533 = 0f;
	Global_42532 = 0f;
	Global_42534 = 0f;
	StringCopy(&Global_42535, "", 16);
}

void func_75(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_17680;
			break;
		
		case 1:
			iVar0 = Global_262145.f_17670;
			break;
		
		case 2:
			iVar0 = Global_262145.f_17681;
			break;
		
		case 3:
			iVar0 = Global_262145.f_17673;
			break;
		
		case 4:
			iVar0 = Global_262145.f_17669;
			break;
		
		case 6:
			iVar0 = 3;
			break;
		
		case 7:
			iVar0 = Global_262145.f_17684;
			break;
		
		case 8:
			iVar0 = Global_262145.f_17685;
			break;
		
		case 9:
			iVar0 = Global_262145.f_17688;
			break;
		
		case 22:
			iVar0 = Global_262145.f_17689;
			break;
		
		case 23:
			iVar0 = Global_262145.f_17682;
			break;
		
		case 25:
			iVar0 = Global_262145.f_18571;
			break;
		
		case 26:
			iVar0 = Global_262145.f_18570;
			break;
	}
	if (iVar0 != 0)
	{
		0x501478855A6074CE(func_85(func_86()), func_84(func_86()), func_83(), func_82(), iParam0, iVar0);
	}
	func_81(iVar0);
	func_76(iVar0);
}

void func_76(int iParam0)
{
	int iVar0;
	
	iVar0 = func_80(3968, -1, 0);
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
	func_77(3968, iVar0, -1, 1, 0);
}

void func_77(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_78(iParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_78(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_79();
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

int func_79()
{
	return Global_1312745;
}

int func_80(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_78(iParam1)];
	if (STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_81(int iParam0)
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

int func_82()
{
	if (Global_1674861.f_3 != 0)
	{
		return Global_1674861.f_3;
	}
	return -1;
}

int func_83()
{
	if (Global_1674861.f_2 != 0)
	{
		return Global_1674861.f_2;
	}
	return -1;
}

int func_84(int iParam0)
{
	if (iParam0 == func_28())
	{
		return -1;
	}
	return Global_1628955[iParam0 /*614*/].f_11.f_8[1];
}

int func_85(int iParam0)
{
	if (iParam0 == func_28())
	{
		return -1;
	}
	return Global_1628955[iParam0 /*614*/].f_11.f_8[0];
}

int func_86()
{
	return Global_1628955[PLAYER_ID() /*614*/].f_11;
}

bool func_87(bool bParam0)
{
	return func_88(PLAYER_ID(), bParam0);
}

int func_88(int iParam0, bool bParam1)
{
	return func_89(iParam0, bParam1, 1);
}

int func_89(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_28())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_90(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628955[iParam0 /*614*/].f_11;
	if (iVar0 != func_28() && Global_1628955[iVar0 /*614*/].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_90(int iParam0, int iParam1)
{
	if (iParam0 != func_28())
	{
		if (Global_1628955[iParam0 /*614*/].f_11 != func_28())
		{
			if (Global_1628955[iParam0 /*614*/].f_11 == iParam0 && Global_1628955[iParam0 /*614*/].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_91(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	int iVar26;
	int iVar27;
	
	if (bParam1)
	{
		if (_GET_NO_LOADING_SCREEN())
		{
			SET_NO_LOADING_SCREEN(false);
		}
	}
	if (func_104())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = iParam2;
		SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		bVar24 = iParam2 & 16777216 != false;
		if (!func_102())
		{
			bVar25 = false;
			if (bParam1 == 1)
			{
				bVar25 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar25 = true;
			}
			if (bVar9 == 1)
			{
				bVar25 = true;
			}
			if (bVar25)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (NETWORK_IS_PLAYER_ACTIVE(iParam0) && (NETWORK_IS_PLAYER_ACTIVE(iParam0) || iParam3 == 1))
		{
			if (iParam3 && IS_ENTITY_DEAD(IS_ENTITY_DEAD(iParam0), 0))
			{
				return;
			}
			iVar26 = GET_PLAYER_PED(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && NETWORK_IS_GAME_IN_PROGRESS())
				{
					SET_PLAYER_VISIBLE_LOCALLY(1);
				}
				else if (bVar13 || (!func_100(PLAYER_ID(), 0) && !func_99()))
				{
					SET_ENTITY_VISIBLE(iVar26, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (NETWORK_IS_GAME_IN_PROGRESS() && !bVar18)
					{
						SET_PLAYER_VISIBLE_LOCALLY(0);
					}
					Global_2424073[iParam0 /*421*/].f_244 = 0;
				}
			}
			if (bParam1)
			{
				func_96(0, 0, 0);
				if (bVar24)
				{
					CLEAR_FOCUS();
				}
				if (!func_95(iVar26) && !IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar26))
				{
					if (!bVar21)
					{
						SET_ENTITY_COLLISION(iVar26, true, 0);
					}
				}
				if (!IS_ENTITY_ATTACHED(iVar26))
				{
					if (!bVar20)
					{
						FREEZE_ENTITY_POSITION(iVar26, false);
					}
					_SET_ENTITY_SOMETHING(iVar26, true);
				}
				else if (!bVar20)
				{
					FREEZE_ENTITY_POSITION(iVar26, false);
				}
				SET_PED_CAN_BE_TARGETTED(iVar26, true);
				SET_PLAYER_INVINCIBLE(iParam0, 0);
				0x6BC97F4F4BB3C04B(iParam0, 0);
				if (HAS_PED_HEAD_BLEND_FINISHED(iVar26) && HAS_PED_HEAD_BLEND_FINISHED(iVar26))
				{
					_0x4668D80430D6C299(iVar26);
				}
				SET_PED_CAN_RAGDOLL(iVar26, 1);
				if (IS_PLAYER_CONTROL_ON(IS_PLAYER_CONTROL_ON()) == 0)
				{
					func_94();
					func_93();
				}
				if (IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar22)
					{
					}
				}
				if (IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2424073[iParam0 /*421*/].f_245 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
				if (Global_2405071.f_2670)
				{
					Global_2405071.f_2670 = 0;
				}
			}
			else
			{
				if (!func_95(iVar26) && !IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar26))
				{
					if (!bVar21)
					{
						SET_ENTITY_COLLISION(iVar26, !bVar14, 0);
					}
					if (!IS_ENTITY_ATTACHED(iVar26))
					{
						if (!bVar20)
						{
							FREEZE_ENTITY_POSITION(iVar26, bVar15);
						}
						if (!bVar15)
						{
							_SET_ENTITY_SOMETHING(iVar26, true);
						}
					}
					if (func_92(Global_4456448.f_190930))
					{
						FREEZE_ENTITY_POSITION(iVar26, true);
					}
				}
				if (Global_1312850)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					SET_PLAYER_INVINCIBLE(iParam0, 0);
				}
				else
				{
					SET_PLAYER_INVINCIBLE(iParam0, 1);
				}
				SET_PED_CAN_BE_TARGETTED(iVar26, bVar16);
				if (bVar2)
				{
					if (!IS_PED_FATALLY_INJURED(iVar26) && !IS_PED_FATALLY_INJURED(iVar26, 0))
					{
						CLEAR_PED_TASKS_IMMEDIATELY(iVar26);
					}
				}
			}
			iVar27 = 0;
			if (bVar1)
			{
				iVar27 |= 2;
			}
			if (bVar2)
			{
				iVar27 |= 4;
			}
			if (bVar3)
			{
				iVar27 |= 8;
			}
			if (bVar4)
			{
				iVar27 |= 16;
			}
			if (bVar5)
			{
				iVar27 |= 32;
			}
			if (bVar6)
			{
				iVar27 |= 64;
			}
			if (bVar7)
			{
				iVar27 |= 128;
			}
			if (bVar8)
			{
				iVar27 |= 256;
			}
			if (bVar9)
			{
				iVar27 |= 512;
			}
			if (bVar10)
			{
				iVar27 |= 1024;
			}
			if (bVar11)
			{
				iVar27 |= 2048;
			}
			if (bVar12)
			{
				iVar27 |= 4096;
			}
			SET_PLAYER_CONTROL(iParam0, bParam1, iVar27);
		}
	}
}

bool func_92(int iParam0)
{
	return iParam0 == 17;
}

void func_93()
{
	vector3 vVar0;
	
	Global_2437549.f_1232 = 0;
	Global_2437549.f_1233 = 0;
	Global_2437549.f_1234 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2437549.f_1239 = -1;
	Global_2437549.f_1240 = 0;
	Global_2405071.f_2681 = { vVar0 };
}

void func_94()
{
	Global_2405071.f_692 = 0;
	Global_2405071.f_2724 = 0;
	Global_2405071.f_510 = 0;
	Global_2405071.f_598 = 0;
	Global_2424073[PLAYER_ID() /*421*/].f_207 = 0;
	Global_2405071.f_2679 = 0;
}

int func_95(int iParam0)
{
	int iVar0;
	
	if (IS_PED_IN_ANY_VEHICLE(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = GET_SCRIPT_TASK_STATUS(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_96(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (IS_ENTITY_DEAD(iParam1, 0))
	{
	}
	if (bParam0 == 1)
	{
		if (DOES_ENTITY_EXIST(iParam1))
		{
			if (IS_PED_A_PLAYER(iParam1))
			{
				if (!_0x3B39236746714134(_0x3B39236746714134(), _0x3B39236746714134(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == 1)
			{
				func_98();
			}
			else if (!IS_BIT_SET(Global_2359302.f_67, 1))
			{
				if (IS_BIT_SET(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						_SET_CAM_PERSPECTIVE(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				SET_BIT(&(Global_2359302.f_67), 1);
			}
		}
		if (func_100(PLAYER_ID(), 0))
		{
			NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1, 1);
		}
		else
		{
			_GET_DATE_AND_TIME_FROM_UNIX_EPOCH(bParam0, iParam1);
		}
		KEY_HUD_COLOUR(bParam0, iParam1);
		func_97(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_97(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STAT_SET_BOOL(iVar0, bParam1, 1);
	}
}

void func_98()
{
	int iVar0;
	
	if (!_0x5C707A667DF8B9FA())
	{
		if (!IS_BIT_SET(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = _0xEE778F8C7E1142E2(iVar0);
				iVar0++;
			}
			SET_BIT(&(Global_2359302.f_67), 2);
			SET_BIT(&(Global_2359302.f_67), 0);
		}
	}
}

bool func_99()
{
	return IS_BIT_SET(Global_2359302, 3);
}

bool func_100(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER_ID())
	{
		bVar0 = func_101(-1, 0) == 8;
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

int func_101(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_79();
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

int func_102()
{
	if (func_103() == 0)
	{
		return 1;
	}
	return 0;
}

int func_103()
{
	return Global_1312467.f_18;
}

int func_104()
{
	if (Global_1590446[PLAYER_ID() /*871*/].f_35 && !Global_2449755.f_2846.f_214 == -1)
	{
		return 1;
	}
	return 0;
}

void func_105(var uParam0, bool bParam1, bool bParam2)
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

void func_106()
{
	int iVar0;
	
	if (bLocal_46)
	{
		return;
	}
	Local_43.f_4 = 0;
	if (!func_107(Global_42348[iLocal_54 /*5*/].f_2))
	{
		return;
	}
	iVar0 = GET_RANDOM_INT_IN_RANGE(500, 3000);
	vLocal_52.x = 5;
	Local_51.f_2 = (timera() + iVar0);
}

int func_107(int iParam0)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	
	iVar0 = func_118();
	if (iVar0 == -2)
	{
		return 0;
	}
	if (IS_PED_INJURED(Local_43.f_1))
	{
		if (IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0) || IS_PED_IN_ANY_VEHICLE(Local_43.f_1))
		{
			return 0;
		}
		if (IS_ENTITY_WAITING_FOR_WORLD_COLLISION(Local_43.f_1))
		{
			return 0;
		}
		if (func_114(Local_43.f_1))
		{
			return 0;
		}
	}
	if ((Global_42348[iLocal_54 /*5*/].f_3 < 3 && Global_42348[iLocal_54 /*5*/].f_3 != 0) && Global_42348[iLocal_54 /*5*/].f_3 > Global_42348[iLocal_54 /*5*/].f_4)
	{
		return 0;
	}
	if ((Global_42348[iLocal_54 /*5*/].f_4 < 9 && Global_42348[iLocal_54 /*5*/].f_4 != 0) && Global_42348[iLocal_54 /*5*/].f_4 > Global_42348[iLocal_54 /*5*/].f_3)
	{
		return 0;
	}
	sVar1 = func_113(iParam0);
	if (IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return 0;
	}
	if (func_114(Local_43.f_1))
	{
		return 0;
	}
	REQUEST_CLIP_SET(sVar1);
	if (func_110(Local_43.f_1))
	{
		sVar2 = "MOVE_M@DRUNK@TRANSITIONS";
		sVar3 = "";
		switch (iParam0)
		{
			case 0:
				sVar3 = "";
				break;
			
			case 2:
				sVar3 = "VERY_TO_MODERATE";
				break;
			
			case 1:
				sVar3 = "MODERATE_TO_SLIGHTLY";
				break;
			
			default:
				break;
		}
		if (!IS_STRING_NULL_OR_EMPTY(sVar2) && !IS_STRING_NULL_OR_EMPTY(sVar3))
		{
			REQUEST_ANIM_DICT(sVar2);
			while (!HAS_ANIM_DICT_LOADED(sVar2))
			{
				wait(0);
			}
			if (!IS_PED_INJURED(Local_43.f_1))
			{
				TASK_PLAY_ANIM(Local_43.f_1, sVar2, sVar3, 1.5f, -1.5f, -1, 48, 0, 0, 0, 0);
				sLocal_50 = sVar3;
			}
		}
	}
	if (!HAS_CLIP_SET_LOADED(sVar1))
	{
		return 0;
	}
	if (IS_PED_INJURED(Local_43.f_1))
	{
		return 0;
	}
	SET_PED_MOVEMENT_CLIPSET(Local_43.f_1, sVar1, 0.75f);
	if (GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
	{
		SET_PED_STRAFE_CLIPSET(Local_43.f_1, "move_ped_strafing_firstperson@drunk");
	}
	SET_PED_ALTERNATE_MOVEMENT_ANIM(Local_43.f_1, 0, sVar1, "idle", 2f, 1);
	vLocal_52.z = sVar1;
	bLocal_47 = true;
	iVar4 = 0;
	switch (func_70(Local_43.f_1))
	{
		case 0:
			iVar4 = "FACIALS@P_M_ZERO@BASE";
			break;
		
		case 1:
			iVar4 = "FACIALS@P_M_ONE@BASE";
			break;
		
		case 2:
			iVar4 = "FACIALS@P_M_TWO@BASE";
			break;
		
		default:
			if (IS_PED_A_PLAYER(Local_43.f_1))
			{
				if (!func_108())
				{
					iVar4 = "FACIALS@GEN_MALE@BASE";
				}
				else
				{
					iVar4 = "FACIALS@GEN_FEMALE@BASE";
				}
			}
			else if (IS_PED_MALE(Local_43.f_1))
			{
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else
			{
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
			break;
	}
	SET_FACIAL_IDLE_ANIM_OVERRIDE(Local_43.f_1, "mood_dr1", iVar4);
	SET_PED_RESET_FLAG(Local_43.f_1, 200, true);
	SET_PED_RESET_FLAG(Local_43.f_1, 46, true);
	SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_43.f_1, 0);
	SET_PED_FLEE_ATTRIBUTES(Local_43.f_1, 262144, true);
	SET_PED_IS_DRUNK(Local_43.f_1, 1);
	return 1;
}

bool func_108()
{
	return func_109(PLAYER_ID());
}

int func_109(int iParam0)
{
	if (GET_ENTITY_MODEL(GET_ENTITY_MODEL(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_110(int iParam0)
{
	vector3 vVar0;
	
	if (IS_PED_IN_ANY_VEHICLE(iParam0, 1) || IS_PED_IN_ANY_VEHICLE(iParam0))
	{
		return 0;
	}
	if (GET_SCRIPT_TASK_STATUS(iParam0, -2017877118) != 7)
	{
		return 0;
	}
	if (GET_SCRIPT_TASK_STATUS(iParam0, 1785177548) != 7)
	{
		return 0;
	}
	if (IS_PED_SHOOTING(iParam0))
	{
		return 0;
	}
	if (IS_ENTITY_IN_AIR(iParam0))
	{
		return 0;
	}
	if (IS_PED_RAGDOLL(iParam0))
	{
		return 0;
	}
	if (IS_PED_CLIMBING(iParam0))
	{
		return 0;
	}
	if (Global_73784)
	{
		return 0;
	}
	if (func_112())
	{
		return 0;
	}
	if (iParam0 == PLAYER_PED_ID())
	{
		if (!IS_PLAYER_FREE_FOR_AMBIENT_TASK(IS_PLAYER_FREE_FOR_AMBIENT_TASK()))
		{
			return 0;
		}
		if (!IS_PLAYER_CONTROL_ON(IS_PLAYER_CONTROL_ON()))
		{
			return 0;
		}
		if (IS_PLAYER_FREE_AIMING(IS_PLAYER_FREE_AIMING()) || IS_PLAYER_FREE_AIMING(IS_PLAYER_FREE_AIMING()))
		{
			return 0;
		}
		if (func_111())
		{
			return 0;
		}
	}
	vVar0 = { GET_ENTITY_VELOCITY(iParam0) };
	if (vmag2(vVar0) >= (1f * 1f))
	{
		return 0;
	}
	return 1;
}

bool func_111()
{
	return Global_98721.f_346 > 0;
}

bool func_112()
{
	return GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

char* func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "move_m@drunk@verydrunk";
			break;
		
		case 1:
			return "move_m@drunk@slightlydrunk";
			break;
		
		case 2:
			return "move_m@drunk@moderatedrunk";
			break;
	}
	return "";
}

bool func_114(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_115(iParam0);
	sVar1 = func_113(iVar0);
	if (IS_STRING_NULL_OR_EMPTY(vLocal_52.z))
	{
		if (IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return ARE_STRINGS_EQUAL(vLocal_52.z, sVar1);
}

int func_115(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	iVar0 = func_117(iParam0);
	iVar1 = func_116(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42348[iVar1 /*5*/].f_2;
}

int func_116(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42348[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_117(int iParam0)
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
		if (iParam0 == Global_42348[iVar0 /*5*/].f_1)
		{
			return Global_42348[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_118()
{
	int iVar0;
	
	if (Local_51 == -2)
	{
		return -2;
	}
	if (Local_51 == -1)
	{
		return -1;
	}
	iVar0 = (Local_51 - timera());
	if (iVar0 < 0)
	{
		return -2;
	}
	if (iVar0 > 65534)
	{
		iVar0 = 65534;
	}
	return iVar0;
}

void func_119()
{
	if (bLocal_46)
	{
		return;
	}
	if (!func_120())
	{
		vLocal_52.x = 5;
		Local_51.f_2 = timera() + 5000;
		return;
	}
	vLocal_52.x = 6;
}

bool func_120()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (Local_43.f_4 == 0)
	{
		return 0;
	}
	if (IS_ENTITY_DEAD(Local_43.f_4, 0))
	{
		return 0;
	}
	vVar0 = { GET_ENTITY_COORDS(Local_43.f_1, true) };
	vVar1 = { GET_ENTITY_COORDS(Local_43.f_4, true) };
	fVar2 = GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar1, true);
	return fVar2 < 7f;
}

void func_121()
{
	int iVar0;
	char* sVar1;
	
	if (Local_43.f_1 == PLAYER_PED_ID())
	{
		DISABLE_CONTROL_ACTION(0, 36, 1);
		if (GET_PED_STEALTH_MOVEMENT(Local_43.f_1))
		{
			if (Global_42348[iLocal_54 /*5*/].f_2 == 0 || Global_42348[iLocal_54 /*5*/].f_2 == 2)
			{
				SET_PED_STEALTH_MOVEMENT(Local_43.f_1, 0, 0);
			}
		}
		if (IS_PED_DUCKING(Local_43.f_1))
		{
			SET_PED_DUCKING(Local_43.f_1, 0);
		}
	}
	if (Local_51 != -2)
	{
		if (Local_51 == -1)
		{
			if (Global_42348[iLocal_54 /*5*/].f_2 != 0)
			{
				Global_42348[iLocal_54 /*5*/].f_2 = 0;
			}
		}
		else
		{
			iVar0 = (Local_51 - timera());
			if (iVar0 <= 0)
			{
				iVar0 = 0;
			}
			iVar0 = (iVar0 / 1000) + 1;
			if (Global_42348[iLocal_54 /*5*/].f_2 == 0)
			{
				if (iVar0 < 30)
				{
					Global_42348[iLocal_54 /*5*/].f_2 = 2;
					if (!func_107(2))
					{
						Global_42348[iLocal_54 /*5*/].f_2 = 0;
						return;
					}
				}
			}
			if (Global_42348[iLocal_54 /*5*/].f_2 == 2)
			{
				if (iVar0 < 10)
				{
					Global_42348[iLocal_54 /*5*/].f_2 = 1;
					if (!func_107(2))
					{
						Global_42348[iLocal_54 /*5*/].f_2 = 2;
						return;
					}
				}
			}
			if (Global_42348[iLocal_54 /*5*/].f_2 == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	if (!IS_STRING_NULL_OR_EMPTY(sLocal_50))
	{
		if (!func_110(Local_43.f_1))
		{
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (IS_ENTITY_PLAYING_ANIM(Local_43.f_1, sVar1, sLocal_50, 3))
			{
				STOP_ANIM_TASK(Local_43.f_1, sVar1, sLocal_50, -4f);
			}
			sLocal_50 = "";
			return;
		}
	}
	if (Global_42348[iLocal_54 /*5*/].f_3 >= 10 || Global_42348[iLocal_54 /*5*/].f_4 >= 15)
	{
		if (GET_SCRIPT_TASK_STATUS(Local_43.f_1, 1785177548) == 1 && !GET_SCRIPT_TASK_STATUS(Global_1676879.f_3, 27))
		{
			return;
		}
		if (IS_ANY_SPEECH_PLAYING(Local_43.f_1))
		{
			return;
		}
		if (IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 1))
		{
			if (Global_42348[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_42348[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_42348[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_42348[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == NETWORK_IS_GAME_IN_PROGRESS()) && func_131(NETWORK_IS_GAME_IN_PROGRESS())) && Global_262145.f_23831)
		{
			if (Global_42348[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_42348[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_42348[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_42348[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == NETWORK_IS_GAME_IN_PROGRESS()) && func_130())
		{
			if (Global_42348[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_42348[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_42348[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_42348[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == NETWORK_IS_GAME_IN_PROGRESS()) && func_129(NETWORK_IS_GAME_IN_PROGRESS())) && Global_262145.f_26179)
		{
			if (Global_42348[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_42348[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_42348[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_42348[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == NETWORK_IS_GAME_IN_PROGRESS()) && func_126(NETWORK_IS_GAME_IN_PROGRESS())) && Global_262145.f_26212)
		{
			if (Global_42348[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_42348[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_42348[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_42348[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == NETWORK_IS_GAME_IN_PROGRESS()) && func_122(NETWORK_IS_GAME_IN_PROGRESS()) == 15)
		{
			if (Global_42348[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_42348[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_42348[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_42348[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == NETWORK_IS_GAME_IN_PROGRESS()) && Global_73784) && !Global_42321)
		{
			if (Global_42348[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_42348[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_42348[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_42348[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		vLocal_52.y = 3;
		return;
	}
	if (!bLocal_47)
	{
		return;
	}
	if (!func_114(Local_43.f_1))
	{
		return;
	}
}

int func_122(int iParam0)
{
	if (func_125(iParam0) == 243)
	{
		return func_123(iParam0);
	}
	return -1;
}

int func_123(int iParam0)
{
	if (func_124(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_181;
	}
	return -1;
}

int func_124(int iParam0, int iParam1)
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 || (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_125(int iParam0)
{
	if (func_124(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_33;
	}
	return -1;
}

int func_126(int iParam0)
{
	if (iParam0 != func_28())
	{
		if (func_128(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_127(Global_2424073[iParam0 /*421*/].f_309.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_127(int iParam0)
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

int func_128(int iParam0, bool bParam1, bool bParam2)
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

int func_129(int iParam0)
{
	if (iParam0 != func_28())
	{
		if (func_128(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_127(Global_2424073[iParam0 /*421*/].f_309.f_5) == 14;
			}
		}
	}
	return 0;
}

var func_130()
{
	return Global_2508063;
}

int func_131(int iParam0)
{
	if (iParam0 != func_28())
	{
		if (func_128(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_127(Global_2424073[iParam0 /*421*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_132()
{
	int iVar0;
	
	if (!IS_PED_SITTING_IN_ANY_VEHICLE(Local_43.f_1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = GET_VEHICLE_PED_IS_IN(Local_43.f_1, 0);
	if (!IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
		return 0;
	}
	if (!GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) == Local_43.f_1)
	{
		return 0;
	}
	Local_43.f_4 = iVar0;
	vLocal_52.x = 7;
	return 1;
}

void func_133()
{
	if (!IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0))
	{
		vLocal_52.x = 4;
		return;
	}
}

void func_134()
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	if (!bLocal_46)
	{
		return;
	}
	if (!IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
	{
		return;
	}
	if (!IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE()))
	{
		return;
	}
	if (IS_PLAYER_WANTED_LEVEL_GREATER(IS_PLAYER_WANTED_LEVEL_GREATER(), 0))
	{
		return;
	}
	iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
	fVar1 = GET_ENTITY_SPEED(iVar0);
	if (fVar1 < 5f)
	{
		return;
	}
	vVar2 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true) };
	vVar3 = { vVar2 - Vector(3f, 30f, 30f) };
	vVar4 = { vVar2 + Vector(3f, 30f, 30f) };
	if (!IS_COP_VEHICLE_IN_AREA_3D(vVar3, vVar4) && !IS_COP_VEHICLE_IN_AREA_3D(vVar3, vVar4))
	{
		return;
	}
	SET_PLAYER_WANTED_LEVEL_NO_DROP(SET_PLAYER_WANTED_LEVEL_NO_DROP(), 1, 0);
	SET_PLAYER_WANTED_LEVEL_NOW(SET_PLAYER_WANTED_LEVEL_NOW(), 0);
	func_11(73, 1);
}

void func_135()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = Local_43.f_1;
	if (IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0))
	{
		iVar1 = GET_VEHICLE_PED_IS_IN(Local_43.f_1, 0);
		iVar2 = GET_PED_IN_VEHICLE_SEAT(iVar1, -1, 0);
		if (!iVar2 == Local_43.f_1)
		{
			return;
		}
		if (NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK_IS_GAME_IN_PROGRESS(iVar1))
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!PLAYER_PED_ID() == Local_43.f_1)
	{
		return;
	}
	else if (!GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
	{
		fLocal_49 = 0f;
		func_137(iVar0, 0f);
		return;
	}
	if (timera() < Local_51.f_4)
	{
		func_137(iVar0, fLocal_49);
		return;
	}
	if (IS_ENTITY_A_PED(iVar0))
	{
		Local_51.f_4 = timera() + 2000;
	}
	else
	{
		Local_51.f_4 = timera() + 1000;
	}
	fVar3 = GET_ENTITY_SPEED(iVar0);
	if (fVar3 < 0.04f)
	{
		fLocal_49 = 0f;
		func_137(iVar0, 0f);
		return;
	}
	if (Local_51.f_1 == -1)
	{
		fLocal_49 = func_136(iVar0, 0.13f, 0.06f);
	}
	else
	{
		iVar4 = (Local_51.f_1 - timera());
		if (iVar4 < 5000)
		{
			fLocal_49 = 0f;
		}
		else if (iVar4 < 15000)
		{
			fLocal_49 = func_136(iVar0, 0.05f, 0.02f);
		}
		else if (iVar4 < 30000)
		{
			fLocal_49 = func_136(iVar0, 0.07f, 0.03f);
		}
		else if (iVar4 < 45000)
		{
			fLocal_49 = func_136(iVar0, 0.09f, 0.04f);
		}
		else if (iVar4 < 600000)
		{
			fLocal_49 = func_136(iVar0, 0.1f, 0.05f);
		}
		else
		{
			fLocal_49 = func_136(iVar0, 0.13f, 0.06f);
		}
	}
	func_137(iVar0, fLocal_49);
}

float func_136(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = GET_RANDOM_FLOAT_IN_RANGE(-fParam1, fParam1);
	fVar1 = GET_RANDOM_FLOAT_IN_RANGE(0f, fParam2);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 - fVar1);
	}
	else
	{
		fVar0 = (fVar0 + fVar1);
	}
	if (IS_ENTITY_A_PED(iParam0))
	{
		if (IS_PED_SPRINTING(IS_PED_SPRINTING(iParam0)))
		{
			fVar0 = (fVar0 * 4.5f);
		}
		else
		{
			fVar0 = (fVar0 * 3f);
		}
	}
	else
	{
		iVar2 = GET_ENTITY_MODEL(iParam0);
		if (IS_THIS_MODEL_A_BIKE(iVar2))
		{
			fVar0 = (fVar0 * 1.5f);
		}
		else
		{
			fVar0 = (fVar0 * 0.5f);
		}
	}
	fVar0 = func_21(fVar0, -1f, 1f);
	return fVar0;
}

void func_137(int iParam0, float fParam1)
{
	if (NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK_IS_GAME_IN_PROGRESS(iParam0))
	{
		return;
	}
	if (IS_ENTITY_A_PED(iParam0))
	{
		_0x288DF530C92DAD6F(_0x288DF530C92DAD6F(iParam0), fParam1);
	}
	else if (IS_ENTITY_A_VEHICLE(iParam0))
	{
		SET_VEHICLE_STEER_BIAS(SET_VEHICLE_STEER_BIAS(iParam0), fParam1);
	}
}

void func_138()
{
	int iVar0;
	
	if (!IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0))
	{
		vLocal_52.x = 4;
		return;
	}
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_42348[iLocal_54 /*5*/].f_3 >= 10 || Global_42348[iLocal_54 /*5*/].f_4 >= 15)
		{
			if (Global_42348[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_42348[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_42348[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_42348[iLocal_54 /*5*/].f_4 = 14;
			}
		}
	}
	if (bLocal_46)
	{
		return;
	}
	iVar0 = GET_VEHICLE_PED_IS_IN(Local_43.f_1, 0);
	if (!IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
		TASK_LEAVE_ANY_VEHICLE(Local_43.f_1, 0, 0);
		vLocal_52.x = 11;
		return;
	}
}

void func_139()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (timera() <= Local_51.f_3)
	{
		return;
	}
	iVar0 = GET_SCRIPT_TASK_STATUS(GET_SCRIPT_TASK_STATUS(), 355471868);
	if (!iVar0 == 7)
	{
		Local_51.f_3 = timera() + 1000;
		return;
	}
	if (!IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0))
	{
		vLocal_52.x = 4;
		Local_51.f_3 = -2;
		return;
	}
	iVar1 = GET_VEHICLE_PED_IS_IN(Local_43.f_1, 0);
	iVar2 = GET_PED_IN_VEHICLE_SEAT(iVar1, -1, 0);
	if (iVar2 == Local_43.f_1)
	{
		func_140();
		Local_51.f_3 = -2;
		return;
	}
	TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Local_43.f_1, iVar1, 0);
	vLocal_52.x = 9;
	Local_51.f_3 = timera() + 1000;
}

void func_140()
{
	if (vLocal_52.x == 10)
	{
		return;
	}
	vLocal_52.x = 10;
	if (iLocal_44 == -1)
	{
		return;
	}
	func_166(iLocal_44, 2, 5);
	Local_51.f_4 = timera();
	fLocal_49 = 0f;
}

void func_141()
{
	if (IS_PED_SITTING_IN_ANY_VEHICLE(Local_43.f_1))
	{
		vLocal_52.x = 10;
		return;
	}
	if (timera() < Local_51.f_3)
	{
		return;
	}
	vLocal_52.x = 4;
	Local_51.f_3 = -2;
}

void func_142()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (!bLocal_46)
	{
	}
	iVar0 = 0;
	bVar1 = false;
	if (bVar1 || IS_PED_SITTING_IN_ANY_VEHICLE(Local_43.f_1))
	{
		if (!bLocal_46)
		{
		}
		iVar0 = GET_VEHICLE_PED_IS_IN(Local_43.f_1, 0);
		if (!iVar0 == Local_43.f_4)
		{
			if (!bLocal_46)
			{
			}
			if (!bLocal_46)
			{
				if (!bLocal_46)
				{
				}
				TASK_LEAVE_ANY_VEHICLE(Local_43.f_1, 0, 0);
				vLocal_52.x = 11;
				return;
			}
			Local_43.f_4 = iVar0;
		}
		if (bVar1)
		{
			if (!bLocal_46)
			{
			}
			func_140();
			return;
		}
		if (!bLocal_46)
		{
			if (!bLocal_46)
			{
			}
			func_140();
			return;
		}
		if (!bLocal_46)
		{
		}
		iVar2 = GET_PED_IN_VEHICLE_SEAT(Local_43.f_4, -1, 0);
		if (iVar2 == Local_43.f_1)
		{
			func_140();
			return;
		}
		TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Local_43.f_1, iVar0, 0);
		vLocal_52.x = 9;
		Local_51.f_3 = timera() + 1000;
		return;
	}
	if (!func_120())
	{
		CLEAR_PED_TASKS(Local_43.f_1);
		vLocal_52.x = 4;
		return;
	}
	if (!bLocal_46)
	{
		iVar3 = GET_SCRIPT_TASK_STATUS(Local_43.f_1, -1794415470);
		if (iVar3 == 7)
		{
			if (!IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0))
			{
				CLEAR_PED_TASKS(Local_43.f_1);
				vLocal_52.x = 4;
				return;
			}
		}
	}
}

void func_143()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (bLocal_46)
	{
		return;
	}
	if (Local_43.f_4 == 0)
	{
		vLocal_52.x = 4;
		return;
	}
	if (!IS_VEHICLE_DRIVEABLE(Local_43.f_4, 0))
	{
		Local_43.f_4 = 0;
		vLocal_52.x = 4;
		return;
	}
	vVar0 = { GET_ENTITY_COORDS(Local_43.f_1, true) };
	vVar1 = { GET_ENTITY_COORDS(Local_43.f_4, true) };
	fVar2 = GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar1, true);
	if (fVar2 > 3f)
	{
		if (!func_107(Global_42348[iLocal_54 /*5*/].f_2))
		{
			vLocal_52.x = 12;
			return;
		}
		vLocal_52.x = 5;
		Local_51.f_2 = timera() + 2000;
		return;
	}
	iVar3 = GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(Local_43.f_4);
	iVar4 = 0;
	bVar5 = true;
	iVar4 = 1;
	while (bVar5)
	{
		if (iVar4 < iVar3)
		{
			if (IS_VEHICLE_SEAT_FREE(Local_43.f_4, iVar4, 0))
			{
				bVar5 = false;
			}
			else
			{
				iVar4++;
			}
		}
		else
		{
			bVar5 = false;
			iVar4 = -1;
		}
	}
	if (iVar4 == -1)
	{
		if (iVar4 == -1)
		{
			vLocal_52.x = 4;
			return;
		}
	}
	func_144();
	TASK_ENTER_VEHICLE(Local_43.f_1, Local_43.f_4, -1, iVar4, 2f, 1, 0);
	vLocal_52.x = 7;
}

void func_144()
{
	if (!DOES_ENTITY_EXIST(Local_43.f_1))
	{
		return;
	}
	if (!IS_PED_INJURED(Local_43.f_1))
	{
		RESET_PED_MOVEMENT_CLIPSET(Local_43.f_1, 1048576000);
		RESET_PED_STRAFE_CLIPSET(Local_43.f_1);
		CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(Local_43.f_1, 0, -8f);
		vLocal_52.z = "";
		CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Local_43.f_1);
		SET_PED_RESET_FLAG(Local_43.f_1, 200, false);
		SET_PED_RESET_FLAG(Local_43.f_1, 46, false);
		SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_43.f_1, 1);
		SET_PED_FLEE_ATTRIBUTES(Local_43.f_1, 262144, false);
		SET_PED_IS_DRUNK(Local_43.f_1, 0);
	}
	if (!bLocal_47)
	{
		return;
	}
	bLocal_47 = false;
}

void func_145()
{
	if (timera() < Local_51.f_2)
	{
		func_121();
		return;
	}
	func_146();
	Local_51.f_2 = -2;
	vLocal_52.x = 12;
}

int func_146()
{
	if (!func_114(Local_43.f_1))
	{
		return 0;
	}
	if (!bLocal_47)
	{
		return 0;
	}
	func_147(Local_43.f_1);
	vLocal_52.z = "";
	Global_2531497.f_4540 = 1;
	return 1;
}

void func_147(int iParam0)
{
	RESET_PED_MOVEMENT_CLIPSET(iParam0, 1048576000);
	CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iParam0, 0, -8f);
	SET_PED_RESET_FLAG(iParam0, 200, false);
	SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0, 1);
	SET_PED_FLEE_ATTRIBUTES(iParam0, 262144, false);
	SET_PED_IS_DRUNK(iParam0, 0);
}

void func_148()
{
	int iVar0;
	
	if (Local_51 == -1)
	{
		Global_42348[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_42348[iLocal_54 /*5*/].f_3 < 3 && Global_42348[iLocal_54 /*5*/].f_3 != 0)
	{
		Global_42348[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_51 - timera());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_42348[iLocal_54 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_42348[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_42348[iLocal_54 /*5*/].f_2 = 1;
		}
	}
	if (IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0))
	{
		vLocal_52.x = 10;
		return;
	}
	if (func_114(Local_43.f_1))
	{
		vLocal_52.x = 12;
		return;
	}
	if (Local_51 == -2)
	{
		return;
	}
	if (!func_107(Global_42348[iLocal_54 /*5*/].f_2))
	{
		return;
	}
	vLocal_52.x = 12;
}

void func_149()
{
}

void func_150()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 6;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		iVar0 = Global_42429[iVar1 /*6*/].f_2;
		if (!iVar0 == 6)
		{
			if (Global_42429[iVar1 /*6*/].f_1 == iLocal_44)
			{
				func_152(iVar1);
				func_151(iVar1);
			}
			else if (Global_42429[iVar1 /*6*/].f_1 == 2)
			{
				if (!iLocal_45 == -1)
				{
					if (iLocal_45 == Global_42429[iVar1 /*6*/])
					{
						func_152(iVar1);
					}
				}
			}
		}
		iVar1++;
	}
}

void func_151(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_42429[iParam0 /*6*/] = -1;
	Global_42429[iParam0 /*6*/].f_1 = -1;
	Global_42429[iParam0 /*6*/].f_2 = 6;
	Global_42429[iParam0 /*6*/].f_3 = 0;
	Global_42429[iParam0 /*6*/].f_4 = 0;
}

void func_152(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_42429[iParam0 /*6*/].f_2;
	switch (iVar0)
	{
		case 1:
			func_173();
			break;
		
		case 2:
			func_156(Global_42429[iParam0 /*6*/].f_4);
			break;
		
		case 3:
			func_155(Global_42429[iParam0 /*6*/].f_5);
			break;
		
		case 4:
			func_154();
			break;
		
		case 5:
			func_153();
			break;
		
		case 0:
			break;
		
		case 6:
			break;
		
		default:
			break;
	}
}

void func_153()
{
	vLocal_52.y = 2;
}

void func_154()
{
	int iVar0;
	
	Global_42348[iLocal_54 /*5*/].f_4++;
	if (Local_51 == -1)
	{
		Global_42348[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_42348[iLocal_54 /*5*/].f_4 < 9 && Global_42348[iLocal_54 /*5*/].f_4 != 0)
	{
		Global_42348[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_51 - timera());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_42348[iLocal_54 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_42348[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_42348[iLocal_54 /*5*/].f_2 = 1;
		}
		if (!func_114(Local_43.f_1))
		{
			func_107(Global_42348[iLocal_54 /*5*/].f_2);
		}
	}
}

void func_155(int iParam0)
{
	int iVar0;
	
	Global_42348[iLocal_54 /*5*/].f_3 = (Global_42348[iLocal_54 /*5*/].f_3 + iParam0);
	if (Local_51 == -1)
	{
		Global_42348[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_42348[iLocal_54 /*5*/].f_3 < 3 && Global_42348[iLocal_54 /*5*/].f_3 != 0)
	{
		Global_42348[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_51 - timera());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_42348[iLocal_54 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_42348[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_42348[iLocal_54 /*5*/].f_2 = 1;
		}
		if (!func_114(Local_43.f_1))
		{
			func_107(Global_42348[iLocal_54 /*5*/].f_2);
		}
	}
}

void func_156(int iParam0)
{
	Local_43.f_3 = (Local_43.f_3 + iParam0);
	Local_43.f_2 = (Local_43.f_2 + iParam0);
	Local_51.f_1 = (Local_51.f_1 + iParam0);
	Local_51 = (Local_51 + iParam0);
}

void func_157()
{
	int iVar0;
	
	if (!bLocal_46)
	{
		iLocal_53 = -1;
		return;
	}
	if (iLocal_53 < 0)
	{
		iLocal_53 = GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL());
		return;
	}
	iVar0 = GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL());
	if (iVar0 != iLocal_53)
	{
		if (iVar0 > iLocal_53)
		{
			func_158();
		}
		iLocal_53 = iVar0;
		return;
	}
}

void func_158()
{
}

void func_159()
{
	if (!Local_51 == -1)
	{
		if (!Local_51 == -2)
		{
			if (timera() >= Local_51)
			{
				func_144();
				Local_51 = -2;
				vLocal_52.x = 12;
			}
		}
		if (timera() > Local_51.f_1)
		{
			func_173();
		}
	}
}

void func_160(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_42429[iVar0 /*6*/])
		{
			func_151(iVar0);
		}
		iVar0++;
	}
}

void func_161()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	vLocal_52.x = 4;
	if (!IS_ENTITY_DEAD(Local_43.f_1, 0))
	{
		if (IS_PED_SITTING_IN_ANY_VEHICLE(Local_43.f_1))
		{
			vLocal_52.x = 10;
		}
	}
	if (bLocal_46)
	{
		func_164();
		func_11(71, 1);
		if (NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = func_80(2057, -1, 0);
			iVar1 = (iVar0 / 10) + 1 * 10;
			if (iVar0 + 1 >= iVar1)
			{
				func_162(iVar1);
			}
			func_77(2057, iVar0 + 1, -1, 1, 0);
		}
		else
		{
			iVar2 = 0;
			iVar3 = 0;
			iVar4 = 0;
			STAT_GET_INT(joaat("sp0_sp_num_times_drunk"), &iVar2, -1);
			STAT_GET_INT(joaat("sp1_sp_num_times_drunk"), &iVar3, -1);
			STAT_GET_INT(joaat("sp2_sp_num_times_drunk"), &iVar4, -1);
			iVar5 = ((iVar2 + iVar3) + iVar4);
			iVar6 = (iVar5 / 10) + 1 * 10;
			if (iVar5 + 1 >= iVar6)
			{
				func_162(iVar6);
			}
			switch (func_67())
			{
				case 0:
					STAT_SET_INT(joaat("sp0_sp_num_times_drunk"), iVar2 + 1, 1);
					break;
				
				case 1:
					STAT_SET_INT(joaat("sp1_sp_num_times_drunk"), iVar3 + 1, 1);
					break;
				
				case 2:
					STAT_SET_INT(joaat("sp2_sp_num_times_drunk"), iVar4 + 1, 1);
					break;
				}
		}
		vLocal_52.y = 1;
		return;
	}
	vLocal_52.y = 12;
	if (Local_51 == -1)
	{
		Global_42348[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_42348[iLocal_54 /*5*/].f_3 < 3 && Global_42348[iLocal_54 /*5*/].f_3 != 0)
	{
		Global_42348[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar7 = (Local_51 - timera());
		if (iVar7 <= 0)
		{
			iVar7 = 0;
		}
		iVar7 = (iVar7 / 1000) + 1;
		Global_42348[iLocal_54 /*5*/].f_2 = 0;
		if (iVar7 < 30)
		{
			Global_42348[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar7 < 10)
		{
			Global_42348[iLocal_54 /*5*/].f_2 = 1;
		}
	}
}

void func_162(int iParam0)
{
	int iVar0;
	
	iVar0 = func_163(81);
	Global_2414413[iVar0 /*83*/] = 81;
	Global_2414413[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2414413[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_163(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2414413[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2414413[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_164()
{
}

void func_165()
{
	Local_51 = Local_43.f_2;
	Local_51.f_1 = Local_43.f_3;
	Local_51.f_2 = -2;
	Local_51.f_3 = -2;
}

void func_166(int iParam0, int iParam1, int iParam2)
{
	func_167(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_167(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_169(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_168();
	if (iVar0 == -1)
	{
		return;
	}
	Global_42429[iVar0 /*6*/] = iParam0;
	Global_42429[iVar0 /*6*/].f_1 = iParam1;
	Global_42429[iVar0 /*6*/].f_2 = iParam2;
	Global_42429[iVar0 /*6*/].f_3 = iParam3;
	Global_42429[iVar0 /*6*/].f_4 = iParam4;
	Global_42429[iVar0 /*6*/].f_5 = iParam5;
}

int func_168()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42429[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_169(int iParam0, int iParam1, int iParam2)
{
	if (func_170(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_170(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_42429[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_42429[iVar0 /*6*/])
			{
				if (iParam1 == Global_42429[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_171()
{
	int iVar0;
	
	bLocal_46 = false;
	if (Local_43.f_1 == PLAYER_PED_ID())
	{
		bLocal_46 = true;
		Global_42560 = 1;
		Global_42562++;
	}
	if (!IS_ENTITY_DEAD(Local_43.f_1, 0))
	{
		iVar0 = func_70(Local_43.f_1);
		switch (iVar0)
		{
			case 17:
				SET_AMBIENT_VOICE_NAME(Local_43.f_1, "AMANDA_DRUNK");
				break;
			
			case 19:
				SET_AMBIENT_VOICE_NAME(Local_43.f_1, "LAMAR_DRUNK");
				break;
			}
	}
}

void func_172()
{
	if (!iLocal_44 == -1)
	{
		return;
	}
	iLocal_44 = func_117(Local_43.f_1);
	if (iLocal_44 == -1)
	{
		return;
	}
	iLocal_54 = func_116(iLocal_44);
}

void func_173()
{
	int iVar0;
	
	if (!func_34(0) && !func_34(3))
	{
		if (!IS_ENTITY_DEAD(Local_43.f_1, 0))
		{
			iVar0 = func_70(Local_43.f_1);
			if (Global_42348[iLocal_54 /*5*/].f_4 > 0)
			{
				switch (iVar0)
				{
					case 0:
						func_175(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 1:
						func_175(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 2:
						func_175(Local_43.f_1, "POST_STONED", 24);
						break;
					}
			}
			switch (iVar0)
			{
				case 17:
					SET_AMBIENT_VOICE_NAME(Local_43.f_1, "AMANDA_NORMAL");
					break;
				
				case 19:
					SET_AMBIENT_VOICE_NAME(Local_43.f_1, "LAMAR_NORMAL");
					break;
				}
			}
	}
	func_144();
	if (bLocal_46)
	{
		Global_42560 = 0;
	}
	func_174();
	REMOVE_ANIM_DICT(func_113(0));
	REMOVE_ANIM_DICT(func_113(2));
	REMOVE_ANIM_DICT(func_113(1));
	Global_1671734 = 0;
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) > 0)
	{
		func_41(0);
	}
	TERMINATE_THIS_THREAD();
}

void func_174()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (IS_ENTITY_DEAD(Local_43.f_1, 0))
	{
		return;
	}
	iVar0 = Local_43.f_1;
	if (IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0))
	{
		iVar1 = GET_VEHICLE_PED_IS_IN(Local_43.f_1, 0);
		iVar2 = GET_PED_IN_VEHICLE_SEAT(iVar1, -1, 0);
		if (!Local_43.f_1 == iVar2)
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!GET_FOLLOW_PED_CAM_VIEW_MODE() == 4 || !GET_FOLLOW_PED_CAM_VIEW_MODE() == Local_43.f_1)
	{
		return;
	}
	fLocal_49 = 0f;
	func_137(iVar0, 0f);
}

void func_175(int iParam0, char* sParam1, int iParam2)
{
	_PLAY_AMBIENT_SPEECH1(iParam0, sParam1, func_176(iParam2), 1);
}

int func_176(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

__________________________
Native Named by Reliency
1577160530
__________________________
