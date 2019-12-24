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
	var uLocal_45 = 0;
	float fLocal_46 = 0f;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	vector3 vLocal_51[16] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_52[16] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	vector3 vLocal_53 = { 0f, 0f, 0f };
	vector3 vLocal_54 = { 0f, 0f, 0f };
	vector3 vLocal_55 = { 0f, 0f, 0f };
	vector3 vLocal_56 = { 0f, 0f, 0f };
	float fLocal_57 = 0f;
	vector3 vLocal_58 = { 0f, 0f, 0f };
	vector3 vLocal_59 = { 0f, 0f, 0f };
	float fLocal_60 = 0f;
	vector3 vLocal_61 = { 0f, 0f, 0f };
	vector3 vLocal_62 = { 0f, 0f, 0f };
	float fLocal_63 = 0f;
	vector3 vLocal_64 = { 0f, 0f, 0f };
	vector3 vLocal_65 = { 0f, 0f, 0f };
	float fLocal_66 = 0f;
	vector3 vLocal_67 = { 0f, 0f, 0f };
	vector3 vLocal_68 = { 0f, 0f, 0f };
	float fLocal_69 = 0f;
	vector3 vLocal_70 = { 0f, 0f, 0f };
	vector3 vLocal_71 = { 0f, 0f, 0f };
	float fLocal_72 = 0f;
	vector3 vLocal_73 = { 0f, 0f, 0f };
	vector3 vLocal_74 = { 0f, 0f, 0f };
	float fLocal_75 = 0f;
	bool bLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	bool bLocal_79 = 0;
	int iLocal_80 = 0;
	bool bLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	bool bLocal_84 = 0;
	int iLocal_85 = 0;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	var uLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97[2] = { 0, 0 };
	int iLocal_98[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102[4] = { 0, 0, 0, 0 };
	int iLocal_103[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_104 = 0;
	var uLocal_105[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
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
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 8;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 4;
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
	var uLocal_151 = 4;
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
	var uLocal_166 = 4;
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
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 4;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 4;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 4;
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
	var uLocal_226 = 4;
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
	var uLocal_241 = 4;
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
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	char* sLocal_262 = NULL;
	char* sLocal_263 = NULL;
	char* sLocal_264 = NULL;
	char* sLocal_265 = NULL;
	char* sLocal_266 = NULL;
	char* sLocal_267 = NULL;
	char* sLocal_268 = NULL;
	char* sLocal_269 = NULL;
	int iLocal_270 = 0;
	var uLocal_271 = 16;
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
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	int iLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 5;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 5;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	
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
	fLocal_46 = -1f;
	vLocal_53 = { -1109.213f, 4914.744f, 216.101f };
	vLocal_54 = { -1034.6f, 4918.6f, 205.9f };
	vLocal_55 = { -1066.963f, 4873.13f, 207.3281f };
	vLocal_56 = { -1112.946f, 4986.957f, 241.133f };
	fLocal_57 = 72.3125f;
	vLocal_58 = { -1138.386f, 4872.04f, 207.5488f };
	vLocal_59 = { -1091.959f, 4983.27f, 241.1698f };
	fLocal_60 = 57.8125f;
	vLocal_61 = { -1171.648f, 4888.658f, 211.0756f };
	vLocal_62 = { -1137.907f, 4926.572f, 240.999f };
	fLocal_63 = 17.9375f;
	vLocal_64 = { -1177.981f, 4903.231f, 212.477f };
	vLocal_65 = { -1153.398f, 4902.631f, 241.155f };
	fLocal_66 = 17.9375f;
	vLocal_67 = { -1175.693f, 4904.839f, 207.5207f };
	vLocal_68 = { -1142.08f, 4985.32f, 241.2887f };
	fLocal_69 = 36.375f;
	vLocal_70 = { -1106.212f, 4860.086f, 206.1207f };
	vLocal_71 = { -1105.016f, 4873.854f, 241.1453f };
	fLocal_72 = 11.5625f;
	vLocal_73 = { -1044.268f, 4916.587f, 209.8365f };
	vLocal_74 = { -1063.605f, 4972.88f, 241.1299f };
	fLocal_75 = 12.875f;
	iLocal_96 = 4;
	iLocal_261 = "REPLAY_TMG";
	sLocal_262 = "CMN_TDIED";
	if (HAS_FORCE_CLEANUP_OCCURRED(26))
	{
		func_196();
	}
	if (_GET_SHOW_PED_IN_PAUSE_MENU())
	{
		TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		wait(0);
		if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_77)
		{
			SET_WANTED_LEVEL_MULTIPLIER(0f);
			switch (iLocal_50)
			{
				case 0:
					if (!IS_PED_INJURED(IS_PED_INJURED()))
					{
						if (Global_111560.f_24990.f_5 >= iLocal_96 && !func_195())
						{
							iLocal_50 = 2;
						}
						func_192();
						func_189();
					}
					break;
				
				case 1:
					SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME());
					if (!IS_PED_INJURED(IS_PED_INJURED()))
					{
						if (timera() > 2000)
						{
							if (iLocal_91 == 1)
							{
								func_188();
							}
							else if (iLocal_91 == 2)
							{
								func_159();
							}
						}
						if (timera() > 1300)
						{
							if (iLocal_93 < 3)
							{
								func_158();
							}
							else
							{
								func_157();
							}
						}
						if (iLocal_78)
						{
							func_144(26, 1);
							iLocal_78 = 0;
							iLocal_50 = 0;
						}
					}
					break;
				
				case 2:
					SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME());
					if (!IS_PED_INJURED(IS_PED_INJURED()))
					{
						func_116();
					}
					_SET_DOOR_ACCELERATION_LIMIT(Global_40519[9 /*31*/], 0, false, true);
					_SET_DOOR_ACCELERATION_LIMIT(Global_40519[10 /*31*/], 0, false, true);
					break;
				
				case 4:
					if (!IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
					{
						iLocal_50 = 3;
						break;
					}
					bLocal_79 = false;
					SET_WANTED_LEVEL_MULTIPLIER(0f);
					iVar0 = 0;
					while (iVar0 < iLocal_98)
					{
						if (IS_PED_INJURED(iLocal_98[iVar0]))
						{
							if (DOES_BLIP_EXIST(uLocal_105[iVar0]))
							{
								REMOVE_BLIP(&(uLocal_105[iVar0]));
							}
						}
						else
						{
							if (IS_PED_IN_WRITHE(iLocal_98[iVar0]))
							{
								if (DOES_BLIP_EXIST(uLocal_105[iVar0]))
								{
									REMOVE_BLIP(&(uLocal_105[iVar0]));
								}
							}
							else if (IS_ENTITY_AT_ENTITY(iLocal_98[iVar0], IS_ENTITY_AT_ENTITY(), 30f, 30f, 30f, 0, 1, 0))
							{
								if (!func_115())
								{
									if (iLocal_95 < GET_GAME_TIMER())
									{
										iVar1 = GET_RANDOM_INT_IN_RANGE(0, 3);
										if (iVar1 == 0)
										{
											func_100(&uLocal_271, "ACULTAU", "ACULT_SHOUT", 4, 0, 0, 0);
										}
										else if (iVar1 == 1)
										{
											func_99(&uLocal_271, 1, iLocal_98[iVar0], "ACULTMember1", 0, 1);
											func_100(&uLocal_271, "ACULTAU", "ACULT_FIGHT1", 4, 0, 0, 0);
										}
										else if (iVar1 == 2)
										{
											func_99(&uLocal_271, 2, iLocal_98[iVar0], "ACULTMember2", 0, 1);
											func_100(&uLocal_271, "ACULTAU", "ACULT_FIGHT2", 4, 0, 0, 0);
										}
										iLocal_95 = (GET_GAME_TIMER() + GET_GAME_TIMER(4500, 6000));
									}
								}
							}
							bLocal_79 = true;
						}
						iVar0++;
					}
					if (!bLocal_79)
					{
						func_63();
					}
					break;
				
				case 3:
					if (!iLocal_77)
					{
						iLocal_109 = func_62();
						if (!HAS_SCALEFORM_MOVIE_LOADED(iLocal_109))
						{
							break;
						}
						func_61(&uLocal_114, 0);
						iLocal_77 = 1;
					}
					if (func_32(&uLocal_114, &uLocal_120, &iLocal_109, iLocal_261, sLocal_262, &bLocal_76, 78))
					{
						iLocal_94 = 0;
						REMOVE_RELATIONSHIP_GROUP(iLocal_270);
						REMOVE_COVER_POINT(iLocal_108);
						iVar0 = 0;
						while (iVar0 < iLocal_98)
						{
							if (DOES_ENTITY_EXIST(iLocal_98[iVar0]))
							{
								DELETE_PED(&(iLocal_98[iVar0]));
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 < iLocal_103)
						{
							if (DOES_ENTITY_EXIST(iLocal_103[iVar0]))
							{
								DELETE_OBJECT(&(iLocal_103[iVar0]));
							}
							iVar0++;
						}
						if (DOES_CAM_EXIST(iLocal_106))
						{
							SET_CAM_ACTIVE(iLocal_106, false);
						}
						if (DOES_ENTITY_EXIST(iLocal_101))
						{
							DELETE_OBJECT(&iLocal_101);
						}
						if (DOES_ENTITY_EXIST(iLocal_101))
						{
							DELETE_OBJECT(&iLocal_101);
						}
						if (bLocal_76)
						{
							func_11();
							func_3(0);
							func_1(1);
							iLocal_77 = 0;
							iLocal_50 = 2;
						}
						else
						{
							iLocal_77 = 0;
							func_196();
						}
					}
					break;
			}
		}
		else if (bLocal_81)
		{
		}
		else
		{
			func_196();
		}
	}
}

void func_1(bool bParam0)
{
	if (bParam0)
	{
		SET_FADE_IN_AFTER_DEATH_ARREST(0);
		_DISABLE_AUTOMATIC_RESPAWN(1);
		SET_FADE_OUT_AFTER_DEATH(0);
		func_2(1);
		Global_93957 = 1;
	}
	else
	{
		SET_FADE_IN_AFTER_DEATH_ARREST(1);
		_DISABLE_AUTOMATIC_RESPAWN(0);
		SET_FADE_OUT_AFTER_DEATH(1);
		func_2(0);
		Global_93957 = 0;
	}
}

void func_2(bool bParam0)
{
	if ((Global_41396 == 9 || Global_41396 == 10) || Global_41396 == 5)
	{
		Global_110209 = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_110209 = 0;
	}
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_10();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			SET_BIT(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_9(0))
		{
			func_4(0);
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

void func_4(int iParam0)
{
	if (func_8())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_7())
		{
			func_6(1, 1);
		}
		else
		{
			func_6(0, 0);
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
	if (!func_5())
	{
		Global_19486.f_1 = 3;
	}
}

int func_5()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_9(0))
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

bool func_7()
{
	return IS_BIT_SET(Global_1687880, 5);
}

bool func_8()
{
	return IS_BIT_SET(Global_1687880, 19);
}

int func_9(int iParam0)
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

void func_10()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_11()
{
	func_22();
	func_14(0, 1);
	func_12(0, 1);
}

void func_12(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		func_14(0, 0);
		ANIMPOSTFX_PLAY("DeathFailOut", 0, 0);
		SET_BIT(&iLocal_48, 1);
		func_13(1, 2, 0);
		_SET_CAM_EFFECT(2);
	}
	else
	{
		if (IS_BIT_SET(iLocal_48, 1) || iParam1)
		{
			ANIMPOSTFX_STOP("DeathFailOut");
			func_13(0, 2, 1);
			_SET_CAM_EFFECT(0);
		}
		CLEAR_BIT(&iLocal_48, 1);
	}
}

void func_13(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		SET_BIT(&iLocal_48, 2);
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (iParam1 == 1)
			{
				SET_TIME_SCALE(0.2f);
			}
			else
			{
				SET_TIME_SCALE(0.075f);
			}
		}
	}
	else
	{
		if (IS_BIT_SET(iLocal_48, 2) || iParam2)
		{
			if (!NETWORK_IS_GAME_IN_PROGRESS())
			{
				SET_TIME_SCALE(1f);
			}
		}
		CLEAR_BIT(&iLocal_48, 2);
	}
}

void func_14(int iParam0, int iParam1)
{
	char* sVar0;
	
	switch (func_15())
	{
		case 0:
			sVar0 = "DeathFailMichaelIn";
			break;
		
		case 1:
			sVar0 = "DeathFailFranklinIn";
			break;
		
		case 2:
			sVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 1)
	{
		if (!IS_BIT_SET(iLocal_48, 0) || iParam1)
		{
			ANIMPOSTFX_PLAY(sVar0, 0, 0);
			SET_BIT(&iLocal_48, 0);
			func_13(1, 1, 0);
			_SET_CAM_EFFECT(1);
		}
	}
	else
	{
		if (IS_BIT_SET(iLocal_48, 0) || iParam1)
		{
			ANIMPOSTFX_STOP(sVar0);
			func_13(0, 1, 1);
			_SET_CAM_EFFECT(0);
		}
		CLEAR_BIT(&iLocal_48, 0);
	}
}

int func_15()
{
	func_16();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_16()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()))
	{
		if (func_20(Global_111560.f_2358.f_539.f_4321) != GET_ENTITY_MODEL(GET_ENTITY_MODEL()))
		{
			iVar0 = func_19(PLAYER_PED_ID());
			if (func_18(iVar0) && (!func_17(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_18(Global_111560.f_2358.f_539.f_4321))
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

bool func_17(int iParam0)
{
	return Global_41396 == iParam0;
}

bool func_18(int iParam0)
{
	return iParam0 < 3;
}

int func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_20(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_20(int iParam0)
{
	if (func_18(iParam0))
	{
		return func_21(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_21(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_22()
{
	iLocal_48 = 0;
	iLocal_49 = 0;
	func_23(0, 1, 1, 0, 0, 0);
	func_3(1);
}

void func_23(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		SPECIAL_ABILITY_DEACTIVATE_FAST(SPECIAL_ABILITY_DEACTIVATE_FAST());
		SET_ALL_RANDOM_PEDS_FLEE(SET_ALL_RANDOM_PEDS_FLEE(), 1);
		SET_POLICE_IGNORE_PLAYER(SET_POLICE_IGNORE_PLAYER(), 1);
		func_31(1);
		_0xA8FDB297A8D25FBA();
		THEFEED_PAUSE();
		if (Global_19486.f_1 > 3)
		{
			if (IS_MOBILE_PHONE_CALL_ONGOING())
			{
				STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_5())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_30(1, iParam3, iParam2, 0);
		Global_61477 = 1;
		Global_73787 = 1;
		Global_76575 = 1;
	}
	else
	{
		func_31(0);
		THEFEED_RESUME();
		Global_61477 = 0;
		if (bParam1)
		{
			_0x03FC694AE06C5A20();
		}
		SET_ALL_RANDOM_PEDS_FLEE(SET_ALL_RANDOM_PEDS_FLEE(), 0);
		SET_POLICE_IGNORE_PLAYER(SET_POLICE_IGNORE_PLAYER(), 0);
		func_30(0, iParam3, iParam2, 0);
		if (NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!IS_PED_INJURED(IS_PED_INJURED()) && !func_28(IS_PED_INJURED())) && !func_25(IS_PED_INJURED(), 0)) && !func_24()) && !bParam4) && !bParam5)
			{
				SET_ENTITY_INVINCIBLE(SET_ENTITY_INVINCIBLE(), false);
			}
		}
		else if (((!IS_PED_INJURED(IS_PED_INJURED()) && !func_28(IS_PED_INJURED())) && !bParam4) && !bParam5)
		{
			SET_ENTITY_INVINCIBLE(SET_ENTITY_INVINCIBLE(), false);
		}
		Global_76575 = 0;
	}
}

bool func_24()
{
	return IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_39.f_18, 14);
}

bool func_25(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER_ID())
	{
		bVar0 = func_26(-1, 0) == 8;
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

int func_26(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_27();
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

int func_27()
{
	return Global_1312745;
}

int func_28(int iParam0)
{
	if (func_25(iParam0, 0))
	{
		return 1;
	}
	if (func_29())
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

bool func_29()
{
	return IS_BIT_SET(Global_2359302, 3);
}

int func_30(int iParam0, int iParam1, var uParam2, int iParam3)
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

void func_31(int iParam0)
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

int func_32(var uParam0, var uParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			START_AUDIO_SCENE("DEATH_SCENE");
			PLAY_SOUND_FRONTEND(-1, "ScreenFlash", "WastedSounds", true);
			func_60(&(uParam0->f_1));
			func_22();
			func_59(uParam1, (0.15f * 0.075f), 0.5f);
			SET_NO_LOADING_SCREEN(true);
			break;
		
		case 1:
			if (func_57() || IS_SCREEN_FADED_OUT())
			{
				*uParam0 = 2;
			}
			if (!func_56(uParam0->f_4, 4))
			{
				if (REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", false, -1))
				{
					PLAY_SOUND_FRONTEND(-1, "Bed", "WastedSounds", true);
					func_54(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(timera()) > (1500f * 0.2f))
			{
				if (!func_56(uParam0->f_4, 2))
				{
					PLAY_SOUND_FRONTEND(-1, "TextHit", "WastedSounds", true);
					func_54(&(uParam0->f_4), 2);
				}
				func_33(iParam2, uParam1, iParam3, sParam4, iParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_33(iParam2, uParam1, iParam3, sParam4, iParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_14(0, 1);
				func_12(0, 1);
				func_22();
				if (*iParam5)
				{
					IGNORE_NEXT_RESTART(1);
				}
				else if (!uParam0->f_5)
				{
					func_2(0);
				}
				SET_NO_LOADING_SCREEN(false);
				_DISABLE_AUTOMATIC_RESPAWN(0);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
			{
				SET_FADE_IN_AFTER_DEATH_ARREST(1);
				func_14(0, 1);
				func_12(0, 1);
				STOP_AUDIO_SCENE("DEATH_SCENE");
				SET_NO_LOADING_SCREEN(false);
				return 1;
			}
			break;
		
		case 4:
			SET_NO_LOADING_SCREEN(false);
			return 1;
			break;
	}
	return 0;
}

int func_33(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
{
	switch (*uParam1)
	{
		case 0:
			if (!IS_SCREEN_FADED_OUT() || IS_SCREEN_FADED_OUT())
			{
				DO_SCREEN_FADE_OUT(2500);
				_0xEB2D525B57F42B40();
			}
			if (bParam9)
			{
				SET_NO_LOADING_SCREEN(true);
			}
			SET_TIME_SCALE(0.2f);
			if (func_53(iParam5, 4))
			{
				if (REQUEST_SCRIPT_AUDIO_BANK("generic_failed", false, -1))
				{
					*uParam1 = 1;
				}
			}
			else
			{
				*uParam1 = 1;
			}
			break;
		
		case 1:
			BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
			_SET_NOTIFICATION_COLOR_NEXT(6);
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
			END_TEXT_COMMAND_SCALEFORM_STRING();
			func_52(sParam3);
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(100);
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(true);
			_END_SCALEFORM_MOVIE_METHOD_RETURN();
			if (func_53(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TRANSITION_UP");
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(uParam1->f_134);
					END_SCALEFORM_MOVIE_METHOD();
					uParam1->f_136 = 1;
				}
			}
			if (!func_53(iParam5, 1))
			{
				DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			func_51(&(uParam1->f_10), 0, 1, 1, 1);
			func_50(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			func_50(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_53(iParam5, 4))
			{
				PLAY_SOUND_FRONTEND(-1, "ScreenFlash", "MissionFailedSounds", true);
			}
			if (func_53(iParam5, 8))
			{
				switch (func_15())
				{
					case 0:
						ANIMPOSTFX_PLAY("MinigameEndMichael", 500, 0);
						break;
					
					case 1:
						ANIMPOSTFX_PLAY("MinigameEndFranklin", 500, 0);
						break;
					
					case 2:
						ANIMPOSTFX_PLAY("MinigameEndTrevor", 500, 0);
						break;
					}
			}
			if (!func_49(&(uParam1->f_1)))
			{
				func_48(&(uParam1->f_1));
			}
			if (func_53(iParam5, 2))
			{
				if (!func_49(&(uParam1->f_4)))
				{
					func_48(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			HIDE_LOADING_ON_FADE_THIS_FRAME();
			if (func_53(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TRANSITION_UP");
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(uParam1->f_134);
					END_SCALEFORM_MOVIE_METHOD();
					uParam1->f_136 = 1;
				}
			}
			_SET_UI_LAYER(iParam6);
			func_46(uParam0, 0, 0);
			if (!func_53(iParam5, 16) && (func_44(&(uParam1->f_1)) >= uParam1->f_135 || IS_SCREEN_FADED_OUT()))
			{
				func_38(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				_SHOW_CURSOR_THIS_FRAME();
				if (IS_CONTROL_JUST_RELEASED(2, 201))
				{
					uParam1->f_138 = 1;
					PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!func_53(iParam5, 1))
					{
						ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					func_37(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (IS_CONTROL_JUST_RELEASED(2, 202))
				{
					uParam1->f_138 = 0;
					PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!func_53(iParam5, 1))
					{
						ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					func_37(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_53(iParam5, 2))
			{
				if (func_44(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!func_53(iParam5, 1))
					{
						ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					func_37(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_46(uParam0, 0, 0);
			SET_TIME_SCALE(1f);
			if (uParam1->f_138 || !((ARE_STRINGS_EQUAL("stunt_plane_races", ARE_STRINGS_EQUAL()) || ARE_STRINGS_EQUAL("pilot_school", ARE_STRINGS_EQUAL())) || (ARE_STRINGS_EQUAL("bj", ARE_STRINGS_EQUAL()) && ARE_STRINGS_EQUAL(ARE_STRINGS_EQUAL()))))
			{
				DO_SCREEN_FADE_IN(2500);
			}
			if (func_53(iParam5, 64) && uParam1->f_138)
			{
				DO_SCREEN_FADE_OUT(500);
			}
			func_34(&(uParam1->f_4));
			if (bParam9)
			{
				SET_NO_LOADING_SCREEN(false);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_44(&(uParam1->f_4)) <= 0.1f)
			{
				func_46(uParam0, 0, 0);
			}
			else
			{
				*uParam4 = uParam1->f_138;
				return 1;
			}
			break;
	}
	return 0;
}

void func_34(int iParam0)
{
	func_35(iParam0, 0f);
}

void func_35(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_36(IS_BIT_SET(*iParam0, 4)) - fParam1);
	SET_BIT(iParam0, 1);
	CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

float func_36(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = to_float(GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = 0xBA7F0B77D80A4EB7();
		fVar3 = to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (to_float(GET_GAME_TIMER()) / 1000f);
}

void func_37(int iParam0)
{
	if (*iParam0 != 0)
	{
		SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		*iParam0 = 0;
	}
	iParam0->f_1 = 0;
	iParam0->f_123 = 0;
}

void func_38(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (((IS_SCREEN_FADING_OUT() || IS_SCREEN_FADING_OUT()) || IS_SCREEN_FADING_OUT()) || IS_SCREEN_FADING_OUT())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_43(uParam0))
	{
		return;
	}
	HIDE_LOADING_ON_FADE_THIS_FRAME();
	_SET_UI_LAYER(iParam2);
	if (!func_53(uParam0->f_1, 256) || (func_53(uParam0->f_1, 8192) && _0x6CD79468A1E595C6(2)))
	{
		BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_CLEAR_SPACE");
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam1);
		END_SCALEFORM_MOVIE_METHOD();
		BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam5);
		END_SCALEFORM_MOVIE_METHOD();
		BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
		END_SCALEFORM_MOVIE_METHOD();
		if (IS_PC_VERSION())
		{
			BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(func_53(uParam0->f_1, 4096));
			END_SCALEFORM_MOVIE_METHOD();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = _IS_INPUT_DISABLED(2);
					break;
				
				case 2:
					bVar4 = !_IS_INPUT_DISABLED(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT"))
				{
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = IS_BIT_SET(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!IS_BIT_SET(uParam0->f_2[iVar6 /*15*/].f_12, iVar7))
						{
							sVar3 = GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar0, iVar1, bVar2);
						}
						else
						{
							sVar3 = _0x80C2FD58D720C801(iVar0, iVar1, bVar2);
						}
						if (!IS_STRING_NULL_OR_EMPTY(sVar3))
						{
							func_42(sVar3);
						}
						iVar7++;
					}
					if (!IS_STRING_NULL_OR_EMPTY(uParam0->f_2[iVar6 /*15*/]))
					{
						func_52(uParam0->f_2[iVar6 /*15*/]);
					}
					if (IS_PC_VERSION())
					{
						if (func_53(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(true);
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(false);
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(-1);
							}
						}
					}
					END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar6++;
		}
		fVar8 = func_41(bParam4, func_41(func_53(uParam0->f_1, 32), 1f, 0f), -1f);
		BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fVar8);
		END_SCALEFORM_MOVIE_METHOD();
		BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_BACKGROUND_COLOUR");
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(0f);
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(0f);
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(0f);
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(80f);
		END_SCALEFORM_MOVIE_METHOD();
		func_40(&(uParam0->f_1), 256);
		func_39(&(uParam0->f_1), 128);
	}
	DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
}

void func_39(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_40(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_41(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_42(char* sParam0)
{
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam0);
}

int func_43(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			func_40(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

float func_44(var uParam0)
{
	if (func_49(uParam0))
	{
		if (func_45(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_36(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_45(var uParam0)
{
	return IS_BIT_SET(*uParam0, 2);
}

int func_46(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_49(&(uParam0->f_2)))
	{
		func_34(&(uParam0->f_2));
	}
	HIDE_HUD_COMPONENT_THIS_FRAME(14);
	if (!bParam2)
	{
		DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (IS_CONTROL_PRESSED(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_44(&(uParam0->f_2)) * 1000f) > to_float(uParam0->f_1)
	{
		func_47(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_47(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_48(int iParam0)
{
	if (!func_49(iParam0))
	{
		func_34(iParam0);
	}
}

bool func_49(var uParam0)
{
	return IS_BIT_SET(*uParam0, 1);
}

int func_50(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_12 = 0;
		uParam0->f_2[iVar1 /*15*/].f_13 = 0;
		uParam0->f_2[iVar1 /*15*/].f_14 = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			SET_BIT(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_51(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_40(&(uParam0->f_1), 32);
	}
	if (HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		func_40(&(uParam0->f_1), 1);
		if (bParam2)
		{
			SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(*uParam0, 1);
		}
	}
	if (IS_PC_VERSION())
	{
		if (bParam3)
		{
			func_40(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_40(&(uParam0->f_1), 8192);
	}
}

void func_52(char* sParam0)
{
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	END_TEXT_COMMAND_SCALEFORM_STRING();
}

bool func_53(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_54(var uParam0, int iParam1)
{
	func_55(uParam0, iParam1);
}

void func_55(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_56(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_57()
{
	if (!IS_BIT_SET(iLocal_48, 0) && !IS_BIT_SET(iLocal_48, 1))
	{
		settimera(0);
		func_14(1, 0);
	}
	if (!IS_CUTSCENE_PLAYING())
	{
		CLEAR_PRINTS();
	}
	DISABLE_CONTROL_ACTION(2, 199, 1);
	DISABLE_CONTROL_ACTION(0, 59, 1);
	DISABLE_CONTROL_ACTION(0, 60, 1);
	DISABLE_CONTROL_ACTION(0, 37, 1);
	DISABLE_CONTROL_ACTION(0, 25, 1);
	_0x5A7F62FDA59759BD();
	if (IntToFloat(timera()) > (1500f * 0.2f))
	{
		if (!IS_BIT_SET(iLocal_48, 1))
		{
			func_12(1, 0);
			settimerb(0);
		}
		else if (IntToFloat(timerb()) > (1500f * 0.075f) || IS_SCREEN_FADED_OUT())
		{
			if (!IS_SCREEN_FADED_OUT())
			{
				if (!IS_SCREEN_FADING_OUT())
				{
					DO_SCREEN_FADE_OUT(1500);
				}
			}
			else if (iLocal_49 == 0)
			{
				iLocal_49 = GET_GAME_TIMER() + 1000;
				if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
				{
					SET_PLAYER_CONTROL(SET_PLAYER_CONTROL(), false, 0);
				}
				func_13(0, 2, 1);
				func_23(1, 1, 1, 0, 0, 0);
				func_3(1);
				SET_FRONTEND_ACTIVE(0);
				SET_PAUSE_MENU_ACTIVE(0);
				CLEAR_HELP(1);
				CLEAR_PRINTS();
				if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
				{
					SET_PLAYER_CONTROL(SET_PLAYER_CONTROL(), false, 0);
				}
				func_14(0, 0);
				func_58(0);
			}
			else if (GET_GAME_TIMER() < iLocal_49)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_58(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!IS_BIT_SET(iLocal_48, 3))
			{
				SET_GAME_PAUSED(true);
				SET_BIT(&iLocal_48, 3);
			}
		}
		else if (IS_BIT_SET(iLocal_48, 3))
		{
			SET_GAME_PAUSED(false);
			CLEAR_BIT(&iLocal_48, 3);
		}
	}
}

void func_59(var uParam0, float fParam1, float fParam2)
{
	if (func_49(&(uParam0->f_1)))
	{
		func_47(&(uParam0->f_1));
	}
	if (func_49(&(uParam0->f_4)))
	{
		func_47(&(uParam0->f_4));
	}
	func_37(&(uParam0->f_10));
	uParam0->f_134 = fParam1;
	uParam0->f_135 = fParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

void func_60(int iParam0)
{
	if (!func_49(iParam0))
	{
		func_48(iParam0);
	}
	else
	{
		func_34(iParam0);
	}
}

void func_61(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", false, -1);
}

int func_62()
{
	return 0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
}

void func_63()
{
	if (!iLocal_80)
	{
		SET_STATIC_EMITTER_ENABLED("COUNTRYSIDE_ALTRUIST_CULT_01", false);
		Global_111560.f_24990.f_5 = 1000;
		UNLOCK_MISSION_NEWS_STORY(64);
		Global_111560.f_20559.f_472 = 54;
		iLocal_259 = 0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
		func_98(1);
		while (!HAS_SCALEFORM_MOVIE_LOADED(iLocal_259))
		{
			wait(0);
		}
		BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_259, "SHOW_SHARD_MIDSIZED_MESSAGE");
		func_52("CULT_PASS");
		_END_SCALEFORM_MOVIE_METHOD_RETURN();
		while (!func_97())
		{
			wait(0);
		}
		func_96();
		settimera(0);
		PLAY_SOUND_FRONTEND(-1, "PROPERTY_PURCHASE", "HUD_AWARDS", true);
		iLocal_80 = 1;
	}
	DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_259, 255, 255, 255, 255, 0);
	if (!iLocal_82)
	{
		if (timera() > 9500)
		{
			BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_259, "SHARD_ANIM_OUT");
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(0.33f);
			END_SCALEFORM_MOVIE_METHOD();
			iLocal_82 = 1;
		}
	}
	if (timera() > 10000)
	{
		if (HAS_SCALEFORM_MOVIE_LOADED(iLocal_259))
		{
			SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_259);
			func_98(0);
		}
		while (GET_DISTANCE_BETWEEN_COORDS(func_95(GET_DISTANCE_BETWEEN_COORDS()), vLocal_53, true) < 209f && !GET_DISTANCE_BETWEEN_COORDS(GET_DISTANCE_BETWEEN_COORDS()))
		{
			wait(0);
		}
		func_64(18);
		func_196();
	}
}

void func_64(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_93();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_92())
	{
		func_70(iParam0);
		SET_MISSION_NAME(0, 0);
		Global_111551 = GET_GAME_TIMER();
		func_69(30000);
		StringCopy(&cVar0, func_68(Global_111549, 1), 64);
		if (func_67(Global_111549) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_111548, 64);
		}
		PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_111546, (PLAYSTATS_RANDOM_MISSION_DONE() - Global_111547), 0);
	}
	else if (IS_BIT_SET(Global_111556, 0) && Global_111560.f_24990.f_2 < 3)
	{
		CLEAR_BIT(&Global_111556, 0);
	}
	func_66(&Global_30795);
	Global_111550 = 0;
	func_65(-1);
}

void func_65(int iParam0)
{
	Global_111549 = iParam0;
}

void func_66(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_41358)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_41357 = 0;
	Global_41359 = 0;
	Global_41396 = 15;
	Global_61468 = 0;
	Global_61469 = 0;
}

int func_67(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

char* func_68(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_69(int iParam0)
{
	Global_41947 = (GET_GAME_TIMER() + iParam0);
}

void func_70(int iParam0)
{
	func_71(iParam0, 0, func_91(iParam0));
}

void func_71(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_90();
	func_81(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_80(iParam0, &uVar0);
	Var1 = { func_72(&uVar0) };
}

struct<16> func_72(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_79(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_78(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_77(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_76(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_75(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_73(*uParam0), 64);
	return Var0;
}

int func_73(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_74(IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_74(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_75(var uParam0)
{
	return uParam0 & 15;
}

int func_76(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_77(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_78(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_79(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

void func_80(int iParam0, var uParam1)
{
	Global_111560.f_24990.f_43[iParam0] = *uParam1;
}

void func_81(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_73(*uParam0);
	iVar1 = func_75(*uParam0);
	iVar2 = func_76(*uParam0);
	iVar3 = func_79(*uParam0);
	iVar4 = func_78(*uParam0);
	iVar5 = func_77(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_89(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_89(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_82(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_82(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_88(uParam0, iParam1);
	func_87(uParam0, iParam2);
	func_86(uParam0, iParam3);
	func_85(uParam0, iParam5);
	func_84(uParam0, iParam4);
	func_83(uParam0, iParam6);
}

void func_83(var uParam0, int iParam1)
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

void func_84(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_75(*uParam0);
	iVar1 = func_73(*uParam0);
	if (iParam1 < 1 || iParam1 > func_89(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_85(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_86(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_87(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_88(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_89(int iParam0, int iParam1)
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

var func_90()
{
	var uVar0;
	
	func_88(&uVar0, GET_CLOCK_SECONDS());
	func_87(&uVar0, GET_CLOCK_MINUTES());
	func_86(&uVar0, GET_CLOCK_HOURS());
	func_84(&uVar0, GET_CLOCK_DAY_OF_MONTH());
	func_85(&uVar0, GET_CLOCK_MONTH());
	func_83(&uVar0, GET_CLOCK_YEAR());
	return uVar0;
}

int func_91(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_92()
{
	if ((Global_111549 == func_93() && GET_RANDOM_EVENT_FLAG()) && Global_111550)
	{
		return 1;
	}
	return 0;
}

int func_93()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, GET_THIS_SCRIPT_NAME(), 64);
	uVar1 = func_94(Var0);
	return uVar1;
}

int func_94(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (GET_HASH_KEY(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

Vector3 func_95(int iParam0)
{
	return GET_ENTITY_COORDS(GET_ENTITY_COORDS(iParam0), false);
}

void func_96()
{
	Global_30971 = 0;
	Global_30972 = 0;
	Global_30974 = 0;
	Global_30975 = 0;
	Global_30976 = 0;
}

int func_97()
{
	return 1;
}

void func_98(int iParam0)
{
	Global_76837 = iParam0;
	Global_76838 = iParam0;
}

void func_99(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_100(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_114(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_101(sParam2, iParam3, 0);
}

int func_101(char* sParam0, int iParam1, bool bParam2)
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
					func_113();
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
		if (func_112(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_111();
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
				func_110();
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
				if (func_109())
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
			if (func_5())
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
			func_108();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_107();
		func_102();
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
		func_113();
	}
	return 0;
}

void func_102()
{
	if (!func_103())
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

int func_103()
{
	if (!Global_262145.f_28013)
	{
		return 0;
	}
	if (!Global_76577)
	{
		return 0;
	}
	if (PLAYER_ID() == func_106())
	{
		return 0;
	}
	if (func_104(PLAYER_ID()))
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

bool func_104(int iParam0)
{
	return func_105(iParam0, 20);
}

bool func_105(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

int func_106()
{
	return -1;
}

void func_107()
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

void func_108()
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

int func_109()
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

void func_110()
{
	if (func_17(14))
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
		Global_19486 = func_15();
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

void func_111()
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

bool func_112(int iParam0, int iParam1)
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

void func_113()
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

void func_114(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_115()
{
	if (Global_20805 != 0 || IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_116()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	switch (iLocal_94)
	{
		case 0:
			_SET_WEATHER_TYPE_OVER_TIME("THUNDER", 20f);
			if (!IS_CUTSCENE_ACTIVE())
			{
				REQUEST_CUTSCENE("ac_ig_3_p3_b", 8);
			}
			REQUEST_MODEL(joaat("a_m_o_acult_02"));
			REQUEST_MODEL(joaat("a_m_y_acult_02"));
			REQUEST_MODEL(-2022916910);
			REQUEST_MODEL(-1322183878);
			REQUEST_MODEL(joaat("prop_box_wood05a"));
			REQUEST_MODEL(joaat("prop_security_case_01"));
			while ((((((!func_143() || !HAS_MODEL_LOADED(joaat("a_m_o_acult_02"))) || !HAS_MODEL_LOADED(joaat("a_m_y_acult_02"))) || !HAS_MODEL_LOADED(-2022916910)) || !HAS_MODEL_LOADED(-1322183878)) || !HAS_MODEL_LOADED(joaat("prop_box_wood05a"))) || !HAS_MODEL_LOADED(joaat("prop_security_case_01")))
			{
				wait(0);
			}
			iLocal_436 = func_136(PLAYER_PED_ID(), joaat("weapon_assaultrifle"), 1, 0, 0, 0, 0, 0, 0);
			if (DOES_ENTITY_EXIST(iLocal_436))
			{
				REGISTER_ENTITY_FOR_CUTSCENE(iLocal_436, "Trevors_weapon", 0, 0, 0);
			}
			REGISTER_ENTITY_FOR_CUTSCENE(0, "Rifle_Mag1^1", 3, REGISTER_ENTITY_FOR_CUTSCENE(joaat("component_assaultrifle_clip_01")), 0);
			if (func_143() && !IS_PED_INJURED(IS_PED_INJURED()))
			{
				REGISTER_ENTITY_FOR_CUTSCENE(REGISTER_ENTITY_FOR_CUTSCENE(), "TREVOR", 0, 0, 0);
				REGISTER_ENTITY_FOR_CUTSCENE(iLocal_98[11], "Cult_Master", 2, joaat("a_m_o_acult_02"), 0);
				REGISTER_ENTITY_FOR_CUTSCENE(iLocal_98[12], "Rear_Cult", 2, joaat("a_m_o_acult_02"), 0);
				REGISTER_ENTITY_FOR_CUTSCENE(iLocal_98[13], "Left_Old_Cult", 2, joaat("a_m_o_acult_02"), 0);
				REGISTER_ENTITY_FOR_CUTSCENE(iLocal_98[14], "Carbine_Cult", 2, joaat("a_m_y_acult_02"), 0);
				REGISTER_ENTITY_FOR_CUTSCENE(iLocal_98[15], "Shotgun_Cult", 2, joaat("a_m_y_acult_02"), 0);
				START_CUTSCENE(0);
			}
			wait(0);
			if (!bLocal_76 && Global_111560.f_24990.f_5 != 1000)
			{
				func_135();
			}
			if (DOES_ENTITY_EXIST(iLocal_98[0]))
			{
				DELETE_PED(&(iLocal_98[0]));
			}
			if (DOES_ENTITY_EXIST(iLocal_98[1]))
			{
				DELETE_PED(&(iLocal_98[1]));
			}
			if (DOES_CAM_EXIST(iLocal_106))
			{
				SET_CAM_ACTIVE(iLocal_106, false);
			}
			if (DOES_ENTITY_EXIST(iLocal_101))
			{
				DELETE_OBJECT(&iLocal_101);
			}
			if (DOES_ENTITY_EXIST(iLocal_101))
			{
				DELETE_OBJECT(&iLocal_101);
			}
			RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
			if (DOES_BLIP_EXIST(iLocal_104))
			{
				REMOVE_BLIP(&iLocal_104);
			}
			func_23(1, 1, 1, 0, 0, 0);
			SET_PLAYER_CONTROL(SET_PLAYER_CONTROL(), false, 0);
			CLEAR_HELP(1);
			DISPLAY_HUD(false);
			DISPLAY_RADAR(false);
			if (!IS_PED_INJURED(IS_PED_INJURED()))
			{
				HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(), true);
			}
			CLEAR_AREA(vLocal_53, 100f, 1, 0, 0, false);
			ADD_SCENARIO_BLOCKING_AREA(vLocal_53 - Vector(100f, 60f, 80f), vLocal_53 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
			SET_WANTED_LEVEL_MULTIPLIER(0f);
			ENABLE_DISPATCH_SERVICE(3, false);
			ENABLE_DISPATCH_SERVICE(5, false);
			iLocal_108 = ADD_COVER_POINT(-1173.509f, 4924.365f, 222.21f, 277.2293f, 2, 0, 2, 1);
			REQUEST_MODEL(joaat("a_m_o_acult_01"));
			while (!HAS_MODEL_LOADED(joaat("a_m_o_acult_01")))
			{
				wait(0);
			}
			iLocal_94 = 6;
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
		
		case 6:
			if (CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				if (CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("CULT_MASTER", 0))
				{
					if (!DOES_ENTITY_EXIST(iLocal_98[11]))
					{
						iLocal_98[11] = GET_PED_INDEX_FROM_ENTITY_INDEX(GET_PED_INDEX_FROM_ENTITY_INDEX("CULT_MASTER", 0));
					}
				}
				if (CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("REAR_CULT", 0))
				{
					if (!DOES_ENTITY_EXIST(iLocal_98[12]))
					{
						iLocal_98[12] = GET_PED_INDEX_FROM_ENTITY_INDEX(GET_PED_INDEX_FROM_ENTITY_INDEX("REAR_CULT", 0));
					}
				}
				if (CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("LEFT_OLD_CULT", 0))
				{
					if (!DOES_ENTITY_EXIST(iLocal_98[13]))
					{
						iLocal_98[13] = GET_PED_INDEX_FROM_ENTITY_INDEX(GET_PED_INDEX_FROM_ENTITY_INDEX("LEFT_OLD_CULT", 0));
					}
				}
				if (CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("CARBINE_CULT", 0))
				{
					if (!DOES_ENTITY_EXIST(iLocal_98[14]))
					{
						iLocal_98[14] = GET_PED_INDEX_FROM_ENTITY_INDEX(GET_PED_INDEX_FROM_ENTITY_INDEX("CARBINE_CULT", 0));
					}
				}
				if (CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("SHOTGUN_CULT", 0))
				{
					if (!DOES_ENTITY_EXIST(iLocal_98[15]))
					{
						iLocal_98[15] = GET_PED_INDEX_FROM_ENTITY_INDEX(GET_PED_INDEX_FROM_ENTITY_INDEX("SHOTGUN_CULT", 0));
					}
				}
				if (CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("TREVOR", 0))
				{
					HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(), false);
					SET_ENTITY_COORDS(SET_ENTITY_COORDS(), -1173.531f, 4924.357f, 222.2101f, 1, false, 0, 1);
					SET_ENTITY_HEADING(SET_ENTITY_HEADING(), 188.9369f);
					TASK_PUT_PED_DIRECTLY_INTO_COVER(TASK_PUT_PED_DIRECTLY_INTO_COVER(), -1173.509f, 4924.365f, 222.21f, -1, false, 0f, true, false, iLocal_108, 0);
					_0x2208438012482A1A(_0x2208438012482A1A(), 1, 0);
				}
				if (CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_weapon", 0))
				{
					GIVE_WEAPON_OBJECT_TO_PED(iLocal_436, GIVE_WEAPON_OBJECT_TO_PED());
				}
				SET_GAMEPLAY_CAM_RELATIVE_HEADING(91.3878f);
				SET_GAMEPLAY_CAM_RELATIVE_PITCH(4.4337f, 1065353216);
				func_23(0, 1, 1, 0, 0, 0);
				SET_PLAYER_CONTROL(SET_PLAYER_CONTROL(), true, 0);
				DISPLAY_HUD(true);
				DISPLAY_RADAR(true);
				vLocal_51[0 /*3*/] = { -1044.632f, 4918.149f, 211.3315f };
				fLocal_52[0] = 254.8275f;
				vLocal_51[1 /*3*/] = { -1054.92f, 4915.155f, 210.8241f };
				fLocal_52[1] = 270.2025f;
				vLocal_51[2 /*3*/] = { -1051.859f, 4903.902f, 209.6199f };
				fLocal_52[2] = 299.8404f;
				vLocal_51[3 /*3*/] = { -1068.246f, 4899.532f, 213.2755f };
				fLocal_52[3] = 298.4257f;
				vLocal_51[4 /*3*/] = { -1083.322f, 4899.532f, 213.2755f };
				fLocal_52[4] = 283.5311f;
				vLocal_51[5 /*3*/] = { -1084.058f, 4933.805f, 228.2246f };
				fLocal_52[5] = 87.5233f;
				vLocal_51[6 /*3*/] = { -1081.976f, 4937.339f, 232.3275f };
				fLocal_52[6] = 109.6546f;
				vLocal_51[7 /*3*/] = { -1092.075f, 4939.958f, 217.3385f };
				fLocal_52[7] = 210.2433f;
				vLocal_51[8 /*3*/] = { -1101.798f, 4930.33f, 217.3544f };
				fLocal_52[8] = 203.732f;
				vLocal_51[9 /*3*/] = { -1070.675f, 4869.301f, 220.2917f };
				fLocal_52[9] = 39.1109f;
				vLocal_51[10 /*3*/] = { -1115.703f, 4878.439f, 225.8085f };
				fLocal_52[10] = 25.8472f;
				ADD_RELATIONSHIP_GROUP("rghCult", &iLocal_270);
				iVar1 = 0;
				while (iVar1 < iLocal_98)
				{
					if (((iVar1 == 0 || iVar1 == 5) || iVar1 == 6) || iVar1 == 10)
					{
						iLocal_98[iVar1] = CREATE_PED(26, joaat("a_m_o_acult_01"), vLocal_51[iVar1 /*3*/], fLocal_52[iVar1], 1, true);
						SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_98[iVar1], 0);
						GIVE_WEAPON_TO_PED(iLocal_98[iVar1], joaat("weapon_assaultrifle"), -1, true, true);
						SET_PED_COMBAT_MOVEMENT(iLocal_98[iVar1], 0);
						SET_PED_COMBAT_ABILITY(iLocal_98[iVar1], 2);
						SET_PED_TO_INFORM_RESPECTED_FRIENDS(iLocal_98[iVar1], 50f, 20);
						SET_PED_ACCURACY(iLocal_98[iVar1], 5);
						SET_PED_HEARING_RANGE(iLocal_98[iVar1], 100f);
						SET_PED_SEEING_RANGE(iLocal_98[iVar1], 100f);
						SET_ENTITY_HEALTH(iLocal_98[iVar1], 150, 0);
						SET_PED_SHOOT_RATE(iLocal_98[iVar1], SET_PED_SHOOT_RATE(40, 60));
						TASK_COMBAT_PED(iLocal_98[iVar1], TASK_COMBAT_PED(), 0, 16);
					}
					else if (iVar1 == 2)
					{
						iLocal_98[iVar1] = CREATE_PED(26, joaat("a_m_o_acult_02"), vLocal_51[iVar1 /*3*/], fLocal_52[iVar1], 1, true);
						SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_98[iVar1], 0);
						GIVE_WEAPON_TO_PED(iLocal_98[iVar1], joaat("weapon_sawnoffshotgun"), -1, true, true);
						SET_PED_COMBAT_ATTRIBUTES(iLocal_98[iVar1], 50, true);
						SET_PED_COMBAT_MOVEMENT(iLocal_98[iVar1], 2);
						SET_PED_COMBAT_ABILITY(iLocal_98[iVar1], 1);
						SET_PED_TO_INFORM_RESPECTED_FRIENDS(iLocal_98[iVar1], 50f, 20);
						SET_PED_ACCURACY(iLocal_98[iVar1], 5);
						SET_PED_HEARING_RANGE(iLocal_98[iVar1], 100f);
						SET_PED_SEEING_RANGE(iLocal_98[iVar1], 100f);
						SET_PED_SHOOT_RATE(iLocal_98[iVar1], SET_PED_SHOOT_RATE(40, 60));
						TASK_COMBAT_PED(iLocal_98[iVar1], TASK_COMBAT_PED(), 0, 16);
					}
					else if (iVar1 > 10 && iVar1 < 20)
					{
						if (((((!IS_PED_INJURED(iLocal_98[iVar1]) && !IS_PED_INJURED(iLocal_98[11])) && !IS_PED_INJURED(iLocal_98[12])) && !IS_PED_INJURED(iLocal_98[13])) && !IS_PED_INJURED(iLocal_98[14])) && !IS_PED_INJURED(iLocal_98[15]))
						{
							GIVE_WEAPON_TO_PED(iLocal_98[11], joaat("weapon_pistol"), -1, true, true);
							GIVE_WEAPON_TO_PED(iLocal_98[12], joaat("weapon_assaultrifle"), -1, true, true);
							GIVE_WEAPON_TO_PED(iLocal_98[13], joaat("weapon_assaultrifle"), -1, true, true);
							GIVE_WEAPON_TO_PED(iLocal_98[14], joaat("weapon_carbinerifle"), -1, true, true);
							GIVE_WEAPON_TO_PED(iLocal_98[15], joaat("weapon_pumpshotgun"), -1, true, true);
							SET_PED_COMBAT_ATTRIBUTES(iLocal_98[iVar1], 0, true);
							SET_PED_COMBAT_MOVEMENT(iLocal_98[iVar1], 3);
							SET_PED_COMBAT_ABILITY(iLocal_98[iVar1], 0);
							SET_PED_ACCURACY(iLocal_98[iVar1], 0);
							SET_PED_CHANCE_OF_FIRING_BLANKS(iLocal_98[iVar1], 1f, 1f);
							OPEN_SEQUENCE_TASK(&iLocal_107);
							TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1159.33f, 4924.412f, 221.6576f, TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(), 2f, true, 0.5f, 4f, true, 0, 0, -957453492, 20000);
							TASK_AIM_GUN_AT_ENTITY(0, TASK_AIM_GUN_AT_ENTITY(), 6000, 0);
							TASK_AIM_GUN_AT_ENTITY(0, TASK_AIM_GUN_AT_ENTITY(), 4500, 0);
							TASK_COMBAT_PED(0, TASK_COMBAT_PED(), 0, 16);
							CLOSE_SEQUENCE_TASK(iLocal_107);
							TASK_PERFORM_SEQUENCE(iLocal_98[15], iLocal_107);
							CLEAR_SEQUENCE_TASK(&iLocal_107);
							OPEN_SEQUENCE_TASK(&iLocal_107);
							TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1163.279f, 4932.933f, 222.541f, TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(), 1f, true, 0.5f, 4f, true, 0, 0, -957453492, 20000);
							TASK_SEEK_COVER_FROM_PED(0, TASK_SEEK_COVER_FROM_PED(), 5000, 0);
							TASK_AIM_GUN_AT_ENTITY(0, TASK_AIM_GUN_AT_ENTITY(), 7500, 0);
							TASK_AIM_GUN_AT_ENTITY(0, TASK_AIM_GUN_AT_ENTITY(), 4500, 0);
							TASK_COMBAT_PED(0, TASK_COMBAT_PED(), 0, 16);
							CLOSE_SEQUENCE_TASK(iLocal_107);
							TASK_PERFORM_SEQUENCE(iLocal_98[14], iLocal_107);
							CLEAR_SEQUENCE_TASK(&iLocal_107);
							OPEN_SEQUENCE_TASK(&iLocal_107);
							TASK_AIM_GUN_AT_ENTITY(0, TASK_AIM_GUN_AT_ENTITY(), 2500, 0);
							TASK_SEEK_COVER_FROM_PED(0, TASK_SEEK_COVER_FROM_PED(), 5000, 0);
							TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1156.175f, 4926.073f, 221.3447f, TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(), 2f, true, 0.5f, 4f, true, 0, 0, -957453492, 20000);
							TASK_AIM_GUN_AT_ENTITY(0, TASK_AIM_GUN_AT_ENTITY(), 6500, 0);
							TASK_AIM_GUN_AT_ENTITY(0, TASK_AIM_GUN_AT_ENTITY(), 4500, 0);
							TASK_COMBAT_PED(0, TASK_COMBAT_PED(), 0, 16);
							CLOSE_SEQUENCE_TASK(iLocal_107);
							TASK_PERFORM_SEQUENCE(iLocal_98[13], iLocal_107);
							CLEAR_SEQUENCE_TASK(&iLocal_107);
							OPEN_SEQUENCE_TASK(&iLocal_107);
							TASK_AIM_GUN_AT_ENTITY(0, TASK_AIM_GUN_AT_ENTITY(), 3000, 0);
							TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1157.962f, 4922.196f, 221.309f, TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(), 2f, true, 0.5f, 4f, true, 0, 0, -957453492, 20000);
							TASK_AIM_GUN_AT_ENTITY(0, TASK_AIM_GUN_AT_ENTITY(), 5500, 0);
							TASK_AIM_GUN_AT_ENTITY(0, TASK_AIM_GUN_AT_ENTITY(), 4500, 0);
							TASK_COMBAT_PED(0, TASK_COMBAT_PED(), 0, 16);
							CLOSE_SEQUENCE_TASK(iLocal_107);
							TASK_PERFORM_SEQUENCE(iLocal_98[12], iLocal_107);
							CLEAR_SEQUENCE_TASK(&iLocal_107);
							OPEN_SEQUENCE_TASK(&iLocal_107);
							TASK_AIM_GUN_AT_ENTITY(0, TASK_AIM_GUN_AT_ENTITY(), 4500, 0);
							TASK_SEEK_COVER_FROM_PED(0, TASK_SEEK_COVER_FROM_PED(), 10000, 0);
							TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1161.475f, 4916.061f, 220.5658f, TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(), 2f, true, 0.5f, 4f, true, 0, 0, -957453492, 20000);
							TASK_AIM_GUN_AT_ENTITY(0, TASK_AIM_GUN_AT_ENTITY(), 4500, 0);
							TASK_AIM_GUN_AT_ENTITY(0, TASK_AIM_GUN_AT_ENTITY(), 4500, 0);
							TASK_COMBAT_PED(0, TASK_COMBAT_PED(), 0, 16);
							CLOSE_SEQUENCE_TASK(iLocal_107);
							TASK_PERFORM_SEQUENCE(iLocal_98[11], iLocal_107);
							CLEAR_SEQUENCE_TASK(&iLocal_107);
							SET_PED_KEEP_TASK(iLocal_98[iVar1], true);
							SET_PED_RESET_FLAG(iLocal_98[iVar1], 156, true);
						}
					}
					else
					{
						iLocal_98[iVar1] = CREATE_PED(26, joaat("a_m_o_acult_02"), vLocal_51[iVar1 /*3*/], fLocal_52[iVar1], 1, true);
						SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_98[iVar1], 0);
						GIVE_WEAPON_TO_PED(iLocal_98[iVar1], joaat("weapon_pistol"), -1, true, true);
						SET_PED_COMBAT_ATTRIBUTES(iLocal_98[iVar1], 50, true);
						SET_PED_COMBAT_MOVEMENT(iLocal_98[iVar1], 2);
						SET_PED_COMBAT_ABILITY(iLocal_98[iVar1], 0);
						SET_PED_TO_INFORM_RESPECTED_FRIENDS(iLocal_98[iVar1], 50f, 20);
						SET_PED_COMBAT_RANGE(iLocal_98[iVar1], 1);
						SET_PED_ACCURACY(iLocal_98[iVar1], 5);
						SET_PED_HEARING_RANGE(iLocal_98[iVar1], 100f);
						SET_PED_SEEING_RANGE(iLocal_98[iVar1], 100f);
						SET_PED_SHOOT_RATE(iLocal_98[iVar1], SET_PED_SHOOT_RATE(40, 60));
						TASK_COMBAT_PED(iLocal_98[iVar1], TASK_COMBAT_PED(), 0, 16);
					}
					SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_98[iVar1], iLocal_270);
					SET_ENTITY_HEADING(iLocal_98[iVar1], func_134(SET_ENTITY_HEADING(iLocal_98[iVar1], true), func_95(SET_ENTITY_HEADING())));
					SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_98[iVar1], true);
					SET_PED_CONFIG_FLAG(iLocal_98[iVar1], 42, true);
					uLocal_105[iVar1] = func_132(iLocal_98[iVar1], 1, 145);
					iVar1++;
				}
				func_99(&uLocal_271, 0, PLAYER_PED_ID(), "TREVOR", 0, 1);
				func_99(&uLocal_271, 3, iLocal_98[11], "ACULTMaster", 0, 1);
				func_99(&uLocal_271, 4, 0, "ACULTGroup", 0, 1);
				SET_BIT(&iVar0, 1);
				SET_BIT(&iVar0, 3);
				SET_BIT(&iVar0, 4);
				if (!bLocal_76)
				{
					iLocal_102[0] = CREATE_PICKUP_ROTATE(joaat("pickup_money_case"), -1074.165f, 4897.468f, 213.2754f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					iLocal_102[1] = CREATE_PICKUP_ROTATE(joaat("pickup_money_case"), -1094.671f, 4892.789f, 215.0707f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					iLocal_102[2] = CREATE_PICKUP_ROTATE(joaat("pickup_money_case"), -1113.95f, 4904.385f, 217.6001f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					iLocal_102[3] = CREATE_PICKUP_ROTATE(joaat("pickup_money_case"), -1145.273f, 4907.894f, 219.9734f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
				}
				iLocal_102[0] = iLocal_102[0];
				iLocal_102[1] = iLocal_102[1];
				iLocal_102[2] = iLocal_102[2];
				iLocal_102[3] = iLocal_102[3];
				iLocal_103[0] = CREATE_OBJECT(-1322183878, -1158.69f, 4915.709f, 220.2644f, true, true, false);
				iLocal_103[1] = CREATE_OBJECT(-2022916910, -1156.246f, 4918.6f, 220.5432f, true, true, false);
				iLocal_103[2] = CREATE_OBJECT(-1322183878, -1145.802f, 4931.816f, 219.9683f, true, true, false);
				iLocal_103[3] = CREATE_OBJECT(-1322183878, -1133.369f, 4919.067f, 218.8385f, true, true, false);
				iLocal_103[4] = CREATE_OBJECT(joaat("prop_box_wood05a"), -1132.025f, 4921.483f, 218.8244f, true, true, false);
				iLocal_103[5] = CREATE_OBJECT(-2022916910, -1112.66f, 4929.268f, 217.1752f, true, true, false);
				SET_ENTITY_ROTATION(iLocal_103[0], 12.24288f, -0.014582f, 27.06056f, 2, 1);
				SET_ENTITY_ROTATION(iLocal_103[1], 7.733739f, 9.432779f, -2.865618f, 2, 1);
				SET_ENTITY_ROTATION(iLocal_103[2], 3.735082f, 4.551246f, 86.30917f, 2, 1);
				SET_ENTITY_ROTATION(iLocal_103[3], 0.240341f, 1.095195f, 36.59031f, 2, 1);
				SET_ENTITY_ROTATION(iLocal_103[4], 7.6772f, 1.232743f, 93.27483f, 2, 1);
				SET_ENTITY_ROTATION(iLocal_103[5], 3.367802f, -5.14387f, 97.30567f, 2, 1);
				if (func_131() < 50)
				{
					SPECIAL_ABILITY_CHARGE_NORMALIZED(SPECIAL_ABILITY_CHARGE_NORMALIZED(), 0.5f, 1);
				}
				if (func_130() != 18)
				{
					func_128(18);
				}
				if (!func_92())
				{
					func_117(0);
				}
				func_1(1);
				bLocal_76 = false;
				iLocal_50 = 4;
			}
			break;
	}
}

int func_117(int iParam0)
{
	if (func_122())
	{
		Global_111550 = 1;
		Global_111547 = GET_GAME_TIMER();
		if (func_121(Global_111549))
		{
			func_118(0);
		}
		SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_121(Global_111549))
		{
			FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_118(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111560.f_24990.f_2 < 3)
			{
				if (!IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_119(func_120(iParam0), -1);
					Global_111560.f_24990.f_2++;
					SET_BIT(&Global_111556, 0);
				}
			}
			break;
		
		case 1:
			if (!IS_BIT_SET(Global_111556, 1))
			{
				if (!IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_119(func_120(iParam0), -1);
					Global_111560.f_24990.f_3++;
					SET_BIT(&Global_111556, 1);
				}
			}
			break;
		
		case 2:
			if (!IS_BIT_SET(Global_111556, 2))
			{
				if (!IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_119(func_120(iParam0), -1);
					Global_111560.f_24990.f_4++;
					SET_BIT(&Global_111556, 2);
				}
			}
			break;
	}
}

void func_119(char* sParam0, int iParam1)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

char* func_120(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_121(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

int func_122()
{
	switch (func_123(&Global_30795, 0, 5, 0, GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_123(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_96177.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_127(0))
		{
			return 0;
		}
		Global_41360++;
		*uParam0 = Global_41360;
		SET_PLAYER_INVINCIBLE(SET_PLAYER_INVINCIBLE(), 0);
		Global_22211.f_5 = 0;
		if (iParam2 != 5)
		{
			FORCE_CLEANUP(8);
		}
		Global_41396 = iParam2;
		Global_41358 = *uParam0;
		Global_41359 = iParam4;
		Global_41357 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_41357 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41357)
			{
				if (Global_41363[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41358 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_125(iParam2))
		{
			return 0;
		}
		if (Global_41357 == 8)
		{
			return 0;
		}
		Global_41360++;
		*uParam0 = Global_41360;
		Global_41363[Global_41357 /*4*/] = Global_41360;
		Global_41363[Global_41357 /*4*/].f_1 = iParam1;
		Global_41363[Global_41357 /*4*/].f_2 = iParam2;
		Global_41363[Global_41357 /*4*/].f_3 = 0;
		Global_41357++;
		if (iParam4 != 0)
		{
			func_124(uParam0, iParam4);
		}
	}
	return 2;
}

void func_124(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_41357 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41357)
	{
		if (Global_41363[iVar0 /*4*/] == *uParam0)
		{
			Global_41363[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_125(int iParam0)
{
	return func_126(iParam0, Global_41396);
}

int func_126(int iParam0, int iParam1)
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

int func_127(int iParam0)
{
	if (Global_41396 == 15)
	{
		return 0;
	}
	if (func_125(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_128(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_93();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_65(iParam0);
	_0x65D2EBB47E1CEC21(0);
	SET_RANDOM_EVENT_FLAG(1);
	Global_111546 = 0;
	func_129();
}

void func_129()
{
	if (!IS_PED_INJURED(IS_PED_INJURED()))
	{
		if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
		{
			SET_VEHICLE_MODEL_IS_SUPPRESSED(SET_VEHICLE_MODEL_IS_SUPPRESSED(SET_VEHICLE_MODEL_IS_SUPPRESSED(SET_VEHICLE_MODEL_IS_SUPPRESSED(), 0)), true);
		}
		SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 32, false);
	}
}

int func_130()
{
	return Global_111549;
}

int func_131()
{
	var uVar0;
	
	switch (func_15())
	{
		case 0:
			STAT_GET_INT(joaat("sp0_special_ability"), &uVar0, -1);
			break;
		
		case 1:
			STAT_GET_INT(joaat("sp1_special_ability"), &uVar0, -1);
			break;
		
		case 2:
			STAT_GET_INT(joaat("sp2_special_ability"), &uVar0, -1);
			break;
	}
	return uVar0;
}

int func_132(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_133(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && DOES_BLIP_EXIST(iVar0)) && DOES_BLIP_EXIST(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_133(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ADD_BLIP_FOR_ENTITY(iParam0);
	if (IS_ENTITY_A_VEHICLE(iParam0))
	{
		SET_BLIP_SCALE(iVar0, func_41(SET_BLIP_SCALE(), 1f, 1f));
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
		SET_BLIP_SCALE(iVar0, func_41(SET_BLIP_SCALE(), 0.7f, 0.7f));
		SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (IS_ENTITY_AN_OBJECT(iParam0))
	{
		SET_BLIP_SCALE(iVar0, func_41(SET_BLIP_SCALE(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_134(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3)
{
	return GET_HEADING_FROM_VECTOR_2D((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

void func_135()
{
	Global_30972 = 1;
}

int func_136(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = 0;
	iVar2 = iParam1;
	if (!HAS_PED_GOT_WEAPON(iParam0, iParam1, 0))
	{
		iVar0 = 1;
	}
	if (iVar2 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	iVar3 = 0;
	if (iParam2 == 1)
	{
		if (!IS_ENTITY_DEAD(iParam0, 0))
		{
			iVar3 = GET_AMMO_IN_PED_WEAPON(iParam0, iVar2);
		}
		if (iVar3 == -1)
		{
			iVar4 = GET_WEAPON_CLIP_SIZE(iVar2);
			if (iVar4 > 0)
			{
				iVar3 = iVar4;
			}
			else
			{
				GET_MAX_AMMO(iParam0, iVar2, &iVar3);
			}
		}
	}
	vVar5 = { GET_ENTITY_COORDS(iParam0, false) - Vector(10f, 0f, 0f) };
	if (bParam3)
	{
		vVar5 = { iParam4, iParam5, iParam6 };
	}
	while (func_140(iVar2, iVar6) != 0)
	{
		if (!IS_ENTITY_DEAD(iParam0, 0))
		{
			if (HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iVar2, func_140(iVar2, iVar6)))
			{
				if (func_139(func_140(iVar2, iVar6)))
				{
					iVar7 = GET_WEAPON_COMPONENT_TYPE_MODEL(func_140(iVar2, iVar6));
				}
			}
		}
		iVar6++;
	}
	iVar1 = CREATE_WEAPON_OBJECT(iVar2, iVar3, vVar5, iVar0, 1065353216, iVar7, iParam7, iParam8);
	while (func_140(iVar2, iVar6) != 0)
	{
		if (!IS_ENTITY_DEAD(iParam0, 0))
		{
			if (HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iVar2, func_140(iVar2, iVar6)))
			{
				GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iVar1, func_140(iVar2, iVar6));
				func_137(iVar1, func_140(iVar2, iVar6));
			}
		}
		iVar6++;
	}
	if (!IS_ENTITY_DEAD(iParam0, 0))
	{
		if (HAS_PED_GOT_WEAPON(iParam0, iVar2, 0))
		{
			SET_WEAPON_OBJECT_TINT_INDEX(iVar1, SET_WEAPON_OBJECT_TINT_INDEX(iParam0, iVar2));
		}
	}
	return iVar1;
}

void func_137(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_138(iParam1);
	if (iVar0 != 0)
	{
		GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iParam0, iVar0);
	}
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case 1550611612:
			return -1258515792;
			break;
		
		case 368550800:
			return 438243936;
			break;
		
		case -1769069349:
			return -455079056;
			break;
		
		case 24902297:
			return 740920107;
			break;
		
		case -228041614:
			return -541616347;
			break;
		
		case -584961562:
			return 1809261196;
			break;
		
		case -1153175946:
			return -1646538868;
			break;
		
		case 1301287696:
			return -1290164948;
			break;
		
		case 1597093459:
			return -964465134;
			break;
		
		case 1769871776:
			return 1135718771;
			break;
		
		case -1827882671:
			return 1253942266;
			break;
		
		case 259780317:
			return -403805974;
			break;
		
		case -1973342474:
			return 691432737;
			break;
		
		case 1996130345:
			return 987648331;
			break;
		
		case -1455657812:
			return -431680535;
			break;
		
		case -1668263084:
			return -847582310;
			break;
		
		case 1308243489:
			return -92592218;
			break;
		
		case 1122574335:
			return -494548326;
			break;
		
		case 1420313469:
			return 730876697;
			break;
		
		case 109848390:
			return 583159708;
			break;
		
		case 593945703:
			return -1928503603;
			break;
		
		case 1142457062:
			return 520557834;
			break;
	}
	return 0;
}

int func_139(int iParam0)
{
	if ((((((((((((((((((((((((((((((((iParam0 == joaat("component_pistol_varmod_luxe") || iParam0 == joaat("component_combatpistol_varmod_lowrider")) || iParam0 == joaat("component_appistol_varmod_luxe")) || iParam0 == joaat("component_microsmg_varmod_luxe")) || iParam0 == joaat("component_smg_varmod_luxe")) || iParam0 == joaat("component_assaultrifle_varmod_luxe")) || iParam0 == joaat("component_carbinerifle_varmod_luxe")) || iParam0 == joaat("component_advancedrifle_varmod_luxe")) || iParam0 == joaat("component_mg_varmod_lowrider")) || iParam0 == joaat("component_combatmg_varmod_lowrider")) || iParam0 == joaat("component_pumpshotgun_varmod_lowrider")) || iParam0 == joaat("component_sniperrifle_varmod_luxe")) || iParam0 == joaat("component_assaultsmg_varmod_lowrider")) || iParam0 == joaat("component_pistol50_varmod_luxe")) || iParam0 == joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0 == joaat("component_bullpuprifle_varmod_low")) || iParam0 == joaat("component_snspistol_varmod_lowrider")) || iParam0 == joaat("component_specialcarbine_varmod_lowrider")) || iParam0 == joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0 == joaat("component_knuckle_varmod_pimp")) || iParam0 == joaat("component_knuckle_varmod_ballas")) || iParam0 == joaat("component_knuckle_varmod_dollar")) || iParam0 == joaat("component_knuckle_varmod_diamond")) || iParam0 == joaat("component_knuckle_varmod_hate")) || iParam0 == joaat("component_knuckle_varmod_love")) || iParam0 == joaat("component_knuckle_varmod_player")) || iParam0 == joaat("component_knuckle_varmod_king")) || iParam0 == joaat("component_knuckle_varmod_vagos")) || iParam0 == joaat("component_switchblade_varmod_var1")) || iParam0 == joaat("component_switchblade_varmod_var2")) || iParam0 == joaat("component_revolver_varmod_boss")) || iParam0 == joaat("component_revolver_varmod_goon")) || iParam0 == 1623028892)
	{
		return 1;
	}
	return 0;
}

int func_140(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var5;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case -1121678507:
			switch (iParam1)
			{
				case 0:
					iVar0 = -2067221805;
					break;
				
				case 1:
					iVar0 = -1820405577;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_142(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < GET_NUM_DLC_WEAPON_COMPONENTS(iVar1))
					{
						if (GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var5))
						{
							if (!func_141(Var5.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_141(int iParam0)
{
	switch (iParam0)
	{
		case -1258515792:
		case 438243936:
		case -455079056:
		case 740920107:
		case -541616347:
		case 1809261196:
		case -1646538868:
		case -1290164948:
		case -964465134:
		case 1135718771:
		case 1253942266:
		case -403805974:
		case 691432737:
		case 987648331:
		case -431680535:
		case -847582310:
		case -92592218:
		case -494548326:
		case 730876697:
		case 583159708:
		case -1928503603:
		case 520557834:
			return 1;
			break;
	}
	return 0;
}

int func_142(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = GET_NUM_DLC_WEAPONS();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (GET_DLC_WEAPON_DATA(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_143()
{
	bool bVar0;
	
	bVar0 = HAS_CUTSCENE_LOADED();
	if (!Global_76576)
	{
		if (!bVar0)
		{
			Global_76576 = 1;
		}
	}
	return bVar0;
}

int func_144(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_145(iParam0, iParam1);
}

int func_145(int iParam0, int iParam1)
{
	if (func_17(14) && !func_156(iParam0))
	{
		return 0;
	}
	if (HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_30983 != 0 && !Global_76577)
	{
		return 0;
	}
	if (func_155(&Global_4269915))
	{
		if (func_153(&Global_4269915, iParam0))
		{
			return 0;
		}
		if (func_146(&Global_4269915, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_146(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_156(iParam1))
	{
		return 0;
	}
	if (func_153(uParam0, iParam1))
	{
		return 0;
	}
	if (func_152(uParam0) < 0f)
	{
		func_151(uParam0, 0);
	}
	func_149(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_147(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_147(var uParam0, int iParam1)
{
	int iVar0;
	
	if (HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_156(iParam1))
	{
		return 0;
	}
	if (func_153(uParam0, iParam1))
	{
		return 0;
	}
	if (func_152(uParam0) < 0f)
	{
		func_151(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_148(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_148(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_149(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_150(uParam0, iVar0);
		iVar0++;
	}
	func_151(uParam0, (Global_4269914 - 0.5f));
}

void func_150(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_151(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_152(var uParam0)
{
	return uParam0->f_80;
}

bool func_153(var uParam0, int iParam1)
{
	return func_154(uParam0, iParam1) != -1;
}

int func_154(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_155(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_156(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

void func_157()
{
	if (fLocal_87 > 0f)
	{
		fLocal_87 = (fLocal_87 - (0.6f / (1f / GET_FRAME_TIME())));
	}
	else
	{
		fLocal_87 = 0f;
	}
	if (fLocal_87 >= 0f)
	{
		_SET_DOOR_AJAR_ANGLE(Global_40519[10 /*31*/], fLocal_87, false, true);
		_SET_DOOR_ACCELERATION_LIMIT(Global_40519[10 /*31*/], 4, false, true);
	}
	if (fLocal_86 < 0f)
	{
		fLocal_86 = (fLocal_86 + (0.6f / (1f / GET_FRAME_TIME())));
	}
	else
	{
		fLocal_86 = 0f;
	}
	if (fLocal_86 <= 0f)
	{
		_SET_DOOR_AJAR_ANGLE(Global_40519[9 /*31*/], fLocal_86, false, true);
		_SET_DOOR_ACCELERATION_LIMIT(Global_40519[9 /*31*/], 4, false, true);
	}
}

void func_158()
{
	if (fLocal_87 < 1f)
	{
		fLocal_87 = (fLocal_87 + (0.6f / (1f / GET_FRAME_TIME())));
	}
	else
	{
		fLocal_87 = 1f;
	}
	if (fLocal_87 <= 1f)
	{
		_SET_DOOR_AJAR_ANGLE(Global_40519[10 /*31*/], fLocal_87, false, true);
		_SET_DOOR_ACCELERATION_LIMIT(Global_40519[10 /*31*/], 4, false, true);
	}
	if (fLocal_86 > -1f)
	{
		fLocal_86 = (fLocal_86 - (0.6f / (1f / GET_FRAME_TIME())));
	}
	else
	{
		fLocal_86 = -1f;
	}
	if (fLocal_86 >= -1f)
	{
		_SET_DOOR_AJAR_ANGLE(Global_40519[9 /*31*/], fLocal_86, false, true);
		_SET_DOOR_ACCELERATION_LIMIT(Global_40519[9 /*31*/], 4, false, true);
	}
}

void func_159()
{
	switch (iLocal_93)
	{
		case 0:
			REQUEST_MODEL(joaat("a_m_o_acult_02"));
			REQUEST_MODEL(joaat("prop_anim_cash_pile_02"));
			REQUEST_ANIM_DICT("random@altruist_cult");
			PREPARE_MUSIC_EVENT("AC_DELIVERED");
			REQUEST_WEAPON_ASSET(joaat("weapon_assaultrifle"), 31, 0);
			if ((((HAS_MODEL_LOADED(joaat("a_m_o_acult_02")) && HAS_MODEL_LOADED(joaat("prop_anim_cash_pile_02"))) && HAS_MODEL_LOADED("random@altruist_cult")) && HAS_MODEL_LOADED("AC_DELIVERED")) && HAS_MODEL_LOADED(joaat("weapon_assaultrifle")))
			{
				if (Global_111560.f_24990.f_5 < 2)
				{
					if (Global_111560.f_24990.f_5 == 0)
					{
						sLocal_269 = "ACULT_HI";
					}
					else
					{
						sLocal_269 = "ACULT_LEAVE5";
					}
					sLocal_263 = "cult_p5_guard";
					sLocal_265 = "cult_p5_trv";
					sLocal_266 = "cult_p5_victim_01";
					sLocal_267 = "cult_p5_victim_02";
					sLocal_268 = "cult_p5_cam";
					fLocal_89 = 0.75f;
					fLocal_88 = 0.999f;
				}
				else if (Global_111560.f_24990.f_5 >= 2)
				{
					sLocal_269 = "ACULT_CAPT";
					sLocal_263 = "cult_p7_guard_01";
					sLocal_264 = "cult_p7_guard_02";
					sLocal_265 = "cult_p7_trv";
					sLocal_266 = "cult_p7_victim_01";
					sLocal_267 = "cult_p7_victim_02";
					sLocal_268 = "cult_p7_cam";
					fLocal_89 = 0.98f;
					fLocal_88 = 0.98f;
					REQUEST_MODEL(-2022916910);
					REQUEST_MODEL(-1322183878);
					REQUEST_MODEL(joaat("prop_box_wood05a"));
					REQUEST_MODEL(joaat("prop_security_case_01"));
					if (!IS_CUTSCENE_ACTIVE())
					{
						REQUEST_CUTSCENE("ac_ig_3_p3_b", 8);
					}
				}
				if (DOES_BLIP_EXIST(iLocal_104))
				{
					REMOVE_BLIP(&iLocal_104);
				}
				func_23(1, 1, 1, 0, 0, 0);
				SET_PLAYER_CONTROL(SET_PLAYER_CONTROL(), false, 0);
				CLEAR_HELP(1);
				DISPLAY_HUD(false);
				DISPLAY_RADAR(false);
				HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(), true);
				SET_CURRENT_PED_WEAPON(SET_CURRENT_PED_WEAPON(), joaat("weapon_unarmed"), true);
				TRIGGER_MUSIC_EVENT("AC_DELIVERED");
				if (func_187())
				{
					func_186(0);
				}
				func_184();
				wait(0);
				if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
				{
					iLocal_99 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
					if (IS_VEHICLE_DRIVEABLE(iLocal_99, 0))
					{
						if (IS_VEHICLE_STOPPED(iLocal_99))
						{
							iLocal_93++;
						}
					}
				}
				else
				{
					iLocal_99 = GET_PLAYERS_LAST_VEHICLE();
					if (!IS_PED_INJURED(iLocal_97[0]) && !IS_PED_INJURED(iLocal_97[1]))
					{
						CLEAR_PED_TASKS(iLocal_97[0]);
						REMOVE_PED_FROM_GROUP(iLocal_97[0]);
						CLEAR_PED_TASKS(iLocal_97[1]);
						REMOVE_PED_FROM_GROUP(iLocal_97[1]);
					}
					iLocal_93++;
				}
			}
			break;
		
		case 1:
			if (DOES_ENTITY_EXIST(iLocal_99))
			{
				if (!IS_ENTITY_A_MISSION_ENTITY(iLocal_99))
				{
					SET_ENTITY_AS_MISSION_ENTITY(iLocal_99, true, 0);
				}
				if (IS_ENTITY_AT_COORD(iLocal_99, vLocal_54, 13f, 13f, 13f, false, true, 0))
				{
					SET_ENTITY_COORDS(iLocal_99, -1028.415f, 4924.863f, 205.9386f, 0, false, 0, 1);
					if (!IS_ENTITY_DEAD(iLocal_99, 0))
					{
						SET_ENTITY_HEADING(iLocal_99, 149.8882f);
						SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_99, 1084227584);
					}
				}
			}
			CLEAR_AREA(vLocal_54, 12f, 1, 0, 0, false);
			SET_ENTITY_COORDS(SET_ENTITY_COORDS(), -1035.625f, 4915.152f, 205.5761f, 1, false, 0, 1);
			SET_ENTITY_HEADING(SET_ENTITY_HEADING(), 128.2065f);
			if (!IS_PED_INJURED(iLocal_97[0]) && !IS_PED_INJURED(iLocal_97[1]))
			{
				SET_ENTITY_COORDS(iLocal_97[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, false, 0, 1);
				SET_ENTITY_HEADING(iLocal_97[0], 128.2065f);
				SET_ENTITY_COORDS(iLocal_97[1], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 1f, 0f), 1, false, 0, 1);
				SET_ENTITY_HEADING(iLocal_97[1], 128.2065f);
			}
			iLocal_98[0] = CREATE_PED(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, true);
			func_99(&uLocal_271, 1, iLocal_98[0], "ACULTMember1", 0, 1);
			if (Global_111560.f_24990.f_5 >= 2)
			{
				iLocal_98[1] = CREATE_PED(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, true);
				func_99(&uLocal_271, 2, iLocal_98[1], "ACULTMember2", 0, 1);
			}
			func_99(&uLocal_271, 0, PLAYER_PED_ID(), "TREVOR", 0, 1);
			func_99(&uLocal_271, 3, 0, "ACULTMaster", 0, 1);
			func_99(&uLocal_271, 4, 0, "ACULTGroup", 0, 1);
			func_100(&uLocal_271, "ACULTAU", sLocal_269, 4, 0, 0, 0);
			SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_98[0], true);
			iLocal_101 = CREATE_WEAPON_OBJECT(joaat("weapon_assaultrifle"), -1, CREATE_WEAPON_OBJECT(iLocal_98[0], true), 1, 1065353216, 0, 0, 1);
			ATTACH_ENTITY_TO_ENTITY(iLocal_101, iLocal_98[0], ATTACH_ENTITY_TO_ENTITY(iLocal_98[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1);
			if (Global_111560.f_24990.f_5 < 2)
			{
				iLocal_100 = CREATE_OBJECT(joaat("prop_anim_cash_pile_02"), vLocal_53, true, true, false);
				ATTACH_ENTITY_TO_ENTITY(iLocal_100, ATTACH_ENTITY_TO_ENTITY(), ATTACH_ENTITY_TO_ENTITY(ATTACH_ENTITY_TO_ENTITY(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			}
			else if (Global_111560.f_24990.f_5 >= 2)
			{
				GIVE_WEAPON_TO_PED(iLocal_98[1], joaat("weapon_assaultrifle"), -1, true, true);
			}
			iLocal_106 = CREATE_CAM("DEFAULT_ANIMATED_CAMERA", true);
			iLocal_92 = CREATE_SYNCHRONIZED_SCENE(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			TASK_SYNCHRONIZED_SCENE(TASK_SYNCHRONIZED_SCENE(), iLocal_92, "random@altruist_cult", sLocal_265, 1000f, -2f, 4, 0, 1148846080, 0);
			TASK_SYNCHRONIZED_SCENE(iLocal_98[0], iLocal_92, "random@altruist_cult", sLocal_263, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_111560.f_24990.f_5 >= 2)
			{
				TASK_SYNCHRONIZED_SCENE(iLocal_98[1], iLocal_92, "random@altruist_cult", sLocal_264, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_106, iLocal_92, sLocal_268, "random@altruist_cult");
			RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
			if (!IS_PED_INJURED(iLocal_97[0]) && !IS_PED_INJURED(iLocal_97[1]))
			{
				TASK_SYNCHRONIZED_SCENE(iLocal_97[0], iLocal_92, "random@altruist_cult", sLocal_266, 1000f, -2f, 4, 0, 1148846080, 0);
				TASK_SYNCHRONIZED_SCENE(iLocal_97[1], iLocal_92, "random@altruist_cult", sLocal_267, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_93++;
			break;
		
		case 2:
			if (!IS_PED_INJURED(iLocal_97[0]))
			{
				if (IS_PED_MALE(iLocal_97[0]))
				{
					func_182(iLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_182(iLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!IS_PED_INJURED(iLocal_97[1]))
			{
				if (IS_PED_MALE(iLocal_97[1]))
				{
					func_182(iLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_182(iLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (GET_SYNCHRONIZED_SCENE_PHASE(iLocal_92) > fLocal_89)
			{
				iLocal_93++;
			}
			break;
		
		case 3:
			if (!IS_PED_INJURED(iLocal_97[0]))
			{
				if (IS_PED_MALE(iLocal_97[0]))
				{
					func_182(iLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_182(iLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!IS_PED_INJURED(iLocal_97[1]))
			{
				if (IS_PED_MALE(iLocal_97[1]))
				{
					func_182(iLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_182(iLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (GET_SYNCHRONIZED_SCENE_PHASE(iLocal_92) > fLocal_88)
			{
				iLocal_93++;
			}
			break;
		
		case 4:
			if (Global_111560.f_24990.f_5 < 2)
			{
				func_135();
				if (DOES_ENTITY_EXIST(iLocal_98[0]))
				{
					DELETE_PED(&(iLocal_98[0]));
				}
				if (DOES_ENTITY_EXIST(iLocal_98[1]))
				{
					DELETE_PED(&(iLocal_98[1]));
				}
				if (DOES_ENTITY_EXIST(iLocal_100))
				{
					DELETE_OBJECT(&iLocal_100);
				}
				if (DOES_ENTITY_EXIST(iLocal_101))
				{
					DELETE_OBJECT(&iLocal_101);
				}
				CLEAR_PED_TASKS(CLEAR_PED_TASKS());
				_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0);
				SET_CAM_ACTIVE(iLocal_106, false);
				func_23(0, 1, 1, 0, 0, 0);
				SET_PLAYER_CONTROL(SET_PLAYER_CONTROL(), true, 0);
				DISPLAY_HUD(true);
				DISPLAY_RADAR(true);
				HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(), false);
				SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				func_160(func_15(), 1, 2000, 0, 0);
			}
			TRIGGER_MUSIC_EVENT("AC_DONE");
			Global_111560.f_24990.f_5 += 2;
			iLocal_78 = 1;
			break;
	}
}

void func_160(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_181(iParam0) == 3)
	{
		return;
	}
	if (func_181(iParam0) == 4)
	{
		return;
	}
	func_161(func_181(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		STAT_SET_INT(iVar1, iVar0, 1);
	}
}

int func_161(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_180();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_179(99, 1);
					func_178(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_178(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_178(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_176(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_171(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_178(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_178(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_178(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_171(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_178(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_178(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_178(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_178(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_178(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_178(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_178(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_178(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_178(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_178(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_178(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_178(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_178(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_178(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_178(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_171(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_178(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_178(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_178(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_178(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_178(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_178(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_170(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_179(95, iParam3);
					break;
				
				case 1:
					func_179(97, iParam3);
					break;
				
				case 2:
					func_179(96, iParam3);
					break;
			}
			func_179(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_164(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_164(iVar1);
	}
	iVar5 = (Global_58645[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_58645[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_58645[iVar2] = 2147483647;
				}
				else
				{
					Global_58645[iVar2] = (Global_58645[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_178(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_178(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_178(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_58645[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_58645[iVar2];
			Global_58645[iVar2] = (Global_58645[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_111560.f_20559.f_233[iVar2 /*69*/].f_2[Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_111560.f_20559.f_233[iVar2 /*69*/].f_2[Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_111560.f_20559.f_233[iVar2 /*69*/].f_2[Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_111560.f_20559.f_233[iVar2 /*69*/]++;
		Global_111560.f_20559.f_233[iVar2 /*69*/].f_1++;
		if (Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_111560.f_20559.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_163(iParam0);
	if (Global_41396 == 15)
	{
		func_162(0);
	}
	return 1;
}

void func_162(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_111560.f_20559.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_58653[iVar0 /*3*/][0] = Global_111560.f_20559[iVar0];
		Global_58653.f_31[iVar0 /*3*/][0] = Global_111560.f_20559.f_11[iVar0];
		Global_58653.f_62[iVar0 /*3*/][0] = Global_111560.f_20559.f_22[iVar0];
		Global_58653.f_93[iVar0 /*3*/][0] = Global_111560.f_20559.f_33[iVar0];
		Global_58653.f_124[iVar0 /*3*/][0] = Global_111560.f_20559.f_44[iVar0];
		Global_58653.f_155[iVar0 /*3*/][0] = Global_111560.f_20559.f_55[iVar0];
		Global_58653.f_186[iVar0 /*3*/][0] = Global_111560.f_20559.f_66[iVar0];
		Global_58653.f_217[iVar0 /*3*/][0] = Global_111560.f_20559.f_77[iVar0];
		Global_58653.f_248[iVar0 /*3*/][0] = Global_111560.f_20559.f_88[iVar0];
		if (!bParam0)
		{
			Global_58653[iVar0 /*3*/][1] = Global_111560.f_20559[iVar0];
			Global_58653.f_31[iVar0 /*3*/][1] = Global_111560.f_20559.f_11[iVar0];
			Global_58653.f_62[iVar0 /*3*/][1] = Global_111560.f_20559.f_22[iVar0];
			Global_58653.f_93[iVar0 /*3*/][1] = Global_111560.f_20559.f_33[iVar0];
			Global_58653.f_124[iVar0 /*3*/][1] = Global_111560.f_20559.f_44[iVar0];
			Global_58653.f_155[iVar0 /*3*/][1] = Global_111560.f_20559.f_55[iVar0];
			Global_58653.f_186[iVar0 /*3*/][1] = Global_111560.f_20559.f_66[iVar0];
			Global_58653.f_217[iVar0 /*3*/][1] = Global_111560.f_20559.f_77[iVar0];
			Global_58653.f_248[iVar0 /*3*/][1] = Global_111560.f_20559.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_163(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_58645[iParam0];
	switch (iParam0)
	{
		case 0:
			STAT_SET_INT(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			STAT_SET_INT(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			STAT_SET_INT(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_164(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_169(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_169(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_169(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_169(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_167(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_167(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_167(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_167(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_167(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_167(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (IS_BIT_SET(Global_111560.f_20559.f_471, iParam0))
		{
			bVar0 = true;
			CLEAR_BIT(&(Global_111560.f_20559.f_471), iParam0);
		}
	}
	else if (IS_BIT_SET(Global_111560.f_20559.f_471, iParam0) || IS_BIT_SET(Global_2097152[func_166() /*10828*/].f_6168.f_10, iParam0))
	{
		bVar0 = true;
		CLEAR_BIT(&(Global_111560.f_20559.f_471), iParam0);
		CLEAR_BIT(&(Global_2097152[func_166() /*10828*/].f_6168.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		_SET_NOTIFICATION_TEXT_ENTRY("COUP_RED");
		ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_165(iParam0));
		_SET_NOTIFICATION_MESSAGE_2(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_165(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_166()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_167(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_168(iParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_168(var uParam0)
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

int func_169(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	
	if (iParam2 == -1)
	{
		iParam2 = func_27();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = _GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - _0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = _GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - _0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = _GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - _0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = _GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - _0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = _GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - _0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = _GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - _0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = _GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - _0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = _GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - _0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = _GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - _0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = _GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - _0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = _GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - _0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = _GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - _0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = _GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - _0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = _GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - _0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = _GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - _0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = _GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - _0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = _GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - _0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = _GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - _0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar19, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = _GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - _0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar20, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = _GET_NGSTAT_BOOL_HASH((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - _0xF4D8E7AC2A27758C((iParam0 - 28098)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar21, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = _GET_NGSTAT_BOOL_HASH((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - _0xF4D8E7AC2A27758C((iParam0 - 28355)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(iVar22, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_170(int iParam0)
{
	func_179(93, iParam0);
	func_179(29, iParam0);
	func_179(30, iParam0);
}

bool func_171(int iParam0)
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
	int iVar10;
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_173(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_173(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_173(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_173(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = 0xF12E6CD06C73D69E();
		iVar1 = func_172(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = 0xF12E6CD06C73D69E();
		iVar3 = func_172(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = 0xF12E6CD06C73D69E();
		iVar5 = func_172(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = 0xF12E6CD06C73D69E();
		iVar7 = func_172(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = 0xF12E6CD06C73D69E();
		iVar9 = func_172(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = 0xF12E6CD06C73D69E();
		iVar11 = func_172(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		return IS_BIT_SET(Global_111560.f_20559.f_471, iParam0);
	}
	return IS_BIT_SET(Global_2097152[func_166() /*10828*/].f_6168.f_10, iParam0);
}

int func_172(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_168(iParam1)];
	if (STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_173(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	iVar1 = func_175(iParam0, iParam1);
	uVar2 = func_174(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_174(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - _0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - _0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - _0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - _0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - _0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - _0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - _0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - _0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - _0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - _0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - _0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - _0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - _0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - _0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - _0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - _0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - _0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - _0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - _0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - _0xF4D8E7AC2A27758C((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - _0xF4D8E7AC2A27758C((iParam0 - 28355)) * 64);
	}
	return iVar0;
}

int func_175(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = _GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = _GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = _GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = _GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = _GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = _GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_176(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STAT_SET_INT(joaat("num_cash_spent"), iVar1, 1);
		func_177(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_144(27, 1);
	return 1;
}

int func_177(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = _GET_ACHIEVEMENT_PROGRESSION(iParam0);
	if (iParam1 > iVar0)
	{
		return _SET_ACHIEVEMENT_PROGRESSION(iParam0, iParam1);
	}
	return 0;
}

void func_178(int iParam0, int iParam1)
{
	int iVar0;
	
	STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STAT_SET_INT(iParam0, iVar0, 1);
}

void func_179(int iParam0, int iParam1)
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

void func_180()
{
	int iVar0;
	
	if (NETWORK_IS_SIGNED_IN())
	{
		STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_58645[0] == iVar0)
		{
			Global_58645[0] = iVar0;
		}
		STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_58645[1] == iVar0)
		{
			Global_58645[1] = iVar0;
		}
		STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_58645[2] == iVar0)
		{
			Global_58645[2] = iVar0;
		}
	}
}

int func_181(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_17;
}

void func_182(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	_PLAY_AMBIENT_SPEECH_WITH_VOICE(iParam0, sParam1, sParam2, func_183(iParam3), 0);
}

int func_183(int iParam0)
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

void func_184()
{
	Global_19671 = 0;
	func_185();
}

void func_185()
{
	RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		STOP_SCRIPTED_CONVERSATION(false);
		Global_20805 = 6;
	}
}

void func_186(int iParam0)
{
	Global_21816 = iParam0;
}

int func_187()
{
	if (Global_21816 == 1)
	{
		return 1;
	}
	return 0;
}

void func_188()
{
	switch (iLocal_93)
	{
		case 0:
			REQUEST_MODEL(joaat("a_m_o_acult_02"));
			REQUEST_MODEL(joaat("prop_anim_cash_pile_02"));
			REQUEST_ANIM_DICT("random@altruist_cult");
			PREPARE_MUSIC_EVENT("AC_DELIVERED");
			REQUEST_WEAPON_ASSET(joaat("weapon_assaultrifle"), 31, 0);
			if ((((HAS_MODEL_LOADED(joaat("a_m_o_acult_02")) && HAS_MODEL_LOADED(joaat("prop_anim_cash_pile_02"))) && HAS_MODEL_LOADED("random@altruist_cult")) && HAS_MODEL_LOADED("AC_DELIVERED")) && HAS_MODEL_LOADED(joaat("weapon_assaultrifle")))
			{
				if (Global_111560.f_24990.f_5 == 0)
				{
					sLocal_269 = "ACULT_HI";
					sLocal_263 = "cult_p2_guard";
					sLocal_265 = "cult_p2_trv";
					sLocal_266 = "cult_p2_victim";
					sLocal_268 = "cult_p2_cam";
					fLocal_89 = 0.8f;
					fLocal_88 = 0.968f;
				}
				else if (Global_111560.f_24990.f_5 == 1)
				{
					sLocal_269 = "ACULT_LEAVE3";
					sLocal_263 = "cult_p4_guard";
					sLocal_265 = "cult_p4_trv";
					sLocal_266 = "cult_p4_victim";
					sLocal_268 = "cult_p4_cam";
					fLocal_89 = 0.77f;
					fLocal_88 = 0.999f;
				}
				else if (Global_111560.f_24990.f_5 == 2)
				{
					sLocal_269 = "ACULT_LEAVE3";
					sLocal_263 = "cult_p4_guard";
					sLocal_265 = "cult_p4_trv";
					sLocal_266 = "cult_p4_victim";
					sLocal_268 = "cult_p4_cam";
					fLocal_89 = 0.77f;
					fLocal_88 = 0.999f;
				}
				else if (Global_111560.f_24990.f_5 >= 3)
				{
					sLocal_269 = "ACULT_CAPT";
					sLocal_263 = "cult_p7_guard_01";
					sLocal_264 = "cult_p7_guard_02";
					sLocal_265 = "cult_p7_trv";
					sLocal_266 = "cult_p7_victim_01";
					sLocal_268 = "cult_p7_cam";
					fLocal_89 = 0.98f;
					fLocal_88 = 0.98f;
					REQUEST_MODEL(-2022916910);
					REQUEST_MODEL(-1322183878);
					REQUEST_MODEL(joaat("prop_box_wood05a"));
					REQUEST_MODEL(joaat("prop_security_case_01"));
					if (!IS_CUTSCENE_ACTIVE())
					{
						REQUEST_CUTSCENE("ac_ig_3_p3_b", 8);
					}
				}
				if (DOES_BLIP_EXIST(iLocal_104))
				{
					REMOVE_BLIP(&iLocal_104);
				}
				func_23(1, 1, 1, 0, 0, 0);
				SET_PLAYER_CONTROL(SET_PLAYER_CONTROL(), false, 0);
				CLEAR_HELP(1);
				DISPLAY_HUD(false);
				DISPLAY_RADAR(false);
				HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(), true);
				SET_CURRENT_PED_WEAPON(SET_CURRENT_PED_WEAPON(), joaat("weapon_unarmed"), true);
				TRIGGER_MUSIC_EVENT("AC_DELIVERED");
				if (func_187())
				{
					func_186(0);
				}
				func_184();
				wait(0);
				if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
				{
					iLocal_99 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
					if (IS_VEHICLE_DRIVEABLE(iLocal_99, 0))
					{
						if (IS_VEHICLE_STOPPED(iLocal_99))
						{
							iLocal_93++;
						}
					}
				}
				else
				{
					iLocal_99 = GET_PLAYERS_LAST_VEHICLE();
					if (!IS_PED_INJURED(iLocal_97[0]))
					{
						CLEAR_PED_TASKS(iLocal_97[0]);
						REMOVE_PED_FROM_GROUP(iLocal_97[0]);
					}
					iLocal_93++;
				}
			}
			break;
		
		case 1:
			if (DOES_ENTITY_EXIST(iLocal_99))
			{
				if (!IS_ENTITY_A_MISSION_ENTITY(iLocal_99))
				{
					SET_ENTITY_AS_MISSION_ENTITY(iLocal_99, true, 0);
				}
				if (IS_ENTITY_AT_COORD(iLocal_99, vLocal_54, 13f, 13f, 13f, false, true, 0))
				{
					SET_ENTITY_COORDS(iLocal_99, -1028.415f, 4924.863f, 205.9386f, 0, false, 0, 1);
					if (!IS_ENTITY_DEAD(iLocal_99, 0))
					{
						SET_ENTITY_HEADING(iLocal_99, 149.8882f);
						SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_99, 1084227584);
					}
				}
			}
			CLEAR_AREA(vLocal_54, 12f, 1, 0, 0, false);
			SET_ENTITY_COORDS(SET_ENTITY_COORDS(), -1035.625f, 4915.152f, 205.5761f, 1, false, 0, 1);
			SET_ENTITY_HEADING(SET_ENTITY_HEADING(), 128.2065f);
			if (!IS_PED_INJURED(iLocal_97[0]))
			{
				SET_ENTITY_COORDS(iLocal_97[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, false, 0, 1);
				SET_ENTITY_HEADING(iLocal_97[0], 128.2065f);
			}
			iLocal_98[0] = CREATE_PED(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, true);
			func_99(&uLocal_271, 1, iLocal_98[0], "ACULTMember1", 0, 1);
			if (Global_111560.f_24990.f_5 >= 3)
			{
				iLocal_98[1] = CREATE_PED(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, true);
				func_99(&uLocal_271, 2, iLocal_98[1], "ACULTMember2", 0, 1);
			}
			func_99(&uLocal_271, 0, PLAYER_PED_ID(), "TREVOR", 0, 1);
			func_99(&uLocal_271, 3, 0, "ACULTMaster", 0, 1);
			func_99(&uLocal_271, 4, 0, "ACULTGroup", 0, 1);
			if (Global_111560.f_24990.f_5 != 1 && Global_111560.f_24990.f_5 != 2)
			{
				func_100(&uLocal_271, "ACULTAU", sLocal_269, 4, 0, 0, 0);
			}
			settimerb(0);
			SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_98[0], true);
			iLocal_100 = CREATE_OBJECT(joaat("prop_anim_cash_pile_02"), vLocal_53, true, true, false);
			iLocal_101 = CREATE_WEAPON_OBJECT(joaat("weapon_assaultrifle"), -1, CREATE_WEAPON_OBJECT(iLocal_98[0], true), 1, 1065353216, 0, 0, 1);
			ATTACH_ENTITY_TO_ENTITY(iLocal_101, iLocal_98[0], ATTACH_ENTITY_TO_ENTITY(iLocal_98[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1);
			if (Global_111560.f_24990.f_5 < 3)
			{
				if (Global_111560.f_24990.f_5 == 0)
				{
					ATTACH_ENTITY_TO_ENTITY(iLocal_100, ATTACH_ENTITY_TO_ENTITY(), ATTACH_ENTITY_TO_ENTITY(ATTACH_ENTITY_TO_ENTITY(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
				else
				{
					ATTACH_ENTITY_TO_ENTITY(iLocal_100, ATTACH_ENTITY_TO_ENTITY(), ATTACH_ENTITY_TO_ENTITY(ATTACH_ENTITY_TO_ENTITY(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
			}
			else if (Global_111560.f_24990.f_5 >= 3)
			{
				GIVE_WEAPON_TO_PED(iLocal_98[1], joaat("weapon_assaultrifle"), -1, true, true);
			}
			iLocal_106 = CREATE_CAM("DEFAULT_ANIMATED_CAMERA", true);
			iLocal_92 = CREATE_SYNCHRONIZED_SCENE(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			TASK_SYNCHRONIZED_SCENE(TASK_SYNCHRONIZED_SCENE(), iLocal_92, "random@altruist_cult", sLocal_265, 1000f, -2f, 4, 0, 1148846080, 0);
			TASK_SYNCHRONIZED_SCENE(iLocal_98[0], iLocal_92, "random@altruist_cult", sLocal_263, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_111560.f_24990.f_5 >= 3)
			{
				TASK_SYNCHRONIZED_SCENE(iLocal_98[1], iLocal_92, "random@altruist_cult", sLocal_264, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_106, iLocal_92, sLocal_268, "random@altruist_cult");
			RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
			if (!IS_PED_INJURED(iLocal_97[0]))
			{
				TASK_SYNCHRONIZED_SCENE(iLocal_97[0], iLocal_92, "random@altruist_cult", sLocal_266, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_93++;
			break;
		
		case 2:
			if (!IS_PED_INJURED(iLocal_97[0]))
			{
				if (IS_PED_MALE(iLocal_97[0]))
				{
					func_182(iLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_182(iLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (timerb() > 2000 && timerb() < 2100)
			{
				if (Global_111560.f_24990.f_5 == 1 || Global_111560.f_24990.f_5 == 2)
				{
					if (!func_115())
					{
						func_100(&uLocal_271, "ACULTAU", sLocal_269, 4, 0, 0, 0);
					}
				}
			}
			if (GET_SYNCHRONIZED_SCENE_PHASE(iLocal_92) > fLocal_89)
			{
				iLocal_93++;
			}
			break;
		
		case 3:
			if (!IS_PED_INJURED(iLocal_97[0]))
			{
				if (IS_PED_MALE(iLocal_97[0]))
				{
					func_182(iLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_182(iLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (Global_111560.f_24990.f_5 == 1 || Global_111560.f_24990.f_5 == 2)
			{
				if ((GET_SYNCHRONIZED_SCENE_PHASE(iLocal_92) > 0.9742857f && !iLocal_85) && GET_SYNCHRONIZED_SCENE_PHASE() == 4)
				{
					ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
					PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
					iLocal_85 = 1;
				}
			}
			if (GET_SYNCHRONIZED_SCENE_PHASE(iLocal_92) > fLocal_88)
			{
				iLocal_93++;
			}
			break;
		
		case 4:
			if (Global_111560.f_24990.f_5 < 3)
			{
				if (Global_111560.f_24990.f_5 != 1 && Global_111560.f_24990.f_5 != 2)
				{
					func_135();
					if (DOES_ENTITY_EXIST(iLocal_98[0]))
					{
						DELETE_PED(&(iLocal_98[0]));
					}
					if (DOES_ENTITY_EXIST(iLocal_98[1]))
					{
						DELETE_PED(&(iLocal_98[1]));
					}
				}
				else
				{
					settimerb(0);
					if (DOES_ENTITY_EXIST(iLocal_98[0]))
					{
						SET_ENTITY_VISIBLE(iLocal_98[0], false, 0);
					}
					if (DOES_ENTITY_EXIST(iLocal_98[1]))
					{
						SET_ENTITY_VISIBLE(iLocal_98[1], false, 0);
					}
					if (DOES_ENTITY_EXIST(iLocal_97[0]))
					{
						SET_ENTITY_VISIBLE(iLocal_97[0], false, 0);
					}
					iLocal_93++;
				}
				if (DOES_ENTITY_EXIST(iLocal_100))
				{
					DELETE_OBJECT(&iLocal_100);
				}
				if (DOES_ENTITY_EXIST(iLocal_101))
				{
					DELETE_OBJECT(&iLocal_101);
				}
				CLEAR_PED_TASKS(CLEAR_PED_TASKS());
				if (Global_111560.f_24990.f_5 == 0)
				{
					FORCE_PED_MOTION_STATE(FORCE_PED_MOTION_STATE(), -668482597, false, 0, 0);
					SIMULATE_PLAYER_INPUT_GAIT(SIMULATE_PLAYER_INPUT_GAIT(), 1f, 750, 0, 1, 0);
				}
				if (ARE_STRINGS_EQUAL(sLocal_268, "cult_p4_cam"))
				{
					RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
				}
				else
				{
					_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0);
				}
				SET_CAM_ACTIVE(iLocal_106, false);
				func_23(0, 1, 1, 0, 0, 0);
				SET_PLAYER_CONTROL(SET_PLAYER_CONTROL(), true, 0);
				DISPLAY_HUD(true);
				DISPLAY_RADAR(true);
				HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(), false);
				SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				func_160(func_15(), 1, 1000, 0, 0);
			}
			if (Global_111560.f_24990.f_5 != 1 && Global_111560.f_24990.f_5 != 2)
			{
				TRIGGER_MUSIC_EVENT("AC_DONE");
				Global_111560.f_24990.f_5++;
				iLocal_78 = 1;
			}
			break;
		
		case 5:
			if (!func_115() || timerb() > 7000)
			{
				func_135();
				if (DOES_ENTITY_EXIST(iLocal_98[0]))
				{
					DELETE_PED(&(iLocal_98[0]));
				}
				if (DOES_ENTITY_EXIST(iLocal_98[1]))
				{
					DELETE_PED(&(iLocal_98[1]));
				}
				TRIGGER_MUSIC_EVENT("AC_DONE");
				Global_111560.f_24990.f_5++;
				iLocal_78 = 1;
			}
			break;
	}
}

void func_189()
{
	if (func_191())
	{
		if (func_15() == 2)
		{
			if (DOES_GROUP_EXIST(func_190()))
			{
				GET_GROUP_SIZE(func_190(), &uLocal_90, &iLocal_91);
				if (iLocal_91 == 1)
				{
					iLocal_97[0] = GET_PED_AS_GROUP_MEMBER(func_190(), 0);
					if (IS_ENTITY_AT_COORD(iLocal_97[0], vLocal_54, 5f, 5f, 5f, false, true, 0))
					{
						if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
						{
							if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
							{
								BRING_VEHICLE_TO_HALT(BRING_VEHICLE_TO_HALT(), 10.5f, 5, 0);
							}
						}
						settimera(0);
						iLocal_50 = 1;
					}
				}
				else if (iLocal_91 == 2)
				{
					iLocal_97[0] = GET_PED_AS_GROUP_MEMBER(func_190(), 0);
					iLocal_97[1] = GET_PED_AS_GROUP_MEMBER(func_190(), 1);
					if (IS_ENTITY_AT_COORD(iLocal_97[0], vLocal_54, 5f, 5f, 5f, false, true, 0) && IS_ENTITY_AT_COORD(iLocal_97[1], vLocal_54, 5f, 5f, 5f, false, true, 0))
					{
						if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
						{
							if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
							{
								BRING_VEHICLE_TO_HALT(BRING_VEHICLE_TO_HALT(), 10.5f, 5, 0);
							}
						}
						settimera(0);
						iLocal_50 = 1;
					}
				}
			}
		}
	}
}

int func_190()
{
	return GET_PLAYER_GROUP(GET_PLAYER_GROUP());
}

bool func_191()
{
	return Global_30971;
}

void func_192()
{
	if (func_195())
	{
		if (iLocal_260 == 0)
		{
			iLocal_260 = ADD_SCENARIO_BLOCKING_AREA(vLocal_53 - Vector(100f, 60f, 80f), vLocal_53 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
		}
		while (GET_DISTANCE_BETWEEN_COORDS(func_95(GET_DISTANCE_BETWEEN_COORDS()), vLocal_53, true) < 209f)
		{
			wait(0);
		}
	}
	if (func_15() == 0 || func_15() == 1)
	{
		if (GET_RELATIONSHIP_BETWEEN_GROUPS(2017343592, 1862763509) != 5)
		{
			if (func_194())
			{
				SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, 1862763509);
			}
			else if (func_193())
			{
				SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, 1862763509);
			}
		}
	}
	else if (func_15() == 2)
	{
		if (GET_RELATIONSHIP_BETWEEN_GROUPS(2017343592, 1862763509) != 5)
		{
			if (func_194())
			{
				if (IS_PED_SHOOTING(IS_PED_SHOOTING()) || (IS_PED_SHOOTING(IS_PED_SHOOTING()) && IS_PED_SHOOTING(IS_PED_SHOOTING())))
				{
					SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, 1862763509);
				}
			}
			else if (func_193())
			{
				SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, 1862763509);
			}
			else if (GET_RELATIONSHIP_BETWEEN_GROUPS(2017343592, 1862763509) != 1)
			{
				SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, 1862763509);
			}
		}
	}
	if (func_194())
	{
		if (iLocal_83)
		{
			if (!IS_PLAYER_WANTED_LEVEL_GREATER(IS_PLAYER_WANTED_LEVEL_GREATER(), 3))
			{
				TRIGGER_MUSIC_EVENT("AC_START");
			}
			SET_WANTED_LEVEL_MULTIPLIER(0f);
			SET_STATIC_EMITTER_ENABLED("COUNTRYSIDE_ALTRUIST_CULT_01", true);
			if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Global_40519[9 /*31*/].f_2, 6f, Global_40519[9 /*31*/].f_5, 0))
			{
				SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(Global_40519[9 /*31*/].f_5, Global_40519[9 /*31*/].f_2, false, 0f, 0);
			}
			if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Global_40519[10 /*31*/].f_2, 6f, Global_40519[10 /*31*/].f_5, 0))
			{
				SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(Global_40519[10 /*31*/].f_5, Global_40519[10 /*31*/].f_2, false, 0f, 0);
			}
			bLocal_84 = true;
			iLocal_83 = 0;
		}
	}
	else if (!iLocal_83)
	{
		if (0x2DD39BF3E2F9C47F())
		{
			TRIGGER_MUSIC_EVENT("AC_END");
		}
		SET_WANTED_LEVEL_MULTIPLIER(1f);
		SET_STATIC_EMITTER_ENABLED("COUNTRYSIDE_ALTRUIST_CULT_01", false);
		if (!bLocal_84)
		{
			func_157();
		}
		iLocal_83 = 1;
	}
}

int func_193()
{
	if ((((((IS_BULLET_IN_ANGLED_AREA(vLocal_55, vLocal_56, fLocal_57, 1) || IS_BULLET_IN_ANGLED_AREA(vLocal_58, vLocal_59, fLocal_60, 1)) || IS_BULLET_IN_ANGLED_AREA(vLocal_61, vLocal_62, fLocal_63, 1)) || IS_BULLET_IN_ANGLED_AREA(vLocal_64, vLocal_65, fLocal_66, 1)) || IS_BULLET_IN_ANGLED_AREA(vLocal_67, vLocal_68, fLocal_69, 1)) || IS_BULLET_IN_ANGLED_AREA(vLocal_70, vLocal_71, fLocal_72, 1)) || IS_BULLET_IN_ANGLED_AREA(vLocal_73, vLocal_74, fLocal_75, 1))
	{
		return 1;
	}
	return 0;
}

int func_194()
{
	if ((((((IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), vLocal_55, vLocal_56, fLocal_57, 0, true, 0) || IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), vLocal_58, vLocal_59, fLocal_60, 0, true, 0)) || IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), vLocal_61, vLocal_62, fLocal_63, 0, true, 0)) || IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), vLocal_64, vLocal_65, fLocal_66, 0, true, 0)) || IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), vLocal_67, vLocal_68, fLocal_69, 0, true, 0)) || IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), vLocal_70, vLocal_71, fLocal_72, 0, true, 0)) || IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), vLocal_73, vLocal_74, fLocal_75, 0, true, 0))
	{
		return 1;
	}
	return 0;
}

int func_195()
{
	if (Global_111560.f_24990.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_196()
{
	SET_RELATIONSHIP_BETWEEN_GROUPS(255, 2017343592, 1862763509);
	if (Global_111560.f_24990.f_5 >= iLocal_96 && Global_111560.f_24990.f_5 != 1000)
	{
		if (bLocal_76)
		{
			func_1(1);
			func_11();
			func_3(0);
			iLocal_50 = 3;
		}
		else
		{
			func_197(&iLocal_109);
			Global_93956 = 0;
			Global_93957 = 0;
			Global_93958 = 0;
			func_14(0, 1);
			func_12(0, 1);
			func_2(0);
			SET_FADE_OUT_AFTER_DEATH(1);
			_DISABLE_AUTOMATIC_RESPAWN(0);
			IGNORE_NEXT_RESTART(0);
			func_3(0);
			SET_WANTED_LEVEL_MULTIPLIER(1f);
			ENABLE_DISPATCH_SERVICE(3, true);
			ENABLE_DISPATCH_SERVICE(5, true);
			CLEAR_WEATHER_TYPE_PERSIST();
			iLocal_83 = 0;
			func_96();
			Global_111560.f_24990.f_5 = (iLocal_96 - 1);
			TERMINATE_THIS_THREAD();
		}
	}
	else
	{
		REMOVE_SCENARIO_BLOCKING_AREAS();
		func_197(&iLocal_109);
		Global_93956 = 0;
		Global_93957 = 0;
		Global_93958 = 0;
		func_14(0, 1);
		func_12(0, 1);
		func_2(0);
		SET_FADE_OUT_AFTER_DEATH(1);
		_DISABLE_AUTOMATIC_RESPAWN(0);
		IGNORE_NEXT_RESTART(0);
		func_3(0);
		if (HAS_SCALEFORM_MOVIE_LOADED(iLocal_259))
		{
			SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_259);
			func_98(0);
		}
		SET_WANTED_LEVEL_MULTIPLIER(1f);
		ENABLE_DISPATCH_SERVICE(3, true);
		ENABLE_DISPATCH_SERVICE(5, true);
		CLEAR_WEATHER_TYPE_PERSIST();
		iLocal_83 = 0;
		TERMINATE_THIS_THREAD();
	}
}

void func_197(int iParam0)
{
	if (HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		*iParam0 = 0;
	}
}

__________________________
Native Named by Reliency
1577160123
__________________________
