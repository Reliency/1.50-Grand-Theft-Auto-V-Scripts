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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
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
	var uLocal_60 = 10;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 2;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 8;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 8;
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
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	struct<73> Local_103 = { 0, 0, 3, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1101004800, 0 } ;
	struct<10> Local_104[32];
	struct<54> Local_105 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0 } ;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
	char* sLocal_109 = NULL;
	int iLocal_110 = 0;
	vector3 vLocal_111 = { 0f, 0f, 0f };
	vector3 vLocal_112 = { 0f, 0f, 0f };
	float fLocal_113 = 0f;
	int iLocal_114 = 0;
	vector3 vLocal_115 = { 0f, 0f, 0f };
	vector3 vLocal_116 = { 0f, 0f, 0f };
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	vector3 vLocal_127 = { 0f, 0f, 0f };
	float fLocal_128 = 0f;
	vector3 vLocal_129 = { 0f, 0f, 0f };
	float fLocal_130 = 0f;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	vector3 vLocal_143 = { 0f, 0f, 0f };
	vector3 vLocal_144 = { 0f, 0f, 0f };
	vector3 vLocal_145 = { 0f, 0f, 0f };
	vector3 vLocal_146 = { 0f, 0f, 0f };
	float fLocal_147 = 0f;
	vector3 vLocal_148 = { 0f, 0f, 0f };
	vector3 vLocal_149 = { 0f, 0f, 0f };
	float fLocal_150 = 0f;
	var uLocal_151 = 16;
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
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
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
	var uLocal_196 = 0;
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
	int iLocal_316[5] = { 0, 0, 0, 0, 0 };
	int iLocal_317[5] = { 0, 0, 0, 0, 0 };
	float fLocal_318 = 0f;
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
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	vector3 vLocal_342 = { 0f, 0f, 0f };
	struct<21> Local_343 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	iLocal_110 = joaat("mp_m_shopkeep_01");
	iLocal_114 = -1;
	iLocal_117 = -1;
	iLocal_131 = 303280717;
	iLocal_132 = round(Global_262145.f_2422);
	iLocal_133 = round(Global_262145.f_2418) + 1;
	iLocal_134 = 1;
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_445(ScriptParam_343))
		{
			func_440();
		}
		if (func_439(1))
		{
			func_427(PLAYER_ID(), 0, 98816, 0);
		}
	}
	while (true)
	{
		func_426();
		if (func_415())
		{
			func_440();
		}
		func_413();
		if (IS_BIT_SET(Local_103.f_23, 6))
		{
			if (func_439(1))
			{
				func_427(PLAYER_ID(), 1, 0, 0);
				func_410();
				CLEAR_BIT(&(Local_105.f_53), 7);
				func_409();
			}
		}
		switch (func_408(PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				REQUEST_ANIM_DICT("mp_am_hold_up");
				if (HAS_ANIM_DICT_LOADED("mp_am_hold_up"))
				{
					if (func_398())
					{
						REQUEST_STREAMED_TEXTURE_DICT(func_397(Local_105), false);
						if (NETWORK_DOES_NETWORK_ID_EXIST(Local_103))
						{
							if (func_396() > 0)
							{
								if (!func_395(Local_103))
								{
									func_394(&uLocal_151, 3, NET_TO_PED(Local_103), &(Local_103.f_46), 1, 0);
									func_393();
								}
								SET_BIT(&(Local_105.f_52), 22);
								Local_104[PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 2;
							}
						}
					}
				}
				if (func_396() == 6)
				{
					Local_104[PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 5;
				}
				break;
			
			case 2:
				func_268(&Local_105, vLocal_115, vLocal_116, &Local_103, &(Local_104[PARTICIPANT_ID_TO_INT() /*10*/]), PARTICIPANT_ID_TO_INT(PARTICIPANT_ID_TO_INT(Local_103), vLocal_148, vLocal_149, fLocal_150, 0, true, 0), 0);
				func_261();
				if (func_396() == 2)
				{
					func_131();
				}
				else if (func_396() == 6)
				{
					Local_104[PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 5;
				}
				if (!IS_ENTITY_AT_COORD(IS_ENTITY_AT_COORD(), vLocal_144, 30f, 30f, 30f, false, true, 0))
				{
					Local_104[PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 6;
				}
				break;
			
			case 5:
				func_130(&(Local_103.f_69));
				if (func_129(&(Local_103.f_69)))
				{
					Local_104[PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 6;
				}
				break;
			
			case 4:
				Local_104[PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 6;
			
			case 6:
				func_53();
				func_440();
				break;
		}
		if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_396())
			{
				case 0:
					if (!IS_BIT_SET(Local_105.f_52, 16))
					{
						func_51(func_52(0));
						func_51(func_52(1));
						func_51(func_52(2));
						REQUEST_ANIM_DICT("mp_am_hold_up");
						if (HAS_ANIM_DICT_LOADED("mp_am_hold_up"))
						{
							if (func_398())
							{
								CLEAR_AREA(vLocal_115, 1.5f, 0, 1, 0, true);
								CLEAR_AREA(vLocal_112, 1.5f, 0, 1, 0, true);
								SET_BIT(&(Local_105.f_52), 16);
							}
						}
					}
					else if (func_49())
					{
						Local_103.f_12 = 2;
					}
					break;
				
				case 2:
					func_48();
					func_45();
					func_29();
					func_28();
					func_21();
					func_20();
					func_12();
					func_11();
					if (func_4())
					{
						func_1();
						Local_103.f_12 = 6;
					}
					break;
				
				case 6:
					func_1();
					break;
				}
		}
	}
}

void func_1()
{
	if (NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_13))
	{
		if (func_3(Local_103.f_13))
		{
			if (IS_ENTITY_ATTACHED(IS_ENTITY_ATTACHED(Local_103.f_13)))
			{
				DETACH_ENTITY(DETACH_ENTITY(Local_103.f_13), 1, true);
				func_2(&(Local_103.f_13));
			}
		}
	}
}

void func_2(var uParam0)
{
	int iVar0;
	
	if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NET_TO_ENT(*uParam0);
		SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

int func_3(int iParam0)
{
	if (NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

int func_4()
{
	if (func_5())
	{
		return 1;
	}
	return 0;
}

int func_5()
{
	if (IS_BIT_SET(Local_103.f_23, 2))
	{
		return 1;
	}
	if (IS_BIT_SET(Local_103.f_23, 3))
	{
		return 1;
	}
	if (!func_10())
	{
		if ((IS_BIT_SET(Local_103.f_23, 11) || IS_BIT_SET(Local_103.f_23, 19)) || (IS_BIT_SET(Local_103.f_23, 9) && !IS_BIT_SET(Local_103.f_23, 20)))
		{
			func_6(Local_105.f_50, 1, func_7());
			return 1;
		}
		if (IS_BIT_SET(Local_103.f_23, 18))
		{
			func_6(Local_105.f_50, 1, func_7());
			return 1;
		}
	}
	if (IS_BIT_SET(Local_103.f_23, 18))
	{
		if (!IS_BIT_SET(Local_103.f_24, 7))
		{
			func_6(Local_105.f_50, 1, func_7());
			SET_BIT(&(Local_103.f_24), 7);
		}
	}
	return 0;
}

void func_6(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	Var0 = -173662905;
	Var0.f_1 = PLAYER_ID();
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	if (!iParam2 == 0)
	{
		TRIGGER_SCRIPT_EVENT(1, &Var0, 4, iParam2);
	}
}

int func_7()
{
	return func_8(NETWORK_GET_HOST_OF_SCRIPT(func_9(), -1, 0));
}

int func_8(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

char* func_9()
{
	switch (Global_2461343)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

int func_10()
{
	if ((IS_BIT_SET(Local_103.f_23, 13) || IS_BIT_SET(Local_103.f_23, 27)) || IS_BIT_SET(Local_103.f_23, 28))
	{
		return 1;
	}
	return 0;
}

void func_11()
{
	var uVar0;
	
	if (!IS_BIT_SET(Local_103.f_23, 21))
	{
		if (func_395(Local_103))
		{
			Local_103.f_72 = NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_103, &uVar0);
			SET_BIT(&(Local_103.f_23), 21);
		}
	}
	if (!IS_BIT_SET(Local_103.f_23, 19))
	{
		if (IS_BIT_SET(Local_103.f_23, 10) && Local_103.f_37 <= 0f)
		{
			SET_BIT(&(Local_103.f_23), 19);
		}
	}
	if (!IS_BIT_SET(Local_103.f_24, 17))
	{
		if (IS_BIT_SET(Local_103.f_23, 20))
		{
			if (func_3(Local_103.f_13))
			{
				_0x92AEFB5F6E294023(_0x92AEFB5F6E294023(Local_103.f_13), false, 0);
				SET_BIT(&(Local_103.f_24), 17);
			}
		}
	}
	if (!IS_BIT_SET(Local_103.f_23, 6))
	{
		if (Global_2531497.f_8 == 1)
		{
			SET_BIT(&(Local_103.f_23), 6);
			SET_BIT(&(Local_103.f_23), 16);
		}
	}
}

int func_12()
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK_IS_HOST_OF_THIS_SCRIPT() || !NETWORK_IS_HOST_OF_THIS_SCRIPT(Local_103.f_25, 0))
	{
		return 0;
	}
	if (Local_103.f_66 != 6)
	{
		if (Local_103.f_66 > 0 && func_395(Local_103.f_15))
		{
			Local_103.f_66 = 6;
			return 0;
		}
		switch (Local_103.f_66)
		{
			case 0:
				if (!func_18(&uLocal_331, 10000, 0))
				{
					iVar0 = GET_RANDOM_PED_AT_COORD(vLocal_148, 20f, 20f, 20f, -1);
					if (!IS_PED_INJURED(iVar0))
					{
						if (!IS_ENTITY_A_MISSION_ENTITY(iVar0))
						{
							iVar1 = GET_ENTITY_MODEL(iVar0);
							if (((((((iVar1 != joaat("mp_m_freemode_01") && iVar1 != joaat("mp_f_freemode_01")) && !IS_COP_PED_IN_AREA_3D(vLocal_148, 25f, 25f, 25f)) && !IS_COP_PED_IN_AREA_3D(iVar0, vLocal_143, 1f, 1f, 2f, false, true, 0)) && !IS_COP_PED_IN_AREA_3D(iVar0, 7)) && !IS_COP_PED_IN_AREA_3D(iVar0, 1)) && IS_COP_PED_IN_AREA_3D(iVar0)) && func_17(iVar1))
							{
								NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
								if (NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
								{
									if (func_16(&(Local_103.f_15), iVar0, 1, 0))
									{
										GIVE_DELAYED_WEAPON_TO_PED(GIVE_DELAYED_WEAPON_TO_PED(Local_103.f_15), joaat("weapon_pistol"), 25000, false);
										SET_PED_KEEP_TASK(SET_PED_KEEP_TASK(Local_103.f_15), true);
										Local_103.f_66 = 1;
										SET_BIT(&(Local_103.f_25), 1);
										SET_PED_RELATIONSHIP_GROUP_HASH(SET_PED_RELATIONSHIP_GROUP_HASH(Local_103.f_15), Global_1575002);
										SET_PED_COMBAT_MOVEMENT(SET_PED_COMBAT_MOVEMENT(Local_103.f_15), 2);
										SET_ENTITY_HEALTH(SET_ENTITY_HEALTH(Local_103.f_15), round((200f * Global_262145.f_154)), 0);
										func_394(&uLocal_151, 4, NET_TO_PED(Local_103.f_15), "StoreHero", 1, 0);
										TASK_START_SCENARIO_IN_PLACE(TASK_START_SCENARIO_IN_PLACE(Local_103.f_15), func_15(), 0, 1);
									}
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if ((IS_BIT_SET(Local_103.f_23, 9) || IS_BIT_SET(Local_103.f_23, 5)) || IS_BIT_SET(Local_103.f_23, 4))
				{
					Local_103.f_66 = 2;
				}
				break;
			
			case 2:
				if (func_18(&(Local_103.f_67), 3000, 0) || (GET_SCRIPT_TASK_STATUS(GET_SCRIPT_TASK_STATUS(Local_103.f_15), 1227113341) != 0 && GET_SCRIPT_TASK_STATUS(GET_SCRIPT_TASK_STATUS(Local_103.f_15), 1227113341) != 1))
				{
					func_14(&(Local_103.f_67));
					Local_103.f_66 = 3;
				}
				break;
			
			case 3:
				if (((IS_BIT_SET(Local_103.f_23, 5) || IS_BIT_SET(Local_103.f_25, 8)) || IS_BIT_SET(Local_103.f_25, 9)) || func_18(&(Local_103.f_67), 5000, 0))
				{
					if (func_13() || func_18(&(Local_103.f_67), 5000, 0))
					{
						Local_103.f_66 = 4;
					}
					else
					{
						Local_103.f_66 = 5;
					}
				}
				break;
			
			case 4:
				break;
			
			case 5:
				break;
			}
	}
	return 1;
}

int func_13()
{
	if (IS_BIT_SET(IS_BIT_SET(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_14(var uParam0)
{
	uParam0->f_1 = 0;
}

char* func_15()
{
	int iVar0;
	
	iVar0 = GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 30)
	{
		return "WORLD_HUMAN_SMOKING";
	}
	if (iVar0 >= 30 && iVar0 < 70)
	{
		return "WORLD_HUMAN_HANG_OUT_STREET";
	}
	return "WORLD_HUMAN_STAND_MOBILE";
}

int func_16(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	SET_ENTITY_AS_MISSION_ENTITY(iParam1, bParam2, iParam3);
	*uParam0 = NETWORK_GET_NETWORK_ID_FROM_ENTITY(iParam1);
	if (NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam2)
		{
			SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
		}
		return 1;
	}
	return 0;
}

int func_17(int iParam0)
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("mp_m_freemode_01") || iParam0 == joaat("mp_m_fibsec_01")) || iParam0 == joaat("mp_s_m_armoured_01")) || iParam0 == joaat("s_f_y_airhostess_01")) || iParam0 == joaat("s_f_y_baywatch_01")) || iParam0 == joaat("s_f_y_cop_01")) || iParam0 == joaat("s_f_y_ranger_01")) || iParam0 == joaat("s_f_y_scrubs_01")) || iParam0 == joaat("s_f_y_sheriff_01")) || iParam0 == joaat("s_m_m_armoured_01")) || iParam0 == joaat("s_m_m_armoured_02")) || iParam0 == joaat("s_m_m_bouncer_01")) || iParam0 == joaat("s_m_m_ciasec_01")) || iParam0 == joaat("s_m_m_chemsec_01")) || iParam0 == joaat("s_m_m_doctor_01")) || iParam0 == joaat("s_m_m_fiboffice_01")) || iParam0 == joaat("s_m_m_fiboffice_02")) || iParam0 == joaat("s_m_m_highsec_01")) || iParam0 == joaat("s_m_m_highsec_02")) || iParam0 == joaat("s_m_m_janitor")) || iParam0 == joaat("s_m_m_lsmetro_01")) || iParam0 == joaat("s_m_m_marine_01")) || iParam0 == joaat("s_m_m_marine_02")) || iParam0 == joaat("s_m_m_paramedic_01")) || iParam0 == joaat("s_m_m_pilot_01")) || iParam0 == joaat("s_m_m_pilot_02")) || iParam0 == joaat("s_m_m_postal_01")) || iParam0 == joaat("s_m_m_postal_02")) || iParam0 == joaat("s_m_m_prisguard_01")) || iParam0 == joaat("s_m_m_scientist_01")) || iParam0 == joaat("s_m_m_security_01")) || iParam0 == joaat("s_m_m_ups_01")) || iParam0 == joaat("s_m_m_ups_02")) || iParam0 == joaat("s_m_y_airworker")) || iParam0 == joaat("s_m_y_armymech_01")) || iParam0 == joaat("s_m_y_baywatch_01")) || iParam0 == joaat("s_m_y_blackops_01")) || iParam0 == joaat("s_m_y_blackops_02")) || iParam0 == joaat("s_m_y_cop_01")) || iParam0 == joaat("s_m_y_doorman_01")) || iParam0 == joaat("s_m_y_fireman_01")) || iParam0 == joaat("s_m_y_garbage")) || iParam0 == joaat("s_m_y_hwaycop_01")) || iParam0 == joaat("s_m_y_marine_01")) || iParam0 == joaat("s_m_y_marine_02")) || iParam0 == joaat("s_m_y_marine_03")) || iParam0 == joaat("s_m_y_pilot_01")) || iParam0 == joaat("s_m_y_ranger_01")) || iParam0 == joaat("s_m_y_sheriff_01")) || iParam0 == joaat("s_m_y_swat_01")) || iParam0 == joaat("s_m_y_uscg_01")) || iParam0 == joaat("s_m_y_valet_01")) || iParam0 == joaat("s_m_y_waiter_01")) || iParam0 == joaat("u_m_m_jewelsec_01")) || iParam0 == 337826907)
	{
		return 0;
	}
	return 1;
}

int func_18(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_19(uParam0, bParam2, 0);
	if (NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (ABSI(ABSI(ABSI(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (ABSI(ABSI(ABSI(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_19(var uParam0, bool bParam1, bool bParam2)
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

void func_20()
{
	if (Local_103.f_30 == 0)
	{
		if (Local_103.f_3 >= 2 && Local_103.f_3 != 9)
		{
			Local_103.f_30 = ADD_SHOCKING_EVENT_FOR_ENTITY(101, ADD_SHOCKING_EVENT_FOR_ENTITY(), 60000f);
		}
	}
}

void func_21()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!IS_BIT_SET(Local_103.f_1, 5))
	{
		if (Local_103.f_41 > 0)
		{
			func_25();
			if (!IS_BIT_SET(Local_103.f_1, 5))
			{
				return;
			}
		}
	}
	if (IS_BIT_SET(Local_103.f_1, 1))
	{
		if (Local_103.f_2 == 3 && !IS_BIT_SET(Local_103.f_23, 9))
		{
			Local_103.f_2 = 0;
		}
		CLEAR_BIT(&(Local_103.f_1), 1);
	}
	switch (Local_103.f_2)
	{
		case 0:
			if ((((func_3(Local_103) && !func_395(Local_103)) && func_3(Local_103.f_16[Local_103.f_26])) && Local_103.f_3 != 8) && Local_103.f_3 != 7)
			{
				if (!IS_PED_RAGDOLL(IS_PED_RAGDOLL(Local_103)))
				{
					if (IS_BIT_SET(Local_103.f_23, 9) || IS_BIT_SET(Local_103.f_1, 4))
					{
						Local_103.f_2 = 2;
						return;
					}
					if (!iLocal_108)
					{
						TASK_ACHIEVE_HEADING(TASK_ACHIEVE_HEADING(Local_103), Local_103.f_42, 1600);
						iLocal_108 = 1;
					}
					if (func_18(&uLocal_321, 100, 0))
					{
						fVar0 = GET_ENTITY_HEADING(GET_ENTITY_HEADING(Local_103));
						fVar1 = (Local_103.f_42 - 10f);
						fVar2 = (Local_103.f_42 + 10f);
						if (fVar1 < 0f)
						{
							fVar2 = ((Local_103.f_42 - 10f) + 360f);
							fVar1 = ((Local_103.f_42 + 10f) + 360f);
						}
						else if (fVar2 >= 360f)
						{
							fVar2 = ((Local_103.f_42 - 10f) - 360f);
							fVar1 = ((Local_103.f_42 + 10f) - 360f);
						}
						if (((fVar0 < fVar2 && fVar0 > fVar1) && func_18(&uLocal_327, 1000, 0)) || func_18(&uLocal_327, 3125, 0))
						{
							CLEAR_PED_SECONDARY_TASK(CLEAR_PED_SECONDARY_TASK(Local_103));
							Local_103.f_27 = _0x77758139EC9B66C7(_0x77758139EC9B66C7(_0x77758139EC9B66C7(Local_103), -0.65f, 0.87f, -0.02f), vLocal_116, 2, true, false, 1065353216, 0, 1065353216);
							NETWORK_CREATE_SYNCHRONISED_SCENE(NETWORK_CREATE_SYNCHRONISED_SCENE(Local_103), Local_103.f_27, "mp_am_hold_up", func_24(Local_103.f_26), 1.5f, -1.5f, 157, 16, 1148846080, 0);
							if (NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_16[Local_103.f_26]))
							{
								SET_ENTITY_VISIBLE(SET_ENTITY_VISIBLE(Local_103.f_16[Local_103.f_26]), true, 0);
								0xA5EAFE473E45C442(0xA5EAFE473E45C442(Local_103.f_16[Local_103.f_26]), Local_103.f_27, "mp_am_hold_up", func_23(Local_103.f_26), 4f, -4f, 8);
							}
							NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(Local_103.f_27);
							Local_103.f_2 = 1;
							iLocal_117 = NETWORK_STOP_SYNCHRONISED_SCENE(Local_103.f_27);
						}
					}
				}
			}
			break;
		
		case 1:
			if (IS_BIT_SET(Local_103.f_23, 9) || IS_BIT_SET(Local_103.f_1, 4))
			{
				iLocal_117 = NETWORK_STOP_SYNCHRONISED_SCENE(Local_103.f_27);
				if (IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_117))
				{
					NETWORK_START_SYNCHRONISED_SCENE(Local_103.f_27);
				}
				Local_103.f_2 = 2;
				return;
			}
			if (iLocal_117 != -1)
			{
				if (IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_117) || func_18(&uLocal_323, 2000, 0))
				{
					if ((IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_117) && IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_117) == 1f) || func_18(&uLocal_323, 2000, 0))
					{
						if ((func_3(Local_103) && !func_395(Local_103)) && !IS_BIT_SET(Local_103.f_23, 9))
						{
							CLEAR_PED_TASKS(CLEAR_PED_TASKS(Local_103));
						}
						NETWORK_START_SYNCHRONISED_SCENE(Local_103.f_27);
						Local_103.f_2 = 2;
					}
				}
			}
			else
			{
				iLocal_117 = NETWORK_STOP_SYNCHRONISED_SCENE(Local_103.f_27);
			}
			break;
		
		case 2:
			func_3(Local_103.f_16[Local_103.f_26]);
			if (func_18(&uLocal_329, 1000, 0) && func_3(Local_103.f_16[Local_103.f_26]))
			{
				if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST(Local_103.f_16[Local_103.f_26])))
				{
					SET_ENTITY_VISIBLE(SET_ENTITY_VISIBLE(Local_103.f_16[Local_103.f_26]), false, 0);
					FREEZE_ENTITY_POSITION(FREEZE_ENTITY_POSITION(Local_103.f_16[Local_103.f_26]), true);
					SET_ENTITY_COORDS(SET_ENTITY_COORDS(Local_103.f_16[Local_103.f_26]), func_22(Local_103.f_26), 1, false, 0, 1);
				}
				iLocal_117 = -1;
				iLocal_108 = 0;
				if (IS_BIT_SET(Local_103.f_1, 4))
				{
					CLEAR_BIT(&(Local_103.f_1), 4);
				}
				func_14(&uLocal_329);
				func_14(&uLocal_323);
				func_14(&uLocal_321);
				func_14(&uLocal_327);
				Local_103.f_2 = 3;
			}
			break;
		
		case 3:
			break;
	}
}

Vector3 func_22(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return vLocal_129 - Vector(1f, 0.2f, 0.1f);
		
		case 1:
			return vLocal_129 - Vector(1f, 0.2f, 0f);
		
		case 2:
			return vLocal_129 - Vector(1f, 0.2f, -0.1f);
		
		case 4:
			return vLocal_129 - Vector(1f, -0.2f, 0.1f);
		
		case 0:
			return vLocal_129 - Vector(1f, -0.2f, 0f);
		
		case 5:
			return vLocal_129 - Vector(1f, -0.2f, -0.1f);
		
		default:
	}
	return vLocal_129 - Vector(1f, 0f, -0.1f);
}

char* func_23(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "purchase_chocbar";
		
		case 1:
			return "purchase_chocbar";
		
		case 2:
			return "purchase_chocbar";
		
		case 4:
			return "purchase_cigarette";
		
		case 0:
			return "purchase_beer";
		
		case 5:
			return "purchase_energydrink";
		
		default:
	}
	return "purchase_energydrink";
}

char* func_24(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "purchase_chocbar_shopkeeper";
		
		case 1:
			return "purchase_chocbar_shopkeeper";
		
		case 2:
			return "purchase_chocbar_shopkeeper";
		
		case 4:
			return "purchase_cigarette_shopkeeper";
		
		case 0:
			return "purchase_beer_shopkeeper";
		
		case 5:
			return "purchase_energydrink_shopkeeper";
		
		default:
	}
	return "purchase_energydrink_shopkeeper";
}

int func_25()
{
	if (((((!NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_16[3]) || !NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_16[1])) || !NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_16[2])) || !NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_16[4])) || !NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_16[0])) || !NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_16[5]))
	{
		if (((((func_51(func_27(3)) && func_51(func_27(1))) && func_51(func_27(2))) && func_51(func_27(4))) && func_51(func_27(0))) && func_51(func_27(5)))
		{
			if (0xE16AA70CE9BEEDC3(0, 0, 6, 0))
			{
				if (!NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_16[3]))
				{
					if (func_26(&(Local_103.f_16[3]), func_27(3), func_22(3), 1, 1, 0, 1, 0, 0, 0))
					{
						_0x82EBB79E258FA2B7(_0x82EBB79E258FA2B7(Local_103.f_16[3]), _0x82EBB79E258FA2B7(vLocal_111));
						FREEZE_ENTITY_POSITION(FREEZE_ENTITY_POSITION(Local_103.f_16[3]), true);
						SET_ENTITY_VISIBLE(SET_ENTITY_VISIBLE(Local_103.f_16[3]), false, 0);
					}
				}
				if (!NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_16[1]))
				{
					if (func_26(&(Local_103.f_16[1]), func_27(1), func_22(1), 1, 1, 0, 1, 0, 0, 0))
					{
						_0x82EBB79E258FA2B7(_0x82EBB79E258FA2B7(Local_103.f_16[1]), _0x82EBB79E258FA2B7(vLocal_111));
						FREEZE_ENTITY_POSITION(FREEZE_ENTITY_POSITION(Local_103.f_16[1]), true);
						SET_ENTITY_VISIBLE(SET_ENTITY_VISIBLE(Local_103.f_16[1]), false, 0);
					}
				}
				if (!NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_16[2]))
				{
					if (func_26(&(Local_103.f_16[2]), func_27(2), func_22(2), 1, 1, 0, 1, 0, 0, 0))
					{
						_0x82EBB79E258FA2B7(_0x82EBB79E258FA2B7(Local_103.f_16[2]), _0x82EBB79E258FA2B7(vLocal_111));
						FREEZE_ENTITY_POSITION(FREEZE_ENTITY_POSITION(Local_103.f_16[2]), true);
						SET_ENTITY_VISIBLE(SET_ENTITY_VISIBLE(Local_103.f_16[2]), false, 0);
					}
				}
				if (!NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_16[4]))
				{
					if (func_26(&(Local_103.f_16[4]), func_27(4), func_22(4), 1, 1, 0, 1, 0, 0, 0))
					{
						_0x82EBB79E258FA2B7(_0x82EBB79E258FA2B7(Local_103.f_16[4]), _0x82EBB79E258FA2B7(vLocal_111));
						FREEZE_ENTITY_POSITION(FREEZE_ENTITY_POSITION(Local_103.f_16[4]), true);
						SET_ENTITY_VISIBLE(SET_ENTITY_VISIBLE(Local_103.f_16[4]), false, 0);
					}
				}
				if (!NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_16[0]))
				{
					if (func_26(&(Local_103.f_16[0]), func_27(0), func_22(0), 1, 1, 0, 1, 0, 0, 0))
					{
						_0x82EBB79E258FA2B7(_0x82EBB79E258FA2B7(Local_103.f_16[0]), _0x82EBB79E258FA2B7(vLocal_111));
						FREEZE_ENTITY_POSITION(FREEZE_ENTITY_POSITION(Local_103.f_16[0]), true);
						SET_ENTITY_VISIBLE(SET_ENTITY_VISIBLE(Local_103.f_16[0]), false, 0);
					}
				}
				if (!NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_16[5]))
				{
					if (func_26(&(Local_103.f_16[5]), func_27(5), func_22(5), 1, 1, 0, 1, 0, 0, 0))
					{
						_0x82EBB79E258FA2B7(_0x82EBB79E258FA2B7(Local_103.f_16[5]), _0x82EBB79E258FA2B7(vLocal_111));
						FREEZE_ENTITY_POSITION(FREEZE_ENTITY_POSITION(Local_103.f_16[5]), true);
						SET_ENTITY_VISIBLE(SET_ENTITY_VISIBLE(Local_103.f_16[5]), false, 0);
					}
				}
			}
		}
	}
	else
	{
		SET_BIT(&(Local_103.f_1), 5);
		return 1;
	}
	return 0;
}

int func_26(var uParam0, int iParam1, vector3 vParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!0x42613035157E4208(1))
	{
		return 0;
	}
	if (bParam7)
	{
		*uParam0 = OBJ_TO_NET(OBJ_TO_NET(iParam1, vParam2, bParam4, bParam3, bParam5));
	}
	else
	{
		*uParam0 = OBJ_TO_NET(OBJ_TO_NET(iParam1, vParam2, bParam4, bParam3, bParam5));
	}
	if (NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		_SET_ENTITY_SOMETHING(_SET_ENTITY_SOMETHING(*uParam0), bParam6);
		if (bParam8)
		{
			_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(*uParam0), 1);
		}
		if (bParam9)
		{
			SET_ENTITY_VISIBLE(SET_ENTITY_VISIBLE(*uParam0), false, 0);
		}
		if (NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK_GET_ENTITY_IS_NETWORKED(*uParam0)))
		{
			if (bParam3)
			{
				SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_27(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return joaat("prop_choc_pq");
		
		case 1:
			return joaat("prop_choc_ego");
		
		case 2:
			return joaat("prop_choc_meto");
		
		case 4:
			return joaat("prop_ld_fags_01");
		
		case 0:
			return joaat("prop_ecola_can");
		
		case 5:
			return joaat("prop_amb_beer_bottle");
		
		default:
	}
	return joaat("prop_choc_pq");
}

void func_28()
{
	float fVar0;
	
	if (!IS_BIT_SET(Local_103.f_23, 9))
	{
		if (Global_2531497.f_8 == 1 || IS_BIT_SET(Local_103.f_23, 6))
		{
			if ((((func_3(Local_103.f_13) && func_3(Local_103)) && !func_395(Local_103)) && Local_103.f_3 != 8) && Local_103.f_3 != 7)
			{
				if (!IS_PED_RAGDOLL(IS_PED_RAGDOLL(Local_103)))
				{
					if (!IS_BIT_SET(Local_105.f_52, 30))
					{
						TASK_ACHIEVE_HEADING(TASK_ACHIEVE_HEADING(Local_103), Local_103.f_42, 1600);
						SET_BIT(&(Local_105.f_52), 30);
					}
					if (func_18(&uLocal_319, 100, 0))
					{
						fVar0 = GET_ENTITY_HEADING(GET_ENTITY_HEADING(Local_103));
						if ((fVar0 > (Local_103.f_42 - 20f) && fVar0 < (Local_103.f_42 + 20f)) || func_18(&uLocal_325, 1500, 0))
						{
							CLEAR_PED_SECONDARY_TASK(CLEAR_PED_SECONDARY_TASK(Local_103));
							Local_103.f_29 = _0x77758139EC9B66C7(vLocal_115, vLocal_116, 2, true, false, 1065353216, 0, 1065353216);
							NETWORK_CREATE_SYNCHRONISED_SCENE(NETWORK_CREATE_SYNCHRONISED_SCENE(Local_103), Local_103.f_29, "mp_am_hold_up", "holdup_victim_20s", 4f, -1.5f, 157, 16, 1148846080, 0);
							if (NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_13))
							{
								FREEZE_ENTITY_POSITION(FREEZE_ENTITY_POSITION(Local_103.f_13), false);
								SET_ENTITY_DYNAMIC(SET_ENTITY_DYNAMIC(Local_103.f_13), 1);
								0xA5EAFE473E45C442(0xA5EAFE473E45C442(Local_103.f_13), Local_103.f_29, "mp_am_hold_up", "holdup_victim_20s_bag", 4f, -4f, 137);
							}
							if (NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_14))
							{
								0xA5EAFE473E45C442(0xA5EAFE473E45C442(Local_103.f_14), Local_103.f_29, "mp_am_hold_up", "holdup_victim_20s_till", 4f, -4f, 137);
							}
							NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(Local_103.f_29);
							SET_BIT(&(Local_103.f_23), 9);
						}
					}
				}
				else
				{
					Local_103.f_3 = 8;
				}
			}
		}
	}
	else if (!IS_BIT_SET(Local_103.f_23, 17))
	{
		iLocal_114 = NETWORK_STOP_SYNCHRONISED_SCENE(Local_103.f_29);
		if (iLocal_114 != -1)
		{
			func_3(Local_103);
			if (IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_114))
			{
				SET_PED_USING_ACTION_MODE(SET_PED_USING_ACTION_MODE(), false, -1, 0);
				SET_BIT(&(Local_103.f_23), 17);
			}
		}
	}
	else if (!IS_BIT_SET(Local_103.f_24, 15))
	{
		iLocal_114 = NETWORK_STOP_SYNCHRONISED_SCENE(Local_103.f_29);
		if (iLocal_114 != -1)
		{
			if (IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_114))
			{
				func_3(Local_103);
				if ((NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_13) && func_3(Local_103.f_13)) && func_3(Local_103))
				{
					if (GET_SYNCHRONIZED_SCENE_PHASE(iLocal_114) > 0.44f)
					{
						SET_ENTITY_VISIBLE(SET_ENTITY_VISIBLE(Local_103.f_13), true, 0);
						SET_ENTITY_COLLISION(SET_ENTITY_COLLISION(Local_103.f_13), true, 0);
						SET_BIT(&(Local_103.f_24), 15);
					}
				}
			}
		}
	}
}

int func_29()
{
	int iVar0;
	float fVar1;
	
	if (!NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	func_43();
	if (Local_103.f_3 != 9)
	{
		if (func_395(Local_103))
		{
			Local_103.f_3 = 9;
			return 0;
		}
		if ((IS_BIT_SET(Local_103.f_23, 6) && !IS_BIT_SET(Local_103.f_23, 9)) && Local_103.f_3 < 8)
		{
			if (!NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_13) || !NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_14))
			{
				Local_103.f_3 = 8;
			}
		}
		switch (Local_103.f_3)
		{
			case 0:
				if (!func_395(Local_103))
				{
					Local_103.f_3 = 1;
				}
				break;
			
			case 1:
				if (IS_BIT_SET(Local_103.f_23, 4))
				{
					Local_103.f_3 = 2;
				}
				else if (IS_BIT_SET(Local_103.f_23, 6) || IS_BIT_SET(Local_103.f_23, 9))
				{
					Local_103.f_3 = 4;
				}
				else if (func_41() || func_34(0))
				{
					Local_103.f_3 = 8;
				}
				else if (func_32())
				{
					Local_103.f_3 = 7;
				}
				break;
			
			case 2:
				if (IS_BIT_SET(Local_103.f_23, 6) || IS_BIT_SET(Local_103.f_23, 9))
				{
					Local_103.f_3 = 4;
				}
				else if (func_41() || func_34(1))
				{
					Local_103.f_3 = 8;
				}
				else if (func_32())
				{
					Local_103.f_3 = 7;
				}
				break;
			
			case 3:
				if (GET_SCRIPT_TASK_STATUS(GET_SCRIPT_TASK_STATUS(Local_103), 1920390111) != 0 && GET_SCRIPT_TASK_STATUS(GET_SCRIPT_TASK_STATUS(Local_103), 1920390111) != 1)
				{
					Local_103.f_3 = 4;
				}
				else if (func_34(1))
				{
					Local_103.f_3 = 8;
				}
				else if (func_32())
				{
					Local_103.f_3 = 7;
				}
				break;
			
			case 4:
				if (IS_BIT_SET(Local_103.f_23, 17))
				{
					iVar0 = 0;
					iLocal_114 = NETWORK_STOP_SYNCHRONISED_SCENE(Local_103.f_29);
					if (iLocal_114 != -1)
					{
						if (IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_114))
						{
							if (IS_BULLET_IN_AREA(vLocal_111, 3f, 0))
							{
								if (!IS_BIT_SET(Local_103.f_23, 25))
								{
									SET_BIT(&(Local_103.f_23), 25);
								}
								Local_103.f_33 = (Local_103.f_33 + 0.35f);
							}
							fVar1 = GET_SYNCHRONIZED_SCENE_PHASE(iLocal_114);
							if (fVar1 >= 0.8f)
							{
								Local_103.f_37 = 1f;
							}
							else if (fVar1 <= 0.5f)
							{
								Local_103.f_37 = 0f;
							}
							else if (fVar1 > Local_103.f_37)
							{
								Local_103.f_37 = ((fVar1 - 0.5f) * 3.33f);
							}
							if (fVar1 >= 0.92f)
							{
								Local_103.f_37 = 1f;
								iVar0 = 1;
							}
						}
						else
						{
							iVar0 = 1;
						}
					}
					else
					{
						iVar0 = 1;
					}
					if (iVar0 == 1)
					{
						Local_103.f_3 = 6;
					}
					else if (func_34(1))
					{
						Local_103.f_3 = 8;
					}
					else if (func_32())
					{
						Local_103.f_3 = 7;
					}
				}
				break;
			
			case 5:
				if (func_41() || func_34(1))
				{
					Local_103.f_3 = 8;
				}
				break;
			
			case 6:
				func_30();
				if (func_41() || func_34(1))
				{
					Local_103.f_3 = 8;
				}
				else if (func_32())
				{
					Local_103.f_3 = 7;
				}
				else if (IS_BIT_SET(Local_103.f_24, 3))
				{
					if (!IS_BIT_SET(Local_103.f_24, 4))
					{
						Local_103.f_3 = 7;
					}
				}
				break;
			
			case 8:
				func_30();
				break;
			
			case 7:
				break;
		}
	}
	else if (!IS_BIT_SET(Local_103.f_24, 10))
	{
		if (!NETWORK_DOES_NETWORK_ID_EXIST(Local_103))
		{
			Local_103.f_43 = (Local_103.f_43 - 1);
			SET_BIT(&(Local_103.f_24), 10);
		}
	}
	return 1;
}

void func_30()
{
	int iVar0;
	int iVar1;
	
	if (!IS_BIT_SET(Local_103.f_24, 2))
	{
		iVar0 = GET_RANDOM_INT_IN_RANGE(0, 10);
		iVar1 = (iLocal_134 + func_31());
		if (iVar0 < iVar1)
		{
			SET_BIT(&(Local_103.f_24), 3);
		}
		SET_BIT(&(Local_103.f_24), 2);
	}
}

int func_31()
{
	int iVar0;
	
	iVar0 = (Global_2424073[PLAYER_ID() /*421*/].f_36 - 1);
	if (iVar0 >= 4)
	{
		return 4;
	}
	return iVar0;
}

int func_32()
{
	int iVar0;
	int iVar1;
	
	if (IS_CONTROL_JUST_PRESSED(0, 24) || IS_CONTROL_JUST_PRESSED(0, 257))
	{
		iVar0 = func_33(PLAYER_PED_ID());
		if ((((((iVar0 != joaat("weapon_unarmed") && iVar0 != 0) && iVar0 != joaat("vehicle_weapon_player_bullet")) && iVar0 != joaat("vehicle_weapon_player_buzzard")) && iVar0 != joaat("vehicle_weapon_player_laser")) && iVar0 != joaat("vehicle_weapon_tank")) && iVar0 != joaat("weapon_flare"))
		{
			iVar1 = GET_WEAPONTYPE_GROUP(iVar0);
			if (((((((GET_AMMO_IN_PED_WEAPON(GET_AMMO_IN_PED_WEAPON(), iVar0) == 0 && iVar1 != -728555052) && iVar1 != 507375312) && iVar1 != 0) && iVar1 != -37788308) && iVar1 != -801780072) && iVar1 != 431593103) && iVar1 != -755518101)
			{
				if (GET_INTERIOR_FROM_ENTITY(GET_INTERIOR_FROM_ENTITY()) == iLocal_139)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

var func_33(int iParam0)
{
	var uVar0;
	
	GET_CURRENT_PED_WEAPON(iParam0, &uVar0, 1);
	return uVar0;
}

int func_34(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	int iVar2;
	int iVar3;
	
	if (func_39(PLAYER_ID(), 146))
	{
		return 1;
	}
	if (func_38(PLAYER_ID()))
	{
		return 1;
	}
	if (IS_BIT_SET(Local_103.f_23, 5))
	{
		return 1;
	}
	if (IS_PED_RAGDOLL(IS_PED_RAGDOLL(Local_103)))
	{
		return 1;
	}
	if (func_37() || func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < GET_NUMBER_OF_EVENTS(1))
	{
		if (GET_EVENT_AT_INDEX(1, iVar0) == 185)
		{
			if (GET_EVENT_DATA(1, iVar0, &Var1, 11))
			{
				if (DOES_ENTITY_EXIST(Var1) && DOES_ENTITY_EXIST(Var1))
				{
					iVar2 = GET_PED_INDEX_FROM_ENTITY_INDEX(Var1);
					if (IS_PED_INJURED(iVar2) && IS_PED_INJURED(iVar2) == iLocal_139)
					{
						if (DOES_ENTITY_EXIST(Var1.f_1) && DOES_ENTITY_EXIST(Var1.f_1))
						{
							iVar3 = GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1);
							if (iVar3 != NET_TO_PED(Local_103))
							{
								return 1;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (iParam0 == 1)
	{
		if (!IS_BIT_SET(Local_103.f_24, 5))
		{
			if (IS_COP_PED_IN_AREA_3D(vLocal_145 - Vector(25f, 25f, 25f), vLocal_145 + Vector(25f, 25f, 25f)))
			{
				SET_BIT(&(Local_103.f_24), 5);
			}
		}
	}
	return 0;
}

int func_35()
{
	if (Local_105.f_50 >= 15 && Local_105.f_50 <= 19)
	{
		if (IS_EXPLOSION_IN_SPHERE(9, vLocal_145, 40f))
		{
			return 1;
		}
	}
	if (IS_EXPLOSION_IN_ANGLED_AREA(-1, vLocal_145, vLocal_146, fLocal_147))
	{
		return 1;
	}
	if (IS_EXPLOSION_IN_ANGLED_AREA(-1, vLocal_148, vLocal_149, fLocal_150))
	{
		return 1;
	}
	return 0;
}

int func_36()
{
	if ((IS_PROJECTILE_TYPE_IN_ANGLED_AREA(vLocal_148, vLocal_149, fLocal_150, joaat("weapon_grenade"), 0) || IS_PROJECTILE_TYPE_IN_ANGLED_AREA(vLocal_148, vLocal_149, fLocal_150, joaat("weapon_molotov"), 0)) || IS_PROJECTILE_TYPE_IN_ANGLED_AREA(vLocal_148, vLocal_149, fLocal_150, joaat("weapon_stickybomb"), 0))
	{
		return 1;
	}
	return 0;
}

int func_37()
{
	if ((IS_PROJECTILE_TYPE_IN_ANGLED_AREA(vLocal_145, vLocal_146, fLocal_147, joaat("weapon_grenade"), 0) || IS_PROJECTILE_TYPE_IN_ANGLED_AREA(vLocal_145, vLocal_146, fLocal_147, joaat("weapon_molotov"), 0)) || IS_PROJECTILE_TYPE_IN_ANGLED_AREA(vLocal_145, vLocal_146, fLocal_147, joaat("weapon_stickybomb"), 0))
	{
		return 1;
	}
	return 0;
}

int func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER_ID())
	{
		return Global_2508348;
	}
	else
	{
		iVar0 = GET_PLAYER_PED(iParam0);
		if (DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_39(int iParam0, int iParam1)
{
	if (Global_1628955[iParam0 /*614*/] == iParam1)
	{
		return func_40(iParam0);
	}
	return 0;
}

int func_40(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return IS_BIT_SET(Global_1628955[iVar0 /*614*/].f_1, 0);
	}
	return 0;
}

int func_41()
{
	if (func_42() || func_35())
	{
		return 1;
	}
	return 0;
}

int func_42()
{
	if (IS_BULLET_IN_ANGLED_AREA(vLocal_145, vLocal_146, fLocal_147, 0))
	{
		return 1;
	}
	if (IS_BULLET_IN_ANGLED_AREA(vLocal_148, vLocal_149, fLocal_150, 0))
	{
		return 1;
	}
	return 0;
}

void func_43()
{
	if (Local_103.f_33 > 0f)
	{
		if (func_44(&(Local_103.f_34), 50, 0))
		{
			Local_103.f_33 = (Local_103.f_33 - 0.02f);
			if (Local_103.f_33 < 0f)
			{
				Local_103.f_33 = 0f;
			}
			func_14(&(Local_103.f_34));
		}
	}
}

int func_44(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_19(uParam0, bParam2, 0);
	if (NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (ABSI(ABSI(ABSI(), *uParam0)) >= iParam1)
		{
			func_14(uParam0);
			return 1;
		}
	}
	else if (ABSI(ABSI(ABSI(), *uParam0)) >= iParam1)
	{
		func_14(uParam0);
		return 1;
	}
	return 0;
}

void func_45()
{
	int iVar0;
	int iVar1;
	
	if (NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(iLocal_124)))
	{
		iVar0 = NETWORK_GET_PLAYER_INDEX(NETWORK_GET_PLAYER_INDEX(iLocal_124));
		iVar1 = GET_PLAYER_PED(iVar0);
		if (!IS_BIT_SET(Local_103.f_23, 11))
		{
			if (IS_BIT_SET(Local_104[iLocal_124 /*10*/], 5))
			{
				if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_13))
				{
					if (func_3(Local_103.f_13))
					{
						DETACH_ENTITY(DETACH_ENTITY(Local_103.f_13), 1, true);
						func_47(&(Local_103.f_13));
					}
				}
				else
				{
					Local_103.f_38 = { Local_104[iLocal_124 /*10*/].f_7 };
					Local_103.f_44 = 7;
					SET_BIT(&(Local_103.f_23), 11);
				}
			}
		}
		if (!IS_BIT_SET(Local_103.f_23, 14))
		{
			if (IS_BIT_SET(Local_104[iLocal_124 /*10*/], 6))
			{
				SET_BIT(&(Local_103.f_23), 14);
			}
		}
		if (!IS_BIT_SET(Local_103.f_23, 15))
		{
			if (IS_BIT_SET(Local_104[iLocal_124 /*10*/], 7))
			{
				SET_BIT(&(Local_103.f_23), 15);
			}
		}
		if (!IS_BIT_SET(Local_103.f_23, 26))
		{
			if (IS_BIT_SET(Local_104[iLocal_124 /*10*/], 24))
			{
				SET_BIT(&(Local_103.f_23), 26);
			}
		}
		if (!IS_BIT_SET(Local_103.f_23, 22))
		{
			if (IS_BIT_SET(Local_104[iLocal_124 /*10*/], 22))
			{
				SET_BIT(&(Local_103.f_23), 22);
			}
		}
		if (!IS_BIT_SET(Local_103.f_23, 23))
		{
			if (IS_BIT_SET(Local_104[iLocal_124 /*10*/], 23))
			{
				SET_BIT(&(Local_103.f_23), 23);
			}
		}
		if (!IS_BIT_SET(Local_103.f_23, 30))
		{
			if (IS_BIT_SET(Local_104[iLocal_124 /*10*/], 25))
			{
				SET_BIT(&(Local_103.f_23), 30);
			}
		}
		if (!IS_BIT_SET(Local_103.f_23, 31))
		{
			if (IS_BIT_SET(Local_104[iLocal_124 /*10*/], 26))
			{
				SET_BIT(&(Local_103.f_23), 31);
			}
		}
		if (!IS_BIT_SET(Local_103.f_24, 6))
		{
			if (IS_BIT_SET(Local_104[iLocal_124 /*10*/], 29))
			{
				SET_BIT(&(Local_103.f_24), 6);
			}
		}
		if (!IS_BIT_SET(Local_103.f_24, 9))
		{
			if (IS_BIT_SET(Local_104[iLocal_124 /*10*/], 31))
			{
				SET_BIT(&(Local_103.f_24), 9);
			}
		}
		if (!IS_BIT_SET(Local_103.f_1, 3))
		{
			if (IS_BIT_SET(Local_104[iLocal_124 /*10*/].f_1, 3))
			{
				SET_BIT(&(Local_103.f_1), 3);
			}
		}
		if (IS_BIT_SET(Local_103.f_25, 1))
		{
			if (!IS_BIT_SET(Local_103.f_25, 6))
			{
				if (IS_BIT_SET(Local_104[iLocal_124 /*10*/].f_5, 1))
				{
					SET_BIT(&(Local_103.f_25), 6);
				}
			}
			if (!IS_BIT_SET(Local_103.f_25, 7))
			{
				if (IS_BIT_SET(Local_104[iLocal_124 /*10*/].f_5, 2))
				{
					SET_BIT(&(Local_103.f_25), 7);
				}
			}
			if (!IS_BIT_SET(Local_103.f_25, 5))
			{
				if (IS_BIT_SET(Local_104[iLocal_124 /*10*/].f_5, 0))
				{
					SET_BIT(&(Local_103.f_25), 5);
				}
			}
		}
		if (!IS_BIT_SET(Local_103.f_23, 20))
		{
			if (IS_BIT_SET(Local_104[iLocal_124 /*10*/], 11))
			{
				SET_BIT(&(Local_103.f_23), 20);
			}
		}
		if (!IS_BIT_SET(Local_103.f_24, 17))
		{
			if (IS_BIT_SET(Local_104[iLocal_124 /*10*/], 13))
			{
				SET_BIT(&(Local_103.f_24), 17);
			}
		}
		if (func_46(iVar0, 1, 1))
		{
			if (!IS_BIT_SET(Local_103.f_23, 5))
			{
				if (!func_395(Local_103))
				{
					if (HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_103), iVar1, 1))
					{
						SET_BIT(&(Local_103.f_23), 5);
					}
				}
			}
			if (IS_BIT_SET(Local_103.f_25, 1))
			{
				if (!IS_BIT_SET(Local_103.f_25, 8))
				{
					if (!func_395(Local_103.f_15))
					{
						if (HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_103.f_15), iVar1, 1))
						{
							SET_BIT(&(Local_103.f_25), 8);
						}
					}
				}
				if (!IS_BIT_SET(Local_103.f_25, 9))
				{
					if (IS_BIT_SET(Local_104[iLocal_124 /*10*/].f_5, 3))
					{
						SET_BIT(&(Local_103.f_25), 9);
					}
				}
			}
			if (!IS_BIT_SET(Local_103.f_23, 6))
			{
				if (IS_BIT_SET(Local_104[iLocal_124 /*10*/], 1))
				{
					SET_BIT(&(Local_103.f_23), 6);
				}
			}
			if (!IS_BIT_SET(Local_103.f_23, 16))
			{
				if (IS_BIT_SET(Local_104[iLocal_124 /*10*/], 8))
				{
					SET_BIT(&(Local_103.f_23), 16);
				}
			}
			if (!IS_BIT_SET(Local_103.f_24, 1))
			{
				if (IS_BIT_SET(Local_104[iLocal_124 /*10*/], 27))
				{
					SET_BIT(&(Local_103.f_24), 1);
				}
			}
			if (!IS_BIT_SET(Local_103.f_23, 7))
			{
				if (IS_BIT_SET(Local_104[iLocal_124 /*10*/], 0))
				{
					SET_BIT(&(Local_103.f_23), 7);
				}
			}
			if (!IS_BIT_SET(Local_103.f_23, 10))
			{
				if (IS_BIT_SET(Local_104[iLocal_124 /*10*/], 4))
				{
					if (Local_103.f_3 != 5 && Local_103.f_3 != 6)
					{
						Local_103.f_3 = 5;
					}
					SET_BIT(&(Local_103.f_23), 10);
				}
			}
			if (!IS_BIT_SET(Local_103.f_1, 2))
			{
				if (IS_BIT_SET(Local_104[iLocal_124 /*10*/].f_1, 2))
				{
					SET_BIT(&(Local_103.f_1), 2);
					SET_BIT(&(Local_103.f_1), 4);
					iLocal_126 = iLocal_124;
				}
			}
			else if (!IS_BIT_SET(Local_104[iLocal_126 /*10*/].f_1, 2))
			{
				CLEAR_BIT(&(Local_103.f_1), 2);
				if (IS_BIT_SET(Local_103.f_1, 3))
				{
					CLEAR_BIT(&(Local_103.f_1), 3);
				}
			}
			if (!IS_BIT_SET(Local_103.f_24, 8))
			{
				if (IS_BIT_SET(Local_104[iLocal_124 /*10*/], 30))
				{
					SET_BIT(&(Local_103.f_24), 8);
				}
			}
			if (!IS_BIT_SET(Local_103.f_1, 0))
			{
				if (IS_BIT_SET(Local_104[iLocal_124 /*10*/].f_1, 0))
				{
					SET_BIT(&(Local_103.f_1), 0);
					SET_BIT(&(Local_103.f_1), 1);
					Local_103.f_26 = Local_104[iLocal_124 /*10*/].f_2;
					iLocal_125 = iLocal_124;
				}
			}
			else if (!IS_BIT_SET(Local_104[iLocal_125 /*10*/].f_1, 0))
			{
				CLEAR_BIT(&(Local_103.f_1), 0);
			}
			if (!IS_BIT_SET(Local_103.f_24, 13))
			{
				if (IS_BIT_SET(Local_104[iLocal_124 /*10*/], 21))
				{
					SET_BIT(&(Local_103.f_24), 13);
				}
			}
		}
	}
	iLocal_124++;
	if (iLocal_124 == _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		iLocal_124 = 0;
	}
}

int func_46(int iParam0, bool bParam1, bool bParam2)
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

void func_47(var uParam0)
{
	int iVar0;
	
	if (NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (!NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
		{
		}
	}
	if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NET_TO_ENT(*uParam0);
		DELETE_ENTITY(&iVar0);
	}
}

void func_48()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	SET_BIT(&(Local_103.f_23), 2);
	SET_BIT(&(Local_103.f_23), 3);
	CLEAR_BIT(&(Local_103.f_23), 13);
	CLEAR_BIT(&(Local_103.f_23), 27);
	CLEAR_BIT(&(Local_103.f_23), 28);
	CLEAR_BIT(&(Local_103.f_24), 4);
	if (!IS_BIT_SET(Local_103.f_23, 18))
	{
		if (func_395(Local_103))
		{
			if (Local_103.f_37 <= 0f)
			{
				SET_BIT(&(Local_103.f_23), 18);
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(iVar0)))
		{
			iVar5 = NETWORK_GET_PLAYER_INDEX(NETWORK_GET_PLAYER_INDEX(iVar0));
			iVar6 = GET_PLAYER_PED(iVar5);
			if (Local_104[iVar0 /*10*/].f_3 > 0)
			{
				Local_103.f_4 = (Local_103.f_4 + Local_104[iVar0 /*10*/].f_3);
				Local_104[iVar0 /*10*/].f_3 = 0;
			}
			if (IS_BIT_SET(Local_103.f_23, 3))
			{
				if (IS_ENTITY_AT_COORD(iVar6, vLocal_144, 30f, 30f, 30f, false, true, 0))
				{
					CLEAR_BIT(&(Local_103.f_23), 3);
				}
			}
			if (!IS_BIT_SET(Local_103.f_24, 16))
			{
				if (IS_BIT_SET(Local_104[iVar0 /*10*/], 12))
				{
					SET_BIT(&(Local_103.f_24), 16);
				}
			}
			if (func_46(iVar5, 1, 1))
			{
				if (IS_BIT_SET(Local_103.f_23, 2))
				{
					CLEAR_BIT(&(Local_103.f_23), 2);
				}
				if (GET_INTERIOR_FROM_ENTITY(iVar6) == iLocal_139)
				{
					if (GET_ROOM_KEY_FROM_ENTITY(iVar6) == iLocal_140 || GET_ROOM_KEY_FROM_ENTITY(iVar6) == iLocal_141)
					{
						iVar2 = 1;
					}
					else if (GET_ROOM_KEY_FROM_ENTITY(iVar6) == iLocal_142)
					{
						SET_BIT(&(Local_103.f_23), 27);
						iVar3 = 1;
					}
				}
				if (iVar2 == 1 || iVar3 == 1)
				{
					SET_BIT(&(Local_103.f_23), 13);
					iVar4++;
					if (!IS_BIT_SET(Local_103.f_23, 9) && !IS_BIT_SET(Local_103.f_23, 21))
					{
						if (!IS_BIT_SET(Local_103.f_23, 4))
						{
							if (GET_CURRENT_PED_WEAPON(iVar6, &iVar1, 1))
							{
								if ((((iVar1 != joaat("weapon_unarmed") && iVar1 != 0) && iVar1 != joaat("object")) && iVar1 != joaat("weapon_flare")) && iVar1 != joaat("weapon_snowball"))
								{
									if (Local_103.f_32 == -1)
									{
										Local_103.f_32 = iVar0;
									}
									else if (!NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(Local_103.f_32)))
									{
										Local_103.f_32 = -1;
									}
									SET_BIT(&(Local_103.f_23), 4);
									if (!IS_BIT_SET(Local_103.f_23, 12))
									{
										if (IS_ENTITY_AT_COORD(iVar6, vLocal_111, 2.5f, 2.5f, 3f, false, true, 0))
										{
											SET_BIT(&(Local_103.f_23), 12);
										}
									}
								}
							}
						}
						if (!IS_BIT_SET(Local_103.f_24, 0))
						{
							if (GET_PLAYER_WANTED_LEVEL(iVar5) > 0)
							{
								SET_BIT(&(Local_103.f_24), 0);
							}
						}
					}
				}
				else if (IS_ENTITY_AT_COORD(iVar6, vLocal_144, 5f, 5f, 2.5f, false, true, 0))
				{
					SET_BIT(&(Local_103.f_23), 28);
					iVar4++;
				}
				if (!IS_BIT_SET(Local_103.f_24, 4))
				{
					if (IS_BIT_SET(Local_104[iVar0 /*10*/], 28))
					{
						SET_BIT(&(Local_103.f_24), 4);
					}
				}
				if ((IS_BIT_SET(Local_103.f_23, 9) && !IS_BIT_SET(Local_103.f_23, 20)) && !IS_BIT_SET(Local_103.f_23, 19))
				{
					if (Local_104[iLocal_124 /*10*/].f_6 > Local_103.f_33)
					{
						Local_103.f_33 = Local_104[iVar0 /*10*/].f_6;
						func_14(&(Local_103.f_34));
						if (!IS_BIT_SET(Local_103.f_23, 24))
						{
							if (Local_103.f_33 > (0.55f + 0.2f))
							{
								SET_BIT(&(Local_103.f_23), 24);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (Local_103.f_41 != iVar4)
	{
		Local_103.f_41 = iVar4;
	}
}

int func_49()
{
	int iVar0;
	
	if ((!NETWORK_DOES_NETWORK_ID_EXIST(Local_103) || !NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_13)) || !NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_14))
	{
		if ((func_51(iLocal_110) && func_51(func_52(1))) && func_51(func_52(2)))
		{
			if (0xE16AA70CE9BEEDC3(1, 0, 2, 0))
			{
				if (!NETWORK_DOES_NETWORK_ID_EXIST(Local_103))
				{
					if (func_50(&Local_103, 4, iLocal_110, vLocal_111 - Vector(1f, 0f, 0f), Local_103.f_42, 1, 1, 1))
					{
						SET_PED_COMPONENT_VARIATION(SET_PED_COMPONENT_VARIATION(Local_103), 0, iLocal_316[0], iLocal_317[0], 0);
						SET_PED_COMPONENT_VARIATION(SET_PED_COMPONENT_VARIATION(Local_103), 2, iLocal_316[1], iLocal_317[1], 0);
						SET_PED_COMPONENT_VARIATION(SET_PED_COMPONENT_VARIATION(Local_103), 3, iLocal_316[2], iLocal_317[2], 0);
						SET_PED_COMPONENT_VARIATION(SET_PED_COMPONENT_VARIATION(Local_103), 4, iLocal_316[3], iLocal_317[3], 0);
						SET_PED_COMPONENT_VARIATION(SET_PED_COMPONENT_VARIATION(Local_103), 8, iLocal_316[4], iLocal_317[4], 0);
						_0x82EBB79E258FA2B7(_0x82EBB79E258FA2B7(Local_103), _0x82EBB79E258FA2B7(vLocal_111));
						SET_PED_KEEP_TASK(SET_PED_KEEP_TASK(Local_103), true);
						SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_103), true);
						SET_ENTITY_IS_TARGET_PRIORITY(SET_ENTITY_IS_TARGET_PRIORITY(Local_103), 1, 0);
						_SET_PED_RAGDOLL_BLOCKING_FLAGS(_SET_PED_RAGDOLL_BLOCKING_FLAGS(Local_103), 16);
						SET_PED_CAN_EVASIVE_DIVE(SET_PED_CAN_EVASIVE_DIVE(Local_103), 0);
						SET_PED_FLEE_ATTRIBUTES(SET_PED_FLEE_ATTRIBUTES(Local_103), 1024, true);
						REMOVE_ALL_PED_WEAPONS(REMOVE_ALL_PED_WEAPONS(Local_103), 1);
						SET_ENTITY_HEALTH(SET_ENTITY_HEALTH(Local_103), round((200f * Global_262145.f_154)), 0);
						if (!DECOR_EXIST_ON(DECOR_EXIST_ON(Local_103), "XP_Blocker"))
						{
							DECOR_SET_BOOL(DECOR_SET_BOOL(Local_103), "XP_Blocker", 1);
						}
						func_394(&uLocal_151, 3, NET_TO_PED(Local_103), &(Local_103.f_46), 1, 0);
					}
				}
				if (!NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_13))
				{
					iVar0 = CREATE_PORTABLE_PICKUP(-1795552418, vLocal_127, false, func_52(1));
					if (DOES_ENTITY_EXIST(iVar0))
					{
						Local_103.f_13 = OBJ_TO_NET(iVar0);
						FREEZE_ENTITY_POSITION(FREEZE_ENTITY_POSITION(Local_103.f_13), true);
						SET_ENTITY_COLLISION(SET_ENTITY_COLLISION(Local_103.f_13), false, 0);
						SET_ENTITY_HEADING(SET_ENTITY_HEADING(Local_103.f_13), fLocal_128);
						_0x82EBB79E258FA2B7(_0x82EBB79E258FA2B7(Local_103.f_13), _0x82EBB79E258FA2B7(vLocal_111));
						SET_ENTITY_INVINCIBLE(SET_ENTITY_INVINCIBLE(Local_103.f_13), true);
						_0xA08FE5E49BDC39DD(_0xA08FE5E49BDC39DD(Local_103.f_13), -0.2f, 1);
						_0x92AEFB5F6E294023(_0x92AEFB5F6E294023(Local_103.f_13), true, 0);
						SET_ENTITY_VISIBLE(SET_ENTITY_VISIBLE(Local_103.f_13), false, 0);
					}
				}
				if (!NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_14))
				{
					if (func_26(&(Local_103.f_14), func_52(2), vLocal_129 - Vector(0.12f, 0f, 0f), 1, 1, 0, 1, 0, 0, 0))
					{
						SET_ENTITY_HEADING(SET_ENTITY_HEADING(Local_103.f_14), fLocal_130);
						_0x82EBB79E258FA2B7(_0x82EBB79E258FA2B7(Local_103.f_14), _0x82EBB79E258FA2B7(vLocal_111));
						FREEZE_ENTITY_POSITION(FREEZE_ENTITY_POSITION(Local_103.f_14), true);
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_50(int iParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, bool bParam7)
{
	int iVar0;
	
	if (!CAN_REGISTER_MISSION_OBJECTS(1))
	{
		return 0;
	}
	iVar0 = CREATE_PED(iParam1, iParam2, vParam3, fParam4, iParam6, bParam5);
	*iParam0 = PED_TO_NET(iVar0);
	if (NETWORK_DOES_NETWORK_ID_EXIST(*iParam0))
	{
		_SET_ENTITY_SOMETHING(iVar0, bParam7);
		if (NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
		{
			if (bParam5)
			{
				SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*iParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

bool func_51(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	REQUEST_MODEL(iParam0);
	return HAS_MODEL_LOADED(iParam0);
}

int func_52(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("mp_m_shopkeep_01");
		
		case 1:
			return joaat("p_poly_bag_01_s");
		
		case 2:
			return joaat("p_till_01_s");
		
		default:
	}
	return joaat("mp_m_shopkeep_01");
}

void func_53()
{
	bool bVar0;
	
	if (!IS_BIT_SET(Local_105.f_52, 20))
	{
		if (IS_BIT_SET(Local_103.f_23, 11) || IS_BIT_SET(Local_103.f_24, 16))
		{
			if (GET_INTERIOR_FROM_ENTITY(GET_INTERIOR_FROM_ENTITY()) == iLocal_139 || GET_INTERIOR_FROM_ENTITY(GET_INTERIOR_FROM_ENTITY(), vLocal_144, 5f, 5f, 2.5f, false, true, 0))
			{
				if (!bVar0)
				{
					func_56();
				}
				func_54();
				func_6(Local_105.f_50, 1, func_7());
				SET_BIT(&(Local_105.f_52), 20);
			}
			else
			{
				if (!bVar0)
				{
					if ((IS_BIT_SET(Local_105.f_52, 31) && (IS_BIT_SET(IS_BIT_SET()) > 0 || IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 1))) && IS_BIT_SET(IS_BIT_SET(), vLocal_144, 20f, 20f, 20f, false, true, 0))
					{
						func_56();
					}
				}
				SET_BIT(&(Local_105.f_52), 20);
			}
		}
	}
}

void func_54()
{
	int iVar0;
	
	iVar0 = func_55(47);
	Global_2414413[iVar0 /*83*/] = 47;
	StringCopy(&(Global_2414413[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_55(int iParam0)
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

void func_56()
{
	int iVar0;
	
	if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) > 0 || GET_PLAYER_WANTED_LEVEL(Local_104[GET_PLAYER_WANTED_LEVEL() /*10*/], 1))
	{
		iVar0 = func_128(1181, -1, 0);
		if (!IS_BIT_SET(iVar0, Local_105.f_50))
		{
			func_126(14, 1, -1);
			SET_BIT(&iVar0, Local_105.f_50);
			func_125(1181, iVar0, -1, 1, 0);
			if (func_124(14, -1) >= 20)
			{
				func_110(44, 1);
			}
			else
			{
				func_109(44, func_124(14, -1));
			}
		}
		func_107(1167, 1, -1);
		func_106(12, 1, -1, 1);
		func_104(19);
		iLocal_334 = 100;
		iLocal_334 = round((IntToFloat(iLocal_334) * Global_262145.f_4226));
		func_60(2, "XPT_HOLDUP", -1636175450, -235721452, iLocal_334, 1, -1, 0);
		func_57(1898186487, 12, 0);
	}
}

void func_57(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_59(iParam1, iParam2))
	{
		iVar0 = func_58();
		Global_2458876[iVar0] = iParam1;
		Global_2458887[iVar0] = iParam0;
	}
}

int func_58()
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

int func_59(int iParam0, var uParam1)
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

var func_60(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_61(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_61(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_62(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_62(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (iParam1 == 0)
	{
		if (func_103(PLAYER_ID()) || func_102(PLAYER_ID()))
		{
			if (Global_262145.f_9635 > 16000)
			{
				iVar2 = 16000;
			}
			else
			{
				iVar2 = Global_262145.f_9635;
			}
		}
		else if (func_99() || func_95(PLAYER_ID()))
		{
			if (Global_262145.f_22762 > 16000)
			{
				iVar2 = 16000;
			}
			else
			{
				iVar2 = Global_262145.f_22762;
			}
		}
		else if (func_94())
		{
			if (Global_262145.f_27882 > 16000)
			{
				iVar2 = 16000;
			}
			else
			{
				iVar2 = Global_262145.f_27882;
			}
		}
		else if (Global_262145.f_6635 > 10000)
		{
			iVar2 = 10000;
		}
		else
		{
			iVar2 = Global_262145.f_6635;
		}
	}
	if (func_93(sParam2))
	{
	}
	if (func_92())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_90(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_89(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_86(0, &iVar1);
					break;
				
				case 3:
					func_86(1, &iVar1);
					break;
				
				case 1:
					func_82(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1686907)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_107(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_73((func_80(PLAYER_ID(), 1) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1590446[PLAYER_ID() /*871*/].f_39.f_2 != -1)
				{
					func_107(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_67(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_63((func_65(PLAYER_ID()) + iVar1));
			}
			else
			{
				func_63((func_65(PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_63(int iParam0)
{
	if (func_92())
	{
		Global_1590446[PLAYER_ID() /*871*/].f_211.f_5 = iParam0;
		func_64(joaat("mpply_globalxp"), iParam0);
	}
}

void func_64(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_65(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_46(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER_ID())
			{
				return func_66(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1590446[iParam0 /*871*/].f_211.f_5;
			}
		}
		else
		{
			return func_66(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_66(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_67(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_72(PLAYER_ID()) };
	if (_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_70(func_71(&Var0));
			if (iVar1 == 0)
			{
				func_69(&Global_1384134, iParam0);
				func_68(joaat("mpply_crew_local_xp_0"), Global_1384134);
			}
			else if (iVar1 == 1)
			{
				func_69(&Global_1384135, iParam0);
				func_68(joaat("mpply_crew_local_xp_1"), Global_1384135);
			}
			else if (iVar1 == 2)
			{
				func_69(&Global_1384136, iParam0);
				func_68(joaat("mpply_crew_local_xp_2"), Global_1384136);
			}
			else if (iVar1 == 3)
			{
				func_69(&Global_1384137, iParam0);
				func_68(joaat("mpply_crew_local_xp_3"), Global_1384137);
			}
			else if (iVar1 == 4)
			{
				func_69(&Global_1384138, iParam0);
				func_68(joaat("mpply_crew_local_xp_4"), Global_1384138);
			}
		}
	}
}

void func_68(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1384129 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1384131 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1384131 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1384132 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1384133 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1384134 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1384135 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1384136 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1384137 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1384138 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1384139 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1384140 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1384141 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1384142 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1384143 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1384144 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1384145 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_69(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_70(int iParam0)
{
	if (iParam0 == Global_1384129)
	{
		return 0;
	}
	else if (iParam0 == Global_1384130)
	{
		return 1;
	}
	else if (iParam0 == Global_1384131)
	{
		return 2;
	}
	else if (iParam0 == Global_1384132)
	{
		return 3;
	}
	else if (iParam0 == Global_1384133)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_71(var uParam0)
{
	if (_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2458924;
		}
	}
	return Global_2458924;
}

struct<13> func_72(int iParam0)
{
	struct<13> Var0;
	
	NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_73(int iParam0, int iParam1, int iParam2)
{
	if (func_92())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1384279[func_78(-1)])
				{
					PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1384279[func_78(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 == 0)
			{
				PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 < 0)
			{
				PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_77(PLAYER_ID()))
		{
			Global_1590446[PLAYER_ID() /*871*/].f_211.f_1 = iParam0;
			Global_1590446[PLAYER_ID() /*871*/].f_211.f_6 = func_75(iParam0, 1);
		}
		func_74(639, iParam0, -1, 1);
		func_125(640, func_75(iParam0, 1), -1, 1, 0);
		Global_1384279[func_78(-1)] = iParam0;
		func_57(-1109644434, 7, 0);
	}
}

void func_74(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2542527[iParam0 /*3*/][func_78(iParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1384207[func_78(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1384213[func_78(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1384219[func_78(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1384225[func_78(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1384177[func_78(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1384183[func_78(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1384189[func_78(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1384195[func_78(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1384147[func_78(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1384153[func_78(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1384159[func_78(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1384165[func_78(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1384237[func_78(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1384243[func_78(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1384249[func_78(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1384255[func_78(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1384267[func_78(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1384273[func_78(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1384279[func_78(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1384285[func_78(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2578592[0 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2578592[1 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2578592[2 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2578592[3 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 9509:
			Global_2578729[func_78(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1384291[func_78(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1384297[func_78(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1384303[func_78(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1384315[func_78(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2578659[0 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2578659[1 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2578659[2 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2578659[3 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2578659[4 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2578732[0 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2578732[1 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2578732[2 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2578732[3 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2578732[4 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2578748[0 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2578748[1 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2578748[2 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2578748[3 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2578748[4 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2578659[5 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2578592[4 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2578764[func_78(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2578773[func_78(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2578767[func_78(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2578776[func_78(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2578770[func_78(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2578779[func_78(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2578782[func_78(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2578659[6 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2578592[5 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2578659[7 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2578592[6 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2578659[8 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2578592[7 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2578659[9 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2578592[8 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2578659[10 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2578592[9 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2578659[11 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2578592[10 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2578659[12 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2578592[11 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2578659[13 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2578592[12 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2578659[14 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2578592[13 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2578659[15 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2578592[14 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2578659[16 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2578592[15 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2578659[17 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2578592[16 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2578592[17 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2578592[18 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2578592[19 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2578592[20 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2578785[func_78(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2578788[func_78(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2578791[func_78(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2578794[func_78(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2578797[func_78(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2578800[func_78(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2578803[func_78(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2578806[func_78(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2578809[func_78(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2578812[func_78(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2578815[func_78(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2578818[func_78(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2578821[func_78(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2578824[func_78(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2578592[21 /*3*/][func_78(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_75(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_76(iParam0, 0);
}

int func_76(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_290594[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_290594[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((to_float(iVar1) - to_float(iVar2)) / 2f) + to_float(iVar2));
		iVar3 = round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_77(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return IS_BIT_SET(Global_2437549.f_1, iParam0);
	}
	return 1;
}

int func_78(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
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

int func_80(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_81(iParam0);
}

int func_81(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER_ID())
			{
				return Global_1384279[func_78(-1)];
			}
			else if (func_77(iParam0))
			{
				return Global_1590446[iParam0 /*871*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1384279[func_78(-1)];
	}
	return 0;
}

void func_82(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = GET_PLAYER_TEAM(GET_PLAYER_TEAM());
	iVar0 = 0;
	while (iVar0 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		iVar4 = INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK_GET_PLAYER_INDEX(iVar4);
			if (GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (GET_PLAYER_TEAM(iVar5) == iVar1 || func_85(GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER_ID())
					{
						if (func_84(PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = round((func_83(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_83(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_83(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_84(int iParam0, int iParam1)
{
	if (_NETWORK_PLAYER_IS_IN_CLAN())
	{
		Global_2507671 = { func_72(iParam0) };
		Global_2507684 = { func_72(iParam1) };
		if (NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2507671))
		{
			if (NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2507684))
			{
				NETWORK_CLAN_PLAYER_GET_DESC(&Global_2507601, 35, &Global_2507671);
				NETWORK_CLAN_PLAYER_GET_DESC(&Global_2507636, 35, &Global_2507684);
				if (Global_2507601 == Global_2507636)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_85(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4456448.f_56, 0);
				
				case 1:
					return IS_BIT_SET(Global_4456448.f_56, 1);
				
				case 2:
					return IS_BIT_SET(Global_4456448.f_56, 2);
				
				case 3:
					return IS_BIT_SET(Global_4456448.f_56, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4456448.f_56, 4);
				
				case 1:
					return IS_BIT_SET(Global_4456448.f_56, 5);
				
				case 2:
					return IS_BIT_SET(Global_4456448.f_56, 6);
				
				case 3:
					return IS_BIT_SET(Global_4456448.f_56, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4456448.f_56, 8);
				
				case 1:
					return IS_BIT_SET(Global_4456448.f_56, 9);
				
				case 2:
					return IS_BIT_SET(Global_4456448.f_56, 10);
				
				case 3:
					return IS_BIT_SET(Global_4456448.f_56, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return IS_BIT_SET(Global_4456448.f_56, 12);
				
				case 1:
					return IS_BIT_SET(Global_4456448.f_56, 13);
				
				case 2:
					return IS_BIT_SET(Global_4456448.f_56, 14);
				
				case 3:
					return IS_BIT_SET(Global_4456448.f_56, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_86(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			iVar3 = iVar0;
			if (NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_46(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER_ID())
					{
						iVar1++;
						if (func_84(PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_46(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER_ID())
				{
					if (func_87(PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_84(PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = round((func_83(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_83(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_87(int iParam0, int iParam1)
{
	return vdist(func_88(iParam0), func_88(iParam1));
	return 0f;
}

Vector3 func_88(int iParam0)
{
	return GET_ENTITY_COORDS(GET_ENTITY_COORDS(iParam0), false);
}

int func_89(int iParam0)
{
	int iVar0;
	
	if (GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_83(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_90(int iParam0)
{
	if (iParam0 < 0)
	{
		if (ABSI(iParam0) > func_80(ABSI(), 1))
		{
			iParam0 = -func_80(PLAYER_ID(), 1);
		}
	}
	if (func_91(8000, 0, 0) > 0)
	{
		if (func_91(8000, 0, 0) < (iParam0 + func_80(PLAYER_ID(), 1)))
		{
			iParam0 = (func_91(8000, 0, 0) - func_80(PLAYER_ID(), 1));
		}
	}
	return iParam0;
}

int func_91(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_290594[iParam0];
}

int func_92()
{
	return 1;
}

int func_93(char* sParam0)
{
	if (IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (ARE_STRINGS_EQUAL(sParam0, "") || ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_94()
{
	return Global_2448961.f_19;
}

int func_95(int iParam0)
{
	return func_96(func_97(iParam0));
}

int func_96(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_97(int iParam0)
{
	if (func_98(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_33;
	}
	return -1;
}

int func_98(int iParam0, int iParam1)
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 || (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_99()
{
	if (NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_101();
	}
	return func_100(Global_4456448.f_154360);
}

int func_100(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5008[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_101()
{
	return Global_2448961.f_17;
}

bool func_102(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 2;
}

bool func_103(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 7;
}

void func_104(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_105() /*10828*/].f_6168.f_4015[iVar0 /*3*/] == iParam0)
		{
			if (Global_1312570.f_1[iVar0] == -1)
			{
				Global_1312570.f_1[iVar0] = iParam0;
				Global_1312570 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_105()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_106(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_79();
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

void func_107(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_128(iParam0, func_78(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_108(iParam0))
	{
		func_125(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_74(iParam0, iVar0, iParam2, 1);
	}
}

int func_108(int iParam0)
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

int func_109(int iParam0, int iParam1)
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

int func_110(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_111(iParam0, iParam1);
}

int func_111(int iParam0, int iParam1)
{
	if (func_123(14) && !func_122(iParam0))
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
	if (func_121(&Global_4269915))
	{
		if (func_119(&Global_4269915, iParam0))
		{
			return 0;
		}
		if (func_112(&Global_4269915, iParam0))
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

int func_112(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_123(14) && !func_122(iParam1))
	{
		return 0;
	}
	if (func_119(uParam0, iParam1))
	{
		return 0;
	}
	if (func_118(uParam0) < 0f)
	{
		func_117(uParam0, 0);
	}
	func_115(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_113(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_113(var uParam0, int iParam1)
{
	int iVar0;
	
	if (HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_123(14) && !func_122(iParam1))
	{
		return 0;
	}
	if (func_119(uParam0, iParam1))
	{
		return 0;
	}
	if (func_118(uParam0) < 0f)
	{
		func_117(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_114(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_114(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_115(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_116(uParam0, iVar0);
		iVar0++;
	}
	func_117(uParam0, (Global_4269914 - 0.5f));
}

void func_116(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_117(var uParam0, float fParam1)
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

float func_118(var uParam0)
{
	return uParam0->f_80;
}

bool func_119(var uParam0, int iParam1)
{
	return func_120(uParam0, iParam1) != -1;
}

int func_120(var uParam0, int iParam1)
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

bool func_121(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_122(int iParam0)
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

bool func_123(int iParam0)
{
	return Global_41396 == iParam0;
}

int func_124(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2577831[iParam0 /*3*/][func_78(iParam1)];
	if (STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_125(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
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

void func_126(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_124(iParam0, func_78(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_127(iParam0, iVar0, iParam2);
}

void func_127(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2577831[iParam0 /*3*/][func_78(uParam2)];
	STAT_SET_INT(iVar0, iParam1, 1);
}

int func_128(int iParam0, int iParam1, int iParam2)
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

int func_129(var uParam0)
{
	if (uParam0->f_1)
	{
		if (ABSI(ABSI(ABSI(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_130(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_19(uParam0, 0, 0);
		}
	}
}

void func_131()
{
	bool bVar0;
	int iVar1;
	
	func_253();
	func_223();
	func_174();
	func_53();
	func_172();
	func_171();
	if (!IS_PED_INJURED(IS_PED_INJURED()))
	{
		if (GET_INTERIOR_FROM_ENTITY(GET_INTERIOR_FROM_ENTITY()) == iLocal_139)
		{
			if (Global_2531497.f_5655.f_1 == 0)
			{
				Global_2531497.f_5655.f_1 = 1;
			}
			if (GET_ROOM_KEY_FROM_ENTITY(GET_ROOM_KEY_FROM_ENTITY()) == iLocal_140 || GET_ROOM_KEY_FROM_ENTITY(GET_ROOM_KEY_FROM_ENTITY()) == iLocal_141)
			{
				bVar0 = true;
			}
			else if (GET_ROOM_KEY_FROM_ENTITY(GET_ROOM_KEY_FROM_ENTITY()) == iLocal_142)
			{
				iVar1 = 1;
			}
		}
		else if (Global_2531497.f_5655.f_1 == 1)
		{
			Global_2531497.f_5655.f_1 = 0;
		}
	}
	if (!IS_BIT_SET(Local_105.f_52, 31))
	{
		if (func_97(PLAYER_ID()) != 154)
		{
			if ((bVar0 || iVar1) || IS_ENTITY_AT_COORD(IS_ENTITY_AT_COORD(), vLocal_144, (5f / 2f), (5f / 2f), (5f / 2f), false, true, 0))
			{
				if (!func_38(PLAYER_ID()))
				{
					SET_CURRENT_PED_WEAPON(SET_CURRENT_PED_WEAPON(), joaat("weapon_unarmed"), true);
					SET_BIT(&(Local_105.f_52), 31);
				}
			}
		}
	}
	if ((!IS_BIT_SET(Local_105.f_52, 26) && bVar0) && !(func_170(0) || func_169()))
	{
		if (func_167("SNK_MNU", Local_105, 0))
		{
			SET_BIT(&(Local_105.f_52), 26);
		}
	}
	if (!bVar0 && IS_BIT_SET(Local_105.f_52, 26))
	{
		if (!IS_PLAYER_CONTROL_ON(IS_PLAYER_CONTROL_ON()) || (IS_PLAYER_CONTROL_ON(Local_105.f_1) && IS_PLAYER_CONTROL_ON(Local_105.f_1)))
		{
			CLEAR_PED_TASKS(CLEAR_PED_TASKS());
			SET_PLAYER_CONTROL(SET_PLAYER_CONTROL(), true, 0);
			SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			if (Local_105.f_51 > 0)
			{
				Local_104[PARTICIPANT_ID_TO_INT() /*10*/].f_3 = Local_105.f_51;
				Local_105.f_51 = 0;
			}
			func_410();
			CLEAR_BIT(&(Local_105.f_53), 7);
			if (DOES_CAM_EXIST(Local_105.f_1))
			{
				DESTROY_CAM(Local_105.f_1, 0);
			}
			RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
		}
		func_164(1, Local_105);
		CLEAR_BIT(&(Local_105.f_52), 26);
	}
	if (!IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 21))
	{
		if (iVar1 || func_162(PLAYER_PED_ID(), Local_105.f_50))
		{
			SET_BIT(&(Local_104[SET_BIT() /*10*/]), 21);
		}
	}
	if (bVar0 || iVar1)
	{
		func_159();
		func_153();
		func_147();
		func_143(1);
		func_136();
		_0x4669B3ED80F24B4E(_0x4669B3ED80F24B4E());
		_0xDC64D2C53493ED12(_0xDC64D2C53493ED12());
		if (IS_BIT_SET(Global_2531497.f_7, 0))
		{
			_0xB45EFF719D8427A6(Local_103.f_71);
			func_134(vLocal_144, func_135(30), 0);
			CLEAR_BIT(&(Global_2531497.f_7), 0);
		}
	}
	else
	{
		if (IS_ENTITY_AT_COORD(IS_ENTITY_AT_COORD(), vLocal_144, 5f, 5f, 2.5f, false, true, 0))
		{
			func_143(0);
		}
		if (!IS_BIT_SET(Global_2531497.f_7, 0))
		{
			_0x0032A6DBA562C518();
			func_132(vLocal_144, func_135(30), "");
			SET_BIT(&(Global_2531497.f_7), 0);
		}
	}
	if ((IS_BIT_SET(Local_103.f_23, 22) || IS_BIT_SET(Local_103.f_23, 23)) || IS_BIT_SET(Local_103.f_23, 7))
	{
		SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME());
	}
}

int func_132(vector3 vParam0, char* sParam1, char* sParam2)
{
	int iVar0;
	
	if (!IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (!ARE_STRINGS_EQUAL(&(Global_2531497.f_3968[iVar0 /*26*/].f_4), sParam1))
			{
				if (IS_STRING_NULL_OR_EMPTY(&(Global_2531497.f_3968[iVar0 /*26*/].f_4)))
				{
					Global_2531497.f_3968[iVar0 /*26*/] = 1;
					Global_2531497.f_3968[iVar0 /*26*/].f_1 = { vParam0 };
					StringCopy(&(Global_2531497.f_3968[iVar0 /*26*/].f_4), sParam1, 24);
					StringCopy(&(Global_2531497.f_3968[iVar0 /*26*/].f_10), sParam2, 64);
					return 1;
				}
			}
			else if (!func_133(Global_2531497.f_3968[iVar0 /*26*/].f_1, vParam0, 0))
			{
				Global_2531497.f_3968[iVar0 /*26*/] = 1;
				Global_2531497.f_3968[iVar0 /*26*/].f_1 = { vParam0 };
				StringCopy(&(Global_2531497.f_3968[iVar0 /*26*/].f_4), sParam1, 24);
				StringCopy(&(Global_2531497.f_3968[iVar0 /*26*/].f_10), sParam2, 64);
				return 1;
			}
			else
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_133(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_134(vector3 vParam0, char* sParam1, int iParam2)
{
	int iVar0;
	
	if (!IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (ARE_STRINGS_EQUAL(&(Global_2531497.f_3968[iVar0 /*26*/].f_4), sParam1))
			{
				if (iParam2 || func_133(Global_2531497.f_3968[iVar0 /*26*/].f_1, vParam0, 0))
				{
					Global_2531497.f_3968[iVar0 /*26*/] = 0;
					Global_2531497.f_3968[iVar0 /*26*/].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_2531497.f_3968[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_2531497.f_3968[iVar0 /*26*/].f_10), "", 64);
				}
			}
			iVar0++;
		}
	}
}

char* func_135(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

void func_136()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	CLEAR_BIT(&(Local_104[CLEAR_BIT() /*10*/]), 28);
	if (!func_395(Local_103) && func_46(PLAYER_ID(), 1, 1))
	{
		if (GET_CURRENT_PED_WEAPON(GET_CURRENT_PED_WEAPON(), &iVar0, 1))
		{
			if ((((iVar0 != joaat("weapon_unarmed") && iVar0 != joaat("object")) && iVar0 != joaat("weapon_flare")) && iVar0 != joaat("weapon_snowball")) && iVar0 != joaat("weapon_flashlight"))
			{
				if ((((IS_PLAYER_FREE_AIMING(IS_PLAYER_FREE_AIMING()) && IS_PLAYER_FREE_AIMING(IS_PLAYER_FREE_AIMING(), IS_PLAYER_FREE_AIMING(Local_103), 45f)) && IS_PLAYER_FREE_AIMING(IS_PLAYER_FREE_AIMING(), IS_PLAYER_FREE_AIMING(Local_103), 5f, 5f, 2f, 0, 1, 0)) || IS_PLAYER_FREE_AIMING(IS_PLAYER_FREE_AIMING(), IS_PLAYER_FREE_AIMING(Local_103))) || IS_PLAYER_FREE_AIMING(IS_PLAYER_FREE_AIMING(), IS_PLAYER_FREE_AIMING(Local_103)))
				{
					if (!(func_170(0) || func_169()) && ((!func_140(PLAYER_ID()) || func_97(PLAYER_ID()) == 154) || func_97(PLAYER_ID()) == 171))
					{
						if (func_138(PLAYER_ID(), PLAYER_ID(Local_103)) || PLAYER_ID(PLAYER_ID()))
						{
							if (!IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 1))
							{
								func_137(func_8(NETWORK_GET_PLAYER_INDEX(NETWORK_GET_PLAYER_INDEX())));
								SET_BIT(&(Local_104[SET_BIT() /*10*/]), 1);
							}
							if (!IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 8))
							{
								SET_BIT(&(Local_104[SET_BIT() /*10*/]), 8);
							}
						}
						SET_BIT(&(Local_104[SET_BIT() /*10*/]), 28);
					}
				}
			}
		}
	}
	if (!IS_BIT_SET(Local_105.f_52, 28))
	{
		if (IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 28))
		{
			if (GET_CURRENT_PED_WEAPON(GET_CURRENT_PED_WEAPON(), &iVar1, 1))
			{
				if (iVar1 != 0 && iVar1 != joaat("weapon_snowball"))
				{
					iVar2 = GET_WEAPONTYPE_GROUP(iVar1);
					if (iVar2 == 416676503)
					{
						sLocal_109 = "hold_up_head_additive_pistol";
						TASK_PLAY_ANIM(TASK_PLAY_ANIM(), "mp_am_hold_up", sLocal_109, 8f, -8f, -1, 305, 0, 0, 0, 0);
					}
					else if ((((iVar2 == 1159398588 || iVar2 == 970310034) || iVar2 == 860033945) || iVar2 == -1212426201) || iVar2 == -957766203)
					{
						sLocal_109 = "hold_up_head_additive_rifle";
						TASK_PLAY_ANIM(TASK_PLAY_ANIM(), "mp_am_hold_up", sLocal_109, 8f, -8f, -1, 305, 0, 0, 0, 0);
					}
					else
					{
						sLocal_109 = "";
					}
					SET_BIT(&(Local_105.f_52), 28);
				}
			}
		}
	}
	else if (!IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 28) || IS_BIT_SET(IS_BIT_SET()))
	{
		if (!IS_STRING_NULL_OR_EMPTY(sLocal_109))
		{
			if (IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "mp_am_hold_up", sLocal_109, 3))
			{
				STOP_ANIM_TASK(STOP_ANIM_TASK(), "mp_am_hold_up", sLocal_109, -8f);
			}
		}
		CLEAR_BIT(&(Local_105.f_52), 28);
	}
	if (IS_BIT_SET(Local_103.f_25, 1))
	{
		if (!IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/].f_5, 3))
		{
			if (!func_395(Local_103.f_15) && func_46(PLAYER_ID(), 1, 1))
			{
				if (GET_CURRENT_PED_WEAPON(GET_CURRENT_PED_WEAPON(), &iVar3, 1))
				{
					if ((((iVar3 != joaat("weapon_unarmed") && iVar3 != joaat("object")) && iVar3 != joaat("weapon_flare")) && iVar3 != joaat("weapon_snowball")) && !(func_170(0) || func_169()))
					{
						if (IS_PLAYER_FREE_AIMING_AT_ENTITY(IS_PLAYER_FREE_AIMING_AT_ENTITY(), IS_PLAYER_FREE_AIMING_AT_ENTITY(Local_103.f_15)) || IS_PLAYER_FREE_AIMING_AT_ENTITY(IS_PLAYER_FREE_AIMING_AT_ENTITY(), IS_PLAYER_FREE_AIMING_AT_ENTITY(Local_103.f_15)))
						{
							if (func_138(PLAYER_ID(), PLAYER_ID(Local_103.f_15)) || PLAYER_ID(PLAYER_ID()))
							{
								SET_BIT(&(Local_104[SET_BIT() /*10*/].f_5), 3);
							}
						}
					}
				}
			}
		}
	}
}

void func_137(int iParam0)
{
	struct<2> Var0;
	
	Var0 = 54148435;
	Var0.f_1 = PLAYER_ID();
	if (!iParam0 == 0)
	{
		TRIGGER_SCRIPT_EVENT(1, &Var0, 2, iParam0);
	}
}

int func_138(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (func_46(iParam0, 1, 1))
	{
		vVar0 = { func_88(iParam0) };
	}
	if (!IS_PED_INJURED(iParam1))
	{
		vVar1 = { GET_ENTITY_COORDS(iParam1, true) };
	}
	vVar3 = { vVar1 - vVar0 };
	if (!IS_PED_INJURED(iParam1))
	{
		vVar2 = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 0f, 7f, 0f) };
		vVar4 = { vVar2 - vVar1 };
	}
	vVar3.z = 0f;
	vVar4.z = 0f;
	fVar5 = func_139(vVar3, vVar4);
	if (fVar5 < -0.1f)
	{
		return 1;
	}
	return 0;
}

float func_139(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

int func_140(int iParam0)
{
	if (func_40(iParam0))
	{
		return 1;
	}
	if (func_141(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_141(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_142(iParam0, 9);
	}
	return 0;
}

bool func_142(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

void func_143(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (PLAYER_ID() != Global_2531497.f_4823 && !func_38(PLAYER_ID()))
	{
		if (!IS_BIT_SET(Local_105.f_52, 6))
		{
			if (iParam0 == 1)
			{
				if (GET_CURRENT_PED_WEAPON(GET_CURRENT_PED_WEAPON(), &iVar2, 1))
				{
					if ((((iVar2 != joaat("weapon_unarmed") && iVar2 != 0) && iVar2 != joaat("object")) && iVar2 != joaat("weapon_flare")) && iVar2 != joaat("weapon_snowball"))
					{
						if (!IS_ENTITY_AT_COORD(IS_ENTITY_AT_COORD(), vLocal_111, 2.5f, 2.5f, 3f, false, true, 0))
						{
							iVar1 = 1;
						}
						iVar0 = 1;
					}
				}
				if ((((iVar1 == 1 || IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 5)) || (iVar0 == 1 && Local_103.f_3 >= 3)) || (iVar0 == 1 && IS_BIT_SET(Local_103.f_24, 16))) || IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 12))
				{
					if (((!IS_BIT_SET(Local_103.f_23, 12) || Local_103.f_3 >= 3) || IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 12)) || (iVar0 == 1 && IS_BIT_SET(Local_103.f_24, 16)))
					{
						Global_2424073[PLAYER_ID() /*421*/].f_36++;
						func_14(&(Global_2437549.f_3733));
						func_19(&(Global_2437549.f_3733), 0, 0);
						if (Global_2424073[PLAYER_ID() /*421*/].f_36 <= 2)
						{
							if (func_146())
							{
								if (func_145() < 2)
								{
									REPORT_CRIME(REPORT_CRIME(), 37, REPORT_CRIME(func_145()));
								}
								else
								{
									REPORT_CRIME(REPORT_CRIME(), 37, REPORT_CRIME(2));
								}
							}
							else
							{
								REPORT_CRIME(REPORT_CRIME(), 37, REPORT_CRIME(2));
							}
						}
						else if (Global_2424073[PLAYER_ID() /*421*/].f_36 >= 5)
						{
							if (func_146())
							{
								if (func_145() < 3)
								{
									REPORT_CRIME(REPORT_CRIME(), 37, REPORT_CRIME(func_145()));
								}
								else
								{
									REPORT_CRIME(REPORT_CRIME(), 37, REPORT_CRIME(3));
								}
							}
							else
							{
								REPORT_CRIME(REPORT_CRIME(), 37, REPORT_CRIME(4));
							}
						}
						else if (func_146())
						{
							if (func_145() < 3)
							{
								REPORT_CRIME(REPORT_CRIME(), 37, REPORT_CRIME(func_145()));
							}
							else
							{
								REPORT_CRIME(REPORT_CRIME(), 37, REPORT_CRIME(3));
							}
						}
						else
						{
							REPORT_CRIME(REPORT_CRIME(), 37, REPORT_CRIME(3));
						}
						if (!IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 1))
						{
							SET_BIT(&(Local_104[SET_BIT() /*10*/]), 2);
						}
						SET_BIT(&(Local_105.f_52), 6);
						SET_BIT(&(Local_104[SET_BIT() /*10*/]), 25);
					}
				}
			}
			if (!IS_BIT_SET(Local_105.f_52, 27) && !IS_BIT_SET(Local_105.f_52, 6))
			{
				if (IS_PED_IN_MELEE_COMBAT(IS_PED_IN_MELEE_COMBAT()))
				{
					if (func_18(&uLocal_137, 2000, 0) || _0xDCCA191DF9980FD7(_0xDCCA191DF9980FD7()))
					{
						REPORT_CRIME(REPORT_CRIME(), 37, REPORT_CRIME(1));
						SET_BIT(&(Local_105.f_52), 27);
						SET_BIT(&(Local_104[SET_BIT() /*10*/]), 27);
						SET_BIT(&(Local_104[SET_BIT() /*10*/]), 25);
						if (!IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 1))
						{
							SET_BIT(&(Local_104[SET_BIT() /*10*/]), 2);
						}
					}
				}
				else if (func_144(&uLocal_137))
				{
					func_14(&uLocal_137);
				}
			}
		}
		if (!IS_BIT_SET(Local_105.f_52, 24))
		{
			if (IS_BIT_SET(Local_105.f_52, 31))
			{
				if (func_395(Local_103))
				{
					if (func_146())
					{
						if (func_145() < 3)
						{
							REPORT_CRIME(REPORT_CRIME(), 37, REPORT_CRIME(func_145()));
						}
						else
						{
							REPORT_CRIME(REPORT_CRIME(), 37, REPORT_CRIME(3));
						}
					}
					else
					{
						REPORT_CRIME(REPORT_CRIME(), 13, REPORT_CRIME(3));
					}
					SET_BIT(&(Local_105.f_52), 24);
					if (!IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 1))
					{
						SET_BIT(&(Local_104[SET_BIT() /*10*/]), 2);
					}
				}
			}
		}
	}
}

bool func_144(var uParam0)
{
	return uParam0->f_1;
}

int func_145()
{
	return Global_262145.f_12597;
}

int func_146()
{
	if (func_141(PLAYER_ID()) && func_97(PLAYER_ID()) == 154)
	{
		return 1;
	}
	return 0;
}

void func_147()
{
	int iVar0;
	int iVar1;
	
	if (func_46(PLAYER_ID(), 1, 1))
	{
		if (!IS_BIT_SET(Local_105.f_52, 23) && IS_BIT_SET(Local_103.f_23, 17))
		{
			if (!func_395(Local_103))
			{
				iLocal_114 = NETWORK_STOP_SYNCHRONISED_SCENE(Local_103.f_29);
				if (iLocal_114 != -1)
				{
					if (IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_114))
					{
						if ((!IS_BIT_SET(Global_1653897, 15) && func_152()) && func_151())
						{
							SET_BIT(&Global_1653897, 15);
						}
						if (!IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							iVar0 = func_128(1190, -1, 0);
							if (!IS_BIT_SET(iVar0, 3))
							{
								if (GET_SYNCHRONIZED_SCENE_PHASE(iLocal_114) < 0.4f && GET_SYNCHRONIZED_SCENE_PHASE(GET_SYNCHRONIZED_SCENE_PHASE()) == iLocal_139)
								{
									func_150("FHU_HELP3", -1);
									SET_BIT(&iVar0, 3);
									func_125(1190, iVar0, -1, 1, 0);
								}
							}
							else if (!IS_BIT_SET(iVar0, 5) || !IS_BIT_SET(iVar0, 6))
							{
								if (GET_SYNCHRONIZED_SCENE_PHASE(iLocal_114) < 0.7f && GET_SYNCHRONIZED_SCENE_PHASE(GET_SYNCHRONIZED_SCENE_PHASE()) == iLocal_139)
								{
									func_150("FHU_HELP4", -1);
									SET_BIT(&iVar0, 5);
									func_125(1190, iVar0, -1, 1, 0);
									SET_BIT(&(Local_105.f_52), 23);
								}
							}
							else
							{
								SET_BIT(&(Local_105.f_52), 23);
							}
						}
					}
				}
			}
		}
		if (((((((((!func_39(PLAYER_ID(), 146) && !func_149()) && func_97(PLAYER_ID()) != 167) && func_97(PLAYER_ID()) != 190) && func_97(PLAYER_ID()) != 191) && func_97(PLAYER_ID()) != 250) && func_97(PLAYER_ID()) != 237) && func_97(PLAYER_ID()) != 238) && !func_38(PLAYER_ID())) && (!func_140(PLAYER_ID()) || func_97(PLAYER_ID()) == 154))
		{
			if (!IS_BIT_SET(Local_105.f_53, 1))
			{
				if (!IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (((((func_395(Local_103) || Local_103.f_3 > 7) && !IS_BIT_SET(Local_103.f_23, 20)) && !IS_BIT_SET(Local_103.f_23, 11)) && !IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 5)) && IS_BIT_SET(vLocal_115, 1.5f) == 0)
					{
						iVar1 = func_128(1190, -1, 0);
						if (!IS_BIT_SET(iVar1, 20) || !IS_BIT_SET(iVar1, 21))
						{
							func_150("FHU_HELPM", -1);
							if (!IS_BIT_SET(iVar1, 20))
							{
								SET_BIT(&iVar1, 20);
							}
							else
							{
								SET_BIT(&iVar1, 21);
							}
							func_125(1190, iVar1, -1, 1, 0);
							SET_BIT(&(Local_105.f_53), 1);
						}
						else
						{
							SET_BIT(&(Local_105.f_53), 1);
						}
					}
				}
			}
			else if (func_148("FHU_HELPM"))
			{
				if ((IS_BIT_SET(Local_103.f_23, 20) || IS_BIT_SET(Local_103.f_23, 11)) || IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 5))
				{
					CLEAR_HELP(1);
				}
			}
		}
	}
}

int func_148(char* sParam0)
{
	BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_149()
{
	return Global_1573342;
}

void func_150(char* sParam0, int iParam1)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

bool func_151()
{
	return IS_BIT_SET(Global_2531497.f_1732, 21);
}

bool func_152()
{
	return IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_146, 3);
}

void func_153()
{
	float fVar0;
	float fVar1;
	
	if (Local_103.f_3 == 4)
	{
		if (func_46(PLAYER_ID(), 1, 1))
		{
			if (!func_395(Local_103))
			{
				iLocal_114 = NETWORK_STOP_SYNCHRONISED_SCENE(Local_103.f_29);
				if (iLocal_114 != -1)
				{
					if (IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_114))
					{
						fVar0 = GET_SYNCHRONIZED_SCENE_PHASE(iLocal_114);
						fVar0 = (fVar0 * 1000f);
						if (fVar0 <= 890f)
						{
							func_154(round(fVar0), 890, "HUP_PROG", func_158(GET_PLAYER_TEAM(GET_PLAYER_TEAM())), 0, 1, 13);
						}
						fVar1 = NETWORK_GET_PLAYER_LOUDNESS(NETWORK_GET_PLAYER_LOUDNESS());
						fVar1 = (fVar1 - 0.3f);
						if (fVar1 < 0f)
						{
							fVar1 = 0f;
						}
						fVar1 = (fVar1 * 4f);
						Local_104[PARTICIPANT_ID_TO_INT() /*10*/].f_6 = fVar1;
					}
				}
			}
		}
	}
}

void func_154(int iParam0, int iParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	func_155(iParam0, iParam1, sParam2, uParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1);
}

void func_155(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_157(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1375006.f_1 = 1;
		func_156(0, iVar0);
		Global_1375006.f_1114[iVar0] = uParam0;
		Global_1375006.f_1114.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1375006.f_1114.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1375006.f_1114.f_194[iVar0] = uParam3;
		Global_1375006.f_1114.f_183[iVar0] = uParam4;
		Global_1375006.f_1114.f_216[iVar0] = uParam5;
		Global_1375006.f_1114.f_227[iVar0 /*3*/] = fParam6;
		Global_1375006.f_1114.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1375006.f_1114.f_258[iVar0] = iParam8;
		Global_1375006.f_1114.f_269[iVar0] = uParam9;
		Global_1375006.f_1114.f_312[iVar0] = iParam10;
		Global_1375006.f_1114.f_323[iVar0] = iParam11;
		Global_1375006.f_1114.f_334[iVar0] = iParam12;
		Global_1375006.f_1114.f_345[iVar0] = iParam13;
		Global_1375006.f_1109 = 1;
		Global_1375006.f_1114.f_356[iVar0] = iParam14;
		Global_1375006.f_1114.f_367[iVar0] = iParam15;
		Global_1375006.f_1114.f_378[iVar0] = iParam16;
		Global_1375006.f_1114.f_389[iVar0] = iParam17;
		Global_1375006.f_1114.f_400[iVar0] = iParam18;
		Global_1375006.f_1114.f_411[iVar0] = iParam19;
		Global_1375006.f_1114.f_422[iVar0] = iParam20;
		Global_1375006.f_1114.f_433[iVar0] = iParam21;
		Global_1375006.f_1114.f_444[iVar0] = iParam22;
		Global_1375006.f_1114.f_455[iVar0] = iParam23;
		Global_1375006.f_1114.f_466[iVar0] = iParam24;
		Global_1375006.f_1114.f_205[iVar0] = iParam25;
	}
}

void func_156(int iParam0, int iParam1)
{
	SET_BIT(&(Global_1375006.f_6184[iParam0]), iParam1);
}

bool func_157(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_1375006.f_6184[iParam0], iParam1);
}

int func_158(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	return 116;
}

void func_159()
{
	if (!IS_BIT_SET(Local_105.f_53, 2))
	{
		REQUEST_ANIM_DICT("oddjobs@shop_robbery@rob_till");
		REQUEST_ANIM_DICT(func_160());
		if (HAS_ANIM_DICT_LOADED("oddjobs@shop_robbery@rob_till") && HAS_ANIM_DICT_LOADED(func_160()))
		{
			SET_BIT(&(Local_105.f_53), 2);
		}
	}
}

char* func_160()
{
	if (func_161(PLAYER_ID()))
	{
		return "anim@am_hold_up@male";
	}
	return "anim@am_hold_up@female";
}

int func_161(int iParam0)
{
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	return Global_2424073[iParam0 /*421*/].f_230;
}

int func_162(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { 0f, 0f, 0f };
	vVar1 = { 0f, 0f, 0f };
	fVar2 = 0f;
	func_163(iParam1, &vVar0, &vVar1, &fVar2);
	if (IS_ENTITY_IN_ANGLED_AREA(iParam0, vVar0, vVar1, fVar2, 0, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_163(int iParam0, var uParam1, var uParam2, float fParam3)
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1390.033f, 3605.529f, 33.98091f };
		*uParam2 = { 1394.412f, 3607.156f, 36.38288f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 1)
	{
		*uParam1 = { -3041.675f, 583.5931f, 6.908931f };
		*uParam2 = { -3037.284f, 585.0375f, 9.521532f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 2)
	{
		*uParam1 = { -3245.184f, 1000.124f, 11.83071f };
		*uParam2 = { -3240.504f, 999.7783f, 14.46645f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 3)
	{
		*uParam1 = { 549.5332f, 2668.464f, 41.15651f };
		*uParam2 = { 548.9114f, 2673.108f, 43.7766f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 4)
	{
		*uParam1 = { 2554.316f, 380.8569f, 107.623f };
		*uParam2 = { 2558.98f, 380.6908f, 110.2684f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 5)
	{
		*uParam1 = { 2675.476f, 3280.807f, 54.24115f };
		*uParam2 = { 2679.577f, 3278.526f, 56.8955f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 6)
	{
		*uParam1 = { 1729.145f, 6417.834f, 34.03724f };
		*uParam2 = { 1727.07f, 6413.635f, 36.66442f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 7)
	{
		*uParam1 = { 1958.61f, 3742.512f, 31.34376f };
		*uParam2 = { 1960.958f, 3738.465f, 33.98634f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 8)
	{
		*uParam1 = { 24.51093f, -1344.449f, 28.49703f };
		*uParam2 = { 24.52224f, -1349.084f, 31.14272f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 9)
	{
		*uParam1 = { 373.296f, 329.2379f, 102.5664f };
		*uParam2 = { 372.1347f, 324.6985f, 105.214f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 10)
	{
		*uParam1 = { 1168.183f, 2711.203f, 37.06316f };
		*uParam2 = { 1163.144f, 2711.246f, 40.16688f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 11)
	{
		*uParam1 = { -2966.142f, 388.6418f, 14.04331f };
		*uParam2 = { -2965.812f, 393.6473f, 17.17248f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 12)
	{
		*uParam1 = { -1223.599f, -909.8984f, 11.32635f };
		*uParam2 = { -1219.443f, -907.0756f, 14.45929f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 13)
	{
		*uParam1 = { 1133.524f, -980.3087f, 45.41582f };
		*uParam2 = { 1134.22f, -985.284f, 48.53235f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 14)
	{
		*uParam1 = { -1484.413f, -379.3236f, 39.16341f };
		*uParam2 = { -1487.954f, -375.7666f, 42.28885f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 15)
	{
		*uParam1 = { 1699.447f, 4921.57f, 41.06366f };
		*uParam2 = { 1695.64f, 4924.245f, 44.22165f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 16)
	{
		*uParam1 = { -705.7869f, -911.6997f, 18.2156f };
		*uParam2 = { -705.7026f, -916.374f, 21.33545f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 17)
	{
		*uParam1 = { -45.26995f, -1756.669f, 28.42101f };
		*uParam2 = { -48.26036f, -1760.285f, 31.56342f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 18)
	{
		*uParam1 = { 1164.697f, -320.7587f, 68.2051f };
		*uParam2 = { 1165.463f, -325.0899f, 71.37893f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 19)
	{
		*uParam1 = { -1821.205f, 795.8699f, 137.0893f };
		*uParam2 = { -1818.041f, 792.3982f, 140.1836f };
		*fParam3 = 2.25f;
	}
}

void func_164(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_166(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22350.f_8385)
	{
		RESET_HUD_COMPONENT_VALUES(15);
		Global_22350.f_8385 = 0;
	}
	_CLEAR_NOTIFICATIONS_POS(0f);
	if (Global_22350.f_5628[iVar0])
	{
		CLEAR_ADDITIONAL_TEXT(9, false);
		Global_22350.f_5628[iVar0] = 0;
	}
	if (Global_22350.f_5614[iVar0])
	{
		SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_22350.f_5614[iVar0] = 0;
	}
	if (Global_22350.f_5621[iVar0])
	{
		SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_22350.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_165(&(Global_22350.f_5660[iVar0 /*10*/]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_165(int iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_166(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (NETWORK_IS_GAME_IN_PROGRESS() && NETWORK_IS_GAME_IN_PROGRESS())
		{
			iParam2 = _NETWORK_GET_PLAYER_PED_FROM_INDEX();
		}
	}
	StringCopy(&cVar0, GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = GET_HASH_KEY(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_22350.f_5721[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_22350.f_5721[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_22350.f_5721[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

bool func_167(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_166(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_22350.f_5635[iVar0 /*4*/]), sParam0, 16);
	if (!IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_5635[iVar0 /*4*/])))
	{
		REQUEST_ADDITIONAL_TEXT(&(Global_22350.f_5635[iVar0 /*4*/]), 9);
		Global_22350.f_5628[iVar0] = 1;
		if (!HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_22350.f_5635[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	Global_22350.f_5614[iVar0] = 1;
	if (!HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_22350.f_5621[iVar0] = 1;
		if (!HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22350.f_5660[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_168(&(Global_22350.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_168(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = 0x67D02A194A2FC2BD(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

int func_169()
{
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_170(int iParam0)
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

void func_171()
{
	if (PLAYER_ID() != Global_2531497.f_4823 && !func_38(PLAYER_ID()))
	{
		if (!IS_BIT_SET(Local_105.f_52, 24))
		{
			if (Local_103.f_72 == PLAYER_ID() || (PLAYER_ID(Local_105.f_52, 31) && PLAYER_ID(PLAYER_ID(), vLocal_145, 20f, 20f, 20f, false, true, 0)))
			{
				if (func_395(Local_103))
				{
					if (func_146())
					{
						if (func_145() < 3)
						{
							REPORT_CRIME(REPORT_CRIME(), 37, REPORT_CRIME(func_145()));
						}
						else
						{
							REPORT_CRIME(REPORT_CRIME(), 37, REPORT_CRIME(3));
						}
					}
					else
					{
						REPORT_CRIME(REPORT_CRIME(), 13, REPORT_CRIME(3));
					}
					SET_BIT(&(Local_105.f_52), 24);
					if (!IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 1))
					{
						SET_BIT(&(Local_104[SET_BIT() /*10*/]), 2);
					}
				}
			}
		}
	}
}

int func_172()
{
	if (!IS_BIT_SET(Local_103.f_25, 0))
	{
		return 0;
	}
	if (func_395(Local_103.f_15))
	{
		if (DOES_BLIP_EXIST(iLocal_333))
		{
			REMOVE_BLIP(&iLocal_333);
		}
		return 0;
	}
	if (Local_103.f_66 == 4)
	{
		if (!DOES_BLIP_EXIST(iLocal_333))
		{
			iLocal_333 = ADD_BLIP_FOR_ENTITY(ADD_BLIP_FOR_ENTITY(Local_103.f_15));
			SET_BLIP_COLOUR(iLocal_333, 1);
			SET_BLIP_SCALE(iLocal_333, 0.7f);
		}
	}
	if (!NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103.f_15))
	{
		return 0;
	}
	switch (Local_103.f_66)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (GET_SCRIPT_TASK_STATUS(GET_SCRIPT_TASK_STATUS(Local_103.f_15), 713668775) != 0)
			{
				if (GET_SCRIPT_TASK_STATUS(GET_SCRIPT_TASK_STATUS(Local_103.f_15), 713668775) != 1)
				{
					if (func_46(PLAYER_ID(), 1, 1))
					{
						TASK_GO_TO_ENTITY(TASK_GO_TO_ENTITY(Local_103.f_15), TASK_GO_TO_ENTITY(), -1, 4f, 2f, 1073741824, 0);
					}
				}
			}
			break;
		
		case 3:
			if (!IS_BIT_SET(Local_103.f_25, 5) && !IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/].f_5, 0))
			{
				if (GET_SCRIPT_TASK_STATUS(GET_SCRIPT_TASK_STATUS(Local_103.f_15), 1227113341) != 0 && GET_SCRIPT_TASK_STATUS(GET_SCRIPT_TASK_STATUS(Local_103.f_15), 1227113341) != 1)
				{
					TASK_TURN_PED_TO_FACE_ENTITY(TASK_TURN_PED_TO_FACE_ENTITY(Local_103.f_15), TASK_TURN_PED_TO_FACE_ENTITY(), 10000);
					SET_BIT(&(Local_104[SET_BIT() /*10*/].f_5), 0);
				}
			}
			if ((!IS_BIT_SET(Local_103.f_25, 6) && !IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/].f_5, 1)) && !func_173())
			{
				func_394(&uLocal_151, 4, NET_TO_PED(Local_103.f_15), "StoreHero", 1, 0);
				_PLAY_AMBIENT_SPEECH1(_PLAY_AMBIENT_SPEECH1(Local_103.f_15), "GENERIC_INSULT_HIGH", "SPEECH_PARAMS_FORCE", 1);
				SET_BIT(&(Local_104[SET_BIT() /*10*/].f_5), 1);
			}
			break;
		
		case 4:
			if ((!IS_BIT_SET(Local_103.f_25, 7) && !IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/].f_5, 2)) && !func_173())
			{
				func_394(&uLocal_151, 4, NET_TO_PED(Local_103.f_15), "StoreHero", 1, 0);
				_PLAY_AMBIENT_SPEECH1(_PLAY_AMBIENT_SPEECH1(Local_103.f_15), "GENERIC_FUCK_YOU", "SPEECH_PARAMS_FORCE", 1);
				SET_BIT(&(Local_104[SET_BIT() /*10*/].f_5), 2);
			}
			if (IS_BIT_SET(Local_103.f_25, 7) || IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/].f_5, 2))
			{
				if (GET_SCRIPT_TASK_STATUS(GET_SCRIPT_TASK_STATUS(Local_103.f_15), -1442466670) != 0 && GET_SCRIPT_TASK_STATUS(GET_SCRIPT_TASK_STATUS(Local_103.f_15), -1442466670) != 1)
				{
					CLEAR_PED_TASKS(CLEAR_PED_TASKS(Local_103.f_15));
					SET_PED_RELATIONSHIP_GROUP_HASH(SET_PED_RELATIONSHIP_GROUP_HASH(Local_103.f_15), Global_1575003);
					TASK_COMBAT_HATED_TARGETS_AROUND_PED(TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_103.f_15), 20f, 0);
					SET_PED_KEEP_TASK(SET_PED_KEEP_TASK(Local_103.f_15), true);
				}
			}
			break;
		
		case 5:
			if (GET_SCRIPT_TASK_STATUS(GET_SCRIPT_TASK_STATUS(Local_103.f_15), 242628503) != 0 && GET_SCRIPT_TASK_STATUS(GET_SCRIPT_TASK_STATUS(Local_103.f_15), 242628503) != 1)
			{
				CLEAR_PED_TASKS(CLEAR_PED_TASKS(Local_103.f_15));
				TASK_PERFORM_SEQUENCE(TASK_PERFORM_SEQUENCE(Local_103.f_15), iLocal_119);
				SET_PED_KEEP_TASK(SET_PED_KEEP_TASK(Local_103.f_15), true);
			}
			else if (GET_SCRIPT_TASK_STATUS(GET_SCRIPT_TASK_STATUS(Local_103.f_15), -875674219) != 1 && GET_SCRIPT_TASK_STATUS(GET_SCRIPT_TASK_STATUS(Local_103.f_15), -875674219) != 0)
			{
				if (func_18(&uLocal_135, 5000, 0))
				{
					func_14(&uLocal_135);
					TASK_TURN_PED_TO_FACE_ENTITY(TASK_TURN_PED_TO_FACE_ENTITY(Local_103.f_15), TASK_TURN_PED_TO_FACE_ENTITY(), 10000);
				}
			}
			break;
	}
	return 1;
}

int func_173()
{
	if (Global_20805 != 0 || IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_174()
{
	if (Local_103.f_3 == 4)
	{
		if ((!IS_BIT_SET(Local_103.f_23, 10) && !IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 4)) && IS_BIT_SET(Local_103.f_23, 17))
		{
			if (NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_13))
			{
				if (NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103.f_13) || (!NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103.f_13) && NETWORK_HAS_CONTROL_OF_NETWORK_ID()))
				{
					if (!func_395(Local_103))
					{
						if (IS_PED_RAGDOLL(IS_PED_RAGDOLL(Local_103)))
						{
							SET_ENTITY_COLLISION(SET_ENTITY_COLLISION(Local_103.f_13), true, 0);
							SET_ENTITY_DYNAMIC(SET_ENTITY_DYNAMIC(Local_103.f_13), 1);
							SET_ENTITY_VELOCITY(SET_ENTITY_VELOCITY(Local_103.f_13), 0f, 0f, -1f);
							_SET_PED_RAGDOLL_BLOCKING_FLAGS(_SET_PED_RAGDOLL_BLOCKING_FLAGS(Local_103), 16);
							SET_BIT(&(Local_104[SET_BIT() /*10*/]), 4);
						}
					}
					else
					{
						SET_ENTITY_COLLISION(SET_ENTITY_COLLISION(Local_103.f_13), true, 0);
						SET_ENTITY_DYNAMIC(SET_ENTITY_DYNAMIC(Local_103.f_13), 1);
						SET_ENTITY_VELOCITY(SET_ENTITY_VELOCITY(Local_103.f_13), 0f, 0f, -1f);
						SET_BIT(&(Local_104[SET_BIT() /*10*/]), 4);
					}
				}
			}
		}
	}
	func_175();
}

void func_175()
{
	int iVar0;
	var uVar1;
	
	if (NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_13))
	{
		if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(Local_103.f_13), 0))
		{
			if ((!IS_BIT_SET(Local_103.f_23, 11) && !IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 5)) && Local_103.f_37 > 0f)
			{
				if (((func_222() || func_221(0.87f)) || Local_103.f_3 >= 5) || IS_BIT_SET(Local_103.f_23, 10))
				{
					if (!IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 11))
					{
						if (NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103.f_13))
						{
							_0x92AEFB5F6E294023(_0x92AEFB5F6E294023(Local_103.f_13), false, 0);
							SET_BIT(&(Local_104[SET_BIT() /*10*/]), 13);
						}
						if (func_97(PLAYER_ID()) != 155)
						{
							_0x0BF3B3BD47D79C08(func_52(1), 1);
						}
						SET_BIT(&(Local_104[SET_BIT() /*10*/]), 11);
					}
					if (IS_ENTITY_ATTACHED_TO_ENTITY(IS_ENTITY_ATTACHED_TO_ENTITY(Local_103.f_13), IS_ENTITY_ATTACHED_TO_ENTITY()))
					{
						Local_104[PARTICIPANT_ID_TO_INT() /*10*/].f_7 = { PARTICIPANT_ID_TO_INT(PARTICIPANT_ID_TO_INT(), true) };
						GET_GROUND_Z_FOR_3D_COORD(Local_104[GET_GROUND_Z_FOR_3D_COORD() /*10*/].f_7, &(Local_104[GET_GROUND_Z_FOR_3D_COORD() /*10*/].f_7.f_2), 0, 0);
						if (NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103.f_13))
						{
							DETACH_ENTITY(DETACH_ENTITY(Local_103.f_13), 1, true);
							func_47(&(Local_103.f_13));
						}
						iVar0 = GET_RANDOM_INT_IN_RANGE(iLocal_132, iLocal_133);
						if (IS_BIT_SET(Local_103.f_23, 10))
						{
							iVar0 = floor((to_float(iVar0) * Local_103.f_37));
						}
						if (Local_103.f_4 > 1000)
						{
							Local_103.f_4 = 1000;
						}
						iVar0 = (iVar0 + Local_103.f_4);
						iVar0 = func_220(iVar0, 1);
						if (iVar0 > Global_262145.f_167)
						{
							iVar0 = Global_262145.f_167;
						}
						if (func_219(PLAYER_ID()) && func_217(func_218(PLAYER_ID())) < 1f)
						{
							if (Global_262145.f_4227 > 1f)
							{
								Global_262145.f_4227 = 1f;
							}
							iVar0 = round((to_float(iVar0) * Global_262145.f_4227));
						}
						if (iVar0 > 0)
						{
							if (func_216())
							{
								func_205(1734805203, iVar0, &uVar1, 0, 0, 0);
							}
							else
							{
								func_201(iVar0, 1, 1, 1092616192);
								NETWORK_EARN_FROM_HOLDUPS(iVar0);
							}
						}
						Global_2531497.f_5655 = (Global_2531497.f_5655 + iVar0);
						Global_2531497.f_5655.f_2 = 1;
						Global_2531497.f_5655.f_5 = 1;
						iLocal_335 = (iLocal_335 + iVar0);
						func_200(3);
						if (!IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 5))
						{
							func_199(Local_103.f_38, iVar0);
						}
						else
						{
							func_190(PLAYER_PED_ID(), iVar0);
						}
						func_189(1, iVar0);
						if (func_185(1))
						{
							func_176(4);
						}
						SET_BIT(&(Local_104[SET_BIT() /*10*/]), 5);
						SET_BIT(&(Local_105.f_53), 6);
					}
				}
			}
		}
	}
}

void func_176(int iParam0)
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
		0x501478855A6074CE(func_183(func_184()), func_181(func_184()), func_180(), func_179(), iParam0, iVar0);
	}
	func_178(iVar0);
	func_177(iVar0);
}

void func_177(int iParam0)
{
	int iVar0;
	
	iVar0 = func_128(3968, -1, 0);
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
	func_125(3968, iVar0, -1, 1, 0);
}

void func_178(int iParam0)
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

int func_179()
{
	if (Global_1674861.f_3 != 0)
	{
		return Global_1674861.f_3;
	}
	return -1;
}

int func_180()
{
	if (Global_1674861.f_2 != 0)
	{
		return Global_1674861.f_2;
	}
	return -1;
}

int func_181(int iParam0)
{
	if (iParam0 == func_182())
	{
		return -1;
	}
	return Global_1628955[iParam0 /*614*/].f_11.f_8[1];
}

int func_182()
{
	return -1;
}

int func_183(int iParam0)
{
	if (iParam0 == func_182())
	{
		return -1;
	}
	return Global_1628955[iParam0 /*614*/].f_11.f_8[0];
}

int func_184()
{
	return Global_1628955[PLAYER_ID() /*614*/].f_11;
}

bool func_185(bool bParam0)
{
	return func_186(PLAYER_ID(), bParam0);
}

int func_186(int iParam0, bool bParam1)
{
	return func_187(iParam0, bParam1, 1);
}

int func_187(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_182())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_188(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628955[iParam0 /*614*/].f_11;
	if (iVar0 != func_182() && Global_1628955[iVar0 /*614*/].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_188(int iParam0, int iParam1)
{
	if (iParam0 != func_182())
	{
		if (Global_1628955[iParam0 /*614*/].f_11 != func_182())
		{
			if (Global_1628955[iParam0 /*614*/].f_11 == iParam0 && Global_1628955[iParam0 /*614*/].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_189(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23477 == 0 || Global_262145.f_23477 == 1)
		{
			if (!IS_PC_VERSION() || Global_262145.f_23477 == 1)
			{
				Global_2531497.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6584)
				{
					iParam1 = Global_262145.f_6584;
				}
				Global_2531497.f_284 = iParam1;
				Global_2531497.f_285 = 0;
			}
		}
	}
}

void func_190(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0 = { func_197(PLAYER_PED_ID(), 1) };
	if (iParam0 == func_196(PLAYER_PED_ID()))
	{
		func_195(1);
	}
	func_191(vVar0, iParam1, 7, 0, 0);
}

void func_191(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2437549.f_1289[iVar0 /*30*/].f_6 == 0 || Global_2437549.f_1289[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2437549.f_1289[iVar1 /*30*/] = { vParam0 };
			Global_2437549.f_1289[iVar1 /*30*/].f_6 = 1;
			Global_2437549.f_1289[iVar1 /*30*/].f_4 = func_194(Global_2437549.f_1289[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2437549.f_1289[iVar1 /*30*/].f_7 = 0xBA7F0B77D80A4EB7();
			Global_2437549.f_1289[iVar1 /*30*/].f_3 = iParam1;
			Global_2437549.f_1289[iVar1 /*30*/].f_8 = iParam2;
			Global_2437549.f_1289[iVar1 /*30*/].f_9 = func_193();
			Global_2437549.f_1289[iVar1 /*30*/].f_10 = func_192();
			StringCopy(&(Global_2437549.f_1289[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2437549.f_1289[iVar1 /*30*/].f_26 = HAS_NETWORK_TIME_STARTED(HAS_NETWORK_TIME_STARTED(), iParam4);
		}
	}
}

int func_192()
{
	if (Global_2437549.f_1890)
	{
		Global_2437549.f_1890 = 0;
		return 1;
	}
	Global_2437549.f_1890 = 0;
	return 0;
}

var func_193()
{
	var uVar0;
	
	uVar0 = Global_2437549.f_1892;
	Global_2437549.f_1892 = 1;
	return uVar0;
}

float func_194(vector3 vParam0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = GET_DISTANCE_BETWEEN_COORDS(GET_DISTANCE_BETWEEN_COORDS(), vParam0, true);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

void func_195(int iParam0)
{
	Global_2437549.f_1890 = iParam0;
}

int func_196(int iParam0)
{
	return iParam0;
}

Vector3 func_197(int iParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (IS_GAMEPLAY_CAM_RENDERING())
	{
		vVar1 = { GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_198(PLAYER_PED_ID()) && PLAYER_PED_ID(PLAYER_PED_ID()) == 4)
	{
		vVar0 = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { GET_ENTITY_COORDS(iParam0, false) };
	}
	fVar2 = 0f;
	if (!IS_ENTITY_DEAD(iParam0, 0))
	{
		fVar2 = GET_ENTITY_HEADING(iParam0);
		if (_0xEE778F8C7E1142E2(_0xEE778F8C7E1142E2()) == 4)
		{
			fVar2 = vVar1.z;
		}
	}
	GET_MODEL_DIMENSIONS(GET_MODEL_DIMENSIONS(iParam0), &vVar3, &vVar4);
	if (bParam1)
	{
		fVar5 = (vVar4.z + 0.18f);
	}
	else
	{
		fVar5 = (vVar3.z + 0.18f);
	}
	vVar0 = { _GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar2, 0f, 0f, fVar5) };
	return vVar0;
}

int func_198(int iParam0)
{
	return iParam0;
}

void func_199(vector3 vParam0, int iParam1)
{
	func_191(vParam0, iParam1, 6, 0, 0);
}

void func_200(int iParam0)
{
	Global_2437549.f_1892 = iParam0;
}

void func_201(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_202(iParam0, iParam1, iParam2, fParam3);
}

void func_202(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_203(iParam0, iParam1, iParam2, fParam3);
}

void func_203(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = floor((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1590446[PLAYER_ID() /*871*/].f_211.f_4 = iVar1;
	Global_1590446[PLAYER_ID() /*871*/].f_211.f_3 = (Global_1590446[PLAYER_ID() /*871*/].f_211.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_204(iVar1, 0);
	}
}

void func_204(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_205(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_216())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_27520)
			{
				func_206(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_206(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
			if (iParam1 > 0 || Global_262145.f_27520)
			{
				func_206(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
			func_206(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_206(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_216())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!_NETWORK_SHOP_GET_TRANSACTIONS_ENABLED_FOR_CHARACTER(func_79()) || _NETWORK_SHOP_GET_TRANSACTIONS_ENABLED_FOR_CHARACTER())
		{
			Global_4264386 = 1;
			return 0;
		}
		if (Global_2460158)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4264387 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4263810[iVar2 /*84*/].f_65.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || _NETWORK_SHOP_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || _NETWORK_SHOP_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_213(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4263810[*uParam0 /*84*/].f_65.f_8 = 1;
					Global_4263810[*uParam0 /*84*/].f_65.f_12 = 1;
				}
			}
			Global_4264371 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4264385 = 1;
			Global_4264388 = iParam4;
			Global_4264390 = iParam3;
			Global_4264391 = 1;
			Global_4264389 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4264388 = iParam4;
			Global_4264390 = iParam3;
			Global_4264391 = 1;
			Global_4264389 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_212(1, iParam4);
			Global_4264385 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_207(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_207(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			SET_BIT(&(Global_2424073[SET_BIT() /*421*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_208(iParam0);
	}
}

void func_208(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_216())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_211(iParam0))
		{
			if (!bVar0)
			{
				0xFA336E7F40C0A0D0();
			}
		}
		else if (!bVar0)
		{
			_NETWORK_SHOP_TERMINATE_SERVICE(Global_4263810[iParam0 /*84*/].f_65);
		}
		func_209(&(Global_4263810[iParam0 /*84*/]));
	}
}

void func_209(var uParam0)
{
	uParam0->f_65 = 0;
	uParam0->f_65 = 2147483647;
	uParam0->f_65.f_1 = 0;
	uParam0->f_65.f_2 = 0;
	uParam0->f_65.f_3 = -1593119440;
	uParam0->f_65.f_4 = -2085313189;
	uParam0->f_65.f_5 = 0;
	uParam0->f_65.f_6 = 1227573907;
	uParam0->f_65.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_210(&(uParam0->f_13));
	func_210(&(uParam0->f_13.f_13));
	StringCopy(&(uParam0->f_13.f_26), "", 32);
	StringCopy(&(uParam0->f_13.f_34), "", 24);
	StringCopy(&(uParam0->f_13.f_40), "", 16);
	StringCopy(&(uParam0->f_13.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_65.f_8 = 0;
	uParam0->f_65.f_9 = 0;
	uParam0->f_65.f_10 = 0;
	uParam0->f_65.f_11 = 0;
	uParam0->f_65.f_13 = 0;
	uParam0->f_65.f_12 = 0;
	uParam0->f_65.f_14 = 0;
	uParam0->f_65.f_15 = 0;
	uParam0->f_65.f_16 = 0;
	uParam0->f_65.f_18 = 0;
}

void func_210(var uParam0)
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

int func_211(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263810[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

void func_212(int iParam0, int iParam1)
{
	Global_2461338 = iParam1;
	Global_2461337 = iParam0;
}

int func_213(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263810[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_216())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263810[iVar0 /*84*/].f_65.f_2 = 1;
			Global_4263810[iVar0 /*84*/].f_65.f_1 = iParam5;
			Global_4263810[iVar0 /*84*/].f_65.f_3 = iParam1;
			Global_4263810[iVar0 /*84*/].f_65.f_4 = iParam2;
			Global_4263810[iVar0 /*84*/].f_65.f_7 = iParam3;
			Global_4263810[iVar0 /*84*/].f_65.f_5 = 0;
			Global_4263810[iVar0 /*84*/].f_65 = iParam0;
			Global_4263810[iVar0 /*84*/].f_65.f_6 = iParam4;
			Global_4263810[iVar0 /*84*/].f_65.f_11 = uParam8;
			Global_4263810[iVar0 /*84*/].f_65.f_10 = iParam7;
			Global_4263810[iVar0 /*84*/].f_65.f_13 = iParam9;
			Global_4263810[iVar0 /*84*/].f_65.f_12 = 0;
			Global_4263810[iVar0 /*84*/].f_65.f_14 = GET_FRAME_COUNT();
			Global_4263810[iVar0 /*84*/].f_65.f_18 = 0;
			Global_4264371 = 0;
			if (bParam6)
			{
				Global_4263810[iVar0 /*84*/].f_65.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_214(Global_4263810[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_214(struct<66> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	vector3 vVar0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = -1969967074;
	vVar0.y = PLAYER_ID();
	vVar0.f_2 = { Param0.f_65 };
	vVar0.f_2.f_32 = iParam19;
	iVar1 = func_8(vVar0.y);
	if ((Global_262145.f_23556 && !Global_262145.f_23557) && !Global_262145.f_23558)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_215();
		TRIGGER_SCRIPT_EVENT(1, &vVar0, 35, iVar1);
	}
}

void func_215()
{
	REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_216()
{
	if (IS_PC_VERSION())
	{
		return 0x7D2708796355B20B();
	}
	return 0;
}

float func_217(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_218(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628955[iVar0 /*614*/];
	}
	return -1;
}

int func_219(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628955[iVar0 /*614*/] != -1;
	}
	return 0;
}

int func_220(int iParam0, int iParam1)
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (to_float(iParam0) * Global_262145);
				iParam0 = round(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

int func_221(float fParam0)
{
	iLocal_114 = NETWORK_STOP_SYNCHRONISED_SCENE(Local_103.f_29);
	if (iLocal_114 != -1)
	{
		if (IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_114))
		{
			if (GET_SYNCHRONIZED_SCENE_PHASE(iLocal_114) >= fParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_222()
{
	iLocal_114 = NETWORK_STOP_SYNCHRONISED_SCENE(Local_103.f_29);
	if (iLocal_114 != -1)
	{
		if (IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_114))
		{
			if (GET_SYNCHRONIZED_SCENE_PHASE(iLocal_114) >= 1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_223()
{
	func_224();
}

int func_224()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103))
	{
		return 0;
	}
	if (func_395(Local_103))
	{
		if (!IS_BIT_SET(Local_105.f_53, 3))
		{
			CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Local_103));
			SET_BIT(&(Local_105.f_53), 3);
		}
		return 0;
	}
	switch (Local_103.f_3)
	{
		case 0:
			SET_PED_RESET_FLAG(SET_PED_RESET_FLAG(Local_103), 71, true);
			break;
		
		case 1:
			if (!IS_BIT_SET(Local_103.f_23, 4) && !IS_BIT_SET(Local_103.f_23, 12))
			{
				if (IS_BIT_SET(Local_103.f_23, 13))
				{
					if (!IS_BIT_SET(Local_105.f_52, 17))
					{
						_SET_PED_RAGDOLL_BLOCKING_FLAGS(_SET_PED_RAGDOLL_BLOCKING_FLAGS(Local_103), 16);
						TASK_LOOK_AT_ENTITY(TASK_LOOK_AT_ENTITY(Local_103), TASK_LOOK_AT_ENTITY(), -1, 0, 2);
						if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
						{
							func_230(10);
						}
						else if (IS_BIT_SET(Local_103.f_24, 0))
						{
							if (!IS_BIT_SET(Local_103.f_24, 11))
							{
								if (!IS_BIT_SET(Local_103.f_24, 12))
								{
									func_230(13);
								}
								else
								{
									func_230(20);
								}
							}
							else
							{
								func_230(17);
							}
							SET_BIT(&(Local_104[SET_BIT() /*10*/]), 25);
						}
						else if (!IS_BIT_SET(Local_103.f_24, 11))
						{
							if (!IS_BIT_SET(Local_103.f_24, 12))
							{
								func_230(0);
							}
							else
							{
								func_230(18);
							}
						}
						else
						{
							func_230(15);
						}
						SET_BIT(&(Local_105.f_52), 17);
					}
					else if (GET_SCRIPT_TASK_STATUS(GET_SCRIPT_TASK_STATUS(Local_103), -875674219) != 1 && GET_SCRIPT_TASK_STATUS(GET_SCRIPT_TASK_STATUS(Local_103), -875674219) != 0)
					{
						if (func_18(&uLocal_135, 5000, 0))
						{
							func_14(&uLocal_135);
							if (!iLocal_108)
							{
								TASK_TURN_PED_TO_FACE_ENTITY(TASK_TURN_PED_TO_FACE_ENTITY(Local_103), TASK_TURN_PED_TO_FACE_ENTITY(), 10000);
							}
							TASK_LOOK_AT_ENTITY(TASK_LOOK_AT_ENTITY(Local_103), TASK_LOOK_AT_ENTITY(), -1, 0, 2);
						}
					}
				}
			}
			SET_PED_RESET_FLAG(SET_PED_RESET_FLAG(Local_103), 71, true);
			break;
		
		case 2:
			if (!IS_BIT_SET(Local_103.f_23, 7) && !IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 0))
			{
				iVar1 = PLAYER_PED_ID();
				if (Local_103.f_32 > -1)
				{
					if (NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(Local_103.f_32)))
					{
						iVar0 = NETWORK_GET_PLAYER_INDEX(NETWORK_GET_PLAYER_INDEX(Local_103.f_32));
						iVar1 = GET_PLAYER_PED(iVar0);
					}
				}
				if (!IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
				{
					TASK_LOOK_AT_ENTITY(TASK_LOOK_AT_ENTITY(Local_103), iVar1, -1, 0, 2);
					_SET_PED_RAGDOLL_BLOCKING_FLAGS(_SET_PED_RAGDOLL_BLOCKING_FLAGS(Local_103), 16);
					TASK_PLAY_ANIM(TASK_PLAY_ANIM(Local_103), "mp_am_hold_up", "WARY_LOOP", 4f, -4f, -1, 49, 0, 0, 0, 0);
					SET_BIT(&(Local_104[SET_BIT() /*10*/]), 0);
				}
			}
			else if (GET_SCRIPT_TASK_STATUS(GET_SCRIPT_TASK_STATUS(Local_103), -875674219) != 1 && GET_SCRIPT_TASK_STATUS(GET_SCRIPT_TASK_STATUS(Local_103), -875674219) != 0)
			{
				if (func_18(&uLocal_135, 5000, 0))
				{
					iVar1 = PLAYER_PED_ID();
					if (Local_103.f_32 > -1)
					{
						if (NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(Local_103.f_32)))
						{
							iVar0 = NETWORK_GET_PLAYER_INDEX(NETWORK_GET_PLAYER_INDEX(Local_103.f_32));
							iVar1 = GET_PLAYER_PED(iVar0);
						}
					}
					func_14(&uLocal_135);
					TASK_TURN_PED_TO_FACE_ENTITY(TASK_TURN_PED_TO_FACE_ENTITY(Local_103), iVar1, 10000);
					TASK_LOOK_AT_ENTITY(TASK_LOOK_AT_ENTITY(Local_103), iVar1, -1, 0, 2);
				}
			}
			if (IS_BIT_SET(Local_103.f_23, 16))
			{
				_SET_PED_RAGDOLL_BLOCKING_FLAGS(_SET_PED_RAGDOLL_BLOCKING_FLAGS(Local_103), 16);
			}
			SET_PED_RESET_FLAG(SET_PED_RESET_FLAG(Local_103), 71, true);
			break;
		
		case 3:
			if (!IS_BIT_SET(Local_105.f_52, 25))
			{
				if (GET_SCRIPT_TASK_STATUS(GET_SCRIPT_TASK_STATUS(Local_103), 1920390111) != 0 && GET_SCRIPT_TASK_STATUS(GET_SCRIPT_TASK_STATUS(Local_103), 1920390111) != 1)
				{
					SET_PED_KEEP_TASK(SET_PED_KEEP_TASK(Local_103), true);
					SET_PED_FLEE_ATTRIBUTES(SET_PED_FLEE_ATTRIBUTES(Local_103), 2, false);
					SET_PED_FLEE_ATTRIBUTES(SET_PED_FLEE_ATTRIBUTES(Local_103), 8, true);
					SET_PED_FLEE_ATTRIBUTES(SET_PED_FLEE_ATTRIBUTES(Local_103), 16, true);
					_SET_PED_RAGDOLL_BLOCKING_FLAGS(_SET_PED_RAGDOLL_BLOCKING_FLAGS(Local_103), 16);
					TASK_ACHIEVE_HEADING(TASK_ACHIEVE_HEADING(Local_103), Local_103.f_42, -1);
					SET_BIT(&(Local_105.f_52), 25);
				}
			}
			break;
		
		case 4:
			if (!IS_BIT_SET(Local_103.f_23, 17) && !IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 3))
			{
				if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					Global_2531497.f_8 = 1;
				}
				iVar2 = PLAYER_PED_ID();
				if (Global_2531497.f_9 != func_182())
				{
					if (func_46(Global_2531497.f_9, 1, 1))
					{
						iVar2 = GET_PLAYER_PED(Global_2531497.f_9);
					}
				}
				TASK_LOOK_AT_ENTITY(TASK_LOOK_AT_ENTITY(Local_103), iVar2, 30000, 0, 3);
				SET_FACIAL_IDLE_ANIM_OVERRIDE(SET_FACIAL_IDLE_ANIM_OVERRIDE(Local_103), "mood_stressed_1", 0);
				SET_BIT(&(Local_104[SET_BIT() /*10*/]), 3);
			}
			else
			{
				iLocal_114 = NETWORK_STOP_SYNCHRONISED_SCENE(Local_103.f_29);
				if (iLocal_114 != -1)
				{
					if (IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_114))
					{
						fLocal_318 = (Local_103.f_33 + 0.6f);
						if (fLocal_318 < 0.75f)
						{
							fLocal_318 = 0.75f;
						}
						if (IS_BIT_SET(Local_103.f_24, 4))
						{
							fLocal_318 = (fLocal_318 + 0.25f);
						}
						if (fLocal_318 > 1.75f)
						{
							fLocal_318 = 1.75f;
						}
						SET_SYNCHRONIZED_SCENE_RATE(iLocal_114, fLocal_318);
					}
				}
			}
			break;
		
		case 5:
			if (!IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 10))
			{
				if (GET_SCRIPT_TASK_STATUS(GET_SCRIPT_TASK_STATUS(Local_103), 242628503) != 0 && GET_SCRIPT_TASK_STATUS(GET_SCRIPT_TASK_STATUS(Local_103), 242628503) != 1)
				{
					if (!IS_PED_RAGDOLL(IS_PED_RAGDOLL(Local_103)))
					{
						iLocal_114 = NETWORK_STOP_SYNCHRONISED_SCENE(Local_103.f_29);
						if ((iLocal_114 != -1 && !IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_114)) || iLocal_114 == -1)
						{
							TASK_PERFORM_SEQUENCE(TASK_PERFORM_SEQUENCE(Local_103), iLocal_119);
							_SET_PED_RAGDOLL_BLOCKING_FLAGS(_SET_PED_RAGDOLL_BLOCKING_FLAGS(Local_103), 16);
							SET_PED_KEEP_TASK(SET_PED_KEEP_TASK(Local_103), true);
							SET_BIT(&(Local_104[SET_BIT() /*10*/]), 10);
						}
					}
				}
			}
			else if (GET_SCRIPT_TASK_STATUS(GET_SCRIPT_TASK_STATUS(Local_103), -875674219) != 1 && GET_SCRIPT_TASK_STATUS(GET_SCRIPT_TASK_STATUS(Local_103), -875674219) != 0)
			{
				if (func_18(&uLocal_135, 5000, 0))
				{
					func_14(&uLocal_135);
					iVar1 = PLAYER_PED_ID();
					if (Local_103.f_32 > -1)
					{
						if (NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(Local_103.f_32)))
						{
							iVar0 = NETWORK_GET_PLAYER_INDEX(NETWORK_GET_PLAYER_INDEX(Local_103.f_32));
							iVar1 = GET_PLAYER_PED(iVar0);
						}
					}
					TASK_TURN_PED_TO_FACE_ENTITY(TASK_TURN_PED_TO_FACE_ENTITY(Local_103), iVar1, 10000);
					TASK_LOOK_AT_ENTITY(TASK_LOOK_AT_ENTITY(Local_103), TASK_LOOK_AT_ENTITY(), -1, 0, 2);
				}
			}
			break;
		
		case 6:
			if (!IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 10))
			{
				if ((iLocal_114 == -1 || !IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_114)) || IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_114) >= 0.95f)
				{
					func_229();
					iVar1 = PLAYER_PED_ID();
					if (Local_103.f_32 > -1)
					{
						if (NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(Local_103.f_32)))
						{
							iVar0 = NETWORK_GET_PLAYER_INDEX(NETWORK_GET_PLAYER_INDEX(Local_103.f_32));
							iVar1 = GET_PLAYER_PED(iVar0);
						}
					}
					TASK_HANDS_UP(TASK_HANDS_UP(Local_103), -1, iVar1, -1, 1);
					_0x2208438012482A1A(_0x2208438012482A1A(Local_103), 0, 0);
					_SET_PED_RAGDOLL_BLOCKING_FLAGS(_SET_PED_RAGDOLL_BLOCKING_FLAGS(Local_103), 16);
					SET_PED_KEEP_TASK(SET_PED_KEEP_TASK(Local_103), true);
					SET_BIT(&(Local_104[SET_BIT() /*10*/]), 10);
				}
			}
			break;
		
		case 7:
			if (GET_SCRIPT_TASK_STATUS(GET_SCRIPT_TASK_STATUS(Local_103), -1442466670) != 0 && GET_SCRIPT_TASK_STATUS(GET_SCRIPT_TASK_STATUS(Local_103), -1442466670) != 1)
			{
				if (!func_173())
				{
					func_228();
					CLEAR_PED_TASKS(CLEAR_PED_TASKS(Local_103));
					TASK_COMBAT_HATED_TARGETS_AROUND_PED(TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_103), 20f, 0);
					func_230(4);
				}
			}
			break;
		
		case 8:
			if (!IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 9))
			{
				func_229();
				iLocal_114 = NETWORK_STOP_SYNCHRONISED_SCENE(Local_103.f_29);
				if ((iLocal_114 != -1 && !IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_114)) || iLocal_114 == -1)
				{
					if ((!IS_BIT_SET(Local_103.f_23, 27) && !func_37()) && !func_36())
					{
						if (IS_BIT_SET(Local_103.f_24, 2))
						{
							if (!IS_BIT_SET(Local_103.f_24, 3))
							{
								TASK_PERFORM_SEQUENCE(TASK_PERFORM_SEQUENCE(Local_103), iLocal_121);
								iVar3 = 1;
							}
							else
							{
								func_228();
								TASK_PERFORM_SEQUENCE(TASK_PERFORM_SEQUENCE(Local_103), iLocal_122);
								iVar3 = 1;
							}
						}
					}
					else
					{
						TASK_SMART_FLEE_COORD(TASK_SMART_FLEE_COORD(Local_103), vLocal_112, 250f, -1, 1, 0);
						iVar3 = 1;
					}
					if (iVar3 == 1)
					{
						func_230(25);
						SET_PED_KEEP_TASK(SET_PED_KEEP_TASK(Local_103), true);
						func_6(Local_105.f_50, 1, func_7());
						SET_BIT(&(Local_104[SET_BIT() /*10*/]), 9);
					}
				}
			}
			else if (!IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 19))
			{
				iVar4 = GET_NAVMESH_ROUTE_RESULT(GET_NAVMESH_ROUTE_RESULT(Local_103));
				if (iVar4 == 3)
				{
					CLEAR_PED_SECONDARY_TASK(CLEAR_PED_SECONDARY_TASK(Local_103));
					SET_BIT(&(Local_104[SET_BIT() /*10*/]), 19);
				}
				else if (iVar4 == 2)
				{
					CLEAR_PED_TASKS(CLEAR_PED_TASKS(Local_103));
					if (!IS_BIT_SET(Local_103.f_24, 3))
					{
						TASK_PERFORM_SEQUENCE(TASK_PERFORM_SEQUENCE(Local_103), iLocal_123);
					}
					else
					{
						TASK_COMBAT_HATED_TARGETS_AROUND_PED(TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_103), 20f, 0);
					}
					SET_BIT(&(Local_104[SET_BIT() /*10*/]), 19);
				}
			}
			break;
	}
	func_225();
	return 1;
}

void func_225()
{
	if ((Local_103.f_3 != 8 && Local_103.f_3 != 7) && Local_103.f_2 == 3)
	{
		if ((((!IS_BIT_SET(Local_103.f_23, 14) || !IS_BIT_SET(Local_103.f_23, 15)) || !IS_BIT_SET(Local_103.f_23, 22)) || !IS_BIT_SET(Local_103.f_23, 23)) || !IS_BIT_SET(Local_103.f_23, 30))
		{
			iLocal_114 = NETWORK_STOP_SYNCHRONISED_SCENE(Local_103.f_29);
			if (iLocal_114 != -1)
			{
				if (IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_114))
				{
					if (!func_173())
					{
						if (!IS_BIT_SET(Local_103.f_23, 14) && !IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 6))
						{
							func_230(2);
							SET_BIT(&(Local_104[SET_BIT() /*10*/]), 6);
						}
						if (!IS_BIT_SET(Local_103.f_23, 15) && !IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 7))
						{
							if (GET_SYNCHRONIZED_SCENE_PHASE(iLocal_114) > 0.87f)
							{
								func_230(3);
								SET_BIT(&(Local_104[SET_BIT() /*10*/]), 7);
							}
						}
						if (!IS_BIT_SET(Local_103.f_23, 22) && !IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 22))
						{
							if (IS_BIT_SET(Local_103.f_23, 24) && !func_173())
							{
								func_230(11);
								SET_BIT(&(Local_104[SET_BIT() /*10*/]), 22);
							}
						}
						if (!IS_BIT_SET(Local_103.f_23, 23) && !IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 23))
						{
							if (IS_BIT_SET(Local_103.f_23, 25) && !func_173())
							{
								func_230(12);
								SET_BIT(&(Local_104[SET_BIT() /*10*/]), 23);
							}
						}
					}
				}
			}
		}
		if (!IS_BIT_SET(Local_103.f_23, 9))
		{
			if (!IS_BIT_SET(Local_103.f_23, 26) && !IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 24))
			{
				if (IS_BIT_SET(Local_103.f_23, 7))
				{
					if (!func_173())
					{
						if (!IS_BIT_SET(Local_103.f_24, 11))
						{
							if (!IS_BIT_SET(Local_103.f_24, 12))
							{
								func_230(1);
							}
							else
							{
								func_230(19);
							}
						}
						else
						{
							func_230(16);
						}
						SET_BIT(&(Local_104[SET_BIT() /*10*/]), 24);
						return;
					}
					else
					{
						func_226();
						return;
					}
				}
			}
			if (((!IS_BIT_SET(Local_103.f_23, 30) && !IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 25)) && !IS_BIT_SET(Local_103.f_23, 7)) && !IS_BIT_SET(Local_103.f_23, 4))
			{
				if (IS_BIT_SET(Local_103.f_24, 0) && !func_173())
				{
					if ((IS_BIT_SET(Local_103.f_23, 7) && IS_BIT_SET(Local_103.f_23, 4)) || (!IS_BIT_SET(Local_103.f_23, 7) && !IS_BIT_SET(Local_103.f_23, 4)))
					{
						if (!IS_BIT_SET(Local_103.f_24, 11))
						{
							if (!IS_BIT_SET(Local_103.f_24, 12))
							{
								func_230(13);
							}
							else
							{
								func_230(20);
							}
						}
						else
						{
							func_230(17);
						}
						SET_BIT(&(Local_104[SET_BIT() /*10*/]), 25);
						return;
					}
				}
			}
			if (!IS_BIT_SET(Local_103.f_23, 31) && !IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 26))
			{
				if (IS_BIT_SET(Local_103.f_24, 1) && !func_173())
				{
					func_230(14);
					SET_BIT(&(Local_104[SET_BIT() /*10*/]), 26);
					return;
				}
			}
			if (!IS_BIT_SET(Local_103.f_24, 9) && !IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 31))
			{
				if (IS_BIT_SET(Local_103.f_24, 8) && !func_173())
				{
					func_230(22);
					SET_BIT(&(Local_104[SET_BIT() /*10*/]), 31);
					return;
				}
			}
			if (!IS_BIT_SET(Local_103.f_1, 3) && !IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/].f_1, 3))
			{
				if (IS_BIT_SET(Local_103.f_1, 2) && !func_173())
				{
					func_230(24);
					SET_BIT(&(Local_104[SET_BIT() /*10*/].f_1), 3);
					return;
				}
			}
			if (!IS_BIT_SET(Local_103.f_24, 14) && !IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 20))
			{
				if (IS_BIT_SET(Local_103.f_24, 13) && !func_173())
				{
					func_230(23);
					SET_BIT(&(Local_104[SET_BIT() /*10*/]), 20);
					return;
				}
			}
		}
	}
	if (!IS_BIT_SET(Local_103.f_24, 6) && !IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 29))
	{
		if (IS_BIT_SET(Local_103.f_24, 5))
		{
			if (!func_173())
			{
				func_230(21);
				SET_BIT(&(Local_104[SET_BIT() /*10*/]), 29);
				return;
			}
		}
	}
}

void func_226()
{
	Global_19671 = 0;
	func_227();
}

void func_227()
{
	RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		STOP_SCRIPTED_CONVERSATION(false);
		Global_20805 = 6;
	}
}

void func_228()
{
	int iVar0;
	
	iVar0 = GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iVar0 < 3)
	{
		GIVE_DELAYED_WEAPON_TO_PED(GIVE_DELAYED_WEAPON_TO_PED(Local_103), joaat("weapon_pistol"), 25000, false);
		SET_PED_ACCURACY(SET_PED_ACCURACY(Local_103), SET_PED_ACCURACY(10, 35));
	}
	else if (iVar0 < 6)
	{
		GIVE_DELAYED_WEAPON_TO_PED(GIVE_DELAYED_WEAPON_TO_PED(Local_103), joaat("weapon_combatpistol"), 25000, false);
		SET_PED_ACCURACY(SET_PED_ACCURACY(Local_103), SET_PED_ACCURACY(15, 40));
	}
	else if (iVar0 == 6)
	{
		GIVE_DELAYED_WEAPON_TO_PED(GIVE_DELAYED_WEAPON_TO_PED(Local_103), joaat("weapon_microsmg"), 25000, false);
		SET_PED_ACCURACY(SET_PED_ACCURACY(Local_103), SET_PED_ACCURACY(10, 25));
	}
	else if (iVar0 == 7)
	{
		GIVE_DELAYED_WEAPON_TO_PED(GIVE_DELAYED_WEAPON_TO_PED(Local_103), joaat("weapon_combatmg"), 25000, false);
		SET_PED_ACCURACY(SET_PED_ACCURACY(Local_103), SET_PED_ACCURACY(5, 15));
	}
	else if (iVar0 == 8)
	{
		GIVE_DELAYED_WEAPON_TO_PED(GIVE_DELAYED_WEAPON_TO_PED(Local_103), joaat("weapon_bat"), 25000, false);
		SET_PED_ACCURACY(SET_PED_ACCURACY(Local_103), SET_PED_ACCURACY(20, 40));
	}
	else if (iVar0 == 9)
	{
		GIVE_DELAYED_WEAPON_TO_PED(GIVE_DELAYED_WEAPON_TO_PED(Local_103), joaat("weapon_assaultrifle"), 25000, false);
		SET_PED_ACCURACY(SET_PED_ACCURACY(Local_103), SET_PED_ACCURACY(5, 30));
	}
	else if (iVar0 == 10)
	{
		GIVE_DELAYED_WEAPON_TO_PED(GIVE_DELAYED_WEAPON_TO_PED(Local_103), joaat("weapon_sawnoffshotgun"), 25000, false);
		SET_PED_ACCURACY(SET_PED_ACCURACY(Local_103), SET_PED_ACCURACY(5, 20));
	}
	else
	{
		GIVE_DELAYED_WEAPON_TO_PED(GIVE_DELAYED_WEAPON_TO_PED(Local_103), joaat("weapon_pumpshotgun"), 25000, false);
		SET_PED_ACCURACY(SET_PED_ACCURACY(Local_103), SET_PED_ACCURACY(10, 25));
	}
	func_6(Local_105.f_50, 1, func_7());
	SET_PED_RELATIONSHIP_GROUP_HASH(SET_PED_RELATIONSHIP_GROUP_HASH(Local_103), Global_1575003);
	SET_PED_AS_ENEMY(SET_PED_AS_ENEMY(Local_103), 1);
	SET_PED_COMBAT_MOVEMENT(SET_PED_COMBAT_MOVEMENT(Local_103), 1);
	SET_PED_SPHERE_DEFENSIVE_AREA(SET_PED_SPHERE_DEFENSIVE_AREA(Local_103), vLocal_111, 20f, 0, 0);
	SET_PED_KEEP_TASK(SET_PED_KEEP_TASK(Local_103), true);
}

void func_229()
{
	iLocal_114 = NETWORK_STOP_SYNCHRONISED_SCENE(Local_103.f_29);
	if (iLocal_114 != -1)
	{
		if (IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_114))
		{
			NETWORK_START_SYNCHRONISED_SCENE(Local_103.f_29);
		}
	}
}

void func_230(int iParam0)
{
	struct<2> Var0;
	int iVar1;
	
	if (IS_BIT_SET(Local_103.f_23, 13))
	{
		if (!func_395(Local_103))
		{
			if (NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103) || (!NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103) && NETWORK_HAS_CONTROL_OF_NETWORK_ID()))
			{
				if (!IS_PED_RAGDOLL(IS_PED_RAGDOLL(Local_103)))
				{
					if (Local_103.f_45 == 0)
					{
						StringCopy(&Var0, "RB_SH2", 16);
					}
					else if (Local_103.f_45 == 1)
					{
						StringCopy(&Var0, "RB_12_F", 16);
					}
					else
					{
						StringCopy(&Var0, "RB_SH3", 16);
					}
					StringIntConCat(&Var0, Local_103.f_31, 16);
					StringIntConCat(&Var0, iParam0, 16);
					if (ARE_STRINGS_EQUAL(&Var0, "RB_SH241"))
					{
						if (GET_CURRENT_PED_WEAPON(GET_CURRENT_PED_WEAPON(), &iVar1, 1))
						{
							if ((((((iVar1 == joaat("weapon_unarmed") || iVar1 == 0) || iVar1 == joaat("object")) || iVar1 == joaat("weapon_flare")) || iVar1 == joaat("weapon_snowball")) || func_252(iVar1)) || func_251(iVar1))
							{
								StringCopy(&Var0, "RB_SH211", 16);
							}
						}
					}
					func_394(&uLocal_151, 3, NET_TO_PED(Local_103), &(Local_103.f_46), 1, 0);
					switch (iParam0)
					{
						case 0:
							_PLAY_AMBIENT_SPEECH_WITH_VOICE(_PLAY_AMBIENT_SPEECH_WITH_VOICE(Local_103), "SHOP_GREET", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 1:
							func_231(&uLocal_151, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 2:
							func_231(&uLocal_151, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 3:
							func_231(&uLocal_151, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 4:
							_PLAY_AMBIENT_SPEECH_WITH_VOICE(_PLAY_AMBIENT_SPEECH_WITH_VOICE(Local_103), "SHOP_BRAVE", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 10:
							_PLAY_AMBIENT_SPEECH_WITH_VOICE(_PLAY_AMBIENT_SPEECH_WITH_VOICE(Local_103), "SHOP_REMOVE_VEHICLE", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 11:
							_PLAY_AMBIENT_SPEECH_WITH_VOICE(_PLAY_AMBIENT_SPEECH_WITH_VOICE(Local_103), "SHOP_REACT_TO_SHOUT", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 12:
							_PLAY_AMBIENT_SPEECH_WITH_VOICE(_PLAY_AMBIENT_SPEECH_WITH_VOICE(Local_103), "SHOP_HURRYING", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 13:
							_PLAY_AMBIENT_SPEECH_WITH_VOICE(_PLAY_AMBIENT_SPEECH_WITH_VOICE(Local_103), "SHOP_NO_COPS", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 14:
							_PLAY_AMBIENT_SPEECH_WITH_VOICE(_PLAY_AMBIENT_SPEECH_WITH_VOICE(Local_103), "SHOP_THREATENED", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 15:
							_PLAY_AMBIENT_SPEECH_WITH_VOICE(_PLAY_AMBIENT_SPEECH_WITH_VOICE(Local_103), "SHOP_GREET_START", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 16:
							_PLAY_AMBIENT_SPEECH_WITH_VOICE(_PLAY_AMBIENT_SPEECH_WITH_VOICE(Local_103), "SHOP_SCARED_START", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 17:
							_PLAY_AMBIENT_SPEECH_WITH_VOICE(_PLAY_AMBIENT_SPEECH_WITH_VOICE(Local_103), "SHOP_NO_COPS_START", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 18:
							_PLAY_AMBIENT_SPEECH_WITH_VOICE(_PLAY_AMBIENT_SPEECH_WITH_VOICE(Local_103), "SHOP_GREET_END", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 19:
							_PLAY_AMBIENT_SPEECH_WITH_VOICE(_PLAY_AMBIENT_SPEECH_WITH_VOICE(Local_103), "SHOP_SCARED_END", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 20:
							_PLAY_AMBIENT_SPEECH_WITH_VOICE(_PLAY_AMBIENT_SPEECH_WITH_VOICE(Local_103), "SHOP_NO_COPS_END", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 21:
							_PLAY_AMBIENT_SPEECH_WITH_VOICE(_PLAY_AMBIENT_SPEECH_WITH_VOICE(Local_103), "SHOP_COPS_ARRIVED", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 22:
							_PLAY_AMBIENT_SPEECH_WITH_VOICE(_PLAY_AMBIENT_SPEECH_WITH_VOICE(Local_103), "SHOP_SELL", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 23:
							_PLAY_AMBIENT_SPEECH_WITH_VOICE(_PLAY_AMBIENT_SPEECH_WITH_VOICE(Local_103), "SHOP_NO_ENTRY", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 24:
							_PLAY_AMBIENT_SPEECH_WITH_VOICE(_PLAY_AMBIENT_SPEECH_WITH_VOICE(Local_103), "SHOP_STEAL", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 25:
							_PLAY_AMBIENT_SPEECH_WITH_VOICE(_PLAY_AMBIENT_SPEECH_WITH_VOICE(Local_103), "SCREAM_PANIC", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						}
					}
				}
			}
	}
}

int func_231(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_250(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2621441 = 1;
	return func_232(sParam2, iParam3, 0);
}

int func_232(char* sParam0, int iParam1, bool bParam2)
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
					func_249();
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
		if (func_248(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_247();
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
				func_240();
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
				if (func_239())
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
			if (func_238())
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
			func_237();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_236();
		func_233();
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
		func_249();
	}
	return 0;
}

void func_233()
{
	if (!func_234())
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

int func_234()
{
	if (!Global_262145.f_28013)
	{
		return 0;
	}
	if (!Global_76577)
	{
		return 0;
	}
	if (PLAYER_ID() == func_182())
	{
		return 0;
	}
	if (func_235(PLAYER_ID()))
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

bool func_235(int iParam0)
{
	return func_142(iParam0, 20);
}

void func_236()
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

void func_237()
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

int func_238()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_239()
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

void func_240()
{
	if (func_123(14))
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
		Global_19486 = func_241();
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

var func_241()
{
	func_242();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_242()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()))
	{
		if (func_245(Global_111560.f_2358.f_539.f_4321) != GET_ENTITY_MODEL(GET_ENTITY_MODEL()))
		{
			iVar0 = func_244(PLAYER_PED_ID());
			if (func_243(iVar0) && (!func_123(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_243(Global_111560.f_2358.f_539.f_4321))
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

bool func_243(int iParam0)
{
	return iParam0 < 3;
}

int func_244(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_245(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_245(int iParam0)
{
	if (func_243(iParam0))
	{
		return func_246(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_246(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_247()
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

bool func_248(int iParam0, int iParam1)
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

void func_249()
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

void func_250(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_251(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_molotov"):
		case joaat("weapon_smokegrenade"):
		case joaat("weapon_grenade"):
		case joaat("weapon_stickybomb"):
		case joaat("weapon_proxmine"):
			return 1;
			break;
		
		case -1169823560:
			return 1;
			break;
	}
	return 0;
}

int func_252(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
		case joaat("weapon_bat"):
		case joaat("weapon_nightstick"):
		case joaat("weapon_hammer"):
		case joaat("weapon_golfclub"):
		case joaat("weapon_crowbar"):
		case joaat("weapon_bottle"):
		case joaat("weapon_dagger"):
		case joaat("weapon_knuckle"):
		case joaat("weapon_hatchet"):
		case joaat("weapon_machete"):
		case joaat("weapon_switchblade"):
			return 1;
			break;
		
		case -853065399:
		case -1810795771:
		case 419712736:
			return 1;
			break;
		
		case 940833800:
			return 1;
	}
	return 0;
}

void func_253()
{
	int iVar0;
	
	iVar0 = GET_NUM_RESERVED_MISSION_OBJECTS(false, 0);
	if (Local_103.f_43 != iVar0)
	{
		if (Local_103.f_43 < iVar0 || func_260(Local_103.f_43, 0, 1))
		{
			RESERVE_NETWORK_MISSION_OBJECTS(Local_103.f_43);
		}
	}
	iVar0 = CAN_REGISTER_MISSION_ENTITIES(false, 0);
	if (Local_103.f_44 != iVar0)
	{
		if (Local_103.f_44 < iVar0 || func_254(Local_103.f_44, 0, 1))
		{
			IS_SPHERE_VISIBLE_TO_PLAYER(Local_103.f_44);
		}
	}
}

int func_254(int iParam0, bool bParam1, bool bParam2)
{
	return func_255(2, iParam0, 1, bParam1, bParam2);
}

int func_255(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!IS_BIT_SET(Global_1385512, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_259(iParam0) - func_258(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_258(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_259(iParam0) - func_257(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_258(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_259(iParam0) - func_258(iParam0, 1));
		}
		if (!bParam4 && Global_1590446[PLAYER_ID() /*871*/] != 3)
		{
			iVar1 = (iVar1 - func_256(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_256(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_257(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1385512.f_1;
			break;
		
		case 1:
			return Global_1385512.f_2;
			break;
		
		case 2:
			return Global_1385512.f_3;
			break;
	}
	return 0;
}

int func_258(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2424073[iVar0 /*421*/].f_209;
			}
			else
			{
				return GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2424073[iVar0 /*421*/].f_210;
			}
			else
			{
				return GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2424073[iVar0 /*421*/].f_211;
			}
			else
			{
				return CAN_REGISTER_MISSION_ENTITIES(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_259(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1385520;
			break;
		
		case 1:
			return Global_1385521;
			break;
		
		case 2:
			return Global_1385522;
			break;
	}
	return 0;
}

int func_260(int iParam0, bool bParam1, bool bParam2)
{
	return func_255(0, iParam0, 1, bParam1, bParam2);
}

void func_261()
{
	float fVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	
	switch (iLocal_336)
	{
		case 0:
			if (!IS_BIT_SET(Local_105.f_53, 0))
			{
				if (NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_14))
				{
					if (func_267(vLocal_342))
					{
						vLocal_342 = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_103.f_14), 0f, -0.5f, 0f) };
						SET_BIT(&(Local_105.f_53), 0);
					}
				}
			}
			if ((((IS_ENTITY_AT_COORD(IS_ENTITY_AT_COORD(), vLocal_342, 0.5f, 0.5f, 1f, false, true, 0) && (func_395(Local_103) || Local_103.f_3 > 7)) && !IS_ENTITY_AT_COORD(Local_103.f_23, 20)) && !IS_ENTITY_AT_COORD(Local_103.f_23, 11)) && IS_ENTITY_AT_COORD(vLocal_115, 1.5f) == 0)
			{
				if (((((((!IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0) && !func_170(0)) && !func_266()) && !IS_PED_IN_ANY_VEHICLE()) && !func_39(IS_PED_IN_ANY_VEHICLE(), 146)) && !func_38(IS_PED_IN_ANY_VEHICLE())) && IS_PED_IN_ANY_VEHICLE(Local_103.f_14)) && (!func_140(IS_PED_IN_ANY_VEHICLE()) || func_97(IS_PED_IN_ANY_VEHICLE()) == 154))
				{
					func_150("FHU_MANR", -1);
					Global_2531497.f_5655.f_4 = 1;
					iLocal_336 = 1;
				}
			}
			break;
		
		case 1:
			if (((((!IS_BIT_SET(Local_103.f_24, 16) && !IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 12)) && !IS_BIT_SET(Local_103.f_23, 20)) && !IS_BIT_SET(Local_103.f_23, 11)) && IS_BIT_SET(IS_BIT_SET(), vLocal_342, 0.5f, 0.5f, 1f, false, true, 0)) && (!func_140(IS_BIT_SET()) || func_97(IS_BIT_SET()) == 154))
			{
				if (((IS_CONTROL_JUST_PRESSED(0, 51) && !func_265(0)) && !func_266()) && !IS_CONTROL_JUST_PRESSED())
				{
					if (func_148("FHU_MANR"))
					{
						CLEAR_HELP(1);
					}
					SET_PLAYER_CONTROL(SET_PLAYER_CONTROL(), false, 640);
					SET_BIT(&(Local_104[SET_BIT() /*10*/]), 12);
					iLocal_336 = 2;
				}
				else if ((GET_GAME_TIMER() % 1000) < 50)
				{
					if (iLocal_341 == 0)
					{
						func_262(&iLocal_341, 4, "FHU_MANR", 0, 0, 0, 0);
					}
				}
			}
			else if (func_148("FHU_MANR"))
			{
				CLEAR_HELP(1);
			}
			break;
		
		case 2:
			if (!IS_PED_INJURED(IS_PED_INJURED()))
			{
				vVar3 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true) };
				vLocal_342.z = (vVar3.z - 1f);
				SET_ENTITY_COORDS(SET_ENTITY_COORDS(), vLocal_342, 1, false, 0, 1);
				SET_ENTITY_HEADING(SET_ENTITY_HEADING(), SET_ENTITY_HEADING((vLocal_129.x - vLocal_342.x), (vLocal_129.y - vLocal_342.y)));
				CLEAR_SEQUENCE_TASK(&iVar4);
				OPEN_SEQUENCE_TASK(&iVar4);
				TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "enter", 8f, -8f, 4000, 262144, 0, 0, 0, 0);
				TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "loop", 8f, -8f, 4000, 262145, 0, 0, 0, 0);
				TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "exit", 8f, -8f, 4000, 262144, 0, 0, 0, 0);
				CLOSE_SEQUENCE_TASK(iVar4);
				TASK_PERFORM_SEQUENCE(TASK_PERFORM_SEQUENCE(), iVar4);
				SET_PED_USING_ACTION_MODE(SET_PED_USING_ACTION_MODE(), false, -1, 0);
				SET_PED_RESET_FLAG(SET_PED_RESET_FLAG(), 200, true);
				SET_PED_RESET_FLAG(SET_PED_RESET_FLAG(), 71, true);
				bVar2 = GET_CURRENT_PED_WEAPON(GET_CURRENT_PED_WEAPON(), &iLocal_340, 1);
				if (bVar2)
				{
					SET_CURRENT_PED_WEAPON(SET_CURRENT_PED_WEAPON(), joaat("weapon_unarmed"), true);
				}
				_0x2208438012482A1A(_0x2208438012482A1A(), 0, 0);
				if (!DOES_CAM_EXIST(iLocal_337))
				{
					iLocal_337 = CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				ATTACH_CAM_TO_ENTITY(iLocal_337, ATTACH_CAM_TO_ENTITY(), -0.1878f, 3.0635f, 0.68f, 1);
				POINT_CAM_AT_ENTITY(iLocal_337, POINT_CAM_AT_ENTITY(), -0.0129f, 0.0927f, 0.3008f, 1);
				SET_CAM_FOV(iLocal_337, 35f);
				SHAKE_CAM(iLocal_337, "HAND_SHAKE", 0.1f);
				SET_CAM_ACTIVE(iLocal_337, true);
				RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
			}
			iLocal_336 = 3;
			break;
		
		case 3:
			if (!IS_PED_INJURED(IS_PED_INJURED()))
			{
				if (!DOES_CAM_EXIST(iLocal_338))
				{
					iLocal_338 = CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				ATTACH_CAM_TO_ENTITY(iLocal_338, ATTACH_CAM_TO_ENTITY(), -1.0346f, 2.9183f, 0.68f, 1);
				POINT_CAM_AT_ENTITY(iLocal_338, POINT_CAM_AT_ENTITY(), -0.0574f, 0.1074f, 0.3008f, 1);
				SET_CAM_FOV(iLocal_338, 35f);
				SHAKE_CAM(iLocal_338, "HAND_SHAKE", 0.1f);
				SET_CAM_ACTIVE_WITH_INTERP(iLocal_338, iLocal_337, 6000, 1, 1);
				SET_PED_RESET_FLAG(SET_PED_RESET_FLAG(), 71, true);
				SET_PED_USING_ACTION_MODE(SET_PED_USING_ACTION_MODE(), false, -1, 0);
				SET_PED_RESET_FLAG(SET_PED_RESET_FLAG(), 200, true);
			}
			iLocal_336 = 4;
			break;
		
		case 4:
			if (!IS_CAM_INTERPOLATING(iLocal_338))
			{
				iLocal_336 = 5;
			}
			else if (!IS_PED_INJURED(IS_PED_INJURED()))
			{
				if (IS_ENTITY_PLAYING_ANIM(IS_ENTITY_PLAYING_ANIM(), "oddjobs@shop_robbery@rob_till", "loop", 3))
				{
					fVar0 = GET_ENTITY_ANIM_CURRENT_TIME(GET_ENTITY_ANIM_CURRENT_TIME(), "oddjobs@shop_robbery@rob_till", "loop");
					if ((fVar0 > 0.374f && fVar0 <= 0.484f) || (fVar0 > 0.824f && fVar0 <= 0.92f))
					{
						if (!iLocal_339)
						{
							iVar5 = round(((IntToFloat(iLocal_132) * 0.75f) / 4f));
							iVar6 = round(((IntToFloat(iLocal_133) * 0.75f) / 4f));
							iVar1 = GET_RANDOM_INT_IN_RANGE(iVar5, iVar6 + 1);
							iVar1 = func_220(iVar1, 1);
							if (iVar1 > (Global_262145.f_167 / 4))
							{
								iVar1 = (Global_262145.f_167 / 4);
							}
							if (func_219(PLAYER_ID()) && func_217(func_218(PLAYER_ID())) < 1f)
							{
								if (Global_262145.f_4227 > 1f)
								{
									Global_262145.f_4227 = 1f;
								}
								iVar1 = round((to_float(iVar1) * Global_262145.f_4227));
							}
							if (iVar1 > 0)
							{
								if (func_216())
								{
									func_205(1734805203, iVar1, &uVar7, 0, 0, 0);
								}
								else
								{
									func_201(iVar1, 1, 1, 1092616192);
									NETWORK_EARN_FROM_HOLDUPS(iVar1);
								}
							}
							Global_2531497.f_5655 = (Global_2531497.f_5655 + iVar1);
							iLocal_335 = (iLocal_335 + iVar1);
							func_189(1, iLocal_335);
							PLAY_SOUND_FRONTEND(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", true);
							iLocal_339 = 1;
						}
					}
					else if (iLocal_339)
					{
						iLocal_339 = 0;
					}
				}
				SET_PED_RESET_FLAG(SET_PED_RESET_FLAG(), 71, true);
				SET_PED_USING_ACTION_MODE(SET_PED_USING_ACTION_MODE(), false, -1, 0);
				SET_PED_RESET_FLAG(SET_PED_RESET_FLAG(), 200, true);
			}
			break;
		
		case 5:
			if (iLocal_340 != joaat("weapon_unarmed") && !IS_PED_INJURED(IS_PED_INJURED()))
			{
				SET_CURRENT_PED_WEAPON(SET_CURRENT_PED_WEAPON(), iLocal_340, true);
			}
			SET_PED_USING_ACTION_MODE(SET_PED_USING_ACTION_MODE(), true, -1, 0);
			SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			if (DOES_CAM_EXIST(iLocal_337))
			{
				DESTROY_CAM(iLocal_337, 0);
			}
			if (DOES_CAM_EXIST(iLocal_338))
			{
				DESTROY_CAM(iLocal_338, 0);
			}
			RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
			SET_PLAYER_CONTROL(SET_PLAYER_CONTROL(), true, 0);
			Global_2531497.f_5655.f_2 = 1;
			Global_2531497.f_5655.f_5 = 1;
			if (func_185(1))
			{
				func_176(4);
			}
			iLocal_336 = 7;
			break;
		
		case 6:
			SET_CAM_ACTIVE(iLocal_338, false);
			RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
			if (!IS_PED_INJURED(IS_PED_INJURED()))
			{
				CLEAR_PED_TASKS_IMMEDIATELY(CLEAR_PED_TASKS_IMMEDIATELY());
			}
			iLocal_336 = 5;
			break;
	}
}

void func_262(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_263(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_42116[iVar0 /*32*/])
		{
			Global_42116[iVar0 /*32*/] = 1;
			Global_42116[iVar0 /*32*/].f_1 = Global_42317;
			Global_42317++;
			Global_42116[iVar0 /*32*/].f_4 = 0;
			Global_42116[iVar0 /*32*/].f_29 = 0;
			Global_42116[iVar0 /*32*/].f_5 = 0;
			Global_42116[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_42116[iVar0 /*32*/].f_8), sParam2, 16);
			Global_42116[iVar0 /*32*/].f_6 = iParam3;
			Global_42116[iVar0 /*32*/].f_31 = GET_ID_OF_THIS_THREAD();
			Global_42116[iVar0 /*32*/].f_7 = 0;
			Global_42116[iVar0 /*32*/].f_3 = iParam5;
			if (!IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_42116[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_42116[iVar0 /*32*/].f_13), sParam4, 64);
				Global_42116[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_42116[iVar0 /*32*/].f_12 = 0;
				Global_42116[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_42116[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

void func_263(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_264(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42116[iVar0 /*32*/])
		{
			Global_42116[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_264(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42116[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_265(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (IS_BIT_SET(Global_7356, 14))
			{
				if (Global_19485 == 1)
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
		else
		{
			return 0;
		}
	}
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		if (Global_19485 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (Global_19486.f_1 > 3)
	{
		if (Global_19485 == 1)
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

bool func_266()
{
	return GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

int func_267(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_268(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, var uParam5, int iParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	int iVar4;
	char* sVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	
	if (((uParam5->f_4 >= 1000 || (uParam5->f_4 + uParam0->f_51) >= 1000) || func_392(&(uParam5->f_5))) || (func_144(&(Global_2531497.f_10)) && !func_391(Global_2531497.f_10, 300000, 0)))
	{
		if (func_144(&(Global_2531497.f_10)))
		{
			if ((GET_GAME_TIMER() % 2500) < 50)
			{
			}
		}
		if (!uParam0->f_34)
		{
			uParam0->f_34 = 1;
			if (!func_144(&(Global_2531497.f_10)))
			{
				func_19(&(Global_2531497.f_10), 0, 0);
			}
		}
	}
	else
	{
		if (func_144(&(Global_2531497.f_10)))
		{
			func_14(&(Global_2531497.f_10));
		}
		if (uParam0->f_34)
		{
			uParam0->f_34 = 0;
		}
	}
	if ((GET_GAME_TIMER() % 5000) < 50)
	{
	}
	if ((((((uParam5->f_3 < 2 && func_46(PLAYER_ID(), 1, 1)) && PLAYER_ID(uParam0->f_52, 26)) && !func_390(-1082130432)) && PLAYER_ID(PLAYER_ID()) < 1) && !bParam7) && !func_395(*uParam5))
	{
		iVar4 = 0;
		if ((IS_PAUSE_MENU_ACTIVE() && uParam0->f_54 != 0) && !IS_PAUSE_MENU_ACTIVE())
		{
			if (!bParam8)
			{
				uParam0->f_54 = 0;
				func_389(uParam0, &(iParam6->f_3));
			}
		}
		switch (uParam0->f_54)
		{
			case 0:
				if ((((!IS_PAUSE_MENU_ACTIVE() && !IS_PAUSE_MENU_ACTIVE(IS_PAUSE_MENU_ACTIVE(), 1)) && !IS_PAUSE_MENU_ACTIVE(IS_PAUSE_MENU_ACTIVE())) && (!func_140(IS_PAUSE_MENU_ACTIVE()) || func_97(IS_PAUSE_MENU_ACTIVE()) == 154)) && !func_388(IS_PAUSE_MENU_ACTIVE(), 21))
				{
					if (func_387(*uParam0, &uParam1, vParam4.z, &(uParam0->f_16[0 /*3*/]), &(uParam0->f_16[1 /*3*/]), &(uParam0->f_23), &(uParam0->f_26)))
					{
						vVar2 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true) };
						vVar3 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(*uParam5), true) };
						if ((GET_DISTANCE_BETWEEN_COORDS(vVar2, uParam0->f_23, true) < 5f && GET_DISTANCE_BETWEEN_COORDS((vVar2.z - vVar3.z)) < 0.25f) || func_439(1))
						{
							if (IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), uParam0->f_16[0 /*3*/], uParam0->f_16[1 /*3*/], uParam0->f_26, 0, true, 0) || func_439(1))
							{
								if (_0xFCF37A457CB96DC0(_0xFCF37A457CB96DC0(), uParam0->f_23, 135f) || func_439(1))
								{
									if (uParam0->f_34)
									{
										if (func_439(1))
										{
											func_409();
										}
										if (((!func_148("SHR_HOLDUP_1") && !func_148("SHR_MENU")) && !func_386()) && func_385())
										{
											func_150("SHR_SOLD_OUT", -1);
											uParam0->f_54 = 10;
										}
									}
									else
									{
										if (func_439(1))
										{
										}
										uParam0->f_14 = -1;
										func_262(&(uParam0->f_14), 4, "SHR_MENU", 0, 0, 0, 0);
										uParam0->f_54 = 2;
									}
								}
								else if ((GET_GAME_TIMER() % 8000) < 50)
								{
								}
							}
							else
							{
								if ((GET_GAME_TIMER() % 8000) < 50)
								{
								}
								DRAW_DEBUG_LINE(vVar2, uParam0->f_16[0 /*3*/], 0, 0, 255, 255);
								DRAW_DEBUG_LINE(vVar2, uParam0->f_16[1 /*3*/], 0, 0, 255, 255);
							}
						}
						else
						{
							if ((GET_GAME_TIMER() % 8000) < 50)
							{
							}
							DRAW_DEBUG_LINE(vVar2, uParam0->f_23, 0, 0, 255, 255);
						}
					}
				}
				else
				{
					if (func_148("SHR_MENU"))
					{
						CLEAR_HELP(1);
					}
					if (func_40(PLAYER_ID()))
					{
						if (!IS_BIT_SET(uParam0->f_53, 4))
						{
							func_150("SHR_FM_CRIT", -1);
							0xB9C362BABECDDC7A(3, 21, 200, 0, 0);
							SET_BIT(&(uParam0->f_53), 4);
						}
					}
					if ((GET_GAME_TIMER() % 8000) < 50)
					{
					}
				}
				break;
			
			case 2:
				vVar2 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true) };
				vVar3 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(*uParam5), true) };
				if ((!_0xFCF37A457CB96DC0(_0xFCF37A457CB96DC0(), uParam0->f_23, 135f) || _0xFCF37A457CB96DC0((vVar2.z - vVar3.z)) >= 0.25f) && !func_439(1))
				{
					if (func_148("SHR_MENU"))
					{
						CLEAR_HELP(1);
					}
					func_263(&(uParam0->f_14));
					uParam0->f_54 = 0;
				}
				if (IS_PAUSE_MENU_ACTIVE())
				{
					if (func_148("SHR_MENU"))
					{
						CLEAR_HELP(1);
					}
					func_263(&(uParam0->f_14));
					uParam0->f_54 = 0;
				}
				if (func_170(0) || func_169())
				{
					if (func_148("SHR_MENU"))
					{
						CLEAR_HELP(1);
					}
					func_263(&(uParam0->f_14));
					func_164(1, *uParam0);
					CLEAR_BIT(&(uParam0->f_52), 26);
					uParam0->f_54 = 0;
				}
				if (!IS_PED_RUNNING(IS_PED_RUNNING()))
				{
					if (func_384(uParam0->f_14, 1) || func_439(1))
					{
						if (func_439(1))
						{
							func_409();
						}
						if (func_148("SHR_MENU"))
						{
							CLEAR_HELP(1);
						}
						func_382(&(uParam0->f_44));
						func_263(&(uParam0->f_14));
						func_376(0, 0);
						SET_BIT(&(uParam0->f_53), 7);
						func_427(PLAYER_ID(), 0, 66048, 0);
						_0xA8FDB297A8D25FBA();
						if (!IS_PED_INJURED(IS_PED_INJURED()) && !func_395(*uParam5))
						{
							TASK_TURN_PED_TO_FACE_ENTITY(TASK_TURN_PED_TO_FACE_ENTITY(), TASK_TURN_PED_TO_FACE_ENTITY(*uParam5), 0);
							CLEAR_BIT(&(iParam6->f_1), 1);
						}
						func_375();
						uParam0->f_54 = 3;
					}
				}
				break;
			
			case 3:
				if (!bParam8)
				{
					if (!DOES_CAM_EXIST(uParam0->f_1))
					{
						uParam0->f_1 = CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
						func_374(*uParam0, &(uParam0->f_2), &(uParam0->f_5), &fVar6);
						SET_CAM_COORD(uParam0->f_1, uParam0->f_2);
						SET_CAM_ROT(uParam0->f_1, uParam0->f_5, 2);
						SET_CAM_FOV(uParam0->f_1, fVar6);
						SHAKE_CAM(uParam0->f_1, "HAND_SHAKE", 0.1f);
						SET_CAM_ACTIVE(uParam0->f_1, true);
						RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
					}
					uParam0->f_37 = func_397(*uParam0);
				}
				if (IS_PLAYER_CONTROL_ON(IS_PLAYER_CONTROL_ON()))
				{
					SET_PLAYER_CONTROL(SET_PLAYER_CONTROL(), false, 0);
				}
				uParam0->f_13 = 6;
				func_373(0, 0);
				func_372(1, 1, 0, 0, 0);
				func_371(1, 2, 1, 1, 1);
				func_370("SNK_ITEM");
				if (!bParam8)
				{
					func_368(1, uParam0->f_37, uParam0->f_37);
				}
				iVar7 = 0;
				while (iVar7 < uParam0->f_13)
				{
					func_363(iVar7, func_367(iVar7), 0, 1, 0, 0);
					if (uParam5->f_5[iVar7] >= 10 || ((func_144(&(Global_2531497.f_12[iVar7 /*2*/])) && !func_391(Global_2531497.f_12[iVar7 /*2*/], 150000, 0)) && *uParam0 == Global_2531497.f_27))
					{
						func_363(iVar7, "", 1, 1, 0, 0);
						func_362(15, 0);
						if (func_144(&(Global_2531497.f_12[iVar7 /*2*/])) && !func_391(Global_2531497.f_12[iVar7 /*2*/], 150000, 0))
						{
							uParam5->f_5[iVar7] = 10;
						}
						if (!func_144(&(Global_2531497.f_12[iVar7 /*2*/])))
						{
							Global_2531497.f_27 = *uParam0;
							func_19(&(Global_2531497.f_12[iVar7 /*2*/]), 0, 0);
						}
					}
					else if (func_359(iVar7))
					{
						func_363(iVar7, "SNK_FULL", 0, 1, 0, 0);
					}
					else if (!bParam8)
					{
						func_363(iVar7, "ITEM_COST", 1, 1, 0, 0);
						func_355(func_358(uParam0, iVar7), 0);
					}
					else
					{
						func_363(iVar7, "SNK_FREE", 0, 1, 0, 0);
					}
					iVar7++;
				}
				func_354(0);
				func_353(uParam0->f_12, 1, 1);
				if (uParam0->f_35)
				{
					if (!bParam8)
					{
						func_352("SNK_BOUGHT", 0, 0);
					}
					else
					{
						func_352("SNK_STORED", 0, 0);
					}
				}
				else if (uParam5->f_5[uParam0->f_12] >= 10)
				{
					func_352("SNK_SOUT", 0, 0);
				}
				else
				{
					func_352(func_351(uParam0->f_12), 0, 0);
				}
				func_350(201, "ITEM_SELECT", -1, 0);
				func_350(202, "ITEM_BACK", -1, 0);
				if (!bParam8)
				{
					func_350(203, "SNK_LIFT", -1, 0);
					func_316(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				uParam0->f_54 = 4;
				break;
			
			case 4:
				if (IS_PLAYER_CONTROL_ON(IS_PLAYER_CONTROL_ON()))
				{
					SET_PLAYER_CONTROL(SET_PLAYER_CONTROL(), false, 0);
				}
				if (GET_SCRIPT_TASK_STATUS(GET_SCRIPT_TASK_STATUS(), -875674219) == 7)
				{
					if (!IS_BIT_SET(iParam6->f_1, 1))
					{
						if (!bParam8)
						{
							func_427(PLAYER_ID(), 0, 98816, 0);
						}
						else
						{
							func_427(PLAYER_ID(), 0, 256, 0);
						}
						SET_BIT(&(iParam6->f_1), 1);
					}
				}
				iVar4 = 0;
				if (IS_PC_VERSION())
				{
					if (_IS_INPUT_JUST_DISABLED(2))
					{
						DISABLE_CONTROL_ACTION(0, 1, 1);
						DISABLE_CONTROL_ACTION(0, 2, 1);
						ENABLE_CONTROL_ACTION(0, 237, 1);
						ENABLE_CONTROL_ACTION(0, 238, 1);
						ENABLE_CONTROL_ACTION(0, 241, 1);
						ENABLE_CONTROL_ACTION(0, 242, 1);
						func_312(0, 0, 0, 1);
						func_311(0, -1, 1);
						if (func_310())
						{
							if (Global_4268347 != uParam0->f_12)
							{
								PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								uParam0->f_12 = Global_4268347;
								func_353(uParam0->f_12, 1, 1);
								uParam0->f_27 = 0;
								uParam0->f_29 = 0;
								uParam0->f_30 = 0;
								uParam0->f_32 = 0;
								sVar5 = func_351(uParam0->f_12);
								if (DOES_TEXT_LABEL_EXIST(sVar5))
								{
									func_352(sVar5, 0, 0);
								}
							}
							else
							{
								iVar4 = 1;
							}
						}
					}
				}
				if (!bParam8)
				{
					func_316(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				func_300(uParam0, &(uParam5->f_5), bParam8);
				if ((uParam5->f_2 > 2 && IS_BIT_SET(uParam5->f_1, 0)) && IS_BIT_SET(iParam6->f_1, 0))
				{
					CLEAR_BIT(&(iParam6->f_1), 0);
				}
				if ((IS_CONTROL_JUST_PRESSED(2, 201) || iVar4 == 1) || uParam0->f_47)
				{
					if (!uParam0->f_47)
					{
						uParam0->f_27 = 1;
						uParam0->f_29 = 0;
						uParam0->f_30 = 0;
						uParam0->f_32 = 0;
						func_382(&(uParam0->f_44));
					}
					if ((uParam0->f_28 && uParam0->f_31) && uParam0->f_33)
					{
						if (func_216())
						{
							uParam0->f_47 = 1;
							uParam0->f_48 = 0;
							uParam0->f_49 = -1;
							iVar0 = 0;
							if (!bParam8)
							{
								iVar0 = func_358(uParam0, uParam0->f_12);
							}
							func_288(uParam0, -1303831698, 537254313, iVar0);
							uParam0->f_54 = 5;
						}
						else
						{
							uParam0->f_35 = 1;
							PLAY_SOUND_FRONTEND(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", true);
							uParam5->f_5[uParam0->f_12]++;
							uParam0->f_54 = 6;
						}
					}
					else
					{
						uParam0->f_35 = 0;
						if (!uParam0->f_28 && !uParam0->f_36)
						{
							iVar0 = 0;
							if (!bParam8)
							{
								iVar0 = func_358(uParam0, uParam0->f_12);
							}
							func_287(GET_HASH_KEY(func_351(uParam0->f_12)), iVar0, 0);
							func_280(0, 31, 3);
							uParam0->f_54 = 11;
						}
						PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", true);
					}
					if (!uParam0->f_33)
					{
						uParam0->f_54 = 3;
					}
				}
				if (!bParam8)
				{
					if (IS_CONTROL_JUST_PRESSED(2, 203) && !uParam0->f_47)
					{
						uParam0->f_27 = 1;
						if (uParam5->f_5[uParam0->f_12] < 10)
						{
							uParam0->f_33 = 1;
						}
						else
						{
							uParam0->f_33 = 0;
						}
						func_382(&(uParam0->f_44));
						if (!uParam0->f_33)
						{
							PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", true);
						}
						else if (!uParam0->f_31)
						{
							PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", true);
						}
						else
						{
							TASK_PLAY_ANIM(TASK_PLAY_ANIM(), func_160(), func_279(), 8f, -8f, -1, 1048576, 0, 0, 0, 0);
							uParam0->f_54 = 8;
							uParam0->f_15 = GET_GAME_TIMER();
							PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_LIQUOR_STORE_SOUNDSET", true);
							if (!bParam8)
							{
								func_389(uParam0, &(iParam6->f_3));
							}
						}
					}
				}
				if (IS_CONTROL_JUST_PRESSED(2, 202) || IS_CONTROL_JUST_PRESSED(2, 238))
				{
					if (func_439(1))
					{
						func_409();
					}
					uParam0->f_54 = 9;
					uParam0->f_15 = GET_GAME_TIMER();
					if (!bParam8)
					{
						PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", true);
						func_389(uParam0, &(iParam6->f_3));
					}
					else
					{
						PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FREEMODE_SOUNDSET", true);
						Global_2459029 = 1;
					}
				}
				if (uParam0->f_34)
				{
					uParam0->f_54 = 10;
					uParam0->f_15 = GET_GAME_TIMER();
					if (!bParam8)
					{
						func_389(uParam0, &(iParam6->f_3));
					}
					func_150("SHR_SOLD_OUT", -1);
				}
				iVar8 = 0;
				while (iVar8 < uParam0->f_13)
				{
					if (func_144(&(Global_2531497.f_12[iVar8 /*2*/])) && func_391(Global_2531497.f_12[iVar8 /*2*/], 150000, 0))
					{
						func_14(&(Global_2531497.f_12[iVar8 /*2*/]));
						uParam5->f_5[iVar8] = 0;
						uParam0->f_54 = 3;
					}
					iVar8++;
				}
				break;
			
			case 5:
				iVar0 = 0;
				if (!bParam8)
				{
					func_316(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
					iVar0 = func_358(uParam0, uParam0->f_12);
				}
				if (func_288(uParam0, -1303831698, 537254313, iVar0))
				{
				}
				else
				{
					switch (uParam0->f_49)
					{
						case 0:
							uParam0->f_35 = 0;
							if (!uParam0->f_28 && !uParam0->f_36)
							{
								if (!bParam8)
								{
									iVar0 = func_358(uParam0, uParam0->f_12);
								}
								func_287(GET_HASH_KEY(func_351(uParam0->f_12)), iVar0, 0);
								func_280(0, 31, 3);
								func_278();
								func_277();
								uParam0->f_54 = 11;
							}
							else
							{
								if (func_439(1))
								{
									func_409();
								}
								uParam0->f_54 = 9;
								uParam0->f_15 = GET_GAME_TIMER();
								PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", true);
								if (!bParam8)
								{
									func_389(uParam0, &(iParam6->f_3));
								}
							}
							break;
						
						case 2:
							uParam0->f_35 = 1;
							PLAY_SOUND_FRONTEND(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", true);
							uParam5->f_5[uParam0->f_12]++;
							uParam0->f_54 = 6;
							break;
						
						default:
							break;
						}
				}
				break;
			
			case 6:
				if (!bParam8)
				{
					func_316(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				if (func_216())
				{
					_NETWORK_SHOP_SET_TELEMETRY_NONCE_SEED(func_275(func_276()));
				}
				if (bParam8)
				{
					if (!IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_119, 6))
					{
						0x0D30EB83668E63C5(1, uParam0->f_12, 0, 1);
						SET_BIT(&(Global_1590446[SET_BIT() /*871*/].f_273.f_119), 6);
					}
					iVar1 = 0;
					switch (uParam0->f_12)
					{
						case 3:
							func_107(1275, 1, -1);
							func_106(16, 1, -1, 1);
							break;
						
						case 1:
							func_107(1276, 1, -1);
							func_106(15, 1, -1, 1);
							break;
						
						case 2:
							func_106(14, 1, -1, 1);
							func_107(1277, 1, -1);
							break;
						
						case 4:
							uParam0->f_55 = 20;
							if (func_128(1097, -1, 0) + 20 > 20)
							{
								uParam0->f_55 = (20 - func_128(1097, -1, 0));
							}
							func_107(1097, uParam0->f_55, -1);
							break;
						
						case 0:
							func_107(62, 1, -1);
							break;
						
						case 5:
							func_107(63, 1, -1);
							break;
					}
				}
				else
				{
					switch (uParam0->f_12)
					{
						case 3:
							if (func_274(PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_358(uParam0, uParam0->f_12);
							}
							func_107(1275, 1, -1);
							func_106(16, 1, -1, 1);
							NETWORK_BUY_ITEM(iVar1, NETWORK_BUY_ITEM("SNK_ITEM1"), 12, 1, false, 0, 0, 0, 0, true);
							break;
						
						case 1:
							if (func_274(PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_358(uParam0, uParam0->f_12);
							}
							func_107(1276, 1, -1);
							func_106(15, 1, -1, 1);
							NETWORK_BUY_ITEM(iVar1, NETWORK_BUY_ITEM("SNK_ITEM2"), 12, 1, false, 0, 0, 0, 0, true);
							break;
						
						case 2:
							if (func_274(PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_358(uParam0, uParam0->f_12);
							}
							func_106(14, 1, -1, 1);
							func_107(1277, 1, -1);
							NETWORK_BUY_ITEM(iVar1, NETWORK_BUY_ITEM("SNK_ITEM3"), 12, 1, false, 0, 0, 0, 0, true);
							break;
						
						case 4:
							if (func_274(PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_358(uParam0, uParam0->f_12);
							}
							uParam0->f_55 = 20;
							if (func_128(1097, -1, 0) + 20 > 20)
							{
								uParam0->f_55 = (20 - func_128(1097, -1, 0));
							}
							func_107(1097, uParam0->f_55, -1);
							NETWORK_BUY_ITEM(iVar1, NETWORK_BUY_ITEM("SNK_ITEM4"), 12, 1, false, 0, 0, 0, 0, true);
							break;
						
						case 0:
							if (func_274(PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_358(uParam0, uParam0->f_12);
							}
							func_107(62, 1, -1);
							NETWORK_BUY_ITEM(iVar1, NETWORK_BUY_ITEM("SNK_ITEM5"), 12, 1, false, 0, 0, 0, 0, true);
							break;
						
						case 5:
							if (func_274(PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_358(uParam0, uParam0->f_12);
							}
							func_107(63, 1, -1);
							NETWORK_BUY_ITEM(iVar1, NETWORK_BUY_ITEM("SNK_ITEM6"), 12, 1, false, 0, 0, 0, 0, true);
							break;
						}
				}
				if (func_216())
				{
					func_208(func_276());
				}
				func_273(-iVar1, 0);
				uParam0->f_51 = (uParam0->f_51 + iVar1);
				if (!IS_BIT_SET(*iParam6, 30))
				{
					SET_BIT(iParam6, 30);
				}
				if (!IS_BIT_SET(iParam6->f_1, 0))
				{
					SET_BIT(&(iParam6->f_1), 0);
					iParam6->f_2 = uParam0->f_12;
				}
				if (uParam0->f_34 || uParam0->f_51 >= 1000)
				{
					uParam0->f_54 = 10;
					if (!bParam8)
					{
						func_389(uParam0, &(iParam6->f_3));
					}
					func_150("SHR_SOLD_OUT", -1);
				}
				else if (uParam5->f_5[uParam0->f_12] >= 10 || func_359(uParam0->f_12))
				{
					uParam0->f_54 = 3;
				}
				else
				{
					uParam0->f_54 = 4;
				}
				break;
			
			case 8:
				func_195(1);
				switch (uParam0->f_12)
				{
					case 3:
						func_271(0, 1f, 3);
						func_107(1275, 1, -1);
						func_106(13, 1, -1, 1);
						break;
					
					case 1:
						func_271(1, 1f, 3);
						func_107(1276, 1, -1);
						func_106(13, 1, -1, 1);
						break;
					
					case 2:
						func_271(2, 1f, 3);
						func_107(1277, 1, -1);
						func_106(13, 1, -1, 1);
						break;
					
					case 4:
						uParam0->f_55 = 20;
						if (func_128(1097, -1, 0) + 20 > 20)
						{
							uParam0->f_55 = (20 - func_128(1097, -1, 0));
						}
						func_271(5, to_float(uParam0->f_55), 3);
						func_107(1097, uParam0->f_55, -1);
						break;
					
					case 0:
						func_271(3, 1f, 3);
						func_107(62, 1, -1);
						break;
					
					case 5:
						func_271(4, 1f, 3);
						func_107(63, 1, -1);
						break;
				}
				if (!bParam8)
				{
					func_427(PLAYER_ID(), 1, 0, 0);
				}
				if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) < 1 && !func_269(GET_PLAYER_WANTED_LEVEL()))
				{
					REPORT_CRIME(REPORT_CRIME(), 37, REPORT_CRIME(1));
					SET_BIT(iParam6, 25);
					if (!IS_BIT_SET(*iParam6, 1))
					{
						SET_BIT(iParam6, 2);
					}
				}
				if (!IS_BIT_SET(iParam6->f_1, 2))
				{
					SET_BIT(&(iParam6->f_1), 2);
				}
				uParam0->f_54 = 12;
				break;
			
			case 11:
				if (!Global_98721.f_1417 && !_0x2EAC52B4019E2782())
				{
					uParam0->f_54 = 4;
				}
				break;
			
			case 10:
				if (!bParam8)
				{
					func_427(PLAYER_ID(), 1, 0, 0);
				}
				if ((GET_GAME_TIMER() - uParam0->f_15) > 1000)
				{
					uParam0->f_54 = 12;
				}
				else
				{
					SET_INPUT_EXCLUSIVE(2, 203);
					SET_INPUT_EXCLUSIVE(2, 202);
					SET_INPUT_EXCLUSIVE(2, 188);
					SET_INPUT_EXCLUSIVE(2, 187);
					SET_INPUT_EXCLUSIVE(2, 189);
					SET_INPUT_EXCLUSIVE(2, 190);
				}
				break;
			
			case 9:
				if ((GET_GAME_TIMER() - uParam0->f_15) > 1000)
				{
					uParam0->f_54 = 0;
				}
				else
				{
					SET_INPUT_EXCLUSIVE(2, 203);
					SET_INPUT_EXCLUSIVE(2, 202);
					SET_INPUT_EXCLUSIVE(2, 188);
					SET_INPUT_EXCLUSIVE(2, 187);
					SET_INPUT_EXCLUSIVE(2, 189);
					SET_INPUT_EXCLUSIVE(2, 190);
				}
				break;
			
			case 12:
				if (IS_BIT_SET(uParam5->f_1, 3))
				{
					if (IS_BIT_SET(iParam6->f_1, 2))
					{
						CLEAR_BIT(&(iParam6->f_1), 2);
					}
					if (IS_BIT_SET(iParam6->f_1, 3))
					{
						CLEAR_BIT(&(iParam6->f_1), 3);
					}
				}
				break;
		}
	}
	else
	{
		if ((GET_GAME_TIMER() % 8000) < 50)
		{
		}
		if (IS_BIT_SET(uParam5->f_1, 3))
		{
			if (IS_BIT_SET(iParam6->f_1, 2))
			{
				CLEAR_BIT(&(iParam6->f_1), 2);
			}
			if (IS_BIT_SET(iParam6->f_1, 3))
			{
				CLEAR_BIT(&(iParam6->f_1), 3);
			}
		}
		if ((uParam0->f_54 != 12 && IS_BIT_SET(uParam0->f_52, 26)) && !IS_BIT_SET())
		{
			if ((((uParam0->f_54 == 4 || uParam0->f_54 == 3) || uParam0->f_54 == 6) || uParam0->f_54 == 11) || uParam0->f_54 == 5)
			{
				func_389(uParam0, &(iParam6->f_3));
			}
			uParam0->f_54 = 12;
		}
		if (uParam0->f_14 != -1)
		{
			func_263(&(uParam0->f_14));
		}
	}
}

int func_269(int iParam0)
{
	if ((func_40(iParam0) || func_270(iParam0)) && func_217(func_218(iParam0)) == 0f)
	{
		return 1;
	}
	return 0;
}

int func_270(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return IS_BIT_SET(Global_1628955[iVar0 /*614*/].f_1, 7);
	}
	return 0;
}

void func_271(int iParam0, float fParam1, int iParam2)
{
	struct<8> Var0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	
	if (fParam1 > 0f)
	{
		if (func_272(iParam0, &Var0))
		{
			vVar1 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), false) };
			func_195(1);
			iVar3 = -1;
			iVar2 = 0;
			while (iVar2 < 20)
			{
				if (Global_2437549.f_1289[iVar2 /*30*/].f_6 == 0 || Global_2437549.f_1289[iVar2 /*30*/].f_6 == 7)
				{
					iVar3 = iVar2;
					iVar2 = 20;
				}
				iVar2++;
			}
			if (iVar3 != -1)
			{
				Global_2437549.f_1289[iVar3 /*30*/] = { vVar1 };
				Global_2437549.f_1289[iVar3 /*30*/].f_6 = 1;
				Global_2437549.f_1289[iVar3 /*30*/].f_4 = func_194(Global_2437549.f_1289[iVar3 /*30*/], &Global_1312317, &Global_1312318);
				Global_2437549.f_1289[iVar3 /*30*/].f_5 = fParam1;
				Global_2437549.f_1289[iVar3 /*30*/].f_7 = 0xBA7F0B77D80A4EB7();
				Global_2437549.f_1289[iVar3 /*30*/].f_8 = iParam2;
				Global_2437549.f_1289[iVar3 /*30*/].f_14 = { Var0 };
				Global_2437549.f_1289[iVar3 /*30*/].f_9 = func_193();
				Global_2437549.f_1289[iVar3 /*30*/].f_10 = func_192();
			}
		}
	}
}

int func_272(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "PU_REWARD_S1", 32);
			return 1;
		
		case 1:
			StringCopy(sParam1, "PU_REWARD_S2", 32);
			return 1;
		
		case 2:
			StringCopy(sParam1, "PU_REWARD_S3", 32);
			return 1;
		
		case 3:
			StringCopy(sParam1, "PU_REWARD_D1", 32);
			return 1;
		
		case 4:
			StringCopy(sParam1, "PU_REWARD_D2", 32);
			return 1;
		
		case 5:
			StringCopy(sParam1, "PU_REWARD_11", 32);
			return 1;
		
		case 6:
			StringCopy(sParam1, "PU_REWARD_PC", 32);
			return 1;
		
		default:
	}
	return 0;
}

void func_273(int iParam0, int iParam1)
{
	func_203(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_204(iParam0, 0);
	}
}

int func_274(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_182())
	{
		return 0;
	}
	if (IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_24, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_24, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_275(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263810[iParam0 /*84*/].f_65;
	}
	return -1;
}

int func_276()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_275(iVar0) != 2147483647)
		{
			if (func_211(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_277()
{
	Global_2448961.f_684.f_32 = 1;
}

void func_278()
{
	Global_2448961.f_684.f_28 = 1;
	Global_2448961.f_684.f_32 = 0;
	Global_2448961.f_684.f_31 = GET_HASH_KEY(GET_HASH_KEY());
	func_14(&(Global_2448961.f_684.f_29));
}

char* func_279()
{
	if (func_13())
	{
		return "Shoplift_Mid";
	}
	return "Shoplift_Low";
}

void func_280(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!_0x883D79C4071E18B3())
	{
		return;
	}
	if (NETWORK_IS_GAME_IN_PROGRESS() && func_284(NETWORK_IS_GAME_IN_PROGRESS(), 1, 0))
	{
		return;
	}
	if (IS_CONTROL_PRESSED(2, 199) || IS_CONTROL_PRESSED(2, 199))
	{
		return;
	}
	if (GET_PAUSE_MENU_STATE() != 0)
	{
		return;
	}
	if (IS_PAUSE_MENU_ACTIVE())
	{
		return;
	}
	if (IS_SYSTEM_UI_BEING_DISPLAYED())
	{
		return;
	}
	if (IS_WARNING_MESSAGE_ACTIVE())
	{
		return;
	}
	if (func_283())
	{
		return;
	}
	if (!func_281())
	{
		return;
	}
	if (NETWORK_IS_GAME_IN_PROGRESS() || iParam0)
	{
		if (!Global_98721.f_1417 && !_0x2EAC52B4019E2782())
		{
			iVar0 = 18;
			_set_warning_message_2("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", 0, -1, 0, 0, 1, 0);
			Global_2460053 = iParam1;
			Global_98721.f_1417 = 1;
			Global_98721.f_1418 = iParam2;
		}
	}
}

int func_281()
{
	if (func_282())
	{
		return 0;
	}
	if (NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_282()
{
	return Global_2459500;
}

bool func_283()
{
	return Global_2460158;
}

int func_284(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_285(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590446[iParam0 /*871*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_285(int iParam0)
{
	return func_286(iParam0);
}

bool func_286(int iParam0)
{
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_13.f_1, 0);
}

void func_287(int iParam0, int iParam1, int iParam2)
{
	Global_98721.f_1419 = iParam0;
	Global_98721.f_1420 = iParam1;
	Global_98721.f_1421 = iParam2;
}

int func_288(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	char* sVar4;
	
	if (uParam0->f_47)
	{
		switch (uParam0->f_48)
		{
			case 0:
				iVar0 = 0;
				iVar1 = 0;
				iVar2 = iParam3;
				if (NETWORK_GET_VC_BANK_BALANCE() > 0)
				{
					if (NETWORK_GET_VC_BANK_BALANCE() >= iVar2)
					{
						iVar1 = iVar2;
					}
					else
					{
						iVar1 = (iVar2 - (iVar2 - NETWORK_GET_VC_BANK_BALANCE()));
					}
					iVar2 = (iVar2 - iVar1);
				}
				if (iVar2 > 0)
				{
					if (NETWORK_GET_VC_WALLET_BALANCE(-1) > 0)
					{
						if (NETWORK_GET_VC_WALLET_BALANCE(-1) >= iVar2)
						{
							iVar0 = iVar2;
						}
						else
						{
							iVar0 = (iVar2 - (iVar2 - NETWORK_GET_VC_WALLET_BALANCE(-1)));
						}
						iVar2 = (iVar2 - iVar0);
					}
				}
				cVar3 = func_367(uParam0->f_12);
				func_296(&sVar4, cVar3, func_297(uParam0));
				if (func_293(78225582, iParam1, GET_HASH_KEY(&sVar4), iParam2, 1, iParam3, 1, 8, 0, 3))
				{
					if (func_291())
					{
						_UPDATE_DISPLAY_CASH(1);
						_SET_PLAYER_CASH_CHANGE(-iVar0, -iVar1);
						uParam0->f_48 = 1;
					}
					else
					{
						uParam0->f_48 = 3;
					}
				}
				else
				{
					uParam0->f_48 = 3;
				}
				break;
			
			case 1:
				if (func_290(func_276()))
				{
					if (func_289(func_276()) == 2)
					{
						uParam0->f_48 = 2;
					}
					else
					{
						uParam0->f_48 = 3;
					}
				}
				break;
			
			case 2:
				uParam0->f_47 = 0;
				uParam0->f_48 = 0;
				_UPDATE_DISPLAY_CASH(0);
				HIDE_HUD_COMPONENT_THIS_FRAME(13);
				uParam0->f_49 = 2;
				return 0;
				break;
			
			case 3:
				func_208(func_276());
				uParam0->f_47 = 0;
				uParam0->f_48 = 0;
				_UPDATE_DISPLAY_CASH(0);
				HIDE_HUD_COMPONENT_THIS_FRAME(13);
				uParam0->f_49 = 0;
				return 0;
				break;
		}
		return 1;
	}
	uParam0->f_48 = 0;
	uParam0->f_49 = -1;
	return 0;
}

int func_289(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263810[iParam0 /*84*/].f_65.f_2;
	}
	return 0;
}

int func_290(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263810[iParam0 /*84*/].f_65.f_2 != 1;
	}
	return 0;
}

int func_291()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_216())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_276();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!_NETWORK_SHOP_GET_TRANSACTIONS_ENABLED_FOR_CHARACTER(func_79()) || _NETWORK_SHOP_GET_TRANSACTIONS_ENABLED_FOR_CHARACTER())
		{
			if (func_292(Global_4263810[iVar2 /*84*/].f_65.f_6, Global_4263810[iVar2 /*84*/].f_65.f_4, Global_4263810[iVar2 /*84*/].f_65.f_1) == 1)
			{
				Global_4264386 = 1;
			}
			return 0;
		}
		if (Global_2460158)
		{
			if (Global_4263810[iVar2 /*84*/].f_65.f_6 == 1067618600 || Global_4263810[iVar2 /*84*/].f_65.f_6 == -1303831698)
			{
				Global_4264387 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_275(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || _NETWORK_SHOP_CHECKOUT_START(iVar3))
		{
			Global_4263810[iVar2 /*84*/].f_65.f_13 = 1;
			Global_4263810[iVar2 /*84*/].f_65.f_12 = 0;
			Global_4263810[iVar2 /*84*/].f_65.f_14 = GET_FRAME_COUNT();
			if (bVar0)
			{
				Global_4263810[iVar2 /*84*/].f_65.f_8 = 1;
				Global_4263810[iVar2 /*84*/].f_65.f_12 = 1;
			}
			Global_4263810[iVar2 /*84*/].f_65.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_214(Global_4263810[iVar2 /*84*/], iVar2);
			}
			Global_4264371 = 1;
			return 1;
		}
	}
	return 0;
}

int func_292(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case 312105838:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case -1426920838:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case -59668082:
			case 1736933716:
			case -1468524125:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case -934465332:
			case -1194253122:
			case -212607085:
			case -815546555:
			case 1048226110:
			case 569170531:
			case -856006867:
			case 848090538:
			case -47546905:
			case -293060240:
			case 463142405:
			case 1550217370:
			case -664597565:
			case 599804707:
			case 1052472386:
			case -2130199671:
			case -1227654538:
			case 1864522104:
			case 215608230:
			case -876012764:
			case -722894325:
			case 1407278493:
			case -1579394494:
			case -27443911:
			case 1179783540:
			case 923419301:
			case -308826175:
			case 603298940:
			case -12619854:
			case -311112675:
			case 870439158:
			case -974288740:
			case -4138654:
			case -1180954122:
			case -1918051016:
			case 844330594:
			case 1934825517:
			case 1852024236:
			case 2099238988:
			case 1952643559:
			case -1172900789:
			case -2015399333:
			case -1574795641:
			case -961034881:
			case 1135468152:
			case 1265272476:
			case -634726636:
			case 696556762:
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
			case 1057653594:
			case 1810506918:
			case 451427308:
			case 824622151:
			case 1253978276:
			case -1576080766:
			case 1508411869:
			case 1428501742:
			case -1918967151:
			case 1261538664:
			case 1180397655:
			case 1414674366:
			case 261460130:
			case -2027658376:
			case 1668610896:
			case -2032529561:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
		switch (iParam1)
		{
			case -319306689:
			case -466527264:
			case 1925965142:
			case 592152676:
			case 2035612943:
			case 1568659720:
			case -1224479447:
			case 1220095570:
			case 2050320631:
			case 592672421:
				return 1;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_293(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_216())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!_NETWORK_SHOP_GET_TRANSACTIONS_ENABLED_FOR_CHARACTER(func_79()) || _NETWORK_SHOP_GET_TRANSACTIONS_ENABLED_FOR_CHARACTER())
		{
			Global_4264386 = 1;
			return 0;
		}
		if (Global_2460158)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4264387 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_276();
	if (iVar1 == -1)
	{
		if (!func_295(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_294(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = uParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = uParam5;
			Var2.f_3 = iParam6;
		}
		Global_4263810[iVar1 /*84*/].f_65.f_1 = Var2.f_2;
		Global_4263810[iVar1 /*84*/].f_65.f_15 = Var2;
		Global_4263810[iVar1 /*84*/].f_65.f_16 = Var2.f_1;
		if (bVar0 || _NETWORK_SHOP_BASKET_ADD_ITEM(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_294(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_295(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_216())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!_NETWORK_SHOP_GET_TRANSACTIONS_ENABLED_FOR_CHARACTER(func_79()) || _NETWORK_SHOP_GET_TRANSACTIONS_ENABLED_FOR_CHARACTER())
		{
			Global_4264386 = 1;
			return 0;
		}
		if (Global_2460158)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4264387 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_4263810[iVar1 /*84*/].f_65.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4263810[iVar1 /*84*/].f_65.f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (_NETWORK_SHOP_BASKET_END())
		{
			0xFA336E7F40C0A0D0();
		}
	}
	if (bVar0 || _NETWORK_SHOP_BASKET_START(&iVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_213(iVar3, iParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

void func_296(char* sParam0, char* sParam1, int iParam2)
{
	StringCopy(sParam0, "MT_", 64);
	StringConCat(sParam0, sParam1, 64);
	StringConCat(sParam0, "_t0_v", 64);
	StringIntConCat(sParam0, iParam2, 64);
}

int func_297(var uParam0)
{
	if (func_274(PLAYER_ID(), 1, 0) || func_298(PLAYER_ID()))
	{
		return 3;
	}
	else if (uParam0->f_50 >= 10 && uParam0->f_50 <= 14)
	{
		return 0;
	}
	else if (uParam0->f_50 >= 15 && uParam0->f_50 <= 19)
	{
		return 1;
	}
	else
	{
		return 2;
	}
	return -1;
}

int func_298(int iParam0)
{
	if (iParam0 != func_182())
	{
		if (func_46(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_299(Global_2424073[iParam0 /*421*/].f_309.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_299(int iParam0)
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

void func_300(var uParam0, var uParam1, bool bParam2)
{
	char* sVar0;
	
	if (!uParam0->f_29)
	{
	}
	if (func_309(uParam0))
	{
		uParam0->f_27 = 0;
		func_308(&(uParam0->f_44));
		uParam0->f_12 = (uParam0->f_12 - 1);
		if (uParam0->f_12 < 0)
		{
			uParam0->f_12 = (uParam0->f_13 - 1);
		}
		PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", true);
		func_353(uParam0->f_12, 1, 1);
		sVar0 = func_351(uParam0->f_12);
		uParam0->f_29 = 0;
		uParam0->f_30 = 0;
		uParam0->f_32 = 0;
		if (DOES_TEXT_LABEL_EXIST(sVar0))
		{
			func_352(sVar0, 0, 0);
		}
	}
	if (func_305(uParam0))
	{
		uParam0->f_27 = 0;
		func_308(&(uParam0->f_44));
		uParam0->f_12++;
		if (uParam0->f_12 > (uParam0->f_13 - 1))
		{
			uParam0->f_12 = 0;
		}
		PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", true);
		func_353(uParam0->f_12, 1, 1);
		sVar0 = func_351(uParam0->f_12);
		uParam0->f_29 = 0;
		uParam0->f_30 = 0;
		uParam0->f_32 = 0;
		if (DOES_TEXT_LABEL_EXIST(sVar0))
		{
			func_352(sVar0, 0, 0);
		}
	}
	if (!uParam0->f_29)
	{
		if (NETWORK_CAN_SPEND_MONEY(func_358(uParam0, uParam0->f_12), false, true, 0, -1, 0))
		{
			uParam0->f_28 = 1;
		}
		else
		{
			uParam0->f_28 = 0;
			uParam0->f_36 = 1;
		}
		uParam0->f_29 = 1;
	}
	if (!uParam0->f_30)
	{
		uParam0->f_31 = 1;
		if (uParam0->f_12 == 3)
		{
			uParam0->f_31 = func_128(1275, -1, 0) < 30;
		}
		else if (uParam0->f_12 == 1)
		{
			uParam0->f_31 = func_128(1276, -1, 0) < 15;
		}
		else if (uParam0->f_12 == 2)
		{
			uParam0->f_31 = func_128(1277, -1, 0) < 5;
		}
		else if (uParam0->f_12 == 4)
		{
			uParam0->f_31 = func_128(1097, -1, 0) < 20;
		}
		else if (uParam0->f_12 == 0)
		{
			uParam0->f_31 = func_128(62, -1, 0) < 10;
		}
		else if (uParam0->f_12 == 5)
		{
			uParam0->f_31 = func_128(63, -1, 0) < 10;
		}
		uParam0->f_30 = 1;
	}
	if (!uParam0->f_32)
	{
		if ((*uParam1)[uParam0->f_12] < 10)
		{
			uParam0->f_33 = 1;
		}
		else
		{
			uParam0->f_33 = 0;
			func_352("SNK_SOUT", 0, 0);
		}
		uParam0->f_32 = 1;
	}
	if (uParam0->f_27)
	{
		if (func_301(&(uParam0->f_44)) < 3f)
		{
			if (uParam0->f_35)
			{
				if (!bParam2)
				{
					func_352("SNK_BOUGHT", 0, 0);
				}
				else
				{
					func_352("SNK_STORED", 0, 0);
				}
			}
			else if (!uParam0->f_28)
			{
				func_352("SNK_AFFORD", 0, 0);
			}
			else if (!uParam0->f_33)
			{
				func_352("SNK_SOUT", 0, 0);
			}
			else if (!uParam0->f_31)
			{
				if (uParam0->f_12 == 3)
				{
					func_352("SNK_SNK1FU", 0, 0);
				}
				else if (uParam0->f_12 == 1)
				{
					func_352("SNK_SNK2FU", 0, 0);
				}
				else if (uParam0->f_12 == 2)
				{
					func_352("SNK_SNK3FU", 0, 0);
				}
				else if (uParam0->f_12 == 4)
				{
					func_352("SNK_SMOKFU", 0, 0);
				}
				else if (uParam0->f_12 == 0)
				{
					func_352("SNK_DRK1FU", 0, 0);
				}
				else if (uParam0->f_12 == 5)
				{
					func_352("SNK_DRK2FU", 0, 0);
				}
				else
				{
					func_352("SNK_NEEDED", 0, 0);
				}
				SET_BIT(&(uParam0->f_53), 26);
			}
		}
		else
		{
			uParam0->f_27 = 0;
			uParam0->f_35 = 0;
			func_308(&(uParam0->f_44));
			sVar0 = func_351(uParam0->f_12);
			if (DOES_TEXT_LABEL_EXIST(sVar0))
			{
				func_352(sVar0, 0, 0);
			}
		}
	}
}

float func_301(var uParam0)
{
	if (func_304(uParam0))
	{
		if (func_303(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_302(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_302(bool bParam0)
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

bool func_303(var uParam0)
{
	return IS_BIT_SET(*uParam0, 2);
}

bool func_304(var uParam0)
{
	return IS_BIT_SET(*uParam0, 1);
}

int func_305(var uParam0)
{
	float fVar0;
	
	fVar0 = GET_CONTROL_NORMAL(2, 219);
	if ((fVar0 > 0.8f || IS_CONTROL_PRESSED(2, 187)) || IS_CONTROL_PRESSED(2, 242))
	{
		if (!func_304(&(uParam0->f_41)))
		{
			func_307(&(uParam0->f_41));
			return 1;
		}
		else if (func_306(&(uParam0->f_41)) > 0.25f)
		{
			func_382(&(uParam0->f_41));
			return 1;
		}
	}
	else if (func_304(&(uParam0->f_41)))
	{
		func_308(&(uParam0->f_41));
	}
	return 0;
}

float func_306(var uParam0)
{
	if (func_304(uParam0))
	{
		if (func_303(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_302(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_307(int iParam0)
{
	if (!func_304(iParam0))
	{
		func_382(iParam0);
	}
}

void func_308(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_309(var uParam0)
{
	float fVar0;
	
	fVar0 = GET_CONTROL_NORMAL(2, 219);
	if ((fVar0 < -0.8f || IS_CONTROL_PRESSED(2, 188)) || IS_CONTROL_PRESSED(2, 241))
	{
		if (!func_304(&(uParam0->f_38)))
		{
			func_307(&(uParam0->f_38));
			return 1;
		}
		else if (func_306(&(uParam0->f_38)) > 0.25f)
		{
			func_382(&(uParam0->f_38));
			return 1;
		}
	}
	else if (func_304(&(uParam0->f_38)))
	{
		func_308(&(uParam0->f_38));
	}
	return 0;
}

int func_310()
{
	if (_IS_INPUT_DISABLED(2))
	{
		if (Global_4268347 > -1)
		{
			if (IS_CONTROL_JUST_PRESSED(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_311(int iParam0, int iParam1, bool bParam2)
{
	if (!_IS_INPUT_DISABLED(2))
	{
		return 0;
	}
	if (IS_PAUSE_MENU_ACTIVE() || IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (bParam2)
	{
		_SHOW_CURSOR_THIS_FRAME();
	}
	if (Global_4268347 == -6)
	{
		_SET_CURSOR_SPRITE(4);
		if (iParam0 && IS_CONTROL_PRESSED(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4268347 = -1;
			return 0;
		}
	}
	if (((Global_4268347 > -1 || Global_4268347 == -3) || Global_4268347 == -2) || _0x3D9ACB1EB139E702())
	{
		_SET_CURSOR_SPRITE(1);
		return 0;
	}
	if (Global_4268347 == -1 && iParam0)
	{
		if (IS_CONTROL_PRESSED(2, 237))
		{
			_SET_CURSOR_SPRITE(4);
			Global_4268347 = -6;
			return 1;
		}
		else
		{
			_SET_CURSOR_SPRITE(3);
			return 0;
		}
	}
	_SET_CURSOR_SPRITE(1);
	return 0;
}

void func_312(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!_IS_INPUT_DISABLED(2))
	{
		Global_4268347 = -1;
		return;
	}
	_0x5B73C77D9EB66E24(1);
	fVar0 = Global_22347;
	fVar2 = (fVar0 + Global_22349);
	fVar3 = Global_22350.f_5730;
	fVar1 = (Global_22350.f_5730 - (IntToFloat(Global_22350.f_5732) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_22350.f_5732 < 1)
	{
		fVar1 = (Global_22350.f_5730 - 0.034722f);
	}
	SET_SCRIPT_GFX_ALIGN(76, 84);
	_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	_0x6DD8F5AA635EB4B2(fVar0, fVar1, &fVar0, &fVar1);
	_0x6DD8F5AA635EB4B2(fVar2, fVar3, &fVar2, &fVar3);
	RESET_SCRIPT_GFX_ALIGN();
	func_315();
	if (Global_4268347 == -6)
	{
		return;
	}
	Global_4268347 = -1;
	fVar7 = Global_4268341;
	fVar8 = Global_4268342;
	if (Global_22350.f_5733 > Global_22350.f_5732)
	{
		if (((Global_4268341 >= fVar0 && Global_4268341 <= fVar2) && Global_4268342 >= fVar3) && Global_4268342 < (fVar3 + fVar6))
		{
			Global_4268347 = -2;
			if (bParam3)
			{
				func_314(0);
			}
			return;
		}
		if (((Global_4268341 >= fVar0 && Global_4268341 <= fVar2) && Global_4268342 >= (fVar3 + fVar6)) && Global_4268342 < (fVar3 + 0.034722f))
		{
			Global_4268347 = -3;
			if (bParam3)
			{
				func_314(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = floor((fVar9 / 0.034722f));
		if (Global_22350.f_5733 == -1)
		{
			Global_4268347 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_22350.f_5732);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				SET_SCRIPT_GFX_ALIGN(76, 84);
				_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
				func_313(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_22349, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				RESET_SCRIPT_GFX_ALIGN();
			}
		}
		Global_4268347 = Global_22350.f_8006[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4268347 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4268347 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4268347 = -4;
		return;
	}
	Global_4268347 = -1;
}

void func_313(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_314(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_22347;
	fVar1 = Global_22350.f_5730;
	SET_SCRIPT_GFX_ALIGN(76, 84);
	_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
	if (Global_4268347 == -2)
	{
		func_313(fVar0, fVar1, Global_22349, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4268347 == -3)
	{
		func_313(fVar0, (fVar1 + fVar2), Global_22349, fVar2, 255, 255, 255, iVar3);
	}
	RESET_SCRIPT_GFX_ALIGN();
}

void func_315()
{
	Global_4268343 = Global_4268341;
	Global_4268344 = Global_4268342;
	Global_4268341 = GET_DISABLED_CONTROL_NORMAL(2, 239);
	Global_4268342 = GET_DISABLED_CONTROL_NORMAL(2, 240);
	Global_4268345 = (Global_4268341 - Global_4268343);
	Global_4268346 = (Global_4268342 - Global_4268344);
}

void func_316(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	vector3 vVar38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	int iVar58;
	int iVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	char cVar63[64];
	char cVar64[64];
	float fVar65;
	int iVar66;
	float fVar67;
	float fVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	char cVar75[16];
	float fVar76;
	float fVar77;
	float fVar78;
	float fVar79;
	float fVar80;
	
	if (!func_166(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_348(0, bParam6))
	{
		return;
	}
	SET_SCRIPT_GFX_ALIGN(76, 84);
	_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	fVar56 = 0f;
	if (Global_22350)
	{
		if (func_346(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar55 = fVar37;
			fVar56 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_22350 = 0;
		}
	}
	if (GET_HASH_KEY(&(Global_22350.f_1)) == GET_HASH_KEY("HIDE"))
	{
		fVar57 = Global_22348;
	}
	else
	{
		fVar57 = (((Global_22348 + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_22349;
	}
	fVar60 = 1f;
	if (bParam7)
	{
		_GET_ACTIVE_SCREEN_RESOLUTION(&iVar58, &iVar59);
		fVar61 = _GET_ASPECT_RATIO(0);
		if (func_345())
		{
			iVar58 = round((to_float(iVar59) * fVar61));
		}
		fVar62 = (to_float(iVar58) / to_float(iVar59));
		fVar60 = (fVar62 / fVar61);
		if (func_345())
		{
			fVar60 = 1f;
		}
		iVar58 = round((to_float(iVar58) / fVar60));
		iVar59 = round((to_float(iVar59) / fVar60));
	}
	else
	{
		GET_SCREEN_RESOLUTION(&iVar58, &iVar59);
	}
	if (bParam3)
	{
		if (Global_22350.f_5218 <= 1)
		{
			func_363(Global_22350.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
			Global_22350.f_6014 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_22350.f_5728)
		{
			if (GET_HASH_KEY(&(Global_22350.f_1)) == GET_HASH_KEY("HIDE"))
			{
				fVar49 = Global_22348;
			}
			else
			{
				if (Global_22350)
				{
					StringCopy(&cVar63, func_344(29), 64);
					StringCopy(&cVar64, func_342(29, 1), 64);
					if (GET_HASH_KEY(&(Global_22350.f_7013[29 /*16*/])) == -1487683087)
					{
						func_313(Global_22347, Global_22348, fParam5, (fVar55 - 0f), 0, 0, 0, 255);
						DRAW_SPRITE(&cVar63, &cVar64, (Global_22347 + (fParam5 * 0.5f)), (Global_22348 + ((fVar55 - 0f) * 0.5f)), fVar56, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						DRAW_SPRITE(&cVar63, &cVar64, (Global_22347 + (fParam5 * 0.5f)), (Global_22348 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_22350.f_8355)
				{
					iVar1 = Global_22350.f_8351;
					iVar2 = Global_22350.f_8352;
					iVar3 = Global_22350.f_8353;
					iVar4 = Global_22350.f_8354;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_313(Global_22347, (Global_22348 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_22348 + fVar55) + 0.034722f) + 0f);
				if (GET_HASH_KEY(&(Global_22350.f_1)) != 0)
				{
					func_341();
					BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22350.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_22350.f_68)
					{
						if (Global_22350.f_5[iVar14] == 2)
						{
							ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_22350.f_5[iVar14] == 3)
						{
							ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_14[iVar16], Global_22350.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_22350.f_5[iVar14] == 1)
						{
							ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22350.f_5[iVar14] == 8)
						{
							ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22350.f_5[iVar14] == 5)
						{
							ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 6)
						{
							ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 7)
						{
							ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 9)
						{
							ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					END_TEXT_COMMAND_DISPLAY_TEXT((Global_22347 + 0.00390625f), ((Global_22348 + fVar55) + 0.00416664f), 0);
				}
				if (Global_22350.f_5735)
				{
					func_341();
					func_339((((Global_22347 + fParam5) - 0.00390625f) - func_340("CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737)), ((Global_22348 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737);
				}
				else if (Global_22350.f_5731 > Global_22350.f_5225)
				{
					if (Global_22350.f_5734 != 0)
					{
						func_341();
						func_339((((Global_22347 + fParam5) - 0.00390625f) - func_340("CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733)), ((Global_22348 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733);
					}
				}
			}
			iVar6 = Global_22350.f_5738;
			iVar9 = 0;
			fVar65 = fVar49;
			if (Global_22350.f_8365)
			{
				iVar1 = Global_22350.f_8361;
				iVar2 = Global_22350.f_8362;
				iVar3 = Global_22350.f_8363;
				iVar4 = Global_22350.f_8364;
			}
			else
			{
				GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_22350.f_5225 && iVar6 <= Global_22350.f_5218)
			{
				if (iVar6 >= 0)
				{
					if (Global_22350.f_5485[iVar6])
					{
						if (Global_22350.f_5356[iVar6] && iVar6 != Global_22350.f_5738)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_22350.f_5745[iVar6] != 0f)
						{
							fVar54 = Global_22350.f_5745[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar65 + ((fVar49 - fVar65) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar65), 0f, 255, 255, 255, 255, 0);
			if (Global_22350.f_5731 > Global_22350.f_5225)
			{
				if (Global_22350.f_8370)
				{
					iVar1 = Global_22350.f_8366;
					iVar2 = Global_22350.f_8367;
					iVar3 = Global_22350.f_8368;
					iVar4 = Global_22350.f_8369;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_313(Global_22347, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				vVar38 = { GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				vVar38.x = (vVar38.x * (0.5f / fVar60));
				vVar38.y = (vVar38.y * (0.5f / fVar60));
				if (Global_22350.f_8383)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_22347 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((vVar38.x / 1280f) * fVar60), ((vVar38.y / 720f) * fVar60), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (GET_HASH_KEY(&(Global_22350.f_4690)) != 0 && Global_22350.f_4766 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_22347 + 0.0046875f);
				if (Global_22350.f_4768 != 0)
				{
					func_346(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_338(fVar40);
				_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_22350.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22350.f_4762)
				{
					if (Global_22350.f_4696[iVar14] == 2)
					{
						ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22350.f_4696[iVar14] == 3)
					{
						ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4705[iVar16], Global_22350.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22350.f_4696[iVar14] == 1)
					{
						ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 5)
					{
						ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 6)
					{
						ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 7)
					{
						ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 9)
					{
						ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = _GET_TEXT_SCREEN_LINE_COUNT(fVar40, (fVar49 + 0.00277776f));
				GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_313(Global_22347, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22350.f_8375)
				{
					iVar1 = Global_22350.f_8371;
					iVar2 = Global_22350.f_8372;
					iVar3 = Global_22350.f_8373;
					iVar4 = Global_22350.f_8374;
				}
				else
				{
					GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar49 + ((((DRAW_SPRITE(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((DRAW_SPRITE(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_338(fVar40);
				BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22350.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22350.f_4762)
				{
					if (Global_22350.f_4696[iVar14] == 2)
					{
						ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22350.f_4696[iVar14] == 3)
					{
						ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4705[iVar16], Global_22350.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22350.f_4696[iVar14] == 1)
					{
						ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 5)
					{
						ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 6)
					{
						ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 7)
					{
						ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 9)
					{
						ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 8)
					{
						ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_22350.f_4768 != 0)
				{
					func_346(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_337(Global_22350.f_4768, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					DRAW_SPRITE(func_344(Global_22350.f_4768), func_342(Global_22350.f_4768, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_22350.f_4766 > 0)
				{
					if ((GET_GAME_TIMER() - Global_22350.f_4767) > Global_22350.f_4766)
					{
						StringCopy(&(Global_22350.f_4690), "", 24);
						Global_22350.f_4766 = -1;
					}
				}
			}
			if (GET_HASH_KEY(&(Global_4268271.f_21)) != 0 && Global_4268271.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_22347 + 0.0046875f);
				if (Global_4268271.f_67 != 0)
				{
					func_346(Global_4268271.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_338(fVar40);
				_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_4268271.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4268271.f_61)
				{
					if (Global_4268271.f_25[iVar14] == 2)
					{
						ADD_TEXT_COMPONENT_INTEGER(Global_4268271.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4268271.f_25[iVar14] == 3)
					{
						ADD_TEXT_COMPONENT_FLOAT(Global_4268271.f_34[iVar16], Global_4268271.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4268271.f_25[iVar14] == 1)
					{
						ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268271.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268271.f_25[iVar14] == 5)
					{
						ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268271.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268271.f_25[iVar14] == 6)
					{
						ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268271.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268271.f_25[iVar14] == 7)
					{
						ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268271.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268271.f_25[iVar14] == 9)
					{
						ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268271.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268271.f_25[iVar14] == 8)
					{
						ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268271.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = _GET_TEXT_SCREEN_LINE_COUNT(fVar40, (fVar49 + 0.00277776f));
				GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_313(Global_22347, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22350.f_8375)
				{
					iVar1 = Global_22350.f_8371;
					iVar2 = Global_22350.f_8372;
					iVar3 = Global_22350.f_8373;
					iVar4 = Global_22350.f_8374;
				}
				else
				{
					GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar49 + ((((DRAW_SPRITE(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((DRAW_SPRITE(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_338(fVar40);
				BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4268271.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4268271.f_61)
				{
					if (Global_4268271.f_25[iVar14] == 2)
					{
						ADD_TEXT_COMPONENT_INTEGER(Global_4268271.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4268271.f_25[iVar14] == 3)
					{
						ADD_TEXT_COMPONENT_FLOAT(Global_4268271.f_34[iVar16], Global_4268271.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4268271.f_25[iVar14] == 1)
					{
						ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268271.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268271.f_25[iVar14] == 8)
					{
						ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268271.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268271.f_25[iVar14] == 5)
					{
						ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268271.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268271.f_25[iVar14] == 6)
					{
						ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268271.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268271.f_25[iVar14] == 7)
					{
						ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268271.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4268271.f_25[iVar14] == 9)
					{
						ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268271.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_4268271.f_67 != 0)
				{
					func_346(Global_4268271.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_337(Global_4268271.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					DRAW_SPRITE(func_344(Global_4268271.f_67), func_342(Global_4268271.f_67, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4268271.f_65 > 0)
				{
					if ((GET_GAME_TIMER() - Global_4268271.f_66) > Global_4268271.f_65)
					{
						StringCopy(&(Global_4268271.f_21), "", 16);
						Global_4268271.f_65 = -1;
					}
				}
			}
			func_330(iVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			SET_SCRIPT_GFX_ALIGN(76, 84);
			_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_22350.f_5728)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar66 = Global_22350.f_5218;
			if (Global_22350.f_5729)
			{
				iVar66 = (Global_22350.f_5732 - 1);
			}
			fVar67 = 0f;
			fVar68 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar66)
			{
				fVar54 = 0.034722f;
				if (Global_22350.f_5745[iVar6] != 0f)
				{
					fVar54 = Global_22350.f_5745[iVar6];
				}
				if (Global_22350.f_5729)
				{
					iVar6 = Global_22350.f_8006[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_22350.f_5738 && iVar9 < Global_22350.f_5225)
				{
					bVar33 = true;
					if (Global_22350.f_5739 == iVar6)
					{
						fVar68 = fVar67;
					}
					if (Global_22350.f_5356[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_22350.f_5879[iVar6] = fVar35;
				fVar34 = (Global_22347 + 0.0046875f);
				bVar39 = false;
				bVar32 = Global_22350.f_5739 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar70 = 255;
					iVar71 = 255;
					iVar72 = 255;
					iVar73 = 255;
					if (Global_22350.f_8377)
					{
						GET_HUD_COLOUR(Global_22350.f_8376, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					else
					{
						GET_HUD_COLOUR(1, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_22347 + (fParam5 * 0.5f)), (((fVar57 + fVar68) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar70, iVar71, iVar72, iVar73, 0);
					Global_22350.f_5877 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_22350.f_5226)
				{
					if (IS_BIT_SET(Global_22350.f_5089[iVar6], iVar8) || Global_22350.f_5056[iVar8] == 5)
					{
						if (Global_22350.f_5729)
						{
							iVar19 = Global_22350.f_8022[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar20 = Global_22350.f_8063[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar21 = Global_22350.f_8104[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar22 = Global_22350.f_8145[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar23 = Global_22350.f_8186[((iVar9 * Global_22350.f_5226) + iVar8)];
						}
						else
						{
							Global_22350.f_8022[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar19;
							Global_22350.f_8063[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar20;
							Global_22350.f_8104[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar21;
							Global_22350.f_8145[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar22;
							Global_22350.f_8186[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar23;
						}
						iVar74 = 0;
						bVar53 = false;
						if (Global_22350.f_6011[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22350.f_6008[0])
							{
								bVar53 = true;
								iVar74 = 0;
							}
						}
						if (Global_22350.f_6011[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22350.f_6008[1])
							{
								bVar53 = true;
								iVar74 = 1;
							}
						}
						if (Global_22350.f_5062[iVar8] != -1f)
						{
							fVar34 = ((Global_22347 + 0.0046875f) + Global_22350.f_5062[iVar8]);
						}
						if ((iVar8 < 4 && Global_22350.f_5062[iVar8 + 1] != -1f) && fVar34 < Global_22350.f_5062[iVar8 + 1])
						{
							fVar44 = (Global_22350.f_5062[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar44 = (((Global_22347 + Global_22349) - 0.0046875f) - fVar34);
						}
						if ((Global_22350.f_5075[iVar8] && Global_22350.f_5874) && bVar32)
						{
							bVar52 = true;
						}
						else
						{
							bVar52 = false;
						}
						switch (Global_22350.f_5056[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										fVar41 = 0f;
										fVar42 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_328(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, iVar74, bVar51, bVar50);
											_BEGIN_TEXT_COMMAND_WIDTH(&(Global_22350.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2459539[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2459539[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2459539[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2459539[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
												{
													ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4175[(iVar21 + iVar27)], Global_22350.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0)
										{
											fVar41 = _END_TEXT_COMMAND_GET_WIDTH(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_346(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													if (iVar14 > 0)
													{
														fVar42 = (fVar42 - (0.00078125f * 4f));
													}
													if ((Global_22350.f_4433[(iVar22 + iVar14)] == 2 || Global_22350.f_4433[(iVar22 + iVar14)] == 50) || Global_22350.f_4433[(iVar22 + iVar14)] == 60)
													{
														fVar42 = (fVar42 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar40 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
										}
										Global_22350.f_8227[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar40;
										Global_22350.f_8268[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar41;
										Global_22350.f_8309[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											iVar69 = (iVar8 - 1);
											while (iVar69 >= 0)
											{
												if (Global_22350.f_5083[iVar69] == 2)
												{
													Global_22350.f_8227[((iVar9 * Global_22350.f_5226) + iVar69)] = (Global_22350.f_8227[((iVar9 * Global_22350.f_5226) + iVar69)] - Global_22350.f_5068[iVar8]);
												}
												iVar69 = (iVar69 + -1);
											}
										}
									}
									else
									{
										fVar40 = Global_22350.f_8227[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar41 = Global_22350.f_8268[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar42 = Global_22350.f_8309[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar52)
									{
										if (func_346(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_346(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_337(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													DRAW_SPRITE(func_344(26), func_342(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_346(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_346(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_337(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													DRAW_SPRITE(func_344(27), func_342(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar50 = false;
										bVar51 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												bVar51 = true;
											}
											else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												bVar50 = true;
											}
											iVar14++;
										}
										func_328(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
										if (Global_22350.f_8381 && Global_22350.f_8382 == iVar6)
										{
											func_327(bVar32);
										}
										BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22350.f_73[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											if (GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2459539[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											if (GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2459539[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											if (GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2459539[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											if (GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2459539[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											if (GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_3918[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											if (GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4175[(iVar21 + iVar27)], Global_22350.f_4304[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_22350.f_4433[(iVar22 + iVar28)] == 2 || Global_22350.f_4433[(iVar22 + iVar28)] == 50) || Global_22350.f_4433[(iVar22 + iVar28)] == 60)
											{
												if (func_346(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_346(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_337(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 1)
														{
															if (Global_22350.f_5083[iVar8] == 2)
															{
																DRAW_SPRITE(func_344(Global_22350.f_4433[(iVar22 + iVar28)]), func_342(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																DRAW_SPRITE(func_344(Global_22350.f_4433[(iVar22 + iVar28)]), func_342(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
														}
														fVar40 = (fVar40 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (GET_HASH_KEY(&(Global_22350.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_22350.f_5083[iVar8] == 2)
										{
											END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar40), fVar35, 0);
											if (func_326() && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													func_328(0, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
													StringCopy(&cVar75, "TEST_LABEL", 16);
													fVar76 = 0f;
													fVar77 = 55f;
													fVar78 = 0.0185f;
													fVar79 = 0.004f;
													fVar80 = 0.02f;
													SET_TEXT_SCALE(0f, (0.35f * 0.7f));
													SET_TEXT_COLOUR(255, 255, 255, 150);
													DRAW_RECT((fVar34 - (fVar80 * 0.6f)), (fVar35 + (fVar78 * 0.75f)), 0.0175f, 0.035f, floor(fVar76), floor(fVar76), floor(fVar76), floor(fVar77), 0);
													BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar75);
													ADD_TEXT_COMPONENT_INTEGER((Global_22350.f_5738 + iVar30));
													END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar80), (fVar35 + fVar79), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar40 = (fVar40 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_22350.f_4433[(iVar22 + iVar14)] != 2 && Global_22350.f_4433[(iVar22 + iVar14)] != 50) && Global_22350.f_4433[(iVar22 + iVar14)] != 60)
											{
												if (func_346(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_346(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_337(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_22350.f_4433[(iVar22 + iVar14)] == 30)
															{
																DRAW_SPRITE(func_344(Global_22350.f_4433[(iVar22 + iVar14)]), func_342(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (Global_22347 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_22350.f_5083[iVar8] == 2)
															{
																DRAW_SPRITE(func_344(Global_22350.f_4433[(iVar22 + iVar14)]), func_342(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																DRAW_SPRITE(func_344(Global_22350.f_4433[(iVar22 + iVar14)]), func_342(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
														}
													}
													fVar40 = (fVar40 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar39 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										func_328(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_22350.f_8381 && Global_22350.f_8382 == iVar6)
										{
											func_327(bVar32);
										}
										_BEGIN_TEXT_COMMAND_WIDTH("NUMBER");
										ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_3918[iVar20]);
										fVar41 = _END_TEXT_COMMAND_GET_WIDTH(1);
										fVar40 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_22350.f_8227[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar40;
										Global_22350.f_8268[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_22350.f_8227[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar41 = Global_22350.f_8268[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar52)
									{
										if (func_346(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_346(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_337(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													DRAW_SPRITE(func_344(26), func_342(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_346(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_346(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_337(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													DRAW_SPRITE(func_344(27), func_342(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_328(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, 0, 0, 0);
										func_325((fVar34 + fVar40), fVar35, "NUMBER", Global_22350.f_3918[iVar20], 0);
									}
								}
								bVar39 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										func_328(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_22350.f_8381 && Global_22350.f_8382 == iVar6)
										{
											func_327(bVar32);
										}
										_BEGIN_TEXT_COMMAND_WIDTH("NUMBER");
										ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
										fVar41 = _END_TEXT_COMMAND_GET_WIDTH(1);
										fVar40 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_22350.f_8227[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar40;
										Global_22350.f_8268[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_22350.f_8227[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar41 = Global_22350.f_8268[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar52)
									{
										if (func_346(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_346(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_337(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													DRAW_SPRITE(func_344(26), func_342(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_346(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_346(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_337(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													DRAW_SPRITE(func_344(27), func_342(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									func_328(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar53, 0, 0, 0);
									func_324((fVar34 + fVar40), fVar35, "NUMBER", Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
								}
								bVar39 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_346(Global_22350.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_22350.f_5729)
										{
											fVar42 = fVar36;
											fVar40 = 0f;
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_22350.f_5083[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_22350.f_8227[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar40;
											Global_22350.f_8309[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_22350.f_8227[((iVar9 * Global_22350.f_5226) + iVar8)];
											fVar42 = Global_22350.f_8309[((iVar9 * Global_22350.f_5226) + iVar8)];
										}
										if (bVar52)
										{
											if (func_346(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22350.f_5083[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_346(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_337(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														DRAW_SPRITE(func_344(26), func_342(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_346(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_346(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_337(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														DRAW_SPRITE(func_344(27), func_342(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_346(Global_22350.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_337(Global_22350.f_4433[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												DRAW_SPRITE(func_344(Global_22350.f_4433[iVar22]), func_342(Global_22350.f_4433[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_323(Global_22350.f_4433[iVar22])), (fVar37 * func_323(Global_22350.f_4433[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
											}
										}
									}
								}
								bVar39 = true;
								iVar22++;
								break;
							
							case 5:
								bVar39 = true;
								break;
						}
						if (Global_22350.f_5056[iVar8] == 5)
						{
							if (Global_22350.f_5068[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
							if (Global_22350.f_5075[iVar8])
							{
								if (func_346(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
					}
					iVar8++;
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_22350.f_8006[iVar9] = iVar6;
						Global_22350.f_5740 = iVar6;
						iVar9++;
						if (Global_22350.f_5356[iVar6])
						{
							iVar13++;
						}
						if (Global_22350.f_5745[iVar6] != 0f)
						{
							fVar67 = (fVar67 + Global_22350.f_5745[iVar6]);
						}
						else
						{
							fVar67 = (fVar67 + 0.034722f);
						}
					}
					if (!Global_22350.f_5728)
					{
						Global_22350.f_5485[iVar6] = 1;
						if (Global_22350.f_5227[iVar6])
						{
							if (bVar32)
							{
								Global_22350.f_5734 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_22350.f_5734 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_22350.f_5728)
			{
				Global_22350.f_5730 = ((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12)));
				Global_22350.f_5733 = iVar11;
				Global_22350.f_5731 = iVar10;
				Global_22350.f_5728 = 1;
			}
		}
		if (!Global_22350.f_5729)
		{
			Global_22350.f_5732 = iVar9;
			Global_22350.f_5729 = 1;
		}
		iVar5++;
	}
	Global_22350.f_5876 = fVar49;
	Global_22350.f_5878 = GET_GAME_TIMER();
	_CLEAR_NOTIFICATIONS_POS(Global_22350.f_5876);
	if (!Global_22350.f_8350)
	{
		func_318(0);
	}
	Global_22350.f_8350 = 0;
	if (bParam2)
	{
		HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		func_317(1);
	}
	RESET_SCRIPT_GFX_ALIGN();
}

void func_317(int iParam0)
{
	Global_1375006.f_1100 = iParam0;
}

void func_318(int iParam0)
{
	if (func_322())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_170(0))
		{
			func_319(iParam0);
		}
		SET_BIT(&Global_7357, 2);
	}
}

void func_319(int iParam0)
{
	if (func_322())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_321())
		{
			func_320(1, 1);
		}
		else
		{
			func_320(0, 0);
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
	if (!func_238())
	{
		Global_19486.f_1 = 3;
	}
}

void func_320(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_170(0))
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

bool func_321()
{
	return IS_BIT_SET(Global_1687880, 5);
}

bool func_322()
{
	return IS_BIT_SET(Global_1687880, 19);
}

float func_323(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 52:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_324(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_325(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	ADD_TEXT_COMPONENT_INTEGER(iParam3);
	END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

bool func_326()
{
	return IS_DLC_PRESENT(-1762644250);
}

void func_327(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		GET_HUD_COLOUR(Global_22350.f_8378[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		GET_HUD_COLOUR(Global_22350.f_8378[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_328(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_329(Global_22350.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
				SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
				SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			SET_TEXT_COLOUR(0, 0, 0, floor((255f * 0.8f)));
		}
		else
		{
			GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
			SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	SET_TEXT_SCALE(0f, 0.35f);
	SET_TEXT_JUSTIFICATION(1);
	if (bParam5)
	{
		SET_TEXT_SCALE(0f, 0.425f);
		SET_TEXT_FONT(4);
	}
	else if (bParam6)
	{
		SET_TEXT_SCALE(0f, 0.425f);
		SET_TEXT_FONT(6);
	}
	else
	{
		SET_TEXT_FONT(0);
	}
	SET_TEXT_WRAP(0f, 1f);
	SET_TEXT_CENTRE(0);
	SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_329(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_330(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_166(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_348(bParam4, bParam8))
	{
		return;
	}
	if (func_335())
	{
		return;
	}
	if (_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_333(PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (IS_PC_VERSION())
	{
		if (UPDATE_ONSCREEN_KEYBOARD() == 0 || UPDATE_ONSCREEN_KEYBOARD())
		{
			return;
		}
	}
	if (Global_22350.f_4769 != 0)
	{
		if (_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_22350.f_4769)
			{
				if (Global_22350.f_5026[iVar1] != 359)
				{
					StringCopy(&(Global_22350.f_4771[iVar1 /*16*/]), GET_CONTROL_INSTRUCTIONAL_BUTTON(2, Global_22350.f_5026[iVar1], true), 64);
				}
				else if (Global_22350.f_5039[iVar1] != 32)
				{
					StringCopy(&(Global_22350.f_4771[iVar1 /*16*/]), _0x80C2FD58D720C801(2, Global_22350.f_5039[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_22350.f_4770 = 0;
		}
		if (!Global_22350.f_4770)
		{
			BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0 /*10*/], "CLEAR_ALL");
			END_SCALEFORM_MOVIE_METHOD();
			BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0 /*10*/], "SET_MAX_WIDTH");
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT((1f - (Global_22350.f_5081 / 100f)));
			END_SCALEFORM_MOVIE_METHOD();
			if (IS_PC_VERSION())
			{
				BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(true);
				END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_22350.f_4769)
			{
				if (GET_HASH_KEY(&(Global_22350.f_4964[iVar1 /*4*/])) != GET_HASH_KEY("PREV"))
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar1);
					func_332(&(Global_22350.f_4771[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && GET_HASH_KEY(&(Global_22350.f_4964[iVar2 /*4*/])) == GET_HASH_KEY("PREV"))
					{
						func_332(&(Global_22350.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22350.f_5013[iVar1] == -1)
					{
						func_331(&(Global_22350.f_4964[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_22350.f_5013[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_22350.f_4964[iVar1 /*4*/]));
						if (bParam5)
						{
							ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
						}
						else
						{
							ADD_TEXT_COMPONENT_INTEGER(iVar3);
						}
						END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (IS_PC_VERSION())
					{
						if (Global_22350.f_5026[iVar1] != 359 && IS_BIT_SET(Global_22350.f_5052, iVar1))
						{
							_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(true);
							_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_22350.f_5026[iVar1]);
						}
						else
						{
							_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(false);
							_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(359);
						}
					}
					END_SCALEFORM_MOVIE_METHOD();
				}
				iVar1++;
			}
			if (GET_HASH_KEY(&(Global_4268271.f_16)) != GET_HASH_KEY(""))
			{
				BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_22350.f_4769);
				func_332(&Global_4268271);
				if (Global_4268271.f_20 == -1)
				{
					func_331(&(Global_4268271.f_16));
				}
				else
				{
					iVar4 = Global_22350.f_5013[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4268271.f_16));
					if (bParam5)
					{
						ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
					}
					else
					{
						ADD_TEXT_COMPONENT_INTEGER(iVar4);
					}
					END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				END_SCALEFORM_MOVIE_METHOD();
			}
			BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(80);
			END_SCALEFORM_MOVIE_METHOD();
			BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22350.f_5082)
			{
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
			}
			else
			{
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
			}
			END_SCALEFORM_MOVIE_METHOD();
			Global_22350.f_4770 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_22350.f_4769)
		{
			if (Global_22350.f_5013[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar1);
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_22350.f_4964[iVar1 /*4*/]));
					if (bParam5)
					{
						ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					END_TEXT_COMMAND_SCALEFORM_STRING();
					END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar1++;
		}
		if (Global_4268271.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				BEGIN_SCALEFORM_MOVIE_METHOD(Global_22350.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar1);
				BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4268271.f_16));
				if (bParam5)
				{
					ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				END_TEXT_COMMAND_SCALEFORM_STRING();
				END_SCALEFORM_MOVIE_METHOD();
			}
		}
		SET_SCRIPT_GFX_ALIGN(76, 66);
		_SCREEN_DRAW_POSITION_RATIO(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_22350.f_8385)
			{
				SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_22350.f_8385 = 1;
			}
		}
		else if (Global_22350.f_8385)
		{
			RESET_HUD_COMPONENT_VALUES(15);
			Global_22350.f_8385 = 0;
		}
		RESET_SCRIPT_GFX_ALIGN();
		if (Global_22350.f_5055)
		{
			SET_SCRIPT_GFX_ALIGN(82, 66);
			_SCREEN_DRAW_POSITION_RATIO(0f, 0f, 0f, 0f);
			DRAW_SCALEFORM_MOVIE(Global_22350.f_5660[iVar0 /*10*/], Global_22350.f_5053, Global_22350.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_22350.f_5660[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_331(char* sParam0)
{
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_332(char* sParam0)
{
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam0);
}

bool func_333(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER_ID())
	{
		bVar0 = func_334(-1, 0) == 8;
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

int func_334(int iParam0, bool bParam1)
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

int func_335()
{
	vector3 vVar0;
	
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	if (func_336())
	{
		vVar0 = { 0f, -500f, 0f };
		GET_MOBILE_PHONE_POSITION(&vVar0);
		if (Global_19431 == 0)
		{
			if (vVar0.y > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (vVar0.y > -101f)
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

int func_336()
{
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_337(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 52:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
		case 51:
		case 55:
		case 56:
		case 57:
		case 58:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 53:
			*iParam5 = 100;
			break;
		
		case 61:
			*iParam5 = 100;
			break;
		
		case 54:
			GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_338(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	SET_TEXT_FONT(0);
	SET_TEXT_SCALE(0f, 0.35f);
	SET_TEXT_LEADING(2);
	SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	SET_TEXT_WRAP(fParam0, ((Global_22347 + Global_22349) - 0.0046875f));
	SET_TEXT_CENTRE(0);
	SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_339(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	ADD_TEXT_COMPONENT_INTEGER(iParam3);
	ADD_TEXT_COMPONENT_INTEGER(iParam4);
	END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_340(char* sParam0, int iParam1, int iParam2)
{
	if (!IS_STRING_NULL(sParam0))
	{
		if (GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_341();
	_BEGIN_TEXT_COMMAND_WIDTH(sParam0);
	ADD_TEXT_COMPONENT_INTEGER(iParam1);
	ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return _END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_341()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_22350.f_8360)
	{
		iVar0 = Global_22350.f_8356;
		iVar1 = Global_22350.f_8357;
		iVar2 = Global_22350.f_8358;
		iVar3 = Global_22350.f_8359;
	}
	SET_TEXT_FONT(0);
	SET_TEXT_SCALE(0f, 0.35f);
	SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	SET_TEXT_WRAP((Global_22347 + 0.0046875f), ((Global_22347 + Global_22349) - 0.0046875f));
	SET_TEXT_CENTRE(0);
	SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

var func_342(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_7013[iParam0 /*16*/])))
	{
		if (GET_HASH_KEY(&(Global_22350.f_7013[iParam0 /*16*/])) == -1487683087)
		{
			Var2 = { func_72(PLAYER_ID()) };
			if (_NETWORK_GET_PLAYER_CREW_EMBLEM_TXD_NAME(&Var2, &uVar1))
			{
				return func_343(&uVar1);
			}
		}
		else
		{
			return func_343(&(Global_22350.f_7013[iParam0 /*16*/]));
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

var func_343(var uParam0)
{
	return uParam0;
}

char* func_344(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_6020[iParam0 /*16*/])))
	{
		if (GET_HASH_KEY(&(Global_22350.f_6020[iParam0 /*16*/])) == -1487683087)
		{
			Var1 = { func_72(PLAYER_ID()) };
			_NETWORK_GET_PLAYER_CREW_EMBLEM_TXD_NAME(&Var1, &uVar0);
			return func_343(&uVar0);
		}
		else
		{
			return func_343(&(Global_22350.f_6020[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 50)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_345()
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

int func_346(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_344(iParam0), 64);
	StringCopy(&cVar1, func_342(iParam0, bParam1), 64);
	if (GET_HASH_KEY(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			_GET_ACTIVE_SCREEN_RESOLUTION(&iVar2, &iVar3);
			fVar5 = _GET_ASPECT_RATIO(0);
			if (func_345())
			{
				iVar2 = round((to_float(iVar3) * fVar5));
			}
			fVar6 = (to_float(iVar2) / to_float(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_345())
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
		vVar7.x = (vVar7.x * (func_347(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_347(iParam0) / fVar4));
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

float func_347(int iParam0)
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

int func_348(bool bParam0, bool bParam1)
{
	if (Global_2437549.f_1893.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!IS_SCREEN_FADED_IN() || (func_248(8, -1) && func_349() != 65)) || (IS_SCREEN_FADED_IN() != 0 && !bParam1)) || (IS_SCREEN_FADED_IN() && !bParam0)) || IS_SCREEN_FADED_IN()) || Global_76837) || Global_22350.f_8384) || IS_SCREEN_FADED_IN()) || Global_98721.f_1417)
	{
		return 0;
	}
	return 1;
}

int func_349()
{
	return Global_1312808;
}

void func_350(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, true);
	if (Global_22350.f_4769 >= 12)
	{
		StringCopy(&Global_4268271, sVar0, 64);
		StringCopy(&(Global_4268271.f_16), sParam1, 16);
		Global_4268271.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		SET_BIT(&(Global_22350.f_5052), Global_22350.f_4769);
	}
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769 /*4*/]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = iParam0;
	Global_22350.f_5039[Global_22350.f_4769] = 32;
	Global_22350.f_4769++;
}

char* func_351(int iParam0)
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		iVar0 = iParam0;
	}
	else
	{
		iVar0 = 6;
	}
	switch (iVar0)
	{
		case 6:
			return "SNK_AFFORD";
		
		case 3:
			return "SNK_ITEM1_D";
		
		case 1:
			return "SNK_ITEM2_D";
		
		case 2:
			return "SNK_ITEM3_D";
		
		case 4:
			return "SNK_ITEM4_D";
		
		case 0:
			return "SNK_ITEM5_D";
		
		case 5:
			return "SNK_ITEM6_D";
		
		default:
	}
	return "";
}

void func_352(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_22350.f_4690), sParam0, 24);
	Global_22350.f_4762 = 0;
	Global_22350.f_4763 = 0;
	Global_22350.f_4764 = 0;
	Global_22350.f_4765 = 0;
	Global_22350.f_4766 = iParam1;
	Global_22350.f_4767 = GET_GAME_TIMER();
	Global_22350.f_4768 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_4696[iVar0] = 0;
		iVar0++;
	}
}

void func_353(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_22350.f_5739 = uParam0;
	Global_22350.f_5874 = iParam2;
	if (Global_22350.f_5739 < Global_22350.f_5738)
	{
		Global_22350.f_5738 = Global_22350.f_5739;
	}
	else if ((Global_22350.f_5729 && Global_22350.f_5739 > Global_22350.f_5740) || (!Global_22350.f_5729 && Global_22350.f_5739 >= (Global_22350.f_5738 + Global_22350.f_5225)))
	{
		iVar0 = Global_22350.f_5738;
		while (iVar0 <= Global_22350.f_5739)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_22350.f_5089[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_22350.f_5225 && Global_22350.f_5738 < 128)
		{
			Global_22350.f_5738++;
			iVar1 = 0;
			iVar0 = Global_22350.f_5738;
			while (iVar0 <= Global_22350.f_5739)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_22350.f_5089[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_22350.f_5728 = 0;
	Global_22350.f_5729 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_22350.f_4690), "", 24);
		StringCopy(&(Global_4268271.f_21), "", 16);
	}
}

void func_354(int iParam0)
{
	Global_22350.f_5738 = iParam0;
}

void func_355(var uParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_22350.f_5222 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 >= 4)
	{
		return;
	}
	if (Global_22350.f_5744 != 1)
	{
		return;
	}
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		return;
	}
	Global_22350.f_3918[Global_22350.f_5222] = uParam0;
	Global_22350.f_5222++;
	Global_22350.f_2124[Global_22350.f_5742 /*5*/][Global_22350.f_5743] = 2;
	Global_22350.f_5743++;
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		fVar0 = func_357();
		if (Global_22350.f_5075[Global_22350.f_5219] && Global_22350.f_5743 == Global_22350.f_5741)
		{
			func_346(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22350.f_5068[(Global_22350.f_5219 - 1)])
		{
			Global_22350.f_5068[(Global_22350.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22350.f_5743 >= Global_22350.f_5741)
		{
			fVar3 = func_356();
			if (fVar3 > Global_22350.f_5745[Global_22350.f_5218])
			{
				Global_22350.f_5745[Global_22350.f_5218] = fVar3;
			}
		}
	}
}

float func_356()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_22350.f_5743)
	{
		if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_22350.f_4433[((Global_22350.f_5224 - iVar1) + iVar0)] != 0)
		{
			if (func_346(Global_22350.f_4433[((Global_22350.f_5224 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > _GET_TEXT_SCALE_HEIGHT(0.35f, 0))
	{
		return fVar2;
	}
	return _GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

float func_357()
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_22350.f_5743)
	{
		if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_328(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
	{
		_BEGIN_TEXT_COMMAND_WIDTH(&(Global_22350.f_73[Global_22350.f_5742 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_22350.f_5743)
	{
		if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(Global_22350.f_5742 + iVar8) /*6*/]));
			}
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(Global_22350.f_5742 + iVar8) /*6*/]));
			}
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 2)
		{
			if (GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_3918[((Global_22350.f_5222 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 3)
		{
			if (GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4175[((Global_22350.f_5223 - iVar4) + iVar10)], Global_22350.f_4304[((Global_22350.f_5223 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 5)
		{
			if (GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2459539[((Global_22350.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 6)
		{
			if (GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2459539[((Global_22350.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 7)
		{
			if (GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2459539[((Global_22350.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742 /*5*/][iVar7] == 9)
		{
			if (GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
			{
				ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2459539[((Global_22350.f_5221 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742 /*6*/])) != 0)
	{
		fVar0 = _END_TEXT_COMMAND_GET_WIDTH(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_22350.f_4433[((Global_22350.f_5224 - iVar5) + iVar7)] != 0)
		{
			func_346(Global_22350.f_4433[((Global_22350.f_5224 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

int func_358(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	switch (func_297(uParam0))
	{
		case 0:
			switch (iVar0)
			{
				case 3:
					return 2;
				
				case 1:
					return 3;
				
				case 2:
					return 5;
				
				case 4:
					return 7;
				
				case 0:
					return 2;
				
				case 5:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 3:
					return 1;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 4:
					return 8;
				
				case 0:
					return 2;
				
				case 5:
					return 5;
				
				default:
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 3:
					return 1;
				
				case 1:
					return 2;
				
				case 2:
					return 4;
				
				case 4:
					return 6;
				
				case 0:
					return 3;
				
				case 5:
					return 4;
				
				default:
			}
			break;
	}
	return 0;
}

int func_359(int iParam0)
{
	if (func_128(func_361(iParam0), -1, 0) >= func_360(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_360(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 3:
			return 30;
		
		case 1:
			return 15;
		
		case 2:
			return 5;
		
		case 4:
			return 20;
		
		case 0:
			return 10;
		
		case 5:
			return 10;
		
		default:
	}
	return 0;
}

int func_361(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 3:
			return 1275;
		
		case 1:
			return 1276;
		
		case 2:
			return 1277;
		
		case 4:
			return 1097;
		
		case 0:
			return 62;
		
		case 5:
			return 63;
		
		default:
	}
	return 10999;
}

void func_362(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_22350.f_5224 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 >= 4)
	{
		return;
	}
	if (Global_22350.f_5744 != 1)
	{
		return;
	}
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		return;
	}
	Global_22350.f_4433[Global_22350.f_5224] = iParam0;
	Global_22350.f_5224++;
	Global_22350.f_2124[Global_22350.f_5742 /*5*/][Global_22350.f_5743] = 4;
	Global_22350.f_5743++;
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		fVar0 = func_357();
		if (Global_22350.f_5075[Global_22350.f_5219] && Global_22350.f_5743 == Global_22350.f_5741)
		{
			func_346(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22350.f_5068[(Global_22350.f_5219 - 1)])
		{
			Global_22350.f_5068[(Global_22350.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22350.f_5743 >= Global_22350.f_5741)
		{
			fVar3 = func_356();
			if (fVar3 > Global_22350.f_5745[Global_22350.f_5218])
			{
				Global_22350.f_5745[Global_22350.f_5218] = fVar3;
			}
		}
	}
}

void func_363(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_22350.f_5218 > iParam0)
	{
		return;
	}
	if (Global_22350.f_5218 >= 128)
	{
		return;
	}
	if (Global_22350.f_5220 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 < Global_22350.f_5741)
	{
		return;
	}
	if (Global_22350.f_5218 != iParam0)
	{
		Global_22350.f_5218 = iParam0;
		Global_22350.f_5219 = 0;
	}
	iVar0 = Global_22350.f_5056[Global_22350.f_5219];
	if (iVar0 != 1)
	{
		while (Global_22350.f_5219 < 4 && iVar0 != 1)
		{
			Global_22350.f_5219++;
			iVar0 = Global_22350.f_5056[Global_22350.f_5219];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]), sParam1, 24);
	if (!IS_STRING_NULL_OR_EMPTY(sParam1) && !IS_STRING_NULL_OR_EMPTY(sParam1))
	{
	}
	Global_22350.f_1610[Global_22350.f_5220] = bParam3;
	Global_22350.f_1867[Global_22350.f_5220] = iParam4;
	Global_22350.f_5220++;
	if (!bParam3)
	{
		func_366(Global_22350.f_5218, 1);
	}
	else
	{
		func_366(Global_22350.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_365(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]));
		if (Global_22350.f_5075[Global_22350.f_5219])
		{
			func_346(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_22350.f_5068[Global_22350.f_5219])
		{
			Global_22350.f_5068[Global_22350.f_5219] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_364(&(Global_22350.f_73[Global_22350.f_5220 /*6*/]));
			if (fVar4 > Global_22350.f_5745[iParam0])
			{
				Global_22350.f_5745[iParam0] = fVar4;
			}
		}
	}
	SET_BIT(&(Global_22350.f_5089[iParam0]), Global_22350.f_5219);
	Global_22350.f_5219++;
	Global_22350.f_5744 = 1;
	Global_22350.f_5742 = (Global_22350.f_5220 - 1);
	Global_22350.f_5743 = 0;
	Global_22350.f_5741 = iParam2;
}

float func_364(char* sParam0)
{
	if (!DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return _GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

float func_365(char* sParam0)
{
	if (!IS_STRING_NULL(sParam0))
	{
		if (GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_328(0, 1, 0, 0, 0, 0, 0);
	_BEGIN_TEXT_COMMAND_WIDTH(sParam0);
	return _END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_366(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = floor((to_float(iParam0) / 32f));
	if (bParam1)
	{
		SET_BIT(&(Global_22350.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		CLEAR_BIT(&(Global_22350.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
}

char* func_367(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 3:
			return "SNK_ITEM1";
		
		case 1:
			return "SNK_ITEM2";
		
		case 2:
			return "SNK_ITEM3";
		
		case 4:
			return "SNK_ITEM4";
		
		case 0:
			return "SNK_ITEM5";
		
		case 5:
			return "SNK_ITEM6";
		
		default:
	}
	return "";
}

void func_368(int iParam0, char* sParam1, char* sParam2)
{
	Global_22350 = iParam0;
	func_369(29, sParam1, sParam2);
}

void func_369(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_22350.f_6020[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_22350.f_7013[iParam0 /*16*/]), sParam2, 64);
}

void func_370(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_22350.f_1), sParam0, 16);
	Global_22350.f_68 = 0;
	Global_22350.f_69 = 0;
	Global_22350.f_70 = 0;
	Global_22350.f_71 = 0;
	Global_22350.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_371(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5083[0] = iParam0;
	Global_22350.f_5083[1] = iParam1;
	Global_22350.f_5083[2] = iParam2;
	Global_22350.f_5083[3] = iParam3;
	Global_22350.f_5083[4] = iParam4;
}

void func_372(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5056[0] = iParam0;
	Global_22350.f_5056[1] = iParam1;
	Global_22350.f_5056[2] = iParam2;
	Global_22350.f_5056[3] = iParam3;
	Global_22350.f_5056[4] = iParam4;
	Global_22350.f_5226 = 0;
	if (iParam0 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam1 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam2 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam3 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam4 != 0)
	{
		Global_22350.f_5226++;
	}
}

void func_373(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_22350.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_22350.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2459539[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22350.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22350.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22350.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22350.f_5089[iVar0] = 0;
		Global_22350.f_5227[iVar0] = 0;
		Global_22350.f_5356[iVar0] = 0;
		Global_22350.f_5879[iVar0] = 0f;
		Global_22350.f_5485[iVar0] = 0;
		Global_22350.f_5745[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_22350.f_5056[iVar0] = 0;
		Global_22350.f_5068[iVar0] = 0f;
		Global_22350.f_5062[iVar0] = -1f;
		Global_22350.f_5075[iVar0] = 0;
		Global_22350.f_5083[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22350.f_4964[iVar0 /*4*/]), "", 16);
		Global_22350.f_5013[iVar0] = -1;
		Global_22350.f_5026[iVar0] = 359;
		Global_22350.f_5039[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 62)
	{
		StringCopy(&(Global_22350.f_6020[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_22350.f_7013[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_22350.f_1610[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4268271.f_16), "", 16);
	Global_4268271.f_20 = -1;
	Global_22350 = 0;
	Global_22350.f_5218 = 0;
	Global_22350.f_5219 = 0;
	Global_22350.f_5220 = 0;
	Global_22350.f_5222 = 0;
	Global_22350.f_5223 = 0;
	Global_22350.f_5224 = 0;
	Global_22350.f_5221 = 0;
	Global_22350.f_5874 = 0;
	Global_22350.f_6014 = 0;
	Global_22350.f_5739 = 0;
	Global_22350.f_5738 = 0;
	Global_22350.f_5740 = 0;
	StringCopy(&(Global_22350.f_4690), "", 24);
	Global_22350.f_4762 = 0;
	Global_22350.f_4763 = 0;
	Global_22350.f_4764 = 0;
	Global_22350.f_4765 = 0;
	Global_22350.f_4766 = 0;
	Global_22350.f_4767 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_4696[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_4768 = 0;
	StringCopy(&(Global_4268271.f_21), "", 16);
	Global_4268271.f_61 = 0;
	Global_4268271.f_62 = 0;
	Global_4268271.f_63 = 0;
	Global_4268271.f_64 = 0;
	Global_4268271.f_65 = 0;
	Global_4268271.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4268271.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4268271.f_67 = 0;
	StringCopy(&(Global_22350.f_1), "", 16);
	Global_22350.f_5074 = 0f;
	Global_22350.f_68 = 0;
	Global_22350.f_69 = 0;
	Global_22350.f_70 = 0;
	Global_22350.f_71 = 0;
	Global_22350.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_5744 = 0;
	Global_22350.f_5743 = 0;
	Global_22350.f_5741 = 0;
	Global_22350.f_5742 = 0;
	Global_22350.f_4769 = 0;
	Global_22350.f_4770 = 0;
	Global_22350.f_5225 = 10;
	Global_22350.f_5226 = 0;
	Global_22350.f_5876 = 0f;
	Global_22350.f_5877 = 0f;
	Global_22350.f_5728 = 0;
	Global_22350.f_5729 = 0;
	Global_22350.f_5730 = 0f;
	Global_22350.f_5731 = 0;
	Global_22350.f_5733 = 0;
	Global_22350.f_5732 = 0;
	Global_22350.f_5734 = 0;
	Global_22350.f_5735 = 0;
	Global_22350.f_5736 = 0;
	Global_22350.f_5737 = 0;
	Global_22350.f_8381 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_22350.f_6008[iVar0] = -1;
		Global_22350.f_6011[iVar0] = -1;
		iVar0++;
	}
	Global_22350.f_5081 = 0f;
	Global_22350.f_5052 = 0;
	Global_22350.f_5082 = 0;
	iVar0 = 0;
	while (iVar0 < Global_22350.f_6015)
	{
		Global_22350.f_6015[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_8360 = 0;
	Global_22350.f_8355 = 0;
	Global_22350.f_8365 = 0;
	Global_22350.f_8370 = 0;
	Global_22350.f_8375 = 0;
	Global_22350.f_8377 = 0;
	Global_22350.f_8383 = 0;
	Global_22347 = 0.05f;
	Global_22348 = 0.05f;
	Global_22349 = 0.225f;
	fVar2 = _GET_ASPECT_RATIO(0);
	if (bParam0)
	{
		Global_22349 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_22349 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_22349 = 0.225f;
	}
}

int func_374(int iParam0, var uParam1, var uParam2, var uParam3)
{
	vector3 vVar0;
	float fVar1;
	
	switch (iParam0)
	{
		case 0:
			*uParam1 = { _GET_OBJECT_OFFSET_FROM_COORDS(-706.6382f, -913.6887f, 19.21f, -89.999f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-89.999f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 1:
			*uParam1 = { _GET_OBJECT_OFFSET_FROM_COORDS(-47.19871f, -1757.67f, 29.42f, -130f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-130f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 2:
			*uParam1 = { _GET_OBJECT_OFFSET_FROM_COORDS(1164.21f, -322.89f, 69.2f, -80f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-80f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 3:
			*uParam1 = { _GET_OBJECT_OFFSET_FROM_COORDS(1698.307f, 4923.371f, 42.06f, 145f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (145f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 4:
			*uParam1 = { _GET_OBJECT_OFFSET_FROM_COORDS(-1820.465f, 793.8166f, 138.09f, -47.53f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-47.53f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 5:
			vVar0 = { 1165.958f, 2710.201f, 38.14286f };
			fVar1 = -1.15f;
			*uParam1 = { _GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar1, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar1 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 6:
			vVar0 = { -2967.027f, 390.9038f, 15.02f };
			fVar1 = -94.76f;
			*uParam1 = { _GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar1, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar1 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 7:
			vVar0 = { -1222.331f, -907.8234f, 12.31f };
			fVar1 = -147.297f;
			*uParam1 = { _GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar1, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar1 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 8:
			vVar0 = { 1134.811f, -982.3615f, 46.4f };
			fVar1 = 96.68562f;
			*uParam1 = { _GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar1, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar1 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 9:
			vVar0 = { -1486.673f, -378.4638f, 40.15f };
			fVar1 = -46.229f;
			*uParam1 = { _GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar1, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar1 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 10:
			vVar0 = { -3244.573f, 1000.658f, 12.83f };
			fVar1 = 175.074f;
			*uParam1 = { _GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 11:
			vVar0 = { -3041.357f, 584.2665f, 7.9f };
			fVar1 = -162.241f;
			*uParam1 = { _GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 12:
			vVar0 = { 548.9015f, 2668.941f, 42.15f };
			fVar1 = -82.5f;
			*uParam1 = { _GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 13:
			vVar0 = { 2554.875f, 381.3857f, 108.62f };
			fVar1 = 177.716f;
			*uParam1 = { _GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 14:
			vVar0 = { 2676.212f, 3280.969f, 55.24f };
			fVar1 = 150.87f;
			*uParam1 = { _GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 15:
			vVar0 = { 1729.329f, 6417.123f, 35.03f };
			fVar1 = 63.641f;
			*uParam1 = { _GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 16:
			vVar0 = { 1959.323f, 3742.29f, 32.34f };
			fVar1 = 120f;
			*uParam1 = { _GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 17:
			vVar0 = { 24.94562f, -1344.954f, 29.49f };
			fVar1 = 90f;
			*uParam1 = { _GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 18:
			vVar0 = { 373.5954f, 328.5892f, 103.56f };
			fVar1 = 75.885f;
			*uParam1 = { _GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar1, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar1 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case -2:
			*uParam1 = { 1390.653f, 3598.966f, 35.6115f };
			*uParam2 = { -3.6091f, 0.022f, -8.6461f };
			*uParam3 = 35f;
			break;
	}
	return 1;
}

void func_375()
{
	if (IS_PC_VERSION())
	{
		_SET_CURSOR_LOCATION(0.325f, 0.3f);
	}
}

void func_376(int iParam0, int iParam1)
{
	if (!func_284(PLAYER_ID(), 1, 0) || iParam1)
	{
		if (!func_381())
		{
			Global_1312417.f_1 = 1;
			Global_1628955[PLAYER_ID() /*614*/].f_9 = 1;
			if (iParam0 == 1)
			{
				Global_1312417.f_2 = 1;
			}
			func_377(7, 0, -1);
		}
	}
}

void func_377(int iParam0, int iParam1, int iParam2)
{
	if (!func_381() || iParam1)
	{
		Global_1312417 = 1;
		func_380(1);
		if (((!NETWORK_IS_ACTIVITY_SESSION() && !func_379()) && !func_378(NETWORK_IS_ACTIVITY_SESSION())) && !func_140(NETWORK_IS_ACTIVITY_SESSION()))
		{
			Global_968396 = 1;
		}
		Global_1628955[PLAYER_ID() /*614*/].f_8 = 1;
		0x35EEC6C2BC821A71(1, iParam0, iParam2, -1);
	}
}

int func_378(int iParam0)
{
	if (func_284(iParam0, 1, 0))
	{
		if (Global_1590446[iParam0 /*871*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_379()
{
	return Global_2448961.f_740;
}

void func_380(bool bParam0)
{
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_381())
		{
			if (func_46(PLAYER_ID(), 1, 0))
			{
				SET_PED_CAN_BE_DRAGGED_OUT(SET_PED_CAN_BE_DRAGGED_OUT(), 1);
				SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 342, false);
				SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 122, false);
			}
			SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(), 1f);
			_0x1B857666604B1A74(0);
			NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
			if (Global_1312417.f_1 == 0 || Global_1312417.f_2 == 1)
			{
				Global_1312417.f_2 = 0;
				if (bParam0)
				{
					0x838DA0936A24ED4D(0, 0);
				}
			}
		}
		else
		{
			if (func_46(PLAYER_ID(), 1, 1))
			{
				SET_PED_CAN_BE_DRAGGED_OUT(SET_PED_CAN_BE_DRAGGED_OUT(), 0);
				SET_CURRENT_PED_WEAPON(SET_CURRENT_PED_WEAPON(), joaat("weapon_unarmed"), true);
				SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 342, true);
				SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 122, true);
				SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(), 0.5f);
				if (Global_1312417.f_1 == 0 || Global_1312417.f_2 == 1)
				{
					0x838DA0936A24ED4D(1, 0);
				}
			}
			_0x1B857666604B1A74(1);
			NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
		}
	}
}

bool func_381()
{
	return Global_1312417;
}

void func_382(int iParam0)
{
	func_383(iParam0, 0f);
}

void func_383(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_302(IS_BIT_SET(*iParam0, 4)) - fParam1);
	SET_BIT(iParam0, 1);
	CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

int func_384(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_264(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
	{
		return 0;
	}
	if (func_170(0))
	{
		return 0;
	}
	if (IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42116[iVar0 /*32*/] == 1 && Global_42116[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_42116[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_42116[iVar0 /*32*/].f_5 = 1;
			Global_42116[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_42116[iVar0 /*32*/] == 0)
			{
			}
			if (Global_42116[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_385()
{
	if (Global_111560.f_20405.f_145 > 0)
	{
		return 0;
	}
	return 1;
}

bool func_386()
{
	return Global_22209;
}

int func_387(int iParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam3 = { _GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 1.46991f, -0.814453f, -0.97226f) };
			*uParam4 = { _GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, -1.5828f, -0.814453f, 0.84774f) };
			*uParam5 = { _GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { _GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, -1.55054f, -0.920414f, -0.998837f) };
			*uParam4 = { _GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 1.54138f, -0.920414f, 0.901165f) };
			*uParam5 = { _GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam3 = { _GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, -2.60296f, -0.851523f, -0.999289f) };
			*uParam4 = { _GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 0.443411f, -0.851523f, 0.820711f) };
			*uParam5 = { _GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, -1.17421f, 0.39005f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case -2:
			*uParam3 = { 1390.955f, 3604.379f, 33.98091f };
			*uParam4 = { 1394.475f, 3605.664f, 35.98091f };
			*uParam5 = { 1392.551f, 3605.449f, 35.30949f };
			*uParam6 = 0.75f;
			break;
	}
	return 1;
}

bool func_388(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_208, iParam1);
}

void func_389(var uParam0, var uParam1)
{
	CLEAR_PED_TASKS(CLEAR_PED_TASKS());
	func_427(PLAYER_ID(), 1, 0, 0);
	SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	if (uParam0->f_51 > 0)
	{
		*uParam1 = uParam0->f_51;
		uParam0->f_51 = 0;
	}
	func_410();
	CLEAR_BIT(&(uParam0->f_53), 7);
	if (func_148("SHR_MENU"))
	{
		CLEAR_HELP(1);
	}
	if (uParam0->f_14 != -1)
	{
		func_263(&(uParam0->f_14));
	}
	if (DOES_CAM_EXIST(uParam0->f_1))
	{
		DESTROY_CAM(uParam0->f_1, 0);
	}
	RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
}

int func_390(float fParam0)
{
	if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()) && !DOES_ENTITY_EXIST(DOES_ENTITY_EXIST(), 0))
	{
		if (fParam0 <= 0f)
		{
			return _0x5407B7288D0478B7(_0x5407B7288D0478B7()) > 0;
		}
		else
		{
			return _IS_ENEMY_IN_RANGE(_IS_ENEMY_IN_RANGE(), _IS_ENEMY_IN_RANGE(_IS_ENEMY_IN_RANGE(), true), fParam0) > 0;
		}
	}
	return 0;
}

int func_391(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (iParam2 == -1)
	{
		return 1;
	}
	if (NETWORK_IS_GAME_IN_PROGRESS() && !bParam3)
	{
		if (ABSI(ABSI(ABSI(), iParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (ABSI(ABSI(ABSI(), iParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

int func_392(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if ((*uParam0)[iVar0] < 10)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_393()
{
	OPEN_SEQUENCE_TASK(&iLocal_119);
	TASK_LOOK_AT_ENTITY(0, TASK_LOOK_AT_ENTITY(), -1, 0, 2);
	TASK_PLAY_ANIM(0, "mp_am_hold_up", "handsup_enter", 8f, -8f, -1, 262192, 0, 0, 0, 0);
	TASK_PLAY_ANIM(0, "mp_am_hold_up", "handsup_base", 8f, -4f, -1, 262193, 0, 0, 0, 0);
	CLOSE_SEQUENCE_TASK(iLocal_119);
	OPEN_SEQUENCE_TASK(&iLocal_120);
	TASK_PLAY_ANIM(0, "mp_am_hold_up", "handsup_base", 4f, -4f, -1, 262193, 0, 0, 0, 0);
	CLOSE_SEQUENCE_TASK(iLocal_120);
	OPEN_SEQUENCE_TASK(&iLocal_121);
	TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_112, 2f, -1, 0.25f, 0, fLocal_113);
	TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_intro", 8f, -4f, -1, 262144, 0, 0, 0, 0);
	TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_loop", 8f, -4f, -1, 270337, 0, 0, 0, 0);
	TASK_SMART_FLEE_COORD(0, vLocal_112, 250f, -1, 1, 0);
	TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
	CLOSE_SEQUENCE_TASK(iLocal_121);
	OPEN_SEQUENCE_TASK(&iLocal_123);
	TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_intro", 8f, -4f, -1, 262144, 0, 0, 0, 0);
	TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_loop", 8f, -4f, -1, 270337, 0, 0, 0, 0);
	TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
	CLOSE_SEQUENCE_TASK(iLocal_123);
	OPEN_SEQUENCE_TASK(&iLocal_122);
	TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_112, 2f, -1, 0.25f, 0, (fLocal_113 - 180f));
	TASK_SWAP_WEAPON(0, 1);
	TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 20f, 0);
	CLOSE_SEQUENCE_TASK(iLocal_122);
}

void func_394(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_395(int iParam0)
{
	if (NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return IS_PED_INJURED(IS_PED_INJURED(iParam0));
	}
	return 1;
}

int func_396()
{
	return Local_103.f_12;
}

char* func_397(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "ShopUI_Title_GasStation";
		
		case 5:
			return "ShopUI_Title_LiquorStore3";
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "ShopUI_Title_LiquorStore2";
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "ShopUI_Title_ConvenienceStore";
		
		case -2:
			return "ShopUI_Title_LiquorStore";
		
		default:
	}
	return "NULL";
}

int func_398()
{
	vector3 vVar0;
	
	if (func_406(&(Local_105.f_50), 0))
	{
		func_404(Local_105.f_50, &iLocal_139, &iLocal_140, &iLocal_141, &iLocal_142, &vLocal_143, &vLocal_144);
		func_403(Local_105.f_50, &vLocal_145, &vLocal_146, &fLocal_147);
		func_402(Local_105.f_50, &vLocal_148, &vLocal_149, &fLocal_150);
		switch (Local_105.f_50)
		{
			case 0:
				vLocal_115 = { 1393.1f, 3605.89f, (35.2f - 0.2f) };
				vLocal_116 = { 0f, 0f, 21.89f };
				iLocal_110 = func_52(0);
				vLocal_112 = { 1394.852f, 3609.509f, 33.9809f };
				fLocal_113 = 116.5329f;
				iLocal_134 = 1;
				if (func_400(6, 18))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 0;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 1;
					iLocal_317[0] = 0;
					iLocal_316[1] = 1;
					iLocal_317[1] = 1;
					iLocal_316[2] = 1;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				break;
			
			case 1:
				vLocal_116 = { 0f, 0f, -160f };
				vLocal_115 = { -3041.38f, 584.35f, (8.11f - 0.2f) };
				iLocal_110 = func_52(0);
				vLocal_112 = { -3047.512f, 588.9807f, 6.9089f };
				fLocal_113 = 178.8753f;
				iLocal_134 = 1;
				if (func_400(6, 18))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 1;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 1;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 0;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 1;
				}
				break;
			
			case 2:
				vLocal_115 = { -3244.56f, 1000.74f, (13.03f - 0.2f) };
				vLocal_116 = { 0f, 0f, 175.52f };
				iLocal_110 = func_52(0);
				vLocal_112 = { -3249.114f, 1006.558f, 11.8307f };
				fLocal_113 = 191.594f;
				iLocal_134 = 1;
				if (func_400(6, 18))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 2;
					iLocal_316[1] = 1;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 2;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 1;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 2;
				}
				break;
			
			case 3:
				vLocal_116 = { 0f, 0f, -82.38f };
				vLocal_115 = { 548.82f, 2668.93f, (42.36f - 0.2f) };
				iLocal_110 = func_52(0);
				vLocal_112 = { 543.0796f, 2663.967f, 41.1565f };
				fLocal_113 = 228.4295f;
				iLocal_134 = 1;
				if (func_400(6, 18))
				{
					iLocal_316[0] = 1;
					iLocal_317[0] = 0;
					iLocal_316[1] = 2;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 0;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 1;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				break;
			
			case 4:
				vLocal_116 = { 0f, 0f, 180f };
				vLocal_115 = { 2554.88f, 381.47f, (108.82f - 0.2f) };
				iLocal_110 = func_52(0);
				vLocal_112 = { 2549.85f, 387.1622f, 107.623f };
				fLocal_113 = 197.2994f;
				iLocal_134 = 1;
				if (func_400(6, 18))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 0;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 1;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 1;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 1;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 1;
				}
				break;
			
			case 5:
				vLocal_116 = { 0f, 0f, 155f };
				vLocal_115 = { 2676.26f, 3281.04f, (55.44f - 0.2f) };
				iLocal_110 = func_52(0);
				vLocal_112 = { 2671.351f, 3283.136f, 54.2411f };
				fLocal_113 = 296.5427f;
				iLocal_134 = 1;
				if (func_400(6, 18))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 1;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 2;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 2;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 2;
				}
				break;
			
			case 6:
				vLocal_116 = { 0f, 0f, 63.3f };
				vLocal_115 = { 1729.4f, 6417.08f, (35.24f - 0.2f) };
				iLocal_110 = func_52(0);
				vLocal_112 = { 1733.967f, 6421.495f, 34.0372f };
				fLocal_113 = 130.9518f;
				iLocal_134 = 1;
				if (func_400(6, 18))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 2;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 1;
					iLocal_317[0] = 0;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				break;
			
			case 7:
				vLocal_116 = { 0f, 0f, 117f };
				vLocal_115 = { 1959.4f, 3742.33f, (32.54f - 0.2f) };
				iLocal_110 = func_52(0);
				vLocal_112 = { 1958.92f, 3746.267f, 31.3438f };
				fLocal_113 = 73.6245f;
				iLocal_134 = 1;
				if (func_400(6, 18))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 0;
					iLocal_316[1] = 1;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 1;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 0;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 1;
				}
				break;
			
			case 8:
				vLocal_116 = { 0f, 0f, 92f };
				vLocal_115 = { 25.03f, -1344.96f, (29.69f - 0.2f) };
				iLocal_110 = func_52(0);
				vLocal_112 = { 30.5721f, -1339.782f, 28.4939f };
				fLocal_113 = 110.7699f;
				iLocal_134 = 1;
				if (func_400(6, 18))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 1;
					iLocal_316[1] = 2;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 2;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 1;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 2;
				}
				break;
			
			case 9:
				vLocal_116 = { 0f, 0f, 75f };
				vLocal_115 = { 373.68f, 328.56f, (103.77f - 0.2f) };
				iLocal_110 = func_52(0);
				vLocal_112 = { 376.2976f, 331.8158f, 102.5664f };
				fLocal_113 = 52.0064f;
				iLocal_134 = 1;
				if (func_400(6, 18))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 2;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 1;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 2;
					iLocal_316[1] = 1;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 0;
					iLocal_317[4] = 0;
				}
				break;
			
			case 10:
				vLocal_116 = { 0f, 0f, 0f };
				vLocal_115 = { 1165.96f, 2710.2f, (38.25f - 0.105f) };
				iLocal_110 = func_52(0);
				vLocal_112 = { 1168.971f, 2719.118f, 36.0632f };
				fLocal_113 = 136.5945f;
				iLocal_134 = 3;
				if (func_400(10, 22))
				{
					iLocal_316[0] = 1;
					iLocal_317[0] = 0;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 0;
					iLocal_316[1] = 2;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 11:
				vLocal_116 = { 0f, 0f, -92f };
				vLocal_115 = { -2967.03f, 390.9f, (15.23f - 0.2f) };
				iLocal_110 = func_52(0);
				vLocal_112 = { -2962.983f, 391.9788f, 14.0433f };
				fLocal_113 = 176.1174f;
				iLocal_134 = 3;
				if (func_400(10, 22))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 0;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 1;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 12:
				vLocal_116 = { 0f, 0f, -145f };
				vLocal_115 = { -1222.33f, -907.82f, (12.52f - 0.2f) };
				iLocal_110 = func_52(0);
				vLocal_112 = { -1218.283f, -915.7103f, 10.3264f };
				fLocal_113 = 43.8031f;
				iLocal_134 = 3;
				if (func_400(10, 22))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 1;
					iLocal_316[1] = 1;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 2;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 13:
				vLocal_116 = { 0f, 0f, 103f };
				vLocal_115 = { 1134.81f, -982.36f, (46.6f - 0.2f) };
				iLocal_110 = func_52(0);
				vLocal_112 = { 1130.155f, -979.2816f, 45.4158f };
				fLocal_113 = 269.2587f;
				iLocal_134 = 3;
				if (func_400(10, 22))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 2;
					iLocal_316[1] = 2;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 1;
					iLocal_317[0] = 0;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 14:
				vLocal_116 = { 0f, 0f, -41f };
				vLocal_115 = { -1486.67f, -378.46f, (40.35f - 0.2f) };
				iLocal_110 = func_52(0);
				vLocal_112 = { -1479.163f, -375.0302f, 38.1633f };
				fLocal_113 = 36.5415f;
				iLocal_134 = 3;
				if (func_400(10, 22))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 0;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 0;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 15:
				vLocal_116 = { 0f, 0f, 145f };
				vLocal_115 = { (1698.33f - 0.04f), 4923.33f, (42.12f - 0.06f) };
				iLocal_110 = func_52(0);
				vLocal_112 = { 1707.303f, 4918.31f, 41.0636f };
				fLocal_113 = 24.9178f;
				iLocal_134 = 2;
				if (func_400(8, 20))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 1;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 1;
					iLocal_316[1] = 1;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 16:
				vLocal_116 = { 0f, 0f, -87f };
				vLocal_115 = { -706.69f, -913.69f, (19.27f - 0.06f) };
				iLocal_110 = func_52(0);
				vLocal_112 = { -709.7998f, -907.1352f, 18.2156f };
				fLocal_113 = 291.6504f;
				iLocal_134 = 2;
				if (func_400(8, 20))
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 2;
					iLocal_316[1] = 1;
					iLocal_317[1] = 0;
					iLocal_316[2] = 1;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 2;
					iLocal_316[1] = 2;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 17:
				vLocal_116 = { 0f, 0f, -125f };
				vLocal_115 = { -47.23f, -1757.64f, (29.48f - 0.06f) };
				iLocal_110 = func_52(0);
				vLocal_112 = { -40.42f, -1751.423f, 28.421f };
				fLocal_113 = 145.6553f;
				iLocal_134 = 2;
				if (func_400(8, 20))
				{
					iLocal_316[0] = 1;
					iLocal_317[0] = 0;
					iLocal_316[1] = 1;
					iLocal_317[1] = 1;
					iLocal_316[2] = 1;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 0;
					iLocal_316[1] = 2;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 2;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 18:
				vLocal_116 = { 0f, 0f, -74f };
				vLocal_115 = { 1164.16f, -322.9f, (69.26f - 0.06f) };
				iLocal_110 = func_52(0);
				vLocal_112 = { 1159.682f, -314.254f, 68.2051f };
				fLocal_113 = 232.6337f;
				iLocal_134 = 2;
				if (func_400(8, 20))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 0;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 1;
					iLocal_316[1] = 2;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 0;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
			
			case 19:
				vLocal_115 = { -1820.5f, 793.78f, (138.32f - 0.22f) };
				vLocal_116 = { 0f, 0f, -47.3f };
				iLocal_110 = func_52(0);
				vLocal_112 = { -1828.907f, 799.6096f, 137.1776f };
				fLocal_113 = 247.1234f;
				iLocal_134 = 2;
				if (func_400(8, 20))
				{
					iLocal_316[0] = 2;
					iLocal_317[0] = 1;
					iLocal_316[1] = 0;
					iLocal_317[1] = 0;
					iLocal_316[2] = 0;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 0;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				else
				{
					iLocal_316[0] = 0;
					iLocal_317[0] = 2;
					iLocal_316[1] = 2;
					iLocal_317[1] = 1;
					iLocal_316[2] = 0;
					iLocal_317[2] = 1;
					iLocal_316[3] = 0;
					iLocal_317[3] = 1;
					iLocal_316[4] = 1;
					iLocal_317[4] = 0;
				}
				break;
		}
		vLocal_115 = { _GET_OBJECT_OFFSET_FROM_COORDS(vLocal_115, vLocal_116.z, 0f, 0.075f, 0f) };
		vLocal_111 = { GET_ANIM_INITIAL_OFFSET_POSITION("mp_am_hold_up", "holdup_victim_20s", vLocal_115, vLocal_116, 0, 2) };
		vVar0 = { GET_ANIM_INITIAL_OFFSET_ROTATION("mp_am_hold_up", "holdup_victim_20s", vLocal_115, vLocal_116, 0f, 2) };
		Local_103.f_42 = vVar0.z;
		vLocal_127 = { GET_ANIM_INITIAL_OFFSET_POSITION("mp_am_hold_up", "holdup_victim_20s_bag", vLocal_115, vLocal_116, 0, 2) };
		vVar0 = { GET_ANIM_INITIAL_OFFSET_ROTATION("mp_am_hold_up", "holdup_victim_20s_bag", vLocal_115, vLocal_116, 0f, 2) };
		fLocal_128 = vVar0.z;
		vLocal_129 = { GET_ANIM_INITIAL_OFFSET_POSITION("mp_am_hold_up", "holdup_victim_20s_till", vLocal_115, vLocal_116, 0, 2) };
		vVar0 = { GET_ANIM_INITIAL_OFFSET_ROTATION("mp_am_hold_up", "holdup_victim_20s_till", vLocal_115, vLocal_116, 0f, 2) };
		fLocal_130 = vVar0.z;
		Local_105 = func_399(Local_105.f_50);
		if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_103.f_45 = iLocal_316[0];
			if (Local_103.f_45 == 0)
			{
				StringCopy(&(Local_103.f_50), "MP_M_SHOPKEEP_01_PAKISTANI_MINI_01", 64);
				StringCopy(&(Local_103.f_46), "StoreOwner2", 16);
			}
			else if (Local_103.f_45 == 1)
			{
				StringCopy(&(Local_103.f_50), "MP_M_SHOPKEEP_01_LATINO_MINI_01", 64);
				StringCopy(&(Local_103.f_46), "StoreOwner", 16);
			}
			else
			{
				StringCopy(&(Local_103.f_50), "MP_M_SHOPKEEP_01_CHINESE_MINI_01", 64);
				StringCopy(&(Local_103.f_46), "StoreOwner3", 16);
			}
		}
		if (!IS_BIT_SET(Local_105.f_52, 29))
		{
			CREATE_MODEL_HIDE(vLocal_115, 0.5f, iLocal_131, 1);
			SET_BIT(&(Local_105.f_52), 29);
		}
		return 1;
	}
	return 0;
}

int func_399(int iParam0)
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		case 17:
			return 1;
		
		case 18:
			return 2;
		
		case 15:
			return 3;
		
		case 19:
			return 4;
		
		case 10:
			return 5;
		
		case 11:
			return 6;
		
		case 12:
			return 7;
		
		case 13:
			return 8;
		
		case 14:
			return 9;
		
		case 2:
			return 10;
		
		case 1:
			return 11;
		
		case 3:
			return 12;
		
		case 4:
			return 13;
		
		case 5:
			return 14;
		
		case 6:
			return 15;
		
		case 7:
			return 16;
		
		case 8:
			return 17;
		
		case 9:
			return 18;
		
		case 0:
			return -2;
		
		default:
	}
	return -1;
}

bool func_400(int iParam0, int iParam1)
{
	return func_401(GET_CLOCK_HOURS(), iParam0, iParam1);
}

int func_401(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

void func_402(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1393.091f, 3607.383f, 33.9809f };
		*uParam2 = { 1391.178f, 3612.516f, (38.3614f - 0.2f) };
		*uParam3 = 12.5f;
	}
	else if (iParam0 == 1)
	{
		*uParam1 = { -3045.013f, 585.9666f, (10.35421f - 0.2f) };
		*uParam2 = { -3048.714f, 584.7961f, 6.948262f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 2)
	{
		*uParam1 = { -3247.313f, 1003.657f, (15.27433f - 0.2f) };
		*uParam2 = { -3251.157f, 1003.984f, 11.83501f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 3)
	{
		*uParam1 = { 546.5474f, 2665.642f, (44.60108f - 0.2f) };
		*uParam2 = { 547.054f, 2661.794f, 41.15667f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 4)
	{
		*uParam1 = { 2552f, 384.2527f, (111.0656f - 0.2f) };
		*uParam2 = { 2548.145f, 384.4133f, 107.6241f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 5)
	{
		*uParam1 = { 2674.946f, 3284.833f, (57.68088f - 0.2f) };
		*uParam2 = { 2671.569f, 3286.699f, 54.24464f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 6)
	{
		*uParam1 = { 1733.119f, 6418.579f, (37.48002f - 0.2f) };
		*uParam2 = { 1734.839f, 6422.032f, 34.03751f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 7)
	{
		*uParam1 = { 1960.224f, 3746.258f, (34.7878f - 0.2f) };
		*uParam2 = { 1958.295f, 3749.599f, 31.34522f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 8)
	{
		*uParam1 = { 27.71382f, -1341.968f, (31.93314f - 0.2f) };
		*uParam2 = { 27.71049f, -1338.109f, 28.49479f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 9)
	{
		*uParam1 = { 377.0183f, 330.808f, (106.0112f - 0.2f) };
		*uParam2 = { 377.9499f, 334.5523f, 102.567f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 10)
	{
		*uParam1 = { 1167.015f, 2711.601f, (40.66147f - 0.2f) };
		*uParam2 = { 1167.082f, 2720.243f, 36.06501f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 11)
	{
		*uParam1 = { -2965.705f, 389.6696f, (17.64162f - 0.2f) };
		*uParam2 = { -2957.095f, 389.139f, 13.04323f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 12)
	{
		*uParam1 = { -1222.402f, -909.5575f, (14.92466f - 0.2f) };
		*uParam2 = { -1217.682f, -916.7974f, 10.33735f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 13)
	{
		*uParam1 = { 1133.284f, -981.473f, (49.01414f - 0.2f) };
		*uParam2 = { 1124.708f, -982.6027f, 44.42008f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 14)
	{
		*uParam1 = { -1484.883f, -378.2694f, (42.76172f - 0.2f) };
		*uParam2 = { -1478.771f, -372.1664f, 38.16948f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 15)
	{
		*uParam1 = { 1704.556f, 4921.806f, (44.02687f - 0.2f) };
		*uParam2 = { 1708.285f, 4919.196f, 41.06359f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 16)
	{
		*uParam1 = { -709.019f, -907.7159f, (21.17918f - 0.2f) };
		*uParam2 = { -709.0177f, -903.1516f, 18.21618f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 17)
	{
		*uParam1 = { -45.16617f, -1751.578f, (31.37973f - 0.2f) };
		*uParam2 = { -42.22961f, -1748.09f, 28.42099f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 18)
	{
		*uParam1 = { 1160.825f, -317.4214f, (71.16085f - 0.2f) };
		*uParam2 = { 1160.033f, -312.932f, 68.20509f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 19)
	{
		*uParam1 = { -1826.218f, 796.6393f, (140.1334f - 0.2f) };
		*uParam2 = { -1829.301f, 799.9996f, 137.18f };
		*uParam3 = 4f;
	}
}

void func_403(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1395.548f, 3600.575f, 33.98914f };
		*uParam2 = { 1392.08f, 3609.983f, (37.33543f - 0.2f) };
		*uParam3 = 12.25f;
	}
	if (iParam0 == 1)
	{
		*uParam1 = { -3038.657f, 589.5176f, 6.904751f };
		*uParam2 = { -3045.476f, 587.4066f, (11.31222f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 2)
	{
		*uParam1 = { -3240.032f, 1004.482f, 11.8307f };
		*uParam2 = { -3247.188f, 1005.107f, (16.25224f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 3)
	{
		*uParam1 = { 544.2278f, 2672.5f, 41.1565f };
		*uParam2 = { 545.201f, 2665.442f, (45.69155f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 4)
	{
		*uParam1 = { 2559.176f, 385.3936f, 107.623f };
		*uParam2 = { 2552.054f, 385.6057f, (112.1638f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 5)
	{
		*uParam1 = { 2681.864f, 3282.603f, 54.24114f };
		*uParam2 = { 2675.586f, 3285.981f, (58.79021f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 6)
	{
		*uParam1 = { 1731.237f, 6411.557f, 34.03723f };
		*uParam2 = { 1734.383f, 6417.952f, (38.58461f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 7)
	{
		*uParam1 = { 1964.999f, 3740.795f, 31.34375f };
		*uParam2 = { 1961.384f, 3746.928f, (35.89571f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 8)
	{
		*uParam1 = { Vector(28.49392f, -1348.507f, 27.03358f) + Vector(0f, -0.4f, 2f) };
		*uParam2 = { Vector(33.03834f, -1341.382f, 27.05614f) - Vector(0.2f, 0.2f, 0.2f) + Vector(0f, -0.4f, 2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 9)
	{
		*uParam1 = { 376.6309f, 323.5533f, 102.5664f };
		*uParam2 = { 378.3253f, 330.4793f, (107.1095f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 10)
	{
		*uParam1 = { 1166.497f, 2703.756f, 37.06307f };
		*uParam2 = { 1166.525f, 2711.974f, (41.66307f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 11)
	{
		*uParam1 = { -2973.512f, 390.7873f, 14.04322f };
		*uParam2 = { -2965.288f, 390.2452f, (18.54322f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 12)
	{
		*uParam1 = { -1226.417f, -902.6738f, 11.33496f };
		*uParam2 = { -1221.765f, -909.5887f, (15.82626f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 13)
	{
		*uParam1 = { 1141.35f, -980.9322f, 45.41594f };
		*uParam2 = { 1132.976f, -982.0952f, (49.91574f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 14)
	{
		*uParam1 = { -1490.949f, -383.4771f, 39.16332f };
		*uParam2 = { -1485.006f, -377.6167f, (43.66332f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 15)
	{
		*uParam1 = { 1698.98f, 4929.093f, 41.06357f };
		*uParam2 = { 1705.233f, 4924.578f, (45.60386f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 16)
	{
		*uParam1 = { -711.77f, -916.4685f, 18.21557f };
		*uParam2 = { -711.7368f, -908.7517f, (22.76488f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 17)
	{
		*uParam1 = { -52.90452f, -1756.474f, 28.42097f };
		*uParam2 = { -47.92523f, -1750.614f, (32.94246f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 18)
	{
		*uParam1 = { 1159.633f, -326.5087f, 68.20507f };
		*uParam2 = { 1158.335f, -318.9123f, (72.74828f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 19)
	{
		*uParam1 = { -1822.373f, 788.2851f, 137.1876f };
		*uParam2 = { -1827.484f, 794.0739f, (141.6933f - 0.2f) };
		*uParam3 = 14f;
	}
}

void func_404(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_405(iParam0, uParam5, uParam6);
	switch (iParam0)
	{
		case 0:
			if (*iParam1 == 0)
			{
				*iParam1 = GET_INTERIOR_AT_COORDS_WITH_TYPE(*uParam5, "v_methlab");
			}
			*uParam2 = -1621784842;
			*uParam4 = -924210258;
			*uParam3 = -1;
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			if (*iParam1 == 0)
			{
				*iParam1 = GET_INTERIOR_AT_COORDS_WITH_TYPE(*uParam5, "v_shop_247");
			}
			*uParam2 = 1569794095;
			*uParam4 = 462608346;
			*uParam3 = -1;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			if (*iParam1 == 0)
			{
				*iParam1 = GET_INTERIOR_AT_COORDS_WITH_TYPE(*uParam5, "v_gen_liquor");
			}
			*uParam2 = -278510267;
			*uParam4 = -1293435817;
			*uParam3 = -1;
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			if (*iParam1 == 0)
			{
				*iParam1 = GET_INTERIOR_AT_COORDS_WITH_TYPE(*uParam5, "v_gasstation");
			}
			*uParam2 = -1659520475;
			*uParam4 = -1272390353;
			*uParam3 = -835664728;
			break;
	}
}

void func_405(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1394.169f, 3599.86f, 34.0121f };
			*uParam2 = { 1395.548f, 3600.575f, 33.98914f };
			break;
		
		case 1:
			*uParam1 = { -3038.908f, 589.5187f, 6.9048f };
			*uParam2 = { -3038.657f, 589.5176f, 6.904751f };
			break;
		
		case 2:
			*uParam1 = { -3240.317f, 1004.433f, 11.8307f };
			*uParam2 = { -3240.032f, 1004.482f, 11.8307f };
			break;
		
		case 3:
			*uParam1 = { 544.2802f, 2672.811f, 41.1566f };
			*uParam2 = { 544.2278f, 2672.5f, 41.1565f };
			break;
		
		case 4:
			*uParam1 = { 2559.247f, 385.5266f, 107.623f };
			*uParam2 = { 2559.176f, 385.3936f, 107.623f };
			break;
		
		case 5:
			*uParam1 = { 2682.003f, 3282.543f, 54.2411f };
			*uParam2 = { 2681.864f, 3282.603f, 54.24114f };
			break;
		
		case 6:
			*uParam1 = { 1731.21f, 6411.403f, 34.0372f };
			*uParam2 = { 1731.237f, 6411.557f, 34.03723f };
			break;
		
		case 7:
			*uParam1 = { 1965.054f, 3740.555f, 31.3448f };
			*uParam2 = { 1964.999f, 3740.795f, 31.34375f };
			break;
		
		case 8:
			*uParam1 = { Vector(28.5036f, -1348.813f, 27.0641f) + Vector(0f, -0.4f, 2f) };
			*uParam2 = { Vector(28.49392f, -1348.507f, 27.03358f) + Vector(0f, -0.4f, 2f) };
			break;
		
		case 9:
			*uParam1 = { 376.6533f, 323.6471f, 102.5664f };
			*uParam2 = { 376.6309f, 323.5533f, 102.5664f };
			break;
		
		case 10:
			*uParam1 = { Vector(37.1573f, 2703.114f, 1195.432f) + Vector(0f, 0.39f, -29.04f) };
			*uParam2 = { 1166.497f, 2703.756f, 37.06307f };
			break;
		
		case 11:
			*uParam1 = { -2973.262f, 390.8184f, 14.0433f };
			*uParam2 = { -2973.512f, 390.7873f, 14.04322f };
			break;
		
		case 12:
			*uParam1 = { -1226.464f, -902.5864f, 11.2783f };
			*uParam2 = { -1226.417f, -902.6738f, 11.33496f };
			break;
		
		case 13:
			*uParam1 = { 1141.36f, -980.8802f, 45.4155f };
			*uParam2 = { 1141.35f, -980.9322f, 45.41594f };
			break;
		
		case 14:
			*uParam1 = { -1491.057f, -383.5728f, 39.1706f };
			*uParam2 = { -1490.949f, -383.4771f, 39.16332f };
			break;
		
		case 15:
			*uParam1 = { 1698.808f, 4929.198f, 41.0783f };
			*uParam2 = { 1698.98f, 4929.093f, 41.06357f };
			break;
		
		case 16:
			*uParam1 = { -711.721f, -916.6965f, 18.2145f };
			*uParam2 = { -711.77f, -916.4685f, 18.21557f };
			break;
		
		case 17:
			*uParam1 = { -53.124f, -1756.405f, 28.421f };
			*uParam2 = { -52.90452f, -1756.474f, 28.42097f };
			break;
		
		case 18:
			*uParam1 = { 1159.542f, -326.6986f, 67.923f };
			*uParam2 = { 1159.633f, -326.5087f, 68.20507f };
			break;
		
		case 19:
			*uParam1 = { -1822.287f, 788.006f, 137.1859f };
			*uParam2 = { -1822.373f, 788.2851f, 137.1876f };
			break;
	}
}

int func_406(var uParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar1 = 9999.9f;
	iVar2 = 0;
	while (iVar2 < 20)
	{
		fVar0 = GET_DISTANCE_BETWEEN_COORDS(func_88(GET_DISTANCE_BETWEEN_COORDS()), func_407(iVar2), true);
		if (fVar0 < fVar1)
		{
			if (bParam1)
			{
				if (!IS_BIT_SET(Global_2423902.f_62, iVar2) && IS_BIT_SET(Global_2423902.f_64, iVar2))
				{
					fVar1 = fVar0;
					*uParam0 = iVar2;
				}
			}
			else
			{
				fVar1 = fVar0;
				*uParam0 = iVar2;
			}
		}
		iVar2++;
	}
	return 1;
}

Vector3 func_407(int iParam0)
{
	vector3 vVar0;
	var uVar1;
	
	func_405(iParam0, &vVar0, &uVar1);
	return vVar0;
}

int func_408(int iParam0)
{
	return Local_104[iParam0 /*10*/].f_4;
}

void func_409()
{
	Global_2448961.f_684.f_28 = 0;
}

void func_410()
{
	if (Global_1312417.f_1 == 1)
	{
		func_411(7, 0, 1);
		Global_1312417.f_1 = 0;
		Global_1628955[PLAYER_ID() /*614*/].f_9 = 0;
	}
}

void func_411(int iParam0, int iParam1, bool bParam2)
{
	if (func_381())
	{
		if (iParam1 == 1)
		{
			if (Global_2531497.f_4395 == -1)
			{
				Global_2531497.f_4395 = Global_262145.f_26329;
			}
			func_412(&(Global_2531497.f_4393), 0, 0);
			if (bParam2)
			{
				if (Global_2531497.f_4398 == -1)
				{
					Global_2531497.f_4398 = Global_262145.f_26330;
				}
				func_412(&(Global_2531497.f_4396), 0, 0);
			}
			else
			{
				Global_1312417 = 0;
				Global_1628955[PLAYER_ID() /*614*/].f_8 = 0;
				func_380(1);
			}
		}
		else
		{
			Global_1312417 = 0;
			Global_1628955[PLAYER_ID() /*614*/].f_8 = 0;
			func_380(1);
		}
		if ((!NETWORK_IS_ACTIVITY_SESSION() && !func_379()) && !func_378(NETWORK_IS_ACTIVITY_SESSION()))
		{
			Global_968396 = 0;
		}
		0x35EEC6C2BC821A71(0, -1, -1, iParam0);
	}
}

void func_412(var uParam0, bool bParam1, bool bParam2)
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

void func_413()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (!func_46(PLAYER_ID(), 1, 1))
	{
		iVar0 = 1;
		if (IS_BIT_SET(Local_105.f_53, 6) && !IS_BIT_SET(Local_105.f_53, 5))
		{
			iVar1 = NETWORK_GET_VC_WALLET_BALANCE(-1);
			iVar2 = 0;
			SET_BIT(&iVar2, 8);
			SET_BIT(&iVar2, 4);
			SET_BIT(&iVar2, 1);
			if (iLocal_335 > Global_262145.f_167)
			{
				iLocal_335 = Global_262145.f_167;
			}
			if (iVar1 < iLocal_335)
			{
				if (iVar1 > 0)
				{
					if (func_51(func_52(1)))
					{
						if (_0x7303E27CC6532080(iVar1, 0, 0, 0, &uVar3, -1, 0))
						{
							if (func_216())
							{
								if (!IS_BIT_SET(Global_2531497.f_7, 1))
								{
									Global_2531497.f_4723 = iVar1;
									Global_2531497.f_4724 = iVar2;
									Global_2531497.f_4725 = { GET_DEAD_PED_PICKUP_COORDS(GET_DEAD_PED_PICKUP_COORDS(), 1067030938, 1069547520) };
									func_206(&(Global_2531497.f_4722), -1135378931, 537254313, 1474183246, 1022400740, Global_2531497.f_4723, 1, 3);
									SET_BIT(&(Global_2531497.f_7), 1);
									iLocal_335 = 0;
									SET_BIT(&(Local_105.f_53), 5);
								}
							}
							else
							{
								CREATE_AMBIENT_PICKUP(joaat("pickup_money_variable"), CREATE_AMBIENT_PICKUP(CREATE_AMBIENT_PICKUP(), 1067030938, 1069547520), iVar2, iVar1, func_52(1), 0, 0);
								func_201(-iVar1, 1, 1, 1092616192);
								NETWORK_SPENT_HOLDUPS(iVar1, 0, 0);
								func_205(1022400740, iVar1, &uVar4, 0, 0, 0);
								iLocal_335 = 0;
								func_414();
								SET_BIT(&(Local_105.f_53), 5);
							}
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
			}
			else if (iLocal_335 > 0)
			{
				if (func_51(func_52(1)))
				{
					if (_0x7303E27CC6532080(iLocal_335, 0, 0, 0, &uVar3, -1, 0))
					{
						if (func_216())
						{
							if (!IS_BIT_SET(Global_2531497.f_7, 1))
							{
								Global_2531497.f_4723 = iLocal_335;
								Global_2531497.f_4724 = iVar2;
								Global_2531497.f_4725 = { GET_DEAD_PED_PICKUP_COORDS(GET_DEAD_PED_PICKUP_COORDS(), 1067030938, 1069547520) };
								func_206(&(Global_2531497.f_4722), -1135378931, 537254313, 1474183246, 1022400740, Global_2531497.f_4723, 1, 3);
								SET_BIT(&(Global_2531497.f_7), 1);
								iLocal_335 = 0;
								SET_BIT(&(Local_105.f_53), 5);
							}
						}
						else
						{
							CREATE_AMBIENT_PICKUP(joaat("pickup_money_variable"), CREATE_AMBIENT_PICKUP(CREATE_AMBIENT_PICKUP(), 1067030938, 1069547520), iVar2, iLocal_335, func_52(1), 0, 0);
							func_201(-iLocal_335, 1, 1, 1092616192);
							NETWORK_SPENT_HOLDUPS(iLocal_335, 0, 0);
							func_205(1022400740, iLocal_335, &uVar5, 0, 0, 0);
							iLocal_335 = 0;
							func_414();
							SET_BIT(&(Local_105.f_53), 5);
						}
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
		}
		if (iVar0 == 1)
		{
			func_440();
		}
		else
		{
			return;
		}
	}
}

void func_414()
{
	Global_2531497.f_283 = 0;
	Global_2531497.f_284 = 0;
	Global_2531497.f_285 = 0;
}

int func_415()
{
	var uVar0;
	
	func_423(&uVar0);
	if (Global_1312850 == 0)
	{
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_422())
	{
		return 1;
	}
	if (Global_2461241)
	{
		return 1;
	}
	if (func_421())
	{
		return 1;
	}
	if (func_420(159))
	{
		if (!func_419())
		{
			return 1;
		}
	}
	if (func_420(157))
	{
		return 1;
	}
	if (!NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_416() != 0)
	{
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_416()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_416()
{
	switch (func_418())
	{
		case 0:
			return func_417();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_417()
{
	switch (Global_2461343)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_418()
{
	return Global_30736;
}

bool func_419()
{
	return Global_2448961.f_598;
}

int func_420(int iParam0)
{
	if (GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_421()
{
	return Global_2458999;
}

bool func_422()
{
	return Global_2448961.f_593;
}

void func_423(var uParam0)
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
					func_424(iVar0);
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

void func_424(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_46(vVar0.y, 1, 1))
		{
			iVar1 = GET_PLAYER_PED(vVar0.y);
			if (DOES_ENTITY_EXIST(iVar1))
			{
				if (IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && IS_VEHICLE_WINDOW_INTACT())
					{
						if (func_425(iVar2, &bVar3))
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

int func_425(int iParam0, var uParam1)
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

void func_426()
{
	wait(0);
}

void func_427(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	if (func_438())
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
		if (!func_436())
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
				else if (bVar13 || (!func_333(PLAYER_ID(), 0) && !func_435()))
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
				func_432(0, 0, 0);
				if (bVar24)
				{
					CLEAR_FOCUS();
				}
				if (!func_431(iVar26) && !IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar26))
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
					func_430();
					func_429();
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
				if (!func_431(iVar26) && !IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar26))
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
					if (func_428(Global_4456448.f_190930))
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

bool func_428(int iParam0)
{
	return iParam0 == 17;
}

void func_429()
{
	vector3 vVar0;
	
	Global_2437549.f_1232 = 0;
	Global_2437549.f_1233 = 0;
	Global_2437549.f_1234 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2437549.f_1239 = -1;
	Global_2437549.f_1240 = 0;
	Global_2405071.f_2681 = { vVar0 };
}

void func_430()
{
	Global_2405071.f_692 = 0;
	Global_2405071.f_2724 = 0;
	Global_2405071.f_510 = 0;
	Global_2405071.f_598 = 0;
	Global_2424073[PLAYER_ID() /*421*/].f_207 = 0;
	Global_2405071.f_2679 = 0;
}

int func_431(int iParam0)
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

void func_432(bool bParam0, int iParam1, int iParam2)
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
				func_434();
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
		if (func_333(PLAYER_ID(), 0))
		{
			NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1, 1);
		}
		else
		{
			_GET_DATE_AND_TIME_FROM_UNIX_EPOCH(bParam0, iParam1);
		}
		KEY_HUD_COLOUR(bParam0, iParam1);
		func_433(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_433(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STAT_SET_BOOL(iVar0, bParam1, 1);
	}
}

void func_434()
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

bool func_435()
{
	return IS_BIT_SET(Global_2359302, 3);
}

int func_436()
{
	if (func_437() == 0)
	{
		return 1;
	}
	return 0;
}

int func_437()
{
	return Global_1312467.f_18;
}

int func_438()
{
	if (Global_1590446[PLAYER_ID() /*871*/].f_35 && !Global_2449755.f_2846.f_214 == -1)
	{
		return 1;
	}
	return 0;
}

bool func_439(bool bParam0)
{
	if (bParam0)
	{
		return (Global_2448961.f_684.f_28 && GET_HASH_KEY(GET_HASH_KEY()) == Global_2448961.f_684.f_31);
	}
	return Global_2448961.f_684.f_28;
}

void func_440()
{
	int iVar0;
	
	Global_2531497.f_8 = 0;
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_395(Local_103))
		{
			if (NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103) || (!NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103) && NETWORK_HAS_CONTROL_OF_NETWORK_ID()))
			{
				_SET_PED_RAGDOLL_BLOCKING_FLAGS(_SET_PED_RAGDOLL_BLOCKING_FLAGS(Local_103), 0);
				CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Local_103));
				if (IS_BIT_SET(Local_105.f_52, 22))
				{
					if (IS_BIT_SET(Local_105.f_52, 20))
					{
						if (Local_103.f_3 != 7)
						{
							if (!IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 9))
							{
								CLEAR_PED_TASKS(CLEAR_PED_TASKS(Local_103));
								TASK_PERFORM_SEQUENCE(TASK_PERFORM_SEQUENCE(Local_103), iLocal_121);
								SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_103), false);
							}
						}
						else if (GET_SCRIPT_TASK_STATUS(GET_SCRIPT_TASK_STATUS(Local_103), -1442466670) != 0 && GET_SCRIPT_TASK_STATUS(GET_SCRIPT_TASK_STATUS(Local_103), -1442466670) != 1)
						{
							CLEAR_PED_TASKS(CLEAR_PED_TASKS(Local_103));
							if (!HAS_PED_GOT_WEAPON(HAS_PED_GOT_WEAPON(Local_103), joaat("weapon_pistol"), 0))
							{
								GIVE_DELAYED_WEAPON_TO_PED(GIVE_DELAYED_WEAPON_TO_PED(Local_103), joaat("weapon_pistol"), 25000, true);
								SET_PED_ACCURACY(SET_PED_ACCURACY(Local_103), 30);
							}
							func_230(4);
							TASK_COMBAT_HATED_TARGETS_AROUND_PED(TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_103), 20f, 0);
						}
					}
					else if ((IS_BIT_SET(Local_103.f_23, 3) || !func_10()) || !func_444())
					{
						if (!IS_BIT_SET(Local_104[IS_BIT_SET() /*10*/], 9))
						{
							CLEAR_PED_TASKS(CLEAR_PED_TASKS(Local_103));
							TASK_PERFORM_SEQUENCE(TASK_PERFORM_SEQUENCE(Local_103), iLocal_121);
							SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_103), false);
						}
					}
					else
					{
						CLEAR_PED_TASKS(CLEAR_PED_TASKS(Local_103));
						SET_PED_KEEP_TASK(SET_PED_KEEP_TASK(Local_103), true);
						TASK_STAND_STILL(TASK_STAND_STILL(Local_103), -1);
						SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_103), false);
					}
				}
			}
		}
		if ((IS_BIT_SET(Local_103.f_23, 3) || !func_10()) || IS_BIT_SET() <= 1)
		{
			if (NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_13))
			{
				if (NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103.f_13))
				{
					DETACH_ENTITY(DETACH_ENTITY(Local_103.f_13), 1, true);
					func_47(&(Local_103.f_13));
				}
			}
		}
		if (((IS_BIT_SET(Local_103.f_23, 3) || !func_10()) || IS_BIT_SET(Local_105.f_52, 20)) || IS_BIT_SET() <= 1)
		{
			if (NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_14))
			{
				if (NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103.f_14))
				{
					func_47(&(Local_103.f_14));
				}
			}
		}
		if (func_216() && IS_BIT_SET(Global_2531497.f_7, 1))
		{
			if (func_289(Global_2531497.f_4722) == 1)
			{
				func_443(Global_2531497.f_4722, 4);
			}
			else
			{
				func_208(Global_2531497.f_4722);
			}
			CLEAR_BIT(&(Global_2531497.f_7), 1);
		}
		if (Local_103.f_12 == 6)
		{
			if (NETWORK_DOES_NETWORK_ID_EXIST(Local_103))
			{
				if (DECOR_EXIST_ON(DECOR_EXIST_ON(Local_103), "XP_Blocker"))
				{
					DECOR_REMOVE(DECOR_REMOVE(Local_103), "XP_Blocker");
				}
			}
		}
		if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			REMOVE_SHOCKING_EVENT(Local_103.f_30);
		}
	}
	func_442();
	REMOVE_ANIM_DICT("mp_am_hold_up");
	_0x0032A6DBA562C518();
	if (func_148("SHR_MENU"))
	{
		CLEAR_HELP(1);
	}
	Global_2531497.f_9 = func_182();
	SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(func_397(Local_105));
	func_164(1, Local_105);
	if (Local_105.f_14 != -1)
	{
		func_263(&(Local_105.f_14));
	}
	Global_2531497.f_27 = Local_105;
	if (Global_2531497.f_5655.f_4 == 1)
	{
		Global_2531497.f_5655.f_4 = 0;
	}
	if (Global_2531497.f_5655.f_5 == 1)
	{
		Global_2531497.f_5655.f_5 = 0;
	}
	if (IS_BIT_SET(Local_105.f_52, 29))
	{
		REMOVE_MODEL_HIDE(vLocal_115, 0.5f, iLocal_131, true);
	}
	if (IS_BIT_SET(Local_105.f_53, 7))
	{
		func_410();
		CLEAR_BIT(&(Local_105.f_53), 7);
	}
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (IS_BIT_SET(Local_103.f_23, 6) || IS_BIT_SET(Local_103.f_23, 21))
		{
			if (IS_BIT_SET(Local_103.f_23, 21))
			{
				iVar0 = 1;
			}
			_0xCB00196B31C39EB1(30, iLocal_334, iLocal_335, iVar0);
		}
	}
	if (DOES_CAM_EXIST(Local_105.f_1))
	{
		if (IS_CAM_ACTIVE(Local_105.f_1))
		{
			RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
		}
		DESTROY_CAM(Local_105.f_1, 0);
	}
	func_441();
}

void func_441()
{
	TERMINATE_THIS_THREAD();
}

void func_442()
{
	CLEAR_SEQUENCE_TASK(&uLocal_118);
	CLEAR_SEQUENCE_TASK(&iLocal_119);
}

void func_443(int iParam0, int iParam1)
{
	if (func_275(iParam0) != -1)
	{
		if (Global_4263810[iParam0 /*84*/].f_65.f_2 == 1)
		{
			Global_4263810[iParam0 /*84*/].f_65.f_11 = iParam1;
		}
	}
}

int func_444()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(iVar0)))
		{
			iVar1 = NETWORK_GET_PLAYER_INDEX(NETWORK_GET_PLAYER_INDEX(iVar0));
			iVar2 = GET_PLAYER_PED(iVar1);
			if (func_46(iVar1, 1, 1))
			{
				if (GET_INTERIOR_FROM_ENTITY(iVar2) == iLocal_139)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_445(struct<21> Param0)
{
	int iVar0;
	
	func_451(func_452(Param0), Param0);
	RESERVE_NETWORK_MISSION_OBJECTS(2);
	IS_SPHERE_VISIBLE_TO_PLAYER(8);
	func_449(0, -1, 0);
	NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_103, 73);
	NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_104, 321);
	SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (!func_448())
	{
		return 0;
	}
	if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_51(func_52(0));
		func_51(func_52(1));
		func_51(func_52(2));
		REQUEST_ANIM_DICT("mp_am_hold_up");
		REQUEST_ANIM_DICT("mp_missheist_countrybank@cower");
		Local_103.f_44 = 8;
		if (func_447())
		{
			SET_BIT(&(Local_103.f_24), 11);
		}
		else if (func_446())
		{
			SET_BIT(&(Local_103.f_24), 12);
		}
		Local_103.f_28 = GET_RANDOM_INT_IN_RANGE(1, 11);
		Local_103.f_31 = GET_RANDOM_INT_IN_RANGE(1, 5);
		if ((func_13() && !func_388(PLAYER_ID(), 1)) && !func_388(PLAYER_ID(), 2))
		{
			Local_103.f_43 = 2;
			SET_BIT(&(Local_103.f_25), 0);
		}
		else
		{
			Local_103.f_43 = 1;
		}
		Local_103.f_71 = GET_RANDOM_FLOAT_IN_RANGE(18f, 28f);
	}
	if (func_97(PLAYER_ID()) != 155)
	{
		_0x0BF3B3BD47D79C08(func_52(1), 0);
	}
	iVar0 = func_128(1190, -1, 0);
	if (IS_BIT_SET(iVar0, 20) && IS_BIT_SET(iVar0, 21))
	{
		SET_BIT(&(Local_105.f_53), 1);
	}
	Local_104[PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 0;
	return 1;
}

int func_446()
{
	if (Local_105.f_50 >= 0 && Local_105.f_50 <= 9)
	{
		if (func_400(5, 6) || func_400(17, 18))
		{
			return 1;
		}
		return 0;
	}
	if (Local_105.f_50 >= 10 && Local_105.f_50 <= 14)
	{
		if (func_400(9, 10) || func_400(21, 22))
		{
			return 1;
		}
		return 0;
	}
	if (Local_105.f_50 >= 15 && Local_105.f_50 <= 19)
	{
		if (func_400(7, 8) || func_400(19, 20))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_447()
{
	if (Local_105.f_50 >= 0 && Local_105.f_50 <= 9)
	{
		if (func_400(6, 7) || func_400(18, 19))
		{
			return 1;
		}
		return 0;
	}
	if (Local_105.f_50 >= 10 && Local_105.f_50 <= 14)
	{
		if (func_400(10, 11) || func_400(22, 23))
		{
			return 1;
		}
		return 0;
	}
	if (Local_105.f_50 >= 15 && Local_105.f_50 <= 19)
	{
		if (func_400(8, 9) || func_400(20, 21))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_448()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (_0x5D10B3795F3FC886())
		{
			return 1;
		}
		if (func_422())
		{
			return 0;
		}
		if (func_420(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		wait(0);
	}
	return 0;
}

int func_449(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_441();
			}
			else
			{
				return 0;
			}
		}
		if (!func_450())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_441();
					}
					else
					{
						return 0;
					}
				}
				if (func_422())
				{
					if (!bParam2)
					{
						func_441();
					}
					else
					{
						return 0;
					}
				}
				if (func_420(157))
				{
					if (!bParam2)
					{
						func_441();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_441();
				}
				else
				{
					return 0;
				}
			}
		}
		wait(0);
		iVar0 = NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_441();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_441();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_450()
{
	return Global_1312850;
}

void func_451(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_441();
	}
	NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_16);
}

int func_452(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 32;
		
		case 114:
			return 8;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 8;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 126:
			return 32;
		
		case 127:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 133:
			return 32;
		
		case 131:
			return 32;
		
		case 132:
			return 32;
		
		case 136:
			return 32;
		
		case 137:
			return 32;
		
		case 134:
			return 32;
		
		case 135:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 32;
		
		case 144:
			return 2;
		
		case 149:
			return 1;
		
		case 145:
			return 2;
		
		case 146:
			return 4;
		
		case 147:
			return 2;
		
		case 148:
			return 2;
		
		case 130:
			return 1;
		
		case 150:
			return 2;
		
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
			return 0;
		
		case 170:
			return 1;
		
		case 157:
			return 4;
		
		case 160:
			return 4;
		
		case 161:
			return 1;
		
		case 162:
			return 1;
		
		case 168:
			return 1;
		
		case 164:
			return 2;
		
		case 169:
			return 1;
		
		case 165:
			return 1;
		
		case 163:
			return 2;
		
		case 166:
			return 8;
		
		case 167:
			return 8;
		
		case 158:
			return 16;
		
		case 159:
			return 32;
		
		default:
	}
	return 0;
}

__________________________
Native Named by Reliency
1577160154
__________________________
