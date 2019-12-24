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
	bool bLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	struct<4> Local_38[10];
	bool bLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	struct<27> Local_42 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	struct<11> Local_45[2];
	struct<25> Local_46[21];
	float fLocal_47 = 0f;
	int iLocal_48 = 0;
	bool bLocal_49 = 0;
	bool bLocal_50 = 0;
	bool bLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	vector3 vLocal_54 = { 0f, 0f, 0f };
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = -1;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 1000;
	var uLocal_66 = 1000;
	var uLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	struct<8> Local_73[3];
	var uLocal_74 = 15;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 15;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	int iLocal_178 = 0;
	char* sLocal_179 = NULL;
	char* sLocal_180 = NULL;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	vector3 vLocal_185 = { 0f, 0f, 0f };
	vector3 vLocal_186 = { 0f, 0f, 0f };
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	bool bLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	struct<14> Local_197 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_198 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_199 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	char[] cLocal_204[8] = 0;
	var uLocal_205 = 16;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	char[] cLocal_370[8] = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	int iLocal_374[3] = { 0, 0, 0 };
	int iLocal_375 = 0;
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
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_36 = 3;
	iLocal_41 = 21;
	fLocal_47 = -1f;
	vLocal_54 = { 0f, 0f, 0f };
	iLocal_55 = -1;
	sLocal_180 = "FBIPRA";
	vLocal_185 = { 0f, 0f, 0f };
	vLocal_186 = { 1381.472f, -2072.245f, 50.9981f };
	cLocal_204 = "FIBP1AU";
	iLocal_375 = -1;
	SET_MISSION_FLAG(1);
	if (HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		sLocal_179 = 0;
		func_387();
		func_375();
	}
	func_358();
	if (func_357())
	{
		func_356(918.8851f, -269.789f, 67.2145f, 68.2149f, 1, 0);
	}
	func_342();
	while (true)
	{
		_0x208784099002BC30("M_TrT", 0);
		if (func_341(PLAYER_PED_ID()))
		{
			func_337();
			func_333();
			SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME());
			SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.8f);
			switch (iLocal_68)
			{
				case 0:
					func_270();
					break;
				
				case 1:
					func_239();
					break;
				
				case 2:
					func_221();
					break;
				
				case 3:
					func_108();
					break;
				
				case 4:
					func_39();
					break;
				
				case 5:
					func_1();
					break;
			}
			if (iLocal_68 != 5)
			{
				if (iLocal_68 >= 0 && !bLocal_28)
				{
				}
			}
		}
		wait(0);
	}
}

void func_1()
{
	int iVar0;
	
	switch (iLocal_69)
	{
		case 0:
			CLEAR_PRINTS();
			CLEAR_HELP(1);
			func_38();
			if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
			{
				iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
				if (func_37(iVar0) && GET_ENTITY_MODEL(iVar0) == joaat("towtruck"))
				{
					func_36(iVar0, 2);
				}
			}
			if (!IS_STRING_NULL_OR_EMPTY(sLocal_179))
			{
				func_34(sLocal_179);
			}
			else
			{
				func_18(0);
			}
			iLocal_69 = 1;
			break;
		
		case 1:
			if (func_17())
			{
				if (func_16())
				{
					func_11();
				}
				func_2();
				CLEAR_AREA(CLEAR_AREA(CLEAR_AREA(), true), 30f, 1, 0, 0, false);
				func_375();
			}
			break;
	}
}

void func_2()
{
	func_9(&Local_199);
	func_9(&iLocal_201);
	func_9(&iLocal_200);
	func_8(&Local_197);
	func_8(&Local_198);
	func_9(&iLocal_202);
	func_3();
}

void func_3()
{
	func_7(&(Local_45[0 /*11*/].f_4));
	func_7(&(Local_45[1 /*11*/].f_4));
	func_6(&iLocal_43);
	func_5(&(Local_45[0 /*11*/]), 1, 0, 1);
	func_5(&(Local_45[1 /*11*/]), 1, 0, 1);
	func_4(&(Local_46[iLocal_48 /*25*/].f_17), 0);
	REMOVE_RELATIONSHIP_GROUP(iLocal_40);
	REMOVE_ANIM_DICT("missfbi4prepp1");
	REMOVE_ANIM_SET("missfbi4prepp1_garbageman");
}

void func_4(int iParam0, bool bParam1)
{
	if (DOES_ENTITY_EXIST(*iParam0))
	{
		if (IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
		{
			DETACH_ENTITY(*iParam0, 1, true);
		}
		if (!bParam1)
		{
			SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
		}
		else
		{
			_MARK_OBJECT_FOR_DELETION(*iParam0);
		}
	}
}

void func_5(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (DOES_ENTITY_EXIST(*iParam0))
	{
		if (!IS_PED_INJURED(*iParam0))
		{
			SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false, 1);
			if (iParam3 == 0)
			{
				CLEAR_PED_SECONDARY_TASK(*iParam0);
			}
			SET_PED_KEEP_TASK(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
			}
		}
		SET_PED_AS_NO_LONGER_NEEDED(iParam0);
	}
}

void func_6(int iParam0)
{
	if (DOES_ENTITY_EXIST(*iParam0))
	{
		IS_ENTITY_DEAD(*iParam0, 0);
		if (IS_ENTITY_A_MISSION_ENTITY(*iParam0) && IS_ENTITY_A_MISSION_ENTITY(*iParam0, 1))
		{
			SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_7(int iParam0)
{
	if (DOES_BLIP_EXIST(*iParam0))
	{
		SET_BLIP_ROUTE(*iParam0, false);
		REMOVE_BLIP(iParam0);
	}
}

void func_8(int iParam0)
{
	if (DOES_ENTITY_EXIST(*iParam0))
	{
		if (!IS_ENTITY_DEAD(*iParam0, 0))
		{
			SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false, 1);
		}
		if (!IS_ENTITY_A_MISSION_ENTITY(*iParam0))
		{
			SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, 0);
		}
		DELETE_PED(iParam0);
	}
}

void func_9(int iParam0)
{
	if (DOES_ENTITY_EXIST(*iParam0))
	{
		if (!IS_ENTITY_A_MISSION_ENTITY(*iParam0))
		{
			SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, 0);
		}
		if (func_37(*iParam0))
		{
			if (IS_ENTITY_A_MISSION_ENTITY(*iParam0) && IS_ENTITY_A_MISSION_ENTITY(*iParam0, 1))
			{
				if (func_10(PLAYER_PED_ID()))
				{
					if (IS_PED_IN_VEHICLE(IS_PED_IN_VEHICLE(), *iParam0, 0))
					{
						SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
						return;
					}
				}
				DELETE_VEHICLE(iParam0);
			}
		}
		else
		{
			if (func_10(PLAYER_PED_ID()))
			{
				if (IS_PED_IN_VEHICLE(IS_PED_IN_VEHICLE(), *iParam0, 0))
				{
					SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
					return;
				}
			}
			DELETE_VEHICLE(iParam0);
		}
	}
}

int func_10(int iParam0)
{
	if (DOES_ENTITY_EXIST(iParam0))
	{
		if (!IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_11()
{
	func_14(918.8851f, -269.789f, 67.2145f, 325.9081f);
	func_12(917.5291f, -263.8595f, 67.3489f, 188.0605f);
}

void func_12(vector3 vParam0, float fParam1)
{
	func_13(&(Global_105109.f_2890), vParam0, fParam1);
}

void func_13(var uParam0, vector3 vParam1, var uParam2)
{
	*uParam0 = { vParam1 };
	uParam0->f_6 = uParam2;
}

void func_14(vector3 vParam0, float fParam1)
{
	if (func_15(Global_76817, 0f, 0f, 0f, 0))
	{
		Global_76817 = { vParam0 };
		Global_76820 = fParam1;
	}
}

bool func_15(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_16()
{
	if (Global_98669 == 7)
	{
		return 1;
	}
	return 0;
}

int func_17()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_98669 == 7 || Global_98669 == 8)
	{
		return 1;
	}
	return 0;
}

void func_18(int iParam0)
{
	int iVar0;
	
	if (Global_111560.f_9080 || func_33(0))
	{
		iVar0 = func_32();
		if (!func_19(iVar0))
		{
			return;
		}
		SET_BIT(&(Global_89451[iVar0 /*5*/].f_1), 5);
		Global_98705 = iParam0;
	}
}

int func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_24();
	if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
	{
		START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_89451[iParam0 /*5*/];
	iVar1 = Global_76846.f_109[iVar0 /*4*/];
	func_23(iVar1, 1);
	_0xC9A763D8FE87436A(_0xC9A763D8FE87436A());
	SPECIAL_ABILITY_DEACTIVATE(SPECIAL_ABILITY_DEACTIVATE());
	func_20(&(Global_111560.f_2358.f_539), iVar1);
	if (Global_92874 == Global_98706)
	{
		Global_111560.f_9080.f_330[iVar1 /*6*/].f_1++;
	}
	if (!IS_BIT_SET(Global_89487[iVar1 /*34*/].f_15, 1))
	{
		if (!IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
		{
			SET_FADE_IN_AFTER_DEATH_ARREST(0);
		}
	}
	Global_111560.f_9080.f_330[iVar1 /*6*/].f_2++;
	Global_92874 = Global_98706;
	if (iParam0 == -1)
	{
		if (Global_111560.f_9080)
		{
		}
		return 0;
	}
	if (IS_BIT_SET(Global_89451[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (IS_BIT_SET(Global_89451[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_20(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_111560.f_18528[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !IS_BIT_SET(Global_111560.f_9080.f_99.f_219[0], 9))
		{
		}
		else
		{
			vVar2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_22(Global_111560.f_18528[iVar0], &vVar2, &fVar3))
			{
				Global_111560.f_18528[iVar0] = 318;
				func_21(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_96089[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_96089[iVar0 /*29*/].f_9 = 0f;
				Global_96089[iVar0 /*29*/].f_12 = 0f;
				Global_96089[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_96089[iVar0 /*29*/].f_10 = 0f;
				Global_96089[iVar0 /*29*/].f_13 = 0f;
				Global_96089[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_96089[iVar0 /*29*/].f_11 = 0f;
				Global_96089[iVar0 /*29*/].f_14 = 0f;
				Global_96089[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_96089[iVar0 /*29*/].f_26 = 0f;
				Global_96089[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_96089[iVar0 /*29*/].f_27 = 0f;
				Global_96089[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_96089[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_21(var uParam0)
{
	*uParam0 = -15;
}

int func_22(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_22(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_22(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_23(int iParam0, bool bParam1)
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

void func_24()
{
	Global_98704 = 1;
	if (IS_PLAYER_BEING_ARRESTED(IS_PLAYER_BEING_ARRESTED(), 1))
	{
		if (IS_STRING_NULL_OR_EMPTY(&Global_76809))
		{
			switch (func_25())
			{
				case 0:
					StringCopy(&Global_76809, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_76809, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_76809, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_76813, "", 16);
		}
		Global_98704 = 0;
	}
	else if (!IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
	{
		if (IS_STRING_NULL_OR_EMPTY(&Global_76809))
		{
			switch (func_25())
			{
				case 0:
					StringCopy(&Global_76809, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_76809, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_76809, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_76813, "", 16);
		}
		Global_98704 = 0;
		SET_BIT(&(Global_98669.f_20), 25);
	}
}

int func_25()
{
	func_26();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_26()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()))
	{
		if (func_30(Global_111560.f_2358.f_539.f_4321) != GET_ENTITY_MODEL(GET_ENTITY_MODEL()))
		{
			iVar0 = func_29(PLAYER_PED_ID());
			if (func_28(iVar0) && (!func_27(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_28(Global_111560.f_2358.f_539.f_4321))
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

bool func_27(int iParam0)
{
	return Global_41396 == iParam0;
}

bool func_28(int iParam0)
{
	return iParam0 < 3;
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_30(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_30(int iParam0)
{
	if (func_28(iParam0))
	{
		return func_31(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_31(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

int func_32()
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

bool func_33(bool bParam0)
{
	if (!bParam0 && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return IS_BIT_SET(Global_76825, 0);
}

void func_34(char* sParam0)
{
	func_35(sParam0);
	func_18(0);
}

void func_35(char* sParam0)
{
	if (!IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 16)
		{
			StringCopy(&Global_76809, sParam0, 16);
			StringCopy(&Global_76813, "", 16);
			if (_IS_RECORDING())
			{
				_STOP_RECORDING_AND_SAVE_CLIP();
			}
		}
	}
}

void func_36(int iParam0, int iParam1)
{
	Global_98669.f_22[iParam1] = iParam0;
}

int func_37(int iParam0)
{
	if (func_10(iParam0))
	{
		if (IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (!IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_38()
{
	func_7(&iLocal_182);
}

void func_39()
{
	int iVar0;
	
	switch (iLocal_69)
	{
		case 0:
			iLocal_69 = 1;
			break;
		
		case 1:
			if (!func_107(PLAYER_PED_ID(), vLocal_186, 270f))
			{
				iLocal_69 = 2;
			}
			else if (!func_106("PRA_LEVAREA", 0, 0))
			{
				func_105("PRA_LEVAREA", 60000, 0);
			}
			break;
		
		case 2:
			iVar0 = func_25();
			if (func_106("PRA_LEVAREA", 0, 0))
			{
				CLEAR_PRINTS();
			}
			if (iVar0 == 0)
			{
				if (func_67(&uLocal_72, &cLocal_370, &uLocal_205))
				{
					func_63();
					func_58();
				}
			}
			else
			{
				func_53(func_57(iVar0), -621899663, -621899663, 5, 0, iVar0, func_56(iVar0), 0, 6000, 6000, -1, 0, 0);
				func_63();
				func_58();
			}
			break;
		
		case 3:
			func_40(1, 1, 1);
			iLocal_69 = 2;
			break;
	}
}

void func_40(int iParam0, int iParam1, int iParam2)
{
	func_42(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (iParam1 == 1)
	{
		func_41(500, 0);
	}
}

void func_41(int iParam0, bool bParam1)
{
	if (IS_SCREEN_FADED_OUT() || IS_SCREEN_FADED_OUT())
	{
		if (!IS_SCREEN_FADING_IN())
		{
			DO_SCREEN_FADE_IN(iParam0);
		}
	}
	if (bParam1)
	{
		while (!IS_SCREEN_FADED_IN())
		{
			wait(0);
		}
	}
}

void func_42(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = GET_PLAYER_INDEX();
	SET_EVERYONE_IGNORE_PLAYER(iVar0, 0);
	SET_PLAYER_CONTROL(iVar0, bParam3, 0);
	func_43(0, 1, 0, 0, 0, 0);
	if (iParam2 == 1)
	{
		DISPLAY_RADAR(true);
		DISPLAY_HUD(true);
	}
	CLEAR_HELP(1);
	if (iParam0 == 1)
	{
		SET_WIDESCREEN_BORDERS(false, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_37 != 0 && iLocal_37 != joaat("object")) && iLocal_37 != joaat("gadget_parachute"))
		{
			if (func_10(PLAYER_PED_ID()))
			{
				if (HAS_PED_GOT_WEAPON(HAS_PED_GOT_WEAPON(), iLocal_37, 0))
				{
					SET_CURRENT_PED_WEAPON(SET_CURRENT_PED_WEAPON(), iLocal_37, false);
				}
			}
		}
	}
	if (func_341(PLAYER_PED_ID()))
	{
		SET_PED_STEALTH_MOVEMENT(SET_PED_STEALTH_MOVEMENT(), 0, 0);
	}
}

void func_43(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		SPECIAL_ABILITY_DEACTIVATE_FAST(SPECIAL_ABILITY_DEACTIVATE_FAST());
		SET_ALL_RANDOM_PEDS_FLEE(SET_ALL_RANDOM_PEDS_FLEE(), 1);
		SET_POLICE_IGNORE_PLAYER(SET_POLICE_IGNORE_PLAYER(), 1);
		func_52(1);
		_0xA8FDB297A8D25FBA();
		THEFEED_PAUSE();
		if (Global_19486.f_1 > 3)
		{
			if (IS_MOBILE_PHONE_CALL_ONGOING())
			{
				STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_51())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_50(1, iParam3, iParam2, 0);
		Global_61477 = 1;
		Global_73787 = 1;
		Global_76575 = 1;
	}
	else
	{
		func_52(0);
		THEFEED_RESUME();
		Global_61477 = 0;
		if (bParam1)
		{
			_0x03FC694AE06C5A20();
		}
		SET_ALL_RANDOM_PEDS_FLEE(SET_ALL_RANDOM_PEDS_FLEE(), 0);
		SET_POLICE_IGNORE_PLAYER(SET_POLICE_IGNORE_PLAYER(), 0);
		func_50(0, iParam3, iParam2, 0);
		if (NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!IS_PED_INJURED(IS_PED_INJURED()) && !func_48(IS_PED_INJURED())) && !func_45(IS_PED_INJURED(), 0)) && !func_44()) && !bParam4) && !bParam5)
			{
				SET_ENTITY_INVINCIBLE(SET_ENTITY_INVINCIBLE(), false);
			}
		}
		else if (((!IS_PED_INJURED(IS_PED_INJURED()) && !func_48(IS_PED_INJURED())) && !bParam4) && !bParam5)
		{
			SET_ENTITY_INVINCIBLE(SET_ENTITY_INVINCIBLE(), false);
		}
		Global_76575 = 0;
	}
}

bool func_44()
{
	return IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_39.f_18, 14);
}

bool func_45(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER_ID())
	{
		bVar0 = func_46(-1, 0) == 8;
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

int func_46(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_47();
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

int func_47()
{
	return Global_1312745;
}

int func_48(int iParam0)
{
	if (func_45(iParam0, 0))
	{
		return 1;
	}
	if (func_49())
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

bool func_49()
{
	return IS_BIT_SET(Global_2359302, 3);
}

int func_50(int iParam0, int iParam1, var uParam2, int iParam3)
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

int func_51()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_52(int iParam0)
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

int func_53(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<15> Var0;
	int iVar1;
	
	if (func_33(0))
	{
		return 0;
	}
	if (iParam8 < 0)
	{
		return 0;
	}
	if (iParam9 < 0)
	{
		return 0;
	}
	if (iParam10 == 76)
	{
		return 0;
	}
	if (iParam11 == 235)
	{
		return 0;
	}
	if (iParam6 == iParam5)
	{
		return 0;
	}
	if (((iParam5 != 144 && iParam5 != 0) && iParam5 != 1) && iParam5 != 2)
	{
		return 0;
	}
	if (Global_111560.f_7683.f_136 < 9)
	{
		Var0 = uParam0;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_9 = iParam3;
		if (Global_111560.f_7683.f_911 == Var0)
		{
			Global_111560.f_7683.f_911 = -1;
		}
		Var0.f_3 = func_55(iParam4);
		Var0.f_5 = iParam9;
		Var0.f_4 = (GET_GAME_TIMER() + iParam8);
		Var0.f_1 = iParam12;
		iVar1 = 0;
		SET_BIT(&iVar1, iParam5);
		Var0.f_2 = iVar1;
		Var0.f_6 = iParam6;
		Var0.f_14 = iParam7;
		Var0.f_7 = iParam10;
		Var0.f_8 = iParam11;
		SET_BIT(&(Var0.f_1), 0);
		SET_BIT(&(Var0.f_1), 13);
		CLEAR_BIT(&(Var0.f_1), 1);
		if (iParam4 == 0)
		{
			SET_BIT(&(Var0.f_1), 10);
		}
		Global_111560.f_7683[Global_111560.f_7683.f_136 /*15*/] = { Var0 };
		Global_111560.f_7683.f_136++;
		func_54(iParam5);
		return 1;
	}
	return 0;
}

void func_54(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_28(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111560.f_7683.f_136)
	{
		if (IS_BIT_SET(Global_111560.f_7683[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_111560.f_7683[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_111560.f_7683[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_111560.f_7683.f_764)
	{
		if (IS_BIT_SET(Global_111560.f_7683.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_111560.f_7683.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_111560.f_7683.f_919[iParam0] = iVar1;
}

int func_55(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_56(int iParam0)
{
	if (iParam0 == 1)
	{
		return 9;
	}
	return 8;
}

int func_57(int iParam0)
{
	if (iParam0 == 1)
	{
		return -714760066;
	}
	return -1198055521;
}

void func_58()
{
	CLEAR_PRINTS();
	func_61();
	func_59(0, 0);
	func_375();
}

void func_59(bool bParam0, int iParam1)
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
		if ((func_33(0) && Global_76823.f_1 == 1) && func_60(Global_76823))
		{
		}
		else
		{
			Global_61471 = 1;
		}
	}
	if (Global_111560.f_9080 || func_33(0))
	{
		iVar0 = func_32();
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

int func_60(int iParam0)
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

void func_61()
{
	Global_19671 = 0;
	func_62();
}

void func_62()
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

void func_63()
{
	func_66(0, -1);
	func_65(0, 318);
	func_64(1, 320);
}

void func_64(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_61479)
	{
	}
	Global_61479 = 0;
	if (bParam0)
	{
		Global_61480 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_73566)
		{
			if (Global_61696[Global_73567[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_73567[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_73566)
		{
			if (Global_73567[iVar0 /*9*/] > 0)
			{
				if (Global_73567[iVar0 /*9*/] == iParam1)
				{
					Global_73567[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_65(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_61484 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_73566)
	{
		if (iParam1 == -1 || Global_73567[iVar0 /*9*/] == iParam1)
		{
			if (Global_73567[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_73567[iVar0 /*9*/].f_6 = iParam0;
				Global_73567[iVar0 /*9*/].f_7 = 1;
				Global_73567[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_66(int iParam0, int iParam1)
{
	Global_61482 = iParam0;
	Global_61483 = iParam1;
}

int func_67(var uParam0, char* sParam1, var uParam2)
{
	switch (*uParam0)
	{
		case 0:
			if (func_103())
			{
				if ((func_102(74) || func_102(75)) && func_101())
				{
					if (func_25() == 0)
					{
						func_100(1);
						func_99(46, 1);
						*uParam0 = 4;
					}
					else
					{
						func_98(uParam2, 0, 0, "MICHAEL", 0, 1);
						if (func_82(uParam2, func_97(), func_25(), "FBIPRAU", func_96(), 9, 1, 0, 0, 0))
						{
							*sParam1 = { func_81(1) };
							func_99(46, 1);
							*uParam0 = 1;
						}
					}
				}
				else if (func_25() == 0)
				{
					func_100(0);
					*uParam0 = 4;
				}
				else
				{
					func_98(uParam2, 0, 0, "MICHAEL", 0, 1);
					if (func_82(uParam2, func_97(), func_25(), "FBIPRAU", func_96(), 9, 1, 0, 0, 0))
					{
						*sParam1 = { func_81(0) };
						*uParam0 = 1;
					}
				}
			}
			else
			{
				func_74();
				*uParam0 = 4;
			}
			break;
		
		case 1:
			if (func_73())
			{
				if (GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 0)
				{
					func_72("FBIPRAU", sParam1);
					func_71(1);
					*uParam0 = 3;
				}
			}
			if (func_70())
			{
				*uParam0 = 3;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!func_73())
			{
				if (!func_69(0))
				{
					if (!func_102(3) && func_103())
					{
						func_68(50, 0);
					}
					return 1;
				}
			}
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_68(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_111560.f_8608[iParam0] = 1;
	Global_111560.f_8608.f_236[iParam0] = (GET_GAME_TIMER() + iParam1);
}

int func_69(int iParam0)
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

int func_70()
{
	if (Global_20854 == 1 || Global_21821 == 1)
	{
		return 1;
	}
	return 0;
}

void func_71(bool bParam0)
{
	STOP_SCRIPTED_CONVERSATION(bParam0);
	if (bParam0)
	{
	}
}

void func_72(char* sParam0, char* sParam1)
{
	if (IS_MOBILE_PHONE_CALL_ONGOING())
	{
		Global_20862 = 1;
		StringCopy(&Global_20869, sParam0, 24);
		StringCopy(&Global_20863, sParam1, 24);
	}
}

int func_73()
{
	if (Global_20805 == 4)
	{
		if (IS_MOBILE_PHONE_CALL_ONGOING())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_74()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_79(iVar0);
		if (!IS_PED_INJURED(iVar1))
		{
			if (func_78(iVar1, 0))
			{
				return;
			}
		}
		iVar0++;
	}
	func_75(func_76(), 0, func_25(), func_97(), 9, 6000, 6000, -1, 0, -1, 0);
}

int func_75(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<15> Var0;
	int iVar1;
	
	if (func_33(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 == 76)
	{
		return 0;
	}
	if (iParam8 == 235)
	{
		return 0;
	}
	if (iParam3 == iParam2)
	{
		return 0;
	}
	if (((iParam2 != 144 && iParam2 != 0) && iParam2 != 1) && iParam2 != 2)
	{
		return 0;
	}
	if (Global_111560.f_7683.f_136 < 9)
	{
		Var0 = iParam0;
		if (Global_111560.f_7683.f_911 == Var0)
		{
			Global_111560.f_7683.f_911 = -1;
		}
		Var0.f_3 = func_55(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = (GET_GAME_TIMER() + iParam5);
		Var0.f_1 = iParam10;
		iVar1 = 0;
		SET_BIT(&iVar1, iParam2);
		Var0.f_2 = iVar1;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		SET_BIT(&(Var0.f_1), 0);
		CLEAR_BIT(&(Var0.f_1), 1);
		if (iParam1 == 0)
		{
			SET_BIT(&(Var0.f_1), 10);
		}
		Global_111560.f_7683[Global_111560.f_7683.f_136 /*15*/] = { Var0 };
		Global_111560.f_7683.f_136++;
		func_54(iParam2);
		return 1;
	}
	return 0;
}

int func_76()
{
	switch (func_77())
	{
		case 33:
			switch (func_25())
			{
				case 0:
					return -1847734803;
					break;
				
				case 1:
					return -714760066;
					break;
				
				case 2:
					return -1198055521;
					break;
			}
			break;
		
		case 34:
			switch (func_25())
			{
				case 0:
					return 1374342572;
					break;
				
				case 1:
					return 530956160;
					break;
				
				case 2:
					return 240475766;
					break;
			}
			break;
		
		case 36:
			switch (func_25())
			{
				case 0:
					return 580731697;
					break;
				
				case 1:
					return 728176806;
					break;
				
				case 2:
					return 910240872;
					break;
			}
			break;
		
		case 37:
			switch (func_25())
			{
				case 0:
					return 74540475;
					break;
				
				case 1:
					return -1200353264;
					break;
				
				case 2:
					return 801340541;
					break;
			}
			break;
	}
	return -1;
}

int func_77()
{
	return Global_76839;
}

int func_78(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!IS_PED_INJURED(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_79(iVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == PLAYER_PED_ID())
			{
				return 0;
			}
		}
		if (IS_BIT_SET(Global_94552, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_79(int iParam0)
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_25())
	{
		return PLAYER_PED_ID();
	}
	return Global_96177[func_80(iParam0)];
}

int func_80(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

struct<4> func_81(bool bParam0)
{
	struct<4> Var0;
	
	if (bParam0)
	{
		switch (func_25())
		{
			case 1:
				StringCopy(&Var0, "FBI4_ISAGO", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "FBI4_ISAGO", 16);
				break;
		}
	}
	else
	{
		switch (func_25())
		{
			case 1:
				StringCopy(&Var0, "FBI4_THATSIT", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "FBI4_THATSIT", 16);
				break;
			}
	}
	return Var0;
}

bool func_82(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	func_95(uParam0, iParam1, sParam3, iParam7, iParam8, 0);
	Global_6674 = iParam2;
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20819 = 0;
	Global_20810 = 1;
	Global_20857 = 0;
	Global_20859 = 0;
	if (iParam6 == 1)
	{
		Global_20817 = 1;
	}
	else
	{
		Global_20817 = 0;
	}
	Global_2621441 = 0;
	return func_83(sParam4, iParam5, bParam9);
}

int func_83(char* sParam0, int iParam1, bool bParam2)
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
					func_62();
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
		if (func_94(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_93();
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
				func_92();
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
				if (func_91())
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
			if (func_51())
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
			func_90();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_89();
		func_84();
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
		func_62();
	}
	return 0;
}

void func_84()
{
	if (!func_85())
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

int func_85()
{
	if (!Global_262145.f_28013)
	{
		return 0;
	}
	if (!Global_76577)
	{
		return 0;
	}
	if (PLAYER_ID() == func_88())
	{
		return 0;
	}
	if (func_86(PLAYER_ID()))
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

bool func_86(int iParam0)
{
	return func_87(iParam0, 20);
}

bool func_87(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

int func_88()
{
	return -1;
}

void func_89()
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

void func_90()
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

int func_91()
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

void func_92()
{
	if (func_27(14))
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
		Global_19486 = func_25();
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

void func_93()
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

bool func_94(int iParam0, int iParam1)
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

void func_95(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = iParam5;
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

char* func_96()
{
	char* sVar0;
	
	switch (func_77())
	{
		case 33:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP1_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP1_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP1_TENDC";
					break;
			}
			break;
		
		case 34:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP2_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP2_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP2_TENDC";
					break;
			}
			break;
		
		case 36:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP4_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP4_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP4_TENDC";
					break;
			}
			break;
		
		case 37:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP5_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP5_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP5_TENDC";
					break;
			}
			break;
	}
	return sVar0;
}

int func_97()
{
	int iVar0;
	
	switch (func_25())
	{
		case 0:
			iVar0 = 5;
			break;
		
		case 1:
			iVar0 = 9;
			break;
		
		case 2:
			iVar0 = 8;
			break;
	}
	return iVar0;
}

void func_98(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_99(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_111560.f_9080.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_111560.f_9080.f_99.f_58[iParam0] = iParam1;
}

void func_100(bool bParam0)
{
	if (bParam0)
	{
		func_75(1527885205, 0, func_25(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
	else if (!func_102(3))
	{
		func_75(-224691627, 0, func_25(), 23, 3, 6000, 6000, -1, 50, -1, 0);
	}
	else
	{
		func_75(-224691627, 0, func_25(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
}

int func_101()
{
	if ((func_102(41) && func_102(3)) && func_102(21))
	{
		return 1;
	}
	return 0;
}

int func_102(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111560.f_9080.f_330[iParam0 /*6*/];
}

int func_103()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 33;
	while (iVar1 <= 37)
	{
		if (func_102(iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (func_104(45))
	{
		iVar0++;
	}
	if (iVar0 == 4)
	{
		return 1;
	}
	return 0;
}

int func_104(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111560.f_9080.f_99.f_58[iParam0];
}

void func_105(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	BEGIN_TEXT_COMMAND_PRINT(sParam0);
	END_TEXT_COMMAND_PRINT(iParam1, 1);
}

bool func_106(char* sParam0, int iParam1, int iParam2)
{
	BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
	}
	return END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_107(int iParam0, vector3 vParam1, float fParam2)
{
	return vdist2(GET_ENTITY_COORDS(iParam0, true), vParam1) <= (fParam2 * fParam2);
}

void func_108()
{
	func_215(&iLocal_200, &iLocal_201, &iLocal_71, &iLocal_183, &iLocal_182, vLocal_186, Local_199, 0, 1090519040);
	func_214();
	func_155();
	switch (iLocal_69)
	{
		case 0:
			if (func_122(iLocal_68, bLocal_28))
			{
				if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) == 0)
				{
					if (func_37(iLocal_200))
					{
						if (IS_PED_IN_VEHICLE(IS_PED_IN_VEHICLE(), iLocal_200, 0))
						{
							func_121("PRA_LEVVEH", &iLocal_181);
						}
					}
				}
				iLocal_69 = 1;
			}
			break;
		
		case 1:
			func_120(&iLocal_182, vLocal_186, &iLocal_70, iLocal_71, &iLocal_181, &iLocal_195);
			if (func_113(iLocal_200, vLocal_186, &iLocal_182, iLocal_71, iLocal_70, &iLocal_193, &iLocal_196, &iLocal_192, &iLocal_191, &iLocal_181, 1090519040))
			{
				if (!func_112())
				{
					if (func_67(&uLocal_72, &cLocal_370, &uLocal_205))
					{
						func_63();
						func_58();
					}
				}
				else
				{
					func_99(46, 1);
					func_63();
					func_110(0);
				}
			}
			break;
		
		case 3:
			if (func_37(Local_199))
			{
				if (!IS_PED_IN_VEHICLE(IS_PED_IN_VEHICLE(), Local_199, 0))
				{
					SET_PED_INTO_VEHICLE(SET_PED_INTO_VEHICLE(), Local_199, -1);
				}
				else
				{
					func_109(Local_199, vLocal_186, 126.0705f, 0, 1);
					func_40(1, 1, 1);
					iLocal_69 = 1;
				}
			}
			break;
	}
}

int func_109(int iParam0, vector3 vParam1, float fParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	float fVar1;
	
	bVar0 = false;
	if (func_10(iParam0))
	{
		if (bParam3 == 1)
		{
			fVar1 = 0f;
			bVar0 = GET_GROUND_Z_FOR_3D_COORD(vParam1, &fVar1, 0, 0);
			if (bVar0)
			{
				vParam1.z = fVar1;
			}
		}
		SET_ENTITY_COORDS(iParam0, vParam1, 1, false, 0, iParam4);
		SET_ENTITY_HEADING(iParam0, fParam2);
		if (bParam3)
		{
			return bVar0;
		}
		return 1;
	}
	return 0;
}

void func_110(bool bParam0)
{
	func_111(iLocal_68);
	iLocal_178 = iLocal_68;
	if (!bParam0)
	{
		iLocal_68 = iLocal_178 + 1;
	}
	else if (iLocal_178 > 0)
	{
		iLocal_68 = (iLocal_178 - 1);
	}
	iLocal_181 = 0;
	iLocal_69 = 0;
}

void func_111(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
	}
}

int func_112()
{
	if (func_103())
	{
		if ((func_102(74) || func_102(75)) && func_101())
		{
			return 1;
		}
	}
	return 0;
}

int func_113(int iParam0, vector3 vParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, float fParam10)
{
	float fVar0;
	
	if ((iParam3 == 1 || iParam3 == 2) || iParam3 == 3)
	{
		if (iParam4 == 0)
		{
			if (func_37(iParam0))
			{
				if (!IS_ENTITY_UPSIDEDOWN(iParam0))
				{
					func_121(func_119(func_77()), iParam9);
				}
			}
			if (!IS_ENTITY_AT_COORD(IS_ENTITY_AT_COORD(), vParam1, fParam10, fParam10, 2f, false, true, 2))
			{
				IS_ENTITY_AT_COORD(IS_ENTITY_AT_COORD(), vParam1, fParam10, fParam10, 2f, true, true, 2);
				if (func_106(func_119(func_77()), 0, 0))
				{
					CLEAR_THIS_PRINT(func_119(func_77()));
				}
				*iParam5 = 1;
				func_117(iParam2, vParam1, 1);
			}
			else
			{
				if (*iParam5)
				{
					fVar0 = (fParam10 / 2f);
					if (func_107(PLAYER_PED_ID(), vParam1, fVar0))
					{
						*iParam5 = 0;
						func_116(1077936128, 1);
					}
				}
				func_7(iParam2);
			}
		}
	}
	else if (IS_ENTITY_AT_COORD(iParam0, vParam1, fParam10, fParam10, 2f, false, true, 2))
	{
		if (*iParam7 == -1)
		{
			SET_VEHICLE_DOORS_LOCKED(iParam0, 2);
			return 1;
		}
		if (!*iParam8)
		{
			if (func_106(func_119(func_77()), 0, 0))
			{
				CLEAR_PRINTS();
			}
			*iParam7 = GET_GAME_TIMER();
			*iParam8 = 1;
			SET_VEHICLE_DOORS_LOCKED(iParam0, 2);
		}
		else if ((GET_GAME_TIMER() - *iParam7) > 3000)
		{
			return 1;
		}
	}
	else
	{
		if (GET_VEHICLE_DOOR_LOCK_STATUS(iParam0) == 2)
		{
			SET_VEHICLE_DOORS_LOCKED(iParam0, 1);
		}
		if (!*iParam6)
		{
			if (func_106(func_115(func_77(), 0), 0, 0))
			{
				CLEAR_THIS_PRINT(func_115(func_77(), 0));
			}
			if (!func_106(func_114(func_77()), 0, 0))
			{
				func_105(func_114(func_77()), 7500, 0);
				*iParam6 = 1;
			}
		}
		*iParam5 = 1;
	}
	return 0;
}

char* func_114(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_RETVEH";
			break;
		
		case 34:
			sVar0 = "PRB_RETVEH";
			break;
		
		case 78:
			sVar0 = "PR_RETVEH";
			break;
		
		case 80:
		case 81:
		case 82:
			sVar0 = "PRF_RETVEH";
			break;
	}
	return sVar0;
}

char* func_115(int iParam0, bool bParam1)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_TAKBACK";
			break;
		
		case 34:
			sVar0 = "PRB_TAKBACK";
			break;
		
		case 78:
			sVar0 = "PR_TAKBACK";
			break;
		
		case 80:
		case 81:
		case 82:
			if (!bParam1)
			{
				sVar0 = "PRF_TAKBACK";
			}
			else
			{
				sVar0 = "PRF_GARAGE";
			}
			break;
	}
	return sVar0;
}

int func_116(float fParam0, int iParam1)
{
	int iVar0;
	
	if (!IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
	{
		return 1;
	}
	iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
	if (IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
		if (GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) == GET_PED_IN_VEHICLE_SEAT())
		{
			if (!IS_VEHICLE_STOPPED(iVar0))
			{
				BRING_VEHICLE_TO_HALT(iVar0, fParam0, iParam1, 0);
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	if (IS_PED_STOPPED(IS_PED_STOPPED()))
	{
		return 1;
	}
	if (IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
		if (IS_VEHICLE_STOPPED(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_117(int iParam0, vector3 vParam1, bool bParam2)
{
	if (!DOES_BLIP_EXIST(*iParam0))
	{
		*iParam0 = func_118(vParam1, 5, bParam2);
	}
}

int func_118(vector3 vParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = ADD_BLIP_FOR_COORD(vParam0);
	SET_BLIP_PRIORITY(iVar0, iParam1);
	SET_BLIP_SCALE(iVar0, 1f);
	SET_BLIP_ROUTE(iVar0, bParam2);
	return iVar0;
}

char* func_119(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_LEVVEH";
			break;
		
		case 34:
			sVar0 = "PRB_LEVVEH";
			break;
		
		case 78:
			sVar0 = "PR_LEVVEH";
			break;
		
		case 80:
		case 81:
		case 82:
			sVar0 = "PRF_LEAVE";
			break;
	}
	return sVar0;
}

void func_120(int iParam0, vector3 vParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	switch (*iParam2)
	{
		case 0:
			if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) > 0)
			{
				*iParam2 = 1;
			}
			break;
		
		case 1:
			func_7(iParam0);
			if ((iParam3 == 1 || iParam3 == 2) || iParam3 == 3)
			{
				CLEAR_PRINTS();
				func_105("LOSE_WANTED", 7500, 0);
				*iParam2 = 2;
			}
			break;
		
		case 2:
			if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) == 0)
			{
				CLEAR_PRINTS();
				if ((iParam3 == 1 || iParam3 == 2) || iParam3 == 3)
				{
					func_121(func_115(func_77(), 0), iParam4);
					func_117(iParam0, vParam1, 1);
				}
				else if (iParam3 == 0 && !*iParam5)
				{
					func_105(func_114(func_77()), 7500, 0);
					*iParam5 = 1;
				}
				*iParam2 = 0;
			}
			break;
	}
}

void func_121(char* sParam0, int iParam1)
{
	if (!*iParam1)
	{
		func_105(sParam0, 7500, 0);
		*iParam1 = 1;
	}
}

int func_122(int iParam0, bool bParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				bLocal_28 = false;
				func_40(1, 1, 1);
			}
			else if (func_149(1, vLocal_185, 0))
			{
				if (func_148())
				{
					func_147(33);
					SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trash"), true);
					SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), true);
					SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("s_m_y_garbage"), true);
					iLocal_68 = 2;
					func_7(&iLocal_182);
					func_145(&uLocal_56, 0, 0);
					func_144(190, 1244.338f, -339.3197f, 68.0823f);
					func_142();
					SET_SCENARIO_TYPE_ENABLED("DRIVE", false);
					SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_ATTRACTOR", false);
					SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_PASSENGERS", false);
					SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", false);
					return 1;
				}
				else if (((func_149(2, Local_199.f_1, Local_199.f_4) && func_149(3, Local_197.f_1, Local_197.f_4)) && func_149(4, Local_198.f_1, Local_198.f_4)) && func_141(0))
				{
					func_142();
					func_147(33);
					if (func_341(Local_197))
					{
						func_140(Local_197);
					}
					if (func_341(Local_198))
					{
						func_139(Local_198);
					}
					func_138(Local_199);
					if (func_341(Local_198) && func_341(Local_197))
					{
						func_127(iLocal_187, 1, 0, 1);
					}
					SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trash"), true);
					SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), true);
					SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("s_m_y_garbage"), true);
					if (GET_BLIP_FROM_ENTITY(Local_199) != 0)
					{
						iVar0 = GET_BLIP_FROM_ENTITY(Local_199);
						SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
						func_7(&iVar0);
						SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
					}
					func_125(&iLocal_182, Local_199, 1);
					func_144(190, 1244.338f, -339.3197f, 68.0823f);
					SET_SCENARIO_TYPE_ENABLED("DRIVE", false);
					SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_ATTRACTOR", false);
					SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_PASSENGERS", false);
					SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", false);
					return 1;
				}
			}
			break;
		
		case 1:
			if (bParam1)
			{
				if ((func_149(2, Local_199.f_1, Local_199.f_4) && func_149(3, Local_197.f_1, Local_197.f_4)) && func_149(4, Local_198.f_1, Local_198.f_4))
				{
					func_124(PLAYER_PED_ID(), 1197.861f, -353.011f, 68.0929f, 278.9647f);
					func_123();
					bLocal_28 = false;
					SET_SCENARIO_TYPE_ENABLED("DRIVE", false);
					SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_ATTRACTOR", false);
					SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_PASSENGERS", false);
					SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", false);
					func_40(1, 1, 1);
				}
			}
			else
			{
				func_142();
				return 1;
			}
			break;
		
		case 2:
			if (bParam1)
			{
				if (func_149(2, Local_199.f_1, Local_199.f_4))
				{
					func_123();
					func_142();
					SET_PED_INTO_VEHICLE(SET_PED_INTO_VEHICLE(), Local_199, -1);
					bLocal_28 = false;
					func_40(1, 1, 1);
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (bParam1)
			{
				if (func_149(2, vLocal_186, Local_199.f_4))
				{
					func_123();
					SET_PED_INTO_VEHICLE(SET_PED_INTO_VEHICLE(), Local_199, -1);
					func_142();
					bLocal_28 = false;
					func_40(1, 1, 1);
				}
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_123()
{
	if (iLocal_68 == 1)
	{
		func_140(Local_197);
		func_139(Local_198);
		func_138(Local_199);
		func_127(iLocal_187, 1, 0, 1);
	}
	iLocal_203 = 0;
	iLocal_195 = 0;
	iLocal_196 = 0;
	iLocal_191 = 0;
	iLocal_192 = 0;
	iLocal_193 = 0;
}

void func_124(int iParam0, vector3 vParam1, float fParam2)
{
	if (func_341(iParam0))
	{
		CLEAR_PED_TASKS(iParam0);
	}
	func_109(iParam0, vParam1, fParam2, 0, 1);
}

void func_125(int iParam0, int iParam1, bool bParam2)
{
	if (!DOES_BLIP_EXIST(*iParam0))
	{
		*iParam0 = func_126(iParam1, bParam2, 5);
	}
}

int func_126(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_10(iParam0))
	{
		iVar0 = ADD_BLIP_FOR_ENTITY(iParam0);
		SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		SET_BLIP_PRIORITY(iVar0, iParam2);
		SET_BLIP_SCALE(iVar0, 1f);
	}
	return iVar0;
}

void func_127(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iLocal_41 = iParam0;
	bLocal_50 = iParam1;
	bLocal_49 = iParam2;
	bLocal_51 = iParam3;
	Local_45[0 /*11*/].f_1 = 0;
	Local_45[1 /*11*/].f_1 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_41 - 1))
	{
		Local_46[iVar0 /*25*/].f_18 = 0;
		iVar0++;
	}
	fLocal_47 = 0f;
	func_129();
	Local_45[1 /*11*/].f_7 = 3;
	Local_45[1 /*11*/].f_5 = 0;
	Local_45[1 /*11*/].f_10 = 1;
	Local_45[1 /*11*/].f_2 = 1500;
	Local_45[1 /*11*/].f_3 = 500;
	Local_45[0 /*11*/].f_5 = 0;
	Local_45[0 /*11*/].f_10 = 0;
	Local_45[0 /*11*/].f_2 = 1000;
	Local_45[0 /*11*/].f_3 = 100;
	ADD_RELATIONSHIP_GROUP("Enemies", &iLocal_40);
	SET_PED_RELATIONSHIP_GROUP_HASH(Local_45[0 /*11*/], iLocal_40);
	SET_PED_RELATIONSHIP_GROUP_HASH(Local_45[1 /*11*/], iLocal_40);
	SET_ENTITY_IS_TARGET_PRIORITY(Local_45[0 /*11*/], 1, 0);
	SET_ENTITY_IS_TARGET_PRIORITY(Local_45[1 /*11*/], 1, 0);
	func_128(1.9f, 1.9f, 8f, 0f, 0f, 0f);
}

void func_128(vector3 vParam0, vector3 vParam1)
{
	Local_42.f_8 = { vParam0 };
	Local_42.f_11 = { vParam1 };
	Local_42.f_1 = 4;
}

void func_129()
{
	if (!IS_PED_IN_VEHICLE(Local_45[0 /*11*/], iLocal_43, 0))
	{
		TASK_FOLLOW_NAV_MESH_TO_COORD(Local_45[0 /*11*/], TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_43, func_137(1)), 1f, -1, 1048576000, 0, 1193033728);
		Local_45[0 /*11*/].f_7 = 1;
	}
	else
	{
		func_130(1);
	}
}

void func_130(bool bParam0)
{
	if (!IS_VEHICLE_SEAT_FREE(iLocal_43, 0, 0))
	{
		func_131(bParam0);
		if (iLocal_48 != (iLocal_41 - 1))
		{
			if (iLocal_48 == 4)
			{
				TASK_VEHICLE_GOTO_NAVMESH(Local_45[0 /*11*/], iLocal_43, Local_46[iLocal_48 /*25*/], 15f, 2883755, Local_46[iLocal_48 /*25*/].f_6);
			}
			else
			{
				TASK_VEHICLE_DRIVE_TO_COORD(Local_45[0 /*11*/], iLocal_43, Local_46[iLocal_48 /*25*/], 15f, 0, 0, 2883755, Local_46[iLocal_48 /*25*/].f_6, Local_46[iLocal_48 /*25*/].f_7);
			}
			Local_45[0 /*11*/].f_8 = Local_45[0 /*11*/].f_7;
			Local_45[0 /*11*/].f_7 = 4;
		}
		else
		{
			TASK_VEHICLE_DRIVE_WANDER(Local_45[0 /*11*/], iLocal_43, 15f, 786599);
			Local_45[0 /*11*/].f_8 = Local_45[0 /*11*/].f_7;
			Local_45[0 /*11*/].f_7 = 10;
		}
	}
	else
	{
		Local_45[0 /*11*/].f_8 = Local_45[0 /*11*/].f_7;
		Local_45[0 /*11*/].f_7 = 7;
	}
}

void func_131(bool bParam0)
{
	if (iLocal_48 != -1)
	{
		if (!func_136(Local_46[iLocal_48 /*25*/].f_11) && !func_136(Local_46[iLocal_48 /*25*/].f_14))
		{
			SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_46[iLocal_48 /*25*/].f_11 - Local_46[iLocal_48 /*25*/].f_14, Local_46[iLocal_48 /*25*/].f_11 + Local_46[iLocal_48 /*25*/].f_14, true, 1);
		}
	}
	if (!bParam0)
	{
		func_134();
	}
	else
	{
		iLocal_48 = func_132();
	}
	if (iLocal_48 != -1)
	{
		if (!func_136(Local_46[iLocal_48 /*25*/].f_11) && !func_136(Local_46[iLocal_48 /*25*/].f_14))
		{
			SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_46[iLocal_48 /*25*/].f_11 - Local_46[iLocal_48 /*25*/].f_14, Local_46[iLocal_48 /*25*/].f_11 + Local_46[iLocal_48 /*25*/].f_14, false, 1);
		}
	}
}

int func_132()
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	float fVar4[21];
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	
	if (func_37(iLocal_43))
	{
		vVar1 = { GET_ENTITY_COORDS(iLocal_43, true) };
		iVar2 = 0;
		while (iVar2 <= (iLocal_41 - 1))
		{
			fVar5 = GET_DISTANCE_BETWEEN_COORDS(vVar1, Local_46[iVar2 /*25*/], true);
			if (!func_136(Local_46[iVar2 /*25*/]) && fVar5 > 25f)
			{
				fVar4[iVar2] = fVar5;
			}
			else
			{
				fVar4[iVar2] = -1f;
			}
			iVar2++;
		}
		fVar6 = fVar4[0];
		iVar2 = 0;
		while (iVar2 <= (iLocal_41 - 1))
		{
			if (fVar4[iVar2] != -1f)
			{
				if (fVar4[iVar2] < fVar6)
				{
					fVar6 = fVar4[iVar2];
					iVar0 = iVar2;
				}
			}
			iVar2++;
		}
		fVar7 = func_133(Local_46[iVar0 /*25*/] - vVar1, GET_ENTITY_FORWARD_VECTOR(iLocal_43));
		iVar3 = iVar0;
		iVar8 = 0;
		while (fVar7 < 0f && iVar8 < 40)
		{
			iVar3++;
			if (iVar3 >= 21)
			{
				iVar3 = 0;
			}
			vVar1 = { GET_ENTITY_COORDS(iLocal_43, true) };
			fVar7 = func_133(Local_46[iVar3 /*25*/] - vVar1, GET_ENTITY_FORWARD_VECTOR(iLocal_43));
			iVar8++;
		}
		if (iVar8 >= 40)
		{
			iVar3 = (iLocal_41 - 1);
		}
	}
	iVar0 = iVar3;
	return iVar0;
}

float func_133(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

void func_134()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (bLocal_50)
	{
		while (Local_46[iLocal_48 /*25*/].f_18 && iVar0 != -1)
		{
			iLocal_48++;
			if (iLocal_48 >= (iLocal_41 - 1))
			{
				iVar0 = -1;
				iLocal_48 = (iLocal_41 - 1);
			}
		}
		if (iLocal_48 == (iLocal_41 - 1))
		{
			if (bLocal_49)
			{
				iLocal_48 = 0;
				iVar0 = 0;
				while (iVar0 <= (iLocal_41 - 1))
				{
					Local_46[iVar0 /*25*/].f_18 = 0;
					iVar0++;
				}
			}
			else
			{
				iLocal_48 = (iLocal_41 - 1);
				return;
			}
		}
	}
	else
	{
		iVar1 = 0;
		iVar0 = 0;
		while (iVar0 <= (iLocal_41 - 1))
		{
			if (Local_46[iVar0 /*25*/].f_18)
			{
				iVar1++;
			}
			iVar0++;
		}
		if (iVar1 == (iLocal_41 - 1))
		{
			iLocal_48 = (iLocal_41 - 1);
		}
		else if (iVar1 == iLocal_41)
		{
			if (bLocal_49)
			{
				iVar0 = 0;
				while (iVar0 <= (iLocal_41 - 1))
				{
					Local_46[iVar0 /*25*/].f_18 = 0;
					iVar0++;
				}
				iLocal_48 = func_135();
			}
			else
			{
				iLocal_48 = -1;
				return;
			}
		}
		else
		{
			iLocal_48 = func_135();
		}
	}
}

int func_135()
{
	int iVar0;
	
	iVar0 = GET_RANDOM_INT_IN_RANGE(0, (iLocal_41 - 1));
	while (Local_46[iVar0 /*25*/].f_18)
	{
		iVar0 = GET_RANDOM_INT_IN_RANGE(0, (iLocal_41 - 1));
	}
	return iVar0;
}

int func_136(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_137(bool bParam0)
{
	vector3 vVar0;
	int iVar1;
	
	if (!bParam0)
	{
		iVar1 = GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_43, "wheel_rf");
	}
	else
	{
		iVar1 = GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_43, "wheel_lf");
	}
	vVar0 = { GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_43, iVar1) };
	vVar0 = { GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_43, vVar0) };
	if (!bParam0)
	{
		vVar0 = { vVar0 + Vector(0.5f, 0f, 1f) };
	}
	else
	{
		vVar0 = { vVar0 + Vector(0.5f, 0f, -1f) };
	}
	return vVar0;
}

void func_138(int iParam0)
{
	if (func_37(iParam0))
	{
		iLocal_43 = iParam0;
	}
}

void func_139(int iParam0)
{
	if (func_341(iParam0))
	{
		Local_45[1 /*11*/] = iParam0;
	}
}

void func_140(int iParam0)
{
	if (func_341(iParam0))
	{
		Local_45[0 /*11*/] = iParam0;
	}
}

int func_141(bool bParam0)
{
	REQUEST_ANIM_DICT("missfbi4prepp1");
	REQUEST_ANIM_SET("missfbi4prepp1_garbageman");
	if (bParam0)
	{
		while (!HAS_ANIM_DICT_LOADED("missfbi4prepp1") && !HAS_ANIM_DICT_LOADED("missfbi4prepp1_garbageman"))
		{
			wait(0);
		}
		return 1;
	}
	else if (HAS_ANIM_DICT_LOADED("missfbi4prepp1") && HAS_ANIM_DICT_LOADED("missfbi4prepp1_garbageman"))
	{
		return 1;
	}
	return 0;
}

void func_142()
{
	func_143(&uLocal_205);
}

void func_143(var uParam0)
{
	int iVar0;
	char* sVar1;
	
	switch (func_25())
	{
		case 0:
			iVar0 = 0;
			sVar1 = "MICHAEL";
			break;
		
		case 1:
			iVar0 = 1;
			sVar1 = "FRANKLIN";
			break;
		
		case 2:
			iVar0 = 2;
			sVar1 = "TREVOR";
			break;
	}
	func_98(uParam0, iVar0, PLAYER_PED_ID(), sVar1, 0, 1);
}

void func_144(int iParam0, vector3 vParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if ((vParam1.x == Global_31111[iVar0 /*23*/][0 /*3*/] && vParam1.y == Global_31111[iVar0 /*23*/][0 /*3*/].f_1) && vParam1.z == Global_31111[iVar0 /*23*/][0 /*3*/].f_2)
	{
		return;
	}
	Global_31108 = 1;
	SET_BIT(&(Global_31111[iVar0 /*23*/].f_11), 18);
	Global_31111[iVar0 /*23*/][0 /*3*/] = { vParam1 };
	Global_37161 = 1;
}

void func_145(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (IS_BIT_SET(Global_2531497.f_4591, 26))
		{
			return;
		}
	}
	if (IS_GAMEPLAY_HINT_ACTIVE())
	{
		STOP_GAMEPLAY_HINT(iParam2);
		ANIMPOSTFX_STOP("FocusIn");
		STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			ANIMPOSTFX_PLAY("FocusOut", 0, 0);
			PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	SET_CINEMATIC_BUTTON_ACTIVE(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (IS_STRING_NULL(sVar0))
	{
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!IS_STRING_NULL(uParam0->f_3))
	{
		if (func_146(uParam0->f_3))
		{
			CLEAR_HELP(1);
		}
	}
	if (!IS_STRING_NULL(sVar0))
	{
		if (func_146(sVar0))
		{
			CLEAR_HELP(1);
		}
	}
}

int func_146(char* sParam0)
{
	BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_147(int iParam0)
{
	if (Global_95621 != -1)
	{
		if (iParam0 == Global_95621)
		{
			Global_95625 = 1;
			return;
		}
	}
}

int func_148()
{
	if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
	{
		if (IS_VEHICLE_MODEL(IS_VEHICLE_MODEL(IS_VEHICLE_MODEL(), 0), joaat("trash")))
		{
			SET_ENTITY_AS_MISSION_ENTITY(SET_ENTITY_AS_MISSION_ENTITY(SET_ENTITY_AS_MISSION_ENTITY(), 0), true, 0);
			iLocal_200 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
			if (func_37(iLocal_200))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_149(int iParam0, vector3 vParam1, float fParam2)
{
	switch (iParam0)
	{
		case 0:
			if (func_154(vParam1, vLocal_185, 1056964608, 0) && fParam2 == 0f)
			{
				return 1;
			}
			break;
		
		case 1:
			REQUEST_ADDITIONAL_TEXT(sLocal_180, 0);
			if (HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_37(Global_95196[0]))
			{
				SET_ENTITY_AS_MISSION_ENTITY(Global_95196[0], true, 1);
				Local_199 = Global_95196[0];
				if (func_37(Local_199))
				{
					func_36(Local_199, 0);
					SET_VEHICLE_HAS_STRONG_AXLES(Local_199, true);
					_SET_ENTITY_SOMETHING(Local_199, true);
					return 1;
				}
			}
			else if (func_153(&Local_199, Local_199.f_5, Local_199.f_1, Local_199.f_4, 1))
			{
				func_36(Local_199, 0);
				SET_VEHICLE_HAS_STRONG_AXLES(Local_199, true);
				_SET_ENTITY_SOMETHING(Local_199, true);
				return 1;
			}
			break;
		
		case 3:
			if (DOES_ENTITY_EXIST(Global_95196.f_9[0]))
			{
				if (!IS_PED_DEAD_OR_DYING(Global_95196.f_9[0], 1))
				{
					SET_ENTITY_AS_MISSION_ENTITY(Global_95196.f_9[0], true, 1);
					Local_197 = Global_95196.f_9[0];
					if (func_341(Local_197))
					{
						SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_197, true);
						SET_PED_CONFIG_FLAG(Local_197, 170, false);
						SET_PED_FLEE_ATTRIBUTES(Local_197, 65536, true);
						SET_PED_COMBAT_ATTRIBUTES(Local_197, 50, true);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (func_150(&Local_197, Local_197.f_5, Local_197.f_1, Local_197.f_4, 1, 0, 1, 1))
			{
				if (func_37(Local_199))
				{
					SET_PED_INTO_VEHICLE(Local_197, Local_199, -1);
					SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_197, true);
					SET_PED_CONFIG_FLAG(Local_197, 170, false);
					SET_PED_FLEE_ATTRIBUTES(Local_197, 65536, true);
					SET_PED_COMBAT_ATTRIBUTES(Local_197, 50, true);
					return 1;
				}
			}
			break;
		
		case 4:
			if (DOES_ENTITY_EXIST(Global_95196.f_9[1]))
			{
				if (!IS_PED_DEAD_OR_DYING(Global_95196.f_9[1], 1))
				{
					SET_ENTITY_AS_MISSION_ENTITY(Global_95196.f_9[1], true, 1);
					Local_198 = Global_95196.f_9[1];
					if (func_341(Local_198))
					{
						SET_PED_CONFIG_FLAG(Local_198, 170, false);
						SET_PED_FLEE_ATTRIBUTES(Local_198, 65536, true);
						SET_PED_COMBAT_ATTRIBUTES(Local_198, 50, true);
						SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_198, true);
						SET_ENTITY_LOAD_COLLISION_FLAG(Local_198, true, 1);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (func_150(&Local_198, Local_198.f_5, Local_198.f_1, Local_198.f_4, 1, 0, 1, 1))
			{
				if (func_37(Local_199))
				{
					SET_PED_INTO_VEHICLE(Local_198, Local_199, 0);
					SET_PED_CONFIG_FLAG(Local_198, 170, false);
					SET_PED_FLEE_ATTRIBUTES(Local_198, 65536, true);
					SET_PED_COMBAT_ATTRIBUTES(Local_198, 50, true);
					SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_198, true);
					SET_ENTITY_LOAD_COLLISION_FLAG(Local_198, true, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_150(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!DOES_ENTITY_EXIST(*iParam0))
	{
		if (func_152(iParam1, "Loading", 0))
		{
			*iParam0 = CREATE_PED(26, iParam1, vParam2, fParam3, 1, true);
			if (func_341(*iParam0))
			{
				if (bParam5)
				{
					FREEZE_ENTITY_POSITION(*iParam0, true);
				}
				if (bParam6)
				{
					SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, bParam6);
				}
				if (!bParam7)
				{
					SET_PED_CAN_BE_TARGETTED(*iParam0, bParam7);
				}
				if (bParam4)
				{
					func_151(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else if (func_341(*iParam0))
	{
		return 1;
	}
	return 0;
}

void func_151(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (HAS_MODEL_LOADED(iParam0))
		{
			SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
	else
	{
		SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
	}
}

int func_152(int iParam0, char* sParam1, int iParam2)
{
	REQUEST_MODEL(iParam0);
	if (!IS_STRING_NULL_OR_EMPTY(sParam1) && iParam2 != -1)
	{
	}
	if (HAS_MODEL_LOADED(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_153(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)
{
	if (!DOES_ENTITY_EXIST(*iParam0))
	{
		if (func_152(iParam1, "Loading", 0))
		{
			*iParam0 = CREATE_VEHICLE(iParam1, vParam2, fParam3, true, true, false);
			if (DOES_ENTITY_EXIST(*iParam0))
			{
				if (!IS_ENTITY_A_MISSION_ENTITY(*iParam0))
				{
					SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, 0);
				}
				SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 1084227584);
				if (bParam4)
				{
					func_151(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else
	{
		if (func_37(*iParam0))
		{
			SET_ENTITY_COORDS(*iParam0, vParam2, 1, false, 0, 1);
			SET_ENTITY_HEADING(*iParam0, fParam3);
		}
		if (!IS_ENTITY_A_MISSION_ENTITY(*iParam0))
		{
			SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, 0);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_154(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (ABSF((vParam0.x - vParam1.x)) <= fParam2)
		{
			if (ABSF((vParam0.y - vParam1.y)) <= fParam2)
			{
				if (ABSF((vParam0.z - vParam1.z)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (ABSF((vParam0.x - vParam1.x)) <= fParam2)
	{
		if (ABSF((vParam0.y - vParam1.y)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

void func_155()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		func_156(&(Local_45[iVar0 /*11*/]), iVar0);
		iVar0++;
	}
}

void func_156(int iParam0, int iParam1)
{
	if (func_341(*iParam0))
	{
		func_202(iParam0, iParam1, 0);
		if (IS_ENTITY_PLAYING_ANIM(*iParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 3))
		{
			if (GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "missfbi4prepp1", "_bag_drop_garbage_man") >= 0.172f)
			{
				if (func_10(Local_46[iLocal_48 /*25*/].f_17) && IS_ENTITY_ATTACHED(Local_46[iLocal_48 /*25*/].f_17))
				{
					RESET_PED_MOVEMENT_CLIPSET(*iParam0, 1048576000);
					RESET_PED_WEAPON_MOVEMENT_CLIPSET(*iParam0);
					if (iLocal_48 <= 20 && iLocal_48 != -1)
					{
						Local_46[iLocal_48 /*25*/].f_18 = 1;
						iParam0->f_9 = 0;
					}
					DETACH_ENTITY(Local_46[iLocal_48 /*25*/].f_17, 1, false);
					APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_46[iLocal_48 /*25*/].f_17, 1, APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(*iParam0), 0, 1, 1, 0);
				}
			}
		}
		switch (iParam0->f_5)
		{
			case 0:
				if (iParam1 == 0)
				{
					func_199();
					func_198(iParam0);
				}
				func_185(iParam0);
				break;
			
			case 1:
				func_158(iParam0);
				break;
		}
	}
	else
	{
		if (func_10(Local_46[iLocal_48 /*25*/].f_17))
		{
			if (IS_ENTITY_ATTACHED(Local_46[iLocal_48 /*25*/].f_17))
			{
				DETACH_ENTITY(Local_46[iLocal_48 /*25*/].f_17, 1, false);
				APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_46[iLocal_48 /*25*/].f_17, 1, APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(*iParam0), 0, 1, 1, 0);
			}
		}
		func_7(&(iParam0->f_4));
		if (DOES_ENTITY_EXIST(*iParam0))
		{
			if (!func_157(PLAYER_PED_ID(), *iParam0, 150f, 1) && !bLocal_52)
			{
				func_5(iParam0, 1, 0, 1);
			}
		}
	}
}

bool func_157(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	return vdist2(GET_ENTITY_COORDS(iParam0, bParam3), GET_ENTITY_COORDS(iParam1, bParam3)) <= (fParam2 * fParam2);
}

void func_158(int iParam0)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0->f_6)
	{
		case 5:
			if ((GET_GAME_TIMER() - iParam0->f_1) > iParam0->f_3)
			{
				if (func_184(*iParam0, 780511057))
				{
					CLEAR_PED_TASKS(*iParam0);
				}
				TASK_SMART_FLEE_PED(*iParam0, TASK_SMART_FLEE_PED(), 30f, -1, 0, 0);
				iParam0->f_6 = 6;
				iParam0->f_1 = GET_GAME_TIMER();
			}
			break;
		
		case 21:
			if (IS_PED_ARMED(IS_PED_ARMED(), 6))
			{
				if (func_177(*iParam0, PLAYER_PED_ID(), 1126825984, 1, 250, 7))
				{
					func_176(iParam0, 1);
					return;
				}
			}
			if ((GET_GAME_TIMER() - iParam0->f_1) > iParam0->f_3)
			{
				if (!IS_PED_IN_ANY_VEHICLE(*iParam0, 0))
				{
					TASK_PUT_PED_DIRECTLY_INTO_MELEE(*iParam0, TASK_PUT_PED_DIRECTLY_INTO_MELEE(), 8f, -1f, 10f, 0);
				}
				else
				{
					OPEN_SEQUENCE_TASK(&iVar0);
					TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK_COMBAT_PED(0, TASK_COMBAT_PED(), 0, 16);
					CLOSE_SEQUENCE_TASK(iVar0);
					TASK_PERFORM_SEQUENCE(*iParam0, iVar0);
					CLEAR_SEQUENCE_TASK(&iVar0);
				}
				if (!DOES_BLIP_EXIST(iParam0->f_4))
				{
					iParam0->f_4 = func_173(*iParam0, 1, 145);
				}
				iParam0->f_6 = 22;
				iParam0->f_1 = GET_GAME_TIMER();
			}
			break;
		
		case 10:
			if ((GET_GAME_TIMER() - iParam0->f_1) > iParam0->f_3)
			{
				if (IS_PED_IN_ANY_VEHICLE(*iParam0, 0))
				{
					SET_PED_RESET_FLAG(*iParam0, 120, true);
					iParam0->f_6 = 12;
					iParam0->f_1 = GET_GAME_TIMER();
				}
				else if (!func_184(*iParam0, 474215631))
				{
					if (func_184(*iParam0, 780511057))
					{
						CLEAR_PED_TASKS(*iParam0);
					}
					TASK_COWER(*iParam0, -1);
					iParam0->f_6 = 12;
					iParam0->f_1 = GET_GAME_TIMER();
				}
			}
			break;
		
		case 3:
			if ((GET_GAME_TIMER() - iParam0->f_1) > iParam0->f_3)
			{
				TASK_USE_MOBILE_PHONE(*iParam0, 1, 1);
				TASK_SMART_FLEE_PED(*iParam0, TASK_SMART_FLEE_PED(), 500f, -1, 0, 1);
				iParam0->f_1 = GET_GAME_TIMER();
				iParam0->f_6 = 4;
				iParam0->f_5 = 1;
			}
			break;
		
		case 11:
			func_172(iParam0);
			if ((GET_GAME_TIMER() - iParam0->f_1) > 5000)
			{
				if (!func_184(*iParam0, 713668775))
				{
					if (DOES_ENTITY_EXIST(Local_45[func_171(iParam0->f_10) /*11*/]))
					{
						TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, vLocal_54, 1f, -1, 2f, 0, 1193033728);
					}
				}
				iParam0->f_1 = GET_GAME_TIMER();
				iParam0->f_6 = 23;
				iParam0->f_5 = 1;
			}
			break;
		
		case 18:
			if (!func_184(*iParam0, -2017877118))
			{
				OPEN_SEQUENCE_TASK(&iVar1);
				if (func_170(GET_ENTITY_COORDS(*iParam0, true), GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true)) > 1.5f)
				{
					TASK_TURN_PED_TO_FACE_COORD(0, TASK_TURN_PED_TO_FACE_COORD(TASK_TURN_PED_TO_FACE_COORD(), true), 0);
				}
				TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 6000, 1);
				CLOSE_SEQUENCE_TASK(iVar1);
				TASK_PERFORM_SEQUENCE(*iParam0, iVar1);
				CLEAR_SEQUENCE_TASK(&iVar1);
				iParam0->f_5 = 1;
				iParam0->f_6 = 20;
				iParam0->f_1 = GET_GAME_TIMER();
			}
			break;
		
		case 19:
			func_172(iParam0);
			if (!func_184(*iParam0, -2017877118))
			{
				TASK_START_SCENARIO_IN_PLACE(*iParam0, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 6000, 1);
				iParam0->f_5 = 1;
				iParam0->f_6 = 20;
				iParam0->f_1 = GET_GAME_TIMER();
			}
			break;
		
		case 1:
			if (!IS_PED_IN_VEHICLE(*iParam0, iLocal_43, 0))
			{
				func_168(iParam0);
			}
			break;
		
		case 2:
			if (!IS_PED_SITTING_IN_ANY_VEHICLE(*iParam0) && (IS_PED_SITTING_IN_ANY_VEHICLE() - iParam0->f_1) > 3000)
			{
				func_168(iParam0);
			}
			break;
		
		case 4:
			if ((GET_GAME_TIMER() - iParam0->f_1) > 8000)
			{
				TASK_SMART_FLEE_PED(*iParam0, TASK_SMART_FLEE_PED(), 500f, -1, 0, 0);
				if (!iLocal_53)
				{
					if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) == 0)
					{
						SET_PLAYER_WANTED_LEVEL(SET_PLAYER_WANTED_LEVEL(), 2, 0);
						SET_PLAYER_WANTED_LEVEL_NOW(SET_PLAYER_WANTED_LEVEL_NOW(), 0);
						iLocal_53 = 1;
					}
				}
				TASK_USE_MOBILE_PHONE(*iParam0, 0, 1);
				iParam0->f_1 = GET_GAME_TIMER();
				iParam0->f_6 = 8;
			}
			else if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) > 1)
			{
				TASK_USE_MOBILE_PHONE(*iParam0, 0, 1);
				iParam0->f_1 = GET_GAME_TIMER();
				iParam0->f_6 = 8;
			}
			break;
		
		case 6:
			if ((GET_GAME_TIMER() - iParam0->f_1) > iParam0->f_2)
			{
				if (!func_157(*iParam0, PLAYER_PED_ID(), 15f, 1))
				{
					func_7(&(iParam0->f_4));
					iParam0->f_6 = 7;
					iParam0->f_1 = GET_GAME_TIMER();
				}
			}
			break;
		
		case 7:
			if (IS_PED_IN_VEHICLE(*iParam0, iLocal_43, 1))
			{
				if (iParam0->f_6 != 4 && iParam0->f_6 != 1)
				{
					if (func_166())
					{
						if (func_341(*iParam0))
						{
							CLEAR_PED_TASKS(*iParam0);
							TASK_SMART_FLEE_PED(*iParam0, TASK_SMART_FLEE_PED(), 500f, -1, 0, 1);
							iParam0->f_6 = 1;
						}
					}
				}
				if (!func_157(*iParam0, PLAYER_PED_ID(), 120f, 1))
				{
					func_5(iParam0, 1, 0, 1);
				}
			}
			else
			{
				func_168(iParam0);
			}
			break;
		
		case 8:
			if (!func_157(*iParam0, PLAYER_PED_ID(), 120f, 1))
			{
				func_5(iParam0, 1, 0, 1);
			}
			break;
		
		case 9:
			if (IS_PED_BEING_JACKED(*iParam0))
			{
				func_176(iParam0, 1);
				return;
			}
			if ((GET_GAME_TIMER() - iParam0->f_1) > iParam0->f_2 || !func_184(*iParam0, 2104565373))
			{
				func_163(iParam0);
			}
			break;
		
		case 12:
			if ((GET_GAME_TIMER() - iParam0->f_1) >= iParam0->f_2)
			{
				TASK_SMART_FLEE_PED(*iParam0, TASK_SMART_FLEE_PED(), 500f, -1, 0, 1);
				iParam0->f_6 = 5;
			}
			else
			{
				SET_PED_RESET_FLAG(*iParam0, 120, true);
			}
			break;
		
		case 13:
			if ((GET_GAME_TIMER() - iParam0->f_1) >= iParam0->f_2)
			{
				if (!func_157(*iParam0, PLAYER_PED_ID(), 15f, 1))
				{
					func_163(iParam0);
					iParam0->f_1 = GET_GAME_TIMER();
				}
				else if (func_177(Local_45[func_171(iParam0->f_10) /*11*/], *iParam0, 1126825984, 1, 250, 7))
				{
					func_176(iParam0, 0);
				}
				else
				{
					func_162(iParam0);
					iParam0->f_1 = GET_GAME_TIMER();
				}
			}
			break;
		
		case 15:
			if ((GET_GAME_TIMER() - iParam0->f_1) >= iParam0->f_2)
			{
				if (!func_157(*iParam0, PLAYER_PED_ID(), 15f, 1))
				{
					func_163(iParam0);
					iParam0->f_1 = GET_GAME_TIMER();
				}
				else if (func_177(Local_45[func_171(iParam0->f_10) /*11*/], *iParam0, 1126825984, 1, 250, 7))
				{
					func_176(iParam0, 0);
				}
				else
				{
					func_162(iParam0);
					iParam0->f_1 = GET_GAME_TIMER();
				}
			}
			break;
		
		case 16:
			if (IS_PED_BEING_JACKED(*iParam0))
			{
				func_176(iParam0, 1);
				return;
			}
			if ((GET_GAME_TIMER() - iLocal_55) >= 9000)
			{
				if (!func_161(iParam0))
				{
					func_163(iParam0);
					iParam0->f_1 = GET_GAME_TIMER();
				}
				else
				{
					iParam0->f_1 = GET_GAME_TIMER();
					iParam0->f_5 = 1;
					iParam0->f_6 = 16;
				}
			}
			else if ((GET_GAME_TIMER() - iLocal_55) >= 5000 && (GET_GAME_TIMER() - iLocal_55) <= 5500)
			{
				if (IS_PED_IN_ANY_VEHICLE(*iParam0, 0))
				{
					if (IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(*iParam0))
					{
						CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(*iParam0);
					}
				}
			}
			break;
		
		case 14:
			if ((GET_GAME_TIMER() - iParam0->f_1) >= iParam0->f_2)
			{
				if (!func_157(*iParam0, PLAYER_PED_ID(), 15f, 1))
				{
					func_163(iParam0);
					iParam0->f_1 = GET_GAME_TIMER();
				}
				else if (func_177(Local_45[func_171(iParam0->f_10) /*11*/], *iParam0, 1126825984, 1, 250, 7))
				{
					func_176(iParam0, 0);
				}
				else
				{
					func_162(iParam0);
					iParam0->f_1 = GET_GAME_TIMER();
				}
			}
			break;
		
		case 17:
			if ((GET_GAME_TIMER() - iParam0->f_1) >= iParam0->f_2)
			{
				if (!func_157(*iParam0, PLAYER_PED_ID(), 15f, 1))
				{
					func_163(iParam0);
					iParam0->f_1 = GET_GAME_TIMER();
				}
				else if (func_177(Local_45[func_171(iParam0->f_10) /*11*/], *iParam0, 1126825984, 1, 250, 7))
				{
					func_176(iParam0, 0);
				}
				else
				{
					func_162(iParam0);
					iParam0->f_1 = GET_GAME_TIMER();
				}
			}
			break;
		
		case 20:
			if (IS_PED_ARMED(IS_PED_ARMED(), 6) && !IS_PED_ARMED(IS_PED_ARMED(), 0))
			{
				if (func_177(*iParam0, PLAYER_PED_ID(), 1126825984, 1, 250, 7))
				{
					func_176(iParam0, 1);
					return;
				}
			}
			if ((GET_GAME_TIMER() - iParam0->f_1) >= 6000)
			{
				if (!IS_ENTITY_IN_ANGLED_AREA(*iParam0, IS_ENTITY_IN_ANGLED_AREA(iLocal_43, 5f, 0f, -2f), IS_ENTITY_IN_ANGLED_AREA(iLocal_43, true) + Vector(2f, 0f, 0f), 9f, 0, true, 0))
				{
					func_163(iParam0);
				}
				else
				{
					func_168(iParam0);
					func_168(&(Local_45[func_171(iParam0->f_10) /*11*/]));
				}
				iParam0->f_1 = GET_GAME_TIMER();
			}
			func_172(iParam0);
			break;
		
		case 22:
			if (IS_PED_ARMED(IS_PED_ARMED(), 6))
			{
				if (func_177(*iParam0, PLAYER_PED_ID(), 1126825984, 1, 250, 7))
				{
					func_176(iParam0, 1);
					return;
				}
			}
			if ((GET_GAME_TIMER() - iParam0->f_1) >= iParam0->f_2)
			{
				if (!func_157(*iParam0, PLAYER_PED_ID(), 15f, 1))
				{
					func_163(iParam0);
					iParam0->f_1 = GET_GAME_TIMER();
					return;
				}
				else
				{
					func_162(iParam0);
					iParam0->f_1 = GET_GAME_TIMER();
				}
			}
			break;
		
		case 23:
			func_202(iParam0, iParam0->f_10, 1);
			func_172(iParam0);
			if (func_107(*iParam0, vLocal_54, 2f))
			{
				if (func_159(*iParam0, vLocal_54, 1126825984, 0))
				{
					CLEAR_PED_TASKS(*iParam0);
					iParam0->f_6 = 19;
					iParam0->f_5 = 1;
					iParam0->f_1 = GET_GAME_TIMER();
				}
			}
			break;
	}
}

int func_159(int iParam0, vector3 vParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_160(vParam1 - GET_ENTITY_COORDS(iParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		vVar1 = { GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	else
	{
		vVar1 = { func_160(GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_133(vVar1, vVar0);
	if (fVar2 <= cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

Vector3 func_160(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

int func_161(int iParam0)
{
	if (IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), IS_ENTITY_IN_ANGLED_AREA(iLocal_43, 0f, 10f, -2f), IS_ENTITY_IN_ANGLED_AREA(iLocal_43, 0f, 3f, 2f), 5f, 0, true, 0) && IS_ENTITY_IN_ANGLED_AREA(*iParam0))
	{
		return 1;
	}
	return 0;
}

void func_162(int iParam0)
{
	int iVar0;
	
	if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
	{
		iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
		if (func_37(iVar0))
		{
			if (!_0x639431E895B9AA57(*iParam0, iVar0, -1, 0, false))
			{
				iParam0->f_6 = 18;
				iParam0->f_1 = GET_GAME_TIMER();
			}
		}
	}
}

void func_163(int iParam0)
{
	SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_40, 1862763509);
	switch (iParam0->f_8)
	{
		case 4:
			break;
		
		case 10:
			break;
		
		case 8:
			func_129();
			break;
		
		case 3:
			if (!func_184(*iParam0, 242628503))
			{
				if (iLocal_48 <= 20 && iLocal_48 != -1)
				{
					Local_46[iLocal_48 /*25*/].f_18 = 1;
				}
				if (!IS_PED_IN_VEHICLE(*iParam0, iLocal_43, 0))
				{
					if (iParam0->f_10 == 0)
					{
						TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_43, func_137(1)), 1f, -1, 1048576000, 0, 1193033728);
						iParam0->f_7 = 1;
					}
					else
					{
						TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_43, func_137(0)), 1f, -1, 1048576000, 0, 1193033728);
						iParam0->f_7 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (!IS_PED_IN_VEHICLE(*iParam0, iLocal_43, 0))
			{
				if (iParam0->f_10 == 0)
				{
					TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_43, func_137(1)), 1f, -1, 1048576000, 0, 1193033728);
					iParam0->f_7 = 1;
				}
				else
				{
					TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_43, func_137(0)), 1f, -1, 1048576000, 0, 1193033728);
					iParam0->f_7 = 1;
				}
			}
			break;
		
		case 9:
			if (!Local_46[iLocal_48 /*25*/].f_18)
			{
				if (iParam0->f_9 == 1)
				{
					func_164(iParam0);
				}
				else if (iParam0->f_10 == 0)
				{
					TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_43, func_137(1)), 1f, -1, 1048576000, 0, 1193033728);
					iParam0->f_7 = 1;
				}
				else
				{
					TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_43, func_137(0)), 1f, -1, 1048576000, 0, 1193033728);
					iParam0->f_7 = 1;
				}
			}
			else if (!IS_PED_IN_VEHICLE(*iParam0, iLocal_43, 0))
			{
				if (iParam0->f_10 == 0)
				{
					TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_43, func_137(1)), 1f, -1, 1048576000, 0, 1193033728);
					iParam0->f_7 = 1;
				}
				else
				{
					TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_43, func_137(0)), 1f, -1, 1048576000, 0, 1193033728);
					iParam0->f_7 = 1;
				}
			}
			break;
		
		default:
			break;
	}
	iParam0->f_1 = GET_GAME_TIMER();
	iParam0->f_5 = 0;
}

void func_164(var uParam0)
{
	if (!func_184(*uParam0, -71340211))
	{
		if (Local_46[iLocal_48 /*25*/].f_23 != 0)
		{
			if (func_10(Local_46[iLocal_48 /*25*/].f_17))
			{
				TASK_GOTO_ENTITY_OFFSET(*uParam0, Local_46[iLocal_48 /*25*/].f_17, -1, 0f, 180f, 1f, 0);
			}
		}
		else
		{
			TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, Local_46[iLocal_48 /*25*/].f_19, 1f, 20000, -1f, 0, func_165(Local_46[iLocal_48 /*25*/].f_19, TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, true), 1));
		}
		if (func_37(iLocal_43))
		{
			SET_VEHICLE_DOOR_OPEN(iLocal_43, 5, 0, false);
		}
		uParam0->f_8 = uParam0->f_7;
		uParam0->f_7 = 9;
		uParam0->f_9 = 1;
	}
}

float func_165(struct<2> Param0, var uParam1, struct<2> Param2, float fParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param2 - Param0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

int func_166()
{
	if (func_37(iLocal_43) && func_341(PLAYER_PED_ID()))
	{
		if (HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_43, HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(), 1))
		{
			CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_43);
			if (func_167() || GET_ENTITY_HEALTH(iLocal_43) < 851)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_167()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (IS_VEHICLE_TYRE_BURST(iLocal_43, iVar0, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 3)
	{
		return 1;
	}
	return 0;
}

void func_168(int iParam0)
{
	if (iParam0->f_6 != 3 && iParam0->f_6 != 4)
	{
		func_169(iParam0);
		iParam0->f_1 = GET_GAME_TIMER();
		iParam0->f_6 = 3;
		iParam0->f_5 = 1;
	}
}

void func_169(var uParam0)
{
	if (uParam0->f_7 == 9)
	{
		if (uParam0->f_9 >= 2)
		{
			if (!IS_PED_INJURED(*uParam0))
			{
				RESET_PED_MOVEMENT_CLIPSET(*uParam0, 1048576000);
				RESET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0);
				TASK_PLAY_ANIM(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 8f, -8f, -1, 56, 0, 0, 0, 0);
			}
		}
	}
}

float func_170(struct<2> Param0, float fParam1, struct<2> Param2, float fParam3)
{
	return GET_HEADING_FROM_VECTOR_2D((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

int func_171(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_172(int iParam0)
{
	if (func_37(iLocal_43) && (IS_PED_IN_VEHICLE(IS_PED_IN_VEHICLE(), iLocal_43, 0) && !IS_PED_IN_VEHICLE(*iParam0, iLocal_43, 0)))
	{
		if (GET_ENTITY_SPEED(iLocal_43) > 0f)
		{
			iParam0->f_1 = GET_GAME_TIMER();
			iParam0->f_8 = iParam0->f_7;
			iParam0->f_5 = 1;
			iParam0->f_6 = 21;
		}
	}
}

int func_173(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_174(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && DOES_BLIP_EXIST(iVar0)) && DOES_BLIP_EXIST(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_174(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ADD_BLIP_FOR_ENTITY(iParam0);
	if (IS_ENTITY_A_VEHICLE(iParam0))
	{
		SET_BLIP_SCALE(iVar0, func_175(SET_BLIP_SCALE(), 1f, 1f));
		if (!bParam2)
		{
			SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		}
		else
		{
			SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (IS_ENTITY_A_PED(iParam0))
	{
		SET_BLIP_SCALE(iVar0, func_175(SET_BLIP_SCALE(), 0.7f, 0.7f));
		SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (IS_ENTITY_AN_OBJECT(iParam0))
	{
		SET_BLIP_SCALE(iVar0, func_175(SET_BLIP_SCALE(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_175(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_176(int iParam0, int iParam1)
{
	func_169(iParam0);
	if ((IS_PED_ARMED(IS_PED_ARMED(), 6) || iParam1) || iParam0->f_6 == 23)
	{
		if (!func_157(PLAYER_PED_ID(), *iParam0, 10f, 1))
		{
			if (!func_184(*iParam0, 1805844857))
			{
				iParam0->f_6 = 5;
				iParam0->f_5 = 1;
				iParam0->f_1 = GET_GAME_TIMER();
			}
		}
		else
		{
			iParam0->f_6 = 10;
			iParam0->f_5 = 1;
			iParam0->f_1 = GET_GAME_TIMER();
		}
	}
	else if (iParam0->f_5 != 1)
	{
		if (!func_184(*iParam0, 780511057) && !func_184(*iParam0, -71340211))
		{
			iParam0->f_5 = 1;
			iParam0->f_6 = 21;
			iParam0->f_1 = GET_GAME_TIMER();
		}
	}
}

bool func_177(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	vector3 vVar1;
	int iVar2;
	
	iVar2 = func_183(iParam0, iParam1);
	if (!func_10(iParam0) || !func_10(iParam1))
	{
		if (iVar2 != -1)
		{
			func_182(&(Local_38[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_181(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_180();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_38[iVar2 /*4*/].f_1 = iParam0;
		Local_38[iVar2 /*4*/].f_2 = iParam1;
	}
	vVar1 = { GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_178(&(Local_38[iVar2 /*4*/]), vVar1, iParam1, &(Local_38[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (GET_GAME_TIMER() - Local_38[iVar2 /*4*/].f_3) < iParam4);
}

int func_178(var uParam0, vector3 vParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	var uVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	if (!func_10(iParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		vVar1 = { func_179(iParam2, iParam5) };
		*uParam0 = START_SHAPE_TEST_LOS_PROBE(vParam1, vVar1 + vVar1 - vParam1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam4, 7);
		return 0;
	}
	iVar4 = GET_SHAPE_TEST_RESULT(*uParam0, &uVar0, &vVar1, &uVar2, &iVar3);
	if (iVar4 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar4 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (IS_ENTITY_A_PED(iVar3))
	{
		func_10(iVar3);
		if (GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3) == iParam2)
		{
			if (bLocal_39)
			{
				DRAW_DEBUG_LINE_WITH_TWO_COLOURS(vParam1, DRAW_DEBUG_LINE_WITH_TWO_COLOURS(iParam2, true), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam3 = GET_GAME_TIMER();
			return 1;
		}
		return 0;
	}
	if (IS_ENTITY_A_VEHICLE(iVar3))
	{
		func_10(iVar3);
		if (IS_PED_IN_ANY_VEHICLE(iParam2, 0))
		{
			if (GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar3) == GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam2, 0))
			{
				if (bLocal_39)
				{
					DRAW_DEBUG_LINE_WITH_TWO_COLOURS(vParam1, DRAW_DEBUG_LINE_WITH_TWO_COLOURS(iParam2, true), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam3 = GET_GAME_TIMER();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_179(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = GET_RANDOM_INT_IN_RANGE(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return GET_ENTITY_COORDS(iParam0, true);
	}
	else if (iParam1 == 1)
	{
		return GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return GET_PED_BONE_COORDS(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return GET_PED_BONE_COORDS(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return GET_PED_BONE_COORDS(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return GET_PED_BONE_COORDS(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return GET_PED_BONE_COORDS(iParam0, 36864, 0f, 0f, 0f);
	}
	return GET_ENTITY_COORDS(iParam0, true);
}

int func_180()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_38)
	{
		if ((Local_38[iVar0 /*4*/] == 0 && Local_38[iVar0 /*4*/].f_1 == 0) && Local_38[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_181(int iParam0, int iParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_160(GET_ENTITY_COORDS(iParam1, true) - GET_ENTITY_COORDS(iParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		vVar1 = { GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	else
	{
		vVar1 = { func_160(GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_133(vVar1, vVar0);
	if (fVar2 <= cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

void func_182(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_183(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_38)
	{
		if (Local_38[iVar0 /*4*/].f_1 == iParam0 && Local_38[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_184(int iParam0, int iParam1)
{
	if (func_341(iParam0))
	{
		if (GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_185(var uParam0)
{
	float fVar0;
	
	if (uParam0->f_9 == 0 && uParam0->f_10 == 1)
	{
	}
	switch (uParam0->f_7)
	{
		case 1:
			if (IS_PED_IN_VEHICLE(IS_PED_IN_VEHICLE(), iLocal_43, 1))
			{
				func_176(uParam0, 0);
				return;
			}
			if (uParam0->f_10 == 0)
			{
				func_196(uParam0, 1);
			}
			else
			{
				func_196(uParam0, 0);
			}
			break;
		
		case 2:
			if (IS_PED_SITTING_IN_VEHICLE(*uParam0, iLocal_43))
			{
				if (!func_184(*uParam0, -1794415470))
				{
					if (uParam0->f_10 == 0)
					{
						func_130(0);
					}
					else
					{
						uParam0->f_7 = 3;
					}
				}
			}
			else if (IS_PED_IN_VEHICLE(IS_PED_IN_VEHICLE(), iLocal_43, 1))
			{
				func_176(uParam0, 0);
				return;
			}
			break;
		
		case 3:
			if (IS_PED_IN_VEHICLE(IS_PED_IN_VEHICLE(), iLocal_43, 1))
			{
				func_176(uParam0, 0);
				return;
			}
			if (bLocal_51)
			{
				if (iLocal_48 <= 20 && iLocal_48 != -1)
				{
					if (!Local_46[iLocal_48 /*25*/].f_18)
					{
						if (func_107(*uParam0, Local_46[iLocal_48 /*25*/], 20f))
						{
							if (Local_46[iLocal_48 /*25*/].f_9 && IS_VEHICLE_STOPPED(iLocal_43))
							{
								func_195();
							}
						}
					}
				}
				else
				{
					uParam0->f_7 = 10;
				}
			}
			break;
		
		case 4:
			if (func_107(*uParam0, Local_46[iLocal_48 /*25*/], 25f))
			{
				if (Local_46[iLocal_48 /*25*/].f_9)
				{
					func_194(uParam0);
				}
				else
				{
					Local_46[iLocal_48 /*25*/].f_18 = 1;
					func_130(0);
				}
			}
			break;
		
		case 5:
			if (func_37(iLocal_43))
			{
				BRING_VEHICLE_TO_HALT(iLocal_43, 25f, 10, 0);
				fVar0 = GET_ENTITY_SPEED(iLocal_43);
				if (fVar0 < 8f)
				{
					func_194(uParam0);
				}
			}
			break;
		
		case 6:
			if (!func_184(*uParam0, 242628503) && IS_VEHICLE_STOPPED(iLocal_43))
			{
				if (bLocal_51)
				{
					uParam0->f_8 = uParam0->f_7;
					uParam0->f_7 = 7;
				}
				else
				{
					TASK_LEAVE_ANY_VEHICLE(*uParam0, 0, 0);
					uParam0->f_8 = uParam0->f_7;
					uParam0->f_7 = 8;
				}
			}
			break;
		
		case 7:
			if (func_341(Local_45[1 /*11*/]))
			{
				if (IS_PED_IN_VEHICLE(Local_45[1 /*11*/], iLocal_43, 0) && Local_45[1 /*11*/].f_7 == 3)
				{
					func_130(0);
				}
			}
			break;
		
		case 8:
			if (!IS_PED_IN_VEHICLE(*uParam0, iLocal_43, 0))
			{
				func_164(uParam0);
			}
			break;
		
		case 9:
			func_186(uParam0);
			break;
	}
}

void func_186(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_9 >= 1 && uParam0->f_9 != 0)
	{
	}
	switch (uParam0->f_9)
	{
		case 1:
			if (!func_184(*uParam0, -2015108952))
			{
				OPEN_SEQUENCE_TASK(&iVar0);
				if (func_170(GET_ENTITY_COORDS(*uParam0, true), Local_46[iLocal_48 /*25*/].f_19) > 1.5f)
				{
					TASK_TURN_PED_TO_FACE_COORD(0, Local_46[iLocal_48 /*25*/].f_19, 0);
				}
				TASK_PLAY_ANIM(0, "missfbi4prepp1", "_bag_pickup_garbage_man", 8f, -16f, -1, 528384, 0, 0, 0, 0);
				CLOSE_SEQUENCE_TASK(iVar0);
				TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
				CLEAR_SEQUENCE_TASK(&iVar0);
				uParam0->f_9 = 2;
			}
			else if (func_191(Local_46[iLocal_48 /*25*/].f_19, *uParam0, 1f, 1f, 8f))
			{
				func_190(uParam0);
				return;
			}
			SET_PED_CAPSULE(*uParam0, 0.2f);
			break;
		
		case 2:
			if (func_184(*uParam0, 242628503))
			{
				if (IS_ENTITY_PLAYING_ANIM(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man", 3))
				{
					if (GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man") >= 0.333f)
					{
						SET_PED_MOVEMENT_CLIPSET(*uParam0, "missfbi4prepp1_garbageman", 0f);
						SET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0, "missfbi4prepp1_garbageman");
						if (func_10(Local_46[iLocal_48 /*25*/].f_17) && !IS_ENTITY_ATTACHED(Local_46[iLocal_48 /*25*/].f_17))
						{
							ATTACH_ENTITY_TO_ENTITY(Local_46[iLocal_48 /*25*/].f_17, *uParam0, ATTACH_ENTITY_TO_ENTITY(*uParam0, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
						}
					}
				}
				if (func_191(Local_46[iLocal_48 /*25*/].f_19, *uParam0, 1f, 1f, 8f))
				{
					func_190(uParam0);
					return;
				}
			}
			else if (!func_184(*uParam0, 713668775))
			{
				if (func_37(iLocal_43))
				{
					TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_43, 0f, -4.8f, 0f), 1f, -1, 0.25f, 0, TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_43));
				}
				uParam0->f_9 = 3;
			}
			SET_PED_CAPSULE(*uParam0, 0.2f);
			break;
		
		case 3:
			if (func_37(iLocal_43))
			{
				if (!func_191(GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, 0f, -5.5f, 0f), iLocal_43, 1.9f, 1.9f, 8f))
				{
					if (IS_ENTITY_AT_COORD(*uParam0, IS_ENTITY_AT_COORD(iLocal_43, 0f, -5.5f, 0f), 0.9f, 0.9f, 2f, false, true, 0))
					{
						if (!func_184(*uParam0, 713668775))
						{
							OPEN_SEQUENCE_TASK(&iVar1);
							if (func_170(GET_ENTITY_COORDS(*uParam0, true), GET_ENTITY_COORDS(iLocal_43, true)) > 3f)
							{
								TASK_ACHIEVE_HEADING(0, TASK_ACHIEVE_HEADING(iLocal_43), 0);
							}
							TASK_PLAY_ANIM(0, "missfbi4prepp1", "_bag_throw_garbage_man", 8f, -8f, -1, 0, 0, 0, 0, 0);
							CLOSE_SEQUENCE_TASK(iVar1);
							TASK_PERFORM_SEQUENCE(*uParam0, iVar1);
							CLEAR_SEQUENCE_TASK(&iVar1);
							uParam0->f_9 = 4;
						}
					}
					else if (!func_184(*uParam0, 713668775))
					{
						TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_43, 0f, -4.8f, 0f), 1f, -1, 0.25f, 0, TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_43));
					}
				}
				else
				{
					func_188(uParam0);
				}
			}
			break;
		
		case 4:
			if (!func_191(GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, 0f, -5.5f, 0f), *uParam0, 1.9f, 1.9f, 8f))
			{
				if (func_184(*uParam0, 242628503))
				{
					if (IS_ENTITY_PLAYING_ANIM(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man", 3))
					{
						if (GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man") >= 0.391f)
						{
							if (func_10(Local_46[iLocal_48 /*25*/].f_17))
							{
								if (IS_ENTITY_ATTACHED(Local_46[iLocal_48 /*25*/].f_17))
								{
									RESET_PED_MOVEMENT_CLIPSET(*uParam0, 1048576000);
									RESET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0);
									DETACH_ENTITY(Local_46[iLocal_48 /*25*/].f_17, 1, false);
									SET_OBJECT_PHYSICS_PARAMS(Local_46[iLocal_48 /*25*/].f_17, 2f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1082130432, -1082130432, -1082130432);
									APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_46[iLocal_48 /*25*/].f_17, 1, APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(*uParam0), 0, 1, 1, 0);
								}
								if (IS_ENTITY_TOUCHING_ENTITY(Local_46[iLocal_48 /*25*/].f_17, iLocal_43))
								{
									func_187(&(Local_46[iLocal_48 /*25*/].f_17));
								}
							}
						}
					}
				}
				else
				{
					uParam0->f_9 = 0;
					if (func_37(iLocal_43))
					{
						SET_VEHICLE_DOOR_SHUT(iLocal_43, 5, 0);
						func_187(&(Local_46[iLocal_48 /*25*/].f_17));
					}
					func_163(uParam0);
				}
			}
			else
			{
				func_188(uParam0);
			}
			break;
		
		case 5:
			break;
	}
}

void func_187(int iParam0)
{
	if (DOES_ENTITY_EXIST(*iParam0))
	{
		if (IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
		{
			DETACH_ENTITY(*iParam0, 1, true);
		}
		DELETE_OBJECT(iParam0);
	}
}

void func_188(var uParam0)
{
	int iVar0;
	int iVar1;
	
	SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_40, 1862763509);
	func_169(uParam0);
	if (!IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
	{
		if (!IS_PED_IN_ANY_VEHICLE(*uParam0, 0))
		{
			TASK_PUT_PED_DIRECTLY_INTO_MELEE(*uParam0, TASK_PUT_PED_DIRECTLY_INTO_MELEE(), 8f, -1f, 10f, 0);
		}
		else
		{
			OPEN_SEQUENCE_TASK(&iVar0);
			TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK_COMBAT_PED(0, TASK_COMBAT_PED(), 0, 16);
			CLOSE_SEQUENCE_TASK(iVar0);
			TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
			CLEAR_SEQUENCE_TASK(&iVar0);
		}
	}
	else
	{
		OPEN_SEQUENCE_TASK(&iVar1);
		TASK_TURN_PED_TO_FACE_ENTITY(0, TASK_TURN_PED_TO_FACE_ENTITY(), 0);
		TASK_COMBAT_PED(0, TASK_COMBAT_PED(), 0, 16);
		CLOSE_SEQUENCE_TASK(iVar1);
		TASK_PERFORM_SEQUENCE(*uParam0, iVar1);
		CLEAR_SEQUENCE_TASK(&iVar1);
	}
	RESET_PED_MOVEMENT_CLIPSET(*uParam0, 1048576000);
	RESET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0);
	func_189();
	if (!DOES_BLIP_EXIST(uParam0->f_4))
	{
		uParam0->f_4 = func_173(*uParam0, 1, 145);
	}
	uParam0->f_1 = GET_GAME_TIMER();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 15;
}

void func_189()
{
	Local_42 = 0;
	Local_42.f_26 = 0;
	Local_42.f_18 = 0;
}

void func_190(var uParam0)
{
	int iVar0;
	int iVar1;
	
	SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_40, 1862763509);
	func_169(uParam0);
	if (!IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
	{
		if (!IS_PED_IN_ANY_VEHICLE(*uParam0, 0))
		{
			TASK_PUT_PED_DIRECTLY_INTO_MELEE(*uParam0, TASK_PUT_PED_DIRECTLY_INTO_MELEE(), 8f, -1f, 10f, 0);
		}
		else
		{
			OPEN_SEQUENCE_TASK(&iVar0);
			TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK_COMBAT_PED(0, TASK_COMBAT_PED(), 0, 16);
			CLOSE_SEQUENCE_TASK(iVar0);
			TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
			CLEAR_SEQUENCE_TASK(&iVar0);
		}
	}
	else
	{
		OPEN_SEQUENCE_TASK(&iVar1);
		TASK_TURN_PED_TO_FACE_ENTITY(0, TASK_TURN_PED_TO_FACE_ENTITY(), 0);
		TASK_COMBAT_PED(0, TASK_COMBAT_PED(), 0, 16);
		CLOSE_SEQUENCE_TASK(iVar1);
		TASK_PERFORM_SEQUENCE(*uParam0, iVar1);
		CLEAR_SEQUENCE_TASK(&iVar1);
	}
	RESET_PED_MOVEMENT_CLIPSET(*uParam0, 1048576000);
	RESET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0);
	func_189();
	if (!DOES_BLIP_EXIST(uParam0->f_4))
	{
		uParam0->f_4 = func_173(*uParam0, 1, 145);
	}
	uParam0->f_1 = GET_GAME_TIMER();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 14;
}

int func_191(vector3 vParam0, int iParam1, vector3 vParam2)
{
	Local_42.f_2 = { vParam0 };
	Local_42.f_8 = { vParam2 };
	func_192(&Local_42, iParam1);
	if (Local_42.f_26)
	{
		if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
		{
			if (IS_ENTITY_A_VEHICLE(Local_42.f_18))
			{
				if (func_10(Local_42.f_18))
				{
					if (GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Local_42.f_18) == GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(), 1))
					{
						return 1;
					}
				}
			}
		}
		else if (IS_ENTITY_A_PED(Local_42.f_18))
		{
			if (func_10(Local_42.f_18))
			{
				if (GET_PED_INDEX_FROM_ENTITY_INDEX(Local_42.f_18) == GET_PED_INDEX_FROM_ENTITY_INDEX())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_192(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = GET_SHAPE_TEST_RESULT(*uParam0, &iVar0, &(uParam0->f_20), &(uParam0->f_23), &(uParam0->f_18));
	uParam0->f_19 = 2 == iVar1;
	if (uParam0->f_19)
	{
		if (0 == iVar0)
		{
			uParam0->f_26 = 0;
		}
		else
		{
			uParam0->f_26 = 1;
		}
	}
	if (iVar1 != 1)
	{
		func_193(uParam0, iParam1);
	}
}

void func_193(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 0:
			break;
		
		case 1:
			*uParam0 = START_SHAPE_TEST_LOS_PROBE(uParam0->f_2, uParam0->f_5, 511, iParam1, 7);
			break;
		
		case 2:
			*uParam0 = START_SHAPE_TEST_BOUND(uParam0->f_17, 511, 4);
			break;
		
		case 3:
			*uParam0 = START_SHAPE_TEST_BOUNDING_BOX(uParam0->f_17, 511, 4);
			break;
		
		case 4:
			*uParam0 = START_SHAPE_TEST_BOX(uParam0->f_2, uParam0->f_8, uParam0->f_11, uParam0->f_14, 6, iParam1, 4);
			break;
		
		case 5:
			*uParam0 = START_SHAPE_TEST_CAPSULE(uParam0->f_2, uParam0->f_5, uParam0->f_15, 511, iParam1, 4);
			break;
	}
	uParam0->f_16 = *uParam0 != 0;
}

void func_194(var uParam0)
{
	int iVar0;
	
	if (func_37(iLocal_43))
	{
		OPEN_SEQUENCE_TASK(&iVar0);
		TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_43, Local_46[iLocal_48 /*25*/].f_3, 8f, 0, joaat("trash"), 786469, 10f, 15f);
		TASK_VEHICLE_PARK(0, iLocal_43, Local_46[iLocal_48 /*25*/].f_3, Local_46[iLocal_48 /*25*/].f_8, Local_46[iLocal_48 /*25*/].f_10, 5f, 1);
		CLOSE_SEQUENCE_TASK(iVar0);
		TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
		CLEAR_SEQUENCE_TASK(&iVar0);
		uParam0->f_7 = 6;
	}
}

void func_195()
{
	func_164(&(Local_45[1 /*11*/]));
}

void func_196(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (func_191(GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, func_137(bParam1)), iLocal_43, 1.9f, 1.9f, 8f))
	{
		if (IS_ENTITY_IN_ANGLED_AREA(*uParam0, IS_ENTITY_IN_ANGLED_AREA(iLocal_43, 5f, 0f, -2f), IS_ENTITY_IN_ANGLED_AREA(iLocal_43, true) + Vector(2f, 0f, 0f), 9f, 0, true, 0) && IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), IS_ENTITY_IN_ANGLED_AREA(iLocal_43, 5f, 0f, -2f), IS_ENTITY_IN_ANGLED_AREA(iLocal_43, true) + Vector(2f, 0f, 0f), 9f, 0, true, 0))
		{
			func_197(uParam0);
		}
		else if (!func_184(*uParam0, 1227113341) && IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), IS_ENTITY_IN_ANGLED_AREA(iLocal_43, 5f, 0f, -2f), IS_ENTITY_IN_ANGLED_AREA(iLocal_43, true) + Vector(2f, 0f, 0f), 9f, 0, true, 0))
		{
			CLEAR_PED_TASKS(*uParam0);
			TASK_GO_TO_ENTITY(*uParam0, TASK_GO_TO_ENTITY(), -1, 4f, 1f, 1073741824, 0);
		}
	}
	else if (func_107(*uParam0, GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_43, func_137(bParam1)), 5f))
	{
		iVar0 = -1;
		if (!bParam1)
		{
			iVar0 = 0;
		}
		TASK_ENTER_VEHICLE(*uParam0, iLocal_43, -1, iVar0, 1f, 8388609, 0);
		uParam0->f_7 = 2;
	}
}

void func_197(var uParam0)
{
	int iVar0;
	int iVar1;
	
	SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_40, 1862763509);
	func_169(uParam0);
	if (!IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
	{
		if (!IS_PED_IN_ANY_VEHICLE(*uParam0, 0))
		{
			TASK_PUT_PED_DIRECTLY_INTO_MELEE(*uParam0, TASK_PUT_PED_DIRECTLY_INTO_MELEE(), 8f, -1f, 10f, 0);
		}
		else
		{
			OPEN_SEQUENCE_TASK(&iVar0);
			TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK_COMBAT_PED(0, TASK_COMBAT_PED(), 0, 16);
			CLOSE_SEQUENCE_TASK(iVar0);
			TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
			CLEAR_SEQUENCE_TASK(&iVar0);
		}
	}
	else
	{
		OPEN_SEQUENCE_TASK(&iVar1);
		TASK_TURN_PED_TO_FACE_ENTITY(0, TASK_TURN_PED_TO_FACE_ENTITY(), 0);
		TASK_COMBAT_PED(0, TASK_COMBAT_PED(), 0, 16);
		CLOSE_SEQUENCE_TASK(iVar1);
		TASK_PERFORM_SEQUENCE(*uParam0, iVar1);
		CLEAR_SEQUENCE_TASK(&iVar1);
	}
	RESET_PED_MOVEMENT_CLIPSET(*uParam0, 1048576000);
	RESET_PED_WEAPON_MOVEMENT_CLIPSET(*uParam0);
	func_189();
	uParam0->f_1 = GET_GAME_TIMER();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 13;
}

void func_198(var uParam0)
{
	if (uParam0->f_5 != 1)
	{
		if (func_37(iLocal_43) && IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
		{
			if (!func_184(*uParam0, 2104565373) && IS_PED_IN_VEHICLE(*uParam0, iLocal_43, 0))
			{
				if (func_157(PLAYER_PED_ID(), iLocal_43, 10f, 1))
				{
					if (IS_ENTITY_TOUCHING_ENTITY(iLocal_43, IS_ENTITY_TOUCHING_ENTITY()))
					{
						TASK_DRIVE_BY(*uParam0, TASK_DRIVE_BY(), 0, 0f, 0f, 0f, 10f, 100, 1, -957453492);
						uParam0->f_1 = GET_GAME_TIMER();
						uParam0->f_6 = 9;
					}
				}
			}
		}
	}
}

void func_199()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_41 - 1))
	{
		if (Local_46[iVar0 /*25*/].f_23 != 0)
		{
			if (Local_46[iVar0 /*25*/].f_24)
			{
				if ((iVar0 != iLocal_48 && func_10(Local_46[iVar0 /*25*/].f_17)) && func_201(Local_46[iVar0 /*25*/].f_17, PLAYER_PED_ID(), 1) > 200f)
				{
					DELETE_OBJECT(&(Local_46[iVar0 /*25*/].f_17));
					Local_46[iVar0 /*25*/].f_24 = 0;
				}
			}
			else if (Local_46[iVar0 /*25*/].f_23 != 0)
			{
				if (func_107(PLAYER_PED_ID(), Local_46[iVar0 /*25*/], 100f) || func_107(Local_45[0 /*11*/], Local_46[iVar0 /*25*/], 120f))
				{
					Local_46[iVar0 /*25*/].f_24 = func_200(&(Local_46[iVar0 /*25*/].f_17), Local_46[iVar0 /*25*/].f_23, Local_46[iVar0 /*25*/].f_19, Local_46[iVar0 /*25*/].f_22, 1);
				}
			}
		}
		iVar0++;
	}
}

int func_200(var uParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)
{
	if (!DOES_ENTITY_EXIST(*uParam0))
	{
		if (func_152(iParam1, "Loading", 0))
		{
			*uParam0 = CREATE_OBJECT(iParam1, vParam2, true, true, false);
			if (DOES_ENTITY_EXIST(*uParam0))
			{
				SET_ENTITY_HEADING(*uParam0, fParam3);
				ACTIVATE_PHYSICS(*uParam0);
				if (bParam4)
				{
					func_151(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else if (func_10(*uParam0))
	{
		return 1;
	}
	return 0;
}

float func_201(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = { GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		vVar0 = { GET_ENTITY_COORDS(iParam0, false) };
	}
	if (!IS_ENTITY_DEAD(iParam1, 0))
	{
		vVar1 = { GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		vVar1 = { GET_ENTITY_COORDS(iParam1, false) };
	}
	return GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar1, bParam2);
}

void func_202(int iParam0, int iParam1, int iParam2)
{
	if (iParam0->f_5 != 1 || iParam2)
	{
		if (!func_341(Local_45[func_171(iParam1) /*11*/]))
		{
			if (!bLocal_52)
			{
				if (DOES_ENTITY_EXIST(Local_45[func_171(iParam1) /*11*/]))
				{
					if (func_181(*iParam0, Local_45[func_171(iParam1) /*11*/], 140f, 0) || func_157(Local_45[func_171(iParam1) /*11*/], *iParam0, 3f, 1))
					{
						func_176(iParam0, 0);
						bLocal_52 = true;
						return;
					}
					else
					{
						vLocal_54 = { GET_ENTITY_COORDS(Local_45[func_171(iParam1) /*11*/], true) };
						iParam0->f_1 = GET_GAME_TIMER();
						iParam0->f_8 = iParam0->f_7;
						iParam0->f_5 = 1;
						iParam0->f_6 = 11;
					}
				}
				else
				{
					func_176(iParam0, 0);
				}
			}
		}
		else if (Local_45[func_171(iParam1) /*11*/].f_6 == 22)
		{
			if (func_181(*iParam0, Local_45[func_171(iParam1) /*11*/], 140f, 0) && func_157(Local_45[func_171(iParam1) /*11*/], PLAYER_PED_ID(), 15f, 1))
			{
				iParam0->f_5 = 1;
				iParam0->f_6 = 21;
			}
		}
		else if (Local_45[func_171(iParam1) /*11*/].f_6 == 5 || Local_45[func_171(iParam1) /*11*/].f_6 == 7)
		{
			if (func_157(Local_45[func_171(iParam1) /*11*/], *iParam0, 10f, 1))
			{
				func_176(iParam0, 0);
			}
		}
		if (func_213(*iParam0))
		{
			func_169(iParam0);
			iParam0->f_1 = GET_GAME_TIMER();
			iParam0->f_8 = iParam0->f_7;
			iParam0->f_5 = 1;
			iParam0->f_6 = 21;
		}
		if (iParam0->f_10 == 0 && iParam0->f_7 == 4)
		{
			if (func_161(iParam0))
			{
				if (IS_PED_IN_VEHICLE(*iParam0, iLocal_43, 0))
				{
					TASK_DRIVE_BY(*iParam0, TASK_DRIVE_BY(), 0, 0f, 0f, 0f, 10f, 100, 1, -957453492);
					_0x9D3AF56E94C9AE98(iLocal_43, 2000f);
					iLocal_55 = GET_GAME_TIMER();
					iParam0->f_1 = GET_GAME_TIMER();
					iParam0->f_6 = 16;
					iParam0->f_5 = 1;
				}
			}
		}
		if (func_204(*iParam0, 1, 70f, 170f, 0, 1, 0, 0) && !func_203(iParam0))
		{
			if (IS_PED_ARMED(IS_PED_ARMED(), 6))
			{
				if (func_37(iLocal_43))
				{
					if (IS_PED_IN_VEHICLE(*iParam0, iLocal_43, 0))
					{
						if (GET_ENTITY_SPEED(iLocal_43) > 5f)
						{
							if (iParam1 == 0)
							{
								TASK_VEHICLE_MISSION_PED_TARGET(*iParam0, iLocal_43, TASK_VEHICLE_MISSION_PED_TARGET(), 8, 30f, 786469, 300f, 2f, 1);
								iParam0->f_6 = 7;
								TASK_COWER(Local_45[func_171(iParam1) /*11*/], -1);
								Local_45[func_171(iParam1) /*11*/].f_6 = 10;
								Local_45[func_171(iParam1) /*11*/].f_5 = 1;
								iParam0->f_5 = 1;
								iParam0->f_1 = GET_GAME_TIMER();
								Local_45[func_171(iParam1) /*11*/].f_1 = GET_GAME_TIMER();
							}
							else
							{
								TASK_COWER(*iParam0, -1);
								iParam0->f_6 = 12;
								TASK_VEHICLE_MISSION_PED_TARGET(Local_45[func_171(iParam1) /*11*/], iLocal_43, TASK_VEHICLE_MISSION_PED_TARGET(), 8, 30f, 786469, 300f, 2f, 1);
								Local_45[func_171(iParam1) /*11*/].f_6 = 5;
								Local_45[func_171(iParam1) /*11*/].f_5 = 1;
								iParam0->f_5 = 1;
								iParam0->f_1 = GET_GAME_TIMER();
								Local_45[func_171(iParam1) /*11*/].f_1 = GET_GAME_TIMER();
							}
						}
						else
						{
							func_176(iParam0, 0);
							if (DOES_ENTITY_EXIST(Local_45[func_171(iParam1) /*11*/]))
							{
								if (func_181(Local_45[func_171(iParam1) /*11*/], PLAYER_PED_ID(), 1126825984, 0))
								{
									func_176(&(Local_45[func_171(iParam1) /*11*/]), 0);
								}
							}
						}
						CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*iParam0);
					}
					else
					{
						func_176(iParam0, 0);
						if (DOES_ENTITY_EXIST(Local_45[func_171(iParam1) /*11*/]))
						{
							if (func_177(Local_45[func_171(iParam1) /*11*/], *iParam0, 1126825984, 1, 250, 7))
							{
								func_176(&(Local_45[func_171(iParam1) /*11*/]), 0);
							}
						}
					}
				}
			}
			else
			{
				iParam0->f_1 = GET_GAME_TIMER();
				iParam0->f_8 = iParam0->f_7;
				iParam0->f_5 = 1;
				iParam0->f_6 = 21;
				CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*iParam0);
				if (func_177(Local_45[func_171(iParam1) /*11*/], *iParam0, 1126825984, 1, 250, 7))
				{
					Local_45[func_171(iParam1) /*11*/].f_1 = GET_GAME_TIMER();
					Local_45[func_171(iParam1) /*11*/].f_8 = iParam0->f_7;
					Local_45[func_171(iParam1) /*11*/].f_5 = 1;
					Local_45[func_171(iParam1) /*11*/].f_6 = 21;
					CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_45[func_171(iParam1) /*11*/]);
				}
			}
			iParam0->f_5 = 1;
		}
		else if (IS_PED_BEING_JACKED(*iParam0))
		{
			func_169(iParam0);
			TASK_SMART_FLEE_PED(*iParam0, TASK_SMART_FLEE_PED(), 500f, -1, 0, 1);
			iParam0->f_6 = 2;
			iParam0->f_5 = 1;
			iParam0->f_1 = GET_GAME_TIMER();
		}
		if (IS_PED_RAGDOLL(*iParam0))
		{
			if (func_10(Local_46[iLocal_48 /*25*/].f_17))
			{
				if (IS_ENTITY_ATTACHED(Local_46[iLocal_48 /*25*/].f_17))
				{
					DETACH_ENTITY(Local_46[iLocal_48 /*25*/].f_17, 1, false);
					APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_46[iLocal_48 /*25*/].f_17, 1, APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(*iParam0), 0, 1, 1, 0);
				}
			}
		}
	}
	if (iParam0->f_5 != 1)
	{
		if (func_341(Local_45[func_171(iParam1) /*11*/]))
		{
			if (IS_PED_BEING_JACKED(Local_45[func_171(iParam1) /*11*/]))
			{
				func_169(iParam0);
				TASK_SMART_FLEE_PED(*iParam0, TASK_SMART_FLEE_PED(), 120f, -1, 0, 0);
				iParam0->f_1 = GET_GAME_TIMER();
				iParam0->f_6 = 7;
				iParam0->f_5 = 1;
			}
		}
	}
}

int func_203(var uParam0)
{
	if ((IS_ENTITY_AT_COORD(IS_ENTITY_AT_COORD(), IS_ENTITY_AT_COORD(*uParam0, 0f, -2f, 0f), 2f, 3f, 2f, false, true, 0) && !IS_ENTITY_AT_COORD(IS_ENTITY_AT_COORD(), 6)) && IS_ENTITY_AT_COORD(IS_ENTITY_AT_COORD()))
	{
		return 1;
	}
	return 0;
}

int func_204(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	vector3 vVar0;
	
	if (func_10(PLAYER_PED_ID()) && func_10(iParam0))
	{
		if (HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(), 1))
		{
			return 1;
		}
		if (func_209(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!IS_PED_ARMED(IS_PED_ARMED(), 6))
		{
			if (IS_PED_IN_MELEE_COMBAT(IS_PED_IN_MELEE_COMBAT()))
			{
				vVar0 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true) - GET_ENTITY_COORDS(iParam0, true) };
				if ((((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) + (vVar0.z * vVar0.z)) <= 5f)
				{
					return func_208(PLAYER_PED_ID(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_205(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_205(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_10(PLAYER_PED_ID()) && func_10(iParam0))
	{
		if (func_207(iParam0) || IS_PLAYER_TARGETTING_ENTITY(IS_PLAYER_TARGETTING_ENTITY(), iParam0))
		{
			if (IS_PED_ARMED(IS_PED_ARMED(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (IS_ENTITY_AT_ENTITY(IS_ENTITY_AT_ENTITY(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_206(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_206(int iParam0, float fParam1)
{
	return func_177(iParam0, PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

int func_207(int iParam0)
{
	if (IS_PLAYER_FREE_AIMING_AT_ENTITY(IS_PLAYER_FREE_AIMING_AT_ENTITY(), iParam0) && IS_PLAYER_FREE_AIMING_AT_ENTITY(IS_PLAYER_FREE_AIMING_AT_ENTITY(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_208(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar1 = { GET_ENTITY_COORDS(iParam1, true) - GET_ENTITY_COORDS(iParam0, true) };
	return (((vVar0.x * vVar1.x) + (vVar0.y * vVar1.y)) / vdist(vVar1, 0f, 0f, 0f)) > cos(fParam2);
}

int func_209(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_10(PLAYER_PED_ID()) && func_10(iParam0))
	{
		GET_CURRENT_PED_WEAPON(GET_CURRENT_PED_WEAPON(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_212(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_210(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (IS_PED_CURRENT_WEAPON_SILENCED(IS_PED_CURRENT_WEAPON_SILENCED()))
			{
				if (IS_PED_SHOOTING(IS_PED_SHOOTING()))
				{
					if (IS_BULLET_IN_AREA(IS_BULLET_IN_AREA(iParam0, true), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_212(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_210(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_210(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { GET_ENTITY_COORDS(iParam0, true) };
	vVar1 = { vVar0 };
	vVar0.x = (vVar0.x - fParam1);
	vVar0.y = (vVar0.y - fParam1);
	vVar0.z = (vVar0.z - fParam1);
	vVar1.x = (vVar1.x + fParam1);
	vVar1.y = (vVar1.y + fParam1);
	vVar1.z = (vVar1.z + fParam1);
	if (bParam2)
	{
		if (((IS_PROJECTILE_TYPE_WITHIN_DISTANCE(IS_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, true), joaat("weapon_grenade"), fParam1, 1) || IS_PROJECTILE_TYPE_WITHIN_DISTANCE(IS_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, true), joaat("weapon_molotov"), fParam1, 1)) || IS_PROJECTILE_TYPE_WITHIN_DISTANCE(IS_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, true), joaat("weapon_smokegrenade"), fParam1, 1)) || IS_PROJECTILE_TYPE_WITHIN_DISTANCE(IS_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, true), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_211(iParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_211(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (IS_PROJECTILE_IN_AREA(vVar0, vVar1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_211(int iParam0, float fParam1)
{
	var uVar0;
	vector3 vVar1;
	
	if ((((_GET_PROJECTILE_NEAR_PED(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0) || _GET_PROJECTILE_NEAR_PED(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0)) || _GET_PROJECTILE_NEAR_PED(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0)) || _GET_PROJECTILE_NEAR_PED(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0)) || _GET_PROJECTILE_NEAR_PED(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0))
	{
		if (func_159(iParam0, vVar1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_212(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (IS_PED_SHOOTING(IS_PED_SHOOTING()))
		{
			if (IS_ENTITY_AT_ENTITY(IS_ENTITY_AT_ENTITY(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (IS_BULLET_IN_AREA(IS_BULLET_IN_AREA(iParam0, true), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_213(int iParam0)
{
	if (func_157(iParam0, PLAYER_PED_ID(), 6f, 1))
	{
		if (!IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			if (IS_ENTITY_TOUCHING_ENTITY(iParam0, IS_ENTITY_TOUCHING_ENTITY()))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_214()
{
	if (func_37(Local_199))
	{
		if (func_157(PLAYER_PED_ID(), Local_199, 100f, 1) && !iLocal_194)
		{
			REQUEST_VEHICLE_ASSET(joaat("trash"), 3);
			if (!HAS_VEHICLE_ASSET_LOADED(joaat("trash")))
			{
				iLocal_194 = 1;
			}
		}
		else if (!func_157(PLAYER_PED_ID(), Local_199, 120f, 1) && iLocal_194)
		{
			REMOVE_VEHICLE_ASSET(joaat("trash"));
			iLocal_194 = 0;
		}
	}
}

void func_215(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, vector3 vParam5, int iParam6, bool bParam7, float fParam8)
{
	if (func_37(*iParam0))
	{
		switch (*iParam2)
		{
			case 0:
				if (IS_PED_IN_VEHICLE(IS_PED_IN_VEHICLE(), *iParam0, 0))
				{
					func_7(iParam3);
					if (func_106(func_114(func_77()), 0, 0))
					{
						CLEAR_THIS_PRINT(func_114(func_77()));
					}
					if (*iParam0 == iParam6)
					{
						*iParam2 = 1;
					}
					else
					{
						*iParam2 = 2;
					}
				}
				else if (func_220(*iParam0) || func_219(*iParam0))
				{
					func_7(iParam3);
					if (func_106(func_114(func_77()), 0, 0))
					{
						CLEAR_THIS_PRINT(func_114(func_77()));
					}
					*iParam2 = 3;
				}
				else
				{
					if (func_106(func_115(func_77(), bParam7), 0, 0))
					{
						CLEAR_THIS_PRINT(func_115(func_77(), bParam7));
					}
					if (func_77() != 33)
					{
						func_217(iParam0);
					}
					else
					{
						func_216(iParam0, iParam1);
					}
				}
				break;
			
			case 2:
			case 1:
				if ((!IS_PED_IN_VEHICLE(IS_PED_IN_VEHICLE(), *iParam0, 0) && !func_220(*iParam0)) && !func_219(*iParam0))
				{
					func_7(iParam4);
					if (!IS_ENTITY_AT_COORD(*iParam0, vParam5, fParam8, fParam8, 2f, false, true, 2))
					{
						func_125(iParam3, *iParam0, 1);
					}
					*iParam2 = 0;
				}
				break;
			
			case 3:
				if (!func_220(*iParam0) && !func_219(*iParam0))
				{
					func_7(iParam4);
					if (!IS_ENTITY_AT_COORD(*iParam0, vParam5, fParam8, fParam8, 2f, false, true, 2))
					{
						func_125(iParam3, *iParam0, 1);
					}
					*iParam2 = 0;
				}
				break;
		}
	}
	else if (func_77() != 33)
	{
		func_217(iParam0);
	}
	else
	{
		func_216(iParam0, iParam1);
	}
}

void func_216(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!bLocal_28)
	{
		if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
		{
			iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
			if (iVar0 != *iParam0)
			{
				if (func_37(iVar0))
				{
					iVar1 = GET_ENTITY_MODEL(iVar0);
					if (iVar1 == joaat("trash"))
					{
						*uParam1 = *iParam0;
						func_6(iParam0);
						*iParam0 = iVar0;
						func_36(*iParam0, 1);
						func_36(*uParam1, 3);
						if (!IS_ENTITY_A_MISSION_ENTITY(*iParam0))
						{
							SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, 1);
						}
					}
					else if (iVar1 == joaat("towtruck"))
					{
						iVar2 = GET_ENTITY_ATTACHED_TO_TOW_TRUCK(GET_ENTITY_ATTACHED_TO_TOW_TRUCK(GET_ENTITY_ATTACHED_TO_TOW_TRUCK(), 0));
						if (func_10(iVar2))
						{
							iVar0 = GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar2);
							if (GET_ENTITY_MODEL(iVar0) == joaat("trash"))
							{
								*uParam1 = *iParam0;
								func_6(iParam0);
								*iParam0 = iVar0;
								func_36(*iParam0, 1);
								func_36(*uParam1, 3);
								if (!IS_ENTITY_A_MISSION_ENTITY(*iParam0))
								{
									SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, 1);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_217(int iParam0)
{
	int iVar0;
	
	if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
	{
		iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
		if (iVar0 != *iParam0)
		{
			if (func_37(iVar0))
			{
				if (GET_ENTITY_MODEL(iVar0) == func_218(func_77()))
				{
					func_6(iParam0);
					*iParam0 = iVar0;
					func_36(*iParam0, 1);
					SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, 1);
				}
			}
		}
	}
}

int func_218(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 33:
			iVar0 = joaat("trash");
			break;
		
		case 34:
			iVar0 = joaat("towtruck");
			break;
		
		case 78:
			iVar0 = 0;
			break;
		
		case 80:
		case 81:
		case 82:
			iVar0 = joaat("gauntlet");
			break;
	}
	return iVar0;
}

int func_219(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if ((func_341(PLAYER_PED_ID()) && PLAYER_PED_ID(PLAYER_PED_ID(), 0)) && func_37(iParam0))
	{
		iVar0 = GET_PLAYERS_LAST_VEHICLE();
		if (func_37(iVar0))
		{
			iVar1 = GET_ENTITY_MODEL(iVar0);
			if ((iVar1 == joaat("cargobob") || iVar1 == joaat("cargobob2")) || iVar1 == joaat("cargobob3"))
			{
				if (DOES_CARGOBOB_HAVE_PICK_UP_ROPE(iVar0))
				{
					if (IS_VEHICLE_ATTACHED_TO_CARGOBOB(iVar0, iParam0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_220(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if ((func_341(PLAYER_PED_ID()) && PLAYER_PED_ID(PLAYER_PED_ID(), 0)) && func_37(iParam0))
	{
		iVar0 = GET_PLAYERS_LAST_VEHICLE();
		if (func_37(iVar0))
		{
			iVar1 = GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("towtruck") || iVar1 == joaat("towtruck2"))
			{
				if (IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar0, iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_221()
{
	func_215(&iLocal_200, &iLocal_201, &iLocal_71, &iLocal_183, &iLocal_182, vLocal_186, Local_199, 0, 1090519040);
	func_155();
	func_238();
	func_214();
	switch (iLocal_69)
	{
		case 0:
			if (func_122(iLocal_68, bLocal_28))
			{
				if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) == 0 && !func_237())
				{
					func_117(&iLocal_182, vLocal_186, 1);
					func_121("PRA_TAKBACK", &iLocal_181);
				}
				iLocal_69 = 1;
			}
			break;
		
		case 1:
			func_120(&iLocal_182, vLocal_186, &iLocal_70, iLocal_71, &iLocal_181, &iLocal_195);
			func_227();
			if (func_225(iLocal_200, vLocal_186, &iLocal_182, iLocal_70, iLocal_71, &iLocal_181, &iLocal_196, 0, 0, 1086324736))
			{
				_0x293220DA1B46CEBC(8f, 5f, 4);
				iLocal_69 = 2;
			}
			break;
		
		case 2:
			func_222();
			func_7(&iLocal_182);
			func_7(&iLocal_183);
			if (func_116(1077936128, 1))
			{
				func_110(0);
			}
			break;
		
		case 3:
			if (func_37(iLocal_200))
			{
				if (!IS_PED_IN_VEHICLE(IS_PED_IN_VEHICLE(), iLocal_200, 0))
				{
					SET_PED_INTO_VEHICLE(SET_PED_INTO_VEHICLE(), iLocal_200, -1);
				}
				else
				{
					func_109(iLocal_200, vLocal_186, 146.5443f, 0, 1);
					func_40(1, 1, 1);
					iLocal_69 = 1;
				}
			}
			break;
	}
}

void func_222()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_79(iVar0);
		if (!IS_PED_INJURED(iVar1))
		{
			if (func_224(iVar1))
			{
				func_223(iVar1);
			}
		}
		iVar0++;
	}
}

int func_223(int iParam0)
{
	int iVar0;
	
	return 0;
	if (!IS_PED_INJURED(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_79(iVar0) != iParam0)
		{
			return 0;
		}
		if (!IS_BIT_SET(Global_94553, iVar0))
		{
			return 0;
		}
		CLEAR_BIT(&Global_94553, iVar0);
		return 1;
	}
	return 0;
}

int func_224(int iParam0)
{
	int iVar0;
	
	return 0;
	if (!IS_PED_INJURED(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_79(iVar0) != iParam0)
		{
			return 0;
		}
		if (IS_BIT_SET(Global_94553, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_225(int iParam0, vector3 vParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
{
	if ((iParam4 == 1 || iParam4 == 2) || iParam4 == 3)
	{
		if (iParam3 == 0)
		{
			func_117(iParam2, vParam1, 1);
			if (!bParam8)
			{
				if (func_37(iParam0))
				{
					if (IS_ENTITY_AT_COORD(iParam0, vParam1, fParam9, fParam9, 2f, true, true, 0))
					{
						return 1;
					}
				}
			}
			else if (IS_ENTITY_AT_COORD(IS_ENTITY_AT_COORD(), vParam1, fParam9, fParam9, 2f, true, true, 2))
			{
				return 1;
			}
			if (func_106(func_114(func_77()), 0, 0))
			{
				CLEAR_THIS_PRINT(func_114(func_77()));
			}
			if (!func_226())
			{
				func_121(func_115(func_77(), bParam7), iParam5);
			}
		}
	}
	else if (iParam3 == 0)
	{
		if (!*iParam6)
		{
			if (func_106(func_115(func_77(), 0), 0, 0))
			{
				CLEAR_THIS_PRINT(func_115(func_77(), 0));
			}
			func_105(func_114(func_77()), 7500, 0);
			*iParam6 = 1;
		}
	}
	return 0;
}

bool func_226()
{
	return Global_98721.f_345 > 0;
}

void func_227()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar2 = func_79(iVar0);
		if (!IS_PED_INJURED(iVar2))
		{
			if (func_78(iVar2, 0))
			{
				if (!bVar1)
				{
					if (func_157(PLAYER_PED_ID(), iVar2, 5f, 1))
					{
						if (!func_237())
						{
							func_232(iVar0);
							bVar1 = true;
						}
					}
				}
				if (!iLocal_374[iVar0])
				{
					if (iVar0 == 0)
					{
						func_98(&uLocal_205, iVar0, iVar2, "MICHAEL", 0, 1);
					}
					else if (iVar0 == 1)
					{
						func_98(&uLocal_205, iVar0, iVar2, "FRANKLIN", 0, 1);
					}
					else if (iVar0 == 2)
					{
						func_98(&uLocal_205, iVar0, iVar2, "TREVOR", 0, 1);
					}
					iLocal_374[iVar0] = 1;
				}
			}
			if (!func_224(iVar2))
			{
				if (func_78(iVar2, 0))
				{
					if (func_231(iVar2) || func_229(iVar2))
					{
						if (func_228(iVar2, 0))
						{
							SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, 1);
							SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, true);
							CLEAR_PED_TASKS(iVar2);
						}
					}
				}
			}
			else if (DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar2, 1))
			{
				if (func_231(iVar2))
				{
					if (GET_SCRIPT_TASK_STATUS(iVar2, -1273030092) != 1 && GET_SCRIPT_TASK_STATUS(iVar2, -1273030092) != 0)
					{
						if (_0xF7B79A50B905A30D(623.3781f, -172.26f, 1700.732f, -2115.843f))
						{
							TASK_VEHICLE_DRIVE_TO_COORD(iVar2, TASK_VEHICLE_DRIVE_TO_COORD(iVar2, 0), vLocal_186, 20f, 0, 0, 34340901, 2f, 10f);
						}
						else
						{
							_0x07FB139B592FA687(623.3781f, -172.26f, 1700.732f, -2115.843f);
						}
					}
				}
				else if (func_229(iVar2))
				{
					if (func_37(Local_199))
					{
						if (!func_157(iVar2, Local_199, 17f, 1))
						{
							if (GET_SCRIPT_TASK_STATUS(iVar2, -1273030092) != 1 && GET_SCRIPT_TASK_STATUS(iVar2, -1273030092) != 0)
							{
								TASK_VEHICLE_MISSION(iVar2, TASK_VEHICLE_MISSION(iVar2, 0), Local_199, 3, 20f, 786468, 2f, 0.5f, 1);
							}
						}
					}
				}
				else
				{
					func_223(iVar2);
				}
			}
		}
		iVar0++;
	}
}

int func_228(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!IS_PED_INJURED(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_79(iVar0) != iParam0)
		{
			return 0;
		}
		if (IS_BIT_SET(Global_94553, iVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == PLAYER_PED_ID())
			{
				return 0;
			}
		}
		if (IS_BIT_SET(Global_94552, iVar0))
		{
			SET_PED_INFINITE_AMMO(iParam0, 0, 0);
			SET_ENTITY_LOAD_COLLISION_FLAG(iParam0, false, 1);
			SET_BIT(&Global_94553, iVar0);
			return 1;
		}
	}
	return 0;
}

int func_229(int iParam0)
{
	int iVar0;
	
	if (!func_230())
	{
		if ((!IS_PED_INJURED(IS_PED_INJURED()) && IS_PED_INJURED(IS_PED_INJURED(), 0)) && IS_PED_INJURED(IS_PED_INJURED()) == 0)
		{
			iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
			if (func_37(iVar0))
			{
				if (IS_VEHICLE_MODEL(iVar0, joaat("trash")))
				{
					return 0;
				}
				if (IS_PED_IN_VEHICLE(iParam0, iVar0, 0) && IS_PED_IN_VEHICLE(iVar0, -1, 0) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_230()
{
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_96177.f_44 == 1;
	}
	return 0;
}

int func_231(int iParam0)
{
	if (!func_230())
	{
		if ((DOES_ENTITY_EXIST(Local_199) && DOES_ENTITY_EXIST(Local_199, 0)) && !DOES_ENTITY_EXIST(Local_199, vLocal_186, 2f, 2f, 2f, false, true, 0))
		{
			if ((!IS_PED_INJURED(IS_PED_INJURED()) && IS_PED_INJURED(IS_PED_INJURED(), Local_199, 0)) && IS_PED_INJURED(IS_PED_INJURED()) == 0)
			{
				if (IS_PED_IN_VEHICLE(iParam0, Local_199, 0) && IS_PED_IN_VEHICLE(Local_199, -1, 0) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_232(int iParam0)
{
	if (iLocal_68 > 1)
	{
		if (iLocal_70 > 0)
		{
			if (!IS_BIT_SET(Local_73[iParam0 /*8*/].f_7, 0) && iLocal_71 == 1)
			{
				if (!IS_MESSAGE_BEING_DISPLAYED())
				{
					if (func_236(&uLocal_205, cLocal_204, Local_73[iParam0 /*8*/][0], 8, 0, 0, 0))
					{
						SET_BIT(&(Local_73[iParam0 /*8*/].f_7), 0);
					}
				}
			}
		}
		else
		{
			if ((IS_BIT_SET(Local_73[iParam0 /*8*/].f_7, 0) && !IS_BIT_SET(Local_73[iParam0 /*8*/].f_7, 1)) && iLocal_71 == 1)
			{
				if (!IS_MESSAGE_BEING_DISPLAYED())
				{
					if (func_236(&uLocal_205, cLocal_204, Local_73[iParam0 /*8*/][1], 7, 0, 0, 0))
					{
						SET_BIT(&(Local_73[iParam0 /*8*/].f_7), 1);
					}
				}
			}
			if (!IS_BIT_SET(Local_73[iParam0 /*8*/].f_7, 5))
			{
				if (func_235(iLocal_200, vLocal_186, 1) < 15f && iLocal_71 == 1)
				{
					if (!IS_MESSAGE_BEING_DISPLAYED())
					{
						if (func_236(&uLocal_205, cLocal_204, Local_73[iParam0 /*8*/][5], 7, 0, 0, 0))
						{
							SET_BIT(&(Local_73[iParam0 /*8*/].f_7), 5);
						}
					}
				}
			}
			switch (func_29(PLAYER_PED_ID()))
			{
				case 0:
					if (iParam0 == 1)
					{
						if (!func_234(2))
						{
							func_233(iParam0, 2);
						}
					}
					else if (iParam0 == 2)
					{
						if (!func_234(4))
						{
							func_233(iParam0, 4);
						}
					}
					break;
				
				case 1:
					if (iParam0 == 0)
					{
						if (!func_234(2))
						{
							func_233(iParam0, 2);
						}
					}
					else if (iParam0 == 2)
					{
						if (!func_234(3))
						{
							func_233(iParam0, 3);
						}
					}
					break;
				
				case 2:
					if (iParam0 == 1)
					{
						if (!func_234(3))
						{
							func_233(iParam0, 3);
						}
					}
					else if (iParam0 == 0)
					{
						if (!func_234(4))
						{
							func_233(iParam0, 4);
						}
					}
					break;
				}
			}
	}
}

void func_233(int iParam0, int iParam1)
{
	if (!IS_BIT_SET(Local_73[iParam0 /*8*/].f_7, iParam1))
	{
		if (iLocal_375 != -1)
		{
			if (!IS_MESSAGE_BEING_DISPLAYED())
			{
				if (func_236(&uLocal_205, cLocal_204, Local_73[iParam0 /*8*/][iParam1], 7, 0, 0, 0))
				{
					SET_BIT(&(Local_73[iParam0 /*8*/].f_7), iParam1);
				}
			}
		}
		else if (!func_237() && !IS_MESSAGE_BEING_DISPLAYED())
		{
			iLocal_375 = GET_GAME_TIMER();
		}
		else
		{
			iLocal_375 = -1;
		}
	}
}

int func_234(int iParam0)
{
	if ((IS_BIT_SET(Local_73[0 /*8*/].f_7, iParam0) || IS_BIT_SET(Local_73[1 /*8*/].f_7, iParam0)) || IS_BIT_SET(Local_73[2 /*8*/].f_7, iParam0))
	{
		return 1;
	}
	return 0;
}

float func_235(int iParam0, vector3 vParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (!IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = { GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		vVar0 = { GET_ENTITY_COORDS(iParam0, false) };
	}
	return GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, bParam2);
}

bool func_236(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_95(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_83(sParam2, iParam3, 0);
}

int func_237()
{
	if (Global_20805 != 0 || IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_238()
{
	if (func_107(PLAYER_PED_ID(), vLocal_186, 220f))
	{
		if (!iLocal_203 && !func_107(PLAYER_PED_ID(), vLocal_186, 100f))
		{
			iLocal_203 = func_153(&iLocal_202, joaat("cavalcade2"), 1370.912f, -2060.055f, 50.9983f, 312.8686f, 1);
		}
	}
	else if (func_107(PLAYER_PED_ID(), vLocal_186, 240f))
	{
		if (iLocal_203)
		{
			func_6(&iLocal_202);
			iLocal_203 = 0;
		}
	}
}

void func_239()
{
	func_215(&iLocal_200, &iLocal_201, &iLocal_71, &iLocal_183, &iLocal_182, vLocal_186, Local_199, 0, 1090519040);
	func_214();
	func_155();
	switch (iLocal_69)
	{
		case 0:
			if (func_122(iLocal_68, bLocal_28))
			{
				func_125(&iLocal_182, Local_199, 1);
				func_121("PRA_GOVAN", &iLocal_181);
				iLocal_69 = 1;
			}
			break;
		
		case 1:
			func_227();
			if (func_37(Local_199))
			{
				func_242(&uLocal_56, Local_199, 0, 0, 1, 1, 1);
			}
			if (!bLocal_190)
			{
				if (func_341(Local_197) && IS_PED_BEING_JACKED(Local_197))
				{
					func_241();
				}
				if (func_341(Local_198) && IS_PED_BEING_JACKED(Local_198))
				{
					func_241();
				}
			}
			if (func_37(iLocal_200))
			{
				if ((iLocal_71 == 1 || iLocal_71 == 2) || iLocal_71 == 3)
				{
					_0x293220DA1B46CEBC(5f, 5f, 4);
					iLocal_69 = 2;
				}
			}
			break;
		
		case 2:
			func_7(&iLocal_182);
			func_145(&uLocal_56, 0, 0);
			func_110(0);
			break;
		
		case 3:
			func_8(&Local_197);
			func_8(&Local_198);
			if (func_37(Local_199))
			{
				SET_PED_INTO_VEHICLE(SET_PED_INTO_VEHICLE(), Local_199, -1);
			}
			func_240(1);
			func_40(1, 1, 1);
			iLocal_69 = 1;
			break;
	}
}

void func_240(bool bParam0)
{
	ENABLE_DISPATCH_SERVICE(1, bParam0);
	ENABLE_DISPATCH_SERVICE(2, bParam0);
	ENABLE_DISPATCH_SERVICE(3, bParam0);
	ENABLE_DISPATCH_SERVICE(4, bParam0);
	ENABLE_DISPATCH_SERVICE(5, bParam0);
	if (bParam0)
	{
		SET_WANTED_LEVEL_MULTIPLIER(1f);
		SET_MAX_WANTED_LEVEL(5);
	}
	else
	{
		SET_MAX_WANTED_LEVEL(0);
		SET_WANTED_LEVEL_MULTIPLIER(0f);
	}
}

void func_241()
{
	char* sVar0;
	
	switch (func_25())
	{
		case 0:
			sVar0 = "FBI4_JACKSM";
			break;
		
		case 1:
			sVar0 = "FBI4_JACKSF";
			break;
		
		case 2:
			sVar0 = "FBI4_JACKST";
			break;
	}
	bLocal_190 = func_236(&uLocal_205, "FBIPRAU", sVar0, 7, 0, 0, 0);
	if (bLocal_190)
	{
		_0x293220DA1B46CEBC(8f, 8f, 4);
	}
}

void func_242(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_243(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_243(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	func_244(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_244(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 1))
	{
		func_145(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_245(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_245(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam3;
	if (IS_STRING_NULL(iVar0))
	{
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_146(iVar0))
	{
		func_269();
	}
	if (func_268(iParam1) && IS_ENTITY_VISIBLE(iParam1))
	{
		iVar1 = 0;
		if (IS_ENTITY_A_PED(iParam1))
		{
			_TRACK_PED_VISIBILITY(_TRACK_PED_VISIBILITY(iParam1));
			GET_PED_FLOOD_INVINCIBILITY(GET_PED_FLOOD_INVINCIBILITY(iParam1), 1);
			if (IS_TRACKED_PED_VISIBLE(IS_TRACKED_PED_VISIBLE(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (IS_ENTITY_A_VEHICLE(iParam1))
		{
			TRACK_VEHICLE_VISIBILITY(TRACK_VEHICLE_VISIBILITY(iParam1));
			if (IS_VEHICLE_VISIBLE(IS_VEHICLE_VISIBLE(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (IS_ENTITY_AN_OBJECT(iParam1))
		{
			TRACK_OBJECT_VISIBILITY(TRACK_OBJECT_VISIBILITY(iParam1));
			if (IS_OBJECT_VISIBLE(IS_OBJECT_VISIBLE(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_263(uParam0, bParam5, bParam7, 0))
			{
				func_260(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_250(iVar0))
				{
					if ((IS_STRING_NULL(uParam0->f_3) && !IS_STRING_NULL(iVar0)) && IS_STRING_NULL(IS_STRING_NULL(), 0))
					{
						if ((iVar1 && !IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
						{
							if (!func_146(iVar0))
							{
								func_249(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
								{
									func_248(1);
								}
							}
						}
					}
				}
			}
			else if (func_250(iVar0))
			{
				if (IS_STRING_NULL(uParam0->f_3) && !IS_STRING_NULL(iVar0))
				{
					if (((IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !IS_ENTITY_ON_SCREEN()) && uParam6)
					{
						if (!func_146(iVar0))
						{
							func_249(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_248(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!IS_STRING_NULL(sParam3))
			{
				if (func_146(sParam3))
				{
					CLEAR_HELP(1);
				}
			}
			if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 1))
			{
				if (IS_PED_IN_ANY_BOAT(IS_PED_IN_ANY_BOAT()))
				{
					if (_0xEE778F8C7E1142E2(3) == 3 || _0xEE778F8C7E1142E2(3) == 4)
					{
						func_145(uParam0, iVar0, 1);
					}
				}
				else if (IS_PED_IN_ANY_HELI(IS_PED_IN_ANY_HELI()))
				{
					if (_0xEE778F8C7E1142E2(6) == 3 || _0xEE778F8C7E1142E2(6) == 4)
					{
						func_145(uParam0, iVar0, 1);
					}
				}
				else if (IS_PED_IN_ANY_PLANE(IS_PED_IN_ANY_PLANE()))
				{
					if (_0xEE778F8C7E1142E2(4) == 3 || _0xEE778F8C7E1142E2(4) == 4)
					{
						func_145(uParam0, iVar0, 1);
					}
				}
				else if (IS_PED_IN_ANY_SUB(IS_PED_IN_ANY_SUB()))
				{
					if (_0xEE778F8C7E1142E2(5) == 3 || _0xEE778F8C7E1142E2(5) == 4)
					{
						func_145(uParam0, iVar0, 1);
					}
				}
				else if (IS_PED_ON_ANY_BIKE(IS_PED_ON_ANY_BIKE()))
				{
					if (_0xEE778F8C7E1142E2(2) == 3 || _0xEE778F8C7E1142E2(2) == 4)
					{
						func_145(uParam0, iVar0, 1);
					}
				}
				else if (GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_145(uParam0, iVar0, 1);
				}
			}
			if (!func_263(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_247(uParam0))
				{
					func_246(uParam0);
				}
			}
		}
	}
	else
	{
		func_145(uParam0, iVar0, 0);
	}
}

void func_246(var uParam0)
{
	if (func_268(PLAYER_PED_ID()))
	{
		TASK_CLEAR_LOOK_AT(TASK_CLEAR_LOOK_AT());
	}
	if (IS_GAMEPLAY_HINT_ACTIVE())
	{
		SET_CINEMATIC_BUTTON_ACTIVE(true);
		STOP_GAMEPLAY_HINT(0);
		STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		ANIMPOSTFX_STOP("FocusIn");
		if (uParam0->f_11)
		{
			ANIMPOSTFX_PLAY("FocusOut", 0, 0);
			PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_247(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > GET_GAME_TIMER()
		{
			return 1;
		}
	}
	return 0;
}

int func_248(bool bParam0)
{
	switch (Global_41396)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_111560.f_10044.f_100++;
			}
			return Global_111560.f_10044.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_111560.f_10044.f_101++;
			}
			return Global_111560.f_10044.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_111560.f_10044.f_102++;
			}
			return Global_111560.f_10044.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_249(char* sParam0, int iParam1)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

int func_250(char* sParam0)
{
	if (!func_251(1, 1, 0))
	{
		if ((!IS_STRING_NULL_OR_EMPTY(sParam0) && func_146(sParam0)) || func_146("CMN_HINT"))
		{
			CLEAR_HELP(1);
		}
		return 0;
	}
	switch (Global_41396)
	{
		case 0:
		case 3:
			if (func_248(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_248(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_248(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_251(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!IS_PLAYER_CONTROL_ON(IS_PLAYER_CONTROL_ON()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (func_69(0))
	{
		return 0;
	}
	if (func_259())
	{
		return 0;
	}
	if (_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return 0;
	}
	if (Global_73784)
	{
		return 0;
	}
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_58652)
	{
		return 0;
	}
	if (bParam1)
	{
		if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 1))
		{
			if (IS_PED_IN_ANY_BOAT(IS_PED_IN_ANY_BOAT()))
			{
				if (_0xEE778F8C7E1142E2(3) == 3 || _0xEE778F8C7E1142E2(3) == 4)
				{
					return 0;
				}
			}
			else if (IS_PED_IN_ANY_HELI(IS_PED_IN_ANY_HELI()))
			{
				if (_0xEE778F8C7E1142E2(6) == 3 || _0xEE778F8C7E1142E2(6) == 4)
				{
					return 0;
				}
			}
			else if (IS_PED_IN_ANY_PLANE(IS_PED_IN_ANY_PLANE()))
			{
				if (_0xEE778F8C7E1142E2(4) == 3 || _0xEE778F8C7E1142E2(4) == 4)
				{
					return 0;
				}
			}
			else if (IS_PED_IN_ANY_SUB(IS_PED_IN_ANY_SUB()))
			{
				if (_0xEE778F8C7E1142E2(5) == 3 || _0xEE778F8C7E1142E2(5) == 4)
				{
					return 0;
				}
			}
			else if (IS_PED_ON_ANY_BIKE(IS_PED_ON_ANY_BIKE()))
			{
				if (_0xEE778F8C7E1142E2(2) == 3 || _0xEE778F8C7E1142E2(2) == 4)
				{
					return 0;
				}
			}
			else if (GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				return 0;
			}
			if (IS_GAMEPLAY_CAM_LOOKING_BEHIND())
			{
				return 0;
			}
		}
	}
	if ((func_258() || func_257(Global_4456448.f_190930)) || func_256())
	{
		if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
		{
			iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
			iVar1 = func_255(PLAYER_PED_ID(), 0);
			if (((_0xE33FFA906CE74880(iVar0, iVar1) || (_0xE33FFA906CE74880(iVar0) == 562680400 && iVar1 != -1)) || (_0xE33FFA906CE74880(iVar0) == 1181327175 && iVar1 != -1)) || (((_0xE33FFA906CE74880(iVar0) == -1693015116 && iVar1 == 0) && func_254(iVar0, 10)) && _0xE33FFA906CE74880(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1686915)
	{
		return 0;
	}
	if (func_252(PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_252(int iParam0)
{
	if (iParam0 != func_88())
	{
		if (func_253(iParam0, 1, 1))
		{
			return Global_2424073[iParam0 /*421*/].f_309.f_5 != -1;
		}
		else if ((Global_1312873 && iParam0 == PLAYER_ID()) && func_253(iParam0, 1, 0))
		{
			return Global_2424073[iParam0 /*421*/].f_309.f_5 != -1;
		}
	}
	return 0;
}

int func_253(int iParam0, bool bParam1, bool bParam2)
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

int func_254(int iParam0, int iParam1)
{
	if (IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (GET_NUM_MOD_KITS(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (GET_NUM_VEHICLE_MODS(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_255(int iParam0, int iParam1)
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

var func_256()
{
	return Global_2448961.f_17;
}

bool func_257(int iParam0)
{
	return iParam0 == 51;
}

var func_258()
{
	return Global_2448961.f_16;
}

bool func_259()
{
	return GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

void func_260(var uParam0, int iParam1, vector3 vParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1319113 == 1)
	{
		return;
	}
	if (IS_ENTITY_DEAD(iParam1, 0))
	{
		func_145(uParam0, 0, 0);
	}
	if (func_15(vParam2, 0f, 0f, 0f, 0))
	{
		if (IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!IS_PED_IN_ANY_VEHICLE(iVar0, 0))
			{
				if (IS_PED_A_PLAYER(iVar0))
				{
					if (!func_261())
					{
						vParam2 = { 0f, 0f, 1f };
					}
				}
				else if (IS_PED_MALE(iVar0))
				{
					vParam2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	SET_CINEMATIC_BUTTON_ACTIVE(false);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam3 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	SET_GAMEPLAY_ENTITY_HINT(iParam1, vParam2, 1, -1, iVar1, iVar2, iParam3);
	iVar3 = 2048;
	iVar4 = 3;
	TASK_LOOK_AT_ENTITY(TASK_LOOK_AT_ENTITY(), iParam1, -1, iVar3, iVar4);
	ANIMPOSTFX_PLAY("FocusIn", 0, 0);
	START_AUDIO_SCENE("HINT_CAM_SCENE");
	PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_261()
{
	return func_262(PLAYER_ID());
}

int func_262(int iParam0)
{
	if (GET_ENTITY_MODEL(GET_ENTITY_MODEL(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_263(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 1))
				{
					if (func_267(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_266(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_266(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_267(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_247(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((GET_GAME_TIMER() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 1))
					{
						if (!func_267(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_266(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_266(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_267(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 1))
				{
					if (!func_267(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_266(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_266(bParam1, bParam2, bParam3) || IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 1) || IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_267(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((GET_GAME_TIMER() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 1))
					{
						if (func_265(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_264(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 1) || func_264(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 1) || IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_265(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_247(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_251(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_269();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_264(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_251(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
	{
		if (!IS_PLAYER_TARGETTING_ANYTHING(IS_PLAYER_TARGETTING_ANYTHING()))
		{
			DISABLE_CONTROL_ACTION(0, 140, 1);
			DISABLE_CONTROL_ACTION(0, 80, 1);
			if (IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_265(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_251(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
	{
		DISABLE_CONTROL_ACTION(0, 80, 1);
		if (IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_266(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_251(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
	{
		if (!IS_PLAYER_TARGETTING_ANYTHING(IS_PLAYER_TARGETTING_ANYTHING()))
		{
			DISABLE_CONTROL_ACTION(0, 140, 1);
			DISABLE_CONTROL_ACTION(0, 80, 1);
			if (IS_DISABLED_CONTROL_PRESSED(0, 80) && IS_DISABLED_CONTROL_PRESSED() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_267(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_251(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
	{
		DISABLE_CONTROL_ACTION(0, 80, 1);
		if (IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (IS_DISABLED_CONTROL_PRESSED(0, 80) && IS_DISABLED_CONTROL_PRESSED() > Global_116)
			{
				SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_268(int iParam0)
{
	if (DOES_ENTITY_EXIST(iParam0))
	{
		if (IS_ENTITY_A_VEHICLE(iParam0))
		{
			if (IS_VEHICLE_DRIVEABLE(IS_VEHICLE_DRIVEABLE(iParam0), 0))
			{
				return 1;
			}
		}
		else if (IS_ENTITY_A_PED(iParam0))
		{
			if (!IS_PED_INJURED(IS_PED_INJURED(iParam0)))
			{
				return 1;
			}
		}
		else if (IS_ENTITY_AN_OBJECT(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_269()
{
	SET_BIT(&Global_7357, 4);
}

void func_270()
{
	switch (iLocal_69)
	{
		case 0:
			if (func_122(iLocal_68, 0))
			{
				func_284();
				func_282(33);
				SET_MAX_WANTED_LEVEL(2);
				SET_WANTED_LEVEL_MULTIPLIER(0.1f);
				if (func_357())
				{
					func_279(0, -1, 1);
					func_41(500, 1);
					iLocal_69 = 2;
				}
				else
				{
					if (func_33(0))
					{
						func_124(PLAYER_PED_ID(), 1228.635f, -348.4277f, 68.0929f, 86.7244f);
						func_272(1228.635f, -348.4277f, 68.0929f, 1112014848, 12, 5000, 0, 0);
						func_41(500, 1);
					}
					func_271();
					if (iLocal_68 == 2)
					{
						iLocal_69 = 0;
					}
					else
					{
						iLocal_69 = 2;
					}
				}
			}
			break;
		
		case 2:
			func_110(0);
			break;
	}
}

void func_271()
{
}

void func_272(vector3 vParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	iVar0 = FORMAT_FOCUS_HEADING(vParam0, iParam1, iParam2, 127);
	if (_0x07C313F94746702C(iVar0))
	{
		iVar1 = (GET_GAME_TIMER() + iParam3);
		while (!_0x7D41E9D2D17C5B2D(iVar0) && _0x7D41E9D2D17C5B2D() < iVar1)
		{
			if (bParam5)
			{
				func_274(0);
			}
			if (bParam4)
			{
				func_273();
			}
			wait(0);
		}
		if (GET_GAME_TIMER() < iVar1)
		{
		}
		_0x1EE7D8DF4425F053(iVar0);
	}
}

void func_273()
{
	Global_22211.f_6 = 1;
}

void func_274(int iParam0)
{
	if (func_278())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_69(0))
		{
			func_275(iParam0);
		}
		SET_BIT(&Global_7357, 2);
	}
}

void func_275(int iParam0)
{
	if (func_278())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_277())
		{
			func_276(1, 1);
		}
		else
		{
			func_276(0, 0);
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
	if (!func_51())
	{
		Global_19486.f_1 = 3;
	}
}

void func_276(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_69(0))
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

bool func_277()
{
	return IS_BIT_SET(Global_1687880, 5);
}

bool func_278()
{
	return IS_BIT_SET(Global_1687880, 19);
}

void func_279(int iParam0, int iParam1, int iParam2)
{
	if (func_357() && func_281())
	{
		while (Global_98664 != 6)
		{
			wait(0);
		}
		SET_GAME_PAUSED(false);
		if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()))
		{
			if (!IS_PED_INJURED(IS_PED_INJURED()))
			{
				CLEAR_PED_WETNESS(CLEAR_PED_WETNESS());
			}
		}
		if (iParam0 != 0)
		{
			if (!IS_PED_INJURED(IS_PED_INJURED()))
			{
				if (DOES_ENTITY_EXIST(iParam0))
				{
					if (IS_VEHICLE_DRIVEABLE(iParam0, 0))
					{
						if (!IS_PED_IN_VEHICLE(IS_PED_IN_VEHICLE(), iParam0, 0))
						{
							SET_PED_INTO_VEHICLE(SET_PED_INTO_VEHICLE(), iParam0, iParam1);
							SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							wait(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
			{
				SET_PLAYER_CONTROL(SET_PLAYER_CONTROL(), true, 0);
			}
		}
		ANIMPOSTFX_STOP_ALL();
		func_280(0);
	}
}

void func_280(int iParam0)
{
	if (iParam0 == 1)
	{
		SET_BIT(&(Global_98669.f_20), 13);
	}
	else
	{
		CLEAR_BIT(&(Global_98669.f_20), 13);
	}
}

bool func_281()
{
	return IS_BIT_SET(Global_98669.f_20, 13);
}

void func_282(int iParam0)
{
	Global_94554 = 0;
	switch (iParam0)
	{
		case 72:
			func_283(2);
			func_283(4);
			break;
		
		case 73:
			func_283(0);
			func_283(1);
			func_283(7);
			break;
		
		case 92:
			func_283(10);
			func_283(9);
			func_283(13);
			func_283(6);
			break;
		
		case 68:
			func_283(11);
			break;
		
		case 78:
			func_283(14);
			break;
		
		case 79:
			func_283(3);
			break;
		
		default:
			break;
	}
}

void func_283(int iParam0)
{
	SET_BIT(&Global_94554, iParam0);
}

void func_284()
{
	int iVar0;
	
	iVar0 = GET_PLAYERS_LAST_VEHICLE();
	if (DOES_ENTITY_EXIST(iVar0))
	{
		if (IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			func_285(iVar0, GET_ENTITY_COORDS(iVar0, true), GET_ENTITY_COORDS(iVar0), 24, 0);
		}
	}
}

void func_285(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)
{
	struct<60> Var0;
	
	if (DOES_ENTITY_EXIST(iParam0) && DOES_ENTITY_EXIST(iParam0, 0))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (DOES_ENTITY_EXIST(Global_75396.f_484[25]) && DOES_ENTITY_EXIST(Global_75396.f_484[25], 0))
			{
				if (Global_75396.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((IS_BIG_VEHICLE(iParam0) || IS_BIG_VEHICLE(iParam0) == joaat("bus")) || IS_BIG_VEHICLE(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_332(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_327(iParam0, &Var0);
		if (func_15(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { GET_ENTITY_COORDS(iParam0, true) };
			fParam2 = GET_ENTITY_HEADING(iParam0);
		}
		if (iParam3 == 24)
		{
			if (GET_HASH_KEY(GET_HASH_KEY()) != joaat("vehicle_gen_controller"))
			{
				Global_76384 = GET_HASH_KEY(GET_HASH_KEY());
			}
		}
		func_320(iParam3, &Var0, vParam1, fParam2, func_326(iParam0));
		func_286(iParam3, iParam0, 0);
	}
}

void func_286(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_317(&(Global_75396.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!IS_BIT_SET(Global_75396.f_555[0 /*21*/].f_9, 12) && !IS_BIT_SET(Global_75396.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_75396.f_555[0 /*21*/].f_4 != GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_76303 != -1 && Global_76303 != iParam0)
	{
		return;
	}
	if (DOES_ENTITY_EXIST(iParam1))
	{
		if (IS_VEHICLE_DRIVEABLE(iParam1, 0))
		{
			if (!IS_ENTITY_A_MISSION_ENTITY(iParam1))
			{
				SET_ENTITY_AS_MISSION_ENTITY(iParam1, true, 1);
			}
			if (iParam0 == 24)
			{
				Global_111560.f_32744.f_4801 = func_306();
			}
			if (iParam1 != Global_75396.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_305(iParam0);
					if ((DOES_ENTITY_EXIST(iVar0) && DOES_ENTITY_EXIST(iVar0, 0)) && iParam1 != iVar0)
					{
						func_287(iVar0, 145);
					}
				}
				Global_76302 = iParam1;
				Global_76303 = iParam0;
				Global_76304 = iParam2;
			}
		}
	}
}

void func_287(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_288(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
		if (!DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (DOES_ENTITY_EXIST(iVar0) && !DOES_ENTITY_EXIST(iVar0))
		{
			if (GET_ENTITY_MODEL(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (GET_ENTITY_MODEL(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (GET_ENTITY_MODEL(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_111560.f_2358.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (GET_ENTITY_MODEL(iParam0) == Global_111560.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!IS_STRING_NULL_OR_EMPTY(&(Global_111560.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (ARE_STRINGS_EQUAL(ARE_STRINGS_EQUAL(iParam0), &(Global_111560.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_111560.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_111560.f_32744.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (GET_ENTITY_MODEL(iParam0) == Global_111560.f_32744.f_5600[iVar1 /*78*/].f_66)
		{
			if (!IS_STRING_NULL_OR_EMPTY(&(Global_111560.f_32744.f_5600[iVar1 /*78*/].f_1)))
			{
				if (ARE_STRINGS_EQUAL(ARE_STRINGS_EQUAL(iParam0), &(Global_111560.f_32744.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_111560.f_32744.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_111560.f_32744.f_5590 = iParam1;
	Global_76301 = iParam0;
	Global_111560.f_32744.f_5588 = 1;
	func_327(iParam0, &(Global_111560.f_32744.f_5510));
}

int func_288(int iParam0)
{
	if ((((((((((!DOES_ENTITY_EXIST(iParam0) || !DOES_ENTITY_EXIST(iParam0, 0)) || func_303(iParam0, 0, 0)) || func_303(iParam0, 1, 0)) || func_303(iParam0, 2, 0)) || func_326(iParam0) != 145) || func_302(iParam0)) || func_301(iParam0)) || func_300(iParam0)) || func_299(iParam0)) || !func_289(DOES_ENTITY_EXIST(iParam0)))
	{
		if (func_301(iParam0))
		{
		}
		if (func_301(iParam0))
		{
		}
		if (func_303(iParam0, 0, 0))
		{
		}
		if (func_303(iParam0, 1, 0))
		{
		}
		if (func_303(iParam0, 2, 0))
		{
		}
		if (func_326(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_289(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_290(iParam0, 0))
	{
		return 0;
	}
	if (((IS_THIS_MODEL_A_BOAT(iParam0) || IS_THIS_MODEL_A_BOAT(iParam0)) || IS_THIS_MODEL_A_BOAT(iParam0)) || IS_THIS_MODEL_A_BOAT(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case 1938952078:
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_290(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("buffalo3") && !NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_298())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < GET_NUM_DLC_VEHICLES())
		{
			if (GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (_IS_DLC_DATA_EMPTY(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_297() && !func_296()) && !func_295()) && !func_294()) && !func_298())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((IS_DURANGO_VERSION() || IS_DURANGO_VERSION()) || IS_DURANGO_VERSION())
		{
		}
		else if (!func_295())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_293(iParam0))
		{
			return 0;
		}
	}
	if (!func_291(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_291(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_292())
	{
		return 1;
	}
	_0x897433D292B44130(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!_NETWORK_SHOP_DOES_ITEM_EXIST(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_292()
{
	if (IS_PC_VERSION())
	{
		return 0x7D2708796355B20B();
	}
	return 0;
}

int func_293(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2507711)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = 0xF12E6CD06C73D69E();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6599 && !Global_262145.f_12910) && iVar1 < Global_262145.f_12911)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14210 && iVar1 < Global_262145.f_14222)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14206 && iVar1 < Global_262145.f_14218)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14207 && iVar1 < Global_262145.f_14219)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14208 && iVar1 < Global_262145.f_14220)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14209 && iVar1 < Global_262145.f_14221)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14211 && iVar1 < Global_262145.f_14223)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14212 && iVar1 < Global_262145.f_14215)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14213 && iVar1 < Global_262145.f_14216)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14214 && iVar1 < Global_262145.f_14217)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16841 && iVar1 < Global_262145.f_16806)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16836 && iVar1 < Global_262145.f_16801)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16840 && iVar1 < Global_262145.f_16805)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16839 && iVar1 < Global_262145.f_16804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16833 && iVar1 < Global_262145.f_16798)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16834 && iVar1 < Global_262145.f_16799)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16837 && iVar1 < Global_262145.f_16802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16838 && iVar1 < Global_262145.f_16803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16835 && iVar1 < Global_262145.f_16800)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16843 && iVar1 < Global_262145.f_16808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16844 && iVar1 < Global_262145.f_16809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16832 && iVar1 < Global_262145.f_16797)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16831 && iVar1 < Global_262145.f_16796)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16830 && iVar1 < Global_262145.f_16795)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16842 && iVar1 < Global_262145.f_16807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16845 && iVar1 < Global_262145.f_16810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16846 && iVar1 < Global_262145.f_16811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16847 && iVar1 < Global_262145.f_16812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16848 && iVar1 < Global_262145.f_16813)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16995 && iVar1 < Global_262145.f_17017)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16996 && iVar1 < Global_262145.f_17018)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16997 && iVar1 < Global_262145.f_17019)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16998 && iVar1 < Global_262145.f_17020)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16999 && iVar1 < Global_262145.f_17021)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17000 && iVar1 < Global_262145.f_17022)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17002 && iVar1 < Global_262145.f_17023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17003 && iVar1 < Global_262145.f_17024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17004 && iVar1 < Global_262145.f_17025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17005 && iVar1 < Global_262145.f_17026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17006 && iVar1 < Global_262145.f_17027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17007 && iVar1 < Global_262145.f_17028)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17008 && iVar1 < Global_262145.f_17029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17014 && iVar1 < Global_262145.f_17036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17011 && iVar1 < Global_262145.f_17032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17012 && iVar1 < Global_262145.f_17033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17013 && iVar1 < Global_262145.f_17034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17001 && iVar1 < Global_262145.f_17035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17015 && iVar1 < Global_262145.f_17037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17009 && iVar1 < Global_262145.f_17030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17010 && iVar1 < Global_262145.f_17031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17016 && iVar1 < Global_262145.f_17038)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18647 && iVar1 < Global_262145.f_18744)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18648 && iVar1 < Global_262145.f_18745)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18649 && iVar1 < Global_262145.f_18746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18650 && iVar1 < Global_262145.f_18747)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18651 && iVar1 < Global_262145.f_18748)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18652 && iVar1 < Global_262145.f_18749)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18653 && iVar1 < Global_262145.f_18750)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18654 && iVar1 < Global_262145.f_18751)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18655 && iVar1 < Global_262145.f_18752)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18656 && iVar1 < Global_262145.f_18753)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18657 && iVar1 < Global_262145.f_18754)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18658 && iVar1 < Global_262145.f_18755)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18659 && iVar1 < Global_262145.f_18756)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18660 && iVar1 < Global_262145.f_18757)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18661 && iVar1 < Global_262145.f_18758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18662 && iVar1 < Global_262145.f_18759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18663 && iVar1 < Global_262145.f_18760)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18664 && iVar1 < Global_262145.f_18761)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18665 && iVar1 < Global_262145.f_18762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18666 && iVar1 < Global_262145.f_18763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18667 && iVar1 < Global_262145.f_18764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18668 && iVar1 < Global_262145.f_18765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18669 && iVar1 < Global_262145.f_18766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18670 && iVar1 < Global_262145.f_18767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18671 && iVar1 < Global_262145.f_18768)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1234311532)
	{
		if (!Global_262145.f_19728 && iVar1 < Global_262145.f_19724)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1405937764)
	{
		if (!Global_262145.f_19729 && iVar1 < Global_262145.f_19725)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 719660200)
	{
		if (!Global_262145.f_19730 && iVar1 < Global_262145.f_19726)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -982130927)
	{
		if (!Global_262145.f_19731 && iVar1 < Global_262145.f_19727)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 917809321)
	{
		if (!Global_262145.f_20607 && iVar1 < Global_262145.f_20615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223240013)
	{
		if (!Global_262145.f_20608 && iVar1 < Global_262145.f_20616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1504306544)
	{
		if (!Global_262145.f_20609 && iVar1 < Global_262145.f_20617)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1939284556)
	{
		if (!Global_262145.f_20610 && iVar1 < Global_262145.f_20618)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 159274291)
	{
		if (!Global_262145.f_20611 && iVar1 < Global_262145.f_20619)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 433954513)
	{
		if (!Global_262145.f_20612 && iVar1 < Global_262145.f_20620)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1763555241)
	{
		if (!Global_262145.f_21384 && iVar1 < Global_262145.f_21404)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -749299473)
	{
		if (!Global_262145.f_21396 && iVar1 < Global_262145.f_21416)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -975345305)
	{
		if (!Global_262145.f_21387 && iVar1 < Global_262145.f_21407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1700874274)
	{
		if (!Global_262145.f_21397 && iVar1 < Global_262145.f_21417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -392675425)
	{
		if (!Global_262145.f_21385 && iVar1 < Global_262145.f_21405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1043222410)
	{
		if (!Global_262145.f_21401 && iVar1 < Global_262145.f_21421)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1386191424)
	{
		if (!Global_262145.f_21399 && iVar1 < Global_262145.f_21419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1565978651)
	{
		if (!Global_262145.f_21400 && iVar1 < Global_262145.f_21420)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1036591958)
	{
		if (!Global_262145.f_21395 && iVar1 < Global_262145.f_21415)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -32878452)
	{
		if (!Global_262145.f_21402 && iVar1 < Global_262145.f_21422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -42959138)
	{
		if (!Global_262145.f_21398 && iVar1 < Global_262145.f_21418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1984275979)
	{
		if (!Global_262145.f_21394 && iVar1 < Global_262145.f_21414)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1007528109)
	{
		if (!Global_262145.f_21386 && iVar1 < Global_262145.f_21406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523619738)
	{
		if (!Global_262145.f_21388 && iVar1 < Global_262145.f_21408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1392481335)
	{
		if (!Global_262145.f_21389 && iVar1 < Global_262145.f_21409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -998177792)
	{
		if (!Global_262145.f_21390 && iVar1 < Global_262145.f_21410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1242608589)
	{
		if (!Global_262145.f_21391 && iVar1 < Global_262145.f_21411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1841130506)
	{
		if (!Global_262145.f_21392 && iVar1 < Global_262145.f_21412)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2049897956)
	{
		if (!Global_262145.f_21393 && iVar1 < Global_262145.f_21413)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1483171323)
	{
		if (!Global_262145.f_22345 && iVar1 < Global_262145.f_22373)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_262145.f_22346 && iVar1 < Global_262145.f_22374)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1693015116)
	{
		if (!Global_262145.f_22347 && iVar1 < Global_262145.f_22375)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -692292317)
	{
		if (!Global_262145.f_22348 && iVar1 < Global_262145.f_22376)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1435527158)
	{
		if (!Global_262145.f_22349 && iVar1 < Global_262145.f_22377)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181327175)
	{
		if (!Global_262145.f_22350 && iVar1 < Global_262145.f_22378)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1489874736)
	{
		if (!Global_262145.f_22351 && iVar1 < Global_262145.f_22379)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -212993243)
	{
		if (!Global_262145.f_22352 && iVar1 < Global_262145.f_22380)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 447548909)
	{
		if (!Global_262145.f_22353 && iVar1 < Global_262145.f_22381)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1561920505)
	{
		if (!Global_262145.f_22354 && iVar1 < Global_262145.f_22382)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1848994066)
	{
		if (!Global_262145.f_22355 && iVar1 < Global_262145.f_22383)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_262145.f_22356 && iVar1 < Global_262145.f_22384)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1104234922)
	{
		if (!Global_262145.f_22357 && iVar1 < Global_262145.f_22385)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1871995513)
	{
		if (!Global_262145.f_22358 && iVar1 < Global_262145.f_22386)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1352136073)
	{
		if (!Global_262145.f_22359 && iVar1 < Global_262145.f_22387)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -313185164)
	{
		if (!Global_262145.f_22360 && iVar1 < Global_262145.f_22388)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2079788230)
	{
		if (!Global_262145.f_22361 && iVar1 < Global_262145.f_22389)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 600450546)
	{
		if (!Global_262145.f_22362 && iVar1 < Global_262145.f_22390)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -410205223)
	{
		if (!Global_262145.f_22363 && iVar1 < Global_262145.f_22391)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 867799010)
	{
		if (!Global_262145.f_22364 && iVar1 < Global_262145.f_22392)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1529242755)
	{
		if (!Global_262145.f_22365 && iVar1 < Global_262145.f_22393)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 903794909)
	{
		if (!Global_262145.f_22366 && iVar1 < Global_262145.f_22394)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1532697517)
	{
		if (!Global_262145.f_22367 && iVar1 < Global_262145.f_22395)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15219735)
	{
		if (!Global_262145.f_22368 && iVar1 < Global_262145.f_22396)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 661493923)
	{
		if (!Global_262145.f_22369 && iVar1 < Global_262145.f_22397)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 838982985)
	{
		if (!Global_262145.f_22370 && iVar1 < Global_262145.f_22398)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -391595372)
	{
		if (!Global_262145.f_22371 && iVar1 < Global_262145.f_22399)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -121446169)
	{
		if (!Global_262145.f_22372 && iVar1 < Global_262145.f_22400)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1909189272)
	{
		if (!Global_262145.f_23561 && iVar1 < Global_262145.f_23577)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1617472902)
	{
		if (!Global_262145.f_23562 && iVar1 < Global_262145.f_23578)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1267543371)
	{
		if (!Global_262145.f_23566 && iVar1 < Global_262145.f_23582)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 931280609)
	{
		if (!Global_262145.f_23569 && iVar1 < Global_262145.f_23585)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1046206681)
	{
		if (!Global_262145.f_23574 && iVar1 < Global_262145.f_23590)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1259134696)
	{
		if (!Global_262145.f_23568 && iVar1 < Global_262145.f_23584)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1115909093)
	{
		if (!Global_262145.f_23560 && iVar1 < Global_262145.f_23576)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1031562256)
	{
		if (!Global_262145.f_23567 && iVar1 < Global_262145.f_23583)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -376434238)
	{
		if (!Global_262145.f_23573 && iVar1 < Global_262145.f_23589)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -986944621)
	{
		if (!Global_262145.f_23572 && iVar1 < Global_262145.f_23588)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1134706562)
	{
		if (!Global_262145.f_23563 && iVar1 < Global_262145.f_23579)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2120700196)
	{
		if (!Global_262145.f_23565 && iVar1 < Global_262145.f_23581)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -214906006)
	{
		if (!Global_262145.f_23575 && iVar1 < Global_262145.f_23591)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -988501280)
	{
		if (!Global_262145.f_23571 && iVar1 < Global_262145.f_23587)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1254014755)
	{
		if (!Global_262145.f_23564 && iVar1 < Global_262145.f_23580)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -726768679)
	{
		if (!Global_262145.f_23570 && iVar1 < Global_262145.f_23586)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1988428699)
	{
		if (!Global_262145.f_23651 && iVar1 < Global_262145.f_23638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 345756458)
	{
		if (!Global_262145.f_23652 && iVar1 < Global_262145.f_23639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1945374990)
	{
		if (!Global_262145.f_23657 && iVar1 < Global_262145.f_23644)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1653666139)
	{
		if (!Global_262145.f_23656 && iVar1 < Global_262145.f_23643)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 500482303)
	{
		if (!Global_262145.f_23654 && iVar1 < Global_262145.f_23641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2044532910)
	{
		if (!Global_262145.f_23660 && iVar1 < Global_262145.f_23647)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -638562243)
	{
		if (!Global_262145.f_23662 && iVar1 < Global_262145.f_23649)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1692272545)
	{
		if (!Global_262145.f_23663 && iVar1 < Global_262145.f_23650)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2069146067)
	{
		if (!Global_262145.f_23661 && iVar1 < Global_262145.f_23648)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -420911112)
	{
		if (!Global_262145.f_23653 && iVar1 < Global_262145.f_23640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 321186144)
	{
		if (!Global_262145.f_23655 && iVar1 < Global_262145.f_23642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -54332285)
	{
		if (!Global_262145.f_23659 && iVar1 < Global_262145.f_23646)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -307958377)
	{
		if (!Global_262145.f_23658 && iVar1 < Global_262145.f_23645)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1721676810)
	{
	}
	else if (iParam0 == -801550069)
	{
	}
	else if (iParam0 == 679453769)
	{
	}
	else if (iParam0 == 1909700336)
	{
	}
	else if (iParam0 == 2139203625)
	{
	}
	else if (iParam0 == -1890996696)
	{
	}
	else if (iParam0 == 2038858402)
	{
	}
	else if (iParam0 == -1146969353)
	{
	}
	else if (iParam0 == 1542143200)
	{
	}
	else if (iParam0 == -579747861)
	{
	}
	else if (iParam0 == 444994115)
	{
	}
	else if (iParam0 == 1637620610)
	{
	}
	else if (iParam0 == -755532233)
	{
	}
	else if (iParam0 == 540101442)
	{
	}
	else if (iParam0 == -1106120762)
	{
	}
	else if (iParam0 == -1478704292)
	{
	}
	else if (iParam0 == -2096690334)
	{
	}
	else if (iParam0 == 1591739866)
	{
		if (!Global_262145.f_25913 && iVar1 < Global_262145.f_25915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1168952148)
	{
		if (!Global_262145.f_24926 && iVar1 < Global_262145.f_24919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1566607184)
	{
		if (!Global_262145.f_24927 && iVar1 < Global_262145.f_24920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -331467772)
	{
		if (!Global_262145.f_24928 && iVar1 < Global_262145.f_24921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1279262537)
	{
		if (!Global_262145.f_24929 && iVar1 < Global_262145.f_24922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -49115651)
	{
		if (!Global_262145.f_25914 && iVar1 < Global_262145.f_25916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456744817)
	{
		if (!Global_262145.f_24930 && iVar1 < Global_262145.f_24923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -507495760)
	{
		if (!Global_262145.f_24931 && iVar1 < Global_262145.f_24924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -286046740)
	{
		if (!Global_262145.f_24932 && iVar1 < Global_262145.f_24925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1044193113)
	{
		if (!Global_262145.f_24937 && iVar1 < Global_262145.f_24958)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 686471183)
	{
		if (!Global_262145.f_24938 && iVar1 < Global_262145.f_24959)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -941272559)
	{
		if (!Global_262145.f_24939 && iVar1 < Global_262145.f_24960)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1829436850)
	{
		if (!Global_262145.f_24940 && iVar1 < Global_262145.f_24961)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -682108547)
	{
		if (!Global_262145.f_24941 && iVar1 < Global_262145.f_24962)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 722226637)
	{
		if (!Global_262145.f_24942 && iVar1 < Global_262145.f_24963)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1854776567)
	{
		if (!Global_262145.f_24943 && iVar1 < Global_262145.f_24964)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1862507111)
	{
		if (!Global_262145.f_24944 && iVar1 < Global_262145.f_24965)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -882629065)
	{
		if (!Global_262145.f_24945 && iVar1 < Global_262145.f_24966)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -362150785)
	{
		if (!Global_262145.f_24946 && iVar1 < Global_262145.f_24967)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 310284501)
	{
		if (!Global_262145.f_24947 && iVar1 < Global_262145.f_24968)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 916547552)
	{
		if (!Global_262145.f_24948 && iVar1 < Global_262145.f_24969)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1804415708)
	{
		if (!Global_262145.f_24949 && iVar1 < Global_262145.f_24970)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1934384720)
	{
		if (!Global_262145.f_24950 && iVar1 < Global_262145.f_24971)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1349095620)
	{
		if (!Global_262145.f_24951 && iVar1 < Global_262145.f_24972)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -208911803)
	{
		if (!Global_262145.f_24952 && iVar1 < Global_262145.f_24973)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -324618589)
	{
		if (!Global_262145.f_24953 && iVar1 < Global_262145.f_24974)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -664141241)
	{
		if (!Global_262145.f_24954 && iVar1 < Global_262145.f_24975)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1323778901)
	{
		if (!Global_262145.f_24955 && iVar1 < Global_262145.f_24976)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1620126302)
	{
		if (!Global_262145.f_24956 && iVar1 < Global_262145.f_24977)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -447711397)
	{
		if (!Global_262145.f_24957 && iVar1 < Global_262145.f_24978)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1118611807)
	{
		if (!Global_262145.f_27748 && iVar1 < Global_262145.f_27769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 409049982)
	{
		if (!Global_262145.f_27749 && iVar1 < Global_262145.f_27770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1756021720)
	{
		if (!Global_262145.f_27750 && iVar1 < Global_262145.f_27771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2031587082)
	{
		if (!Global_262145.f_27751 && iVar1 < Global_262145.f_27772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1693751655)
	{
		if (!Global_262145.f_27752 && iVar1 < Global_262145.f_27773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 987469656)
	{
		if (!Global_262145.f_27753 && iVar1 < Global_262145.f_27774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 872704284)
	{
		if (!Global_262145.f_27754 && iVar1 < Global_262145.f_27775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 408825843)
	{
		if (!Global_262145.f_27755 && iVar1 < Global_262145.f_27776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 740289177)
	{
		if (!Global_262145.f_27756 && iVar1 < Global_262145.f_27777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -834353991)
	{
		if (!Global_262145.f_27757 && iVar1 < Global_262145.f_27778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 301304410)
	{
		if (!Global_262145.f_27758 && iVar1 < Global_262145.f_27779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 960812448)
	{
		if (!Global_262145.f_27759 && iVar1 < Global_262145.f_27780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1284356689)
	{
		if (!Global_262145.f_27760 && iVar1 < Global_262145.f_27781)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 394110044)
	{
		if (!Global_262145.f_27761 && iVar1 < Global_262145.f_27782)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1938952078)
	{
		if (!Global_262145.f_27762 && iVar1 < Global_262145.f_27783)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_27763 && iVar1 < Global_262145.f_27784)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_27764 && iVar1 < Global_262145.f_27785)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_27765 && iVar1 < Global_262145.f_27786)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1254331310)
	{
		if (!Global_262145.f_27766 && iVar1 < Global_262145.f_27787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_27767 && iVar1 < Global_262145.f_27788)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_27768 && iVar1 < Global_262145.f_27789)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 340154634)
	{
		if ((!Global_262145.f_27791 && iVar1 < Global_262145.f_27792) && !Global_262145.f_27746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1960756985)
	{
		if ((!Global_262145.f_27794 && iVar1 < Global_262145.f_27795) && !Global_262145.f_27747)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1132721664)
	{
		if (!Global_262145.f_27799 && iVar1 < Global_262145.f_27802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 83136452)
	{
		if (!Global_262145.f_27800 && iVar1 < Global_262145.f_27803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456336509)
	{
		if (!Global_262145.f_27801 && iVar1 < Global_262145.f_27804)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_294()
{
	return 0;
}

int func_295()
{
	return 1;
}

int func_296()
{
	return 1;
}

int func_297()
{
	if (IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_298()
{
	int iVar0;
	
	if (NETWORK_IS_SIGNED_IN())
	{
		if (_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (_0x593570C289A77688())
			{
				STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				SET_BIT(&iVar0, 2);
				SET_BIT(&iVar0, 4);
				SET_BIT(&iVar0, 6);
				SET_BIT(&Global_25, 2);
				SET_BIT(&Global_25, 4);
				SET_BIT(&Global_25, 6);
				STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (_0x5AA3BEFA29F03AD4())
				{
					iVar0 = GET_PROFILE_SETTING(866);
					SET_BIT(&iVar0, 0);
					_UNLOCK_EXCLUS_CONTENT(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_150394 == 2)
	{
		return 1;
	}
	else if (Global_150394 == 3)
	{
		return 0;
	}
	if (_0x5AA3BEFA29F03AD4())
	{
		if (IS_BIT_SET(IS_BIT_SET(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_299(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = GET_ENTITY_MODEL(iParam0);
	sVar1 = GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_290(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_300(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (DOES_ENTITY_EXIST(Global_96060[iVar0]))
		{
			if (Global_96060[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_301(int iParam0)
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(iParam0) && DOES_ENTITY_EXIST(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (DOES_ENTITY_EXIST(Global_96030[iVar0]) && DOES_ENTITY_EXIST(Global_96030[iVar0], 0))
			{
				if (Global_96030[iVar0] == iParam0 && GET_ENTITY_MODEL(Global_96030[iVar0]) == GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_302(int iParam0)
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(Global_75396.f_484[24]))
	{
		if (iParam0 == Global_75396.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (DOES_ENTITY_EXIST(Global_75396.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_75396.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_303(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!DOES_ENTITY_EXIST(iParam0) || !DOES_ENTITY_EXIST(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_304(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || IS_BIT_SET(Global_111560.f_7224[iVar2], 0))
		{
			if (IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_304(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_305(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_75396.f_139[iParam0];
}

var func_306()
{
	var uVar0;
	
	func_316(&uVar0, GET_CLOCK_SECONDS());
	func_315(&uVar0, GET_CLOCK_MINUTES());
	func_314(&uVar0, GET_CLOCK_HOURS());
	func_309(&uVar0, GET_CLOCK_DAY_OF_MONTH());
	func_308(&uVar0, GET_CLOCK_MONTH());
	func_307(&uVar0, GET_CLOCK_YEAR());
	return uVar0;
}

void func_307(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || shift_left((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_308(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_309(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_313(*uParam0);
	iVar1 = func_311(*uParam0);
	if (iParam1 < 1 || iParam1 > func_310(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_310(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_311(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_312(IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_312(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_313(var uParam0)
{
	return uParam0 & 15;
}

void func_314(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_315(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_316(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_317(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_318(0, 1);
			uParam0->f_12 = 0;
			SET_BIT(&(uParam0->f_9), 20);
			SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_318(0, 1);
			uParam0->f_12 = 0;
			SET_BIT(&(uParam0->f_9), 20);
			SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_318(1, 1);
			uParam0->f_12 = 1;
			SET_BIT(&(uParam0->f_9), 20);
			SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_318(1, 2);
			uParam0->f_12 = 1;
			SET_BIT(&(uParam0->f_9), 19);
			SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_318(1, 1);
			uParam0->f_12 = 1;
			SET_BIT(&(uParam0->f_9), 20);
			SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_318(1, 2);
			uParam0->f_12 = 1;
			SET_BIT(&(uParam0->f_9), 19);
			SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_318(2, 1);
			uParam0->f_12 = 2;
			SET_BIT(&(uParam0->f_9), 20);
			SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_318(2, 1);
			uParam0->f_12 = 2;
			SET_BIT(&(uParam0->f_9), 20);
			SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_318(2, 1);
			uParam0->f_12 = 2;
			SET_BIT(&(uParam0->f_9), 20);
			SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			SET_BIT(&(uParam0->f_9), 0);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 14);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			SET_BIT(&(uParam0->f_9), 0);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 14);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			SET_BIT(&(uParam0->f_9), 0);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 14);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			SET_BIT(&(uParam0->f_9), 0);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 14);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 22);
			SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			SET_BIT(&(uParam0->f_9), 0);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 14);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 22);
			SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			SET_BIT(&(uParam0->f_9), 0);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 14);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 22);
			SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			SET_BIT(&(uParam0->f_9), 0);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 14);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			SET_BIT(&(uParam0->f_9), 0);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 14);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			SET_BIT(&(uParam0->f_9), 0);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 14);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 23);
			SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			SET_BIT(&(uParam0->f_9), 0);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 14);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 24);
			SET_BIT(&(uParam0->f_9), 28);
			SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			SET_BIT(&(uParam0->f_9), 0);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 14);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 24);
			SET_BIT(&(uParam0->f_9), 28);
			SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			SET_BIT(&(uParam0->f_9), 0);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 14);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 24);
			SET_BIT(&(uParam0->f_9), 28);
			SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 27);
			SET_BIT(&(uParam0->f_9), 24);
			SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 27);
			SET_BIT(&(uParam0->f_9), 24);
			SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 27);
			SET_BIT(&(uParam0->f_9), 24);
			SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 11);
			SET_BIT(&(uParam0->f_9), 13);
			SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 11);
			SET_BIT(&(uParam0->f_9), 13);
			SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			SET_BIT(&(uParam0->f_9), 9);
			SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			SET_BIT(&(uParam0->f_9), 9);
			SET_BIT(&(uParam0->f_9), 23);
			SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			SET_BIT(&(uParam0->f_9), 23);
			SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			SET_BIT(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = 1938952078;
			SET_BIT(&(uParam0->f_9), 23);
			SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			SET_BIT(&(uParam0->f_9), 2);
			SET_BIT(&(uParam0->f_9), 30);
			SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			SET_BIT(&(uParam0->f_9), 2);
			SET_BIT(&(uParam0->f_9), 22);
			SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_298())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			SET_BIT(&(uParam0->f_9), 13);
			SET_BIT(&(uParam0->f_9), 2);
			SET_BIT(&(uParam0->f_9), 1);
			SET_BIT(&(uParam0->f_9), 23);
			SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_298())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			SET_BIT(&(uParam0->f_9), 13);
			SET_BIT(&(uParam0->f_9), 2);
			SET_BIT(&(uParam0->f_9), 1);
			SET_BIT(&(uParam0->f_9), 23);
			SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			SET_BIT(&(uParam0->f_9), 0);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 23);
			SET_BIT(&(uParam0->f_9), 6);
			SET_BIT(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			SET_BIT(&(uParam0->f_9), 30);
			SET_BIT(&(uParam0->f_9), 23);
			SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			SET_BIT(&(uParam0->f_9), 30);
			SET_BIT(&(uParam0->f_9), 23);
			SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (IS_BIT_SET(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_111560.f_32744.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_15(Global_111560.f_32744.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111560.f_32744.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_111560.f_32744.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_111560.f_32744.f_1934[uParam0->f_14];
		}
	}
	if (IS_BIT_SET(uParam0->f_9, 19))
	{
		if (!func_15(Global_111560.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111560.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111560.f_2358.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_15(Global_111560.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111560.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111560.f_2358.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_318(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_28(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_319(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_319(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_111560.f_9080.f_99.f_58[128] && !Global_111560.f_9080.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_111560.f_9080.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_111560.f_9080.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_320(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)
{
	if (func_317(&(Global_75396.f_555[0 /*21*/]), iParam0))
	{
		if (IS_BIT_SET(Global_75396.f_555[0 /*21*/].f_9, 10))
		{
			func_325(iParam0);
			func_324(uParam1, &(Global_111560.f_32744.f_69[Global_75396.f_555[0 /*21*/].f_14 /*78*/]));
			if (IS_BIT_SET(Global_75396.f_555[0 /*21*/].f_9, 11))
			{
				Global_111560.f_32744.f_1864[Global_75396.f_555[0 /*21*/].f_14 /*3*/] = { vParam2 };
				Global_111560.f_32744.f_1934[Global_75396.f_555[0 /*21*/].f_14] = fParam3;
			}
			else
			{
				Global_111560.f_32744.f_1864[Global_75396.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_111560.f_32744.f_1934[Global_75396.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_111560.f_32744.f_1958[Global_75396.f_555[0 /*21*/].f_14] = iParam4 + 1;
			func_321(iParam0, 1);
		}
	}
}

void func_321(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_323(iParam0, 0))
		{
			func_322(iParam0, 1, 0);
			func_322(iParam0, 2, 0);
			func_322(iParam0, 3, 0);
			func_322(iParam0, 4, 0);
			func_322(iParam0, 0, 1);
			Global_75396[iParam0] = 1;
		}
	}
	else
	{
		func_322(iParam0, 0, 0);
	}
}

void func_322(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		SET_BIT(&(Global_111560.f_32744[iParam0]), iParam1);
	}
	else
	{
		CLEAR_BIT(&(Global_111560.f_32744[iParam0]), iParam1);
	}
}

bool func_323(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return IS_BIT_SET(Global_111560.f_32744[iParam0], iParam1);
}

void func_324(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

void func_325(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_317(&(Global_75396.f_555[0 /*21*/]), iParam0))
	{
		if (DOES_ENTITY_EXIST(Global_75396.f_139[iParam0]))
		{
			SET_ENTITY_AS_MISSION_ENTITY(Global_75396.f_139[iParam0], true, 1);
			SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_75396.f_139[iParam0]));
			Global_75396.f_139[iParam0] = 0;
		}
		if (IS_BIT_SET(Global_75396.f_555[0 /*21*/].f_9, 13))
		{
			func_321(iParam0, 0);
		}
	}
}

int func_326(int iParam0)
{
	int iVar0;
	
	if (!DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (DOES_ENTITY_EXIST(Global_96030[iVar0]))
		{
			if (Global_96030[iVar0] == iParam0)
			{
				return Global_96040[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_327(int iParam0, var uParam1)
{
	int iVar0;
	
	if (IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_331(uParam1);
		uParam1->f_66 = GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_67 = GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_69 = GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_70 = GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			SET_BIT(&(uParam1->f_77), 28);
		}
		if (_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			SET_BIT(&(uParam1->f_77), 29);
		}
		if (_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			SET_BIT(&(uParam1->f_77), 30);
		}
		if (_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_330(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			uParam1->f_68 = GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (_VEHICLE_HAS_LANDING_GEAR(iParam0))
			{
				switch (GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						CLEAR_BIT(&(uParam1->f_77), 23);
						SET_BIT(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						CLEAR_BIT(&(uParam1->f_77), 23);
						CLEAR_BIT(&(uParam1->f_77), 22);
						break;
					
					case 5:
						SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				SET_BIT(&(uParam1->f_77), 23);
			}
		}
		if (!GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			SET_BIT(&(uParam1->f_77), 9);
		}
		if (IS_VEHICLE_STOLEN(iParam0))
		{
			SET_BIT(&(uParam1->f_77), 10);
		}
		if (GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			SET_BIT(&(uParam1->f_77), 13);
			GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			SET_BIT(&(uParam1->f_77), 12);
		}
		func_329(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				SET_BIT(&(uParam1->f_77), func_328(iVar0 + 1));
			}
			iVar0++;
		}
		if (_DOES_VEHICLE_HAVE_DECAL(iParam0, 0))
		{
			SET_BIT(&(uParam1->f_77), 11);
		}
		else
		{
			CLEAR_BIT(&(uParam1->f_77), 11);
		}
		if (DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave"))
		{
			SET_BIT(&(uParam1->f_77), 27);
		}
		else
		{
			CLEAR_BIT(&(uParam1->f_77), 27);
		}
	}
}

int func_328(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_329(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		return 0;
	}
	if (GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				switch (0x3DFF319A831E0CDB(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_330(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case -998177792:
			return 1;
		
		default:
	}
	return 0;
}

void func_331(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

void func_332(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_325(iParam0);
	func_321(iParam0, 0);
}

void func_333()
{
	func_336();
	func_334();
}

void func_334()
{
	if (!iLocal_188)
	{
		if (func_37(iLocal_200))
		{
			if (IS_PED_IN_VEHICLE(IS_PED_IN_VEHICLE(), iLocal_200, 0))
			{
				func_66(iLocal_200, -1);
				func_65(iLocal_200, 318);
				iLocal_188 = 1;
			}
		}
	}
	if (!iLocal_189)
	{
		if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) > 0)
		{
			func_335(320, 0);
			iLocal_189 = 1;
		}
	}
	else if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) == 0)
	{
		func_64(0, 320);
		iLocal_189 = 0;
	}
}

void func_335(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_61481 = iParam0;
	if (!Global_61479)
	{
		Global_61479 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_73566)
		{
			if (Global_73567[iVar0 /*9*/] == iParam0)
			{
				Global_73567[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_336()
{
}

void func_337()
{
	if (!bLocal_28 && iLocal_68 != 5)
	{
		if (iLocal_68 > 0)
		{
			func_338();
		}
	}
}

void func_338()
{
	float fVar0;
	int iVar1;
	
	fVar0 = 600f;
	if (!func_37(iLocal_200))
	{
		if (!func_37(iLocal_201) && !func_37(Local_199))
		{
			func_340(1);
			return;
		}
		if (func_37(Local_199) && !func_157(PLAYER_PED_ID(), Local_199, fVar0, 1))
		{
			func_340(2);
		}
	}
	else
	{
		iVar1 = 0;
		if (!func_157(PLAYER_PED_ID(), iLocal_200, fVar0, 1))
		{
			iVar1++;
		}
		if (func_37(iLocal_201))
		{
			if (!func_157(PLAYER_PED_ID(), iLocal_201, fVar0, 1))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (func_37(Local_199))
		{
			if (!func_157(PLAYER_PED_ID(), Local_199, fVar0, 1))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (iVar1 >= 3)
		{
			func_340(2);
			return;
		}
		iVar1 = 0;
		if (func_339(iLocal_200))
		{
			iVar1++;
		}
		if (func_37(iLocal_201))
		{
			if (func_339(iLocal_201))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (func_37(Local_199))
		{
			if (func_339(Local_199))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (iVar1 >= 3)
		{
			func_340(3);
			return;
		}
	}
}

int func_339(int iParam0)
{
	if (func_37(iParam0))
	{
		if (((IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 7000) || IS_VEHICLE_STUCK_TIMER_UP(iParam0, 3, 30000)) || IS_VEHICLE_STUCK_TIMER_UP(iParam0, 2, 30000)) || IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_340(int iParam0)
{
	CLEAR_PRINTS();
	func_61();
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			sLocal_179 = "PRA_FWRECK";
			break;
		
		case 2:
			sLocal_179 = "PRA_FFAR";
			break;
		
		case 3:
			sLocal_179 = "PRA_FSTUCK";
			break;
	}
	iLocal_68 = 5;
	iLocal_69 = 0;
}

int func_341(int iParam0)
{
	if (func_10(iParam0))
	{
		if (!IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_342()
{
	if (!func_102(36))
	{
		func_343(21, 0, 0);
	}
}

void func_343(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_355(iParam0, 0, 0))
		{
			if (iParam2 && Global_98721.f_18[iParam0])
			{
				if (func_354(iParam0) == 3 && !func_353(iParam0))
				{
					func_352(iParam0);
					func_351(iParam0, 0, 0);
					func_345(iParam0, 1, 0);
					func_344(iParam0);
				}
				else
				{
					func_351(iParam0, 1, 0);
					func_344(iParam0);
				}
			}
			else
			{
				func_351(iParam0, 0, 0);
				func_345(iParam0, 1, 0);
				func_344(iParam0);
			}
		}
		else
		{
			func_345(iParam0, 1, 0);
			func_344(iParam0);
		}
	}
	else if (func_355(iParam0, 0, 0))
	{
		func_345(iParam0, 0, 0);
		func_345(iParam0, 1, 0);
		func_344(iParam0);
	}
}

void func_344(int iParam0)
{
	Global_98721.f_181[iParam0] = 1;
	Global_98721.f_180 = 1;
}

void func_345(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		CLEAR_BIT(&(Global_98721.f_1357[iParam0]), iParam1);
	}
	else if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_350() == 0)
		{
			iVar0 = func_348(func_349(iParam0), -1, 0);
			CLEAR_BIT(&iVar0, iParam1);
			func_346(func_349(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		CLEAR_BIT(&(Global_111560.f_668[iParam0]), iParam1);
	}
}

void func_346(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_347(iParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_347(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_47();
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

int func_348(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_347(iParam1)];
	if (STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_349(int iParam0)
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

int func_350()
{
	return Global_30736;
}

void func_351(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		SET_BIT(&(Global_98721.f_1357[iParam0]), iParam1);
	}
	else if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_350() == 0)
		{
			iVar0 = func_348(func_349(iParam0), -1, 0);
			SET_BIT(&iVar0, iParam1);
			func_346(func_349(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		SET_BIT(&(Global_111560.f_668[iParam0]), iParam1);
	}
}

void func_352(int iParam0)
{
	if (Global_98721.f_18[iParam0])
	{
		func_351(iParam0, 10, 1);
		func_351(iParam0, 19, 1);
	}
}

bool func_353(int iParam0)
{
	return func_355(iParam0, 5, 1);
}

int func_354(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
	}
	return 6;
}

int func_355(int iParam0, int iParam1, bool bParam2)
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
		if (func_350() == 0)
		{
			return IS_BIT_SET(func_348(func_349(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return IS_BIT_SET(Global_111560.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_356(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_357())
	{
		SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		CLEAR_BIT(&(Global_98669.f_20), 2);
		SET_GAME_PAUSED(true);
		if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
		{
			SET_PLAYER_CONTROL(SET_PLAYER_CONTROL(), false, 0);
		}
		Global_98665 = { vParam0 };
		Global_98668 = fParam1;
		Global_98664 = 1;
		if (iParam2 == 1)
		{
			SET_BIT(&(Global_98669.f_20), 14);
		}
		else
		{
			CLEAR_BIT(&(Global_98669.f_20), 14);
		}
		if (iParam3 == 1)
		{
			SET_BIT(&(Global_98669.f_20), 24);
		}
		else
		{
			CLEAR_BIT(&(Global_98669.f_20), 24);
		}
		func_280(1);
	}
}

int func_357()
{
	if (Global_98669 == 10 || Global_98669 == 9)
	{
		return 1;
	}
	return 0;
}

void func_358()
{
	func_373();
	func_371();
	func_364();
	func_361();
	func_359();
}

void func_359()
{
	iLocal_374[0] = 0;
	iLocal_374[1] = 0;
	iLocal_374[2] = 0;
	Local_73[0 /*8*/] = { func_360("FP1_WANTM", "FP1_LOSTM", "FP1_THEREM", "FP1_CHATFM", "", "FP1_CHATTM") };
	Local_73[1 /*8*/] = { func_360("FP1_WANTT", "FP1_LOSTT", "FP1_THERET", "FP1_CHATFM", "FP1_CHATFT", "") };
	Local_73[2 /*8*/] = { func_360("FP1_WANTF", "FP1_LOSTF", "FP1_THEREF", "", "FP1_CHATFT", "FP1_CHATTM") };
}

struct<8> func_360(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	struct<8> Var0;
	
	Var0 = 6;
	Var0[0] = sParam0;
	Var0[1] = sParam1;
	Var0[5] = sParam2;
	Var0[2] = sParam3;
	Var0[3] = sParam4;
	Var0[4] = sParam5;
	return Var0;
}

void func_361()
{
	Local_46[0 /*25*/] = { func_363(1203.146f, -337.3543f, 67.9314f, 1245.118f, -348.5059f, 68.2099f, 253.1908f, 0) };
	func_362(&(Local_46[0 /*25*/]), vLocal_185, 0, 15f, 5f, 270f, 3, 1192.006f, -631.4703f, 61.6972f, 10f, 10f, 5f);
	Local_46[1 /*25*/] = { func_363(1215.084f, -339.3139f, 68.1323f, 964.9214f, -555.212f, 58.0211f, 39.645f, 0) };
	func_362(&(Local_46[1 /*25*/]), vLocal_185, 0, 15f, 10f, 270f, 3, 1103.29f, -764.532f, 56.633f, 10f, 10f, 5f);
	Local_46[2 /*25*/] = { func_363(1179.533f, -361.3286f, 67.4559f, 929.8701f, -619.4534f, 56.4632f, 164.3631f, 0) };
	func_362(&(Local_46[2 /*25*/]), vLocal_185, 0, 15f, 10f, 270f, 3, 933.3745f, -615.9453f, 56.3041f, 10f, 10f, 5f);
	Local_46[3 /*25*/] = { func_363(1107.674f, -364.0569f, 65.9581f, 1099.266f, -775.0809f, 57.3525f, 178.2038f, 0) };
	func_362(&(Local_46[3 /*25*/]), vLocal_185, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_46[4 /*25*/] = { func_363(1069.279f, -393.5795f, 66.0262f, 1065.364f, -389.9561f, 66.1504f, 220.1611f, 0) };
	func_362(&(Local_46[4 /*25*/]), vLocal_185, 0, 5f, 30f, 128.1732f, 3, 1069.718f, -393.9912f, 66.0261f, 10f, 10f, 5f);
	Local_46[5 /*25*/] = { func_363(1031.673f, -424.599f, 64.5439f, 1027.179f, -420.6656f, 64.6268f, 178.2038f, joaat("p_binbag_01_s")) };
	func_362(&(Local_46[5 /*25*/]), 1028.201f, -428.3677f, 64.3571f, 1, 15f, 2f, 128.3915f, 1, 1027.179f, -420.6656f, 64.6268f, 10f, 10f, 5f);
	Local_46[6 /*25*/] = { func_363(942.1528f, -488.8956f, 59.3129f, 932.0198f, -489.3886f, 58.9212f, 202.5785f, joaat("p_binbag_01_s")) };
	func_362(&(Local_46[6 /*25*/]), 930.7186f, -494.9253f, 58.616f, 1, 15f, 2f, 119.6518f, 1, 952.9781f, -482.5082f, 60.0003f, 10f, 10f, 5f);
	Local_46[7 /*25*/] = { func_363(868.2734f, -529.5473f, 56.2071f, 865.0042f, -522.4746f, 56.3363f, 241.9711f, joaat("p_binbag_01_s")) };
	func_362(&(Local_46[7 /*25*/]), 865.2349f, -535.8759f, 56.1574f, 1, 15f, 2f, 162.7219f, 1, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_46[8 /*25*/] = { func_363(874.8076f, -571.2073f, 56.2987f, 983.125f, -541.9902f, 58.5929f, 49.7653f, 0) };
	func_362(&(Local_46[8 /*25*/]), vLocal_185, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_46[9 /*25*/] = { func_363(931.5218f, -614.2144f, 56.3119f, 928.6471f, -620.711f, 56.4611f, -108.06f, joaat("p_binbag_01_s")) };
	func_362(&(Local_46[9 /*25*/]), 940.4086f, -622.1787f, 56.3003f, 1, 15f, 2f, 228.1176f, 1, 918.6716f, -602.9258f, 56.3395f, 10f, 10f, 5f);
	Local_46[10 /*25*/] = { func_363(964.9758f, -645.9614f, 56.4465f, 927.1033f, -575.4162f, 56.5329f, 55.9317f, 0) };
	func_362(&(Local_46[10 /*25*/]), vLocal_185, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_46[11 /*25*/] = { func_363(983.4438f, -683.1442f, 56.4087f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_362(&(Local_46[11 /*25*/]), vLocal_185, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_46[12 /*25*/] = { func_363(1016.261f, -731.546f, 56.555f, 1011.801f, -733.0652f, 56.7435f, 314.5626f, joaat("p_binbag_01_s")) };
	func_362(&(Local_46[12 /*25*/]), 1020.251f, -736.815f, 56.6235f, 1, 15f, 2f, 220.7804f, 1, 1011.238f, -724.7085f, 56.5183f, 10f, 10f, 5f);
	Local_46[13 /*25*/] = { func_363(1164.126f, -762.2866f, 56.6656f, 1099.342f, -775.4273f, 57.3525f, 177.5729f, 0) };
	func_362(&(Local_46[13 /*25*/]), vLocal_185, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_46[14 /*25*/] = { func_363(1199.339f, -678.0995f, 59.9051f, 1205.415f, -672.1282f, 60.1445f, 105.2374f, 0) };
	func_362(&(Local_46[14 /*25*/]), vLocal_185, 0, 15f, 2f, 12.1103f, 3, 1199.339f, -678.0995f, 59.9051f, 10f, 10f, 5f);
	Local_46[15 /*25*/] = { func_363(1183.445f, -582.9476f, 63.0962f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_362(&(Local_46[15 /*25*/]), vLocal_185, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_46[16 /*25*/] = { func_363(1192.479f, -485.1086f, 64.7195f, 1264.359f, -719.084f, 63.328f, 65.0519f, 0) };
	func_362(&(Local_46[16 /*25*/]), vLocal_185, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_46[17 /*25*/] = { func_363(1212.693f, -400.0532f, 67.0971f, 1284.109f, -676.728f, 65.0225f, 69.9898f, 0) };
	func_362(&(Local_46[17 /*25*/]), vLocal_185, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_46[18 /*25*/] = { func_363(1114.573f, -232.3706f, 68.0949f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_362(&(Local_46[18 /*25*/]), vLocal_185, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	iLocal_187 = 19;
}

void func_362(var uParam0, vector3 vParam1, int iParam2, float fParam3, float fParam4, float fParam5, int iParam6, vector3 vParam7, vector3 vParam8)
{
	uParam0->f_3 = { vParam1 };
	uParam0->f_6 = fParam3;
	uParam0->f_7 = fParam4;
	uParam0->f_8 = fParam5;
	uParam0->f_9 = iParam2;
	uParam0->f_10 = iParam6;
	uParam0->f_11 = { vParam7 };
	uParam0->f_14 = { vParam8 };
}

struct<25> func_363(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3)
{
	struct<25> Var0;
	
	Var0.f_9 = 1;
	Var0.f_10 = 3;
	Var0 = { vParam0 };
	Var0.f_19 = { vParam1 };
	Var0.f_22 = fParam2;
	Var0.f_23 = iParam3;
	return Var0;
}

void func_364()
{
	vector3 vVar0[6];
	
	vVar0[0 /*3*/] = { 1251.308f, -400.6231f, 68.0926f };
	vVar0[1 /*3*/] = { 1183.993f, -403.3443f, 66.8734f };
	vVar0[2 /*3*/] = { 1161.54f, -372.6073f, 66.6034f };
	vVar0[3 /*3*/] = { 1167.644f, -273.7987f, 67.9705f };
	vVar0[4 /*3*/] = { 1252.362f, -247.353f, 77.5631f };
	vVar0[5 /*3*/] = { 1330.062f, -341.0342f, 100.3476f };
	func_365(&vVar0, 6);
}

void func_365(var uParam0, int iParam1)
{
	int iVar0;
	
	func_370(&uLocal_74);
	iVar0 = 0;
	while (iVar0 <= (iParam1 - 1))
	{
		func_369(&uLocal_74, *(uParam0[iVar0 /*3*/]));
		iVar0++;
	}
	func_368(&uLocal_74);
	func_366(&uLocal_126, &uLocal_74, 50f);
}

void func_366(var uParam0, var uParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	
	if (uParam1->f_46 < 3)
	{
	}
	iVar0 = (uParam1->f_46 - 1);
	iVar1 = 0;
	iVar2 = 1;
	uParam0->f_46 = uParam1->f_46;
	while (iVar1 < uParam1->f_46)
	{
		vVar3 = { *(uParam1[iVar1 /*3*/]) - *(uParam1[iVar0 /*3*/]) };
		vVar4 = { *(uParam1[iVar2 /*3*/]) - *(uParam1[iVar1 /*3*/]) };
		vVar3 = { vVar3 / FtoV(sqrt(((vVar3.x * vVar3.x) + (vVar3.y * vVar3.y)))) };
		vVar4 = { vVar4 / FtoV(sqrt(((vVar4.x * vVar4.x) + (vVar4.y * vVar4.y)))) };
		vVar5 = { vVar3 - vVar4 };
		vVar5 = { vVar5 / FtoV(sqrt(((vVar5.x * vVar5.x) + (vVar5.y * vVar5.y)))) };
		if (func_367(uParam1, *(uParam1[iVar1 /*3*/]) + vVar5))
		{
			vVar5 = { -vVar5 };
		}
		*(uParam0[iVar1 /*3*/]) = { *(uParam1[iVar1 /*3*/]) + vVar5 * Vector(fParam2, fParam2, fParam2) };
		iVar0 = iVar1;
		iVar1++;
		iVar2 = (iVar2 + 1 % uParam1->f_46);
	}
}

bool func_367(var uParam0, struct<2> Param1, Vector3 vParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_46 < 3)
	{
	}
	bVar0 = false;
	iVar1 = 0;
	iVar2 = (uParam0->f_46 - 1);
	while (iVar1 < uParam0->f_46)
	{
		if (((uParam0[iVar1 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar2 /*3*/])->f_1 >= Param1.f_1) || ((uParam0[iVar2 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar1 /*3*/])->f_1 >= Param1.f_1))
		{
			if (((*uParam0)[iVar1 /*3*/] + (((Param1.f_1 - (uParam0[iVar1 /*3*/])->f_1) / ((uParam0[iVar2 /*3*/])->f_1 - (uParam0[iVar1 /*3*/])->f_1)) * ((*uParam0)[iVar2 /*3*/] - (*uParam0)[iVar1 /*3*/]))) < Param1)
			{
				bVar0 = !bVar0;
			}
		}
		iVar2 = iVar1;
		iVar1++;
	}
	return bVar0;
}

void func_368(var uParam0)
{
	int iVar0;
	float fVar1;
	
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 < 3)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		uParam0->f_47 = { uParam0->f_47 + *(uParam0[iVar0 /*3*/]) };
		iVar0++;
	}
	uParam0->f_47 = { uParam0->f_47 / FtoV(to_float(iVar0)) };
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		fVar1 = vdist2(uParam0->f_47, *(uParam0[iVar0 /*3*/]));
		if (fVar1 > uParam0->f_50)
		{
			uParam0->f_50 = fVar1;
		}
		iVar0++;
	}
	uParam0->f_50 = sqrt(uParam0->f_50);
	uParam0->f_51 = 0;
}

void func_369(var uParam0, vector3 vParam1)
{
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 >= 15)
	{
	}
	*(uParam0[uParam0->f_46 /*3*/]) = { vParam1 };
	uParam0->f_46++;
}

void func_370(var uParam0)
{
	if (uParam0->f_51)
	{
	}
	uParam0->f_46 = 0;
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_50 = 0f;
	uParam0->f_51 = 1;
}

void func_371()
{
	Local_197 = { func_372(1200.61f, -344.2721f, 68.0424f, 269.2015f, joaat("s_m_y_garbage")) };
	Local_198 = { func_372(1202.42f, -341.6034f, 67.9378f, 273.1125f, joaat("s_m_y_garbage")) };
}

struct<14> func_372(vector3 vParam0, float fParam1, int iParam2)
{
	struct<14> Var0;
	
	Var0.f_1 = { vParam0 };
	Var0.f_4 = fParam1;
	Var0.f_5 = iParam2;
	return Var0;
}

void func_373()
{
	Local_199 = { func_374(1203.146f, -337.3543f, 67.9314f, 189.7047f, joaat("trash")) };
}

struct<6> func_374(vector3 vParam0, float fParam1, int iParam2)
{
	struct<6> Var0;
	
	Var0.f_1 = { vParam0 };
	Var0.f_4 = fParam1;
	Var0.f_5 = iParam2;
	return Var0;
}

void func_375()
{
	func_240(1);
	func_386(1);
	SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trash"), false);
	SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), false);
	SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("s_m_y_garbage"), false);
	func_63();
	func_385();
	func_384();
	func_376(0);
	TERMINATE_THIS_THREAD();
}

void func_376(bool bParam0)
{
	vector3 vVar0;
	
	if (bParam0)
	{
	}
	SET_PLAYER_CONTROL(SET_PLAYER_CONTROL(), true, 0);
	SET_SCENARIO_TYPE_ENABLED("DRIVE", true);
	SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_ATTRACTOR", true);
	SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_PASSENGERS", true);
	SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", true);
	func_38();
	func_383();
	func_382();
	func_381();
	func_380();
	func_222();
	if (bParam0)
	{
		if (DOES_ENTITY_EXIST(iLocal_200))
		{
			if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()))
			{
				if (!IS_PED_INJURED(IS_PED_INJURED()))
				{
					if (IS_PED_IN_VEHICLE(IS_PED_IN_VEHICLE(), iLocal_200, 0))
					{
						vVar0 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true) };
						SET_ENTITY_COORDS(SET_ENTITY_COORDS(), vVar0, 1, false, 0, 1);
					}
				}
			}
		}
		func_378();
		CLEAR_PRINTS();
		func_2();
	}
	else
	{
		func_377();
	}
	_0x3DDA37128DD1ACA8(0);
	func_145(&uLocal_56, 0, 0);
	if (DOES_CAM_EXIST(iLocal_184))
	{
		RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
		DESTROY_CAM(iLocal_184, 0);
	}
}

void func_377()
{
	func_3();
	func_6(&Local_199);
	func_6(&iLocal_201);
	func_6(&iLocal_200);
	func_5(&Local_197, 1, 0, 1);
	func_5(&Local_198, 1, 0, 1);
	func_6(&iLocal_202);
}

void func_378()
{
	Global_19671 = 0;
	func_379();
}

void func_379()
{
	RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		STOP_SCRIPTED_CONVERSATION(false);
		Global_20805 = 6;
	}
}

void func_380()
{
}

void func_381()
{
	if (iLocal_194)
	{
		REMOVE_VEHICLE_ASSET(joaat("trash"));
	}
}

void func_382()
{
}

void func_383()
{
	SET_MODEL_AS_NO_LONGER_NEEDED(Local_199.f_5);
}

void func_384()
{
	func_343(21, 1, 0);
}

void func_385()
{
	Global_94554 = 0;
}

void func_386(int iParam0)
{
	Global_96005 = iParam0;
}

void func_387()
{
	int iVar0;
	
	if (HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_111560.f_9080 || func_33(0))
	{
		if (!func_388())
		{
			iVar0 = func_32();
			if (iVar0 != -1)
			{
				if (!func_19(iVar0))
				{
					return;
				}
				SET_BIT(&(Global_89451[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_24();
		}
	}
}

int func_388()
{
	if (((Global_98669 == 13 || Global_98669 == 10) || Global_98669 == 11) || Global_98669 == 12)
	{
		return 0;
	}
	return 1;
}

__________________________
Native Named by Reliency
1577160593
__________________________
