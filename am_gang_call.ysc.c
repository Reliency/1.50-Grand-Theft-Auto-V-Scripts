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
	var uLocal_60 = 0;
	var uLocal_61 = 10;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
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
	struct<55> Local_95 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 } ;
	var uLocal_96 = 0;
	struct<5> Local_97[32];
	int iLocal_98 = 0;
	int iLocal_99[3] = { 0, 0, 0 };
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	vector3 vLocal_105 = { 0f, 0f, 0f };
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 16;
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
	var uLocal_284[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	struct<21> Local_289 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	iLocal_101 = -1;
	iLocal_104 = -1;
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_554(ScriptParam_289);
	}
	while (true)
	{
		func_553();
		if (func_542())
		{
			func_539();
		}
		iLocal_106 = 0xBA7F0B77D80A4EB7();
		func_530();
		func_527();
		func_522();
		func_521();
		switch (func_520(NETWORK_PLAYER_ID_TO_INT()))
		{
			case 0:
				if (func_519() == 1)
				{
					Local_97[NETWORK_PLAYER_ID_TO_INT() /*5*/] = 1;
				}
				else if (func_519() == 4)
				{
					Local_97[NETWORK_PLAYER_ID_TO_INT() /*5*/] = 3;
				}
				break;
			
			case 1:
				if (func_519() == 1)
				{
					func_513();
				}
				else if (func_519() == 0)
				{
					func_507();
					Local_97[NETWORK_PLAYER_ID_TO_INT() /*5*/] = 0;
				}
				else if (func_519() == 4)
				{
					Local_97[NETWORK_PLAYER_ID_TO_INT() /*5*/] = 3;
				}
				break;
			
			case 3:
				func_482();
				func_480(&(Local_95.f_54));
				if (func_479(&(Local_95.f_54)))
				{
					iVar0 = 0;
					while (iVar0 < func_478(iLocal_101))
					{
						func_482();
						iVar0++;
					}
					Local_97[NETWORK_PLAYER_ID_TO_INT() /*5*/] = 4;
				}
				break;
			
			case 2:
				Local_97[NETWORK_PLAYER_ID_TO_INT() /*5*/] = 4;
			
			case 4:
				func_258();
				break;
		}
		if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_256();
			func_255();
			func_254();
			switch (func_519())
			{
				case 0:
					func_253();
					if (func_249())
					{
						if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(iLocal_103), 0))
						{
							func_247(GET_PLAYER_PED(iLocal_103));
						}
						else
						{
							Local_95.f_36 = { vLocal_105 };
						}
						CLEAR_BIT(&(Local_95.f_2), 6);
						Local_95 = 1;
					}
					break;
				
				case 1:
					if (func_64())
					{
						func_63();
						func_62();
					}
					func_44();
					break;
				
				case 4:
					break;
			}
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;
	
	if (func_519() < 4)
	{
		if (func_22())
		{
			iLocal_107 = 0;
			iVar0 = 0;
			while (iVar0 <= (func_478(iLocal_101) - 1))
			{
				func_2();
				iVar0++;
			}
			Local_95 = 4;
		}
	}
}

void func_2()
{
	var uVar0;
	struct<14> Var1;
	
	if (IS_BIT_SET(Local_95.f_10[iLocal_107 /*7*/].f_2, 1) || IS_BIT_SET(Local_95.f_10[iLocal_107 /*7*/].f_2, 6))
	{
		if (NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_10[iLocal_107 /*7*/]))
		{
			if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST(Local_95.f_10[iLocal_107 /*7*/])))
			{
				if (IS_ENTITY_DEAD(IS_ENTITY_DEAD(Local_95.f_10[iLocal_107 /*7*/]), 0))
				{
					if (!IS_BIT_SET(Local_95.f_10[iLocal_107 /*7*/].f_2, 6))
					{
						if (iLocal_101 == 0)
						{
							Local_95.f_48++;
							if (!IS_BIT_SET(Local_95.f_2, 12))
							{
								if (NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_95.f_10[iLocal_107 /*7*/], &uVar0) == iLocal_103)
								{
									SET_BIT(&(Local_95.f_2), 12);
								}
							}
							if ((Local_95.f_42 == iLocal_107 && !IS_BIT_SET(Local_95.f_2, 5)) || Local_95.f_48 == func_478(iLocal_101))
							{
								Var1.f_2 = -1952840822;
								Var1.f_10 = iLocal_103;
								Var1.f_11 = iLocal_102;
								if (func_478(iLocal_101) > 1)
								{
									Var1.f_12 = INT_TO_PLAYERINDEX(1);
								}
								else
								{
									Var1.f_12 = INT_TO_PLAYERINDEX(0);
								}
								Var1.f_3 = Local_95.f_43;
								func_20(Var1, func_21(1));
								if (Local_95.f_42 == iLocal_107)
								{
									SET_BIT(&(Local_95.f_2), 5);
								}
							}
							else if (!IS_BIT_SET(Local_95.f_2, 5))
							{
								Var1.f_2 = -1155347302;
								Var1.f_11 = iLocal_102;
								func_20(Var1, func_21(1));
							}
						}
						SET_BIT(&(Local_95.f_10[iLocal_107 /*7*/].f_2), 6);
					}
				}
				else
				{
					if (!IS_BIT_SET(Local_95.f_10[iLocal_107 /*7*/].f_2, 5))
					{
						SET_BIT(&iLocal_98, 2);
					}
					SET_BIT(&iLocal_98, 1);
				}
			}
		}
	}
	else
	{
		SET_BIT(&iLocal_98, 1);
		SET_BIT(&iLocal_98, 2);
	}
	func_3(iLocal_107);
	iLocal_107++;
	if (iLocal_107 >= func_478(iLocal_101))
	{
		iLocal_107 = 0;
		if (IS_BIT_SET(Local_95.f_1, 0))
		{
			if (!IS_BIT_SET(iLocal_98, 1))
			{
				if (!IS_BIT_SET(Local_95.f_1, 1))
				{
					SET_BIT(&(Local_95.f_1), 1);
				}
			}
			if (!IS_BIT_SET(iLocal_98, 2))
			{
				if (!IS_BIT_SET(Local_95.f_1, 9))
				{
					SET_BIT(&(Local_95.f_1), 9);
				}
			}
		}
		CLEAR_BIT(&iLocal_98, 1);
		CLEAR_BIT(&iLocal_98, 2);
	}
}

void func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_10[iParam0 /*7*/]))
		{
			iVar0 = NET_TO_PED(Local_95.f_10[iParam0 /*7*/]);
			if (!IS_ENTITY_DEAD(iVar0, 0))
			{
				if (!IS_BIT_SET(Local_95.f_10[iParam0 /*7*/].f_2, 9))
				{
					bVar2 = false;
					switch (Local_95.f_10[iParam0 /*7*/].f_1)
					{
						case 0:
							if (func_19(iVar0, 3))
							{
								bVar2 = true;
							}
							break;
					}
					if (bVar2)
					{
						SET_BIT(&(Local_95.f_10[iParam0 /*7*/].f_2), 9);
					}
				}
				switch (Local_95.f_10[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					
					case 1:
						if (Local_95.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!IS_BIT_SET(Local_95.f_10[iParam0 /*7*/].f_2, 7))
							{
								if ((((GET_NAVMESH_ROUTE_RESULT(iVar0) == 2 || (Global_2424073[iLocal_103 /*421*/].f_236 != -1 && func_18(Global_2424073[iLocal_103 /*421*/].f_236) == 4)) || Global_1590446[iLocal_103 /*871*/].f_743) || func_16(iLocal_103, 0)) || func_9(iLocal_103))
								{
									Local_95.f_10[iParam0 /*7*/].f_3 = iLocal_106;
									SET_BIT(&(Local_95.f_10[iParam0 /*7*/].f_2), 7);
								}
							}
							else if ((((GET_NAVMESH_ROUTE_RESULT(iVar0) != 2 && Global_2424073[iLocal_103 /*421*/].f_236 == -1) && !Global_1590446[iLocal_103 /*871*/].f_743) && !func_16(iLocal_103, 0)) && !func_9(iLocal_103))
							{
								CLEAR_BIT(&(Local_95.f_10[iParam0 /*7*/].f_2), 7);
							}
							else if (IS_TIME_EQUAL_TO(iLocal_106, Local_95.f_10[iParam0 /*7*/].f_3) > 10000 || IS_TIME_EQUAL_TO(iVar0) != 2)
							{
								if (!IS_BIT_SET(Local_95.f_2, 10))
								{
									SET_BIT(&(Local_95.f_2), 10);
									Local_95.f_39 = { func_8(iLocal_103) };
									iVar1 = 0;
									iVar1 = 0;
									while (iVar1 < func_478(iLocal_101))
									{
										func_7(iVar1, 3);
										iVar1++;
									}
								}
							}
							if (IS_BIT_SET(Local_95.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (!IS_BIT_SET(Local_95.f_10[iParam0 /*7*/].f_2, 3))
								{
									if (GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar0) == 3f && !GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar0, 118, 1))
									{
										SET_BIT(&(Local_95.f_10[iParam0 /*7*/].f_2), 3);
									}
								}
							}
						}
						if (IS_BIT_SET(Local_95.f_2, 1))
						{
							SET_BIT(&(Local_95.f_10[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(iLocal_103, 1, 1))
						{
							if (!IS_BIT_SET(Local_95.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (func_5(GET_ENTITY_COORDS(iVar0, true), GET_ENTITY_COORDS(GET_ENTITY_COORDS(iLocal_103), true), 25f) || !func_5(GET_ENTITY_COORDS(iVar0, true), GET_ENTITY_COORDS(GET_ENTITY_COORDS(iLocal_103), true), 625f))
								{
									SET_BIT(&(Local_95.f_10[iParam0 /*7*/].f_2), 2);
								}
							}
							if (func_4(GET_ENTITY_COORDS(iVar0, true), GET_ENTITY_COORDS(GET_ENTITY_COORDS(iLocal_103), true)) || (GET_ENTITY_COORDS(iVar0) && GET_ENTITY_COORDS(iVar0) == GET_ENTITY_COORDS(iLocal_103)))
							{
								func_7(iParam0, 2);
							}
						}
						break;
					
					case 2:
						if (IS_BIT_SET(Local_95.f_2, 1))
						{
							SET_BIT(&(Local_95.f_10[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(iLocal_103, 1, 1))
						{
							if (!func_4(GET_ENTITY_COORDS(iVar0, true), GET_ENTITY_COORDS(GET_ENTITY_COORDS(iLocal_103), true)) && !(GET_ENTITY_COORDS(iVar0) && GET_ENTITY_COORDS(iVar0) == GET_ENTITY_COORDS(iLocal_103)))
							{
								func_7(iParam0, 1);
							}
						}
						break;
					
					case 3:
						if (Local_95.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!IS_BIT_SET(Local_95.f_10[iParam0 /*7*/].f_2, 4))
							{
								if (GET_PED_CONFIG_FLAG(iVar0, 118, 1))
								{
									SET_BIT(&(Local_95.f_10[iParam0 /*7*/].f_2), 4);
								}
							}
						}
						break;
					
					case 4:
						break;
					}
				}
			}
	}
}

int func_4(vector3 vParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (ABSF((vParam1.z - vParam0.z)) < 2f)
	{
		vVar0.x = vParam0.x;
		vVar0.y = vParam0.y;
		vVar1.x = vParam1.x;
		vVar1.y = vParam1.y;
		if (func_5(vVar0, vVar1, 2f))
		{
			return 1;
		}
	}
	return 0;
}

int func_5(vector3 vParam0, vector3 vParam1, float fParam2)
{
	if (vdist2(vParam0, vParam1) < fParam2)
	{
		return 1;
	}
	return 0;
}

int func_6(int iParam0, bool bParam1, bool bParam2)
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

void func_7(int iParam0, int iParam1)
{
	Local_95.f_10[iParam0 /*7*/].f_5 = iParam1;
}

Vector3 func_8(int iParam0)
{
	return GET_ENTITY_COORDS(GET_ENTITY_COORDS(iParam0), false);
}

int func_9(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (func_14(iParam0, 1))
		{
			iVar0 = GET_PLAYER_PED(iParam0);
			iVar1 = func_11(iParam0);
			if (DOES_ENTITY_EXIST(iVar1))
			{
				if (IS_VEHICLE_DRIVEABLE(iVar1, 0))
				{
					if (IS_PED_IN_VEHICLE(iVar0, iVar1, 0))
					{
						return func_10(iVar1);
					}
				}
			}
		}
	}
	return 0;
}

int func_10(int iParam0)
{
	int iVar0;
	
	if (IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3) && DECOR_IS_REGISTERED_AS_TYPE(iParam0, "MPBitset"))
		{
			iVar0 = DECOR_GET_INT(iParam0, "MPBitset");
			if (IS_BIT_SET(iVar0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_11(int iParam0)
{
	if (func_14(iParam0, 1))
	{
		return Global_2531497.f_4898.f_220[func_12(iParam0)];
	}
	return 0;
}

int func_12(int iParam0)
{
	if (iParam0 != func_13())
	{
		return Global_1628955[iParam0 /*614*/].f_11;
	}
	return func_13();
}

int func_13()
{
	return -1;
}

bool func_14(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_15(iParam0))
		{
			return 0;
		}
	}
	return Global_1628955[iParam0 /*614*/].f_11 != func_13();
}

int func_15(int iParam0)
{
	if (iParam0 != func_13())
	{
		if (Global_1628955[iParam0 /*614*/].f_11 != func_13())
		{
			return Global_1628955[iParam0 /*614*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_16(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_6(iParam0, 1, 1))
	{
		iVar0 = GET_PLAYER_PED(iParam0);
		if (IS_PED_IN_ANY_VEHICLE(iVar0, iParam1))
		{
			if (func_17(GET_VEHICLE_PED_IS_IN(iVar0, iParam1), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_17(int iParam0, bool bParam1)
{
	if (Global_76577)
	{
		if (DOES_ENTITY_EXIST(iParam0) && (!bParam1 || DOES_ENTITY_EXIST(iParam0, 0)))
		{
			if (DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_18(int iParam0)
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

int func_19(int iParam0, int iParam1)
{
	if (DECOR_IS_REGISTERED_AS_TYPE("AttributeDamage", 3))
	{
		if (DECOR_EXIST_ON(iParam0, "AttributeDamage"))
		{
			if (IS_BIT_SET(IS_BIT_SET(iParam0, "AttributeDamage"), iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_20(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 564131320;
	Param0.f_1 = PLAYER_ID();
	if (!iParam13 == 0)
	{
		TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam13);
	}
}

int func_21(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(iVar1)))
		{
			iVar2 = NETWORK_GET_PLAYER_INDEX(NETWORK_GET_PLAYER_INDEX(iVar1));
			if (func_6(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER_ID() || iParam0)
				{
					SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_22()
{
	if (IS_BIT_SET(Local_95.f_1, 0))
	{
		if (iLocal_101 == 1)
		{
			if (IS_BIT_SET(Local_95.f_1, 4))
			{
				SET_BIT(&(Local_95.f_3), 11);
				return 1;
			}
		}
		else if (IS_BIT_SET(Local_95.f_1, 1))
		{
			SET_BIT(&(Local_95.f_3), 0);
			return 1;
		}
	}
	else if (IS_BIT_SET(Local_95.f_1, 2))
	{
		SET_BIT(&(Local_95.f_3), 1);
		SET_BIT(&Global_1654081, iLocal_101);
		return 1;
	}
	if (IS_BIT_SET(Local_95.f_3, 12))
	{
		return 1;
	}
	if (iLocal_101 == 0)
	{
		if (IS_BIT_SET(Local_95.f_2, 2))
		{
			SET_BIT(&(Local_95.f_3), 2);
			return 1;
		}
		if (IS_BIT_SET(Local_95.f_2, 8))
		{
			SET_BIT(&(Local_95.f_3), 8);
			return 1;
		}
		if (IS_BIT_SET(Local_95.f_2, 5))
		{
			SET_BIT(&(Local_95.f_3), 3);
			return 1;
		}
		if (IS_BIT_SET(Local_95.f_2, 9))
		{
			SET_BIT(&(Local_95.f_3), 9);
			return 1;
		}
		if (IS_BIT_SET(Local_95.f_1, 15))
		{
			SET_BIT(&(Local_95.f_3), 10);
			return 1;
		}
	}
	if (!func_6(iLocal_103, 0, 1))
	{
		if (iLocal_101 != 0 || !IS_BIT_SET(Local_95.f_2, 1))
		{
			SET_BIT(&(Local_95.f_3), 4);
			return 1;
		}
	}
	else
	{
		if (func_42(iLocal_103, 129))
		{
			SET_BIT(&(Local_95.f_2), 13);
			SET_BIT(&(Local_95.f_3), 8);
			return 1;
		}
		if (func_42(iLocal_103, 131) || IS_BIT_SET(Global_1628955[iLocal_103 /*614*/].f_1, 11))
		{
			SET_BIT(&(Local_95.f_2), 13);
			SET_BIT(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_42(iLocal_103, 136) || (func_41(PLAYER_ID(), 24) && func_40(iLocal_103)))
		{
			SET_BIT(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_42(iLocal_103, 146))
		{
			SET_BIT(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_39(PLAYER_ID()) && ((func_38(PLAYER_ID()) == 148 || func_38(PLAYER_ID()) == 142) || func_38(PLAYER_ID()) == 164))
		{
			SET_BIT(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_38(PLAYER_ID()) == 153)
		{
			SET_BIT(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_36(PLAYER_ID()) && func_38(PLAYER_ID()) == 170)
		{
			SET_BIT(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_38(PLAYER_ID()) == 167)
		{
			SET_BIT(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_38(PLAYER_ID()) == 168)
		{
			SET_BIT(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_36(PLAYER_ID()) && func_38(PLAYER_ID()) == 238)
		{
			SET_BIT(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_36(PLAYER_ID()) && func_38(PLAYER_ID()) == 249)
		{
			SET_BIT(&(Local_95.f_2), 8);
			return 1;
		}
		switch (func_33(PLAYER_ID()))
		{
			case 6:
			case 7:
				if (func_32())
				{
					SET_BIT(&(Local_95.f_2), 8);
					return 1;
				}
				break;
		}
		if (func_31(iLocal_103))
		{
			SET_BIT(&(Local_95.f_2), 8);
			return 1;
		}
		if (IS_ENTITY_DEAD(IS_ENTITY_DEAD(iLocal_103), 0))
		{
			if (iLocal_101 == 1)
			{
				if (IS_BIT_SET(Local_95.f_1, 0))
				{
					SET_BIT(&(Local_95.f_3), 6);
					return 1;
				}
			}
		}
		else
		{
			if (iLocal_101 == 1)
			{
				if (func_42(iLocal_103, 146))
				{
					SET_BIT(&(Local_95.f_3), 7);
					return 1;
				}
				if (!IS_BIT_SET(Local_95.f_1, 16))
				{
					if (IS_TIME_EQUAL_TO(iLocal_106, Local_95.f_9) > func_30())
					{
						SET_BIT(&(Local_95.f_3), 7);
						return 1;
					}
				}
				if (func_27())
				{
					SET_BIT(&(Local_95.f_3), 7);
					return 1;
				}
				if (func_23(iLocal_103, func_12(iLocal_102), 1))
				{
					SET_BIT(&(Local_95.f_3), 7);
					return 1;
				}
			}
			if (iLocal_104 != GET_HASH_KEY(GET_HASH_KEY(iLocal_103)))
			{
				SET_BIT(&(Local_95.f_3), 5);
				return 1;
			}
		}
	}
	return 0;
}

bool func_23(int iParam0, int iParam1, bool bParam2)
{
	return func_24(iParam0, iParam1, bParam2, 1);
}

int func_24(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam1 != func_13() && iParam0 != func_13())
	{
		if (!bParam2)
		{
			if (func_26(iParam0, iParam1, iParam3))
			{
				return 0;
			}
		}
		if (Global_1628955[iParam0 /*614*/].f_11 != func_13())
		{
			if (iParam1 == Global_1628955[iParam0 /*614*/].f_11)
			{
				return func_25(iParam1, iParam3);
			}
		}
	}
	return 0;
}

int func_25(int iParam0, int iParam1)
{
	if (func_15(iParam0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_450 == iParam1;
	}
	return 0;
}

int func_26(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_13())
	{
		if (iParam0 != func_13())
		{
			if (Global_1628955[iParam0 /*614*/].f_11 != func_13())
			{
				if (Global_1628955[iParam0 /*614*/].f_11 == iParam0)
				{
					if (Global_1628955[iParam0 /*614*/].f_11.f_450 == iParam2)
					{
						return iParam1 == iParam0;
					}
				}
			}
		}
	}
	return 0;
}

int func_27()
{
	if (((func_29(iLocal_103, 1, 1) || func_41(iLocal_103, 0)) || func_41(iLocal_103, 7)) || func_28(iLocal_103))
	{
		return 1;
	}
	return 0;
}

bool func_28(int iParam0)
{
	return Global_1590446[iParam0 /*871*/].f_196 != 0;
}

int func_29(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_13())
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

int func_30()
{
	if (Local_95.f_52)
	{
		return 300000;
	}
	return 120000;
}

int func_31(int iParam0)
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

bool func_32()
{
	return Global_1573342;
}

int func_33(int iParam0)
{
	if (func_38(iParam0) == 243)
	{
		return func_34(iParam0);
	}
	return -1;
}

int func_34(int iParam0)
{
	if (func_35(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_181;
	}
	return -1;
}

int func_35(int iParam0, int iParam1)
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 || (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_36(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_37(iParam0, 9);
	}
	return 0;
}

bool func_37(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

int func_38(int iParam0)
{
	if (func_35(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_33;
	}
	return -1;
}

int func_39(int iParam0)
{
	if (func_15(iParam0))
	{
		if (func_36(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_40(int iParam0)
{
	return IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 4);
}

bool func_41(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_208, iParam1);
}

int func_42(int iParam0, int iParam1)
{
	if (Global_1628955[iParam0 /*614*/] == iParam1)
	{
		return func_43(iParam0);
	}
	return 0;
}

int func_43(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return IS_BIT_SET(Global_1628955[iVar0 /*614*/].f_1, 0);
	}
	return 0;
}

void func_44()
{
	func_55();
	if (iLocal_101 != 1)
	{
		func_2();
	}
	func_45();
}

void func_45()
{
	int iVar0;
	
	if (func_6(INT_TO_PLAYERINDEX(iLocal_108), 0, 1))
	{
		if (iLocal_101 == 1)
		{
			if (INT_TO_PLAYERINDEX(iLocal_108) == iLocal_103)
			{
				if (!IS_BIT_SET(Local_95.f_1, 16))
				{
					if (IS_BIT_SET(Local_97[iLocal_108 /*5*/].f_1, 3))
					{
						SET_BIT(&(Local_95.f_1), 16);
					}
				}
			}
		}
		else
		{
			if (!IS_BIT_SET(Local_95.f_1, 11))
			{
				if (func_51(INT_TO_PLAYERINDEX(iLocal_108)))
				{
					if (!IS_BIT_SET(Local_95.f_4, iLocal_108))
					{
						SET_BIT(&(Local_95.f_1), 11);
						SET_BIT(&(Local_95.f_4), iLocal_108);
					}
				}
				else if (IS_BIT_SET(Local_95.f_4, iLocal_108))
				{
					SET_BIT(&(Local_95.f_1), 11);
					CLEAR_BIT(&(Local_95.f_4), iLocal_108);
				}
			}
			else if (IS_BIT_SET(Local_97[iLocal_108 /*5*/].f_1, 2))
			{
				CLEAR_BIT(&(Local_95.f_1), 11);
			}
			if (iLocal_101 == 0)
			{
				if (IS_BIT_SET(Local_97[iLocal_108 /*5*/].f_1, 0))
				{
					if (Local_97[iLocal_108 /*5*/].f_2 != -1)
					{
						if (!IS_BIT_SET(Local_95.f_2, 1))
						{
							SET_BIT(&(Local_95.f_2), 1);
							Local_95.f_42 = Local_97[iLocal_108 /*5*/].f_2;
							Local_95.f_43 = Local_97[iLocal_108 /*5*/].f_3;
							if (!func_50())
							{
								func_49();
							}
						}
					}
					else if (!IS_BIT_SET(Local_95.f_2, 9))
					{
						if (!func_50())
						{
							func_48();
						}
						iVar0 = 0;
						while (iVar0 < func_478(iLocal_101))
						{
							func_7(iVar0, 3);
							iVar0++;
						}
						SET_BIT(&(Local_95.f_2), 9);
						SET_BIT(&(Local_95.f_2), 1);
					}
				}
				if (func_50())
				{
					if (!IS_BIT_SET(iLocal_98, 17))
					{
						if (IS_BIT_SET(Local_97[iLocal_108 /*5*/].f_1, 5))
						{
							func_49();
							SET_BIT(&iLocal_98, 17);
						}
						else if (IS_BIT_SET(Local_97[iLocal_108 /*5*/].f_1, 6))
						{
							func_48();
							SET_BIT(&iLocal_98, 17);
						}
					}
				}
				if (!IS_BIT_SET(Local_97[iLocal_108 /*5*/].f_1, 1))
				{
					if (!IS_BIT_SET(iLocal_98, 3))
					{
						SET_BIT(&iLocal_98, 3);
					}
				}
				else if (INT_TO_PLAYERINDEX(iLocal_108) == iLocal_103)
				{
					if (iLocal_101 == 0)
					{
						if (!IS_BIT_SET(Local_95.f_2, 1))
						{
							if (!IS_BIT_SET(Local_95.f_2, 6))
							{
								SET_BIT(&(Local_95.f_2), 6);
							}
						}
					}
				}
			}
		}
	}
	iLocal_108++;
	if (iLocal_108 >= 32)
	{
		iLocal_108 = 0;
		if (iLocal_101 == 0)
		{
			if (!IS_BIT_SET(iLocal_98, 3))
			{
				func_47();
			}
			else
			{
				func_46();
			}
			CLEAR_BIT(&iLocal_98, 3);
		}
	}
}

void func_46()
{
	if (IS_BIT_SET(Local_95.f_2, 3))
	{
		CLEAR_BIT(&(Local_95.f_2), 3);
	}
}

void func_47()
{
	if (!IS_BIT_SET(Local_95.f_2, 3))
	{
		Local_95.f_6 = iLocal_106;
		SET_BIT(&(Local_95.f_2), 3);
	}
}

void func_48()
{
	struct<14> Var0;
	
	Var0.f_2 = 642798833;
	Var0.f_10 = iLocal_103;
	Var0.f_11 = iLocal_102;
	func_20(Var0, func_21(1));
}

void func_49()
{
	struct<14> Var0;
	
	Var0.f_2 = 376206440;
	Var0.f_10 = iLocal_103;
	Var0.f_11 = iLocal_102;
	if (func_478(iLocal_101) > 1)
	{
		Var0.f_12 = INT_TO_PLAYERINDEX(1);
	}
	else
	{
		Var0.f_12 = INT_TO_PLAYERINDEX(0);
	}
	Var0.f_3 = Local_95.f_43;
	func_20(Var0, func_21(1));
}

int func_50()
{
	if (IS_PC_VERSION())
	{
		return 0x7D2708796355B20B();
	}
	return 0;
}

bool func_51(int iParam0)
{
	if (iParam0 == PLAYER_ID())
	{
		return func_54();
	}
	return IS_BIT_SET(Global_1373500.f_241.f_136[func_53(10) /*33*/][iParam0], func_52(10));
}

int func_52(int iParam0)
{
	return (iParam0 % 32);
}

int func_53(int iParam0)
{
	return (iParam0 / 32);
}

var func_54()
{
	return Global_1312417;
}

void func_55()
{
	int iVar0;
	
	if (iLocal_101 == 0)
	{
		if (IS_BIT_SET(Local_95.f_2, 3))
		{
			if (IS_TIME_EQUAL_TO(iLocal_106, Local_95.f_6) > 10000)
			{
				if (IS_BIT_SET(Local_95.f_2, 1))
				{
					SET_BIT(&(Local_95.f_2), 2);
				}
			}
		}
		if (IS_BIT_SET(Local_95.f_1, 8))
		{
			if (!IS_BIT_SET(Local_95.f_2, 1))
			{
				if (func_59())
				{
					SET_BIT(&(Local_95.f_2), 6);
					func_58();
				}
			}
		}
		if (!IS_BIT_SET(Local_95.f_1, 0))
		{
			if (func_6(iLocal_103, 1, 1))
			{
				iVar0 = GET_PLAYER_PED(iLocal_103);
				if (func_57(iVar0))
				{
					func_247(iVar0);
				}
			}
		}
		if (!IS_BIT_SET(Local_95.f_2, 1))
		{
			if (!func_6(iLocal_103, 1, 1) || func_28(iLocal_103))
			{
				SET_BIT(&(Local_95.f_1), 15);
			}
		}
	}
	if (IS_BIT_SET(Local_95.f_1, 0))
	{
		if (IS_BIT_SET(Local_95.f_1, 5))
		{
			if (!IS_BIT_SET(Local_95.f_1, 4))
			{
				if (IS_TIME_EQUAL_TO(iLocal_106, Local_95.f_5) > 600000)
				{
					SET_BIT(&(Local_95.f_1), 4);
				}
			}
		}
		if (!IS_BIT_SET(Local_95.f_3, 12))
		{
			if (func_56())
			{
				SET_BIT(&(Local_95.f_3), 12);
			}
		}
	}
}

int func_56()
{
	switch (Local_95.f_10[0 /*7*/].f_1)
	{
		case 0:
			if (Global_1590446[PLAYER_ID() /*871*/].f_733 == 0)
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_1590446[PLAYER_ID() /*871*/].f_733 == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_57(int iParam0)
{
	if (IS_PED_INJURED(iParam0))
	{
	}
	if (IS_BIT_SET(Local_95.f_1, 17))
	{
		if (!IS_ENTITY_IN_WATER(iParam0))
		{
			return 1;
		}
	}
	if (!func_5(Local_95.f_36, GET_ENTITY_COORDS(iParam0, true), 625f))
	{
		return 1;
	}
	return 0;
}

void func_58()
{
	func_507();
	Local_95 = 0;
}

int func_59()
{
	if ((((((((IS_BIT_SET(Local_95.f_2, 6) || IS_BIT_SET(iLocal_103)) || func_29(iLocal_103, 1, 1)) || func_61(iLocal_103)) || func_41(iLocal_103, 0)) || func_41(iLocal_103, 7)) || func_28(iLocal_103)) || Global_2424073[iLocal_103 /*421*/].f_238) || func_60(IS_BIT_SET(iLocal_103), joaat("titan")))
	{
		return 1;
	}
	if (iLocal_103 != -1)
	{
		if (IS_BIT_SET(Local_97[iLocal_103 /*5*/].f_1, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_60(int iParam0, int iParam1)
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(iParam0))
	{
		if (!IS_PED_INJURED(iParam0))
		{
			if (IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
			{
				iVar0 = GET_VEHICLE_PED_IS_IN(iParam0, 0);
				if (DOES_ENTITY_EXIST(iVar0))
				{
					if (GET_ENTITY_MODEL(iVar0) == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_61(int iParam0)
{
	if (IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_24, 14))
	{
		return 1;
	}
	if (IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_24, 11))
	{
		return 1;
	}
	return 0;
}

void func_62()
{
	if (!IS_BIT_SET(Local_95.f_1, 5))
	{
		Local_95.f_5 = iLocal_106;
		SET_BIT(&(Local_95.f_1), 5);
	}
}

void func_63()
{
	if (IS_BIT_SET(Local_95.f_1, 5))
	{
		CLEAR_BIT(&(Local_95.f_1), 5);
	}
}

int func_64()
{
	bool bVar0;
	
	if (IS_BIT_SET(Local_95.f_1, 0))
	{
		return 0;
	}
	else
	{
		bVar0 = false;
		if (func_249())
		{
			if (iLocal_101 == 1)
			{
				bVar0 = true;
			}
			else if (func_244())
			{
				if (func_241())
				{
					if (func_240())
					{
						bVar0 = true;
					}
					else if (func_238(func_239(iLocal_101)))
					{
						if (func_70())
						{
							bVar0 = true;
						}
					}
				}
			}
		}
		if (bVar0)
		{
			func_62();
			if (func_65())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_65()
{
	int iVar0;
	
	iVar0 = 0;
	if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (IS_BIT_SET(Local_95.f_1, 0))
		{
			return 1;
		}
		else
		{
			switch (iLocal_101)
			{
				case 0:
					iVar0 = 0;
					while (iVar0 < func_478(iLocal_101))
					{
						if ((!NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_10[iVar0 /*7*/]) && !NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_10[iVar0 /*7*/].f_2, 1)) && !NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_10[iVar0 /*7*/].f_2, 6))
						{
							func_66(iVar0, func_69(iLocal_101), Local_95.f_32, Local_95.f_35);
						}
						iVar0++;
					}
					break;
			}
			if (iLocal_101 != 1)
			{
				iVar0 = 0;
				while (iVar0 < func_478(iLocal_101))
				{
					if (!NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_10[iVar0 /*7*/]))
					{
						if (!IS_BIT_SET(Local_95.f_10[iVar0 /*7*/].f_2, 6))
						{
							return 0;
						}
					}
					iVar0++;
				}
			}
			SET_BIT(&iLocal_98, 1);
			SET_BIT(&iLocal_98, 2);
			SET_BIT(&iLocal_98, 3);
			SET_BIT(&iLocal_98, 4);
			SET_BIT(&(Local_95.f_1), 0);
			SET_BIT(&Global_1654082, iLocal_101);
			return 1;
		}
	}
	return 0;
}

void func_66(int iParam0, var uParam1, vector3 vParam2, float fParam3)
{
	if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_10[iParam0 /*7*/]))
		{
			if (_0x12B6281B6C6706C0(0) < _0x12B6281B6C6706C0(false, 0))
			{
				if (CAN_REGISTER_MISSION_OBJECTS(1))
				{
					if (func_238(func_239(iLocal_101)))
					{
						if (func_68(&(Local_95.f_10[iParam0 /*7*/]), 7, func_239(iLocal_101), vParam2, fParam3, 1, 1, 1))
						{
							Local_95.f_10[iParam0 /*7*/].f_1 = iLocal_101;
							Local_95.f_10[iParam0 /*7*/].f_4 = uParam1;
							func_67(iParam0);
						}
					}
				}
			}
		}
	}
}

void func_67(int iParam0)
{
	char cVar0[16];
	
	if (!IS_BIT_SET(Local_95.f_10[iParam0 /*7*/].f_2, 1))
	{
		if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(Local_95.f_10[iParam0 /*7*/]), 0))
		{
			if (Local_95.f_10[iParam0 /*7*/].f_4 == 0)
			{
				SET_PED_RELATIONSHIP_GROUP_HASH(SET_PED_RELATIONSHIP_GROUP_HASH(Local_95.f_10[iParam0 /*7*/]), Global_1574999);
				SET_PED_PATHS_WIDTH_PLANT(SET_PED_PATHS_WIDTH_PLANT(Local_95.f_10[iParam0 /*7*/]), 1);
				SET_PED_PATH_PREFER_TO_AVOID_WATER(SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_95.f_10[iParam0 /*7*/]), 0);
			}
			SET_ENTITY_PROOFS(SET_ENTITY_PROOFS(Local_95.f_10[iParam0 /*7*/]), false, false, false, false, false, false, 1, false);
			SET_PED_COMBAT_ABILITY(SET_PED_COMBAT_ABILITY(Local_95.f_10[iParam0 /*7*/]), 2);
			SET_PED_COMBAT_ATTRIBUTES(SET_PED_COMBAT_ATTRIBUTES(Local_95.f_10[iParam0 /*7*/]), 13, true);
			SET_PED_COMBAT_ATTRIBUTES(SET_PED_COMBAT_ATTRIBUTES(Local_95.f_10[iParam0 /*7*/]), 41, true);
			SET_PED_COMBAT_ATTRIBUTES(SET_PED_COMBAT_ATTRIBUTES(Local_95.f_10[iParam0 /*7*/]), 20, true);
			SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(Local_95.f_10[iParam0 /*7*/]), 132, true);
			SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(Local_95.f_10[iParam0 /*7*/]), 118, false);
			SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(Local_95.f_10[iParam0 /*7*/]), 311, true);
			SET_PED_TO_INFORM_RESPECTED_FRIENDS(SET_PED_TO_INFORM_RESPECTED_FRIENDS(Local_95.f_10[iParam0 /*7*/]), 300f, 10);
			SET_PED_KEEP_TASK(SET_PED_KEEP_TASK(Local_95.f_10[iParam0 /*7*/]), true);
			StringCopy(&cVar0, "gang ", 16);
			StringIntConCat(&cVar0, iParam0, 16);
			SET_PED_NAME_DEBUG(SET_PED_NAME_DEBUG(Local_95.f_10[iParam0 /*7*/]), &cVar0);
			switch (Local_95.f_10[iParam0 /*7*/].f_4)
			{
				case 0:
					func_7(iParam0, 1);
					SET_PED_COMBAT_ATTRIBUTES(SET_PED_COMBAT_ATTRIBUTES(Local_95.f_10[iParam0 /*7*/]), 0, false);
					SET_PED_COMBAT_ATTRIBUTES(SET_PED_COMBAT_ATTRIBUTES(Local_95.f_10[iParam0 /*7*/]), 2, false);
					SET_PED_COMBAT_MOVEMENT(SET_PED_COMBAT_MOVEMENT(Local_95.f_10[iParam0 /*7*/]), 2);
					SET_PED_COMBAT_RANGE(SET_PED_COMBAT_RANGE(Local_95.f_10[iParam0 /*7*/]), 0);
					SET_PED_USING_ACTION_MODE(SET_PED_USING_ACTION_MODE(Local_95.f_10[iParam0 /*7*/]), false, -1, 0);
					SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(Local_95.f_10[iParam0 /*7*/]), 32, true);
					SET_PED_FLEE_ATTRIBUTES(SET_PED_FLEE_ATTRIBUTES(Local_95.f_10[iParam0 /*7*/]), 4, false);
					SET_PED_FLEE_ATTRIBUTES(SET_PED_FLEE_ATTRIBUTES(Local_95.f_10[iParam0 /*7*/]), 1024, true);
					SET_PED_FLEE_ATTRIBUTES(SET_PED_FLEE_ATTRIBUTES(Local_95.f_10[iParam0 /*7*/]), 128, true);
					SET_PED_FLEE_ATTRIBUTES(SET_PED_FLEE_ATTRIBUTES(Local_95.f_10[iParam0 /*7*/]), 32, false);
					SET_PED_FLEE_ATTRIBUTES(SET_PED_FLEE_ATTRIBUTES(Local_95.f_10[iParam0 /*7*/]), 8, false);
					SET_PED_FLEE_ATTRIBUTES(SET_PED_FLEE_ATTRIBUTES(Local_95.f_10[iParam0 /*7*/]), 64, false);
					SET_PED_FLEE_ATTRIBUTES(SET_PED_FLEE_ATTRIBUTES(Local_95.f_10[iParam0 /*7*/]), 256, true);
					SET_PED_FLEE_ATTRIBUTES(SET_PED_FLEE_ATTRIBUTES(Local_95.f_10[iParam0 /*7*/]), 1, false);
					SET_PED_FLEE_ATTRIBUTES(SET_PED_FLEE_ATTRIBUTES(Local_95.f_10[iParam0 /*7*/]), 2, true);
					SET_PED_FLEE_ATTRIBUTES(SET_PED_FLEE_ATTRIBUTES(Local_95.f_10[iParam0 /*7*/]), 16, true);
					if (!IS_BIT_SET(Local_95.f_10[iParam0 /*7*/].f_2, 0))
					{
						SET_BIT(&(Local_95.f_10[iParam0 /*7*/].f_2), 2);
					}
					SET_PED_FLEE_ATTRIBUTES(SET_PED_FLEE_ATTRIBUTES(Local_95.f_10[iParam0 /*7*/]), 512, true);
					SET_PED_COMBAT_ATTRIBUTES(SET_PED_COMBAT_ATTRIBUTES(Local_95.f_10[iParam0 /*7*/]), 17, false);
					GIVE_WEAPON_TO_PED(GIVE_WEAPON_TO_PED(Local_95.f_10[iParam0 /*7*/]), joaat("weapon_knife"), 1, true, true);
					SET_PED_MONEY(SET_PED_MONEY(Local_95.f_10[iParam0 /*7*/]), 0);
					TASK_LOOK_AT_ENTITY(TASK_LOOK_AT_ENTITY(Local_95.f_10[iParam0 /*7*/]), TASK_LOOK_AT_ENTITY(iLocal_103), -1, 0, 2);
					_0xAAA553E7DD28A457(Local_95.f_10[iParam0 /*7*/], 1);
					break;
			}
			SET_ENTITY_HEALTH(SET_ENTITY_HEALTH(Local_95.f_10[iParam0 /*7*/]), round((Global_262145.f_154 * IntToFloat(SET_ENTITY_HEALTH(SET_ENTITY_HEALTH(Local_95.f_10[iParam0 /*7*/]))))), 0);
			if (!IS_BIT_SET(Local_95.f_1, 8))
			{
				SET_BIT(&(Local_95.f_1), 8);
			}
			SET_BIT(&(Local_95.f_10[iParam0 /*7*/].f_2), 1);
		}
	}
}

int func_68(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, bool bParam7)
{
	int iVar0;
	
	if (!CAN_REGISTER_MISSION_OBJECTS(1))
	{
		return 0;
	}
	iVar0 = CREATE_PED(iParam1, iParam2, vParam3, fParam4, iParam6, bParam5);
	*uParam0 = PED_TO_NET(iVar0);
	if (NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		_SET_ENTITY_SOMETHING(iVar0, bParam7);
		if (NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
		{
			if (bParam5)
			{
				SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_69(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
	}
	return 0;
}

int func_70()
{
	struct<6> Var0;
	
	if (IS_BIT_SET(Local_95.f_1, 3))
	{
		return 1;
	}
	else
	{
		switch (iLocal_101)
		{
			case 0:
				if (NETWORK_IS_PLAYER_ACTIVE(iLocal_103) && func_6(iLocal_103, 1, 1))
				{
					Var0.f_5 = 1115815936;
					Var0.f_13 = 2;
					Var0.f_20 = 2;
					Var0.f_32 = -1082130432;
					Var0.f_34 = 1;
					Var0 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(iLocal_103), true) };
					Var0.f_5 = 20f;
					if (func_71(Local_95.f_36, 40f, &(Local_95.f_32), &(Local_95.f_35), &Var0))
					{
						SET_BIT(&(Local_95.f_1), 3);
						return 1;
					}
				}
				else
				{
					_0x3C891A251567DFCE();
					_0xFEE4A5459472A9F8();
					if (Global_2405071.f_2462)
					{
						REMOVE_NAVMESH_REQUIRED_REGIONS();
						Global_2405071.f_2462 = 0;
					}
				}
				break;
			}
	}
	return 0;
}

int func_71(vector3 vParam0, float fParam1, var uParam2, var uParam3, var uParam4)
{
	struct<17> Var0;
	struct<18> Var1;
	vector3 vVar2;
	
	if (uParam4->f_5 > (fParam1 - 20f))
	{
		uParam4->f_5 = (fParam1 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var1.f_16 = 1;
	Var1.f_22 = 1;
	Var1.f_23 = 1;
	Var1.f_24 = 1;
	Var1 = { vParam0 };
	Var1.f_3 = uParam4->f_11;
	Var1.f_4 = fParam1;
	Var1.f_5 = 0;
	Var1.f_6 = 1;
	Var1.f_7 = 0;
	Var1.f_15 = 0;
	Var1.f_16 = 1;
	Var1.f_17 = 0;
	if (func_72(&Var1, uParam4, &Var0))
	{
		if ((uParam4->f_12 > 0f && uParam4->f_7) && uParam4->f_8)
		{
			vVar2 = { vParam0 - Var0[0 /*3*/] };
			if (vVar2.z > uParam4->f_12)
			{
				Var0[0 /*3*/] = { vParam0 };
				Var0.f_16[0] = uParam4->f_11;
			}
		}
		*uParam2 = { Var0[0 /*3*/] };
		*uParam3 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_72(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	int iVar9;
	vector3 vVar10;
	vector3 vVar11;
	var uVar12;
	bool bVar13;
	struct<56> Var14;
	bool bVar15;
	
	bVar13 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2405071.f_2456 == *uParam0 || !Global_2405071.f_2456.f_1 == uParam0->f_1) || !Global_2405071.f_2456.f_2 == uParam0->f_2) || !Global_2405071.f_2459 == uParam0->f_4)
			{
				bVar13 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2405071.f_2470 == uParam0->f_8 || !Global_2405071.f_2470.f_1 == uParam0->f_8.f_1) || !Global_2405071.f_2470.f_2 == uParam0->f_8.f_2) || !Global_2405071.f_2473 == uParam0->f_11) || !Global_2405071.f_2473.f_1 == uParam0->f_11.f_1) || !Global_2405071.f_2473.f_2 == uParam0->f_11.f_2)
			{
				bVar13 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2405071.f_2470 == uParam0->f_8 || !Global_2405071.f_2470.f_1 == uParam0->f_8.f_1) || !Global_2405071.f_2470.f_2 == uParam0->f_8.f_2) || !Global_2405071.f_2473 == uParam0->f_11) || !Global_2405071.f_2473.f_1 == uParam0->f_11.f_1) || !Global_2405071.f_2473.f_2 == uParam0->f_11.f_2) || !Global_2405071.f_2476 == uParam0->f_14)
			{
				bVar13 = true;
			}
			break;
	}
	if (bVar13)
	{
		if (Global_2405071.f_2454 == 1)
		{
			if (IS_THREAD_ACTIVE(Global_2405071.f_2463))
			{
				if (Global_2405071.f_2463 == GET_ID_OF_THIS_THREAD())
				{
					if (IS_TIME_EQUAL_TO(IS_TIME_EQUAL_TO(), Global_2405071.f_2460) < func_237(0))
					{
						return 0;
					}
				}
				else if (IS_TIME_EQUAL_TO(IS_TIME_EQUAL_TO(), Global_2405071.f_2460) < func_237(0))
				{
					return 0;
				}
			}
			_0x3C891A251567DFCE();
			_0xFEE4A5459472A9F8();
			func_236();
		}
		Global_2405071.f_2454 = 0;
	}
	else if (IS_TIME_EQUAL_TO(IS_TIME_EQUAL_TO(), Global_2405071.f_2460) > func_237(0))
	{
		Global_2405071.f_2461 = 0xBA7F0B77D80A4EB7();
		func_230();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar2 = (*uParam0 - uParam0->f_4);
			fVar3 = (uParam0->f_1 - uParam0->f_4);
			fVar4 = (*uParam0 + uParam0->f_4);
			fVar5 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = uParam0->f_8;
				fVar4 = uParam0->f_11;
			}
			else
			{
				fVar2 = uParam0->f_11;
				fVar4 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = uParam0->f_8.f_1;
				fVar5 = uParam0->f_11.f_1;
			}
			else
			{
				fVar3 = uParam0->f_11.f_1;
				fVar5 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar2 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar3 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	_0x07FB139B592FA687(fVar2, fVar3, fVar4, fVar5);
	if (uParam0->f_7 == 0)
	{
		vVar6 = { *uParam0 };
	}
	else
	{
		vVar6 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	vVar7 = { vVar6 + Vector(-0.1f, -0.1f, -0.1f) };
	vVar8 = { vVar6 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2405071.f_2454)
	{
		_0x3C891A251567DFCE();
		_0xFEE4A5459472A9F8();
		func_236();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (vmag(*uParam0) > 0f)
			{
				if (func_229(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!_0x3C67506996001F5E())
		{
			Global_2405071.f_2477 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2405071.f_2456 = { *uParam0 };
					Global_2405071.f_2459 = uParam0->f_4;
					break;
				
				case 1:
					Global_2405071.f_2470 = { uParam0->f_8 };
					Global_2405071.f_2473 = { uParam0->f_11 };
					Global_2405071.f_2476 = 0f;
					Global_2405071.f_2456 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2405071.f_2470 = { uParam0->f_8 };
					Global_2405071.f_2473 = { uParam0->f_11 };
					Global_2405071.f_2476 = uParam0->f_14;
					Global_2405071.f_2456 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_228(vVar6.x, vVar6.y);
			}
			Global_2405071.f_2455 = 1;
			Global_2405071.f_2454 = 1;
			Global_2405071.f_2461 = 0xBA7F0B77D80A4EB7();
			Global_2405071.f_2460 = 0xBA7F0B77D80A4EB7();
			Global_2405071.f_2463 = GET_ID_OF_THIS_THREAD();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2405071.f_2454)
	{
		if (Global_2405071.f_2455 == 1)
		{
			if (_0xF7B79A50B905A30D(fVar2, fVar3, fVar4, fVar5) || _0xF7B79A50B905A30D(_0xF7B79A50B905A30D(), Global_2405071.f_2461) > 5000)
			{
				Global_2405071.f_2461 = 0xBA7F0B77D80A4EB7();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { vVar6 };
					}
					Var14.f_6 = 1082130432;
					Var14.f_7 = 1176255488;
					Var14.f_8 = 1;
					Var14.f_10 = 1;
					Var14.f_13 = 1;
					Var14.f_15 = 1;
					Var14.f_16 = 1;
					Var14.f_31 = 1;
					Var14.f_34 = joaat("tailgater");
					Var14.f_38 = 2;
					Var14.f_45 = 2;
					Var14.f_49 = 1123024896;
					Var14.f_53 = 999;
					Var14.f_54 = 1176256410;
					Var14.f_55 = 1;
					Var14.f_56 = 1;
					Var14.f_57 = 1;
					Var14 = { *uParam1 };
					Var14.f_3 = uParam1->f_5;
					Var14.f_11 = uParam1->f_9;
					Var14.f_18 = 1;
					if (uParam1->f_32 > 0f)
					{
						Var14.f_6 = uParam1->f_32;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var14.f_19 = { *uParam0 };
							Var14.f_25 = uParam0->f_4;
							break;
						
						case 1:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = 0f;
							break;
						
						case 2:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = uParam0->f_14;
							break;
					}
					Var14.f_26 = uParam0->f_7;
					Var14.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var14.f_30 = 1;
						Var14.f_32 = 1;
					}
					iVar9 = 0;
					while (iVar9 < 2)
					{
						Var14.f_38[iVar9 /*3*/] = { uParam1->f_13[iVar9 /*3*/] };
						Var14.f_45[iVar9] = uParam1->f_20[iVar9];
						iVar9++;
					}
					Var14.f_51 = uParam1->f_30;
					Var14.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var14.f_10 = 0;
					}
					if (func_227(Global_4456448.f_190930))
					{
						Var14.f_9 = 1;
					}
					func_202(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var14);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_201(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2405071.f_2455 = 9;
				}
				else
				{
					Global_2405071.f_2455 = 2;
				}
			}
		}
		if (Global_2405071.f_2455 == 2)
		{
			if ((IS_NAVMESH_LOADED_IN_AREA(vVar7, vVar8) || IS_NAVMESH_LOADED_IN_AREA(IS_NAVMESH_LOADED_IN_AREA(), Global_2405071.f_2461) > 15000) || IS_NAVMESH_LOADED_IN_AREA(vVar7, vVar8) == 0)
			{
				Global_2405071.f_2461 = 0xBA7F0B77D80A4EB7();
				if (uParam0->f_5 && !func_198(PLAYER_ID(), 0))
				{
					Global_2405071.f_2455 = 3;
				}
				else
				{
					Global_2405071.f_2455 = 4;
				}
			}
			else if (IS_TIME_EQUAL_TO(IS_TIME_EQUAL_TO(), Global_2405071.f_2465) > 7000)
			{
				func_197(vVar6.x, vVar6.y);
			}
		}
		if (Global_2405071.f_2455 == 3)
		{
			if (func_196() || IS_TIME_EQUAL_TO(IS_TIME_EQUAL_TO(), Global_2405071.f_2461) > 10000)
			{
				Global_2405071.f_2461 = 0xBA7F0B77D80A4EB7();
				Global_2405071.f_2455 = 4;
			}
		}
		if (Global_2405071.f_2455 == 4)
		{
			if (_0x3C67506996001F5E())
			{
				_0x3C891A251567DFCE();
				_0xFEE4A5459472A9F8();
			}
			else
			{
				iVar0 = 0;
				func_230();
				if (uParam0->f_5)
				{
					if (vmag(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!GET_PLAYER_TEAM(GET_PLAYER_TEAM()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (_0xFB1F9381E80FA13F(_0xFB1F9381E80FA13F(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2405071.f_2461 = 0xBA7F0B77D80A4EB7();
								Global_2405071.f_2455 = 5;
							}
							break;
						
						case 1:
							func_195(uParam0->f_8, uParam0->f_11, &vVar10, &vVar11, &uVar12);
							if (_0x5A6FFA2433E2F14C(_0x5A6FFA2433E2F14C(), vVar10, vVar11, uVar12, *uParam1, iVar0))
							{
								Global_2405071.f_2461 = 0xBA7F0B77D80A4EB7();
								Global_2405071.f_2455 = 5;
							}
							break;
						
						case 2:
							if (_0x5A6FFA2433E2F14C(_0x5A6FFA2433E2F14C(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2405071.f_2461 = 0xBA7F0B77D80A4EB7();
								Global_2405071.f_2455 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2405071.f_2461 = 0xBA7F0B77D80A4EB7();
					Global_2405071.f_2455 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							_0x2DF9038C90AD5264(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_195(uParam0->f_8, uParam0->f_11, &vVar10, &vVar11, &uVar12);
							_0xB2AFF10216DEFA2F(vVar10, vVar11, uVar12, iVar0, 2f, 5000);
							break;
						
						case 2:
							_0xB2AFF10216DEFA2F(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2405071.f_2455 == 5)
		{
			if (func_124(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2405071.f_2481.f_5)
				{
					Global_2405071.f_2461 = 0xBA7F0B77D80A4EB7();
					Global_2405071.f_2455 = 6;
				}
				else
				{
					Global_2405071.f_2461 = 0xBA7F0B77D80A4EB7();
					if (!uParam0->f_5)
					{
						if (!vmag(*uParam1) == 0f)
						{
							vVar1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
						}
					}
					Global_2405071.f_2455 = 9;
				}
			}
			else if (IS_TIME_EQUAL_TO(IS_TIME_EQUAL_TO(), Global_2405071.f_2461) > 20000)
			{
				_0x3C891A251567DFCE();
				_0xFEE4A5459472A9F8();
				Global_2405071.f_2461 = 0xBA7F0B77D80A4EB7();
				Global_2405071.f_2455 = 8;
			}
		}
		if (Global_2405071.f_2455 == 6)
		{
			iVar0 = 0;
			Global_2405071.f_2481.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_123(uParam0->f_4))
				{
					if (IS_VALID_INTERIOR(IS_VALID_INTERIOR(vVar6)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_122(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (IS_VALID_INTERIOR(IS_VALID_INTERIOR(vVar6)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2405071.f_2461 = 0xBA7F0B77D80A4EB7();
			Global_2405071.f_2455 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					_0x2DF9038C90AD5264(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_195(uParam0->f_8, uParam0->f_11, &vVar10, &vVar11, &uVar12);
					_0xB2AFF10216DEFA2F(vVar10, vVar11, uVar12, iVar0, 2f, 5000);
					break;
				
				case 2:
					_0xB2AFF10216DEFA2F(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2405071.f_2455 == 7)
		{
			if (func_124(uParam2, uParam0, uParam1, 1))
			{
				if (vmag(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 3)
					{
						if (vmag(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!vmag(Global_2405071.f_2615[iVar9 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_201(Global_2405071.f_2615[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405071.f_2615[iVar9 /*3*/] };
										}
										break;
									
									case 1:
										if (func_120(Global_2405071.f_2615[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405071.f_2615[iVar9 /*3*/] };
										}
										break;
									
									case 2:
										if (IS_POINT_IN_ANGLED_AREA(Global_2405071.f_2615[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, true))
										{
											*(uParam2[0 /*3*/]) = { Global_2405071.f_2615[iVar9 /*3*/] };
										}
										break;
									}
								}
						}
						iVar9++;
					}
					if (vmag(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								vVar1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								vVar1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_75(&vVar1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { vVar1 };
					}
				}
				Global_2405071.f_2461 = 0xBA7F0B77D80A4EB7();
				if (!vmag(*uParam1) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 5)
					{
						vVar1 = { *uParam1 - *(uParam2[iVar9 /*3*/]) };
						uParam2->f_16[iVar9] = GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
						iVar9++;
					}
				}
				Global_2405071.f_2455 = 9;
			}
			else if (IS_TIME_EQUAL_TO(IS_TIME_EQUAL_TO(), Global_2405071.f_2461) > 20000)
			{
				Global_2405071.f_2461 = 0xBA7F0B77D80A4EB7();
				Global_2405071.f_2455 = 8;
			}
		}
		if (Global_2405071.f_2455 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_74(Global_2405071.f_484))
				{
				}
			}
			else if (Global_2405071.f_2481.f_2)
			{
				func_73(uParam2, &(Global_2405071.f_2481.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar15 = false;
				}
				else
				{
					bVar15 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2405071.f_2456 };
				func_75(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
			}
			Global_2405071.f_2461 = 0xBA7F0B77D80A4EB7();
			Global_2405071.f_2455 = 9;
		}
		if (Global_2405071.f_2455 == 9)
		{
			Global_2405071.f_2454 = 0;
			_0x3C891A251567DFCE();
			_0xFEE4A5459472A9F8();
			func_236();
			return 1;
		}
		Global_2405071.f_2460 = 0xBA7F0B77D80A4EB7();
	}
	return 0;
}

void func_73(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*10*/])->f_4 };
		uParam0->f_16[iVar0] = (uParam1[iVar0 /*10*/])->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0 /*10*/];
		iVar0++;
	}
}

int func_74(int iParam0)
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_75(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)
{
	vector3 vVar0;
	var uVar1;
	struct<56> Var2;
	var uVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	float fVar10;
	
	Var2.f_6 = 1082130432;
	Var2.f_7 = 1176255488;
	Var2.f_8 = 1;
	Var2.f_10 = 1;
	Var2.f_13 = 1;
	Var2.f_15 = 1;
	Var2.f_16 = 1;
	Var2.f_31 = 1;
	Var2.f_34 = joaat("tailgater");
	Var2.f_38 = 2;
	Var2.f_45 = 2;
	Var2.f_49 = 1123024896;
	Var2.f_53 = 999;
	Var2.f_54 = 1176256410;
	Var2.f_55 = 1;
	Var2.f_56 = 1;
	Var2.f_57 = 1;
	if (bParam1)
	{
		iVar6 = 0;
	}
	else
	{
		iVar6 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar6 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						vVar7 = { *uParam5 };
						if (func_123(uParam5->f_4) || !IS_VALID_INTERIOR(IS_VALID_INTERIOR(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 1:
						vVar7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_122(uParam5->f_8, uParam5->f_11, 0f) || !IS_VALID_INTERIOR(IS_VALID_INTERIOR(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 2:
						vVar7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_122(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !IS_VALID_INTERIOR(IS_VALID_INTERIOR(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar6 += 4;
		}
	}
	if (func_89(*uParam0, &vVar0, iVar6, iParam3, 1))
	{
	}
	else
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		vVar0 = { *uParam0 };
		Var2 = { *uParam6 };
		Var2.f_8 = 1;
		Var2.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var2.f_10 = 0;
		}
		else
		{
			Var2.f_10 = 1;
		}
		Var2.f_13 = uParam5->f_15;
		Var2.f_15 = iParam3;
		if (uParam6->f_32 > 0f)
		{
			Var2.f_6 = uParam6->f_32;
		}
		if (bParam4)
		{
			Var2.f_18 = 1;
			Var2.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var2.f_19 = { *uParam5 };
					Var2.f_25 = uParam5->f_4;
					break;
				
				case 1:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = 0f;
					break;
				
				case 2:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar4 = 0;
		while (iVar4 < 2)
		{
			Var2.f_38[iVar4 /*3*/] = { uParam6->f_13[iVar4 /*3*/] };
			Var2.f_45[iVar4] = uParam6->f_20[iVar4];
			iVar4++;
		}
		Var2.f_51 = uParam6->f_30;
		Var2.f_55 = uParam5->f_16;
		if (func_87(PLAYER_ID(), 0))
		{
			Var2.f_9 = 1;
		}
		func_202(&vVar0, &uVar1, &Var2);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				vVar8 = { *uParam5 };
				fVar10 = uParam5->f_4;
				break;
			
			case 1:
				vVar8 = { uParam5->f_8 };
				vVar9 = { uParam5->f_11 };
				break;
			
			case 2:
				vVar8 = { uParam5->f_8 };
				vVar9 = { uParam5->f_11 };
				fVar10 = uParam5->f_14;
				break;
		}
		if (!func_86(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
		{
			if (func_89(*uParam0, &vVar0, iVar6, iParam3, 0))
			{
				if (!func_86(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						vVar0 = { vVar8 + vVar9 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						vVar0 = { vVar8 };
					}
					if (GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, 0, 0))
					{
						vVar0.z = uVar3;
					}
				}
			}
			else if (func_76(uParam0, 1, 1, 1, 1))
			{
				func_75(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					vVar0 = { vVar8 + vVar9 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					vVar0 = { vVar8 };
				}
				if (GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, 0, 0))
				{
					vVar0.z = uVar3;
				}
			}
		}
	}
	*uParam0 = { vVar0 };
	Global_2405071.f_659 = 1;
}

int func_76(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409979[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409979[iVar0 /*17*/].f_16))
			{
				if (func_85(*uParam0, &(Global_2409979[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2409979[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409979[iVar0 /*17*/].f_13 };
						}
						else
						{
							vVar1 = { *uParam0 };
							func_77(&vVar1, &(Global_2409979[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_76(&vVar1, 0, 0, 0, 1))
							{
								vVar1 = { *uParam0 };
								func_77(&vVar1, &(Global_2409979[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { vVar1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_77(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_84(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405071.f_2724) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_84(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_84(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_82(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405071.f_2724) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_81(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_78(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_78(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3, float fParam4, bool bParam5)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	float fVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	vector3 vVar11;
	
	vVar0 = { vParam2 - vParam1 };
	vVar0.z = 0f;
	vVar1 = { *uParam0 - vParam1 };
	vVar1.z = 0f;
	vVar2 = { func_80(0f, 0f, 1f, vVar0) };
	vVar2 = { vVar2 / FtoV(vmag(vVar2)) };
	fVar3 = (vmag(vVar1) * sin(GET_ANGLE_BETWEEN_2D_VECTORS(vVar0.x, vVar0.y, vVar1.x, vVar1.y)));
	if (fVar3 < (fParam3 * 0.5f))
	{
		if (!bParam5)
		{
			if (func_79(vVar2, vVar1) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_79(vVar2, vVar1) >= 0f)
		{
			vVar2 = { vVar2 * FtoV(((((fParam3 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			vVar2 = { vVar2 * FtoV((((fParam3 * 0.5f) + fVar3) + fParam4)) };
		}
		vVar4 = { *uParam0 + vVar2 };
		fVar6 = vdist(vParam1.x, vParam1.y, 0f, vParam2.x, vParam2.y, 0f);
		vVar7 = { vParam1 + vParam2 / Vector(2f, 2f, 2f) };
		vVar7.z = 0f;
		vVar2 = { func_80(0f, 0f, 1f, vVar0) };
		vVar2 = { vVar2 / FtoV(vmag(vVar2)) };
		vVar2 = { vVar2 * FtoV((fParam3 * 0.5f)) };
		vVar8 = { vVar7 - vVar2 };
		vVar9 = { vVar7 + vVar2 };
		vVar10 = { vVar9 - vVar8 };
		vVar10.z = 0f;
		vVar11 = { *uParam0 - vVar8 };
		vVar11.z = 0f;
		vVar2 = { func_80(0f, 0f, 1f, vVar10) };
		vVar2 = { vVar2 / FtoV(vmag(vVar2)) };
		fVar3 = (vmag(vVar11) * sin(GET_ANGLE_BETWEEN_2D_VECTORS(vVar10.x, vVar10.y, vVar11.x, vVar11.y)));
		if (!bParam5)
		{
			if (func_79(vVar2, vVar11) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_79(vVar2, vVar11) >= 0f)
		{
			vVar2 = { vVar2 * FtoV(((((fVar6 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			vVar2 = { vVar2 * FtoV((((fVar6 * 0.5f) + fVar3) + fParam4)) };
		}
		vVar5 = { *uParam0 + vVar2 };
		if (vdist(vVar4, *uParam0, uParam0->f_1, 0f) < vdist(vVar5, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { vVar4 };
		}
		else
		{
			*uParam0 = { vVar5 };
		}
	}
}

float func_79(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_80(vector3 vParam0, vector3 vParam1)
{
	return ((vParam0.y * vParam1.z) - (vParam0.z * vParam1.y)), ((vParam0.z * vParam1.x) - (vParam0.x * vParam1.z)), ((vParam0.x * vParam1.y) - (vParam0.y * vParam1.x));
}

void func_81(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	vVar0 = { *uParam0 };
	fVar1 = (*uParam0 - Param1);
	fVar2 = (*uParam0 - Param3);
	if (fVar1 < fVar2)
	{
		fVar3 = fVar1;
	}
	else
	{
		fVar3 = fVar2;
	}
	fVar4 = (uParam0->f_1 - Param1.f_1);
	fVar5 = (uParam0->f_1 - Param3.f_1);
	if (fVar4 < fVar5)
	{
		fVar6 = fVar4;
	}
	else
	{
		fVar6 = fVar5;
	}
	vVar0 = { *uParam0 };
	if (!bParam6)
	{
		if (fVar3 < fVar6)
		{
			if (fVar1 < fVar2)
			{
				vVar0.x = (Param1 - fParam5);
			}
			else
			{
				vVar0.x = (Param3 + fParam5);
			}
		}
		else if (fVar4 < fVar5)
		{
			vVar0.y = (Param1.f_1 - fParam5);
		}
		else
		{
			vVar0.y = (Param3.f_1 + fParam5);
		}
	}
	else if (fVar3 < fVar6)
	{
		if (fVar1 < fVar2)
		{
			vVar0.x = (Param3 + fParam5);
		}
		else
		{
			vVar0.x = (Param1 - fParam5);
		}
	}
	else if (fVar4 < fVar5)
	{
		vVar0.y = (Param3.f_1 + fParam5);
	}
	else
	{
		vVar0.y = (Param1.f_1 - fParam5);
	}
	*uParam0 = { vVar0 };
}

void func_82(var uParam0, vector3 vParam1, float fParam2, float fParam3, bool bParam4, float fParam5)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { *uParam0 - vParam1 };
	vVar0.z = 0f;
	if (vmag(vVar0) > 0f)
	{
		vVar0 = { vVar0 / FtoV(vmag(vVar0)) };
	}
	else
	{
		vVar0 = { 0f, 1f, 0f };
		if (fParam5 == 0f)
		{
			func_83(&vVar0, 0f, 0f, GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		}
		else
		{
			func_83(&vVar0, 0f, 0f, fParam5);
		}
	}
	vVar0 = { vVar0 * FtoV((fParam2 + fParam3)) };
	if (!bParam4)
	{
		vVar1 = { vParam1 + vVar0 };
	}
	else
	{
		vVar1 = { vParam1 - vVar0 };
	}
	*uParam0 = vVar1.x;
	uParam0->f_1 = vVar1.y;
}

void func_83(var uParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	fVar0 = cos(vParam1.x);
	fVar1 = sin(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.y = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.z = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = cos(vParam1.y);
	fVar1 = sin(vParam1.y);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.y = uParam0->f_1;
	vVar2.z = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = cos(vParam1.z);
	fVar1 = sin(vParam1.z);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.y = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.z = uParam0->f_2;
	*uParam0 = { vVar2 };
}

Vector3 func_84(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3, int iParam4, float fParam5, bool bParam6)
{
	int iVar0;
	vector3 vVar1;
	
	switch (iParam4)
	{
		case 0:
			func_82(&vParam0, vParam1, fParam3, fParam5, bParam6, 0);
			break;
		
		case 1:
			func_81(&vParam0, vParam1, vParam2, fParam5, bParam6);
			break;
		
		case 2:
			func_78(&vParam0, vParam1, vParam2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		GET_NTH_CLOSEST_VEHICLE_NODE(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!func_201(vVar1, vParam1, fParam3, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 1:
				if (!func_120(vVar1, vParam1, vParam2, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 2:
				if (!IS_POINT_IN_ANGLED_AREA(vVar1, vParam1, vParam2, fParam3, 0, true))
				{
					return vVar1;
				}
				break;
		}
		iVar0++;
	}
	return vParam0;
}

int func_85(vector3 vParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	switch (uParam1->f_10)
	{
		case 0:
			return func_201(vParam0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2405071.f_2724) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 1:
			return func_120(vParam0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
			break;
		
		case 2:
			if (bParam3 && bParam4)
			{
				return IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, false);
			}
			else if (bParam3)
			{
				if (IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, false) && !(vParam0.z < uParam1->f_2 && vParam0.z < uParam1->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam4)
			{
				if (IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, false) && !(vParam0.z > uParam1->f_2 && vParam0.z > uParam1->f_3.f_2))
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
				return IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, true);
			}
			break;
	}
	return 0;
}

int func_86(vector3 vParam0, int iParam1, vector3 vParam2, vector3 vParam3, float fParam4)
{
	switch (iParam1)
	{
		case 0:
			if (vdist(vParam0, vParam2) <= fParam4)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_120(vParam0, vParam2, vParam3, 0, 0);
			break;
		
		case 2:
			return IS_POINT_IN_ANGLED_AREA(vParam0, vParam2, vParam3, fParam4, 0, true);
			break;
	}
	return 0;
}

int func_87(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
		{
			iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
			if (GET_ENTITY_MODEL(iVar0) == -1988428699)
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_13())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_13())
			{
				return func_88(Global_2424073[iParam0 /*421*/].f_309.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_88(int iParam0)
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

int func_89(vector3 vParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_119(vParam0, uParam1))
	{
		if (func_90(vParam0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (GET_SAFE_COORD_FOR_PED(vParam0, 0, uParam1, iParam2))
	{
		if (func_90(vParam0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_90(vector3 vParam0, var uParam1, int iParam2, bool bParam3)
{
	float fVar0;
	var uVar1;
	var uVar2;
	
	fVar0 = vdist(vParam0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !func_106(Global_2405071.f_507, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
		{
			if (!func_94(*uParam1, 1056964608))
			{
				if (!func_91(uParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_91(var uParam0, bool bParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar1 = { *uParam0 };
	iVar2 = func_93(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411454[iVar2])
	{
		if (func_92(vVar1, &(Global_2410184[iVar2 /*141*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_78(&vVar1, Global_2410184[iVar2 /*141*/][iVar0 /*7*/], Global_2410184[iVar2 /*141*/][iVar0 /*7*/].f_3, Global_2410184[iVar2 /*141*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411454[8])
	{
		if (func_92(vVar1, &(Global_2410184[8 /*141*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_78(&vVar1, Global_2410184[8 /*141*/][iVar0 /*7*/], Global_2410184[8 /*141*/][iVar0 /*7*/].f_3, Global_2410184[8 /*141*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_92(vector3 vParam0, var uParam1)
{
	return IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, true);
}

int func_93(struct<2> Param0, var uParam1)
{
	if (Param0.f_1 > Global_2411464[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2411464[1])
	{
		if (Param0 < Global_2411468[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2411464[2])
	{
		if (Param0 < Global_2411468[1])
		{
			return 3;
		}
		else if (Param0 < Global_2411468[2])
		{
			return 4;
		}
		else if (Param0 < Global_2411468[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_94(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	if (func_103(PLAYER_ID(), 1, 0))
	{
		if (Global_4456448.f_69120 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_69120)
			{
				if (Global_4456448.f_69121[iVar0 /*84*/].f_7 != 0)
				{
					if (func_95(vParam0, Global_4456448.f_69121[iVar0 /*84*/], Global_4456448.f_69121[iVar0 /*84*/].f_6, Global_4456448.f_69121[iVar0 /*84*/].f_7, fParam1))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_60688 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_60688)
			{
				if (Global_4456448.f_60691[iVar0 /*219*/].f_18 != 0)
				{
					if (func_95(vParam0, Global_4456448.f_60691[iVar0 /*219*/], Global_4456448.f_60691[iVar0 /*219*/].f_3, Global_4456448.f_60691[iVar0 /*219*/].f_18, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_92411 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_92411)
			{
				if (Global_4456448.f_92415[iVar0 /*282*/].f_12 != 0)
				{
					if (func_95(vParam0, Global_4456448.f_92415[iVar0 /*282*/], Global_4456448.f_92415[iVar0 /*282*/].f_3, Global_4456448.f_92415[iVar0 /*282*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969029.f_267 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969029.f_267)
			{
				if (DOES_ENTITY_EXIST(Global_969029.f_232[iVar0]) && !DOES_ENTITY_EXIST(Global_969029.f_232[iVar0], 0))
				{
					if (func_95(vParam0, GET_ENTITY_COORDS(Global_969029.f_232[iVar0], true), GET_ENTITY_COORDS(Global_969029.f_232[iVar0]), GET_ENTITY_COORDS(Global_969029.f_232[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969029.f_265 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969029.f_265)
			{
				if (DOES_ENTITY_EXIST(Global_969029.f_118[iVar0]) && !DOES_ENTITY_EXIST(Global_969029.f_118[iVar0], 0))
				{
					if (func_95(vParam0, GET_ENTITY_COORDS(Global_969029.f_118[iVar0], true), GET_ENTITY_COORDS(Global_969029.f_118[iVar0]), GET_ENTITY_COORDS(Global_969029.f_118[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_95(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3, float fParam4)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (vdist(vParam0, vParam1) < func_102(iParam3, 1008981770))
	{
		func_96(vParam1, fParam2, iParam3, &vVar0, &vVar1, &fVar2, fParam4);
		if (IS_POINT_IN_ANGLED_AREA(vParam0, vVar0, vVar1, fVar2, 0, true))
		{
			return 1;
		}
	}
	return 0;
}

void func_96(vector3 vParam0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	vVar0 = { 0f, 1f, 0f };
	func_83(&vVar0, 0f, 0f, fParam1);
	vVar0 = { vVar0 / FtoV(vmag(vVar0)) };
	func_97(iParam2, &vVar1, &vVar2, 1086324736, 1080033280, 1077936128);
	vVar3 = { vParam0 + vVar0 * FtoV((vVar2.y + fParam6)) };
	vVar3.z = (vVar3.z - ((0.5f * ABSF((vVar2.z - vVar1.z))) + fParam6));
	vVar4 = { vParam0 - vVar0 * FtoV(((vVar1.y * -1f) + fParam6)) };
	vVar4.z = (vVar4.z + ((0.5f * ABSF((vVar2.z - vVar1.z))) + fParam6));
	*uParam3 = { vVar3 };
	*uParam4 = { vVar4 };
	*uParam5 = ABSF((vVar2.x - vVar1.x));
}

void func_97(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (IS_MODEL_VALID(iParam0))
	{
		GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_100(iParam0);
		if (iVar0 != 0)
		{
			func_98(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (vmag(*uParam1) <= 0.01f || vmag(*uParam2) <= 0.01f)
	{
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_98(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_99(iParam0, &Global_1315808);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (IS_MODEL_VALID(Global_1315808[iVar0]))
		{
			GET_MODEL_DIMENSIONS(Global_1315808[iVar0], &(Global_1315812[iVar0 /*3*/]), &(Global_1315819[iVar0 /*3*/]));
		}
		if (vmag(Global_1315812[iVar0 /*3*/]) <= 0.01f || vmag(Global_1315819[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315812[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315819[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315812[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315819[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315812[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315819[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315826[iVar0] = (Global_1315819[iVar0 /*3*/] - Global_1315812[iVar0 /*3*/]);
		Global_1315829[iVar0] = (Global_1315819[iVar0 /*3*/].f_1 - Global_1315812[iVar0 /*3*/].f_1);
		Global_1315832[iVar0] = (Global_1315819[iVar0 /*3*/].f_2 - Global_1315812[iVar0 /*3*/].f_2);
		if (Global_1315826[iVar0] > Global_1315835)
		{
			Global_1315835 = Global_1315826[iVar0];
		}
		if (Global_1315832[iVar0] > Global_1315836)
		{
			Global_1315836 = Global_1315832[iVar0];
		}
		iVar0++;
	}
	Global_1315837 = (Global_1315835 * -0.5f);
	Global_1315840 = (Global_1315835 * 0.5f);
	Global_1315837.f_1 = ((((0.5f * Global_1315829[0]) + Global_1315829[1]) + Global_1315808.f_3) * -1f);
	Global_1315840.f_1 = (0.5f * Global_1315829[0]);
	Global_1315837.f_2 = (Global_1315832[0] * -0.5f);
	Global_1315840.f_2 = (Global_1315832[0] * 0.5f);
	*uParam1 = { Global_1315837 };
	*uParam2 = { Global_1315840 };
}

void func_99(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = 387748548;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = 177270108;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = 433954513;
			(*uParam1)[1] = -1881846085;
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_100(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_101(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_101(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

float func_102(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_97(iParam0, &vVar0, &vVar1, 1086324736, 1080033280, 1077936128);
	vVar2 = { vVar1 - vVar0 };
	fVar3 = (sqrt(((((vVar2.x * 0.5f) * (vVar2.x * 0.5f)) + ((vVar2.y * 0.5f) * (vVar2.y * 0.5f))) + ((vVar2.z * 0.5f) * (vVar2.z * 0.5f)))) + fParam1);
	return fVar3;
}

int func_103(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_104(iParam0))
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

bool func_104(int iParam0)
{
	return func_105(iParam0);
}

bool func_105(int iParam0)
{
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_13.f_1, 0);
}

int func_106(vector3 vParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	
	if (func_113(vParam0))
	{
		if (func_76(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (func_108(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (func_107(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (vdist(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				func_82(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_107(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (vdist(vParam0, Global_2405071.f_2726[iVar0 /*3*/]) < fParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_108(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	
	if (func_110(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			vVar2 = { *uParam0 };
			func_77(&vVar2, &(Global_2405071.f_363[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_110(vVar2, &uVar1) || func_109(vVar2))
			{
				vVar2 = { *uParam0 };
				func_77(&vVar2, &(Global_2405071.f_363[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { vVar2 };
		}
		return 1;
	}
	return 0;
}

int func_109(vector3 vParam0)
{
	float fVar0;
	
	if (Global_2405071.f_588 > 0f)
	{
		fVar0 = vdist(vParam0, Global_2405071.f_585);
		if (fVar0 < Global_2405071.f_588)
		{
			return 1;
		}
	}
	return 0;
}

int func_110(vector3 vParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_112())
	{
		return 0;
	}
	iVar1 = func_111();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405071.f_363[iVar0 /*12*/].f_9 == 1)
		{
			if (func_85(vParam0, &(Global_2405071.f_363[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_111()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405071.f_363[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_112()
{
	return Global_1676879.f_443;
}

int func_113(vector3 vParam0)
{
	int iVar0;
	vector3 vVar1;
	
	if (!Global_2405071.f_510 && !Global_2405071.f_511)
	{
		if (!Global_2405071.f_45.f_314)
		{
			if (!func_117(PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!func_116(vParam0, 1008981770))
			{
				if (!func_76(&vParam0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_76(&vParam0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_115(vParam0, 1008981770);
				if (iVar0 > -1)
				{
					vVar1 = { func_114(&(Global_2405071.f_45[iVar0 /*12*/])) };
					if (!func_76(&vVar1, 0, 0, 0, 1))
					{
						if (!func_76(&vParam0, 0, 0, 0, 1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_114(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_115(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405071.f_45[iVar0 /*12*/].f_9)
		{
			if (func_85(vParam0, &(Global_2405071.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_116(vector3 vParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405071.f_45[iVar0 /*12*/].f_9)
		{
			if (func_85(vParam0, &(Global_2405071.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_117(int iParam0, bool bParam1)
{
	if (Global_1312448 != 0)
	{
		return func_118(iParam0) != 0;
	}
	return func_103(iParam0, bParam1, 0);
}

int func_118(int iParam0)
{
	if (func_6(iParam0, 0, 1))
	{
		return Global_2424073[iParam0 /*421*/].f_1;
	}
	return 0;
}

int func_119(vector3 vParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2405071.f_2252 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405071.f_2252)
		{
			fVar3 = vdist(Global_2405071.f_2253[iVar0 /*4*/], vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam1 = { Global_2405071.f_2253[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_120(vector3 vParam0, vector3 vParam1, vector3 vParam2, bool bParam3, bool bParam4)
{
	func_121(&vParam1, &vParam2);
	if (((!vParam0.x >= vParam1.x || !vParam0.y >= vParam1.y) || !vParam0.x <= vParam2.x) || !vParam0.y <= vParam2.y)
	{
		return 0;
	}
	if (bParam3 && bParam4)
	{
		return 1;
	}
	else if (bParam3)
	{
		if (vParam0.z >= vParam1.z)
		{
			return 1;
		}
	}
	else if (bParam4)
	{
		if (vParam0.z <= vParam2.z)
		{
			return 1;
		}
	}
	else if (vParam0.z >= vParam1.z && vParam0.z <= vParam2.z)
	{
		return 1;
	}
	return 0;
}

void func_121(var uParam0, var uParam1)
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

int func_122(vector3 vParam0, vector3 vParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (vParam0.x > vParam1.x)
	{
		vVar1.x = vParam0.x;
		vVar0.x = vParam1.x;
	}
	else
	{
		vVar1.x = vParam1.x;
		vVar0.x = vParam0.x;
	}
	if (vParam0.y > vParam1.y)
	{
		vVar1.y = vParam0.y;
		vVar0.y = vParam1.y;
	}
	else
	{
		vVar1.y = vParam1.y;
		vVar0.y = vParam0.y;
	}
	if (vParam0.z > vParam1.z)
	{
		vVar1.z = vParam0.z;
		vVar0.z = vParam1.z;
	}
	else
	{
		vVar1.z = vParam1.z;
		vVar0.z = vParam0.z;
	}
	if (vmag(vVar1 - vVar0) > 100f)
	{
		return 1;
	}
	if (fParam2 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_123(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_124(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	if (Global_2405071.f_2481.f_1 == 0 && Global_2405071.f_2481 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (_0x4BA92A18502BCA61(&(Global_2405071.f_2481.f_1)))
			{
				case 0:
					func_193(uParam1, uParam2);
					if (!Global_2405071.f_2481.f_2)
					{
						if (uParam2->f_7 && Global_2405071.f_550.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2405071.f_2456 };
							}
							if (uParam1->f_5 && func_74(Global_2405071.f_484))
							{
								if (!Global_2405071.f_2481.f_5)
								{
									Global_2405071.f_2481.f_5 = 1;
								}
								else
								{
									func_75(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_75(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_193(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (_0x3C67506996001F5E())
		{
			if (!_0xF445DE8DA80A1792())
			{
				if (_0xA586FBEB32A53DBB())
				{
					func_193(uParam1, uParam2);
					Global_2405071.f_2481.f_1 = _0xA635C11B8C44AFC2();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				_0xFEE4A5459472A9F8();
				func_193(uParam1, uParam2);
				if (!Global_2405071.f_2481.f_2)
				{
					Global_2405071.f_2481.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_190(Global_2405071.f_550, &(Global_2405071.f_2481.f_57), &(Global_2405071.f_2481.f_90));
	}
	if (uParam2->f_7 && !Global_2405071.f_2481.f_4)
	{
		Global_2405071.f_2481.f_4 = 1;
		func_132(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar4 = 0;
	if (uParam1->f_5)
	{
		iVar5 = 64;
	}
	else
	{
		iVar5 = 32;
	}
	if (Global_2405071.f_2481.f_1 > 0 || Global_2405071.f_2481 > 0)
	{
		if (uParam1->f_5 || _0x3C67506996001F5E())
		{
			iVar2 = 0;
			while (iVar2 < Global_2405071.f_2481.f_1)
			{
				if (iVar4 < iVar5)
				{
					if (iVar2 <= Global_2405071.f_2481.f_3)
					{
						iVar2 = Global_2405071.f_2481.f_3 + 1;
					}
					if (iVar2 > (Global_2405071.f_2481.f_1 - 1))
					{
						iVar2 = (Global_2405071.f_2481.f_1 - 1);
					}
					if (iVar2 < 0)
					{
						iVar2 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						_0xFB8F2A6F3DF08CBE(iVar2, &vVar0, &fVar1);
						fVar1 = (fVar1 * 57.29578f);
					}
					else
					{
						_0x280C7E3AC7F56E90(iVar2, &vVar0, &(vVar0.f_1), &(vVar0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar3 = NETWORK_GET_RESPAWN_RESULT(iVar2);
					}
					else
					{
						_0xB782F8238512BAD5(iVar2, &iVar3);
					}
					func_132(vVar0, fVar1, uParam1, uParam2, 0, iVar3);
					iVar4++;
					Global_2405071.f_2481.f_3 = iVar2;
				}
				else
				{
					return 0;
				}
				iVar2++;
			}
		}
		else
		{
			iVar2 = Global_2405071.f_2481.f_1;
		}
		if (Global_2405071.f_2481.f_1 == iVar2)
		{
			if (uParam1->f_5 && Global_2405071.f_2878)
			{
				func_126(&(Global_2405071.f_2481.f_6[0 /*10*/]), &(Global_2405071.f_2481.f_6[1 /*10*/]), &(Global_2405071.f_2481.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && func_74(Global_2405071.f_484))
			{
				if (Global_2405071.f_2481.f_2)
				{
					func_73(uParam0, &(Global_2405071.f_2481.f_6));
					func_125(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405071.f_2456 };
					func_75(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_125(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2405071.f_2481.f_2)
			{
				func_73(uParam0, &(Global_2405071.f_2481.f_6));
				func_125(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar2 = GET_RANDOM_INT_IN_RANGE(0, Global_2405071.f_2481.f_1);
				_0xFB8F2A6F3DF08CBE(iVar2, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_91(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					func_125(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405071.f_2456 };
					func_75(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_125(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2405071.f_2456 };
				func_75(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				func_125(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2405071.f_2456 };
		if (uParam1->f_5 && func_74(Global_2405071.f_484))
		{
			if (!Global_2405071.f_2481.f_5)
			{
				Global_2405071.f_2481.f_5 = 1;
			}
			else
			{
				func_75(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar6 = false;
			}
			else
			{
				bVar6 = true;
			}
			func_75(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		func_125(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_125(vector3 vParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2405071.f_2615[(3 - iVar0) /*3*/] = { Global_2405071.f_2615[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2405071.f_2615[0 /*3*/] = { vParam0 };
}

void func_126(var uParam0, var uParam1, var uParam2)
{
	if (func_74(Global_2405071.f_484) && func_131() < 4096)
	{
		func_130(uParam0, 0f);
		func_130(uParam1, uParam0->f_2);
		func_130(uParam2, uParam1->f_2);
	}
	else
	{
		func_129(uParam0);
		func_128(uParam2, uParam0->f_4);
		func_127(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_127(var uParam0, vector3 vParam1, vector3 vParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<10> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408003[iVar0 /*10*/] > 0)
		{
			fVar2 = vdist(Global_2408003[iVar0 /*10*/].f_4, vParam1);
			fVar3 = vdist(Global_2408003[iVar0 /*10*/].f_4, vParam2);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2408003[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2408003[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_128(var uParam0, vector3 vParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<10> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408003[iVar0 /*10*/] > 0)
		{
			fVar2 = vdist(Global_2408003[iVar0 /*10*/].f_4, vParam1);
			fVar2 = (fVar2 * Global_2408003[iVar0 /*10*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2408003[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_129(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408003[iVar0 /*10*/] > 0)
		{
			if (Global_2408003[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_2408003[iVar0 /*10*/].f_1;
				Var2 = { Global_2408003[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_130(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408003[iVar0 /*10*/] > 0)
		{
			if (Global_2408003[iVar0 /*10*/].f_2 < fVar1 && Global_2408003[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_2408003[iVar0 /*10*/].f_2;
				Var2 = { Global_2408003[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_131()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408003[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_2408003[iVar0 /*10*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_132(vector3 vParam0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	bool bVar13;
	int iVar14;
	vector3 vVar15;
	vector3 vVar16;
	float fVar17;
	int iVar18;
	struct<10> Var19;
	bool bVar20;
	bool bVar21;
	
	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam2->f_5)
	{
		if (Global_2405071.f_484 == 1)
		{
			if (ABSF((Global_2405071.f_507.f_2 - vParam0.z)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam2->f_5)
	{
		if (func_187(PLAYER_ID()))
		{
			if (iParam5 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam5 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam5 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam5 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam2->f_5 && uParam2->f_6)
	{
		if (!func_186(vParam0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam2->f_5)
	{
		if (!_0x68772DB2B2526F9F(_0x68772DB2B2526F9F(), vParam0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!_0x68772DB2B2526F9F(_0x68772DB2B2526F9F(), vParam0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam2->f_5)
	{
		if (!func_185(vParam0, uParam3->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar13 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (vmag(uParam3->f_13[iVar11 /*3*/]) > 0f)
		{
			if (!vdist(vParam0, uParam3->f_13[iVar11 /*3*/]) > uParam3->f_20[iVar11])
			{
				bVar13 = false;
			}
		}
		iVar11++;
	}
	if (bVar13)
	{
		if ((vmag(uParam3->f_23) > 0f && vmag(uParam3->f_26) > 0f) && uParam3->f_29 > 0f)
		{
			if (IS_POINT_IN_ANGLED_AREA(vParam0, uParam3->f_23, uParam3->f_26, uParam3->f_29, 0, true))
			{
				bVar13 = false;
			}
		}
	}
	if (bVar13)
	{
		iVar8 += 256;
	}
	if (uParam2->f_5)
	{
		if (func_179(vParam0, fParam1, uParam2->f_15, func_184(1), uParam2->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2405071.f_3;
		}
	}
	else if (!func_176(vParam0, 25f, PLAYER_ID(), 1, 1))
	{
		if (uParam2->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_172(vParam0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_172(vParam0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2405071.f_691)
		{
			vVar12 = { Global_2405071.f_507 };
			if (Global_2405071.f_484 == 26)
			{
				vVar12 = { Global_2405071.f_550.f_18 };
			}
			if (!func_107(vParam0, 0.5f))
			{
				if (func_113(vVar12))
				{
					if (!func_76(&vParam0, 0, 0, 0, 1) && !func_171(&vParam0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_171(&vParam0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!func_170(vParam0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam2->f_5)
	{
		if (!(func_169(PLAYER_ID()) && func_168(PLAYER_ID())))
		{
			if (!func_167(&vParam0, &(Global_2405071.f_2481.f_90), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam2->f_5)
	{
		if (!func_168(PLAYER_ID()))
		{
			if (!func_166(vParam0, &(Global_2405071.f_2481.f_57), &(Global_2405071.f_2481.f_90), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (func_165(vParam0))
	{
		if (uParam2->f_5)
		{
			if (func_74(Global_2405071.f_484))
			{
				if (func_116(vParam0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam2->f_5)
	{
		if (func_164(vParam0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2405071.f_45.f_55)
	{
		iVar8 += 16384;
	}
	else if (uParam2->f_5)
	{
		if (!iParam5 & 1 == 0)
		{
			if (IS_VALID_INTERIOR(IS_VALID_INTERIOR(vParam0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam5 & 2 == 0)
	{
		if (IS_VALID_INTERIOR(IS_VALID_INTERIOR(vParam0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2405071.f_691)
		{
			if (!func_108(&vParam0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!func_91(&vParam0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar14 = func_115(vParam0, 1008981770);
		if (iVar14 > -1)
		{
			func_163(vParam0, &vVar15, &vVar16, &fVar17);
			if (!func_158(&(Global_2405071.f_45[iVar14 /*12*/]), vVar15, vVar16, fVar17))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (func_94(vParam0, 1056964608))
	{
		iVar8 = -1;
	}
	if (uParam3->f_33)
	{
		if (IS_ANY_PED_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), 0.3f))
		{
			iVar8 = -1;
		}
	}
	if (uParam3->f_34)
	{
		if (IS_ANY_VEHICLE_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (uParam2->f_5)
	{
	}
	else if (func_157(vParam0, 1, 0, uParam2->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var19.f_2 = 1176256410;
	bVar20 = false;
	bVar21 = false;
	if (Global_2405071.f_2878 && uParam2->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam4)
			{
				uParam3->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam2->f_21)
			{
				fVar0 = func_149(vParam0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = func_149(vParam0, Global_2405071.f_2456, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_74(Global_2405071.f_484) && iVar8 < 4096)
			{
				Var19.f_2 = func_147(vParam0);
			}
			uVar7 = func_138(vParam0, 1, 0, 0, 0, 0);
			Var19.f_4 = { vParam0 };
			Var19.f_7 = fParam1;
			Var19 = iVar8;
			Var19.f_1 = fVar0;
			Var19.f_9 = uVar7;
			func_137(Var19);
			Global_2405071.f_2481.f_2 = 1;
		}
	}
	else
	{
		iVar18 = 0;
		while (iVar18 < 5)
		{
			if (iVar8 >= Global_2405071.f_2481.f_6[iVar18 /*10*/])
			{
				if (uParam2->f_5)
				{
					if (!bVar20)
					{
						if (bParam4)
						{
							uParam3->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam2->f_21)
						{
							fVar0 = func_149(vParam0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = func_149(vParam0, Global_2405071.f_2456, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar20 = true;
					}
					if ((func_74(Global_2405071.f_484) && iVar8 == Global_2405071.f_2481.f_6[iVar18 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar21)
						{
							fVar2 = func_147(vParam0);
							bVar21 = true;
						}
						if (fVar2 < Global_2405071.f_2481.f_6[iVar18 /*10*/].f_2)
						{
							Var19.f_4 = { vParam0 };
							Var19.f_7 = fParam1;
							Var19 = iVar8;
							Var19.f_1 = fVar0;
							Var19.f_2 = fVar2;
							func_136(Var19, iVar18);
							Global_2405071.f_2481.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2405071.f_2481.f_6[iVar18 /*10*/] || (iVar8 == Global_2405071.f_2481.f_6[iVar18 /*10*/] && fVar0 > Global_2405071.f_2481.f_6[iVar18 /*10*/].f_1))
					{
						Var19.f_4 = { vParam0 };
						Var19.f_7 = fParam1;
						Var19 = iVar8;
						Var19.f_1 = fVar0;
						func_136(Var19, iVar18);
						Global_2405071.f_2481.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar20)
					{
						if (uParam2->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_134(vParam0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_138(vParam0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_133(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_133(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar20 = true;
					}
					if (iVar8 > Global_2405071.f_2481.f_6[iVar18 /*10*/] || (iVar8 == Global_2405071.f_2481.f_6[iVar18 /*10*/] && fVar3 > Global_2405071.f_2481.f_6[iVar18 /*10*/].f_3))
					{
						Var19.f_4 = { vParam0 };
						Var19.f_7 = fParam1;
						Var19 = iVar8;
						Var19.f_3 = fVar3;
						func_136(Var19, iVar18);
						Global_2405071.f_2481.f_2 = 1;
						return;
					}
				}
			}
			iVar18++;
		}
	}
}

float func_133(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_134(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam2 && !bParam4)
	{
		if (func_6(PLAYER_ID(), 1, 1))
		{
			if (!IS_SCREEN_FADED_OUT())
			{
				if (IS_SPHERE_VISIBLE(vParam0, fParam1))
				{
					fVar4 = vdist2(vParam0, GET_ENTITY_COORDS(GET_ENTITY_COORDS(), false));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_6(iVar1, 1, 1))
		{
			if (!func_198(iVar1, 0) && _0x3B39236746714134(_0x3B39236746714134(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != PLAYER_ID()))
				{
					if (func_135(iVar1) || !bParam6)
					{
						if (!bParam4)
						{
							if ((iParam3 || (iParam3 == 0 && GET_PLAYER_TEAM(iVar1) != GET_PLAYER_TEAM(GET_PLAYER_TEAM()))) || GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(iVar1, vParam0, fParam1))
								{
									fVar4 = vdist2(vParam0, GET_ENTITY_COORDS(GET_ENTITY_COORDS(iVar1), false));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (GET_PLAYER_TEAM(iVar1) != iParam5 || GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(iVar1, vParam0, fParam1))
							{
								fVar4 = vdist2(vParam0, GET_ENTITY_COORDS(GET_ENTITY_COORDS(iVar1), false));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return sqrt(fVar3);
	}
	return -1f;
}

int func_135(int iParam0)
{
	if (IS_ENTITY_VISIBLE_TO_SCRIPT(IS_ENTITY_VISIBLE_TO_SCRIPT(iParam0)) || Global_2424073[iParam0 /*421*/].f_245)
	{
		return 1;
	}
	return 0;
}

void func_136(struct<10> Param0, int iParam1)
{
	struct<10> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2405071.f_2481.f_6[iParam1 /*10*/] };
	Global_2405071.f_2481.f_6[iParam1 /*10*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_136(Var0, iParam1 + 1);
	}
}

void func_137(struct<10> Param0)
{
	int iVar0;
	struct<10> Var1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	Var1.f_2 = 1176256410;
	iVar2 = func_131();
	if (Param0 > iVar2)
	{
		iVar2 = Param0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408003[iVar0 /*10*/] < iVar2)
		{
			Global_2408003[iVar0 /*10*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0 < iVar2)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408003[iVar0 /*10*/] == 0)
		{
			Global_2408003[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar3 = 9999.9f;
	iVar4 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408003[iVar0 /*10*/] > 0)
		{
			if (Global_2408003[iVar0 /*10*/].f_1 < fVar3)
			{
				fVar3 = Global_2408003[iVar0 /*10*/].f_1;
				iVar4 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar4 > -1)
	{
		Global_2408003[iVar4 /*10*/] = { Param0 };
	}
}

float func_138(vector3 vParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar7 = iVar0;
		if (func_6(iVar7, 1, 1) || (iParam5 == 1 && func_6(iVar7, 0, 0)))
		{
			if (!iVar7 == PLAYER_ID() || iParam3 == 1)
			{
				bVar4 = false;
				if (bParam1)
				{
					if (func_139(iVar7))
					{
						bVar4 = true;
					}
				}
				if (bParam2)
				{
					if (GET_PLAYER_TEAM(iVar7) == GET_PLAYER_TEAM(GET_PLAYER_TEAM()))
					{
						if (!GET_PLAYER_TEAM(iVar7) == -1 || !func_117(GET_PLAYER_TEAM(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (_0x3B39236746714134(_0x3B39236746714134(), iVar7) || !bParam4)
					{
						if (func_135(iVar7))
						{
							vVar5 = { func_8(iVar7) };
							if (!iVar7 == PLAYER_ID())
							{
								vVar6 = { 0x64D779659BC37B19(0x64D779659BC37B19(iVar7)) };
							}
							else
							{
								vVar6 = { vVar5 };
							}
							if (!bParam4)
							{
								if (vVar5.z < -100f)
								{
									vVar5.z = vParam0.z;
								}
								if (vVar6.z < -100f)
								{
									vVar6.z = vParam0.z;
								}
							}
							fVar1 = GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar5, true);
							fVar2 = GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar6, true);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

int func_139(int iParam0)
{
	if (func_6(iParam0, 0, 1))
	{
		if (!func_145(iParam0))
		{
			if (_0x3B39236746714134(_0x3B39236746714134(), iParam0))
			{
				if (!GET_PLAYER_TEAM(iParam0) == GET_PLAYER_TEAM(GET_PLAYER_TEAM()))
				{
					if (func_103(PLAYER_ID(), 1, 0))
					{
						if (!func_144(GET_PLAYER_TEAM(iParam0), GET_PLAYER_TEAM(GET_PLAYER_TEAM()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (GET_PLAYER_TEAM(iParam0) == -1 && GET_PLAYER_TEAM(GET_PLAYER_TEAM()) == -1)
				{
					if (!func_103(PLAYER_ID(), 1, 0))
					{
						if (!func_140(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_140(int iParam0)
{
	if (func_143(PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2507671 = { func_142(iParam0) };
	if (NETWORK_IS_FRIEND(&Global_2507671))
	{
		return 1;
	}
	if (func_141(PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_141(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_12(iParam0);
	if (!iVar0 == func_13())
	{
		if (iVar0 == func_12(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_142(int iParam0)
{
	struct<13> Var0;
	
	NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_143(int iParam0, int iParam1)
{
	if (_NETWORK_PLAYER_IS_IN_CLAN())
	{
		Global_2507671 = { func_142(iParam0) };
		Global_2507684 = { func_142(iParam1) };
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

int func_144(int iParam0, int iParam1, int iParam2)
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

int func_145(int iParam0)
{
	if (func_198(iParam0, 0))
	{
		return 1;
	}
	if (func_146())
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

bool func_146()
{
	return IS_BIT_SET(Global_2359302, 3);
}

float func_147(vector3 vParam0)
{
	var uVar0;
	
	return func_148(vParam0, &(Global_2405071.f_45), &uVar0);
}

float func_148(vector3 vParam0, var uParam1, var uParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((uParam1[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam1[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = vdist(*(uParam1[iVar0 /*12*/]), vParam0);
					fVar1 = (fVar1 - ((uParam1[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2405071.f_2724) * (uParam1[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (vParam0.x < (*uParam1)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam1)[iVar0 /*12*/] - vParam0.x));
					}
					else if (vParam0.x > (uParam1[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (vParam0.x - (uParam1[iVar0 /*12*/])->f_3));
					}
					if (vParam0.y < (uParam1[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_1 - vParam0.y));
					}
					else if (vParam0.y > (uParam1[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (vParam0.y - (uParam1[iVar0 /*12*/])->f_3.f_1));
					}
					if (vParam0.z < (uParam1[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_2 - vParam0.z));
					}
					else if (vParam0.z > (uParam1[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (vParam0.z - (uParam1[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam2 = iVar3;
	return fVar2;
}

float func_149(vector3 vParam0, vector3 vParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, var uParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam5 > 0)
	{
		fVar1 = (to_float(iParam5) / to_float(8));
	}
	if (bParam2)
	{
		fVar0 = func_133(vdist(vParam0, vParam1), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam6 = 1E+07f;
	fVar4 = func_138(vParam0, 1, 0, 0, 1, 0);
	fVar0 = func_133(fVar4, 0f, func_156(), func_154(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_152(vParam0);
	fVar0 = func_133(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (GET_PLAYER_TEAM(GET_PLAYER_TEAM()) == -1 && !func_117(GET_PLAYER_TEAM(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_151(vParam0, PLAYER_ID(), 0);
	fVar0 = func_133(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	if (bParam3)
	{
		if (func_150(vParam0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_133(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_133(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam4)
	{
		fVar0 = func_133(vdist(Global_2405071.f_507, vParam0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_150(vector3 vParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	iVar1 = GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(vParam0, 1, &uVar3, &uVar2, 1, 3f, 0f);
	if (IS_VEHICLE_NODE_ID_VALID(iVar1))
	{
		GET_VEHICLE_NODE_POSITION(iVar1, &vVar0);
		*uParam1 = vdist(vParam0.x, vParam0.y, 0f, vVar0.x, vVar0.y, 0f);
		*uParam2 = ABSF((vParam0.z - vVar0.z));
		return 1;
	}
	return 0;
}

float func_151(vector3 vParam0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	if (func_6(iParam1, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam1 == iVar2 || iParam2 == 1)
			{
				iVar3 = iVar2;
				if (func_6(iVar3, 0, 1))
				{
					if (GET_PLAYER_TEAM(iVar3) != GET_PLAYER_TEAM(iParam1) || (GET_PLAYER_TEAM(iVar3) == -1 && GET_PLAYER_TEAM(iParam1) == -1))
					{
						if (Global_2417783.f_261[iVar2])
						{
							fVar1 = vdist(Global_2417783.f_131[iVar2 /*3*/], vParam0);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

float func_152(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	var uVar4[32];
	int iVar5;
	
	iVar5 = GET_PED_NEARBY_PEDS(GET_PED_NEARBY_PEDS(), &uVar4, 2);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar5)
	{
		if (DOES_ENTITY_EXIST(uVar4[iVar2]))
		{
			if (!IS_ENTITY_DEAD(uVar4[iVar2], 0))
			{
				if (func_153(uVar4[iVar2]))
				{
					vVar3 = { GET_ENTITY_COORDS(uVar4[iVar2], true) };
					fVar1 = GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar3, true);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	if (Global_2405071.f_2923)
	{
		if (Global_969029.f_266 > 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_969029.f_266)
			{
				if (DOES_ENTITY_EXIST(Global_969029.f_151[iVar2]))
				{
					if (!IS_ENTITY_DEAD(Global_969029.f_151[iVar2], 0))
					{
						if (func_153(Global_969029.f_151[iVar2]))
						{
							vVar3 = { GET_ENTITY_COORDS(Global_969029.f_151[iVar2], true) };
							fVar1 = GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar3, true);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return fVar0;
}

int func_153(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	switch (GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, 1862763509))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (0xCC6E3B6BB69501F1(Global_1574964[0xCC6E3B6BB69501F1()]))
	{
		switch (GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, Global_1574964[GET_RELATIONSHIP_BETWEEN_GROUPS()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_1590446[PLAYER_ID() /*871*/] == 0)
	{
		iVar1 = GET_PLAYER_TEAM(GET_PLAYER_TEAM());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (0xCC6E3B6BB69501F1(Global_1574674[iVar1]))
			{
				switch (GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, Global_1574674[iVar1]))
				{
					case 3:
					case 5:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

float func_154()
{
	if (func_155())
	{
		if ((IS_THIS_MODEL_A_PLANE(Global_2405071.f_45.f_67) || IS_THIS_MODEL_A_PLANE(Global_2405071.f_45.f_67)) || Global_2405071.f_45.f_67 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_155()
{
	if (Global_2405071.f_45.f_65 && !Global_2405071.f_45.f_301)
	{
		if (!func_145(PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

float func_156()
{
	if (func_155())
	{
		if ((IS_THIS_MODEL_A_PLANE(Global_2405071.f_45.f_67) || IS_THIS_MODEL_A_PLANE(Global_2405071.f_45.f_67)) || Global_2405071.f_45.f_67 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_157(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5, float fParam6, float fParam7)
{
	float fVar0;
	
	fVar0 = iParam4;
	if (bParam3)
	{
		fVar0 = fParam5;
	}
	if ((((fParam5 > 0f && IS_ANY_VEHICLE_NEAR_POINT(vParam0, fParam5)) || (fVar0 > 0f && IS_ANY_VEHICLE_NEAR_POINT(vParam0, fVar0))) || ((iParam2 == 1 && fParam6 > 0f) && IS_ANY_VEHICLE_NEAR_POINT(vParam0, fParam6, 0))) || ((iParam1 == 1 && fParam7 > 0f) && IS_ANY_VEHICLE_NEAR_POINT(vParam0, fParam7, 1)))
	{
		return 1;
	}
	return 0;
}

int func_158(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_162(*uParam0, uParam0->f_6, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_161(*uParam0, uParam0->f_3, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_159(*uParam0, uParam0->f_3, uParam0->f_6, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_159(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, vector3 vParam4, float fParam5)
{
	vector3 vVar0[8];
	int iVar1;
	
	func_160(vParam0, vParam1, fParam2, &vVar0);
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!IS_POINT_IN_ANGLED_AREA(vVar0[iVar1 /*3*/], vParam3, vParam4, fParam5, 0, true))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_160(vector3 vParam0, vector3 vParam1, float fParam2, var uParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	var uVar2;
	var uVar3;
	
	if (vParam0.z == vParam1.z)
	{
		vParam1.z = (vParam1.z + 0.01f);
	}
	vVar0 = { vParam0 - vParam1 };
	vVar1 = { func_80(vVar0, vVar0.x, vVar0.y, 0f) };
	vVar1 = { vVar1 / FtoV(vmag(vVar1)) };
	vVar1 = { vVar1 * FtoV((fParam2 * 0.5f)) };
	if (vParam0.z > vParam1.z)
	{
		uVar2 = vParam1.z;
		uVar3 = vParam0.z;
	}
	else
	{
		uVar2 = vParam0.z;
		uVar3 = vParam1.z;
	}
	*(uParam3[0 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) + vVar1 };
	*(uParam3[1 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) - vVar1 };
	*(uParam3[2 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) - vVar1 };
	*(uParam3[3 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) + vVar1 };
	*(uParam3[4 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) + vVar1 };
	*(uParam3[5 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) - vVar1 };
	*(uParam3[6 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) - vVar1 };
	*(uParam3[7 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) + vVar1 };
}

int func_161(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4)
{
	vector3 vVar0[8];
	int iVar1;
	
	vVar0[0 /*3*/] = { vParam0.x, vParam0.y, vParam0.z };
	vVar0[1 /*3*/] = { vParam0.x, vParam0.y, vParam1.z };
	vVar0[2 /*3*/] = { vParam0.x, vParam1.y, vParam1.z };
	vVar0[3 /*3*/] = { vParam0.x, vParam1.y, vParam0.z };
	vVar0[4 /*3*/] = { vParam1.x, vParam0.y, vParam0.z };
	vVar0[5 /*3*/] = { vParam1.x, vParam0.y, vParam1.z };
	vVar0[6 /*3*/] = { vParam1.x, vParam1.y, vParam1.z };
	vVar0[7 /*3*/] = { vParam1.x, vParam1.y, vParam0.z };
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!IS_POINT_IN_ANGLED_AREA(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0, true))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_162(vector3 vParam0, float fParam1, vector3 vParam2, vector3 vParam3, float fParam4)
{
	vector3 vVar0[4];
	int iVar1;
	
	vVar0[0 /*3*/] = { vParam0 + Vector(0f, fParam1, 0f) };
	vVar0[1 /*3*/] = { vParam0 + Vector(0f, (-1f * fParam1), 0f) };
	vVar0[2 /*3*/] = { vParam0 + Vector(0f, 0f, fParam1) };
	vVar0[3 /*3*/] = { vParam0 + Vector(0f, 0f, (-1f * fParam1)) };
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (!IS_POINT_IN_ANGLED_AREA(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0, true))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_163(vector3 vParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar1 = { vParam0 };
	iVar2 = func_93(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411454[iVar2])
	{
		if (func_92(vVar1, &(Global_2410184[iVar2 /*141*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_2410184[iVar2 /*141*/][iVar0 /*7*/] };
			*uParam2 = { Global_2410184[iVar2 /*141*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_2410184[iVar2 /*141*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411454[8])
	{
		if (func_92(vVar1, &(Global_2410184[8 /*141*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_2410184[8 /*141*/][iVar0 /*7*/] };
			*uParam2 = { Global_2410184[8 /*141*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_2410184[8 /*141*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_164(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2405071.f_45.f_55)
	{
		if (IS_VALID_INTERIOR(Global_2405071.f_45.f_56))
		{
			if (!_ARE_COORDS_COLLIDING_WITH_EXTERIOR(vParam0))
			{
				iVar0 = GET_INTERIOR_AT_COORDS(vParam0);
				if (IS_VALID_INTERIOR(iVar0))
				{
					iVar1 = GET_INTERIOR_GROUP_ID(iVar0);
					if (!iVar1 == Global_2405071.f_45.f_57)
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
	}
	return 1;
}

int func_165(vector3 vParam0)
{
	switch (Global_2405071.f_2477)
	{
		case 0:
			return func_201(vParam0, Global_2405071.f_2456, Global_2405071.f_2459, 0, 0);
			break;
		
		case 1:
			return func_120(vParam0, Global_2405071.f_2470, Global_2405071.f_2473, 0, 0);
			break;
		
		case 2:
			return IS_POINT_IN_ANGLED_AREA(vParam0, Global_2405071.f_2470, Global_2405071.f_2473, Global_2405071.f_2476, 0, true);
			break;
	}
	return 0;
}

int func_166(vector3 vParam0, var uParam1, var uParam2, float fParam3)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		fVar0 = ((uParam1[iVar1 /*4*/])->f_3 + fParam3);
		if (vdist(*(uParam1[iVar1 /*4*/]), vParam0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	vVar2 = { 0f, 0f, 0f };
	vVar3 = { 0f, 0f, 0f };
	fVar4 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		vVar2 = { *(uParam2[iVar1 /*10*/]) };
		vVar3 = { (uParam2[iVar1 /*10*/])->f_3 };
		fVar4 = (uParam2[iVar1 /*10*/])->f_6;
		if (IS_POINT_IN_ANGLED_AREA(vParam0, vVar2, vVar3, fVar4, 0, true))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_167(var uParam0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (vdist((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				vVar1 = { *uParam0 };
				func_82(&vVar1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_168(int iParam0)
{
	switch (Global_1312448)
	{
		case 0:
			if (!func_28(iParam0))
			{
				if (Global_1590446[iParam0 /*871*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_169(int iParam0)
{
	if (func_103(iParam0, 1, 0))
	{
		if (Global_1590446[iParam0 /*871*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_170(vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (vdist2(Global_2405071.f_2615[iVar0 /*3*/], vParam0) < (fParam1 * fParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_171(var uParam0, bool bParam1)
{
	var uVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_109(*uParam0))
	{
		if (bParam1)
		{
			vVar1 = { *uParam0 };
			fVar2 = GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
			func_82(&vVar1, Global_2405071.f_585, Global_2405071.f_588, 1036831949, 0, fVar2);
			if (func_110(vVar1, &uVar0) || func_109(vVar1))
			{
				vVar1 = { *uParam0 };
				func_82(&vVar1, Global_2405071.f_585, Global_2405071.f_588, 1036831949, 1, fVar2);
			}
			*uParam0 = { vVar1 };
		}
	}
	return 0;
}

int func_172(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_6(PLAYER_ID(), 1, 1))
		{
			if (!IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (GET_DISTANCE_BETWEEN_COORDS(func_173(GET_DISTANCE_BETWEEN_COORDS()), vParam0, true) <= (fVar2 + fParam1))
				{
					if (IS_SPHERE_VISIBLE(vParam0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_6(iVar1, 1, 1))
		{
			if (!func_198(iVar1, 0) && _0x3B39236746714134(_0x3B39236746714134(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != PLAYER_ID()))
				{
					if ((func_135(iVar1) || !bParam8) && !Global_2424073[iVar1 /*421*/].f_259)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (GET_PLAYER_TEAM(iVar1) == GET_PLAYER_TEAM(GET_PLAYER_TEAM()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && GET_PLAYER_TEAM(iVar1) != GET_PLAYER_TEAM(GET_PLAYER_TEAM()))) || GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (GET_DISTANCE_BETWEEN_COORDS(func_173(iVar1), vParam0, true) <= (fVar2 + fParam1))
								{
									if (IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(iVar1, vParam0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (GET_PLAYER_TEAM(iVar1) != iParam6 || GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (GET_DISTANCE_BETWEEN_COORDS(func_173(iVar1), vParam0, true) <= (fVar2 + fParam1))
							{
								if (IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(iVar1, vParam0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_173(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_175() && Global_1590446[iVar0 /*871*/].f_842) && !func_174(Global_1590446[iVar0 /*871*/].f_843))
	{
		return Global_1590446[iVar0 /*871*/].f_843;
	}
	return func_8(iParam0);
}

int func_174(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

var func_175()
{
	return Global_2448961.f_17;
}

int func_176(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_178(vParam0, fParam1, iParam2, iParam3, 0) || func_177(vParam0, iParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

int func_177(vector3 vParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam1 == iVar0 || iParam2 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_95(vParam0, Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_6(iVar2, 0, 1) && func_6(iParam1, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_178(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam2 == iVar0 || iParam3 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam4)
			{
				if (func_6(iVar1, 0, 1) && func_6(iParam2, 0, 1))
				{
					if (GET_PLAYER_TEAM(iVar1) == GET_PLAYER_TEAM(iParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_6(iVar1, 0, 1) && func_6(iParam2, 0, 1))
				{
					if (Global_2417783.f_261[iVar0])
					{
						if (vdist(Global_2417783.f_131[iVar0 /*3*/], vParam0) < fParam1)
						{
							return 1;
						}
					}
					else if (vdist(func_8(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2417783.f_261[iVar0])
				{
					if (vdist(Global_2417783.f_131[iVar0 /*3*/], vParam0) < fParam1)
					{
						return 1;
					}
				}
				else if (func_6(iVar1, 0, 1))
				{
					if (vdist(func_8(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_179(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, bool bParam13)
{
	Global_2405071.f_3 = 0;
	if (!func_176(vParam0, 0.5f, PLAYER_ID(), 0, 0))
	{
		Global_2405071.f_3++;
		if (bParam3)
		{
			if (func_229(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
				if (!func_183(vParam0, fParam10))
				{
					Global_2405071.f_3++;
					if (!func_94(vParam0, 1056964608))
					{
						Global_2405071.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
			}
		}
		else if (!bParam2)
		{
			if (func_229(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
				if (!func_183(vParam0, fParam10))
				{
					Global_2405071.f_3++;
					if (!func_180(vParam0, fParam1, fParam7, fParam8, 1084227584))
					{
						Global_2405071.f_3++;
						if (!func_94(vParam0, 1056964608))
						{
							Global_2405071.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
			}
		}
		else if (func_229(vParam0, 6f, 5f, 5f, 5f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
		{
			Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
			if (!func_183(vParam0, fParam10))
			{
				Global_2405071.f_3++;
				if (!func_180(vParam0, fParam1, fParam7, fParam8, fParam9))
				{
					Global_2405071.f_3++;
					if (!func_94(vParam0, 1056964608))
					{
						Global_2405071.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
		}
	}
	return 0;
}

int func_180(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!PLAYER_ID() == iVar1)
		{
			if ((func_6(iVar1, 1, 1) && func_135(iVar1)) && _0x3B39236746714134(_0x3B39236746714134(), iVar1))
			{
				if (!func_182(PLAYER_ID(), iVar1, -2, 0))
				{
					if (func_181(func_8(iVar1), vParam0, fParam1, fParam2, fParam3, fParam4))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_181(vector3 vParam0, vector3 vParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	vector3 vVar0;
	vector3 vVar1;
	
	fParam2 = (fParam2 * -1f);
	fParam2 = (fParam2 + 360f);
	vVar0.x = sin(fParam2);
	vVar0.y = cos(fParam2);
	vVar0.z = 0f;
	vVar0 = { vVar0 / FtoV(vmag(vVar0)) };
	vVar0 = { vVar0 * Vector(fParam3, fParam3, fParam3) };
	vVar1 = { vParam1 + vVar0 };
	vVar1.z = vParam1.z;
	vVar1.z = (vVar1.z + fParam5);
	vParam1.z = (vParam1.z + fParam5);
	return IS_POINT_IN_ANGLED_AREA(vParam0, vParam1, vVar1, fParam4, 0, true);
}

bool func_182(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (GET_PLAYER_TEAM(iParam0) == -1 && GET_PLAYER_TEAM(iParam1) == -1)
			{
				return 0;
			}
		}
		return GET_PLAYER_TEAM(iParam0) == GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_183(vector3 vParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_6(iVar1, 1, 1) && func_135(iVar1)) && _0x3B39236746714134(_0x3B39236746714134(), iVar1))
		{
			if ((GET_PLAYER_TEAM(GET_PLAYER_TEAM()) == -1 && GET_PLAYER_TEAM(iVar1) == -1) && !func_117(GET_PLAYER_TEAM(), 1))
			{
				return 0;
			}
			else if ((GET_PLAYER_TEAM(GET_PLAYER_TEAM()) == -1 && !GET_PLAYER_TEAM() == iVar1) || !func_182(GET_PLAYER_TEAM(), iVar1, -2, 0))
			{
				if (vdist(vParam0, func_8(iVar1)) < fParam1)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_184(int iParam0)
{
	if ((Global_2405071.f_484 == 9 || Global_2405071.f_484 == 9) || (Global_2405071.f_484 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_185(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && PLAYER_ID() != iVar1) || iParam6 == 0)
		{
			if (func_6(iVar1, bParam2, bParam3))
			{
				if (_0x3B39236746714134(_0x3B39236746714134(), iVar1))
				{
					if (!bParam5 || (!IS_PED_INJURED(IS_PED_INJURED(iVar1)) && func_135(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && GET_PLAYER_TEAM(GET_PLAYER_TEAM()) != GET_PLAYER_TEAM(iVar1))) || GET_PLAYER_TEAM(GET_PLAYER_TEAM()) == -1)
						{
							if (((GET_PLAYER_TEAM(GET_PLAYER_TEAM()) == -1 && iParam7) && bParam4) && func_140(iVar1))
							{
							}
							else if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST(iVar1)))
							{
								if (GET_DISTANCE_BETWEEN_COORDS(func_8(iVar1), vParam0, true) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_186(vector3 vParam0, float fParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = GET_PLAYER_TEAM(GET_PLAYER_TEAM());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_6(iVar1, 1, 1))
			{
				if ((!func_198(iVar1, 0) && _0x3B39236746714134(_0x3B39236746714134(), iVar1)) && iVar1 != _0x3B39236746714134())
				{
					fVar2 = iParam2;
					if (fParam3 > 0f)
					{
						if (!GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (GET_PLAYER_TEAM(iVar1) == GET_PLAYER_TEAM(GET_PLAYER_TEAM()))
							{
								fVar2 = fParam3;
							}
						}
					}
					if (GET_PLAYER_TEAM(iVar1) == iVar3)
					{
						if (GET_DISTANCE_BETWEEN_COORDS(func_8(iVar1), vParam0, true) <= (fVar2 + fParam1))
						{
							if (IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(iVar1, vParam0, fParam1))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_187(int iParam0)
{
	if (((func_117(iParam0, 1) || func_189(iParam0)) || func_35(iParam0, 0)) || func_188(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_188(int iParam0)
{
	if (!func_6(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590446[iParam0 /*871*/].f_35;
}

int func_189(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628955[iVar0 /*614*/] != -1;
	}
	return 0;
}

void func_190(vector3 vParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var4;
	vector3 vVar5;
	vector3 vVar6;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		*(uParam1[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		*(uParam2[iVar0 /*10*/]) = { Var4 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!IS_BIT_SET(Global_2359721[iVar1 /*26*/].f_12, 11))
			{
				if (vmag(*(uParam1[iVar0 /*4*/])) == 0f || vdist(Global_2359721[iVar1 /*26*/].f_3, vParam0) < vdist(*(uParam1[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_2359721[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_2359721[iVar1 /*26*/].f_6.f_2;
					func_192(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (vmag(*(uParam1[iVar0 /*4*/])) == 0f || vdist(Global_262145.f_5999[iVar1 /*3*/], vParam0) < vdist(*(uParam1[iVar0 /*4*/]), vParam0))
			{
				Var3 = { Global_262145.f_5999[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_192(&Var3, uParam1, iVar0);
				iVar0 = *uParam1;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam1)
			{
				if (vmag(*(uParam1[iVar0 /*4*/])) == 0f || vdist(Global_262145.f_6045[iVar1 /*19*/][iVar2 /*3*/], vParam0) < vdist(*(uParam1[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_262145.f_6045[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_192(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311706)
	{
		iVar0 = 0;
		while (iVar0 < *uParam2)
		{
			vVar5 = { Global_1311025[iVar1 /*8*/].f_1 + Global_1311025[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			vVar6 = { *(uParam2[iVar0 /*10*/]) + (uParam2[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (vmag(*(uParam2[iVar0 /*10*/])) == 0f || vdist(vVar5, vParam0) < vdist(vVar6, vParam0))
			{
				Var4 = { Global_1311025[iVar1 /*8*/].f_1 };
				Var4.f_3 = { Global_1311025[iVar1 /*8*/].f_4 };
				Var4.f_6 = Global_1311025[iVar1 /*8*/].f_7;
				Var4.f_7 = { Global_2359397[iVar1 /*3*/] };
				func_191(&Var4, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_191(var uParam0, var uParam1, int iParam2)
{
	Global_2412459 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_191(&Global_2412459, uParam1, iParam2 + 1);
	}
}

void func_192(var uParam0, var uParam1, int iParam2)
{
	Global_2412455 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_192(&Global_2412455, uParam1, iParam2 + 1);
	}
}

void func_193(var uParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	if (Global_2405071.f_2252 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405071.f_2252)
		{
			if (func_194(Global_2405071.f_2253[iVar0 /*4*/], uParam0))
			{
				fVar2 = Global_2405071.f_2253[iVar0 /*4*/].f_3;
				if (vmag(*uParam1) > 0.01f)
				{
					vVar1 = { *uParam1 - Global_2405071.f_2253[iVar0 /*4*/] };
					fVar2 = GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
				}
				func_132(Global_2405071.f_2253[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, -1);
				Global_2405071.f_2481++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2405071.f_2878)
	{
		func_126(&(Global_2405071.f_2481.f_6[0 /*10*/]), &(Global_2405071.f_2481.f_6[1 /*10*/]), &(Global_2405071.f_2481.f_6[2 /*10*/]));
	}
}

int func_194(vector3 vParam0, var uParam1)
{
	switch (uParam1->f_7)
	{
		case 0:
			return func_86(vParam0, uParam1->f_7, *uParam1, 0f, 0f, 0f, uParam1->f_4);
		
		case 1:
		case 2:
			return func_86(vParam0, uParam1->f_7, uParam1->f_8, uParam1->f_11, uParam1->f_14);
		
		default:
	}
	return 0;
}

void func_195(vector3 vParam0, vector3 vParam1, var uParam2, var uParam3, var uParam4)
{
	float fVar0;
	
	func_121(&vParam0, &vParam1);
	fVar0 = (vParam1.x - vParam0.x);
	*uParam2 = (vParam0.x + (fVar0 * 0.5f));
	uParam2->f_1 = vParam0.y;
	uParam2->f_2 = vParam0.z;
	*uParam3 = *uParam2;
	uParam3->f_1 = vParam1.y;
	uParam3->f_2 = vParam1.z;
	*uParam4 = (fVar0 * 0.5f);
}

var func_196()
{
	return Global_1310987.f_4;
}

void func_197(float fParam0, float fParam1)
{
	func_236();
	func_228(fParam0, fParam1);
}

bool func_198(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER_ID())
	{
		bVar0 = func_199(-1, 0) == 8;
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

int func_199(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_200();
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

int func_200()
{
	return Global_1312745;
}

bool func_201(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3 && bParam4)
	{
		vParam0.z = 0f;
		vParam1.z = 0f;
		return vdist(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	else if (bParam3)
	{
		if (vParam0.z > vParam1.z)
		{
			vParam0.z = vParam1.z;
		}
		return vdist(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	else if (bParam4)
	{
		if (vParam0.z < vParam1.z)
		{
			vParam0.z = vParam1.z;
		}
		return vdist(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	return vdist(vParam0, vParam1) < (fParam2 + 0.01f);
}

void func_202(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2405071.f_1744 > 0)
	{
		iVar0 = 0;
		while (func_224(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_203(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_203(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	vector3 vVar25;
	var uVar26;
	vector3 vVar27;
	float fVar28;
	bool bVar29;
	
	iVar0 = 0;
	if (!vmag(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_106(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (func_223(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar3 = 0;
	iVar8 = 1;
	if (uParam2->f_11)
	{
		iVar3 += 2;
		iVar3++;
		iVar8 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar3++;
		iVar8 = 0;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		
		case 1:
			fVar11 = 2.75f;
			fVar12 = 7.5f;
			break;
		
		default:
			fVar11 = 2.5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_2412469.f_162 = 0;
	Global_2412469.f_163 = 0;
	Global_2412469.f_164 = -99;
	Global_2412469.f_165 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_2412469[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_2412469.f_121[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (func_100(uParam2->f_34) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar6 = GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (IS_VEHICLE_NODE_ID_VALID(iVar6))
		{
			GET_VEHICLE_NODE_POSITION(iVar6, &vVar1);
			bVar10 = false;
			if (Global_2412469.f_164 == iVar6)
			{
				bVar10 = true;
			}
			Global_2412469.f_165 = { vVar1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !_GET_IS_SLOW_ROAD_FLAG(iVar6)) || _GET_IS_SLOW_ROAD_FLAG(iVar6))
			{
				GET_VEHICLE_NODE_PROPERTIES(vVar1, &uVar4, &uVar5);
				if (vdist(vVar1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_171(&vVar1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!func_222(vVar1))
									{
										vVar1 = { func_218(vVar1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51) };
										if (vmag(vVar1) > 0f)
										{
											if (!func_94(vVar1, 5f))
											{
												if (vVar1.z >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (vVar1.z <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_217(vVar1, uParam2))
														{
															if ((uParam2->f_48 && !func_223(&vVar1, 0)) || uParam2->f_48 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar16 = false;
																	}
																}
																if (vmag(vVar1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && vdist(vVar1.x, vVar1.y, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_213(vVar1, fVar2, uParam2->f_34, PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_106(uParam2->f_35, &vVar1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_31;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!func_212(vVar1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_229(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (func_229(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_210(vVar1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar22 = func_209(vVar1, uParam2->f_54, &fVar23);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar22 < uParam2->f_53)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2412469.f_162)
																										{
																											Global_2412469[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_2412469.f_121[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_2412469.f_162 = 0;
																										uParam2->f_53 = iVar22;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2412469.f_162 == 0)
																									{
																										Global_2412469[0 /*3*/] = { vVar1 };
																										Global_2412469.f_121[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2412469.f_162 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (vdist2(vVar1, uParam2->f_35) < vdist2(Global_2412469[iVar14 /*3*/], uParam2->f_35))
																												{
																													func_208(vVar1, fVar2, iVar14);
																													iVar14 = Global_2412469.f_162 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_2412469.f_162++;
																									if (Global_2412469.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412469.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2412469[Global_2412469.f_162 /*3*/] = { vVar1 };
																									Global_2412469.f_121[Global_2412469.f_162] = fVar2;
																									Global_2412469.f_162++;
																									if (func_217(vVar1, uParam2))
																									{
																										Global_2412469.f_163++;
																									}
																									if (Global_2412469.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412469.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { vVar1 };
																							*uParam1 = fVar2;
																							return 1;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { vVar1 };
																					*uParam1 = fVar2;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_2412469.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2412469[0 /*3*/] };
						*uParam1 = Global_2412469.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2412469.f_163 > 0 && !Global_2412469.f_163 == Global_2412469.f_162)
						{
							func_206(0, uParam2);
						}
						iVar24 = GET_RANDOM_INT_IN_RANGE(0, Global_2412469.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar24 = 0;
						}
						vVar25 = { Global_2412469[0 /*3*/] };
						uVar26 = Global_2412469.f_121[0];
						Global_2412469[0 /*3*/] = { Global_2412469[iVar24 /*3*/] };
						Global_2412469.f_121[0] = Global_2412469.f_121[iVar24];
						Global_2412469[iVar24 /*3*/] = { vVar25 };
						Global_2412469.f_121[iVar24] = uVar26;
						*uParam0 = { Global_2412469[0 /*3*/] };
						*uParam1 = Global_2412469.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_205(iVar13, *uParam0, &iVar0, &vVar1, &fVar2, uParam2, iVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
						vVar27 = { vVar1 };
						fVar28 = fVar2;
						if (!uParam2->f_50)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_106(uParam2->f_35, &vVar27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || func_223(&vVar27, bVar29))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { vVar27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { vVar27 };
								*uParam1 = fVar28;
								return 1;
							}
						}
						else
						{
							*uParam0 = { vVar27 };
							*uParam1 = fVar28;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_204(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2412469.f_164 = iVar6;
	}
	return 0;
}

void func_204(var uParam0, var uParam1, var uParam2, vector3 vParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = vdist(*(uParam0[iVar2 /*4*/]), vParam3);
		if (fVar1 < fVar0)
		{
			if (!func_176(*(uParam0[iVar2 /*4*/]), 5f, PLAYER_ID(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_205(int iParam0, vector3 vParam1, int iParam2, var uParam3, float fParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam2 = GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
		GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(vParam1, *iParam2, uParam3, fParam4, &iParam7, iParam8, fParam9, fParam10);
		*uParam3 = { func_218(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_11, uParam5->f_34, &bParam11, 0, 0, uParam5->f_51) };
		if (!func_222(*uParam3))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_206(int iParam0, var uParam1)
{
	if (!func_217(Global_2412469[iParam0 /*3*/], uParam1))
	{
		Global_2412469.f_162 = (Global_2412469.f_162 - 1);
		func_207(iParam0);
		if (Global_2412469.f_162 > Global_2412469.f_163)
		{
			func_206(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_206(iParam0 + 1, uParam1);
	}
}

void func_207(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2412469[iParam0 /*3*/] = { Global_2412469[iParam0 + 1 /*3*/] };
			Global_2412469.f_121[iParam0] = Global_2412469.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_208(vector3 vParam0, float fParam1, int iParam2)
{
	vector3 vVar0;
	var uVar1;
	
	vVar0 = { Global_2412469[iParam2 /*3*/] };
	uVar1 = Global_2412469.f_121[iParam2];
	Global_2412469[iParam2 /*3*/] = { vParam0 };
	Global_2412469.f_121[iParam2] = fParam1;
	if (iParam2 <= Global_2412469.f_162 && iParam2 < 39)
	{
		if (vmag(vVar0) > 0f)
		{
			func_208(vVar0, uVar1, iParam2 + 1);
		}
	}
}

int func_209(vector3 vParam0, float fParam1, float fParam2)
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	fVar4 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = iVar0;
		if (func_139(iVar3))
		{
			vVar1 = { func_8(iVar3) };
			fVar5 = vdist(vParam0, vVar1);
			if (fVar5 < fParam1)
			{
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	*fParam2 = fVar4;
	return iVar2;
}

int func_210(vector3 vParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	float fVar6;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam7 == 1 && PLAYER_ID() != iVar1) || iParam7 == 0)
		{
			if (func_6(iVar1, bParam3, bParam4))
			{
				if (_0x3B39236746714134(_0x3B39236746714134(), iVar1))
				{
					if (!bParam6 || (!IS_PED_INJURED(IS_PED_INJURED(iVar1)) && func_135(iVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && GET_PLAYER_TEAM(GET_PLAYER_TEAM()) != GET_PLAYER_TEAM(iVar1))) || GET_PLAYER_TEAM(GET_PLAYER_TEAM()) == -1)
						{
							if (((GET_PLAYER_TEAM(GET_PLAYER_TEAM()) == -1 && iParam8) && bParam5) && func_140(iVar1))
							{
							}
							else if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST(iVar1)))
							{
								fVar2 = 0.1f;
								if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(iVar1), 0))
								{
									iVar3 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(iVar1), 0);
									if (DOES_ENTITY_EXIST(iVar3) && !DOES_ENTITY_EXIST(iVar3, 0))
									{
										iVar4 = GET_ENTITY_MODEL(iVar3);
										vVar5 = { GET_ENTITY_COORDS(iVar3, false) };
										fVar6 = GET_ENTITY_HEADING(iVar3);
										if (func_211(vParam0, fParam1, iParam2, vVar5, fVar6, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_95(func_8(iVar1), vParam0, fParam1, iParam2, fVar2))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_211(vector3 vParam0, float fParam1, int iParam2, vector3 vParam3, float fParam4, int iParam5, bool bParam6)
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	
	if (func_95(vParam0, vParam3, fParam4, iParam5, 1036831949))
	{
		return 1;
	}
	func_97(iParam2, &vVar2, &vVar3, 1086324736, 1080033280, 1077936128);
	vVar4 = { 0f, vVar3.y, 0f };
	func_83(&vVar4, 0f, 0f, fParam1);
	vVar5 = { 0f, vVar2.y, 0f };
	func_83(&vVar5, 0f, 0f, fParam1);
	vVar6 = { (ABSF((vVar3.x - vVar2.x)) * 0.5f), 0f, 0f };
	func_83(&vVar6, 0f, 0f, fParam1);
	vVar1[0 /*3*/] = { vParam0 + vVar4 + vVar6 };
	vVar1[0 /*3*/].f_2 = (vVar1[0 /*3*/].f_2 + (0.5f * ABSF((vVar3.z - vVar2.z))));
	vVar1[1 /*3*/] = { vParam0 + vVar4 - vVar6 };
	vVar1[1 /*3*/].f_2 = (vVar1[1 /*3*/].f_2 + (0.5f * ABSF((vVar3.z - vVar2.z))));
	vVar1[2 /*3*/] = { vParam0 + vVar5 + vVar6 };
	vVar1[2 /*3*/].f_2 = (vVar1[2 /*3*/].f_2 + (0.5f * ABSF((vVar3.z - vVar2.z))));
	vVar1[3 /*3*/] = { vParam0 + vVar5 - vVar6 };
	vVar1[3 /*3*/].f_2 = (vVar1[3 /*3*/].f_2 + (0.5f * ABSF((vVar3.z - vVar2.z))));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_95(vVar1[iVar0 /*3*/], vParam3, fParam4, iParam5, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam6)
	{
		if (func_211(vParam3, fParam4, iParam5, vParam0, fParam1, iParam2, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_212(vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar4;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = GET_CLOSEST_VEHICLE(vParam0, 30f, 0, iVar0);
	if (DOES_ENTITY_EXIST(iVar1) && !DOES_ENTITY_EXIST(iVar1, 0))
	{
		iVar2 = GET_ENTITY_MODEL(iVar1);
		vVar3 = { GET_ENTITY_COORDS(iVar1, false) };
		fVar4 = GET_ENTITY_HEADING(iVar1);
		if (func_211(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = GET_CLOSEST_VEHICLE(vParam0, 30f, 0, iVar0);
	if (DOES_ENTITY_EXIST(iVar1) && !DOES_ENTITY_EXIST(iVar1, 0))
	{
		iVar2 = GET_ENTITY_MODEL(iVar1);
		vVar3 = { GET_ENTITY_COORDS(iVar1, false) };
		fVar4 = GET_ENTITY_HEADING(iVar1);
		if (func_211(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_213(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_216(vParam0, fParam1, iParam2, iParam3, iParam4) || func_214(vParam0, fParam1, iParam2, iParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_214(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_215(vParam0, iParam2, Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_211(vParam0, fParam1, iParam2, Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_6(iVar2, 0, 1) && func_6(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_215(vector3 vParam0, int iParam1, vector3 vParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_102(iParam1, 1008981770);
	fVar1 = func_102(iParam3, 1008981770);
	fVar2 = vdist(vParam0, vParam2);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_216(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_6(iVar1, 0, 1) && func_6(iParam3, 0, 1))
			{
				if (Global_2417783.f_261[iVar0])
				{
					if (func_95(Global_2417783.f_131[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
				else if (func_95(func_8(iVar1), vParam0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2417783.f_261[iVar0])
			{
				if (func_95(Global_2417783.f_131[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (func_6(iVar1, 0, 0))
			{
				if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST(iVar1)))
				{
					if (func_95(func_8(iVar1), vParam0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_217(vector3 vParam0, var uParam1)
{
	if (uParam1->f_18)
	{
		switch (uParam1->f_26)
		{
			case 0:
				if (func_201(vParam0, uParam1->f_19, uParam1->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_120(vParam0, uParam1->f_19, uParam1->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (IS_POINT_IN_ANGLED_AREA(vParam0, uParam1->f_19, uParam1->f_22, uParam1->f_25, 0, true))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_218(vector3 vParam0, float fParam1, int iParam2, bool bParam3, vector3 vParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11)
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	vector3 vVar11;
	vector3 vVar12;
	vector3 vVar13;
	
	if (bParam11)
	{
		if (vmag(vParam4) > 0f)
		{
			if (!func_221(vParam0, *fParam1, vParam4))
			{
				*fParam1 = (*fParam1 + 180f);
			}
		}
		return vParam0;
	}
	GET_VEHICLE_NODE_PROPERTIES(vParam0, &uVar1, &uVar2);
	if (uVar2 & 1024 == 0 && !bParam6)
	{
		GET_CLOSEST_ROAD(vParam0, 1f, 1, &uVar3, &uVar3, &iVar4, &iVar5, &fVar6, iParam5);
		if (iVar4 == iVar5)
		{
			*uParam8 = 1;
		}
		if (bParam10)
		{
			if (!uVar2 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar4 + iVar5) != iParam2)
			{
				return 0f, 0f, 0f;
			}
			if (IS_THIS_MODEL_A_HELI(iParam7) && func_220(vParam0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam9 && *uParam8)
		{
			*fParam1 = (*fParam1 + 180f);
			if (*fParam1 > 360f)
			{
				*fParam1 = (*fParam1 + -360f);
			}
		}
		if (*fParam1 <= 90f || *fParam1 > 270f)
		{
			bVar8 = true;
		}
		else
		{
			bVar8 = false;
		}
		bVar9 = false;
		if (bVar8)
		{
			if (iVar4 == 0)
			{
				if (bParam10)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam2 == iVar4)
			{
				bVar9 = true;
			}
		}
		else if (iVar5 == 0)
		{
			if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam2 == iVar5)
		{
			bVar9 = true;
		}
		if (fVar6 < 0f)
		{
			fVar7 = 0f;
		}
		else
		{
			if (bVar8)
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (to_float(iVar4) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * to_float(iVar4));
				}
				if (bVar9)
				{
					if (iVar4 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar4 - 2)) * 1f));
					}
				}
				else if (iVar4 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar4 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (to_float(iVar5) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * to_float(iVar5));
				}
				if (bVar9)
				{
					if (iVar5 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar5 - 2)) * 1f));
					}
				}
				else if (iVar5 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar5 - 1)) * 1f));
				}
			}
			if (!uVar2 & 64 == 0)
			{
				fVar7 = (fVar7 + (0.95f * fVar6));
			}
			if (!uVar2 & 4 == 0 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -0.5f);
			}
			if ((!uVar2 & 32 == 0 && uVar2 & 4 == 0) && uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -1f);
			}
			if (!bParam3 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + (4.2f * -0.5f));
			}
			if (!iParam7 == 0)
			{
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_219(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_219(iParam7, 1.5f);
				}
				if (fVar10 > 1.8f)
				{
					fVar7 = (fVar7 + ((fVar10 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (vmag(vParam4) > 0f)
	{
		if (!func_221(vParam0, *fParam1, vParam4))
		{
			if (bParam3 || ((uVar2 & 1024 != 0 || vParam0.z == 0f) && bParam6))
			{
				*fParam1 = (*fParam1 + 180f);
			}
			else if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar7 < 0f)
	{
		fVar7 = 0f;
	}
	vVar0 = { _GET_OBJECT_OFFSET_FROM_COORDS(vParam0, *fParam1, fVar7, 0f, 0f) };
	if (bParam3)
	{
		if (0xA0F8A7517A273C05(vParam0, *fParam1, &vVar11))
		{
			vVar12 = { vVar11 - vParam0 };
			if (!iParam7 == 0)
			{
				vVar13 = { vVar12 / FtoV(vmag(vVar12)) };
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_219(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_219(iParam7, 1.5f);
				}
				vVar13 = { vVar13 * FtoV((fVar10 * 0.5f)) };
				vVar12 = { vVar12 - vVar13 };
				vVar11 = { vParam0 + vVar12 };
			}
			vVar13 = { vVar0 - vVar11 };
			vVar0 = { vVar11 };
		}
	}
	return vVar0;
}

float func_219(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	func_97(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
	fVar2 = (fVar1 - fVar0);
	if (fVar2 < fParam1)
	{
		return fParam1;
	}
	return fVar2;
}

int func_220(vector3 vParam0)
{
	float fVar0;
	
	if (GET_GROUND_Z_FOR_3D_COORD(vParam0.x, vParam0.y, (vParam0.z + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - vParam0.z);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_221(vector3 vParam0, float fParam1, vector3 vParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { 0f, 1f, 0f };
	func_83(&vVar0, 0f, 0f, fParam1);
	vVar1 = { vParam2 - vParam0 };
	if (func_79(vVar1, vVar0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_222(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_93(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_2412176[iVar1])
	{
		if (func_92(vParam0, &(Global_2411473[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2412176[8])
	{
		if (func_92(vParam0, &(Global_2411473[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_223(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2405071.f_26.f_18)
	{
		switch (Global_2405071.f_26.f_17)
		{
			case 0:
				if (func_201(*uParam0, Global_2405071.f_26.f_10, Global_2405071.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_120(*uParam0, Global_2405071.f_26.f_10, Global_2405071.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (IS_POINT_IN_ANGLED_AREA(*uParam0, Global_2405071.f_26.f_10, Global_2405071.f_26.f_13, Global_2405071.f_26.f_16, 0, true))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_84(*uParam0, Global_2405071.f_26.f_10, Global_2405071.f_26.f_13, Global_2405071.f_26.f_16, Global_2405071.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_224(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	float fVar8;
	bool bVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	vector3 vVar13;
	var uVar14;
	
	if (Global_2405071.f_1744 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!vmag(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_106(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_223(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2412469.f_162 = 0;
		Global_2412469.f_163 = 0;
		iVar4 = 0;
		while (iVar4 < 40)
		{
			Global_2412469[iVar4 /*3*/] = { 0f, 0f, 0f };
			Global_2412469.f_121[iVar4] = 0f;
			iVar4++;
		}
		func_225(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_2405071.f_1744)
		{
			iVar1 = Global_2405071.f_2150[iVar0];
			if (iVar1 > -1 && iVar1 < 101)
			{
				vVar2 = { Global_2405071.f_1745[iVar1 /*4*/] };
				fVar3 = Global_2405071.f_1745[iVar1 /*4*/].f_3;
				if (vmag(vVar2) > 0f)
				{
					if ((uParam2->f_57 && vdist(vVar2, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && vdist(vVar2.x, vVar2.y, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_213(vVar2, fVar3, uParam2->f_34, PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_106(uParam2->f_35, &vVar2, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar5 = uParam2->f_31;
										bVar6 = true;
										iVar7 = 1;
										fVar8 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar5 = 0;
											bVar6 = false;
											iVar7 = 0;
											fVar8 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar5 = 0;
											bVar6 = false;
											iVar7 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar8 = (fVar8 * 0.375f);
											}
										}
										else
										{
											bVar6 = true;
											iVar7 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar8 = (fVar8 * 0.375f);
												}
											}
										}
										bVar9 = false;
										if (!func_212(vVar2, fVar3, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_229(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar9 = true;
												}
											}
											else if (func_229(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_210(vVar2, fVar3, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar9 = true;
											}
										}
										if (bVar9)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar11 = 0f;
												if (uParam2->f_52)
												{
													iVar10 = func_209(vVar2, uParam2->f_54, &fVar11);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar10 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar10 < uParam2->f_53)
														{
															iVar4 = 0;
															while (iVar4 < Global_2412469.f_162)
															{
																Global_2412469[iVar4 /*3*/] = { 0f, 0f, 0f };
																Global_2412469.f_121[iVar4] = 0f;
																iVar4++;
															}
															Global_2412469.f_162 = 0;
															uParam2->f_53 = iVar10;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2412469.f_162 == 0)
														{
															Global_2412469[0 /*3*/] = { vVar2 };
															Global_2412469.f_121[0] = fVar3;
														}
														else
														{
															iVar4 = 0;
															while (iVar4 < Global_2412469.f_162 + 1)
															{
																if (iVar4 < 40)
																{
																	if (vdist2(vVar2, uParam2->f_35) < vdist2(Global_2412469[iVar4 /*3*/], uParam2->f_35))
																	{
																		func_208(vVar2, fVar3, iVar4);
																		iVar4 = Global_2412469.f_162 + 1;
																	}
																}
																iVar4++;
															}
														}
														Global_2412469.f_162++;
														if (Global_2412469.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405071.f_1744;
															}
															else if (Global_2412469.f_162 == 40)
															{
																iVar0 = Global_2405071.f_1744;
															}
														}
													}
													else
													{
														Global_2412469[Global_2412469.f_162 /*3*/] = { vVar2 };
														Global_2412469.f_121[Global_2412469.f_162] = fVar3;
														Global_2412469.f_162++;
														if (Global_2412469.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405071.f_1744;
															}
															else if (Global_2412469.f_162 == 40)
															{
																iVar0 = Global_2405071.f_1744;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { vVar2 };
												*uParam1 = fVar3;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { vVar2 };
										*uParam1 = fVar3;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_2412469.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2412469[0 /*3*/] };
				*uParam1 = Global_2412469.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2412469.f_163 > 0 && !Global_2412469.f_163 == Global_2412469.f_162)
				{
					func_206(0, uParam2);
				}
				iVar12 = GET_RANDOM_INT_IN_RANGE(0, Global_2412469.f_162);
				vVar13 = { Global_2412469[0 /*3*/] };
				uVar14 = Global_2412469.f_121[0];
				Global_2412469[0 /*3*/] = { Global_2412469[iVar12 /*3*/] };
				Global_2412469.f_121[0] = Global_2412469.f_121[iVar12];
				Global_2412469[iVar12 /*3*/] = { vVar13 };
				Global_2412469.f_121[iVar12] = uVar14;
				*uParam0 = { Global_2412469[0 /*3*/] };
				*uParam1 = Global_2412469.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_225(vector3 vParam0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2405071.f_1744)
	{
		uVar1 = func_226(vParam0, fVar0, &fVar0);
		Global_2405071.f_2150[iVar2] = uVar1;
		iVar2++;
	}
}

int func_226(vector3 vParam0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2405071.f_1744)
	{
		fVar2 = vdist2(vParam0, Global_2405071.f_1745[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam1)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam2 = fVar1;
	return iVar0;
}

bool func_227(int iParam0)
{
	return iParam0 == 50;
}

void func_228(float fParam0, float fParam1)
{
	ADD_NAVMESH_REQUIRED_REGION(fParam0, fParam1, 0.1f);
	Global_2405071.f_2464 = GET_ID_OF_THIS_THREAD();
	Global_2405071.f_2462 = 1;
	Global_2405071.f_2465 = 0xBA7F0B77D80A4EB7();
}

int func_229(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	Global_2405071.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (IS_ANY_VEHICLE_NEAR_POINT(vParam0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (IS_ANY_PED_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam2) || IS_ANY_PED_NEAR_POINT(vParam0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (bParam11)
	{
		if (GET_NUMBER_OF_FIRES_IN_RANGE(vParam0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (fParam12 > 0f)
	{
		if (func_185(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_172(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405071.f_2++;
	return 1;
}

void func_230()
{
	func_235();
	func_234();
	func_233();
	func_232();
	func_231();
}

void func_231()
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 128)
	{
		Global_2408003[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_232()
{
	struct<10> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		Global_2405071.f_2481.f_90[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_233()
{
	struct<4> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		Global_2405071.f_2481.f_57[iVar1 /*4*/] = { Var0 };
		iVar1++;
	}
}

void func_234()
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		Global_2405071.f_2481.f_6[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_235()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2405071.f_2481 = { Var0 };
}

void func_236()
{
	if (Global_2405071.f_2462)
	{
		if (GET_ID_OF_THIS_THREAD() == Global_2405071.f_2464)
		{
			REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		else
		{
			REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		Global_2405071.f_2462 = 0;
	}
}

int func_237(bool bParam0)
{
	if (IS_SCREEN_FADED_OUT())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

bool func_238(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	REQUEST_MODEL(iParam0);
	return HAS_MODEL_LOADED(iParam0);
}

int func_239(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Local_95.f_49;
			break;
	}
	return 0;
}

int func_240()
{
	if (iLocal_101 == 0)
	{
		if (IS_BIT_SET(Local_95.f_2, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_241()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	var uVar9;
	
	if (!IS_BIT_SET(Local_95.f_2, 0))
	{
		SET_BIT(&(Local_95.f_2), 0);
		if (iLocal_101 != 0)
		{
			return 1;
		}
		else if (func_6(iLocal_103, 1, 1))
		{
			if (GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) - GET_NUM_RESERVED_MISSION_OBJECTS(0)) >= func_478(iLocal_101)
			{
				if (CAN_REGISTER_MISSION_OBJECTS(func_478(iLocal_101)))
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = GET_PLAYER_PED(iLocal_103);
					iVar3 = GET_PED_NEARBY_PEDS(iVar2, &uLocal_284, -1);
					bVar4 = true;
					iVar0 = 0;
					while (iVar0 < iVar3)
					{
						if (bVar4)
						{
							iVar5 = -1;
							bVar4 = false;
							iVar1 = 0;
							while (iVar1 < func_478(iLocal_101))
							{
								if (iVar5 == -1)
								{
									if (((!NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_10[iVar1 /*7*/]) && !NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_10[iVar1 /*7*/].f_2, 1)) && !NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_10[iVar1 /*7*/].f_2, 6)) && !NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_10[iVar1 /*7*/].f_2, 8))
									{
										iVar5 = iVar1;
										bVar4 = true;
									}
								}
								iVar1++;
							}
							if (iVar5 != -1)
							{
								if (DOES_ENTITY_EXIST(uLocal_284[iVar0]))
								{
									if (!IS_ENTITY_DEAD(uLocal_284[iVar0], 0))
									{
										if (!IS_PED_A_PLAYER(uLocal_284[iVar0]))
										{
											if (func_243(GET_ENTITY_MODEL(uLocal_284[iVar0])))
											{
												if (!IS_ENTITY_A_MISSION_ENTITY(uLocal_284[iVar0]))
												{
													if (!IS_PED_IN_ANY_VEHICLE(uLocal_284[iVar0], 0))
													{
														if (func_5(GET_ENTITY_COORDS(uLocal_284[iVar0], true), GET_ENTITY_COORDS(iVar2, true), 625f))
														{
															SET_ENTITY_AS_MISSION_ENTITY(uLocal_284[iVar0], true, 0);
															Local_95.f_10[iVar5 /*7*/].f_6 = iVar0;
															SET_BIT(&(Local_95.f_10[iVar5 /*7*/].f_2), 8);
															if (!IS_BIT_SET(Local_95.f_1, 12))
															{
																Local_95.f_8 = iLocal_106;
																SET_BIT(&(Local_95.f_1), 12);
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
						iVar0++;
					}
				}
			}
		}
	}
	else if (IS_BIT_SET(Local_95.f_1, 12))
	{
		iVar6 = 0;
		iVar7 = 0;
		bVar8 = false;
		iVar6 = 0;
		while (iVar6 < func_478(iLocal_101))
		{
			if (IS_BIT_SET(Local_95.f_10[iVar6 /*7*/].f_2, 1) || IS_BIT_SET(Local_95.f_10[iVar6 /*7*/].f_2, 6))
			{
				iVar7++;
			}
			else if (IS_BIT_SET(Local_95.f_10[iVar6 /*7*/].f_2, 8))
			{
				if (!IS_ENTITY_DEAD(uLocal_284[Local_95.f_10[iVar6 /*7*/].f_6], 0))
				{
					if (IS_ENTITY_A_MISSION_ENTITY(uLocal_284[Local_95.f_10[iVar6 /*7*/].f_6]))
					{
						if (!NETWORK_HAS_CONTROL_OF_ENTITY(uLocal_284[Local_95.f_10[iVar6 /*7*/].f_6]))
						{
							NETWORK_REQUEST_CONTROL_OF_ENTITY(uLocal_284[Local_95.f_10[iVar6 /*7*/].f_6]);
							bVar8 = true;
						}
						else
						{
							REMOVE_ALL_PED_WEAPONS(uLocal_284[Local_95.f_10[iVar6 /*7*/].f_6], 1);
							Local_95.f_10[iVar6 /*7*/] = PED_TO_NET(uLocal_284[Local_95.f_10[iVar6 /*7*/].f_6]);
							SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_95.f_10[iVar6 /*7*/], 1);
							SET_BIT(&(Local_95.f_10[iVar6 /*7*/].f_2), 0);
							Local_95.f_10[iVar6 /*7*/].f_1 = iLocal_101;
							Local_95.f_10[iVar6 /*7*/].f_4 = func_69(iLocal_101);
							func_67(iVar6);
							CLEAR_BIT(&(Local_95.f_10[iVar6 /*7*/].f_2), 8);
							iVar7++;
						}
					}
					else
					{
						bVar8 = true;
					}
				}
			}
			iVar6++;
		}
		if (!bVar8 || IS_TIME_EQUAL_TO(iLocal_106, Local_95.f_8) > 5000)
		{
			if (iVar7 >= func_478(iLocal_101))
			{
				SET_BIT(&(Local_95.f_2), 4);
			}
			iVar6 = 0;
			while (iVar6 < 16)
			{
				uLocal_284[iVar6] = uVar9;
				iVar6++;
			}
			iVar6 = 0;
			while (iVar6 < func_478(iLocal_101))
			{
				if (IS_BIT_SET(Local_95.f_10[iVar6 /*7*/].f_2, 8))
				{
					func_242(&(Local_95.f_10[iVar6 /*7*/]));
					CLEAR_BIT(&(Local_95.f_10[iVar6 /*7*/].f_2), 8);
				}
				iVar6++;
			}
			CLEAR_BIT(&(Local_95.f_1), 12);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_242(int iParam0)
{
	int iVar0;
	
	if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*iParam0))
	{
		iVar0 = NET_TO_ENT(*iParam0);
		SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

int func_243(int iParam0)
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("mp_m_freemode_01") || iParam0 == joaat("mp_m_fibsec_01")) || iParam0 == joaat("mp_s_m_armoured_01")) || iParam0 == joaat("s_f_y_airhostess_01")) || iParam0 == joaat("s_f_y_baywatch_01")) || iParam0 == joaat("s_f_y_cop_01")) || iParam0 == joaat("s_f_y_ranger_01")) || iParam0 == joaat("s_f_y_scrubs_01")) || iParam0 == joaat("s_f_y_sheriff_01")) || iParam0 == joaat("s_m_m_armoured_01")) || iParam0 == joaat("s_m_m_armoured_02")) || iParam0 == joaat("s_m_m_bouncer_01")) || iParam0 == joaat("s_m_m_ciasec_01")) || iParam0 == joaat("s_m_m_chemsec_01")) || iParam0 == joaat("s_m_m_doctor_01")) || iParam0 == joaat("s_m_m_fiboffice_01")) || iParam0 == joaat("s_m_m_fiboffice_02")) || iParam0 == joaat("s_m_m_highsec_01")) || iParam0 == joaat("s_m_m_highsec_02")) || iParam0 == joaat("s_m_m_janitor")) || iParam0 == joaat("s_m_m_lsmetro_01")) || iParam0 == joaat("s_m_m_marine_01")) || iParam0 == joaat("s_m_m_marine_02")) || iParam0 == joaat("s_m_m_paramedic_01")) || iParam0 == joaat("s_m_m_pilot_01")) || iParam0 == joaat("s_m_m_pilot_02")) || iParam0 == joaat("s_m_m_postal_01")) || iParam0 == joaat("s_m_m_postal_02")) || iParam0 == joaat("s_m_m_prisguard_01")) || iParam0 == joaat("s_m_m_scientist_01")) || iParam0 == joaat("s_m_m_security_01")) || iParam0 == joaat("s_m_m_ups_01")) || iParam0 == joaat("s_m_m_ups_02")) || iParam0 == joaat("s_m_y_airworker")) || iParam0 == joaat("s_m_y_armymech_01")) || iParam0 == joaat("s_m_y_baywatch_01")) || iParam0 == joaat("s_m_y_blackops_01")) || iParam0 == joaat("s_m_y_blackops_02")) || iParam0 == joaat("s_m_y_cop_01")) || iParam0 == joaat("s_m_y_doorman_01")) || iParam0 == joaat("s_m_y_fireman_01")) || iParam0 == joaat("s_m_y_garbage")) || iParam0 == joaat("s_m_y_hwaycop_01")) || iParam0 == joaat("s_m_y_marine_01")) || iParam0 == joaat("s_m_y_marine_02")) || iParam0 == joaat("s_m_y_marine_03")) || iParam0 == joaat("s_m_y_pilot_01")) || iParam0 == joaat("s_m_y_ranger_01")) || iParam0 == joaat("s_m_y_sheriff_01")) || iParam0 == joaat("s_m_y_swat_01")) || iParam0 == joaat("s_m_y_uscg_01")) || iParam0 == joaat("s_m_y_valet_01")) || iParam0 == joaat("s_m_y_waiter_01")) || iParam0 == joaat("u_m_m_jewelsec_01")) || iParam0 == 337826907)
	{
		return 0;
	}
	return 1;
}

int func_244()
{
	if (IS_BIT_SET(Local_95.f_1, 6))
	{
		return 1;
	}
	else if (iLocal_101 == 0)
	{
		Local_95.f_49 = func_245(Local_95.f_36, 1);
		SET_BIT(&(Local_95.f_1), 6);
		return 1;
	}
	else
	{
		SET_BIT(&(Local_95.f_1), 6);
		return 1;
	}
	return 0;
}

int func_245(vector3 vParam0, int iParam1)
{
	int iVar0;
	
	if (func_246(vParam0, 1301f, -1696f, 300f, 350f, 0))
	{
		return joaat("g_m_y_mexgoon_01");
	}
	else if (func_246(vParam0, 1100f, -196f, 300f, 350f, 0) || func_246(vParam0, 77f, 3657f, 100f, 150f, 0))
	{
		return joaat("g_m_y_lost_01");
	}
	else if (func_246(vParam0, 208f, -1835f, 200f, 250f, 0))
	{
		return joaat("g_m_y_ballaorig_01");
	}
	else if (func_246(vParam0, -26f, -1450f, 200f, 250f, 0))
	{
		return joaat("g_m_y_famca_01");
	}
	else if (func_246(vParam0, -654f, -922f, 300f, 350f, 0))
	{
		return joaat("g_m_y_korean_02");
	}
	else if (func_246(vParam0, 1840f, 3657f, 450f, 500f, 0))
	{
		return joaat("a_m_m_hillbilly_02");
	}
	else if (func_246(vParam0, 550f, -1885f, 200f, 250f, 0))
	{
		return joaat("g_m_y_salvagoon_01");
	}
	else if (iParam1 == 1)
	{
		iVar0 = GET_RANDOM_INT_IN_RANGE(0, 100);
		if (iVar0 < 33)
		{
			return joaat("mp_g_m_pros_01");
		}
		else if (iVar0 >= 66)
		{
			return joaat("g_m_m_armgoon_01");
		}
		else
		{
			return joaat("g_m_m_chigoon_01");
		}
		if (vParam0.y > 800f)
		{
			iVar0 = GET_RANDOM_INT_IN_RANGE(0, 100);
			if (iVar0 < 33)
			{
				return joaat("a_m_m_hillbilly_02");
			}
		}
	}
	return joaat("mp_g_m_pros_01");
}

bool func_246(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	return GET_DISTANCE_BETWEEN_COORDS(vParam0, vParam1, bParam3) <= fParam2;
}

void func_247(int iParam0)
{
	if (IS_PED_INJURED(iParam0))
	{
	}
	Local_95.f_36 = { GET_ENTITY_COORDS(iParam0, true) };
	if (func_248(iParam0, 0))
	{
		SET_BIT(&(Local_95.f_1), 17);
	}
	else
	{
		CLEAR_BIT(&(Local_95.f_1), 17);
	}
}

int func_248(int iParam0, int iParam1)
{
	if (DOES_ENTITY_EXIST(iParam0))
	{
		if (!IS_ENTITY_DEAD(iParam0, 0) || iParam1)
		{
			if (IS_ENTITY_IN_WATER(iParam0))
			{
				if (GET_ENTITY_SUBMERGED_LEVEL(iParam0) >= 0.7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_249()
{
	bool bVar0;
	
	if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (IS_BIT_SET(Local_95.f_1, 7))
		{
			return 1;
		}
		else
		{
			bVar0 = false;
			switch (iLocal_101)
			{
				case 0:
					if (IS_BIT_SET(Local_95.f_2, 11))
					{
						if (func_6(iLocal_103, 1, 1))
						{
							if (vdist2(func_8(iLocal_103), Local_95.f_39) > 625f)
							{
								CLEAR_BIT(&(Local_95.f_2), 11);
								CLEAR_BIT(&iLocal_98, 8);
							}
						}
					}
					else
					{
						if (func_6(iLocal_103, 1, 1))
						{
							bVar0 = true;
							if (func_252())
							{
								bVar0 = false;
							}
						}
						if (bVar0)
						{
							func_62();
						}
						else
						{
							func_63();
						}
						if (IS_BIT_SET(Local_95.f_1, 5))
						{
							if (func_251())
							{
								func_63();
								SET_BIT(&(Local_95.f_1), 7);
							}
						}
					}
					break;
				
				case 1:
					if (func_6(iLocal_103, 1, 1))
					{
						bVar0 = true;
						if (func_250())
						{
							bVar0 = false;
						}
					}
					if (bVar0)
					{
						func_62();
					}
					else
					{
						func_63();
					}
					if (IS_BIT_SET(Local_95.f_1, 5))
					{
						if (IS_TIME_EQUAL_TO(iLocal_106, Local_95.f_5) > 30000)
						{
							func_63();
							SET_BIT(&(Local_95.f_1), 7);
						}
					}
					break;
				}
			}
	}
	return 0;
}

int func_250()
{
	int iVar0;
	
	iVar0 = GET_PLAYER_PED(iLocal_103);
	if (((((IS_ENTITY_IN_AIR(iVar0) || IS_ENTITY_IN_AIR(iVar0)) || func_29(iLocal_103, 1, 1)) || func_41(iLocal_103, 0)) || func_41(iLocal_103, 7)) || func_28(iLocal_103))
	{
		return 1;
	}
	if (func_117(iLocal_103, 1))
	{
		if (iLocal_103 > -1)
		{
			if (Global_1590446[iLocal_103 /*871*/] != 1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_251()
{
	if (!IS_BIT_SET(Local_95.f_1, 18))
	{
		if (IS_TIME_EQUAL_TO(iLocal_106, Local_95.f_5) > 5000)
		{
			SET_BIT(&(Local_95.f_1), 18);
			return 1;
		}
	}
	else if (IS_TIME_EQUAL_TO(iLocal_106, Local_95.f_5) > 60000)
	{
		return 1;
	}
	return 0;
}

int func_252()
{
	int iVar0;
	
	iVar0 = GET_PLAYER_PED(iLocal_103);
	if (((((((((GET_ENTITY_SPEED(iVar0) > 10f || GET_ENTITY_SPEED(iVar0)) || GET_ENTITY_SPEED(iVar0)) || func_29(iLocal_103, 1, 1)) || func_61(iLocal_103)) || func_41(iLocal_103, 0)) || func_41(iLocal_103, 7)) || func_28(iLocal_103)) || Global_2424073[iLocal_103 /*421*/].f_238) || func_60(GET_ENTITY_SPEED(iLocal_103), joaat("titan")))
	{
		return 1;
	}
	if (func_117(iLocal_103, 1))
	{
		if (iLocal_103 > -1)
		{
			if (Global_1590446[iLocal_103 /*871*/] != 1)
			{
				return 1;
			}
		}
	}
	if (iLocal_103 != -1)
	{
		if (IS_BIT_SET(Local_97[iLocal_103 /*5*/].f_1, 4))
		{
			return 1;
		}
	}
	return 0;
}

void func_253()
{
	if (!IS_BIT_SET(Local_95.f_1, 14))
	{
		Local_95.f_9 = iLocal_106;
		SET_BIT(&(Local_95.f_1), 14);
	}
}

void func_254()
{
	if (Local_95.f_44 != Local_97[iLocal_102 /*5*/].f_4)
	{
		Local_95.f_44 = Local_97[iLocal_102 /*5*/].f_4;
	}
}

void func_255()
{
	if (!IS_BIT_SET(Local_95.f_1, 10))
	{
		Local_95.f_45 = func_478(iLocal_101);
		Local_95.f_46 = 0;
		Local_95.f_47 = 0;
		SET_BIT(&(Local_95.f_1), 10);
	}
}

void func_256()
{
	func_257();
	if (!IS_BIT_SET(Local_95.f_1, 8))
	{
		if (IS_BIT_SET(Local_95.f_2, 7))
		{
			if (IS_TIME_EQUAL_TO(iLocal_106, Local_95.f_7) > 300000)
			{
				SET_BIT(&(Local_95.f_2), 8);
			}
		}
	}
}

void func_257()
{
	if (!IS_BIT_SET(Local_95.f_2, 7))
	{
		Local_95.f_7 = iLocal_106;
		SET_BIT(&(Local_95.f_2), 7);
	}
}

void func_258()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	SET_BIT(&iLocal_98, 7);
	if (IS_BIT_SET(Local_95.f_3, 1))
	{
	}
	if (IS_BIT_SET(Local_95.f_3, 2))
	{
	}
	if (IS_BIT_SET(Local_95.f_3, 3))
	{
	}
	if (IS_BIT_SET(Local_95.f_3, 9))
	{
	}
	if (IS_BIT_SET(Local_95.f_3, 4))
	{
	}
	if (IS_BIT_SET(Local_95.f_3, 5))
	{
	}
	if (IS_BIT_SET(Local_95.f_3, 11))
	{
		if (PLAYER_ID() == iLocal_102)
		{
			CLEAR_BIT(&iLocal_98, 7);
			if (Local_95.f_50 || Local_95.f_52)
			{
				SET_BIT(&iLocal_98, 7);
			}
			else if (func_373("MPCT_MERts", "FM_MERRYWEATHER", 85))
			{
				SET_BIT(&iLocal_98, 7);
			}
		}
	}
	if (IS_BIT_SET(Local_95.f_3, 6))
	{
		if (PLAYER_ID() == iLocal_102)
		{
			CLEAR_BIT(&iLocal_98, 7);
			if (Local_95.f_50 || Local_95.f_52)
			{
				SET_BIT(&iLocal_98, 7);
			}
			else if (func_373("MPCT_MERtd", "FM_MERRYWEATHER", 85))
			{
				SET_BIT(&iLocal_98, 7);
			}
		}
	}
	if (IS_BIT_SET(Local_95.f_3, 7))
	{
		if (PLAYER_ID() == iLocal_102)
		{
			CLEAR_BIT(&iLocal_98, 7);
			if (func_339())
			{
				if (!Local_95.f_50)
				{
					if (Local_95.f_52)
					{
						iLocal_285 = func_338(Local_95.f_53);
					}
					else
					{
						iLocal_285 = func_334(12);
					}
					if (iLocal_285 > 0)
					{
						func_332(iLocal_285, 1, 0, 0f);
						func_317(iLocal_285, 4, 1, 1);
					}
					SET_BIT(&iLocal_98, 7);
				}
				else
				{
					SET_BIT(&iLocal_98, 7);
				}
			}
		}
	}
	if (IS_BIT_SET(Local_95.f_3, 0))
	{
		if (PLAYER_ID() == iLocal_102)
		{
			if (!IS_BIT_SET(Local_95.f_2, 1))
			{
				CLEAR_BIT(&iLocal_98, 7);
				if (func_373("MPCT_mugfail", "LAMAR", 19))
				{
					SET_BIT(&iLocal_98, 7);
				}
			}
		}
		else if (PLAYER_ID() == iLocal_103)
		{
			if (IS_BIT_SET(Local_95.f_2, 1))
			{
				if (IS_BIT_SET(Local_95.f_2, 12))
				{
					iVar0 = round((IntToFloat(Global_262145.f_6642) * Global_262145.f_4294));
					func_274(0, "XPT_MEDIUMT", -1859646258, 757237446, iVar0, 1, -1, 0);
					func_260(47, 1);
				}
			}
		}
	}
	if (IS_BIT_SET(Local_95.f_3, 8))
	{
		if (PLAYER_ID() == iLocal_102)
		{
			CLEAR_BIT(&iLocal_98, 7);
			if (func_339())
			{
				if (iLocal_101 == 0)
				{
					iLocal_285 = (func_334(2) * func_478(iLocal_101));
					iVar1 = 3;
				}
				else
				{
					if (Local_95.f_52)
					{
						iLocal_285 = func_338(Local_95.f_53);
					}
					else
					{
						iLocal_285 = func_334(12);
					}
					iVar1 = 4;
				}
				if (!Local_95.f_50)
				{
					if (iLocal_285 > 0)
					{
						func_332(iLocal_285, 1, 0, 0f);
						func_317(iLocal_285, iVar1, 1, 0);
					}
					SET_BIT(&iLocal_98, 7);
				}
				else
				{
					SET_BIT(&iLocal_98, 7);
				}
			}
		}
	}
	if (IS_BIT_SET(Local_95.f_3, 10))
	{
		if (PLAYER_ID() == iLocal_102)
		{
			CLEAR_BIT(&iLocal_98, 7);
			if (func_339())
			{
				if (iLocal_101 == 0)
				{
					iLocal_285 = (func_334(2) * func_478(iLocal_101));
					iVar2 = 3;
				}
				else
				{
					if (Local_95.f_52)
					{
						iLocal_285 = func_338(Local_95.f_53);
					}
					else
					{
						iLocal_285 = func_334(12);
					}
					iVar2 = 4;
				}
				if (!Local_95.f_50)
				{
					if (iLocal_285 > 0)
					{
						func_332(iLocal_285, 1, 0, 0f);
						func_317(iLocal_285, iVar2, 1, 0);
					}
					SET_BIT(&iLocal_98, 7);
				}
				else
				{
					SET_BIT(&iLocal_98, 7);
				}
			}
		}
	}
	if (IS_BIT_SET(iLocal_98, 7))
	{
		func_259();
	}
}

void func_259()
{
	CLEAR_BIT(&(Global_1590446[CLEAR_BIT() /*871*/].f_143), iLocal_101);
	Global_1590446[NETWORK_PLAYER_ID_TO_INT() /*871*/].f_144 = -1;
	if (iLocal_101 == 1)
	{
		if (IS_INCIDENT_VALID(uLocal_283))
		{
			DELETE_INCIDENT(uLocal_283);
		}
	}
	func_507();
	func_539();
}

int func_260(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_261(iParam0, iParam1);
}

int func_261(int iParam0, int iParam1)
{
	if (func_273(14) && !func_272(iParam0))
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
	if (func_271(&Global_4269915))
	{
		if (func_269(&Global_4269915, iParam0))
		{
			return 0;
		}
		if (func_262(&Global_4269915, iParam0))
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

int func_262(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_273(14) && !func_272(iParam1))
	{
		return 0;
	}
	if (func_269(uParam0, iParam1))
	{
		return 0;
	}
	if (func_268(uParam0) < 0f)
	{
		func_267(uParam0, 0);
	}
	func_265(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_263(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_263(var uParam0, int iParam1)
{
	int iVar0;
	
	if (HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_273(14) && !func_272(iParam1))
	{
		return 0;
	}
	if (func_269(uParam0, iParam1))
	{
		return 0;
	}
	if (func_268(uParam0) < 0f)
	{
		func_267(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_264(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_264(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_265(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_266(uParam0, iVar0);
		iVar0++;
	}
	func_267(uParam0, (Global_4269914 - 0.5f));
}

void func_266(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_267(var uParam0, float fParam1)
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

float func_268(var uParam0)
{
	return uParam0->f_80;
}

bool func_269(var uParam0, int iParam1)
{
	return func_270(uParam0, iParam1) != -1;
}

int func_270(var uParam0, int iParam1)
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

bool func_271(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_272(int iParam0)
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

bool func_273(int iParam0)
{
	return Global_41396 == iParam0;
}

var func_274(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_275(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_275(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_276(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_276(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (iParam1 == 0)
	{
		if (func_316(PLAYER_ID()) || func_315(PLAYER_ID()))
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
		else if (func_313() || func_311(PLAYER_ID()))
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
		else if (func_310())
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
	if (func_309(sParam2))
	{
	}
	if (func_308())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_306(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_305(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_303(0, &iVar1);
					break;
				
				case 3:
					func_303(1, &iVar1);
					break;
				
				case 1:
					func_301(&iVar1);
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
			func_298(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_286((func_296(PLAYER_ID(), 1) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1590446[PLAYER_ID() /*871*/].f_39.f_2 != -1)
				{
					func_298(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_281(iVar1);
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
				func_277((func_279(PLAYER_ID()) + iVar1));
			}
			else
			{
				func_277((func_279(PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_277(int iParam0)
{
	if (func_308())
	{
		Global_1590446[PLAYER_ID() /*871*/].f_211.f_5 = iParam0;
		func_278(joaat("mpply_globalxp"), iParam0);
	}
}

void func_278(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_279(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_6(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER_ID())
			{
				return func_280(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1590446[iParam0 /*871*/].f_211.f_5;
			}
		}
		else
		{
			return func_280(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_280(int iParam0)
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

void func_281(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_142(PLAYER_ID()) };
	if (_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_284(func_285(&Var0));
			if (iVar1 == 0)
			{
				func_283(&Global_1384134, iParam0);
				func_282(joaat("mpply_crew_local_xp_0"), Global_1384134);
			}
			else if (iVar1 == 1)
			{
				func_283(&Global_1384135, iParam0);
				func_282(joaat("mpply_crew_local_xp_1"), Global_1384135);
			}
			else if (iVar1 == 2)
			{
				func_283(&Global_1384136, iParam0);
				func_282(joaat("mpply_crew_local_xp_2"), Global_1384136);
			}
			else if (iVar1 == 3)
			{
				func_283(&Global_1384137, iParam0);
				func_282(joaat("mpply_crew_local_xp_3"), Global_1384137);
			}
			else if (iVar1 == 4)
			{
				func_283(&Global_1384138, iParam0);
				func_282(joaat("mpply_crew_local_xp_4"), Global_1384138);
			}
		}
	}
}

void func_282(int iParam0, int iParam1)
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

void func_283(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_284(int iParam0)
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

int func_285(var uParam0)
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

void func_286(int iParam0, int iParam1, int iParam2)
{
	if (func_308())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1384279[func_295(-1)])
				{
					PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1384279[func_295(-1)])
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
		if (func_294(PLAYER_ID()))
		{
			Global_1590446[PLAYER_ID() /*871*/].f_211.f_1 = iParam0;
			Global_1590446[PLAYER_ID() /*871*/].f_211.f_6 = func_292(iParam0, 1);
		}
		func_291(639, iParam0, -1, 1);
		func_290(640, func_292(iParam0, 1), -1, 1, 0);
		Global_1384279[func_295(-1)] = iParam0;
		func_287(-1109644434, 7, 0);
	}
}

void func_287(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_289(iParam1, iParam2))
	{
		iVar0 = func_288();
		Global_2458876[iVar0] = iParam1;
		Global_2458887[iVar0] = iParam0;
	}
}

int func_288()
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

int func_289(int iParam0, var uParam1)
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

void func_290(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_295(iParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_291(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2542527[iParam0 /*3*/][func_295(iParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1384207[func_295(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1384213[func_295(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1384219[func_295(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1384225[func_295(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1384177[func_295(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1384183[func_295(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1384189[func_295(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1384195[func_295(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1384147[func_295(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1384153[func_295(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1384159[func_295(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1384165[func_295(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1384237[func_295(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1384243[func_295(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1384249[func_295(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1384255[func_295(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1384267[func_295(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1384273[func_295(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1384279[func_295(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1384285[func_295(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2578592[0 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2578592[1 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2578592[2 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2578592[3 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 9509:
			Global_2578729[func_295(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1384291[func_295(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1384297[func_295(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1384303[func_295(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1384315[func_295(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2578659[0 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2578659[1 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2578659[2 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2578659[3 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2578659[4 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2578732[0 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2578732[1 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2578732[2 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2578732[3 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2578732[4 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2578748[0 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2578748[1 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2578748[2 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2578748[3 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2578748[4 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2578659[5 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2578592[4 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2578764[func_295(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2578773[func_295(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2578767[func_295(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2578776[func_295(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2578770[func_295(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2578779[func_295(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2578782[func_295(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2578659[6 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2578592[5 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2578659[7 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2578592[6 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2578659[8 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2578592[7 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2578659[9 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2578592[8 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2578659[10 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2578592[9 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2578659[11 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2578592[10 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2578659[12 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2578592[11 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2578659[13 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2578592[12 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2578659[14 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2578592[13 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2578659[15 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2578592[14 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2578659[16 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2578592[15 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2578659[17 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2578592[16 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2578592[17 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2578592[18 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2578592[19 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2578592[20 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2578785[func_295(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2578788[func_295(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2578791[func_295(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2578794[func_295(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2578797[func_295(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2578800[func_295(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2578803[func_295(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2578806[func_295(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2578809[func_295(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2578812[func_295(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2578815[func_295(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2578818[func_295(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2578821[func_295(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2578824[func_295(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2578592[21 /*3*/][func_295(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_292(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_293(iParam0, 0);
}

int func_293(int iParam0, int iParam1)
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

int func_294(int iParam0)
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

int func_295(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_200();
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

int func_296(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_297(iParam0);
}

int func_297(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER_ID())
			{
				return Global_1384279[func_295(-1)];
			}
			else if (func_294(iParam0))
			{
				return Global_1590446[iParam0 /*871*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1384279[func_295(-1)];
	}
	return 0;
}

void func_298(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_300(iParam0, func_295(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_299(iParam0))
	{
		func_290(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_291(iParam0, iVar0, iParam2, 1);
	}
}

int func_299(int iParam0)
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

int func_300(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_295(iParam1)];
	if (STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_301(int iParam0)
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
				if (GET_PLAYER_TEAM(iVar5) == iVar1 || func_144(GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER_ID())
					{
						if (func_143(PLAYER_ID(), iVar5))
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
		iVar6 = round((func_302(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_302(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_302(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_303(bool bParam0, int iParam1)
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
				if (func_6(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER_ID())
					{
						iVar1++;
						if (func_143(PLAYER_ID(), iVar4))
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
			if (func_6(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER_ID())
				{
					if (func_304(PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_143(PLAYER_ID(), iVar4))
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
		iVar5 = round((func_302(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_302(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_304(int iParam0, int iParam1)
{
	return vdist(func_8(iParam0), func_8(iParam1));
	return 0f;
}

int func_305(int iParam0)
{
	int iVar0;
	
	if (GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_302(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_306(int iParam0)
{
	if (iParam0 < 0)
	{
		if (ABSI(iParam0) > func_296(ABSI(), 1))
		{
			iParam0 = -func_296(PLAYER_ID(), 1);
		}
	}
	if (func_307(8000, 0, 0) > 0)
	{
		if (func_307(8000, 0, 0) < (iParam0 + func_296(PLAYER_ID(), 1)))
		{
			iParam0 = (func_307(8000, 0, 0) - func_296(PLAYER_ID(), 1));
		}
	}
	return iParam0;
}

int func_307(int iParam0, bool bParam1, int iParam2)
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

int func_308()
{
	return 1;
}

int func_309(char* sParam0)
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

bool func_310()
{
	return Global_2448961.f_19;
}

int func_311(int iParam0)
{
	return func_312(func_38(iParam0));
}

int func_312(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_313()
{
	if (NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_175();
	}
	return func_314(Global_4456448.f_154360);
}

int func_314(int iParam0)
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

bool func_315(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 2;
}

bool func_316(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 7;
}

void func_317(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;
	struct<8> Var1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, func_331(iParam1), 16);
	StringCopy(&Var1, func_330(iParam2), 32);
	switch (iParam1)
	{
		case 0:
			iVar2 = 1287308202;
			break;
		
		case 1:
			iVar2 = 691372038;
			break;
		
		case 2:
			iVar2 = 1480707108;
			break;
		
		case 3:
			iVar2 = 1512499951;
			break;
		
		case 4:
			iVar2 = 562283735;
			break;
		
		case 5:
			iVar2 = -154732333;
			break;
		
		case 6:
			iVar2 = -1362660491;
			break;
		
		case 7:
			iVar2 = 645708827;
			break;
		
		case 8:
			iVar2 = 767907967;
			break;
		
		case 9:
			iVar2 = -1970151306;
			break;
		
		case 10:
			iVar2 = 718859568;
			break;
		
		case 11:
			iVar2 = -1955564771;
			break;
		
		case 12:
			iVar2 = 892388724;
			break;
		
		case 13:
			iVar2 = -1426920838;
			break;
		
		case 14:
			iVar2 = -664597565;
			break;
		
		case 15:
			iVar2 = 1864522104;
			break;
		
		case 16:
			iVar2 = 215608230;
			break;
		
		case 17:
			iVar2 = -1100963799;
			break;
	}
	if (func_50())
	{
		func_318(iVar2, iParam0, &iVar3, bParam3, bParam3, 0);
		Global_4263810[iVar3 /*84*/].f_13.f_40 = { Var0 };
		Global_4263810[iVar3 /*84*/].f_13.f_44 = { Var1 };
	}
	else
	{
		NETWORK_REFUND_CASH(iParam0, &Var0, &Var1, bParam3);
	}
}

void func_318(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_50())
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
				func_319(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_319(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_319(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_319(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_319(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_50())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!_NETWORK_SHOP_GET_TRANSACTIONS_ENABLED_FOR_CHARACTER(func_200()) || _NETWORK_SHOP_GET_TRANSACTIONS_ENABLED_FOR_CHARACTER())
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
			*uParam0 = func_326(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_325(1, iParam4);
			Global_4264385 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_320(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_320(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			SET_BIT(&(Global_2424073[SET_BIT() /*421*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_321(iParam0);
	}
}

void func_321(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_50())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_324(iParam0))
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
		func_322(&(Global_4263810[iParam0 /*84*/]));
	}
}

void func_322(var uParam0)
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
	func_323(&(uParam0->f_13));
	func_323(&(uParam0->f_13.f_13));
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

void func_323(var uParam0)
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

int func_324(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263810[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

void func_325(int iParam0, int iParam1)
{
	Global_2461338 = iParam1;
	Global_2461337 = iParam0;
}

int func_326(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263810[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_50())
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
			if (iParam1 == -1135378931 && iParam10)
			{
				func_327(Global_4263810[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_327(struct<66> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_329(vVar0.y);
	if ((Global_262145.f_23556 && !Global_262145.f_23557) && !Global_262145.f_23558)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_328();
		TRIGGER_SCRIPT_EVENT(1, &vVar0, 35, iVar1);
	}
}

void func_328()
{
	REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_329(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

char* func_330(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NOTREACHTARGET";
			break;
		
		case 1:
			return "TARGET_ESCAPE";
			break;
		
		case 2:
			return "DELIVERY_FAIL";
			break;
		
		case 3:
			return "NOT_USED";
			break;
		
		case 4:
			return "TEAM_QUIT";
			break;
		
		case 5:
			return "SERVER_ERROR";
			break;
		
		case 6:
			return "RECEIVE_LJ_L";
			break;
		
		case 8:
			return "CHALLENGE_PLAYER_LEFT";
			break;
	}
	return "DEFAULT";
}

char* func_331(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BACKUP_VAGOS";
		
		case 1:
			return "BACKUP_LOST";
		
		case 2:
			return "BACKUP_FAMILIES";
		
		case 3:
			return "HIRE_MUGGER";
		
		case 4:
			return "HIRE_MERCENARY";
		
		case 5:
			return "BUY_CARDROPOFF";
		
		case 6:
			return "HELI_PICKUP";
		
		case 7:
			return "BOAT_PICKUP";
		
		case 8:
			return "CLEAR_WANTED";
		
		case 9:
			return "HEAD_2_HEAD";
		
		case 10:
			return "CHALLENGE";
		
		case 11:
			return "SHARE_LAST_JOB";
		
		case 13:
			return "REFUNDAPPEA";
		
		case 14:
			return "AMMO_DROP_REF";
		
		case 15:
			return "ORBITAL_MANUAL";
		
		case 16:
			return "ORBITAL_AUTO";
		
		case 17:
			return "ARENA_SPEC_BOX";
		
		default:
	}
	return "DEFAULT";
}

void func_332(int iParam0, int iParam1, int iParam2, float fParam3)
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
		func_333(iVar1, 0);
	}
}

void func_333(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

int func_334(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_337(iParam0) >= 0)
	{
		iVar0 = func_337(iParam0);
	}
	else
	{
		iVar0 = func_335(iParam0);
	}
	return iVar0;
}

int func_335(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1000;
			break;
		
		case 10:
			return 5000;
			break;
		
		case 11:
			return 8000;
			break;
		
		case 8:
			return 1000;
			break;
		
		case 0:
			return 500;
			break;
		
		case 9:
			return 250;
			break;
		
		case 13:
			return 1000;
			break;
		
		case 12:
			return 7500;
			break;
		
		case 2:
			return 1000;
			break;
		
		case 14:
			return 500;
			break;
		
		case 20:
			if (func_336())
			{
				return 0;
			}
			if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) == 1)
			{
				return 200;
			}
			else if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) == 2)
			{
				return 400;
			}
			else if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) == 3)
			{
				return 600;
			}
			else if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) == 4)
			{
				return 800;
			}
			else if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) == 5)
			{
				return 1000;
			}
			break;
		
		case 6:
			return 500;
			break;
		
		case 22:
			return 200;
			break;
		
		case 23:
			return 400;
			break;
		
		case 24:
			return 700;
			break;
		
		case 25:
			return 100;
			break;
		
		case 26:
			return 1000;
			break;
		
		case 57:
			return 700;
			break;
		
		case 35:
			return 5000;
			break;
		
		case 15:
			return 0;
			break;
		
		case 17:
			return 0;
			break;
		
		case 18:
			return 0;
			break;
		
		case 19:
			return 0;
			break;
		
		case 21:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 39:
			return 200;
			break;
		
		case 40:
			return 1000;
		
		case 41:
			return 750;
		
		case 42:
			return 0;
	}
	return 0;
}

bool func_336()
{
	return IS_BIT_SET(func_300(6424, -1, 0), 19);
}

int func_337(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_6645;
			break;
		
		case 10:
			return Global_262145.f_4118;
			break;
		
		case 11:
			return Global_262145.f_4119;
			break;
		
		case 8:
			return Global_262145.f_4116;
			break;
		
		case 0:
			return Global_262145.f_4102;
			break;
		
		case 9:
			return Global_262145.f_4117;
			break;
		
		case 13:
			return Global_262145.f_4121;
			break;
		
		case 12:
			return Global_262145.f_4120;
			break;
		
		case 2:
			return Global_262145.f_4112;
			break;
		
		case 14:
			return Global_262145.f_4122;
			break;
		
		case 20:
			if (func_336())
			{
				return 0;
			}
			if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) == 1)
			{
				return Global_262145.f_6652;
			}
			else if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) == 2)
			{
				return Global_262145.f_6653;
			}
			else if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) == 3)
			{
				return Global_262145.f_6654;
			}
			else if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) == 4)
			{
				return Global_262145.f_6655;
			}
			else if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) == 5)
			{
				return Global_262145.f_6656;
			}
			break;
		
		case 6:
			return Global_262145.f_4115;
			break;
		
		case 22:
			return Global_262145.f_4128;
			break;
		
		case 23:
			return Global_262145.f_4129;
			break;
		
		case 24:
			return Global_262145.f_4130;
			break;
		
		case 25:
			return Global_262145.f_4131;
			break;
		
		case 26:
			return Global_262145.f_4132;
			break;
		
		case 35:
			return Global_262145.f_7221;
			break;
		
		case 15:
			return Global_262145.f_6646;
			break;
		
		case 17:
			return Global_262145.f_6646;
			break;
		
		case 18:
			return Global_262145.f_6646;
			break;
		
		case 19:
			return Global_262145.f_6646;
			break;
		
		case 21:
			return Global_262145.f_6646;
			break;
		
		case 36:
			return Global_262145.f_7688;
			break;
		
		case 39:
			return -1;
			break;
		
		case 40:
			return Global_262145.f_12872;
			break;
		
		case 41:
			return Global_262145.f_12873;
			break;
		
		case 42:
			return Global_262145.f_12874;
			break;
		
		case 43:
			return Global_262145.f_15417;
			break;
		
		case 44:
			return Global_262145.f_15419;
			break;
		
		case 57:
			return Global_262145.f_4130;
			break;
		
		case 58:
			return Global_262145.f_24933;
			break;
		
		case 62:
			return Global_262145.f_24934;
			break;
	}
	return 0;
}

int func_338(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_23444;
		
		case 2:
			return Global_262145.f_23445;
		
		case 3:
			return Global_262145.f_23446;
		
		default:
	}
	return 9999999;
}

int func_339()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	
	if (Local_95.f_50 || Local_95.f_52)
	{
		if (!Local_95.f_51)
		{
			if (!IS_BIT_SET(Local_95.f_3, 7))
			{
				func_340("HS_UNABLE", iLocal_103, 0, 0, 0, 1, 1, 0);
			}
		}
		return 1;
	}
	switch (iLocal_101)
	{
		case 0:
			sVar0 = "MPCT_muglost";
			sVar1 = "LAMAR";
			iVar2 = 19;
			break;
		
		case 1:
			sVar0 = "MPCT_MERloc";
			sVar1 = "FM_MERRYWEATHER";
			iVar2 = 85;
			break;
	}
	if (func_373(sVar0, sVar1, iVar2))
	{
		return 1;
	}
	return 0;
}

int func_340(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = GET_PLAYER_TEAM(iParam1);
	if (_0x3B39236746714134(_0x3B39236746714134(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, GET_PLAYER_NAME(iParam1), 64);
		}
		if (IS_STRING_NULL_OR_EMPTY(&Var2))
		{
		}
		_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
		if ((iVar1 != -1 && NETWORK_IS_ACTIVITY_SESSION()) && iVar1 < 4)
		{
			if (Global_4456448.f_149437[iVar1] != -1)
			{
				_SET_NOTIFICATION_COLOR_NEXT(func_371(iVar1, iParam1, 0));
			}
			else
			{
				_SET_NOTIFICATION_COLOR_NEXT(func_348(iParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			_SET_NOTIFICATION_COLOR_NEXT(func_348(iParam1, -2, 1, 0, 0));
		}
		ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_346(&Var2));
		if (!bParam4)
		{
			iVar0 = END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
		}
		else
		{
			Global_2507671 = { func_142(iParam1) };
			if (NETWORK_CLAN_PLAYER_GET_DESC(&Global_2507601, 35, &Global_2507671))
			{
				iVar3 = 0;
				if (ARE_STRINGS_EQUAL(&(Global_2507601.f_22), "Leader") && Global_2507601.f_30 == 0)
				{
					iVar3 = 1;
				}
				if (Global_2507601.f_21 > 0)
				{
					iVar4 = 0;
				}
				else
				{
					iVar4 = 1;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var2 = { func_345(&Var2) };
					}
					iVar0 = END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(iVar4, END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(&Global_2507601, 35), &(Global_2507601.f_17), Global_2507601.f_30, iVar3, 0, Global_2507601, &Var2, Global_1314030, Global_1314031, Global_1314032);
				}
				else
				{
					iVar0 = _DRAW_NOTIFICATION_APARTMENT_INVITE(iVar4, _DRAW_NOTIFICATION_APARTMENT_INVITE(&Global_2507601, 35), &(Global_2507601.f_17), Global_2507601.f_30, iVar3, 0, Global_2507601, Global_1314030, Global_1314031, Global_1314032);
				}
			}
			else
			{
				iVar0 = END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
			}
		}
		func_341(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_341(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_344() || !NETWORK_IS_ACTIVITY_SESSION()) || !func_198(NETWORK_IS_ACTIVITY_SESSION(), 0))
	{
		return;
	}
	iVar0 = func_342(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1671392.f_5[iVar0 /*53*/] = iParam0;
		Global_1671392.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1671392.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1671392.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1671392.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1671392.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1671392.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1671392.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1671392.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1671392.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1671392.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1671392.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_342(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1671392 - 1))
	{
		if (iParam0 > Global_1671392.f_5[iVar0 /*53*/].f_1)
		{
			func_343(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1671392++;
	if (Global_1671392 > 5)
	{
		Global_1671392 = 5;
		return Global_1671392;
	}
	return (Global_1671392 - 1);
}

void func_343(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1671392.f_5[iVar0 /*53*/] = { Global_1671392.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_344()
{
	return IS_DLC_PRESENT(-1762644250);
}

struct<16> func_345(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_346(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_347(&cVar0);
}

var func_347(char[4] cParam0)
{
	return cParam0;
}

int func_348(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_145(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_149437[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_145(PLAYER_ID()) || (func_370() && func_369())) && !PLAYER_ID(Global_2531497.f_4591, 31)) && !bParam4)
	{
		iVar1 = func_368();
		if (DOES_ENTITY_EXIST(iVar1))
		{
			if (IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_6(NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_149437[iParam1] != -1)
							{
								return func_371(iParam1, iParam0, 0);
							}
							else
							{
								return func_360(iParam0, NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_360(iParam0, NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_149437[iParam1] != -1)
				{
					return func_371(iParam1, iParam0, 0);
				}
				else
				{
					return func_349(0, -1, 0);
				}
			}
			else
			{
				return func_349(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_149437[iParam1] != -1)
		{
			return func_371(iParam1, iParam0, 0);
		}
		else
		{
			return func_360(iParam0, PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_360(iParam0, PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_349(bool bParam0, int iParam1, bool bParam2)
{
	return func_350(PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_350(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = GET_PLAYER_TEAM(iParam0);
	if ((func_359() || (func_358() && func_356())) && Global_1384328.f_1)
	{
		if (bParam1)
		{
			return func_355(iParam2, iVar0);
		}
		else
		{
			return func_355(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_144(iVar0, iParam2, 0) && !IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_354(1);
				}
				else
				{
					return func_354(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_351(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_351(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_354(1);
	}
	return func_354(0);
}

int func_351(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_353(iParam0, iParam1, iParam3);
	if (func_352(Global_4456448.f_154360, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_352(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_190930 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9019[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_353(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_144(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_354(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_355(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_353(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

bool func_356()
{
	if (func_357())
	{
		return 1;
	}
	return IS_BIT_SET(Global_4456448.f_195024, 4);
}

bool func_357()
{
	return IS_BIT_SET(Global_4456448.f_184550, 12);
}

bool func_358()
{
	if (NETWORK_IS_ACTIVITY_SESSION())
	{
		return IS_BIT_SET(Global_4456448.f_195024, 0);
	}
	return ((IS_BIT_SET(Global_4456448.f_195024, 0) || Global_1654024) && IS_BIT_SET(joaat("fm_deathmatch_creator")) > 0);
}

int func_359()
{
	if (func_357() && NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_360(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590446[PLAYER_ID() /*871*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1590446[iVar2 /*871*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_365())
			{
				iVar3 = func_364(iParam0);
				if (!iVar3 == -1)
				{
					return func_362(iVar3);
				}
			}
			if ((func_182(iParam1, iParam0, iVar0, 0) && !IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_144(IS_BIT_SET(iParam1), IS_BIT_SET(iParam0), 0) && IS_BIT_SET(Global_4456448.f_15, 23)) && !IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_354(1);
			}
			else if (IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_361(1);
			}
			else
			{
				return func_350(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574407 || Global_1574398) || Global_1590446[iParam0 /*871*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574407 == 1 && Global_1574417 == 0))
			{
				return func_354(1);
			}
			else
			{
				return func_350(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574402 && Global_1573899.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_364(iParam0);
	if (!iVar4 == -1)
	{
		return func_362(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_361(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_362(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_363(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_363(int iParam0)
{
	return Global_2417783.f_2105.f_44[iParam0 /*2*/].f_1;
}

int func_364(int iParam0)
{
	if (!iParam0 == func_13())
	{
		if (func_14(iParam0, 1))
		{
			return Global_2417783.f_2105.f_11[func_12(iParam0)];
		}
	}
	return -1;
}

int func_365()
{
	if (((func_367() || func_366()) || func_175()) || func_310())
	{
		return 1;
	}
	return 0;
}

var func_366()
{
	return Global_2448961.f_16;
}

var func_367()
{
	return Global_2448961.f_15;
}

var func_368()
{
	return Global_2359302.f_2;
}

bool func_369()
{
	return IS_BIT_SET(Global_2359302, 4);
}

bool func_370()
{
	return IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_39.f_18, 14);
}

int func_371(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969029.f_13[iParam0];
	if (func_365())
	{
		iVar2 = func_364(iParam1);
		if (!iVar2 == -1)
		{
			return func_362(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (IS_BIT_SET(Global_4456448.f_106[iParam0 /*11610*/].f_5831[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_13())
	{
		if (Global_4456448.f_149437[iParam0] != -1 && Global_4456448.f_149437[iParam0] <= 4)
		{
			if (Global_4456448.f_149437[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_149437[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_149437[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_149437[iParam0] == 4)
			{
				if (IS_BIT_SET(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_149437[iParam0];
			}
		}
		else
		{
			iVar0 = func_350(iParam1, !bParam2, iParam0, 0);
		}
		if (IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_372(iParam0);
		}
		if (IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (IS_BIT_SET(Global_4456448.f_15, 26) && !func_144(iParam0, IS_BIT_SET(iParam1), 0))
		{
			iVar0 = func_361(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_372(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_191014;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_191015;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_191016;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_191017;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

int func_373(char* sParam0, char* sParam1, int iParam2)
{
	if (!ARE_STRINGS_EQUAL(sParam0, "NULL"))
	{
		if (!IS_BIT_SET(iLocal_100, 0))
		{
			func_477(&uLocal_118, 3, 0, sParam1, 0, 1);
			if (func_375(&uLocal_118, iParam2, "CT_AUD", sParam0, 0, 0))
			{
				SET_BIT(&iLocal_100, 0);
			}
		}
		else if (!IS_BIT_SET(iLocal_100, 1))
		{
			if (func_374(0))
			{
				SET_BIT(&iLocal_100, 1);
			}
		}
		else if (!func_374(0))
		{
			iLocal_100 = 0;
			return 1;
		}
	}
	return 0;
}

int func_374(int iParam0)
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

int func_375(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_475())
	{
		return 0;
	}
	if (func_474())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_376(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_376(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (_GET_LENGTH_OF_STRING(sParam2) > 7)
	{
		return 0;
	}
	if (IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		return 0;
	}
	if (_GET_LENGTH_OF_STRING(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = GET_HASH_KEY(GET_HASH_KEY());
	iVar1 = func_473(sParam2, sParam3);
	iVar2 = 0;
	if (!IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		iVar2 = GET_HASH_KEY(sParam7);
	}
	if (func_472(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_467(iParam6))
	{
		return 0;
	}
	if (func_464(iVar0, iVar1, iVar2))
	{
		if (func_463())
		{
			return 0;
		}
		func_462();
		return func_383(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_382(iParam4))
	{
		return 0;
	}
	func_377(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0;
}

void func_377(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	Global_1366857.f_40.f_1 = iParam0;
	Global_1366857.f_40.f_2 = iParam1;
	Global_1366857.f_40.f_3 = iParam2;
	StringCopy(&(Global_1366857.f_40.f_4), sParam3, 16);
	Global_1366857.f_40.f_8 = iParam4;
	Global_1366857.f_40.f_9 = iParam5;
	Global_1366857.f_40.f_14 = iParam6;
	func_378(iParam4);
	func_462();
	Global_1366857.f_40.f_13 = HAS_NETWORK_TIME_STARTED(HAS_NETWORK_TIME_STARTED(), 7000);
}

void func_378(int iParam0)
{
	if (func_381(iParam0))
	{
		func_380();
		return;
	}
	func_379();
}

void func_379()
{
	Global_1366857.f_40.f_10 = 0;
}

void func_380()
{
	Global_1366857.f_40.f_10 = 1;
}

int func_381(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_382(int iParam0)
{
	return iParam0 > Global_1366857.f_40.f_8;
}

int func_383(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_461();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_458(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_455(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_458(uParam0, sParam3, sParam4);
		}
		return func_437(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_436(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_424(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_423(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_384(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_384(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_422();
	bVar0 = true;
	if (func_386(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_385(120000);
		return 1;
	}
	return 0;
}

void func_385(int iParam0)
{
	Global_1366857.f_40.f_11 = HAS_NETWORK_TIME_STARTED(HAS_NETWORK_TIME_STARTED(), iParam0);
	Global_1366857.f_40.f_12 = 1;
}

int func_386(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_13();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = GET_PLAYER_NAME(iVar0);
		iVar1 = func_416(iVar0);
		if (iVar1 == 0)
		{
			if (GET_TIME_OFFSET(GET_TIME_OFFSET(), Global_1366857.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_415(sParam5, bParam6, &iVar3);
	uVar5 = func_413(iParam7, &iVar3);
	iVar6 = 0;
	if (!IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (IS_BIT_SET(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (IS_BIT_SET(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_412(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_390(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (IS_BIT_SET(iParam4, 0))
	{
		func_389();
	}
	func_422();
	func_388();
	func_387();
	return 1;
}

void func_387()
{
	Global_1366857.f_57 = 0;
	Global_1366857.f_57.f_1 = 0;
}

void func_388()
{
	Global_1366857.f_40 = 3;
}

void func_389()
{
	SET_BIT(&Global_7356, 8);
}

int func_390(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_391(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			SET_BIT(&Global_4269615, 0);
		}
		return 1;
	}
	return 0;
}

int func_391(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_405();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19486 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19486 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19486 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
		{
			if (IS_PED_SWIMMING_UNDER_WATER(IS_PED_SWIMMING_UNDER_WATER()))
			{
				return 0;
			}
		}
		if (Global_4269600 == 1)
		{
			return 0;
		}
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_404() == 0)
	{
		func_402();
		return 0;
	}
	func_401(Global_4269599);
	StringCopy(&(Global_4268350[Global_4269599 /*104*/]), sParam1, 64);
	Global_4268350[Global_4269599 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4268350[Global_4269599 /*104*/].f_24 = iParam2;
	}
	Global_4268350[Global_4269599 /*104*/].f_25 = iParam7;
	Global_4268350[Global_4269599 /*104*/].f_26 = uParam8;
	Global_4268350[Global_4269599 /*104*/].f_29 = uParam9;
	Global_4268350[Global_4269599 /*104*/].f_30 = uParam12;
	Global_4268350[Global_4269599 /*104*/].f_31 = uParam11;
	Global_4268350[Global_4269599 /*104*/].f_28 = 0;
	Global_4268350[Global_4269599 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4268350[Global_4269599 /*104*/].f_33), sParam4, 64);
	Global_4268350[Global_4269599 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4268350[Global_4269599 /*104*/].f_50), sParam5, 64);
	Global_4268350[Global_4269599 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4268350[Global_4269599 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4268350[Global_4269599 /*104*/].f_83), sParam15, 64);
	func_405();
	switch (iParam16)
	{
		case 3:
			Global_4268350[Global_4269599 /*104*/].f_99[Global_19486] = 1;
			break;
		
		case 0:
			Global_4268350[Global_4269599 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4268350[Global_4269599 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4268350[Global_4269599 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_19486)
		{
			case 0:
				func_400(0);
				break;
			
			case 1:
				func_400(1);
				break;
			
			case 2:
				func_400(2);
				break;
			
			case 3:
				func_400(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4269600 = 1;
				break;
			
			case 0:
				Global_4269600 = 1;
				break;
			
			case 2:
				Global_4269600 = 1;
				break;
			
			case 1:
				Global_4269600 = 1;
				break;
			}
	}
	Global_21874[Global_4269599] = 0;
	if (bParam10)
	{
		func_405();
		if (Global_19429)
		{
			StringCopy(&Global_19475, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19486)
			{
				case 0:
					StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_399())
			{
				PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_19475, true);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_398(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_395(1);
			func_398(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19466), -1082130432, -1082130432, -1082130432);
		}
	}
	func_392(iParam0, sParam1);
	return 1;
}

void func_392(int iParam0, char* sParam1)
{
	if (!func_393())
	{
		return;
	}
	0x0077F15613D36993(iParam0, -1180597171, 0x0077F15613D36993(sParam1), 0);
}

int func_393()
{
	if (!Global_262145.f_28013)
	{
		return 0;
	}
	if (!Global_76577)
	{
		return 0;
	}
	if (PLAYER_ID() == func_13())
	{
		return 0;
	}
	if (func_394(PLAYER_ID()))
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

bool func_394(int iParam0)
{
	return func_37(iParam0, 20);
}

void func_395(int iParam0)
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
		if (func_273(14))
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
								func_397(&(Global_7363[iVar1 /*15*/]));
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar2);
								END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2458994)
							{
								if (iVar1 == 14)
								{
									func_396(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_396(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(Global_21873), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_396(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_396(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_396(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(Global_21868), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "SET_DATA_SLOT");
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_7363[iVar1 /*15*/].f_10);
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
								func_397(&(Global_7363[iVar1 /*15*/]));
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
								func_397(&(Global_7363[iVar1 /*15*/]));
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
								func_397(&(Global_7363[iVar1 /*15*/]));
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
								func_397(&(Global_7363[iVar1 /*15*/]));
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
								func_397(&(Global_7363[iVar1 /*15*/]));
								_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(42);
								END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_7363[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627599.f_1;
								func_396(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_396(Global_19467, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_7363[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_7363[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_396(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
		func_397(sParam7);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_397(sParam8);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_397(sParam9);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_397(sParam10);
	}
	if (!IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_397(sParam11);
	}
	END_SCALEFORM_MOVIE_METHOD();
}

void func_397(char* sParam0)
{
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_398(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_399()
{
	return Global_1312873;
}

void func_400(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_111560.f_14046[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_401(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = GET_CLOCK_SECONDS();
	iVar1 = GET_CLOCK_MINUTES();
	iVar2 = GET_CLOCK_HOURS();
	iVar3 = GET_CLOCK_DAY_OF_MONTH();
	uVar4 = GET_CLOCK_MONTH() + 1;
	iVar5 = GET_CLOCK_YEAR();
	Global_4268350[iParam0 /*104*/].f_18 = iVar0;
	Global_4268350[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_4268350[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_4268350[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_4268350[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4268350[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_402()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4269599 = 11;
	Global_4268350[Global_4269599 /*104*/].f_18 = -1;
	Global_4268350[Global_4269599 /*104*/].f_18.f_1 = 0;
	Global_4268350[Global_4269599 /*104*/].f_18.f_2 = 0;
	Global_4268350[Global_4269599 /*104*/].f_18.f_3 = 0;
	Global_4268350[Global_4269599 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_403(Global_4268350[iVar2 /*104*/].f_18, Global_4268350[Global_4269599 /*104*/].f_18))
		{
			Global_4269599 = iVar2;
		}
		iVar2++;
	}
	Global_4268350[Global_4269599 /*104*/].f_24 = 1;
}

int func_403(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_404()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4268350[iVar2 /*104*/].f_24 == 0)
		{
			Global_4269599 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4269599 = 11;
	Global_4268350[Global_4269599 /*104*/].f_18 = -1;
	Global_4268350[Global_4269599 /*104*/].f_18.f_1 = 0;
	Global_4268350[Global_4269599 /*104*/].f_18.f_2 = 0;
	Global_4268350[Global_4269599 /*104*/].f_18.f_3 = 0;
	Global_4268350[Global_4269599 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4268350[iVar2 /*104*/].f_24 == 0 || Global_4268350[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_403(Global_4268350[iVar2 /*104*/].f_18, Global_4268350[Global_4269599 /*104*/].f_18))
			{
				Global_4269599 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4269599 == 11)
	{
		return 0;
	}
	Global_4268350[Global_4269599 /*104*/].f_99[0] = 0;
	Global_4268350[Global_4269599 /*104*/].f_99[1] = 0;
	Global_4268350[Global_4269599 /*104*/].f_99[2] = 0;
	return 1;
}

void func_405()
{
	if (func_273(14))
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
		Global_19486 = func_406();
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

var func_406()
{
	func_407();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_407()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()))
	{
		if (func_410(Global_111560.f_2358.f_539.f_4321) != GET_ENTITY_MODEL(GET_ENTITY_MODEL()))
		{
			iVar0 = func_409(PLAYER_PED_ID());
			if (func_408(iVar0) && (!func_273(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_408(Global_111560.f_2358.f_539.f_4321))
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

bool func_408(int iParam0)
{
	return iParam0 < 3;
}

int func_409(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_410(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_410(int iParam0)
{
	if (func_408(iParam0))
	{
		return func_411(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_411(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

int func_412(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_391(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8063 = iParam10;
			SET_BIT(&Global_4269615, 0);
		}
		return 1;
	}
	return 0;
}

int func_413(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_414(2, iParam1);
	return iParam0;
}

void func_414(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_415(char* sParam0, bool bParam1, int iParam2)
{
	if (IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return sLocal_20;
	}
	if (ARE_STRINGS_EQUAL(sParam0, sLocal_20))
	{
		return sLocal_20;
	}
	func_414(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return _GET_LABEL_TEXT(sParam0);
}

int func_416(int iParam0)
{
	int iVar0;
	
	iVar0 = func_419(iParam0);
	if (iVar0 == -1)
	{
		func_417(iParam0, 1);
		return 0;
	}
	Global_1385294[iVar0 /*5*/].f_4 = 1;
	return Global_1385294[iVar0 /*5*/].f_2;
}

void func_417(int iParam0, bool bParam1)
{
	if (!func_6(iParam0, 0, 1))
	{
		return;
	}
	if (func_419(iParam0) != -1)
	{
		return;
	}
	if (Global_1385457)
	{
		if (iParam0 == Global_1385457.f_1)
		{
			return;
		}
	}
	if (func_418(iParam0))
	{
		return;
	}
	if (Global_1385495 >= 32)
	{
		return;
	}
	Global_1385462[Global_1385495] = iParam0;
	Global_1385495++;
	if (bParam1)
	{
	}
}

int func_418(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1385495)
	{
		if (Global_1385462[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_419(int iParam0)
{
	int iVar0;
	
	if (!func_6(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1385455 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1385455)
	{
		if (Global_1385294[iVar0 /*5*/].f_1 == iParam0)
		{
			if (IS_PEDHEADSHOT_VALID(Global_1385294[iVar0 /*5*/].f_2) && IS_PEDHEADSHOT_VALID(Global_1385294[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_420(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_420(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1385455)
	{
		return;
	}
	if (IS_PEDHEADSHOT_VALID(Global_1385294[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1385294[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, GET_PEDHEADSHOT_TXD_STRING(Global_1385294[iParam0 /*5*/].f_2), 64);
			_0x317EBA71D7543F52(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		UNREGISTER_PEDHEADSHOT(Global_1385294[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1385455)
	{
		Global_1385294[iVar2 /*5*/] = { Global_1385294[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_421(&(Global_1385294[iVar2 /*5*/]));
	Global_1385455 = (Global_1385455 - 1);
}

void func_421(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_13();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = 0xBA7F0B77D80A4EB7();
	}
}

void func_422()
{
	Global_1366857.f_40.f_9 = 4;
}

int func_423(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_422();
	bVar0 = false;
	return func_386(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_424(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_425(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_425(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_13();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = GET_PLAYER_NAME(iVar0);
		iVar1 = func_416(iVar0);
		if (iVar1 == 0)
		{
			if (GET_TIME_OFFSET(GET_TIME_OFFSET(), Global_1366857.f_40.f_13))
			{
				return 0;
			}
		}
		Global_21866 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_415(sParam5, bParam6, &iVar3);
	uVar5 = func_413(iParam7, &iVar3);
	iVar6 = 0;
	if (!IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (IS_BIT_SET(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (IS_BIT_SET(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_435(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_427(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (IS_BIT_SET(iParam4, 0))
	{
		func_389();
	}
	func_426();
	func_388();
	func_387();
	return 1;
}

void func_426()
{
	Global_1366857.f_40.f_9 = 3;
}

int func_427(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	CLEAR_BIT(&Global_7356, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_429(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			Global_7966[3 /*6*/] = { func_428(iParam0) };
			Global_8043 = iParam0;
			SET_BIT(&Global_7356, 1);
			SET_BIT(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_428(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_3;
}

int func_429(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_405();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19486 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19486 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19486 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (IS_PLAYER_PLAYING(IS_PLAYER_PLAYING()))
		{
			if (IS_PED_SWIMMING_UNDER_WATER(IS_PED_SWIMMING_UNDER_WATER()))
			{
				return 0;
			}
		}
		if (Global_111560.f_14046[Global_19486 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_434() == 0)
	{
		func_432();
		return 0;
	}
	func_431(Global_21872);
	StringCopy(&(Global_111560.f_14136[Global_21872 /*104*/]), sParam1, 64);
	Global_111560.f_14136[Global_21872 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_111560.f_14136[Global_21872 /*104*/].f_24 = iParam2;
	}
	Global_111560.f_14136[Global_21872 /*104*/].f_25 = iParam7;
	Global_111560.f_14136[Global_21872 /*104*/].f_26 = uParam8;
	Global_111560.f_14136[Global_21872 /*104*/].f_29 = uParam9;
	Global_111560.f_14136[Global_21872 /*104*/].f_30 = uParam12;
	Global_111560.f_14136[Global_21872 /*104*/].f_31 = uParam11;
	Global_111560.f_14136[Global_21872 /*104*/].f_28 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_111560.f_14136[Global_21872 /*104*/].f_33), sParam4, 64);
	Global_111560.f_14136[Global_21872 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_111560.f_14136[Global_21872 /*104*/].f_50), sParam5, 64);
	Global_111560.f_14136[Global_21872 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_111560.f_14136[Global_21872 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_111560.f_14136[Global_21872 /*104*/].f_83), sParam15, 64);
	if (IS_BIT_SET(Global_7356, 10))
	{
		Global_111560.f_14136[Global_21872 /*104*/].f_99[0] = 1;
		Global_111560.f_14136[Global_21872 /*104*/].f_99[1] = 1;
		Global_111560.f_14136[Global_21872 /*104*/].f_99[2] = 1;
		Global_8062 = 4;
		func_400(0);
		func_400(2);
		func_400(1);
	}
	else
	{
		func_405();
		switch (iParam16)
		{
			case 3:
				Global_111560.f_14136[Global_21872 /*104*/].f_99[Global_19486] = 1;
				break;
			
			case 0:
				Global_111560.f_14136[Global_21872 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_111560.f_14136[Global_21872 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_111560.f_14136[Global_21872 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_19486)
			{
				case 0:
					func_400(0);
					Global_8062 = 0;
					break;
				
				case 1:
					func_400(1);
					Global_8062 = 1;
					break;
				
				case 2:
					func_400(2);
					Global_8062 = 2;
					break;
				
				case 3:
					func_400(3);
					Global_8062 = 3;
					break;
				
				default:
					Global_8062 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (IS_BIT_SET(Global_7356, 10))
		{
			Global_111560.f_14046[0 /*20*/].f_17 = 1;
			Global_111560.f_14046[1 /*20*/].f_17 = 1;
			Global_111560.f_14046[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_111560.f_14046[Global_19486 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_111560.f_14046[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_111560.f_14046[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_111560.f_14046[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_21874[Global_21872] = 0;
	if (bParam10)
	{
		func_405();
		if (Global_19429)
		{
			StringCopy(&Global_19475, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19486)
			{
				case 0:
					StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_399())
			{
				PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_19475, true);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_398(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_395(1);
			func_398(Global_19467, "DISPLAY_VIEW", 1f, to_float(Global_19466), -1082130432, -1082130432, -1082130432);
		}
	}
	func_430(iParam0, sParam1);
	return 1;
}

void func_430(int iParam0, char* sParam1)
{
	if (!func_393())
	{
		return;
	}
	0x0077F15613D36993(iParam0, 1654525105, 0x0077F15613D36993(sParam1), 0);
}

void func_431(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = GET_CLOCK_SECONDS();
	iVar1 = GET_CLOCK_MINUTES();
	iVar2 = GET_CLOCK_HOURS();
	iVar3 = GET_CLOCK_DAY_OF_MONTH();
	uVar4 = GET_CLOCK_MONTH() + 1;
	iVar5 = GET_CLOCK_YEAR();
	Global_111560.f_14136[iParam0 /*104*/].f_18 = iVar0;
	Global_111560.f_14136[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_111560.f_14136[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_111560.f_14136[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_111560.f_14136[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_111560.f_14136[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_432()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76577)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_21872 = 34;
	Global_111560.f_14136[Global_21872 /*104*/].f_18 = -1;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_1 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_2 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_3 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_433(Global_111560.f_14136[iVar2 /*104*/].f_18, Global_111560.f_14136[Global_21872 /*104*/].f_18))
		{
			Global_21872 = iVar2;
		}
		iVar2++;
	}
	Global_111560.f_14136[Global_21872 /*104*/].f_24 = 1;
}

int func_433(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_434()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76577)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_111560.f_14136[iVar2 /*104*/].f_24 == 0)
		{
			Global_21872 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_21872 = 34;
	Global_111560.f_14136[Global_21872 /*104*/].f_18 = -1;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_1 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_2 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_3 = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_111560.f_14136[iVar2 /*104*/].f_24 == 0 || Global_111560.f_14136[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_433(Global_111560.f_14136[iVar2 /*104*/].f_18, Global_111560.f_14136[Global_21872 /*104*/].f_18))
			{
				Global_21872 = iVar2;
			}
		}
		if (Global_111560.f_14136[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_21872 == 34)
	{
		return 0;
	}
	Global_111560.f_14136[Global_21872 /*104*/].f_99[0] = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_99[1] = 0;
	Global_111560.f_14136[Global_21872 /*104*/].f_99[2] = 0;
	return 1;
}

int func_435(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	CLEAR_BIT(&Global_7356, 10);
	iVar0 = 3;
	if (func_429(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8063 = iParam10;
			Global_7966[3 /*6*/] = { func_428(iParam0) };
			Global_8043 = iParam0;
			StringCopy(&Global_8044, sParam5, 64);
			SET_BIT(&Global_7356, 1);
			SET_BIT(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

int func_436(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!IS_PED_INJURED(IS_PED_INJURED()))
	{
	}
	if (IS_PED_SPRINTING(IS_PED_SPRINTING()))
	{
		return 0;
	}
	func_426();
	bVar0 = true;
	if (func_425(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_385(120000);
		return 1;
	}
	return 0;
}

int func_437(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!IS_PED_INJURED(IS_PED_INJURED()))
	{
		if (IS_PED_SPRINTING(IS_PED_SPRINTING()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (IS_BIT_SET(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (IS_BIT_SET(iParam4, 4))
	{
		bVar0 = func_454(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_443(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (IS_BIT_SET(iParam4, 3))
		{
			func_442(1);
		}
		if (IS_BIT_SET(iParam4, 5))
		{
			func_441(1);
		}
		func_440();
		func_388();
		func_439();
		func_438();
		return 1;
	}
	return 0;
}

void func_438()
{
	Global_2540666 = 0;
}

void func_439()
{
	Global_1366857.f_57 = 1;
	Global_1366857.f_57.f_1 = 0;
}

void func_440()
{
	Global_1366857.f_40.f_9 = 1;
}

void func_441(int iParam0)
{
	if (iParam0 == 1)
	{
		SET_BIT(&Global_7358, 0);
	}
	else
	{
		CLEAR_BIT(&Global_7358, 0);
	}
}

void func_442(int iParam0)
{
	if (iParam0 == 1)
	{
		SET_BIT(&Global_7356, 20);
	}
	else
	{
		CLEAR_BIT(&Global_7356, 20);
	}
}

int func_443(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_453(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	Global_2621441 = 0;
	return func_444(sParam3, iParam4, bParam7);
}

int func_444(char* sParam0, int iParam1, bool bParam2)
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
					func_452();
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
		if (func_451(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_450();
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
				func_405();
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
				if (func_449())
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
			if (func_448())
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
			func_447();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_446();
		func_445();
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
		func_452();
	}
	return 0;
}

void func_445()
{
	if (!func_393())
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

void func_446()
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

void func_447()
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

int func_448()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_449()
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

void func_450()
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

bool func_451(int iParam0, int iParam1)
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

void func_452()
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

void func_453(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_454(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_453(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_20853 = 1;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	Global_2621441 = 0;
	return func_444(sParam3, iParam4, bParam7);
}

int func_455(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!IS_PED_INJURED(IS_PED_INJURED()))
	{
	}
	if (IS_PED_SPRINTING(IS_PED_SPRINTING()))
	{
		return 0;
	}
	if (func_457(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_456();
		func_440();
		func_388();
		func_439();
		func_438();
		return 1;
	}
	return 0;
}

void func_456()
{
	Global_21823 = 0;
}

bool func_457(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_453(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 1;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 1;
	Global_20859 = 0;
	StringCopy(&Global_20953, sParam5, 24);
	Global_2621441 = 0;
	return func_444(sParam3, iParam4, bParam8);
}

int func_458(var uParam0, char* sParam1, char* sParam2)
{
	if (func_460(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_459();
		func_388();
		func_439();
		return 1;
	}
	return 0;
}

void func_459()
{
	Global_1366857.f_40.f_9 = 2;
}

bool func_460(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_453(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_444(sParam2, iParam3, 0);
}

void func_461()
{
	Global_1366857.f_55 = Global_1366857.f_40.f_1;
	Global_1366857.f_55.f_1 = Global_1366857.f_40.f_10;
}

void func_462()
{
	Global_1366857.f_40 = 1;
}

bool func_463()
{
	return Global_1366857.f_40 == 1;
}

int func_464(int iParam0, int iParam1, int iParam2)
{
	if (!func_465(iParam0))
	{
		return 0;
	}
	if (Global_1366857.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1366857.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_465(int iParam0)
{
	if (!func_466())
	{
		return 0;
	}
	if (!Global_1366857.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_466()
{
	if (Global_1366857.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_467(int iParam0)
{
	if (func_471())
	{
		return 0;
	}
	if (func_470())
	{
		return 0;
	}
	if (func_374(0))
	{
		return 0;
	}
	if (Global_1312467.f_18 != 0)
	{
		return 0;
	}
	if (Global_1662552 || func_469())
	{
		return 0;
	}
	if (!IS_BIT_SET(iParam0, 6))
	{
		if (func_468())
		{
			return 0;
		}
	}
	return 1;
}

bool func_468()
{
	return GET_TIME_OFFSET(GET_TIME_OFFSET(), Global_1383933);
}

int func_469()
{
	if (Global_4254407.f_904 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_470()
{
	return Global_1366857.f_40 == 3;
}

bool func_471()
{
	return func_448();
}

int func_472(int iParam0, int iParam1, int iParam2)
{
	if (!func_470())
	{
		return 0;
	}
	return func_464(iParam0, iParam1, iParam2);
}

int func_473(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return GET_HASH_KEY(&cVar0);
}

bool func_474()
{
	return Global_2537824.f_1;
}

int func_475()
{
	if (Global_1367045.f_2)
	{
		return 1;
	}
	return func_476();
}

bool func_476()
{
	return func_471();
}

void func_477(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_478(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_479(var uParam0)
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

void func_480(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_481(uParam0, 0, 0);
		}
	}
}

void func_481(var uParam0, bool bParam1, bool bParam2)
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

void func_482()
{
	if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_95.f_10[iLocal_109 /*7*/]) && !NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_95.f_10[iLocal_109 /*7*/]), 0))
	{
		if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
		{
			if (func_5(GET_ENTITY_COORDS(GET_ENTITY_COORDS(Local_95.f_10[iLocal_109 /*7*/]), true), GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true), 50625f))
			{
				if (!IS_BIT_SET(iLocal_98, 4))
				{
					SET_BIT(&iLocal_98, 4);
				}
			}
			else if (!IS_BIT_SET(iLocal_98, 5))
			{
				if (Local_95.f_42 != -1)
				{
					if (iLocal_109 == Local_95.f_42)
					{
						if (!IS_BIT_SET(iLocal_98, 5))
						{
							SET_BIT(&iLocal_98, 5);
						}
					}
				}
			}
		}
	}
	func_483(iLocal_109);
	iLocal_109++;
	if (iLocal_109 >= func_478(iLocal_101))
	{
		if ((!IS_BIT_SET(iLocal_98, 4) && IS_BIT_SET(Local_95.f_1, 8)) || IS_BIT_SET(iLocal_98, 5))
		{
			if (!IS_BIT_SET(Local_97[IS_BIT_SET() /*5*/].f_1, 1))
			{
				SET_BIT(&(Local_97[SET_BIT() /*5*/].f_1), 1);
			}
		}
		else if (IS_BIT_SET(Local_97[IS_BIT_SET() /*5*/].f_1, 1))
		{
			CLEAR_BIT(&(Local_97[CLEAR_BIT() /*5*/].f_1), 1);
		}
		CLEAR_BIT(&iLocal_98, 4);
		CLEAR_BIT(&iLocal_98, 5);
		iLocal_109 = 0;
	}
}

void func_483(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar2 = 0;
	vVar3 = { 0f, 0f, 0f };
	bVar4 = false;
	if (NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_10[iParam0 /*7*/]))
	{
		iVar0 = NET_TO_PED(Local_95.f_10[iParam0 /*7*/]);
		if (iLocal_101 == 0)
		{
			if (PLAYER_ID() == iLocal_103)
			{
				if (Local_95.f_10[iParam0 /*7*/].f_4 == 0)
				{
					if (Local_95.f_10[iParam0 /*7*/].f_5 == 2)
					{
						bVar4 = true;
					}
				}
			}
		}
		if (PLAYER_ID() == iLocal_102)
		{
			if (IS_BIT_SET(Local_95.f_10[iParam0 /*7*/].f_2, 1))
			{
				if (!IS_BIT_SET(iLocal_99[iParam0], 0))
				{
					SET_BIT(&Global_1573339, 0);
					SET_BIT(&(iLocal_99[iParam0]), 0);
				}
				if (!IS_BIT_SET(Local_95.f_10[iParam0 /*7*/].f_2, 9))
				{
					if (!IS_BIT_SET(iLocal_99[iParam0], 1))
					{
						bVar4 = true;
					}
				}
				else if (IS_BIT_SET(iLocal_99[iParam0], 1))
				{
					CLEAR_BIT(&(iLocal_99[iParam0]), 1);
				}
			}
		}
		if (bVar4)
		{
			if (NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_10[iParam0 /*7*/]))
			{
				if (!NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_95.f_10[iParam0 /*7*/]))
				{
					NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_95.f_10[iParam0 /*7*/]);
				}
			}
		}
		if (NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_95.f_10[iParam0 /*7*/]))
		{
			if (PLAYER_ID() == iLocal_102)
			{
				if (!IS_BIT_SET(Local_95.f_10[iParam0 /*7*/].f_2, 9) && !IS_BIT_SET(iLocal_99[iParam0], 1))
				{
					if (_0x2E0BF682CC778D49(iVar0, _0x2E0BF682CC778D49()))
					{
						switch (Local_95.f_10[iParam0 /*7*/].f_1)
						{
							case 0:
								func_506(iVar0, 3);
								break;
						}
						SET_BIT(&(iLocal_99[iParam0]), 1);
					}
				}
			}
			if (!IS_ENTITY_DEAD(iVar0, 0) && !IS_ENTITY_DEAD(iVar0))
			{
				switch (Local_95.f_10[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					
					case 1:
						SET_PED_RESET_FLAG(iVar0, 187, true);
						if (Local_95.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (IS_BIT_SET(Local_95.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (!IS_BIT_SET(Local_95.f_10[iParam0 /*7*/].f_2, 3))
								{
									SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar0, 3f);
									SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
									SET_PED_CONFIG_FLAG(iVar0, 118, false);
								}
							}
						}
						if (PLAYER_ID() == iLocal_103 && func_5(PLAYER_ID(iVar0, true), PLAYER_ID(PLAYER_ID(iLocal_103), true), 25f))
						{
							SET_BIT(&(Global_2531497.f_4589), 0);
						}
						else
						{
							CLEAR_BIT(&(Global_2531497.f_4589), 0);
						}
						if (!IS_PED_FLEEING(iVar0))
						{
							if (!IS_PED_RESPONDING_TO_EVENT(iVar0, 29))
							{
								if (func_6(iLocal_103, 1, 1))
								{
									if (!IS_BIT_SET(Local_95.f_2, 13))
									{
										if (func_505(iLocal_103) && !IS_PED_HANGING_ON_TO_VEHICLE(IS_PED_HANGING_ON_TO_VEHICLE(iLocal_103)))
										{
											if (!func_504(iVar0, -1794415470))
											{
												if (func_503(iVar0))
												{
													iVar1 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(iLocal_103), 0);
													if (DOES_ENTITY_EXIST(iVar1))
													{
														if (IS_VEHICLE_DRIVEABLE(iVar1, 0))
														{
														}
														if (!_0xF7F203E31F96F6A1(iVar1, func_502(_0xF7F203E31F96F6A1(iLocal_103), 0)))
														{
															TASK_ENTER_VEHICLE(iVar0, iVar1, -1, func_501(TASK_ENTER_VEHICLE(iLocal_103), iVar1), func_500(iParam0), 1179977, 0);
														}
													}
												}
											}
										}
										else if (!(IS_PED_JACKING(iVar0) && IS_PED_JACKING(iVar0) == IS_PED_JACKING(iLocal_103)) && !IS_PED_JACKING(iVar0, 1))
										{
											if (func_504(iVar0, -1794415470))
											{
												CLEAR_PED_TASKS(iVar0);
											}
											if (!func_504(iVar0, 1227113341))
											{
												if (func_503(iVar0))
												{
													TASK_GO_TO_ENTITY(iVar0, TASK_GO_TO_ENTITY(iLocal_103), -1, 0f, func_500(iParam0), 1073741824, 0);
												}
											}
											else
											{
												SET_PED_RESET_FLAG(iVar0, 151, true);
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						if (PLAYER_ID() == iLocal_103 && func_5(PLAYER_ID(iVar0, true), PLAYER_ID(PLAYER_ID(iLocal_103), true), 25f))
						{
							SET_BIT(&(Global_2531497.f_4589), 0);
						}
						else
						{
							CLEAR_BIT(&(Global_2531497.f_4589), 0);
						}
						if (PLAYER_ID() == iLocal_103)
						{
							if (!IS_BIT_SET(Local_97[IS_BIT_SET() /*5*/].f_1, 0))
							{
								if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
								{
									if ((func_4(GET_ENTITY_COORDS(iVar0, true), GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true)) && (GET_ENTITY_COORDS(GET_ENTITY_COORDS()) || GET_ENTITY_COORDS(GET_ENTITY_COORDS()))) || (GET_ENTITY_COORDS(iVar0) && GET_ENTITY_COORDS(iVar0) == GET_ENTITY_COORDS()))
									{
										iVar2 = func_498(PLAYER_ID());
										fVar5 = (to_float(Global_262145.f_6650) / 100f);
										iVar2 = round((to_float(iVar2) * fVar5));
										iVar6 = func_497(PLAYER_ID());
										if (iVar6 > 100)
										{
											iVar6 = 100;
										}
										if (iVar2 > (iVar6 * Global_262145.f_6651))
										{
											iVar2 = (iVar6 * Global_262145.f_6651);
										}
										if (iVar2 > 0)
										{
											SET_BIT(&iLocal_98, 16);
										}
										SET_HIGH_FALL_TASK(SET_HIGH_FALL_TASK(), 5000, 10000, 4);
										if (!(IS_PED_JACKING(iVar0) && IS_PED_JACKING(iVar0) == IS_PED_JACKING(iLocal_103)))
										{
											vVar3 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true) - GET_ENTITY_COORDS(iVar0, true) };
											vVar3 = { func_496(vVar3) };
											vVar3.x = (vVar3.x * 3f);
											vVar3.y = (vVar3.y * 3f);
											vVar3.z = (vVar3.z * 3f);
											APPLY_FORCE_TO_ENTITY(APPLY_FORCE_TO_ENTITY(), 1, vVar3, 0f, 0f, 0.5f, 0, 0, 1, 1, 0, 1);
										}
										SET_PED_FLEE_ATTRIBUTES(iVar0, 512, false);
										SET_PED_COMBAT_ATTRIBUTES(iVar0, 17, true);
										if (((IS_PED_IN_ANY_VEHICLE(iVar0, 1) || IS_PED_IN_ANY_VEHICLE(iVar0)) && func_494(iVar0)) && func_502(iVar0, 0) == -1)
										{
											SET_PED_FLEE_ATTRIBUTES(iVar0, 2, true);
											SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
											SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, true);
										}
										else
										{
											CLEAR_PED_TASKS(iVar0);
											TASK_SMART_FLEE_PED(iVar0, TASK_SMART_FLEE_PED(), 10000f, -1, 1, 0);
										}
										Local_97[NETWORK_PLAYER_ID_TO_INT() /*5*/].f_3 = iVar2;
										if (iVar2 > 0)
										{
											Local_97[NETWORK_PLAYER_ID_TO_INT() /*5*/].f_2 = iParam0;
										}
										else
										{
											Local_97[NETWORK_PLAYER_ID_TO_INT() /*5*/].f_2 = -1;
										}
										SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, Global_1575004);
										SET_BIT(&(Local_97[SET_BIT() /*5*/].f_1), 0);
										SET_BIT(&(Global_2531497.f_4589), 2);
									}
								}
							}
						}
						break;
					
					case 3:
						if (GET_PED_RESET_FLAG(iVar0, 187))
						{
							SET_PED_RESET_FLAG(iVar0, 187, false);
						}
						if (Local_95.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!IS_BIT_SET(Local_95.f_10[iParam0 /*7*/].f_2, 4))
							{
								SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
								SET_PED_CONFIG_FLAG(iVar0, 118, true);
							}
						}
						if (!(IS_PED_JACKING(iVar0) && IS_PED_JACKING(iVar0) == IS_PED_JACKING(iLocal_103)))
						{
							if (!IS_PED_FLEEING(iVar0))
							{
								if (func_503(iVar0))
								{
									if ((IS_PED_IN_ANY_VEHICLE(iVar0, 1) || IS_PED_IN_ANY_VEHICLE(iVar0)) && !IS_PED_IN_ANY_VEHICLE(Local_95.f_2, 10))
									{
										if (!func_504(iVar0, -258271821) && !func_504(iVar0, -1273030092))
										{
											if (IS_PED_SITTING_IN_ANY_VEHICLE(iVar0))
											{
												iVar7 = GET_VEHICLE_PED_IS_IN(iVar0, 1);
												iVar8 = GET_ENTITY_MODEL(iVar7);
												if (IS_BIT_SET(Local_95.f_2, 13))
												{
													SET_PED_COMBAT_ATTRIBUTES(iVar0, 17, true);
													SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, false);
													SET_PED_COMBAT_ATTRIBUTES(iVar0, 1, false);
												}
												else if (IS_THIS_MODEL_A_HELI(iVar8))
												{
													TASK_HELI_MISSION(iVar0, iVar7, 0, TASK_HELI_MISSION(), 0f, 0f, 0f, 8, 20f, 0f, -1f, 80, 80, -1f, 0);
												}
												else if (IS_THIS_MODEL_A_PLANE(iVar8))
												{
													TASK_PLANE_MISSION(iVar0, iVar7, 0, TASK_PLANE_MISSION(), 0f, 0f, 0f, 8, 25f, 0f, -1f, 80, 80, 1);
												}
												else if (GET_ENTITY_MODEL(iVar7) == joaat("taxi"))
												{
													SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
													SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, true);
													SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, false);
													TASK_SMART_FLEE_PED(iVar0, TASK_SMART_FLEE_PED(iLocal_103), 10000f, -1, 1, 0);
												}
												else
												{
													TASK_VEHICLE_DRIVE_WANDER(iVar0, TASK_VEHICLE_DRIVE_WANDER(iVar0, 1), 60f, 786468);
												}
											}
										}
									}
									else if (!func_504(iVar0, 1805844857))
									{
										if (func_6(iLocal_103, 1, 1))
										{
											TASK_SMART_FLEE_PED(iVar0, TASK_SMART_FLEE_PED(iLocal_103), 10000f, -1, 1, 0);
										}
									}
								}
							}
						}
						break;
					
					case 4:
						func_492(Local_95.f_10[iParam0 /*7*/], 0);
						break;
				}
				if (IS_BIT_SET(Local_95.f_2, 13))
				{
					CLEAR_PED_TASKS(CLEAR_PED_TASKS(Local_95.f_10[iParam0 /*7*/]));
					SET_PED_COMBAT_ATTRIBUTES(SET_PED_COMBAT_ATTRIBUTES(Local_95.f_10[iParam0 /*7*/]), 17, true);
					SET_PED_COMBAT_ATTRIBUTES(SET_PED_COMBAT_ATTRIBUTES(Local_95.f_10[iParam0 /*7*/]), 6, false);
					SET_PED_COMBAT_ATTRIBUTES(SET_PED_COMBAT_ATTRIBUTES(Local_95.f_10[iParam0 /*7*/]), 1, false);
				}
				func_484(iVar0);
			}
		}
	}
}

void func_484(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (IS_BIT_SET(iLocal_98, 16))
	{
		iVar0 = Local_97[NETWORK_PLAYER_ID_TO_INT() /*5*/].f_3;
		iVar1 = func_485(iVar0);
		if (iVar1 == 1)
		{
			CLEAR_BIT(&iLocal_98, 15);
			CLEAR_BIT(&iLocal_98, 16);
			if (!func_50())
			{
				NETWORK_SPENT_ROBBED_BY_MUGGER(iVar0, 0, 0);
			}
			if (iVar0 > Global_262145.f_8064)
			{
				iVar0 = Global_262145.f_8064;
			}
			SET_PED_MONEY(iParam0, iVar0);
			SET_BIT(&(Local_97[SET_BIT() /*5*/].f_1), 5);
		}
		else if (iVar1 == 0)
		{
			CLEAR_BIT(&iLocal_98, 15);
			CLEAR_BIT(&iLocal_98, 16);
			SET_BIT(&(Local_97[SET_BIT() /*5*/].f_1), 6);
		}
		else
		{
			return;
		}
	}
}

int func_485(int iParam0)
{
	if (func_50())
	{
		if (func_488(iParam0))
		{
			if (func_487(iLocal_286) == 2)
			{
				_NETWORK_SHOP_SET_TELEMETRY_NONCE_SEED(func_486(iLocal_286));
				NETWORK_SPENT_ROBBED_BY_MUGGER(iParam0, 0, 0);
				func_321(iLocal_286);
				return 1;
			}
			else
			{
				func_321(iLocal_286);
				return 0;
			}
		}
	}
	else
	{
		return 1;
	}
	return -1;
}

int func_486(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263810[iParam0 /*84*/].f_65;
	}
	return -1;
}

int func_487(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263810[iParam0 /*84*/].f_65.f_2;
	}
	return 0;
}

int func_488(int iParam0)
{
	if (!IS_BIT_SET(iLocal_98, 15))
	{
		func_319(&iLocal_286, -1135378931, 537254313, 1474183246, 1839532116, iParam0, 4, 3);
		func_491(&uLocal_287, 0, 0);
		SET_BIT(&iLocal_98, 15);
	}
	else if (func_490(iLocal_286) || func_489(&uLocal_287, 10000, 0))
	{
		return 1;
	}
	return 0;
}

int func_489(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_481(uParam0, bParam2, 0);
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

int func_490(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263810[iParam0 /*84*/].f_65.f_2 != 1;
	}
	return 0;
}

void func_491(var uParam0, bool bParam1, bool bParam2)
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

void func_492(int iParam0, bool bParam1)
{
	if (NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		if (NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0))
		{
			if (!func_493(iParam0))
			{
				if (IS_BIT_SET(Local_95.f_2, 13))
				{
					CLEAR_PED_TASKS(CLEAR_PED_TASKS(iParam0));
					SET_PED_COMBAT_ATTRIBUTES(SET_PED_COMBAT_ATTRIBUTES(iParam0), 17, true);
					SET_PED_COMBAT_ATTRIBUTES(SET_PED_COMBAT_ATTRIBUTES(iParam0), 6, false);
					SET_PED_COMBAT_ATTRIBUTES(SET_PED_COMBAT_ATTRIBUTES(iParam0), 1, false);
				}
				else
				{
					if (bParam1)
					{
						CLEAR_PED_TASKS(CLEAR_PED_TASKS(iParam0));
					}
					SET_PED_COMBAT_ATTRIBUTES(SET_PED_COMBAT_ATTRIBUTES(iParam0), 6, true);
					SET_PED_COMBAT_ATTRIBUTES(SET_PED_COMBAT_ATTRIBUTES(iParam0), 1, true);
				}
			}
		}
		func_242(&iParam0);
	}
}

int func_493(int iParam0)
{
	if (NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return IS_PED_INJURED(IS_PED_INJURED(iParam0));
	}
	return 1;
}

int func_494(int iParam0)
{
	int iVar0;
	
	if (IS_PED_IN_ANY_VEHICLE(iParam0, 1))
	{
		iVar0 = GET_VEHICLE_PED_IS_IN(iParam0, 1);
	}
	if (IS_PED_JACKING(iParam0))
	{
		iVar0 = SET_EXCLUSIVE_PHONE_RELATIONSHIPS(iParam0);
	}
	if (!DOES_ENTITY_EXIST(iVar0))
	{
		if (func_505(iLocal_103))
		{
			iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(iLocal_103), 1);
		}
	}
	if (DOES_ENTITY_EXIST(iVar0))
	{
		if (func_495(iVar0))
		{
			return 0;
		}
		if (IS_PED_IN_ANY_BOAT(iParam0) || IS_PED_IN_ANY_BOAT(IS_PED_IN_ANY_BOAT(iVar0)))
		{
			if (!IS_ENTITY_IN_WATER(iVar0))
			{
				return 0;
			}
		}
		if (GET_ENTITY_MODEL(iVar0) == -1881846085)
		{
			return 0;
		}
	}
	return 1;
}

int func_495(int iParam0)
{
	if (DOES_ENTITY_EXIST(iParam0))
	{
		if (IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
		else if (!IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (!IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

Vector3 func_496(vector3 vParam0)
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

var func_497(int iParam0)
{
	return Global_1590446[iParam0 /*871*/].f_211.f_6;
}

int func_498(int iParam0)
{
	var uVar0;
	
	uVar0 = func_499(iParam0);
	return uVar0;
}

int func_499(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == PLAYER_ID())
		{
			return NETWORK_GET_VC_WALLET_BALANCE(-1);
		}
		else if (func_294(iParam0))
		{
			return Global_1590446[iParam0 /*871*/].f_211.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

float func_500(int iParam0)
{
	if (!IS_BIT_SET(Local_95.f_10[iParam0 /*7*/].f_2, 2))
	{
		return 1f;
	}
	return 3f;
}

int func_501(int iParam0, int iParam1)
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
		}
	}
	return -2;
}

int func_502(int iParam0, int iParam1)
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

int func_503(int iParam0)
{
	if ((!IS_PED_INJURED(iParam0) && !IS_PED_INJURED(iParam0, 0)) && !IS_PED_INJURED(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_504(int iParam0, int iParam1)
{
	if (GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
	{
		return 1;
	}
	return 0;
}

int func_505(int iParam0)
{
	if (_0x690A61A6D13583F6(iParam0))
	{
		return 0;
	}
	if (IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE(iParam0)))
	{
		return 1;
	}
	return 0;
}

void func_506(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (DECOR_EXIST_ON(iParam0, "AttributeDamage"))
	{
		iVar0 = DECOR_GET_INT(iParam0, "AttributeDamage");
	}
	SET_BIT(&iVar0, iParam1);
	DECOR_SET_INT(iParam0, "AttributeDamage", iVar0);
}

void func_507()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = IS_BIT_SET(Local_95.f_2, 6);
	bVar1 = IS_BIT_SET(Local_95.f_2, 10);
	func_512();
	if (iLocal_101 != 1)
	{
		if (IS_BIT_SET(Local_95.f_3, 12))
		{
			func_509();
		}
	}
	if (DOES_BLIP_EXIST(iLocal_110))
	{
		func_508(&iLocal_110);
	}
	iVar3 = 0;
	while (iVar3 < func_478(iLocal_101))
	{
		iLocal_99[iVar3] = 0;
		iVar3++;
	}
	if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_95.f_42 = -1;
		Local_95.f_5 = iLocal_106;
		Local_95.f_6 = iLocal_106;
		Local_95.f_7 = iLocal_106;
		Local_95.f_1 = 0;
		Local_95.f_4 = 0;
		Local_95.f_2 = 0;
		iVar3 = 0;
		while (iVar3 < func_478(iLocal_101))
		{
			bVar2 = IS_BIT_SET(Local_95.f_10[iVar3 /*7*/].f_2, 6);
			Local_95.f_10[iVar3 /*7*/].f_2 = 0;
			Local_95.f_10[iVar3 /*7*/].f_6 = -1;
			if (bVar2)
			{
				SET_BIT(&(Local_95.f_10[iVar3 /*7*/].f_2), 6);
			}
			iVar3++;
		}
	}
	Local_97[NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1 = 0;
	Local_97[NETWORK_PLAYER_ID_TO_INT() /*5*/].f_2 = -1;
	iLocal_98 = 0;
	if (bVar0)
	{
		SET_BIT(&(Local_95.f_2), 6);
	}
	if (bVar1)
	{
		SET_BIT(&(Local_95.f_2), 11);
		SET_BIT(&iLocal_98, 8);
	}
	SET_BIT(&iLocal_98, 4);
	SET_BIT(&iLocal_98, 11);
}

void func_508(int iParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (DOES_BLIP_EXIST(*iParam0))
	{
		REMOVE_BLIP(iParam0);
		bVar0 = true;
	}
	if (DOES_BLIP_EXIST(iParam0->f_1))
	{
		REMOVE_BLIP(&(iParam0->f_1));
		bVar0 = true;
	}
	if (DOES_ENTITY_EXIST(iParam0->f_7))
	{
		if (!IS_ENTITY_DEAD(iParam0->f_7, 0))
		{
			if (DOES_PED_HAVE_AI_BLIP(iParam0->f_7))
			{
				_SET_PED_AI_BLIP(iParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

void func_509()
{
	switch (iLocal_101)
	{
		case 0:
			func_511(&(Global_1575012[3]));
			break;
		
		case 1:
			func_510();
			break;
	}
}

void func_510()
{
	int iVar0;
	
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_1574964[iVar0], -1467815081);
			SET_RELATIONSHIP_BETWEEN_GROUPS(3, -1467815081, Global_1574964[iVar0]);
			iVar0++;
		}
	}
}

void func_511(var uParam0)
{
	int iVar0;
	
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_1574964[iVar0], *uParam0);
			SET_RELATIONSHIP_BETWEEN_GROUPS(3, *uParam0, Global_1574964[iVar0]);
			iVar0++;
		}
	}
}

void func_512()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_478(iLocal_101))
	{
		bVar1 = false;
		if (iLocal_101 == 0)
		{
			if (!IS_BIT_SET(Local_95.f_2, 1))
			{
				bVar1 = true;
			}
		}
		func_492(Local_95.f_10[iVar0 /*7*/], bVar1);
		iVar0++;
	}
}

void func_513()
{
	func_514();
	if (iLocal_101 != 1)
	{
		func_482();
	}
}

void func_514()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_478(iLocal_101))
	{
		if (NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_10[iVar0 /*7*/]))
		{
			if (NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_95.f_10[iVar0 /*7*/]))
			{
				iVar1 = NET_TO_PED(Local_95.f_10[iVar0 /*7*/]);
				if (!IS_ENTITY_DEAD(iVar1, 0))
				{
					SET_PED_RESET_FLAG(iVar1, 151, true);
				}
			}
		}
		iVar0++;
	}
	if (Global_2531497.f_1703)
	{
	}
	if (iLocal_101 == 1)
	{
		if (PLAYER_ID() == iLocal_103)
		{
			if (IS_BIT_SET(Local_95.f_1, 0))
			{
				if (!IS_INCIDENT_VALID(uLocal_283))
				{
					if (func_6(iLocal_103, 1, 1))
					{
						if (Local_95.f_50)
						{
							CREATE_INCIDENT_WITH_ENTITY(15, CREATE_INCIDENT_WITH_ENTITY(iLocal_103), 4, 0f, &uLocal_283, -1467815081, 0);
						}
						else if (Local_95.f_52)
						{
							CREATE_INCIDENT_WITH_ENTITY(16, CREATE_INCIDENT_WITH_ENTITY(iLocal_103), 4, 0f, &uLocal_283, -1467815081, Local_95.f_53);
						}
						else
						{
							CREATE_INCIDENT_WITH_ENTITY(14, CREATE_INCIDENT_WITH_ENTITY(iLocal_103), 4, 0f, &uLocal_283, 0, 0);
						}
					}
				}
				if (Global_2531497.f_1703)
				{
					if (!IS_BIT_SET(Local_97[IS_BIT_SET() /*5*/].f_1, 3))
					{
						SET_BIT(&(Local_97[SET_BIT() /*5*/].f_1), 3);
					}
				}
			}
		}
	}
	else if (iLocal_101 == 0)
	{
		if (Local_95.f_42 != -1)
		{
			if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_95.f_10[Local_95.f_42 /*7*/]))
			{
				if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(Local_95.f_10[Local_95.f_42 /*7*/]), 0) && !func_518(IS_ENTITY_DEAD(Local_95.f_10[Local_95.f_42 /*7*/])))
				{
					if (Local_95.f_10[Local_95.f_42 /*7*/].f_5 == 3)
					{
						func_515(Local_95.f_10[Local_95.f_42 /*7*/], &iLocal_110, -1082130432, 0, 1, 0, 0, -1, -1, 1);
						if (DOES_BLIP_EXIST(iLocal_110))
						{
							if (!IS_BIT_SET(iLocal_98, 6))
							{
								SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_110, "FM_MGR_BLP");
								SET_BIT(&iLocal_98, 6);
							}
						}
					}
				}
				else if (DOES_BLIP_EXIST(iLocal_110))
				{
					func_508(&iLocal_110);
				}
			}
			if (PLAYER_ID() == iLocal_102)
			{
				if (!IS_BIT_SET(iLocal_98, 14))
				{
					if (func_373("MPCT_mugsuc", "LAMAR", 19))
					{
						SET_BIT(&iLocal_98, 14);
					}
				}
			}
		}
	}
}

void func_515(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
{
	if (NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		if (func_517())
		{
			Global_2437549 = PLAYER_ID();
		}
		if (bParam3)
		{
			func_516(NET_TO_PED(iParam0), iParam1, 1, Global_2437549, bParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_516(NET_TO_PED(iParam0), iParam1, -1, Global_2437549, bParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (DOES_BLIP_EXIST(*iParam1))
	{
		func_508(iParam1);
	}
}

int func_516(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!IS_PED_INJURED(iParam0))
	{
		if (!DOES_PED_HAVE_AI_BLIP(iParam0))
		{
			if (iParam8 == -1)
			{
				_SET_PED_AI_BLIP(iParam0, 1);
			}
			else
			{
				0xB13DCB4C6FAAD238(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			_SET_AI_BLIP_TYPE(iParam0, iParam2);
			_SET_AI_BLIP_MAX_DISTANCE(iParam0, fParam6);
			if (DOES_BLIP_EXIST(*uParam1))
			{
				SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			0xFCFACD0DB9D7A57D(iParam0, iParam9);
		}
		_IS_AI_BLIP_ALWAYS_SHOWN(iParam0, bParam4);
		HIDE_SPECIAL_ABILITY_LOCKON_OPERATION(iParam0, iParam5);
		*uParam1 = _0x7CD934010E115C2C(iParam0);
		if (!iParam9 == -1)
		{
			if (DOES_BLIP_EXIST(*uParam1))
			{
				if (!iParam8 == -1)
				{
					SET_BLIP_COLOUR(*uParam1, iParam8);
				}
				if (!IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
					if (bParam10)
					{
						ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
					}
					else
					{
						ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
					}
					END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!IS_BIT_SET(uParam1->f_6, 2))
		{
			if (DOES_BLIP_EXIST(*uParam1))
			{
				SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			uParam1->f_1 = _GET_AI_BLIP(iParam0);
			if (!IS_BIT_SET(uParam1->f_6, 3))
			{
				if (DOES_BLIP_EXIST(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						SET_BLIP_COLOUR(uParam1->f_1, iParam8);
					}
					if (!IS_STRING_NULL_OR_EMPTY(sParam7))
					{
						BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
						if (bParam10)
						{
							ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
						}
						else
						{
							ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
						}
						END_TEXT_COMMAND_SET_BLIP_NAME(uParam1->f_1);
					}
					SET_BLIP_PRIORITY(uParam1->f_1, 7);
					SET_BIT(&(uParam1->f_6), 3);
				}
			}
			else if (!DOES_BLIP_EXIST(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				CLEAR_BIT(&(uParam1->f_6), 3);
			}
		}
		else if (DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_517()
{
	return Global_1312850;
}

int func_518(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (IS_PED_IN_ANY_VEHICLE(iParam0, 0))
	{
		iVar0 = GET_VEHICLE_PED_IS_IN(iParam0, 0);
		if (IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			if (DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECOR_EXIST_ON(iVar0, "MPBitset"))
				{
					iVar1 = DECOR_GET_INT(iVar0, "MPBitset");
				}
				if (IS_BIT_SET(iVar1, 12))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_519()
{
	return Local_95;
}

int func_520(int iParam0)
{
	return Local_97[iParam0 /*5*/];
}

void func_521()
{
	if (PLAYER_ID() == iLocal_103)
	{
		if (Global_30886)
		{
			if (!IS_BIT_SET(Local_97[iLocal_108 /*5*/].f_1, 4))
			{
				SET_BIT(&(Local_97[iLocal_108 /*5*/].f_1), 4);
			}
		}
		else
		{
			CLEAR_BIT(&(Local_97[iLocal_108 /*5*/].f_1), 4);
		}
	}
}

void func_522()
{
	bool bVar0;
	
	bVar0 = false;
	if (PLAYER_ID() == iLocal_102)
	{
		if (IS_BIT_SET(Global_1573339, 0))
		{
			CLEAR_BIT(&Global_1573339, 0);
			bVar0 = true;
		}
		if (!IS_BIT_SET(Local_97[iLocal_102 /*5*/].f_1, 2))
		{
			if (IS_BIT_SET(Local_95.f_1, 11))
			{
				SET_BIT(&(Local_97[iLocal_102 /*5*/].f_1), 2);
				bVar0 = true;
			}
		}
		else if (!IS_BIT_SET(Local_95.f_1, 11))
		{
			CLEAR_BIT(&(Local_97[iLocal_102 /*5*/].f_1), 2);
		}
		if (bVar0)
		{
			Local_97[NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4 = func_526();
			func_523(Local_97[NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4);
		}
	}
	else if (Local_97[NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4 != Local_95.f_44)
	{
		Local_97[NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4 = Local_95.f_44;
		func_523(Local_97[NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4);
		bVar0 = true;
	}
}

void func_523(int iParam0)
{
	switch (iLocal_101)
	{
		case 0:
			func_525(&(Global_1575012[3]), iParam0);
			break;
		
		case 1:
			func_524(iParam0);
			break;
	}
}

void func_524(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (IS_BIT_SET(iParam0, iVar0))
		{
			SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574964[iVar0], -1467815081);
			SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1467815081, Global_1574964[iVar0]);
		}
		else
		{
			SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_1574964[iVar0], -1467815081);
			SET_RELATIONSHIP_BETWEEN_GROUPS(3, -1467815081, Global_1574964[iVar0]);
		}
		iVar0++;
	}
}

void func_525(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (IS_BIT_SET(iParam1, iVar0))
		{
			SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574964[iVar0], *uParam0);
			SET_RELATIONSHIP_BETWEEN_GROUPS(1, *uParam0, Global_1574964[iVar0]);
		}
		else
		{
			SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_1574964[iVar0], *uParam0);
			SET_RELATIONSHIP_BETWEEN_GROUPS(3, *uParam0, Global_1574964[iVar0]);
		}
		iVar0++;
	}
}

int func_526()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iLocal_101 == 1 || iLocal_101 == 0)
		{
			if (iLocal_102 == INT_TO_PLAYERINDEX(iVar1))
			{
				SET_BIT(&iVar0, iVar1);
			}
		}
		else if (PLAYER_ID() == PLAYER_ID(iVar1))
		{
			SET_BIT(&iVar0, iVar1);
		}
		else if (func_6(INT_TO_PLAYERINDEX(iVar1), 0, 1))
		{
			if (func_51(INT_TO_PLAYERINDEX(iVar1)))
			{
				SET_BIT(&iVar0, iVar1);
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_527()
{
	switch (iLocal_101)
	{
		case 0:
			if (!IS_BIT_SET(iLocal_98, 11))
			{
				if (PLAYER_ID() == iLocal_102)
				{
					if (func_6(iLocal_103, 1, 1))
					{
						func_340("GC_TCK_60", iLocal_103, 0, 0, 0, 1, 1, 0);
						SET_BIT(&iLocal_98, 11);
					}
				}
			}
			if (!IS_BIT_SET(iLocal_98, 12))
			{
				if (IS_BIT_SET(Local_95.f_1, 8))
				{
					if (PLAYER_ID() == iLocal_102)
					{
						if (func_6(iLocal_103, 1, 1))
						{
							func_340("GC_TCK_62", iLocal_103, 0, 0, 0, 1, 1, 0);
							SET_BIT(&iLocal_98, 12);
						}
					}
				}
			}
			if (IS_BIT_SET(Local_95.f_2, 10))
			{
				if (!IS_BIT_SET(iLocal_98, 8))
				{
					if (PLAYER_ID() == iLocal_102)
					{
						if (func_6(iLocal_103, 1, 1))
						{
							func_340("GC_TCK_65", iLocal_103, 0, 0, 0, 1, 1, 0);
							SET_BIT(&iLocal_98, 8);
						}
					}
				}
			}
			else if (!IS_BIT_SET(iLocal_98, 13))
			{
				if (!IS_BIT_SET(Local_95.f_2, 11))
				{
					if (IS_BIT_SET(Local_95.f_1, 8))
					{
						if (IS_BIT_SET(Local_95.f_2, 6))
						{
							if (PLAYER_ID() == iLocal_102)
							{
								if (func_6(iLocal_103, 1, 1))
								{
									func_340("GC_TCK_63", iLocal_103, 0, 0, 0, 1, 1, 0);
									SET_BIT(&iLocal_98, 13);
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!IS_BIT_SET(iLocal_98, 11))
			{
				if (PLAYER_ID() == iLocal_102)
				{
					if (func_6(iLocal_103, 1, 1))
					{
						if (Local_95.f_50)
						{
							func_340("HS_SUCC", iLocal_103, 0, 0, 0, 1, 1, 0);
						}
						else if (Local_95.f_52)
						{
							func_340("GO_ASS_SUCC", iLocal_103, 0, 0, 0, 1, 1, 0);
						}
						else
						{
							func_340("GC_TCK_70", iLocal_103, 0, 0, 0, 1, 1, 0);
						}
						SET_BIT(&iLocal_98, 11);
					}
				}
				else if (PLAYER_ID() == iLocal_103)
				{
					if (func_6(iLocal_102, 1, 1))
					{
						if (Local_95.f_50)
						{
							if (Local_95.f_51)
							{
								func_529("HS_A_SUCC", 1);
							}
							else
							{
								func_340("HS_SENT", iLocal_102, 0, 0, 0, 1, 1, 0);
							}
						}
						else if (Local_95.f_52)
						{
							func_340("GO_ASS_SENT", iLocal_102, 0, 0, 0, 1, 1, 0);
						}
						else
						{
							func_340("GC_TCK_71", iLocal_102, 0, 0, 0, 1, 1, 0);
						}
						SET_BIT(&iLocal_98, 11);
					}
				}
			}
			if (!IS_BIT_SET(iLocal_98, 10))
			{
				if (IS_BIT_SET(Local_95.f_1, 0))
				{
					if (IS_BIT_SET(Local_95.f_3, 6))
					{
						if (PLAYER_ID() == iLocal_102)
						{
							if (func_6(iLocal_103, 0, 1))
							{
								func_528(-1);
								if (Local_95.f_50)
								{
									if (!Local_95.f_51)
									{
										func_340("HS_KILLED", iLocal_103, 0, 0, 0, 1, 1, 0);
									}
								}
								else if (Local_95.f_52)
								{
									func_340("GO_ASS_KILL", iLocal_103, 0, 0, 0, 1, 1, 0);
								}
								else
								{
									func_340("GC_TCK_73", iLocal_103, 0, 0, 0, 1, 1, 0);
								}
								SET_BIT(&iLocal_98, 10);
							}
						}
					}
				}
			}
			if (!IS_BIT_SET(iLocal_98, 9))
			{
				if (IS_BIT_SET(Local_95.f_1, 0))
				{
					if (IS_BIT_SET(Local_95.f_3, 7))
					{
						if (PLAYER_ID() == iLocal_102)
						{
							if (func_6(iLocal_103, 0, 1))
							{
								if (Local_95.f_50)
								{
									func_340("HS_ESCAPED", iLocal_103, 0, 0, 0, 1, 1, 0);
								}
								else if (Local_95.f_52)
								{
									func_340("GO_ASS_ESC", iLocal_103, 0, 0, 0, 1, 1, 0);
								}
								else
								{
									func_340("GC_TCK_75", iLocal_103, 0, 0, 0, 1, 1, 0);
								}
								SET_BIT(&iLocal_98, 9);
							}
						}
					}
				}
			}
			break;
	}
}

void func_528(int iParam0)
{
	if (Global_1574398)
	{
		if (Global_1574402 && Global_1590446[PLAYER_ID() /*871*/] != 148)
		{
			if (Global_1573899.f_14 == INT_TO_PLAYERINDEX(iParam0))
			{
				Global_1627299++;
			}
		}
		else
		{
			Global_1627299++;
		}
	}
}

int func_529(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	iVar0 = END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
	func_341(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_530()
{
	if (GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) != Local_95.f_45)
	{
		if (func_538(Local_95.f_45, 0, 1))
		{
			if (_0x12B6281B6C6706C0(0) <= Local_95.f_45)
			{
				RESERVE_NETWORK_MISSION_OBJECTS(Local_95.f_45);
			}
		}
	}
	if (GET_NUM_RESERVED_MISSION_PEDS(false, 0) != Local_95.f_46)
	{
		if (func_537(Local_95.f_45, 0, 1))
		{
			if (_0xCB215C4B56A7FAE7(0) <= Local_95.f_46)
			{
				RESERVE_NETWORK_MISSION_PEDS(Local_95.f_46);
			}
		}
	}
	if (CAN_REGISTER_MISSION_ENTITIES(false, 0) != Local_95.f_47)
	{
		if (func_531(Local_95.f_45, 0, 1))
		{
			if (GET_NUM_RESERVED_MISSION_VEHICLES(0) <= Local_95.f_47)
			{
				IS_SPHERE_VISIBLE_TO_PLAYER(Local_95.f_47);
			}
		}
	}
}

bool func_531(int iParam0, bool bParam1, bool bParam2)
{
	return func_532(2, iParam0, 1, bParam1, bParam2);
}

int func_532(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!IS_BIT_SET(Global_1385512, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_536(iParam0) - func_535(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_535(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_536(iParam0) - func_534(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_535(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_536(iParam0) - func_535(iParam0, 1));
		}
		if (!bParam4 && Global_1590446[PLAYER_ID() /*871*/] != 3)
		{
			iVar1 = (iVar1 - func_533(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_533(int iParam0)
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

int func_534(int iParam0)
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

int func_535(int iParam0, bool bParam1)
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

int func_536(int iParam0)
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

bool func_537(int iParam0, bool bParam1, bool bParam2)
{
	return func_532(1, iParam0, 1, bParam1, bParam2);
}

bool func_538(int iParam0, bool bParam1, bool bParam2)
{
	return func_532(0, iParam0, 1, bParam1, bParam2);
}

void func_539()
{
	if (Local_95.f_50)
	{
		if (PLAYER_ID() == iLocal_102)
		{
			func_541(9);
		}
		else if (PLAYER_ID() == iLocal_103)
		{
			func_541(13);
		}
	}
	else if (Local_95.f_52)
	{
	}
	func_540();
}

void func_540()
{
	TERMINATE_THIS_THREAD();
}

void func_541(int iParam0)
{
	CLEAR_BIT(&(Global_1628955[CLEAR_BIT() /*614*/].f_11.f_5), iParam0);
}

int func_542()
{
	var uVar0;
	
	func_550(&uVar0);
	if (Global_1312850 == 0)
	{
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_549())
	{
		return 1;
	}
	if (Global_2461241)
	{
		return 1;
	}
	if (func_548())
	{
		return 1;
	}
	if (func_547(159))
	{
		if (!func_546())
		{
			return 1;
		}
	}
	if (func_547(157))
	{
		return 1;
	}
	if (!NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_543() != 0)
	{
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_543()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_543()
{
	switch (func_545())
	{
		case 0:
			return func_544();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_544()
{
	switch (Global_2461343)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_545()
{
	return Global_30736;
}

bool func_546()
{
	return Global_2448961.f_598;
}

int func_547(int iParam0)
{
	if (GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_548()
{
	return Global_2458999;
}

bool func_549()
{
	return Global_2448961.f_593;
}

void func_550(var uParam0)
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
					func_551(iVar0);
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

void func_551(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_6(vVar0.y, 1, 1))
		{
			iVar1 = GET_PLAYER_PED(vVar0.y);
			if (DOES_ENTITY_EXIST(iVar1))
			{
				if (IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && IS_VEHICLE_WINDOW_INTACT())
					{
						if (func_552(iVar2, &bVar3))
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

int func_552(int iParam0, var uParam1)
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

void func_553()
{
	wait(0);
}

void func_554(struct<21> Param0)
{
	func_560(32, Param0);
	func_559(0, -1, 0);
	NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_95, 56);
	NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_97, 161);
	SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (!func_558())
	{
		func_259();
	}
	iLocal_101 = Param0.f_16;
	iLocal_102 = INT_TO_PLAYERINDEX(Param0.f_17);
	if (NETWORK_IS_PLAYER_ACTIVE(iLocal_102))
	{
	}
	iLocal_103 = INT_TO_PLAYERINDEX(Param0.f_18);
	if (NETWORK_IS_PLAYER_ACTIVE(iLocal_103))
	{
		iLocal_104 = GET_HASH_KEY(GET_HASH_KEY(iLocal_103));
	}
	if (func_557(iLocal_102, 9) && iLocal_101 == 1)
	{
		Local_95.f_50 = 1;
		if (func_557(iLocal_103, 13))
		{
			Local_95.f_51 = 1;
		}
	}
	if (iLocal_101 == 1)
	{
		if (func_556(iLocal_102))
		{
			Local_95.f_52 = 1;
			Local_95.f_53 = func_555(iLocal_102);
		}
	}
	vLocal_105 = { Param0.f_10 };
	if (iLocal_101 == 1)
	{
		if (PLAYER_ID() == iLocal_102)
		{
			SET_BIT(&Global_1573339, 0);
		}
	}
	Global_1654081 = 0;
	Global_1654082 = 0;
	if (iLocal_101 == 1)
	{
		Global_2531497.f_1703 = 0;
	}
	Local_97[NETWORK_PLAYER_ID_TO_INT() /*5*/] = 0;
}

var func_555(int iParam0)
{
	return Global_1590446[iParam0 /*871*/].f_183.f_4;
}

bool func_556(int iParam0)
{
	return Global_1590446[iParam0 /*871*/].f_183 != func_13();
}

bool func_557(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_11.f_5, iParam1);
}

int func_558()
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
		if (func_549())
		{
			return 0;
		}
		if (func_547(157))
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

int func_559(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_540();
			}
			else
			{
				return 0;
			}
		}
		if (!func_517())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_540();
					}
					else
					{
						return 0;
					}
				}
				if (func_549())
				{
					if (!bParam2)
					{
						func_540();
					}
					else
					{
						return 0;
					}
				}
				if (func_547(157))
				{
					if (!bParam2)
					{
						func_540();
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
					func_540();
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
				func_540();
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
			func_540();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_560(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_540();
	}
	NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_16);
}

__________________________
Native Named by Reliency
1577160151
__________________________
