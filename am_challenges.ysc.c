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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
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
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	bool bLocal_114 = 0;
	bool bLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	vector3 vLocal_120 = { 0f, 0f, 0f };
	vector3 vLocal_121[65] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_122 = 0f;
	vector3 vLocal_123 = { 0f, 0f, 0f };
	vector3 vLocal_124 = { 0f, 0f, 0f };
	vector3 vLocal_125 = { 0f, 0f, 0f };
	vector3 vLocal_126 = { 0f, 0f, 0f };
	float fLocal_127 = 0f;
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
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	float fLocal_148 = 0f;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	int iLocal_161 = 0;
	vector3 vLocal_162[65] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_163[65] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_164[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	struct<68> Local_171 = { 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
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
	struct<535> Local_192 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_193 = -1;
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
	var uLocal_215 = -1082130432;
	var uLocal_216 = 3;
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
	var uLocal_232 = -1;
	var uLocal_233 = 0;
	var uLocal_234 = -1;
	var uLocal_235 = -1;
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
	var uLocal_257 = -1082130432;
	var uLocal_258 = 3;
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
	var uLocal_274 = -1;
	var uLocal_275 = 0;
	var uLocal_276 = -1;
	var uLocal_277 = -1;
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
	var uLocal_299 = -1082130432;
	var uLocal_300 = 3;
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
	var uLocal_316 = -1;
	var uLocal_317 = 0;
	var uLocal_318 = -1;
	var uLocal_319 = -1;
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
	var uLocal_341 = -1082130432;
	var uLocal_342 = 3;
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
	var uLocal_358 = -1;
	var uLocal_359 = 0;
	var uLocal_360 = -1;
	var uLocal_361 = -1;
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
	var uLocal_383 = -1082130432;
	var uLocal_384 = 3;
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
	var uLocal_400 = -1;
	var uLocal_401 = 0;
	var uLocal_402 = -1;
	var uLocal_403 = -1;
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
	var uLocal_425 = -1082130432;
	var uLocal_426 = 3;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = -1;
	var uLocal_443 = 0;
	var uLocal_444 = -1;
	var uLocal_445 = -1;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = -1082130432;
	var uLocal_468 = 3;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = -1;
	var uLocal_485 = 0;
	var uLocal_486 = -1;
	var uLocal_487 = -1;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = -1082130432;
	var uLocal_510 = 3;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = -1;
	var uLocal_527 = 0;
	var uLocal_528 = -1;
	var uLocal_529 = -1;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = -1082130432;
	var uLocal_552 = 3;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = -1;
	var uLocal_569 = 0;
	var uLocal_570 = -1;
	var uLocal_571 = -1;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = -1082130432;
	var uLocal_594 = 3;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = -1;
	var uLocal_611 = 0;
	var uLocal_612 = -1;
	var uLocal_613 = -1;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = -1082130432;
	var uLocal_636 = 3;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = -1;
	var uLocal_653 = 0;
	var uLocal_654 = -1;
	var uLocal_655 = -1;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = -1082130432;
	var uLocal_678 = 3;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = -1;
	var uLocal_695 = 0;
	var uLocal_696 = -1;
	var uLocal_697 = -1;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = -1082130432;
	var uLocal_720 = 3;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = -1;
	var uLocal_737 = 0;
	var uLocal_738 = -1;
	var uLocal_739 = -1;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = -1082130432;
	var uLocal_762 = 3;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = -1;
	var uLocal_779 = 0;
	var uLocal_780 = -1;
	var uLocal_781 = -1;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = -1082130432;
	var uLocal_804 = 3;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = -1;
	var uLocal_821 = 0;
	var uLocal_822 = -1;
	var uLocal_823 = -1;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = -1082130432;
	var uLocal_846 = 3;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = -1;
	var uLocal_863 = 0;
	var uLocal_864 = -1;
	var uLocal_865 = -1;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = -1082130432;
	var uLocal_888 = 3;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = -1;
	var uLocal_905 = 0;
	var uLocal_906 = -1;
	var uLocal_907 = -1;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = -1082130432;
	var uLocal_930 = 3;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = -1;
	var uLocal_947 = 0;
	var uLocal_948 = -1;
	var uLocal_949 = -1;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = -1082130432;
	var uLocal_972 = 3;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = -1;
	var uLocal_989 = 0;
	var uLocal_990 = -1;
	var uLocal_991 = -1;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = -1082130432;
	var uLocal_1014 = 3;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = -1;
	var uLocal_1031 = 0;
	var uLocal_1032 = -1;
	var uLocal_1033 = -1;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = -1082130432;
	var uLocal_1056 = 3;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = -1;
	var uLocal_1073 = 0;
	var uLocal_1074 = -1;
	var uLocal_1075 = -1;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = -1082130432;
	var uLocal_1098 = 3;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = -1;
	var uLocal_1115 = 0;
	var uLocal_1116 = -1;
	var uLocal_1117 = -1;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = -1082130432;
	var uLocal_1140 = 3;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = -1;
	var uLocal_1157 = 0;
	var uLocal_1158 = -1;
	var uLocal_1159 = -1;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = -1082130432;
	var uLocal_1182 = 3;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = -1;
	var uLocal_1199 = 0;
	var uLocal_1200 = -1;
	var uLocal_1201 = -1;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = -1082130432;
	var uLocal_1224 = 3;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = -1;
	var uLocal_1241 = 0;
	var uLocal_1242 = -1;
	var uLocal_1243 = -1;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = -1082130432;
	var uLocal_1266 = 3;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = -1;
	var uLocal_1283 = 0;
	var uLocal_1284 = -1;
	var uLocal_1285 = -1;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = -1082130432;
	var uLocal_1308 = 3;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = -1;
	var uLocal_1325 = 0;
	var uLocal_1326 = -1;
	var uLocal_1327 = -1;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = -1082130432;
	var uLocal_1350 = 3;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = -1;
	var uLocal_1367 = 0;
	var uLocal_1368 = -1;
	var uLocal_1369 = -1;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = -1082130432;
	var uLocal_1392 = 3;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = -1;
	var uLocal_1409 = 0;
	var uLocal_1410 = -1;
	var uLocal_1411 = -1;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = -1082130432;
	var uLocal_1434 = 3;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = -1;
	var uLocal_1451 = 0;
	var uLocal_1452 = -1;
	var uLocal_1453 = -1;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = -1082130432;
	var uLocal_1476 = 3;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = -1;
	var uLocal_1493 = 0;
	var uLocal_1494 = -1;
	var uLocal_1495 = -1;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = -1082130432;
	var uLocal_1518 = 3;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = -1;
	var uLocal_1535 = 0;
	var uLocal_1536 = -1;
	struct<12> Local_1537[32];
	struct<12> Local_1538 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<21> Local_1539 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	iLocal_110 = -1;
	iLocal_111 = -1;
	fLocal_122 = 40000f;
	iLocal_150 = GET_SOUND_ID();
	iLocal_151 = GET_SOUND_ID();
	iLocal_152 = -1;
	iLocal_153 = -1;
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_768(ScriptParam_1539))
		{
			func_730();
		}
	}
	while (true)
	{
		func_729();
		if (func_722() || func_720())
		{
			func_730();
		}
		if (func_718())
		{
			func_730();
		}
		func_692();
		switch (func_691(NETWORK_PLAYER_ID_TO_INT()))
		{
			case 0:
				if (func_690() == 1)
				{
					if (func_689())
					{
						func_688(NETWORK_PLAYER_ID_TO_INT(), 1);
					}
				}
				break;
			
			case 1:
				if (func_690() == 1)
				{
					func_139();
					func_127();
				}
				else if (func_690() == 3)
				{
					func_688(NETWORK_PLAYER_ID_TO_INT(), 3);
				}
				break;
			
			case 3:
				func_730();
				break;
		}
		if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_690())
			{
				case 0:
					if (func_114())
					{
						func_113(1);
					}
					break;
				
				case 1:
					if (Local_171.f_37 == 6)
					{
						func_113(2);
					}
					else
					{
						func_3();
					}
					break;
				
				case 2:
					if (func_1(&uLocal_128, 1000, 0))
					{
						func_113(3);
					}
					break;
				
				case 3:
					func_730();
					break;
				}
		}
	}
}

int func_1(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_2(uParam0, bParam2, 0);
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

void func_2(var uParam0, bool bParam1, bool bParam2)
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

void func_3()
{
	bool bVar0;
	
	if (func_44(2, 0, 0, 0, 0))
	{
		if (!IS_BIT_SET(Local_171.f_2, 0))
		{
			SET_BIT(&(Local_171.f_2), 0);
			Local_171.f_1 = 0xBA7F0B77D80A4EB7();
		}
	}
	switch (Local_171.f_37)
	{
		case 0:
			if (func_43())
			{
				if (!func_31())
				{
					bVar0 = true;
				}
			}
			if (!bVar0)
			{
				func_30(1);
			}
			break;
		
		case 1:
			if (func_1(&(Local_171.f_43), func_29(), 0) || IS_BIT_SET(Local_171.f_2, 0))
			{
				func_30(2);
			}
			func_31();
			break;
		
		case 2:
			Local_171.f_38 = 0xBA7F0B77D80A4EB7();
			func_30(3);
			break;
		
		case 3:
			if (func_1(&(Local_171.f_39), func_28(0), 0) || IS_BIT_SET(Local_171.f_2, 0))
			{
				if (!IS_BIT_SET(Local_171.f_2, 1))
				{
					Local_171.f_1 = 0xBA7F0B77D80A4EB7();
					SET_BIT(&(Local_171.f_2), 1);
					func_27(&(Local_171.f_39), 0, 0);
				}
				else
				{
					func_30(4);
				}
			}
			func_13();
			func_9(&iLocal_153, &iLocal_152);
			func_31();
			break;
		
		case 4:
			if ((func_1(&(Local_171.f_41), 20000, 0) || Local_171.f_4[0] < 0) || func_6())
			{
				if (func_5(Local_171.f_3))
				{
					func_27(&(Local_171.f_45), 0, 0);
					func_30(5);
				}
				else
				{
					func_30(6);
				}
			}
			else
			{
				func_31();
			}
			break;
		
		case 5:
			if (func_4())
			{
				func_30(6);
			}
			break;
		
		case 6:
			break;
	}
}

int func_4()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_171.f_67[iVar0 /*2*/].f_1) && !NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_171.f_67[iVar0 /*2*/].f_1), 0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_5(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 6:
		case 12:
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_6()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(iVar1)))
		{
			iVar2 = NETWORK_GET_PLAYER_INDEX(NETWORK_GET_PLAYER_INDEX(iVar1));
			if (!func_7(iVar2))
			{
				if (!IS_BIT_SET(Local_1537[iVar1 /*12*/].f_1, 1) || Local_1537[iVar1 /*12*/].f_3 != 6)
				{
					return 0;
				}
				else if (IS_BIT_SET(Local_1537[iVar1 /*12*/].f_1, 0))
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_7(int iParam0)
{
	if (func_8(iParam0))
	{
		return 1;
	}
	return IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 8);
}

bool func_8(int iParam0)
{
	return IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 2);
}

void func_9(int iParam0, int iParam1)
{
	struct<14> Var0;
	int iVar1;
	
	if (*iParam0 >= 0 && *iParam1 >= 0)
	{
		iVar1 = NETWORK_GET_PLAYER_INDEX(NETWORK_GET_PLAYER_INDEX(*iParam0));
		if (*iParam1 == 0)
		{
			Var0.f_2 = -1057008853;
			Var0.f_10 = iVar1;
			func_10(Var0, func_11(1));
		}
		*iParam0 = -1;
		*iParam1 = -1;
	}
}

void func_10(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 564131320;
	Param0.f_1 = PLAYER_ID();
	if (!iParam13 == 0)
	{
		TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam13);
	}
}

int func_11(int iParam0)
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
			if (func_12(iVar2, 0, 0))
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

int func_12(int iParam0, bool bParam1, bool bParam2)
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

void func_13()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(iVar0)))
		{
			SET_BIT(&iVar3, iVar0);
		}
		else
		{
			func_26(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (IS_BIT_SET(iVar3, iVar0))
		{
			func_23(iVar0);
			SET_BIT(&(Local_171.f_47), iVar0);
			iVar1++;
			if (func_17(iVar0, 0))
			{
				iVar4 = NETWORK_GET_PLAYER_INDEX(NETWORK_GET_PLAYER_INDEX(iVar0));
				if (NETWORK_IS_PLAYER_ACTIVE(iVar4) && !func_14(iVar4, 0))
				{
					iVar2++;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 > Local_171.f_50)
	{
		Local_171.f_50 = iVar1;
	}
	else
	{
		Local_171.f_66 = (Local_171.f_50 - iVar1);
	}
	if (iVar2 > Local_171.f_51)
	{
		Local_171.f_51 = iVar2;
	}
}

bool func_14(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER_ID())
	{
		bVar0 = func_15(-1, 0) == 8;
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

int func_15(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_16();
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

int func_16()
{
	return Global_1312745;
}

int func_17(int iParam0, bool bParam1)
{
	float fVar0;
	
	if (iParam0 >= 0 && iParam0 < 32)
	{
		fVar0 = to_float(Local_1537[iParam0 /*12*/].f_4);
	}
	else if (iParam0 == -1)
	{
		fVar0 = to_float(Local_1537[PARTICIPANT_ID_TO_INT() /*12*/].f_4);
	}
	else
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_19())
		{
			return 1;
		}
	}
	if (func_18())
	{
		fVar0 = (fVar0 / 10f);
	}
	switch (Local_171.f_3)
	{
		case 0:
			if (fVar0 >= Global_262145.f_10939)
			{
				return 1;
			}
			break;
		
		case 2:
			if (fVar0 >= Global_262145.f_10940)
			{
				return 1;
			}
			break;
		
		case 3:
			if (fVar0 >= Global_262145.f_10941)
			{
				return 1;
			}
			break;
		
		case 5:
			if (fVar0 >= Global_262145.f_10942)
			{
				return 1;
			}
			break;
		
		case 4:
			if (fVar0 >= Global_262145.f_10943)
			{
				return 1;
			}
			break;
		
		case 1:
			if (fVar0 >= Global_262145.f_10944)
			{
				return 1;
			}
			break;
		
		case 6:
			if (fVar0 <= Global_262145.f_10945 && fVar0 != 0f)
			{
				return 1;
			}
			break;
		
		case 9:
			if (fVar0 >= Global_262145.f_10946)
			{
				return 1;
			}
			break;
		
		case 10:
			if (fVar0 >= Global_262145.f_10947)
			{
				return 1;
			}
			break;
		
		case 18:
			if (fVar0 >= Global_262145.f_10948)
			{
				return 1;
			}
			break;
		
		case 13:
			if (fVar0 >= Global_262145.f_10949)
			{
				return 1;
			}
			break;
		
		case 7:
			if (fVar0 >= IntToFloat(Global_262145.f_10950))
			{
				return 1;
			}
			break;
		
		case 8:
			if (fVar0 >= IntToFloat(Global_262145.f_10951))
			{
				return 1;
			}
			break;
		
		case 11:
			if (fVar0 >= Global_262145.f_11063)
			{
				return 1;
			}
			break;
		
		case 12:
			if (fVar0 >= Global_262145.f_11064)
			{
				return 1;
			}
			break;
		
		case 14:
			if (fVar0 >= IntToFloat(Global_262145.f_10954))
			{
				return 1;
			}
			break;
		
		case 15:
			if (fVar0 >= IntToFloat(Global_262145.f_10956))
			{
				return 1;
			}
			break;
		
		case 16:
			if (fVar0 >= IntToFloat(Global_262145.f_10957))
			{
				return 1;
			}
			break;
		
		case 17:
			if (fVar0 >= IntToFloat(Global_262145.f_10958))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_18()
{
	switch (Local_171.f_3)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_19()
{
	if ((func_20(0) || func_20(1)) || func_20(2))
	{
		return 1;
	}
	return 0;
}

int func_20(int iParam0)
{
	if (iParam0 >= 0)
	{
		if (Local_171.f_4[iParam0] == PARTICIPANT_ID_TO_INT() && func_21(Local_1537[PARTICIPANT_ID_TO_INT() /*12*/].f_4, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_21(int iParam0, int iParam1)
{
	if (!func_22())
	{
		return iParam0 > iParam1;
	}
	if (iParam0 == 0)
	{
		iParam0 = 2147483647;
	}
	if (iParam1 == 0)
	{
		iParam1 = 2147483647;
	}
	return iParam0 < iParam1;
}

int func_22()
{
	switch (Local_171.f_3)
	{
		case 6:
			return 1;
		
		default:
	}
	return 0;
}

void func_23(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = Local_1537[iParam0 /*12*/].f_4;
	iVar1 = Local_1537[iParam0 /*12*/].f_4.f_2;
	if (!IS_BIT_SET(Local_171.f_48, iParam0))
	{
		fVar2 = to_float(Local_171.f_4[0]);
		if ((!func_22() && IntToFloat(iVar0) >= (fVar2 / 2f)) || (func_22() && IntToFloat(iVar0) <= (fVar2 * 2f)))
		{
			Local_171.f_49++;
			SET_BIT(&(Local_171.f_48), iParam0);
		}
	}
	iVar3 = -1;
	iVar4 = -2;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (Local_171.f_4[iVar3] == iParam0)
		{
			iVar3 = 32;
		}
		else if (iVar4 >= -1)
		{
			if (iVar4 >= 0)
			{
				func_25(&(Local_171.f_4[iVar3]), &iVar4);
			}
		}
		else if ((Local_171.f_4[iVar3] < 0 || func_21(iVar0, Local_1537[Local_171.f_4[iVar3] /*12*/].f_4)) || func_24(iVar0, Local_1537[Local_171.f_4[iVar3] /*12*/].f_4, iVar1, Local_1537[Local_171.f_4[iVar3] /*12*/].f_4.f_2))
		{
			iVar4 = Local_171.f_4[iVar3];
			if (func_21(iVar0, 0))
			{
				iLocal_152 = iVar3;
				iLocal_153 = iParam0;
			}
			Local_171.f_4[iVar3] = iParam0;
			iVar5 = iVar3 + 1;
			while (iVar5 <= 31)
			{
				if (Local_171.f_4[iVar5] == iParam0)
				{
					Local_171.f_4[iVar5] = -1;
				}
				iVar5++;
			}
		}
		iVar3++;
	}
}

int func_24(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (Local_171.f_3 == 2)
	{
		if (iParam0 == iParam1 && iParam2 > iParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_25(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + *iParam1);
	*iParam1 = (*uParam0 - *iParam1);
	*uParam0 = (*uParam0 - *iParam1);
}

void func_26(int iParam0)
{
	int iVar0;
	
	if (IS_BIT_SET(Local_171.f_47, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Local_171.f_4[iVar0] == iParam0)
			{
				Local_171.f_4[iVar0] = -1;
				iVar0 = 32;
			}
			iVar0++;
		}
		CLEAR_BIT(&(Local_171.f_48), iParam0);
		CLEAR_BIT(&(Local_171.f_47), iParam0);
	}
}

void func_27(var uParam0, bool bParam1, bool bParam2)
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

int func_28(bool bParam0)
{
	if (IS_BIT_SET(Local_171.f_2, 1) && !bParam0)
	{
		return 750;
	}
	switch (Local_171.f_3)
	{
		case 0:
			return Global_262145.f_10256;
		
		case 8:
			return Global_262145.f_10258;
		
		case 3:
			return Global_262145.f_10259;
		
		case 1:
			return Global_262145.f_11049;
		
		case 6:
			return Global_262145.f_11050;
		
		case 10:
			return Global_262145.f_11052;
		
		case 11:
			return Global_262145.f_11054;
		
		case 12:
			return Global_262145.f_11055;
		
		case 15:
			return Global_262145.f_11059;
		
		case 16:
			return Global_262145.f_11060;
		
		case 17:
			return Global_262145.f_11061;
		
		case 18:
			return Global_262145.f_11062;
		
		case 13:
			return Global_262145.f_11053;
		
		case 14:
			return Global_262145.f_11056;
		
		case 2:
			return Global_262145.f_10261;
		
		case 7:
			return Global_262145.f_11051;
		
		case 9:
			return Global_262145.f_11057;
		
		case 5:
			return Global_262145.f_10262;
		
		case 4:
			return Global_262145.f_10260;
		
		default:
	}
	return -1;
}

int func_29()
{
	return Global_262145.f_11019;
}

void func_30(int iParam0)
{
	Local_171.f_37 = iParam0;
}

int func_31()
{
	struct<2> Var0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	
	if (func_43() && ((Local_171.f_37 == 0 || func_5(Local_171.f_3)) || Local_171.f_54 < 10))
	{
		Var0 = { Local_171.f_67[iLocal_147 /*2*/] };
		if (func_42(Var0))
		{
			if (!NETWORK_DOES_NETWORK_ID_EXIST(Var0.f_1))
			{
				if (func_40(Local_171.f_3, iLocal_147, &vVar1, &fVar2))
				{
					Local_171.f_55[iLocal_147] = func_36(iLocal_147);
					if (IS_BIT_SET(Local_1537[Local_171.f_55[iLocal_147] /*12*/].f_2, iLocal_147))
					{
						if (func_33(&(Local_171.f_67[iLocal_147 /*2*/].f_1), Var0, vVar1, fVar2, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0))
						{
							NETWORK_FADE_OUT_ENTITY(NETWORK_FADE_OUT_ENTITY(Local_171.f_67[iLocal_147 /*2*/].f_1), 1, 1);
							SET_VEHICLE_DOORS_LOCKED(SET_VEHICLE_DOORS_LOCKED(Local_171.f_67[iLocal_147 /*2*/].f_1), 1);
							_SET_ENTITY_SOMETHING(_SET_ENTITY_SOMETHING(Local_171.f_67[iLocal_147 /*2*/].f_1), true);
							_0x0AD9E8F87FF7C16F(_0x0AD9E8F87FF7C16F(Local_171.f_67[iLocal_147 /*2*/].f_1), 0);
							func_32(NET_TO_VEH(Local_171.f_67[iLocal_147 /*2*/].f_1), 1);
							if (DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
							{
								DECOR_SET_INT(DECOR_SET_INT(Local_171.f_67[iLocal_147 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 1);
							}
							if (DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
							{
								if (DECOR_EXIST_ON(DECOR_EXIST_ON(Local_171.f_67[iLocal_147 /*2*/].f_1), "MPBitset"))
								{
									iVar3 = DECOR_GET_INT(DECOR_GET_INT(Local_171.f_67[iLocal_147 /*2*/].f_1), "MPBitset");
								}
								SET_BIT(&iVar3, 10);
								SET_BIT(&iVar3, 11);
								DECOR_SET_INT(DECOR_SET_INT(Local_171.f_67[iLocal_147 /*2*/].f_1), "MPBitset", iVar3);
							}
							Local_171.f_55[iLocal_147] = -1;
							Local_171.f_54++;
						}
					}
				}
			}
		}
		iLocal_147++;
		if (iLocal_147 >= 10)
		{
			iLocal_147 = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_32(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECOR_GET_INT(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			SET_BIT(&iVar0, 13);
		}
		else
		{
			CLEAR_BIT(&iVar0, 13);
		}
		DECOR_SET_INT(iParam0, "MPBitset", iVar0);
	}
}

int func_33(var uParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!IS_MODEL_VALID(iParam1))
	{
		return 0;
	}
	if (!CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == -32878452)
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		CLEAR_AREA_OF_VEHICLES(vParam2, fVar0, 0, 0, 0, 0, false, 0);
	}
	iVar1 = CREATE_VEHICLE(iParam1, vParam2, fParam3, bParam5, bParam4, bParam12);
	if (DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = VEH_TO_NET(iVar1);
		Global_2531497.f_6245 = iVar1;
		if (NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam13)
			{
				_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar1, 1);
			}
			_SET_ENTITY_SOMETHING(iVar1, bParam8);
			if (NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam6)
				{
					SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
				}
				else
				{
					SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 0);
				}
				if (bParam11)
				{
					_SET_NETWORK_ID_SYNC_TO_PLAYER(*uParam0, _SET_NETWORK_ID_SYNC_TO_PLAYER(), 1);
				}
			}
			SET_VEHICLE_IS_STOLEN(iVar1, bParam7);
			0xB2E0C0D6922D31F2(iVar1, 1);
			if (bParam10)
			{
				0xFC40CBF7B90CA77C(iVar1);
				SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_34(vParam2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_34(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_35(PLAYER_ID(), vParam0, iParam2) > -1)
	{
		if ((Global_2405071.f_2910[1 /*6*/].f_5 == iParam3 && Global_2405071.f_2910[1 /*6*/].f_4 == iParam2) && vdist(Global_2405071.f_2910[1 /*6*/], vParam0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405071.f_2910[iVar0 /*6*/] = { Global_2405071.f_2910[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405071.f_2910[1 /*6*/] = { vParam0 };
		Global_2405071.f_2910[1 /*6*/].f_3 = fParam1;
		Global_2405071.f_2910[1 /*6*/].f_4 = iParam2;
		Global_2405071.f_2910[1 /*6*/].f_5 = iParam3;
	}
}

int func_35(int iParam0, vector3 vParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				vVar2 = { vParam1 };
				if (ABSF((Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - vVar2.z)) < 2f)
				{
					vVar2.z = Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (vdist(Global_2417783.f_461[iVar0 /*11*/][iVar1 /*5*/], vVar2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_36(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	var uVar5;
	int iVar6;
	
	fVar2 = 1000000f;
	if (func_39(iParam0, &vVar4, &uVar5))
	{
		iVar0 = 0;
		while (iVar0 <= (_NETWORK_GET_NUM_PARTICIPANTS_HOST() - 1))
		{
			if (NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(iVar0)))
			{
				iVar6 = NETWORK_GET_PLAYER_INDEX(NETWORK_GET_PLAYER_INDEX(iVar0));
				if (func_12(iVar6, 1, 1))
				{
					fVar3 = func_37(func_38(iVar6), vVar4);
					if (fVar3 < fVar2)
					{
						fVar2 = fVar3;
						iVar1 = iVar0;
					}
				}
			}
			iVar0++;
		}
	}
	return iVar1;
}

float func_37(vector3 vParam0, vector3 vParam1)
{
	vParam0.z = 0f;
	vParam1.z = 0f;
	return vdist(vParam0, vParam1);
}

Vector3 func_38(int iParam0)
{
	return GET_ENTITY_COORDS(GET_ENTITY_COORDS(iParam0), false);
}

int func_39(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1729.582f, -2943.77f, 12.9443f };
			*uParam2 = 300.078f;
			break;
		
		case 1:
			*uParam1 = { 677.2984f, 769.7758f, 204.6846f };
			*uParam2 = 82.8903f;
			break;
		
		case 2:
			*uParam1 = { 1073.972f, 3003.889f, 40.5508f };
			*uParam2 = 333.2717f;
			break;
		
		case 3:
			*uParam1 = { 1928.635f, 4702.327f, 40.1958f };
			*uParam2 = 327.9112f;
			break;
		
		case 4:
			*uParam1 = { 1278.65f, 6579.366f, 1.505f };
			*uParam2 = 84.26f;
			break;
		
		case 5:
			*uParam1 = { -1700.407f, -829.8932f, 8.2542f };
			*uParam2 = 70.1811f;
			break;
		
		case 6:
			*uParam1 = { -2733.589f, 2925.563f, 1.2152f };
			*uParam2 = 176.5378f;
			break;
		
		case 7:
			*uParam1 = { 1493.418f, -2442.99f, 64.9693f };
			*uParam2 = 52.9918f;
			break;
		
		case 8:
			*uParam1 = { 569.0449f, -772.5692f, 10.4088f };
			*uParam2 = 179.3501f;
			break;
		
		case 9:
			*uParam1 = { -905.1526f, 5548.172f, 5.5251f };
			*uParam2 = 95.8361f;
			break;
		
		default:
			return 0;
	}
	return 1;
}

int func_40(int iParam0, int iParam1, var uParam2, var uParam3)
{
	if (func_5(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { -1729.582f, -2943.77f, 12.9443f };
				*uParam3 = 300.078f;
				break;
			
			case 1:
				*uParam2 = { 677.2984f, 769.7758f, 204.6846f };
				*uParam3 = 82.8903f;
				break;
			
			case 2:
				*uParam2 = { 1073.972f, 3003.889f, 40.5508f };
				*uParam3 = 333.2717f;
				break;
			
			case 3:
				*uParam2 = { 1928.635f, 4702.327f, 40.1958f };
				*uParam3 = 327.9112f;
				break;
			
			case 4:
				*uParam2 = { 1278.65f, 6579.366f, 1.505f };
				*uParam3 = 84.26f;
				break;
			
			case 5:
				*uParam2 = { -1700.407f, -829.8932f, 8.2542f };
				*uParam3 = 70.1811f;
				break;
			
			case 6:
				*uParam2 = { -2733.589f, 2925.563f, 1.2152f };
				*uParam3 = 173.6421f;
				break;
			
			case 7:
				*uParam2 = { 1493.418f, -2442.99f, 64.9693f };
				*uParam3 = 52.9918f;
				break;
			
			case 8:
				*uParam2 = { 569.0449f, -772.5692f, 10.4088f };
				*uParam3 = 179.3501f;
				break;
			
			case 9:
				*uParam2 = { -905.1526f, 5548.172f, 5.5251f };
				*uParam3 = 95.8361f;
				break;
			
			default:
				return 0;
		}
	}
	else if (func_41(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { -3132.932f, 1130.534f, 19.683f };
				*uParam3 = 168.7723f;
				break;
			
			case 1:
				*uParam2 = { -1008.917f, -1640.027f, 3.4035f };
				*uParam3 = 235.1491f;
				break;
			
			case 2:
				*uParam2 = { 1075.063f, -2445.105f, 28.2896f };
				*uParam3 = 100.2369f;
				break;
			
			case 3:
				*uParam2 = { 1101.198f, -266.9387f, 68.3046f };
				*uParam3 = 359.2015f;
				break;
			
			case 4:
				*uParam2 = { 2658.878f, 1667.581f, 23.4886f };
				*uParam3 = 90.4833f;
				break;
			
			case 5:
				*uParam2 = { -399.1095f, 874.6328f, 230.2586f };
				*uParam3 = 107.5929f;
				break;
			
			case 6:
				*uParam2 = { 156.5429f, 3117.213f, 41.5677f };
				*uParam3 = 218.5338f;
				break;
			
			case 7:
				*uParam2 = { -2242.923f, 4315.749f, 46.7647f };
				*uParam3 = 236.8359f;
				break;
			
			case 8:
				*uParam2 = { -143.7363f, 6500.573f, 28.7366f };
				*uParam3 = 116.1312f;
				break;
			
			case 9:
				*uParam2 = { 1939.475f, 4628.652f, 39.3984f };
				*uParam3 = 350.0428f;
				break;
			
			default:
				return 0;
			}
	}
	return 1;
}

int func_41(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 3:
			return 1;
		
		default:
	}
	return 0;
}

bool func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	REQUEST_MODEL(iParam0);
	return HAS_MODEL_LOADED(iParam0);
}

bool func_43()
{
	return (func_5(Local_171.f_3) || func_41(Local_171.f_3));
}

int func_44(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_112(PLAYER_ID(), 0) || func_109(PLAYER_ID(), 0))
	{
		if (func_108(PLAYER_ID()) || func_106(PLAYER_ID()))
		{
			bParam2 = false;
		}
	}
	if (_0xCF61D4B4702EE9EB() < iParam0)
	{
		if (bParam2)
		{
			func_51(sParam3, sParam4, 1);
		}
		if (func_50(26, -1))
		{
			func_48(26, -1);
		}
		return 1;
	}
	if (func_47(&(Global_1574647.f_18)))
	{
		if (!func_1(&(Global_1574647.f_18), 7500, 0))
		{
			return 0;
		}
		func_46(&(Global_1574647.f_18));
	}
	if (func_45())
	{
		if (bParam2)
		{
			func_51(sParam3, sParam4, 0);
		}
		if (func_50(26, -1))
		{
			func_48(26, -1);
		}
		return 1;
	}
	if (iParam1 && NETWORK_GET_NUM_PARTICIPANTS() < iParam0)
	{
		if (bParam2)
		{
			func_51(sParam3, sParam4, 1);
		}
		if (func_50(26, -1))
		{
			func_48(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_45()
{
	return IS_BIT_SET(Global_1574647.f_1, 0);
}

void func_46(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_47(var uParam0)
{
	return uParam0->f_1;
}

void func_48(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	switch (iParam0)
	{
		case 0:
			_0x723C1CE13FBFDB67(0, iParam1);
			break;
		
		default:
			iVar1 = func_49(iParam1);
			iVar0 = GET_PROFILE_SETTING(iVar1);
			if (IS_BIT_SET(iVar0, iParam0))
			{
				CLEAR_BIT(&iVar0, iParam0);
				_0x723C1CE13FBFDB67(iVar0, iParam1);
			}
			break;
	}
}

int func_49(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_16();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		
		case 1:
			iVar0 = 910;
			break;
		
		case 2:
			iVar0 = 911;
			break;
		
		case 3:
			iVar0 = 912;
			break;
		
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

bool func_50(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar0 = func_49(iParam1);
	iVar1 = GET_PROFILE_SETTING(iVar0);
	return IS_BIT_SET(iVar1, iParam0);
}

void func_51(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!IS_BIT_SET(Global_1574647.f_1, 2) && !func_8(IS_BIT_SET())) && !func_7(IS_BIT_SET()))
	{
		if (IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			if (bParam2)
			{
				sParam1 = "FMEVEN_NUM2";
			}
			else
			{
				sParam1 = "FMEVEN_NUM3";
			}
		}
		func_52(66, sParam0, sParam1, 1, -1, 2, 1, 0);
		SET_BIT(&(Global_1574647.f_1), 2);
	}
}

int func_52(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_105(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_103(&(Var0.f_69), iParam7);
	}
	return func_53(&Var0);
}

int func_53(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2437549.f_3030)
		{
			return 0;
		}
	}
	func_68(uParam0, uParam0->f_17);
	func_65(uParam0);
	if (func_64())
	{
		func_65(uParam0);
	}
	if (func_63(uParam0->f_1))
	{
		func_56();
		if (Global_2437549.f_2708[0 /*80*/].f_2 == 0)
		{
			Global_2437549.f_2708[0 /*80*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2437549.f_2708[0 /*80*/].f_1 == 13 || Global_2437549.f_2708[0 /*80*/].f_1 == 53) || Global_2437549.f_2708[0 /*80*/].f_1 == 54) || Global_2437549.f_2708[0 /*80*/].f_1 == 58)
		{
			Global_2437549.f_2708[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2437549.f_2708[iVar0 + 1 /*80*/] = { Global_2437549.f_2708[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2437549.f_2708[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2437549.f_2708[iVar0 /*80*/].f_2 == 0)
		{
			Global_2437549.f_2708[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_56();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_103(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 2);
				Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_55(uParam0->f_69, 128))
			{
				if (func_54(Global_2437549.f_2708[iVar0 /*80*/].f_1))
				{
					Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
					func_103(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_54(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

bool func_55(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_56()
{
	bool bVar0;
	
	if (Global_2437549.f_3031)
	{
		return;
	}
	if (!Global_76845)
	{
		Global_76845 = 1;
		bVar0 = true;
	}
	func_57();
	if (bVar0)
	{
		Global_76845 = 0;
	}
}

void func_57()
{
	Global_2437549.f_3032 = 0;
	Global_2437549.f_3032.f_578 = 0;
	func_61(&(Global_2437549.f_3032.f_1));
	Global_2437549.f_3032.f_1.f_1 = 0;
	func_58(&(Global_2437549.f_3032.f_1));
}

void func_58(var uParam0)
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
				if (IS_SCREEN_FADED_OUT() && !func_60(0))
				{
					DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_59(0);
}

void func_59(int iParam0)
{
	Global_76837 = iParam0;
	Global_76838 = iParam0;
}

bool func_60(bool bParam0)
{
	if (!bParam0 && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return IS_BIT_SET(Global_76825, 0);
}

void func_61(var uParam0)
{
	func_62(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_62(var uParam0)
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

int func_63(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

bool func_64()
{
	return Global_2448961.f_17;
}

void func_65(var uParam0)
{
	if (func_67(uParam0->f_1))
	{
		uParam0->f_72 = func_66();
	}
}

int func_66()
{
	return 21;
}

int func_67(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
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
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_68(var uParam0, int iParam1)
{
	if (func_67(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_102() || !func_12(iParam1, 0, 1))
	{
		return;
	}
	if (func_54(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_69(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_69(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_100(iParam0) && !bParam4)
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
	if (((func_100(PLAYER_ID()) || (func_99() && func_98())) && !PLAYER_ID(Global_2531497.f_4591, 31)) && !bParam4)
	{
		iVar1 = func_97();
		if (DOES_ENTITY_EXIST(iVar1))
		{
			if (IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_12(NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_149437[iParam1] != -1)
							{
								return func_95(iParam1, iParam0, 0);
							}
							else
							{
								return func_82(iParam0, NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_82(iParam0, NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_149437[iParam1] != -1)
				{
					return func_95(iParam1, iParam0, 0);
				}
				else
				{
					return func_70(0, -1, 0);
				}
			}
			else
			{
				return func_70(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_149437[iParam1] != -1)
		{
			return func_95(iParam1, iParam0, 0);
		}
		else
		{
			return func_82(iParam0, PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_82(iParam0, PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_70(bool bParam0, int iParam1, bool bParam2)
{
	return func_71(PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_71(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = GET_PLAYER_TEAM(iParam0);
	if ((func_81() || (func_80() && func_78())) && Global_1384328.f_1)
	{
		if (bParam1)
		{
			return func_77(iParam2, iVar0);
		}
		else
		{
			return func_77(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_76(iVar0, iParam2, 0) && !IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_75(1);
				}
				else
				{
					return func_75(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_72(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_72(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_75(1);
	}
	return func_75(0);
}

int func_72(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_74(iParam0, iParam1, iParam3);
	if (func_73(Global_4456448.f_154360, 1))
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

int func_73(int iParam0, bool bParam1)
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

int func_74(int iParam0, int iParam1, int iParam2)
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
			if (!func_76(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_75(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_76(int iParam0, int iParam1, int iParam2)
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

int func_77(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_74(iParam1, iParam0, 4);
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

bool func_78()
{
	if (func_79())
	{
		return 1;
	}
	return IS_BIT_SET(Global_4456448.f_195024, 4);
}

bool func_79()
{
	return IS_BIT_SET(Global_4456448.f_184550, 12);
}

bool func_80()
{
	if (NETWORK_IS_ACTIVITY_SESSION())
	{
		return IS_BIT_SET(Global_4456448.f_195024, 0);
	}
	return ((IS_BIT_SET(Global_4456448.f_195024, 0) || Global_1654024) && IS_BIT_SET(joaat("fm_deathmatch_creator")) > 0);
}

int func_81()
{
	if (func_79() && NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_82(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_91())
			{
				iVar3 = func_87(iParam0);
				if (!iVar3 == -1)
				{
					return func_85(iVar3);
				}
			}
			if ((func_84(iParam1, iParam0, iVar0, 0) && !IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_76(IS_BIT_SET(iParam1), IS_BIT_SET(iParam0), 0) && IS_BIT_SET(Global_4456448.f_15, 23)) && !IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_75(1);
			}
			else if (IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_83(1);
			}
			else
			{
				return func_71(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574407 || Global_1574398) || Global_1590446[iParam0 /*871*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574407 == 1 && Global_1574417 == 0))
			{
				return func_75(1);
			}
			else
			{
				return func_71(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574402 && Global_1573899.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_87(iParam0);
	if (!iVar4 == -1)
	{
		return func_85(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_83(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_84(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_85(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_86(iParam0);
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

var func_86(int iParam0)
{
	return Global_2417783.f_2105.f_44[iParam0 /*2*/].f_1;
}

int func_87(int iParam0)
{
	if (!iParam0 == func_102())
	{
		if (func_89(iParam0, 1))
		{
			return Global_2417783.f_2105.f_11[func_88(iParam0)];
		}
	}
	return -1;
}

int func_88(int iParam0)
{
	if (iParam0 != func_102())
	{
		return Global_1628955[iParam0 /*614*/].f_11;
	}
	return func_102();
}

bool func_89(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_90(iParam0))
		{
			return 0;
		}
	}
	return Global_1628955[iParam0 /*614*/].f_11 != func_102();
}

int func_90(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (Global_1628955[iParam0 /*614*/].f_11 != func_102())
		{
			return Global_1628955[iParam0 /*614*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_91()
{
	if (((func_94() || func_93()) || func_64()) || func_92())
	{
		return 1;
	}
	return 0;
}

bool func_92()
{
	return Global_2448961.f_19;
}

var func_93()
{
	return Global_2448961.f_16;
}

var func_94()
{
	return Global_2448961.f_15;
}

int func_95(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969029.f_13[iParam0];
	if (func_91())
	{
		iVar2 = func_87(iParam1);
		if (!iVar2 == -1)
		{
			return func_85(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (IS_BIT_SET(Global_4456448.f_106[iParam0 /*11610*/].f_5831[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_102())
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
			iVar0 = func_71(iParam1, !bParam2, iParam0, 0);
		}
		if (IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_96(iParam0);
		}
		if (IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (IS_BIT_SET(Global_4456448.f_15, 26) && !func_76(iParam0, IS_BIT_SET(iParam1), 0))
		{
			iVar0 = func_83(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_96(int iParam0)
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

var func_97()
{
	return Global_2359302.f_2;
}

bool func_98()
{
	return IS_BIT_SET(Global_2359302, 4);
}

bool func_99()
{
	return IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_39.f_18, 14);
}

int func_100(int iParam0)
{
	if (func_14(iParam0, 0))
	{
		return 1;
	}
	if (func_101())
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

bool func_101()
{
	return IS_BIT_SET(Global_2359302, 3);
}

int func_102()
{
	return -1;
}

void func_103(var uParam0, int iParam1)
{
	func_104(uParam0, iParam1);
}

void func_104(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_105(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_102();
	uParam1->f_18 = func_102();
	uParam1->f_19 = func_102();
	uParam1->f_20 = func_102();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

bool func_106(int iParam0)
{
	return func_107(iParam0, 20);
}

bool func_107(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

int func_108(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_107(iParam0, 9);
	}
	return 0;
}

int func_109(int iParam0, int iParam1)
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 && func_110(Global_1628955[iParam0 /*614*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1)
	{
		if (func_110(Global_1628955[iParam0 /*614*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_111(iParam0, 0);
	return 0;
}

int func_111(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_112(int iParam0, int iParam1)
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 || (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_113(int iParam0)
{
	Local_171 = iParam0;
}

int func_114()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_171.f_4[iVar0] = -1;
		iVar0++;
	}
	func_46(&(Local_171.f_39));
	func_119();
	if (func_43())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_171.f_55[iVar0] = func_36(iVar0);
			iVar0++;
		}
		func_115();
	}
	return 1;
}

void func_115()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_41(Local_171.f_3))
		{
			Local_171.f_67[iVar0 /*2*/] = func_118();
		}
		else
		{
			Local_171.f_67[iVar0 /*2*/] = func_116();
		}
		iVar0++;
	}
}

int func_116()
{
	int iVar0;
	
	switch (Local_171.f_3)
	{
		case 12:
			return func_117();
			break;
	}
	iVar0 = GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("maverick");
		
		case 1:
			return joaat("mammatus");
		
		default:
	}
	return 0;
}

int func_117()
{
	int iVar0;
	
	iVar0 = GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("stunt");
		
		case 1:
			return joaat("besra");
		
		default:
	}
	return 0;
}

int func_118()
{
	int iVar0;
	
	iVar0 = GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iVar0)
	{
		case 0:
			return joaat("sanchez");
		
		case 1:
			return joaat("pcj");
		
		default:
	}
	return 0;
}

void func_119()
{
	int iVar0;
	
	iVar0 = func_123();
	Local_171.f_3 = iVar0;
	func_120(func_122(133, iVar0, 0, 0));
}

void func_120(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	
	vVar0.x = 226654995;
	vVar0.y = PLAYER_ID();
	vVar0.z = iParam0;
	iVar1 = func_121(1, 1);
	if (!iVar1 == 0)
	{
		TRIGGER_SCRIPT_EVENT(1, &vVar0, 3, iVar1);
	}
}

var func_121(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = INT_TO_PLAYERINDEX(iVar1);
		if (func_12(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					SET_BIT(&uVar0, iVar1);
				}
				else if (!func_14(iVar2, 0))
				{
					SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_122(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
		case 139:
		case 141:
		case 133:
		case 138:
		case 144:
		case 236:
			return iParam1;
		
		case 132:
			switch (iParam2)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						default:
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 0:
									return 15;
								
								case 1:
									return 16;
								
								case 2:
									return 17;
								
								case 3:
									return 18;
								
								case 4:
									return 19;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 0:
									return 20;
								
								case 1:
									return 21;
								
								case 2:
									return 22;
								
								case 3:
									return 24;
								
								case 4:
									return 25;
								
								default:
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									return 26;
								
								case 1:
									return 27;
								
								case 2:
									return 28;
								
								case 3:
									return 29;
								
								case 4:
									return 30;
								
								default:
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 0:
									return 31;
								
								case 1:
									return 32;
								
								case 2:
									return 33;
								
								case 3:
									return 34;
								
								case 4:
									return 35;
								
								default:
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 41;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 1:
									return 42;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 2:
									return 43;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 3:
									return 44;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									return 45;
								
								default:
							}
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						case 4:
							return 8;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						case 3:
							return 15;
						
						case 4:
							return 16;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 17;
						
						case 1:
							return 18;
						
						case 2:
							return 19;
						
						case 3:
							return 20;
						
						case 4:
							return 21;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							return 22;
						
						case 1:
							return 24;
						
						case 2:
							return 25;
						
						case 3:
							return 26;
						
						default:
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							return 27;
						
						case 1:
							return 28;
						
						case 2:
							return 29;
						
						default:
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							return 30;
						
						case 1:
							return 31;
						
						case 2:
							return 32;
						
						default:
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							return 33;
						
						case 1:
							return 34;
						
						case 2:
							return 35;
						
						case 3:
							return 36;
						
						default:
					}
					break;
				
				case 9:
					switch (iParam2)
					{
						case 0:
							return 37;
						
						case 1:
							return 38;
						
						case 2:
							return 39;
						
						case 3:
							return 40;
						
						default:
					}
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						default:
					}
					break;
			}
			break;
		
		case 146:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
			}
			break;
	}
	return -1;
}

int func_123()
{
	int iVar0[19];
	float fVar1;
	int iVar2;
	float fVar3;
	
	iVar0[0] = Global_262145.f_11348;
	iVar0[1] = Global_262145.f_11021;
	iVar0[2] = Global_262145.f_11352;
	iVar0[3] = Global_262145.f_11350;
	iVar0[4] = Global_262145.f_11351;
	iVar0[5] = Global_262145.f_11353;
	iVar0[6] = Global_262145.f_11022;
	iVar0[7] = Global_262145.f_11023;
	iVar0[8] = Global_262145.f_11349;
	iVar0[9] = Global_262145.f_11029;
	iVar0[10] = Global_262145.f_11024;
	iVar0[11] = Global_262145.f_11026;
	iVar0[12] = Global_262145.f_11027;
	iVar0[13] = Global_262145.f_11025;
	iVar0[14] = Global_262145.f_11028;
	iVar0[15] = Global_262145.f_11031;
	iVar0[16] = Global_262145.f_11032;
	iVar0[17] = Global_262145.f_11033;
	iVar0[18] = Global_262145.f_11034;
	fVar1 = 0f;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (func_126(iVar2) || func_124(133, iVar2, 0, 0))
		{
			iVar0[iVar2] = 0f;
		}
		else
		{
			fVar1 = (fVar1 + iVar0[iVar2]);
		}
		iVar2++;
	}
	fVar3 = GET_RANDOM_FLOAT_IN_RANGE(0f, fVar1);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (fVar3 <= iVar0[iVar2])
		{
			return iVar2;
		}
		fVar3 = (fVar3 - iVar0[iVar2]);
		iVar2++;
	}
	return func_123();
}

int func_124(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 132:
		case 144:
		case 236:
			return 0;
		
		default:
	}
	iVar1 = func_125(iParam0);
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (iVar0 < Global_262145.f_8112)
		{
			if (Global_2501271.f_130[iVar0 /*2*/] == iVar1 && Global_2501271.f_130[iVar0 /*2*/].f_1 == func_122(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_125(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 12;
		
		case 139:
			return 14;
		
		case 141:
			return 16;
		
		case 133:
			return 9;
		
		case 138:
			return 13;
		
		case 144:
			return 17;
		
		case 132:
			return 8;
		
		case 131:
			return 10;
		
		case 146:
			return 18;
		
		case 129:
			return 11;
		
		case 140:
			return 15;
		
		case 236:
			return 19;
		
		default:
	}
	return -1;
}

int func_126(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_10250;
		
		case 1:
			return Global_262145.f_11035;
		
		case 6:
			return Global_262145.f_11036;
		
		case 7:
			return Global_262145.f_11037;
		
		case 8:
			return Global_262145.f_10251;
		
		case 3:
			return Global_262145.f_10252;
		
		case 4:
			return Global_262145.f_10253;
		
		case 2:
			return Global_262145.f_10254;
		
		case 5:
			return Global_262145.f_10255;
		
		case 9:
			return Global_262145.f_11043;
		
		case 10:
			return Global_262145.f_11038;
		
		case 11:
			return Global_262145.f_11040;
		
		case 12:
			return Global_262145.f_11041;
		
		case 15:
			return Global_262145.f_11045;
		
		case 16:
			return Global_262145.f_11046;
		
		case 17:
			return Global_262145.f_11047;
		
		case 18:
			return Global_262145.f_11048;
		
		case 13:
			return Global_262145.f_11039;
		
		case 14:
			return Global_262145.f_11042;
		
		default:
	}
	return 1;
}

void func_127()
{
	int iVar0;
	
	if (func_43())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (Local_171.f_55[iVar0] == PARTICIPANT_ID_TO_INT())
			{
				if (func_128(iVar0))
				{
					if (!IS_BIT_SET(Local_1537[IS_BIT_SET() /*12*/].f_2, iVar0))
					{
						SET_BIT(&(Local_1537[SET_BIT() /*12*/].f_2), iVar0);
					}
				}
				else if (IS_BIT_SET(Local_1537[IS_BIT_SET() /*12*/].f_2, iVar0))
				{
					CLEAR_BIT(&(Local_1537[CLEAR_BIT() /*12*/].f_2), iVar0);
				}
			}
			else if (IS_BIT_SET(Local_1537[IS_BIT_SET() /*12*/].f_2, iVar0))
			{
				CLEAR_BIT(&(Local_1537[CLEAR_BIT() /*12*/].f_2), iVar0);
			}
			iVar0++;
		}
	}
}

int func_128(int iParam0)
{
	vector3 vVar0;
	var uVar1;
	
	if (func_39(iParam0, &vVar0, &uVar1))
	{
		if (func_129(vVar0, 10f, 1065353216, 1f, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_129(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
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
		if (func_134(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_130(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405071.f_2++;
	return 1;
}

int func_130(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_12(PLAYER_ID(), 1, 1))
		{
			if (!IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (GET_DISTANCE_BETWEEN_COORDS(func_132(GET_DISTANCE_BETWEEN_COORDS()), vParam0, true) <= (fVar2 + fParam1))
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
		if (func_12(iVar1, 1, 1))
		{
			if (!func_14(iVar1, 0) && _0x3B39236746714134(_0x3B39236746714134(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != PLAYER_ID()))
				{
					if ((func_131(iVar1) || !bParam8) && !Global_2424073[iVar1 /*421*/].f_259)
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
								if (GET_DISTANCE_BETWEEN_COORDS(func_132(iVar1), vParam0, true) <= (fVar2 + fParam1))
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
							if (GET_DISTANCE_BETWEEN_COORDS(func_132(iVar1), vParam0, true) <= (fVar2 + fParam1))
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

int func_131(int iParam0)
{
	if (IS_ENTITY_VISIBLE_TO_SCRIPT(IS_ENTITY_VISIBLE_TO_SCRIPT(iParam0)) || Global_2424073[iParam0 /*421*/].f_245)
	{
		return 1;
	}
	return 0;
}

Vector3 func_132(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_64() && Global_1590446[iVar0 /*871*/].f_842) && !func_133(Global_1590446[iVar0 /*871*/].f_843))
	{
		return Global_1590446[iVar0 /*871*/].f_843;
	}
	return func_38(iParam0);
}

int func_133(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_134(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && PLAYER_ID() != iVar1) || iParam6 == 0)
		{
			if (func_12(iVar1, bParam2, bParam3))
			{
				if (_0x3B39236746714134(_0x3B39236746714134(), iVar1))
				{
					if (!bParam5 || (!IS_PED_INJURED(IS_PED_INJURED(iVar1)) && func_131(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && GET_PLAYER_TEAM(GET_PLAYER_TEAM()) != GET_PLAYER_TEAM(iVar1))) || GET_PLAYER_TEAM(GET_PLAYER_TEAM()) == -1)
						{
							if (((GET_PLAYER_TEAM(GET_PLAYER_TEAM()) == -1 && uParam7) && bParam4) && func_135(iVar1))
							{
							}
							else if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST(iVar1)))
							{
								if (GET_DISTANCE_BETWEEN_COORDS(func_38(iVar1), vParam0, true) < fParam1)
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

int func_135(int iParam0)
{
	if (func_138(PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2507671 = { func_137(iParam0) };
	if (NETWORK_IS_FRIEND(&Global_2507671))
	{
		return 1;
	}
	if (func_136(PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_136(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_88(iParam0);
	if (!iVar0 == func_102())
	{
		if (iVar0 == func_88(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_137(int iParam0)
{
	struct<13> Var0;
	
	NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_138(int iParam0, int iParam1)
{
	if (_NETWORK_PLAYER_IS_IN_CLAN())
	{
		Global_2507671 = { func_137(iParam0) };
		Global_2507684 = { func_137(iParam1) };
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

void func_139()
{
	float fVar0;
	float fVar1;
	
	func_685();
	func_684();
	if (func_682())
	{
		func_570();
	}
	if (!func_7(PLAYER_ID()))
	{
		if (func_546(0, 1, 1))
		{
			if (IS_BIT_SET(iLocal_142, 6))
			{
				CLEAR_BIT(&iLocal_142, 6);
			}
			switch (Local_1537[PARTICIPANT_ID_TO_INT() /*12*/].f_3)
			{
				case 0:
					if (Local_171.f_37 < 2)
					{
						if (Local_171.f_37 > 0)
						{
							if (Local_171.f_3 != -1)
							{
								func_545(1);
								func_544(1);
							}
						}
					}
					else
					{
						func_544(2);
					}
					break;
				
				case 1:
					func_538(9);
					if (Local_1538.f_8 == 0)
					{
						Local_1538.f_8 = 0xF12E6CD06C73D69E();
					}
					if (Local_171.f_37 >= 2)
					{
						func_544(2);
						Local_1538.f_9 = 0xF12E6CD06C73D69E();
					}
					if (func_43())
					{
						func_538(0);
					}
					func_536((func_29() - func_537(&(Local_171.f_43), 0, 0)));
					func_533(func_535((func_29() - func_537(&(Local_171.f_43), 0, 0)), 0), func_534(Local_171.f_3));
					func_473(0, func_532());
					func_447();
					func_425();
					if (func_424())
					{
						func_423();
					}
					break;
				
				case 2:
					if (Local_171.f_37 > 2)
					{
						func_545(0);
						fVar0 = 1f;
						fVar1 = 1f;
						if (func_422())
						{
							fVar0 = 0f;
							fVar1 = 0.25f;
						}
						func_403(133, fVar0, fVar1, 0, 0, 0, 0);
						func_402(Local_171.f_3, 1);
						func_401(23, 1);
						if (Local_1538.f_8 == 0)
						{
							Local_1538.f_8 = 0xF12E6CD06C73D69E();
						}
						if (Local_1538.f_9 == 0)
						{
							Local_1538.f_9 = 0xF12E6CD06C73D69E();
						}
						func_397();
						0x26D99D5A82FD18E8(1);
						if (func_422())
						{
							SET_WANTED_LEVEL_MULTIPLIER(0f);
							SET_MAX_WANTED_LEVEL(0);
						}
						if (Local_171.f_3 == 14)
						{
							func_396(&vLocal_162);
						}
						func_395();
						if (!func_7(PLAYER_ID()))
						{
							func_52(63, "AMCH_STARTED", func_394(Local_171.f_3), func_66(), -1, func_66(), 1, 0);
							if (func_391("AMCH_WARN", func_393(Local_171.f_3), func_392(Local_171.f_3)))
							{
								CLEAR_HELP(1);
							}
						}
						if (func_43())
						{
							func_374(678f, 794f, 206f, 8f, 0);
							func_374(1911.3f, 4714.6f, 41.1f, 8f, 0);
							func_374(688.5021f, 735.4581f, 181.296f, 8f, 0);
						}
						func_544(3);
					}
					break;
				
				case 3:
					if (Local_171.f_37 > 3)
					{
						iLocal_144 = 0;
						func_544(4);
					}
					else
					{
						if (!IS_BIT_SET(Local_171.f_2, 1))
						{
							func_333();
							func_330();
							func_329();
						}
						if (func_328(0) && !func_20(0))
						{
							func_327();
						}
					}
					if (func_422())
					{
						0xFAC75988A7D078D3(0xFAC75988A7D078D3());
					}
					func_326();
					func_303();
					func_570();
					func_473(0, 1);
					func_447();
					func_425();
					func_538(2);
					func_538(5);
					func_538(7);
					break;
				
				case 4:
					if (func_292(&uLocal_154, !IS_BIT_SET(Local_171.f_2, 0)) || IS_BIT_SET(Local_171.f_2, 0))
					{
						if (func_5(Local_171.f_3))
						{
							if (Local_171.f_37 == 5)
							{
								func_544(5);
							}
						}
						else
						{
							func_544(6);
						}
					}
					func_279();
					func_171();
					func_303();
					func_570();
					func_473(1, 1);
					func_395();
					break;
				
				case 5:
					if (Local_171.f_37 > 5)
					{
						func_544(6);
					}
					break;
				
				case 6:
					break;
			}
		}
		else
		{
			func_166();
		}
	}
	else
	{
		func_166();
	}
	func_146();
	func_141();
	func_140();
}

void func_140()
{
	struct<2> Var0;
	int iVar1;
	
	if (func_43())
	{
		Var0 = { Local_171.f_67[iLocal_161 /*2*/] };
		if (NETWORK_DOES_NETWORK_ID_EXIST(Var0.f_1))
		{
			iVar1 = NET_TO_VEH(Var0.f_1);
			if (NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				if (!IS_VEHICLE_DRIVEABLE(iVar1, 0))
				{
					SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar1);
				}
			}
		}
		iLocal_161++;
		if (iLocal_161 >= 10)
		{
			iLocal_161 = 0;
			iLocal_170 = iLocal_169;
			iLocal_169 = 0;
		}
	}
}

void func_141()
{
	if (Local_171.f_37 == 5)
	{
		if (NETWORK_DOES_NETWORK_ID_EXIST(Local_171.f_67[iLocal_161 /*2*/].f_1))
		{
			if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(Local_171.f_67[iLocal_161 /*2*/].f_1), 0))
			{
				if (!IS_BIT_SET(iLocal_167, iLocal_161))
				{
					SET_BIT(&iLocal_167, iLocal_161);
					iLocal_168[iLocal_161] = GET_SOUND_ID();
					PLAY_SOUND_FROM_ENTITY(iLocal_168[iLocal_161], "Explosion_Countdown", PLAY_SOUND_FROM_ENTITY(Local_171.f_67[iLocal_161 /*2*/].f_1), "GTAO_FM_Events_Soundset", false, 0);
					SET_VARIABLE_ON_SOUND(iLocal_168[iLocal_161], "Time", 30f);
				}
				if ((30000 - func_537(&(Local_171.f_45), 0, 0)) >= 0)
				{
					if (IS_PED_IN_VEHICLE(IS_PED_IN_VEHICLE(), IS_PED_IN_VEHICLE(Local_171.f_67[iLocal_161 /*2*/].f_1), 0))
					{
						func_538(1);
						iLocal_169 = 1;
					}
				}
				else if (NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_171.f_67[iLocal_161 /*2*/].f_1))
				{
					CLEAR_ENTITY_LAST_DAMAGE_ENTITY(CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_171.f_67[iLocal_161 /*2*/].f_1));
					NETWORK_EXPLODE_VEHICLE(NETWORK_EXPLODE_VEHICLE(Local_171.f_67[iLocal_161 /*2*/].f_1), 1, 0, -1);
				}
			}
			else if (IS_BIT_SET(iLocal_167, iLocal_161) && !IS_BIT_SET(iLocal_168[iLocal_161]))
			{
				STOP_SOUND(iLocal_168[iLocal_161]);
			}
		}
		if (iLocal_170)
		{
			if (!func_100(PLAYER_ID()))
			{
				func_143(func_535((30000 - func_537(&(Local_171.f_45), 0, 0)), 0), "HTV_DESTR", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
				func_142();
			}
		}
	}
}

void func_142()
{
	Global_1375006.f_1109 = 1;
}

void func_143(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_145(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1375006.f_1 = 1;
		func_144(7, iVar0);
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

void func_144(int iParam0, int iParam1)
{
	SET_BIT(&(Global_1375006.f_6184[iParam0]), iParam1);
}

bool func_145(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_1375006.f_6184[iParam0], iParam1);
}

void func_146()
{
	if (((func_12(PLAYER_ID(), 1, 1) && !func_7(PLAYER_ID())) && !func_162(PLAYER_ID())) && func_546(0, 1, 1))
	{
		if (Local_1537[PARTICIPANT_ID_TO_INT() /*12*/].f_3 == 1)
		{
			func_159(func_161(Local_171.f_3), func_393(Local_171.f_3), 0, 0);
		}
		else if (Local_1537[PARTICIPANT_ID_TO_INT() /*12*/].f_3 == 3)
		{
			if (!IS_BIT_SET(iLocal_142, 10))
			{
				func_147(func_392(Local_171.f_3), 0);
			}
			else
			{
				func_147("AMCH_OBJLAND", 0);
			}
		}
		else
		{
			func_395();
		}
	}
	else
	{
		func_395();
	}
}

void func_147(char* sParam0, bool bParam1)
{
	if (IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (_GET_LENGTH_OF_STRING(sParam0) > 23)
	{
		return;
	}
	if (func_157(sParam0))
	{
		return;
	}
	func_151();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_150();
	func_149(bParam1);
	func_148();
}

void func_148()
{
	SET_BIT(&(Global_1312585.f_59), 1);
}

void func_149(bool bParam0)
{
	if (bParam0)
	{
		SET_BIT(&(Global_1312585.f_59), 0);
		return;
	}
	CLEAR_BIT(&(Global_1312585.f_59), 0);
}

void func_150()
{
	Global_1312585.f_10 = HAS_NETWORK_TIME_STARTED(HAS_NETWORK_TIME_STARTED(), 86400000);
	Global_1312585.f_11 = 0xBA7F0B77D80A4EB7();
}

void func_151()
{
	func_153();
	func_152(0);
}

void func_152(bool bParam0)
{
	bool bVar0;
	
	bVar0 = NETWORK_IS_GAME_IN_PROGRESS();
	Global_1312585 = 20;
	StringCopy(&(Global_1312585.f_1), "", 32);
	Global_1312585.f_9 = 0;
	if (bVar0)
	{
		Global_1312585.f_10 = 0xBA7F0B77D80A4EB7();
		Global_1312585.f_11 = 0xBA7F0B77D80A4EB7();
	}
	StringCopy(&(Global_1312585.f_12), "", 16);
	StringCopy(&(Global_1312585.f_16), "", 64);
	StringCopy(&(Global_1312585.f_32), "", 64);
	Global_1312585.f_52 = 0;
	Global_1312585.f_53 = 0;
	Global_1312585.f_54 = 0;
	Global_1312585.f_55 = -1;
	Global_1312585.f_56 = 0;
	Global_1312585.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_153()
{
	if (!func_156())
	{
	}
	if (func_155())
	{
		BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1312585.f_12));
		func_154();
		END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_154()
{
	switch (Global_1312585)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			ADD_TEXT_COMPONENT_INTEGER(Global_1312585.f_52);
			return;
		
		case 2:
			ADD_TEXT_COMPONENT_INTEGER(Global_1312585.f_52);
			ADD_TEXT_COMPONENT_INTEGER(Global_1312585.f_53);
			return;
		
		case 3:
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 4:
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 5:
			ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			return;
		
		case 6:
			_SET_NOTIFICATION_COLOR_NEXT(Global_1312585.f_56);
			ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			return;
		
		case 7:
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 8:
			_SET_NOTIFICATION_COLOR_NEXT(Global_1312585.f_56);
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 9:
			ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1312585.f_16));
			return;
		
		case 10:
			ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_32));
			return;
		
		case 12:
			ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 13:
			_SET_NOTIFICATION_COLOR_NEXT(Global_1312585.f_56);
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			_SET_NOTIFICATION_COLOR_NEXT(Global_1312585.f_57);
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 11:
			ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1312585.f_16));
			return;
		
		case 14:
			_SET_NOTIFICATION_COLOR_NEXT(Global_1312585.f_56);
			ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			_SET_NOTIFICATION_COLOR_NEXT(Global_1312585.f_56);
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 15:
			_SET_NOTIFICATION_COLOR_NEXT(Global_1312585.f_56);
			ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			_SET_NOTIFICATION_COLOR_NEXT(Global_1312585.f_57);
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 17:
			ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_32));
			_SET_NOTIFICATION_COLOR_NEXT(Global_1312585.f_56);
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_48));
			return;
		
		case 16:
			_SET_NOTIFICATION_COLOR_NEXT(Global_1312585.f_56);
			ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			return;
		
		case 19:
			_SET_NOTIFICATION_COLOR_NEXT(Global_1312585.f_56);
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 18:
			ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			_SET_NOTIFICATION_COLOR_NEXT(Global_1312585.f_56);
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_48));
			ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_32));
			return;
		
		default:
	}
}

int func_155()
{
	if (Global_1312585 == 20)
	{
		return 0;
	}
	return 1;
}

int func_156()
{
	if (!func_155())
	{
		return 0;
	}
	BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312585.f_12));
	func_154();
	return END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_157(char* sParam0)
{
	if (!func_155())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		return func_158(sParam0);
	}
	if (IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return GET_HASH_KEY(sParam0) == GET_HASH_KEY(&(Global_1312585.f_12));
}

bool func_158(char* sParam0)
{
	if (!func_155())
	{
		return 0;
	}
	if (IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return GET_HASH_KEY(sParam0) == GET_HASH_KEY(&(Global_1312585.f_16));
}

int func_159(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (_GET_LENGTH_OF_STRING(sParam0) > 23)
	{
		return 0;
	}
	if (IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (func_160(sParam0, sParam1) && Global_1312585.f_56 == Global_1312585.f_58)
	{
		return 0;
	}
	func_151();
	Global_1312585 = 3;
	StringCopy(&(Global_1312585.f_1), GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	Global_1312585.f_58 = iParam3;
	Global_1312585.f_56 = iParam3;
	func_150();
	func_149(bParam2);
	func_148();
	return 1;
}

bool func_160(char* sParam0, char* sParam1)
{
	if (!func_155())
	{
		return 0;
	}
	if (IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (!GET_HASH_KEY(sParam0) == GET_HASH_KEY(&(Global_1312585.f_12)))
	{
		return 0;
	}
	return GET_HASH_KEY(sParam1) == GET_HASH_KEY(&(Global_1312585.f_16));
}

char* func_161(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!IS_PED_INJURED(IS_PED_INJURED()))
	{
		switch (iParam0)
		{
			case 0:
			case 2:
			case 5:
			case 8:
			case 13:
				if (((((!IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0) || IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE())) || IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE())) || IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE())) || IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE())) || IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			
			case 9:
				if ((((((!IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0) || IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE())) || IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE())) || IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE())) || IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE())) || IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE())) || IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE()))
				{
					return "AMCH_PREPCAR";
				}
				break;
			
			case 3:
			case 4:
				if (!IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
				{
					return "AMCH_PREPBIKE";
				}
				else
				{
					iVar0 = GET_VEHICLE_PED_IS_USING(GET_VEHICLE_PED_IS_USING());
					iVar1 = GET_ENTITY_MODEL(iVar0);
					if (IS_THIS_MODEL_A_BIKE(iVar1) && IS_THIS_MODEL_A_BIKE(iVar1))
					{
						return "AMCH_PREPBIKE";
					}
				}
				break;
			
			case 12:
				if (!IS_PED_IN_ANY_PLANE(IS_PED_IN_ANY_PLANE()))
				{
					return "AMCH_PREPPLANE";
				}
				break;
			
			case 1:
			case 6:
			case 11:
			case 14:
				if (!IS_PED_IN_FLYING_VEHICLE(IS_PED_IN_FLYING_VEHICLE()))
				{
					return "AMCH_PREPAIR";
				}
				break;
			
			case 18:
				if ((!HAS_PED_GOT_WEAPON(HAS_PED_GOT_WEAPON(), joaat("weapon_sniperrifle"), 0) && !HAS_PED_GOT_WEAPON(HAS_PED_GOT_WEAPON(), joaat("weapon_heavysniper"), 0)) && !HAS_PED_GOT_WEAPON(HAS_PED_GOT_WEAPON(), joaat("weapon_marksmanrifle"), 0))
				{
					return "AMCH_PREPSNIPER";
				}
				break;
			
			case 16:
				if (((((!IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0) || IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE())) || IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE())) || IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE())) || IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE())) || IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE()))
				{
					return "AMCH_PREPLAND";
				}
				break;
			}
	}
	return "AMCH_PREPARE";
}

bool func_162(int iParam0)
{
	if (iParam0 == PLAYER_ID())
	{
		if (((func_165() && !func_164()) || func_163(PLAYER_ID(), 21)) || func_163(PLAYER_ID(), 25))
		{
			return 1;
		}
		if (func_47(&(Global_1574647.f_13)))
		{
			if (!func_1(&(Global_1574647.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_46(&(Global_1574647.f_13));
		}
	}
	else if (IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 10))
	{
		return 1;
	}
	return IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 9);
}

bool func_163(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_208, iParam1);
}

bool func_164()
{
	return Global_1312417.f_1;
}

bool func_165()
{
	return Global_1312417;
}

void func_166()
{
	if (!IS_BIT_SET(iLocal_142, 6))
	{
		CLEAR_ALL_HELP_MESSAGES();
		func_473(1, 1);
		STOP_SOUND(iLocal_150);
		CLEAR_BIT(&iLocal_142, 4);
		func_170();
		func_168();
		_SET_MINIMAP_ATTITUDE_INDICATOR_LEVEL(0f, 0, 21);
		SET_BIT(&iLocal_142, 6);
		func_167();
	}
}

void func_167()
{
	Global_1628955[PLAYER_ID() /*614*/].f_7 = 0;
}

void func_168()
{
	if (Global_2413894.f_6 == GET_ID_OF_THIS_THREAD())
	{
		func_169();
	}
}

void func_169()
{
	struct<28> Var0;
	
	if (IS_THREAD_ACTIVE(Global_2413894.f_6))
	{
		if (!Global_2413894.f_6 == GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2413894 = { Var0 };
	Global_2413894.f_6 = -1;
}

void func_170()
{
	struct<6> Var0;
	
	if (Global_2405071.f_485.f_1 == GET_ID_OF_THIS_THREAD())
	{
		Global_2405071.f_485 = { Var0 };
	}
}

void func_171()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (!IS_BIT_SET(Local_1537[IS_BIT_SET() /*12*/].f_1, 0))
	{
		if (func_7(PLAYER_ID()))
		{
			SET_BIT(&(Local_1537[SET_BIT() /*12*/].f_1), 0);
			return;
		}
		if (func_162(PLAYER_ID()))
		{
			SET_BIT(&(Local_1537[SET_BIT() /*12*/].f_1), 0);
			return;
		}
		func_240(&iVar0, &iVar1);
		if (iVar0 > 0)
		{
			Local_1538.f_6 = (Local_1538.f_6 + iVar0);
			if (!Global_262145.f_11500)
			{
				func_239(10, Local_1538.f_6);
			}
			Global_2461199 = iVar0;
			if (func_238())
			{
				func_226(-1468524125, iVar0, &uVar3, 0, 1, 0);
			}
			else
			{
				_NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_CHALLENGES", &uVar2);
			}
		}
		if (iVar1 > 0)
		{
			Local_1538.f_7 = (Local_1538.f_7 + iVar1);
			func_225();
			func_172(0, PLAYER_PED_ID(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0, 0);
		}
		SET_BIT(&(Local_1537[SET_BIT() /*12*/].f_1), 0);
	}
}

int func_172(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_173(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_173(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_183(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (DOES_ENTITY_EXIST(iParam1))
		{
			if (IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_179(GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_174(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_174(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0 = { func_177(iParam0, 1) };
	if (iParam0 == func_176(PLAYER_PED_ID()))
	{
		func_175(1);
	}
	func_179(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_175(int iParam0)
{
	Global_2437549.f_1890 = iParam0;
}

int func_176(int iParam0)
{
	return iParam0;
}

Vector3 func_177(int iParam0, bool bParam1)
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
	if (iParam0 == func_178(PLAYER_PED_ID()) && PLAYER_PED_ID(PLAYER_PED_ID()) == 4)
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

int func_178(int iParam0)
{
	return iParam0;
}

void func_179(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
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
			Global_2437549.f_1289[iVar1 /*30*/].f_4 = func_182(Global_2437549.f_1289[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2437549.f_1289[iVar1 /*30*/].f_7 = 0xBA7F0B77D80A4EB7();
			Global_2437549.f_1289[iVar1 /*30*/].f_3 = iParam1;
			Global_2437549.f_1289[iVar1 /*30*/].f_8 = iParam2;
			Global_2437549.f_1289[iVar1 /*30*/].f_9 = func_181();
			Global_2437549.f_1289[iVar1 /*30*/].f_10 = func_180();
			StringCopy(&(Global_2437549.f_1289[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2437549.f_1289[iVar1 /*30*/].f_26 = HAS_NETWORK_TIME_STARTED(HAS_NETWORK_TIME_STARTED(), iParam4);
		}
	}
}

int func_180()
{
	if (Global_2437549.f_1890)
	{
		Global_2437549.f_1890 = 0;
		return 1;
	}
	Global_2437549.f_1890 = 0;
	return 0;
}

var func_181()
{
	var uVar0;
	
	uVar0 = Global_2437549.f_1892;
	Global_2437549.f_1892 = 1;
	return uVar0;
}

float func_182(vector3 vParam0, var uParam1, var uParam2)
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

var func_183(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_184(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_184(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (iParam1 == 0)
	{
		if (func_224(PLAYER_ID()) || func_223(PLAYER_ID()))
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
		else if (func_221() || func_218(PLAYER_ID()))
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
		else if (func_92())
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
	if (func_217(sParam2))
	{
	}
	if (func_216())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_214(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_213(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_211(0, &iVar1);
					break;
				
				case 3:
					func_211(1, &iVar1);
					break;
				
				case 1:
					func_209(&iVar1);
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
			func_206(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_194((func_204(PLAYER_ID(), 1) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1590446[PLAYER_ID() /*871*/].f_39.f_2 != -1)
				{
					func_206(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_189(iVar1);
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
				func_185((func_187(PLAYER_ID()) + iVar1));
			}
			else
			{
				func_185((func_187(PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_185(int iParam0)
{
	if (func_216())
	{
		Global_1590446[PLAYER_ID() /*871*/].f_211.f_5 = iParam0;
		func_186(joaat("mpply_globalxp"), iParam0);
	}
}

void func_186(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_187(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_12(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER_ID())
			{
				return func_188(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1590446[iParam0 /*871*/].f_211.f_5;
			}
		}
		else
		{
			return func_188(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_188(int iParam0)
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

void func_189(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_137(PLAYER_ID()) };
	if (_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_192(func_193(&Var0));
			if (iVar1 == 0)
			{
				func_191(&Global_1384134, iParam0);
				func_190(joaat("mpply_crew_local_xp_0"), Global_1384134);
			}
			else if (iVar1 == 1)
			{
				func_191(&Global_1384135, iParam0);
				func_190(joaat("mpply_crew_local_xp_1"), Global_1384135);
			}
			else if (iVar1 == 2)
			{
				func_191(&Global_1384136, iParam0);
				func_190(joaat("mpply_crew_local_xp_2"), Global_1384136);
			}
			else if (iVar1 == 3)
			{
				func_191(&Global_1384137, iParam0);
				func_190(joaat("mpply_crew_local_xp_3"), Global_1384137);
			}
			else if (iVar1 == 4)
			{
				func_191(&Global_1384138, iParam0);
				func_190(joaat("mpply_crew_local_xp_4"), Global_1384138);
			}
		}
	}
}

void func_190(int iParam0, int iParam1)
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

void func_191(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_192(int iParam0)
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

int func_193(var uParam0)
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

void func_194(int iParam0, int iParam1, int iParam2)
{
	if (func_216())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1384279[func_203(-1)])
				{
					PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1384279[func_203(-1)])
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
		if (func_202(PLAYER_ID()))
		{
			Global_1590446[PLAYER_ID() /*871*/].f_211.f_1 = iParam0;
			Global_1590446[PLAYER_ID() /*871*/].f_211.f_6 = func_200(iParam0, 1);
		}
		func_199(639, iParam0, -1, 1);
		func_198(640, func_200(iParam0, 1), -1, 1, 0);
		Global_1384279[func_203(-1)] = iParam0;
		func_195(-1109644434, 7, 0);
	}
}

void func_195(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_197(iParam1, iParam2))
	{
		iVar0 = func_196();
		Global_2458876[iVar0] = iParam1;
		Global_2458887[iVar0] = iParam0;
	}
}

int func_196()
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

int func_197(int iParam0, var uParam1)
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

void func_198(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_203(iParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_199(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2542527[iParam0 /*3*/][func_203(iParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1384207[func_203(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1384213[func_203(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1384219[func_203(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1384225[func_203(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1384177[func_203(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1384183[func_203(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1384189[func_203(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1384195[func_203(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1384147[func_203(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1384153[func_203(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1384159[func_203(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1384165[func_203(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1384237[func_203(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1384243[func_203(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1384249[func_203(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1384255[func_203(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1384267[func_203(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1384273[func_203(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1384279[func_203(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1384285[func_203(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2578592[0 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2578592[1 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2578592[2 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2578592[3 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 9509:
			Global_2578729[func_203(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1384291[func_203(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1384297[func_203(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1384303[func_203(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1384315[func_203(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2578659[0 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2578659[1 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2578659[2 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2578659[3 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2578659[4 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2578732[0 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2578732[1 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2578732[2 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2578732[3 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2578732[4 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2578748[0 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2578748[1 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2578748[2 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2578748[3 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2578748[4 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2578659[5 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2578592[4 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2578764[func_203(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2578773[func_203(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2578767[func_203(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2578776[func_203(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2578770[func_203(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2578779[func_203(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2578782[func_203(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2578659[6 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2578592[5 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2578659[7 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2578592[6 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2578659[8 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2578592[7 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2578659[9 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2578592[8 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2578659[10 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2578592[9 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2578659[11 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2578592[10 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2578659[12 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2578592[11 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2578659[13 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2578592[12 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2578659[14 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2578592[13 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2578659[15 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2578592[14 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2578659[16 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2578592[15 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2578659[17 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2578592[16 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2578592[17 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2578592[18 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2578592[19 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2578592[20 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2578785[func_203(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2578788[func_203(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2578791[func_203(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2578794[func_203(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2578797[func_203(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2578800[func_203(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2578803[func_203(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2578806[func_203(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2578809[func_203(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2578812[func_203(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2578815[func_203(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2578818[func_203(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2578821[func_203(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2578824[func_203(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2578592[21 /*3*/][func_203(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_200(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_201(iParam0, 0);
}

int func_201(int iParam0, int iParam1)
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

int func_202(int iParam0)
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

int func_203(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_16();
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

int func_204(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_205(iParam0);
}

int func_205(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER_ID())
			{
				return Global_1384279[func_203(-1)];
			}
			else if (func_202(iParam0))
			{
				return Global_1590446[iParam0 /*871*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1384279[func_203(-1)];
	}
	return 0;
}

void func_206(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_208(iParam0, func_203(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_207(iParam0))
	{
		func_198(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_199(iParam0, iVar0, iParam2, 1);
	}
}

int func_207(int iParam0)
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

int func_208(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_203(iParam1)];
	if (STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_209(int iParam0)
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
				if (GET_PLAYER_TEAM(iVar5) == iVar1 || func_76(GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER_ID())
					{
						if (func_138(PLAYER_ID(), iVar5))
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
		iVar6 = round((func_210(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_210(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_210(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_211(bool bParam0, int iParam1)
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
				if (func_12(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER_ID())
					{
						iVar1++;
						if (func_138(PLAYER_ID(), iVar4))
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
			if (func_12(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER_ID())
				{
					if (func_212(PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_138(PLAYER_ID(), iVar4))
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
		iVar5 = round((func_210(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_210(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_212(int iParam0, int iParam1)
{
	return vdist(func_38(iParam0), func_38(iParam1));
	return 0f;
}

int func_213(int iParam0)
{
	int iVar0;
	
	if (GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_210(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_214(int iParam0)
{
	if (iParam0 < 0)
	{
		if (ABSI(iParam0) > func_204(ABSI(), 1))
		{
			iParam0 = -func_204(PLAYER_ID(), 1);
		}
	}
	if (func_215(8000, 0, 0) > 0)
	{
		if (func_215(8000, 0, 0) < (iParam0 + func_204(PLAYER_ID(), 1)))
		{
			iParam0 = (func_215(8000, 0, 0) - func_204(PLAYER_ID(), 1));
		}
	}
	return iParam0;
}

int func_215(int iParam0, bool bParam1, int iParam2)
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

int func_216()
{
	return 1;
}

int func_217(char* sParam0)
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

int func_218(int iParam0)
{
	return func_219(func_220(iParam0));
}

int func_219(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_220(int iParam0)
{
	if (func_112(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_33;
	}
	return -1;
}

bool func_221()
{
	if (NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_64();
	}
	return func_222(Global_4456448.f_154360);
}

int func_222(int iParam0)
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

bool func_223(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 2;
}

bool func_224(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 7;
}

void func_225()
{
	Global_2460540 = 1;
}

void func_226(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_238())
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
				func_227(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_227(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_227(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_227(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_227(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_238())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!_NETWORK_SHOP_GET_TRANSACTIONS_ENABLED_FOR_CHARACTER(func_16()) || _NETWORK_SHOP_GET_TRANSACTIONS_ENABLED_FOR_CHARACTER())
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
			*uParam0 = func_234(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_233(1, iParam4);
			Global_4264385 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_228(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_228(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			SET_BIT(&(Global_2424073[SET_BIT() /*421*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_229(iParam0);
	}
}

void func_229(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_238())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_232(iParam0))
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
		func_230(&(Global_4263810[iParam0 /*84*/]));
	}
}

void func_230(var uParam0)
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
	func_231(&(uParam0->f_13));
	func_231(&(uParam0->f_13.f_13));
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

void func_231(var uParam0)
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

int func_232(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263810[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

void func_233(int iParam0, int iParam1)
{
	Global_2461338 = iParam1;
	Global_2461337 = iParam0;
}

int func_234(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263810[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_238())
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
				func_235(Global_4263810[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_235(struct<66> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_237(vVar0.y);
	if ((Global_262145.f_23556 && !Global_262145.f_23557) && !Global_262145.f_23558)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_236();
		TRIGGER_SCRIPT_EVENT(1, &vVar0, 35, iVar1);
	}
}

void func_236()
{
	REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_237(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_238()
{
	if (IS_PC_VERSION())
	{
		return 0x7D2708796355B20B();
	}
	return 0;
}

void func_239(int iParam0, int iParam1)
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

void func_240(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	if (func_17(PARTICIPANT_ID_TO_INT(), 1))
	{
		iVar1 = floor(((to_float((Local_171.f_1 - iLocal_140)) / 60f) / 1000f));
		if (iVar1 > Global_262145.f_11435)
		{
			iVar1 = Global_262145.f_11435;
		}
		else if (iVar1 < 1)
		{
			iVar1 = 1;
		}
		iVar0 = (func_278() * iVar1);
		*uParam1 = (func_277() * iVar1);
		fVar2 = func_276();
		if (fVar2 > 0f && !IS_BIT_SET(Local_171.f_2, 0))
		{
			iVar3 = round(((to_float(func_28(1)) / 60f) / 1000f));
			if (iVar3 > func_275())
			{
				iVar3 = func_275();
			}
			iVar4 = Local_171.f_51;
			if (iVar4 > func_274())
			{
				iVar4 = func_274();
			}
			*uParam0 = (*uParam0 + round((IntToFloat(func_267(func_273(), func_272(), iVar3, fVar2, func_271(), func_270(), func_269(), iVar4)) * Global_262145.f_11448)));
			*uParam1 = (*uParam1 + round((IntToFloat(func_267(func_266(), func_265(), iVar3, fVar2, func_271(), func_270(), func_269(), iVar4)) * Global_262145.f_11449)));
		}
		else
		{
			func_263(1);
		}
	}
	else
	{
		func_263(0);
	}
	func_241(uParam0, 1);
	*uParam0 = (*uParam0 + iVar0);
}

void func_241(var uParam0, int iParam1)
{
	int iVar0;
	
	if (*uParam0 > 0)
	{
		if (!func_262())
		{
			if (func_261(0))
			{
				if (!func_257(0))
				{
					if (NETWORK_IS_PLAYER_ACTIVE(func_256()))
					{
						if (func_255() == 100)
						{
							iVar0 = *uParam0;
							*uParam0 = 0;
						}
						else
						{
							iVar0 = ((*uParam0 / 100) * func_255());
							*uParam0 = (*uParam0 - iVar0);
						}
						func_253(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_246("GB_BCUT_TICK1", func_256(), iVar0, 0, 0, 1, 1);
						}
						func_245(20);
						func_242(func_256(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_242(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_12(iParam0, 0, 1))
	{
		Var0 = -1590759069;
		Var0.f_1 = PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_244(iParam0);
		func_243(&(Var0.f_6), &(Var0.f_7));
		TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_237(iParam0));
	}
}

void func_243(var uParam0, var uParam1)
{
	*uParam0 = Global_1651198.f_9;
	*uParam1 = Global_1651198.f_10;
}

var func_244(int iParam0)
{
	return Global_1628955[iParam0 /*614*/].f_532;
}

void func_245(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	SET_BIT(&(Global_2531497.f_4898.f_7[iVar0]), iVar1);
}

int func_246(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (_0x3B39236746714134(_0x3B39236746714134(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, GET_PLAYER_NAME(iParam1), 64);
		}
		if (IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
		_SET_NOTIFICATION_COLOR_NEXT(func_69(iParam1, -2, 1, 0, 0));
		ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_251(&Var1));
		if (!iParam3 == 0)
		{
			_SET_NOTIFICATION_COLOR_NEXT(iParam3);
		}
		ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
		func_247(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_247(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_250() || !NETWORK_IS_ACTIVITY_SESSION()) || !func_14(NETWORK_IS_ACTIVITY_SESSION(), 0))
	{
		return;
	}
	iVar0 = func_248(iParam2);
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

int func_248(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1671392 - 1))
	{
		if (iParam0 > Global_1671392.f_5[iVar0 /*53*/].f_1)
		{
			func_249(iVar0);
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

void func_249(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1671392.f_5[iVar0 /*53*/] = { Global_1671392.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_250()
{
	return IS_DLC_PRESENT(-1762644250);
}

var func_251(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_252(&cVar0);
}

var func_252(char[4] cParam0)
{
	return cParam0;
}

void func_253(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_254(1);
	}
	else
	{
		iVar1 = func_254(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_254(bool bParam0)
{
	if (bParam0)
	{
		return round((0.05f * 100f));
	}
	return Global_262145.f_12390;
}

int func_255()
{
	return Global_262145.f_12389;
}

int func_256()
{
	return Global_1628955[PLAYER_ID() /*614*/].f_11;
}

bool func_257(bool bParam0)
{
	return func_258(PLAYER_ID(), bParam0);
}

int func_258(int iParam0, bool bParam1)
{
	return func_259(iParam0, bParam1, 1);
}

int func_259(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_102())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_260(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628955[iParam0 /*614*/].f_11;
	if (iVar0 != func_102() && Global_1628955[iVar0 /*614*/].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_260(int iParam0, int iParam1)
{
	if (iParam0 != func_102())
	{
		if (Global_1628955[iParam0 /*614*/].f_11 != func_102())
		{
			if (Global_1628955[iParam0 /*614*/].f_11 == iParam0 && Global_1628955[iParam0 /*614*/].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_261(bool bParam0)
{
	return func_89(PLAYER_ID(), bParam0);
}

bool func_262()
{
	return func_90(PLAYER_ID());
}

void func_263(bool bParam0)
{
	if (bParam0)
	{
		if (func_264(1))
		{
			SET_BIT(&Global_1574672, 1);
		}
	}
	else if (func_264(2))
	{
		SET_BIT(&Global_1574672, 2);
	}
}

int func_264(int iParam0)
{
	int iVar0;
	
	iVar0 = func_208(2534, -1, 0);
	if (iParam0 == 0)
	{
		if ((IS_BIT_SET(iVar0, 0) && IS_BIT_SET(iVar0, 1)) && IS_BIT_SET(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((IS_BIT_SET(iVar0, 3) && IS_BIT_SET(iVar0, 4)) && IS_BIT_SET(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((IS_BIT_SET(iVar0, 6) && IS_BIT_SET(iVar0, 7)) && IS_BIT_SET(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((IS_BIT_SET(iVar0, 9) && IS_BIT_SET(iVar0, 10)) && IS_BIT_SET(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_265()
{
	return Global_262145.f_10935;
}

int func_266()
{
	return Global_262145.f_10933;
}

int func_267(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7)
{
	return func_268(round(((IntToFloat(iParam0) * fParam3) + (((IntToFloat(iParam1) * fParam3) * (IntToFloat(iParam2) * fParam4)) * ((IntToFloat(iParam7) * fParam5) / fParam6)))), 50, 0);
}

int func_268(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = (iParam0 / iParam1);
	iVar0 = (iVar0 * iParam1);
	iVar1 = (iVar0 + iParam1);
	iVar2 = (iParam0 - iVar0);
	iVar3 = (iVar1 - iParam0);
	if (iVar2 >= iVar3)
	{
		if (iParam2 == 1)
		{
		}
		return iVar1;
	}
	if (iParam2 == 1)
	{
	}
	return iVar0;
}

float func_269()
{
	return Global_262145.f_10938;
}

float func_270()
{
	return Global_262145.f_10937;
}

float func_271()
{
	return Global_262145.f_10936;
}

int func_272()
{
	return Global_262145.f_10934;
}

int func_273()
{
	return Global_262145.f_10932;
}

int func_274()
{
	return Global_262145.f_11340;
}

int func_275()
{
	return Global_262145.f_11339;
}

var func_276()
{
	if (func_20(0))
	{
		return Global_262145.f_10959;
	}
	if (func_20(1))
	{
		return Global_262145.f_10960;
	}
	if (func_20(2))
	{
		return Global_262145.f_10961;
	}
	return Global_262145.f_10962;
}

int func_277()
{
	return Global_262145.f_10931;
}

int func_278()
{
	return Global_262145.f_10930;
}

void func_279()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	
	if (!IS_BIT_SET(Local_1537[IS_BIT_SET() /*12*/].f_1, 1) && (func_291() || IS_BIT_SET(Local_171.f_2, 0)))
	{
		if (func_67(func_290()))
		{
			func_289();
		}
		if (func_12(PLAYER_ID(), 1, 1))
		{
			if (!IS_BIT_SET(Local_171.f_2, 0))
			{
				if (func_328(0))
				{
					iVar2 = Local_1537[PARTICIPANT_ID_TO_INT() /*12*/].f_4;
					func_285(&iVar0, &fVar1, iVar2, 1);
					if (func_20(0))
					{
						if (func_18())
						{
							func_283(64, func_284(Local_171.f_3, 0, 0, 0), "AMCH_WINNER", "AMCH_WIN", 15000, -1, fVar1, func_393(Local_171.f_3), 1, 2, 0);
						}
						else if (func_282())
						{
							func_283(69, func_284(Local_171.f_3, 0, 0, 0), "AMCH_WINNER_T", "AMCH_WIN", 15000, iVar0, -1f, func_393(Local_171.f_3), 1, 2, 0);
						}
						else
						{
							func_283(64, func_284(Local_171.f_3, 0, 0, iVar0), "AMCH_WINNER", "AMCH_WIN", 15000, iVar0, -1f, func_393(Local_171.f_3), 1, 2, 0);
						}
					}
					else if (func_20(1))
					{
						if (func_18())
						{
							func_283(67, func_284(Local_171.f_3, 0, 0, 0), "AMCH_2ND", "AMCH_OVER", 15000, -1, fVar1, func_393(Local_171.f_3), 1, 2, 0);
						}
						else if (func_282())
						{
							func_283(75, func_284(Local_171.f_3, 0, 0, 0), "AMCH_2ND_T", "AMCH_OVER", 15000, iVar0, -1f, func_393(Local_171.f_3), 1, 2, 0);
						}
						else
						{
							func_283(67, func_284(Local_171.f_3, 0, 0, iVar0), "AMCH_2ND", "AMCH_OVER", 15000, iVar0, -1f, func_393(Local_171.f_3), 1, 2, 0);
						}
					}
					else if (func_20(2))
					{
						if (func_18())
						{
							func_283(67, func_284(Local_171.f_3, 0, 0, 0), "AMCH_3RD", "AMCH_OVER", 15000, -1, fVar1, func_393(Local_171.f_3), 1, 2, 0);
						}
						else if (func_282())
						{
							func_283(75, func_284(Local_171.f_3, 0, 0, 0), "AMCH_3RD_T", "AMCH_OVER", 15000, iVar0, -1f, func_393(Local_171.f_3), 1, 2, 0);
						}
						else
						{
							func_283(67, func_284(Local_171.f_3, 0, 0, iVar0), "AMCH_3RD", "AMCH_OVER", 15000, iVar0, -1f, func_393(Local_171.f_3), 1, 2, 0);
						}
					}
					else
					{
						iVar3 = INT_TO_PARTICIPANTINDEX(Local_171.f_4[0]);
						if (NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
						{
							iVar4 = NETWORK_GET_PLAYER_INDEX(iVar3);
							if (Local_1537[Local_171.f_4[0] /*12*/].f_3 < 4)
							{
								return;
							}
							iVar2 = Local_1537[Local_171.f_4[0] /*12*/].f_4;
							func_285(&iVar0, &fVar1, iVar2, 1);
							sVar5 = "AMCH_LOSE";
							if (func_18())
							{
								func_281(76, func_102(), func_284(Local_171.f_3, 0, 0, 0), sVar5, "AMCH_OVER", 15000, func_393(Local_171.f_3), -1, fVar1, 1, 2, GET_PLAYER_NAME(iVar4));
							}
							else if (func_282())
							{
								func_281(77, func_102(), func_284(Local_171.f_3, 0, 0, 0), "AMCH_LOSE_T", "AMCH_OVER", 15000, func_393(Local_171.f_3), iVar0, -1082130432, 1, 2, GET_PLAYER_NAME(iVar4));
							}
							else
							{
								func_281(76, func_102(), func_284(Local_171.f_3, 0, 0, iVar0), sVar5, "AMCH_OVER", 15000, func_393(Local_171.f_3), iVar0, -1082130432, 1, 2, GET_PLAYER_NAME(iVar4));
							}
						}
					}
				}
				else
				{
					func_52(66, "AMCH_OVER", "AMCH_NOWIN", 1, 15000, 2, 1, 0);
				}
			}
			else
			{
				func_51("", "", 1);
			}
			SET_BIT(&(Local_1537[SET_BIT() /*12*/].f_1), 1);
			func_280(133);
		}
	}
}

void func_280(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

int func_281(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, char* sParam11)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_105(iParam0, &Var0, iParam7, sParam3, sParam4);
	Var0.f_17 = iParam1;
	StringCopy(&(Var0.f_57), sParam2, 16);
	StringCopy(&(Var0.f_61), sParam6, 16);
	StringCopy(&(Var0.f_25), sParam11, 64);
	Var0.f_6 = iParam5;
	Var0.f_7 = fParam8;
	Var0.f_71 = iParam9;
	Var0.f_72 = iParam10;
	return func_53(&Var0);
}

int func_282()
{
	return 0;
}

int func_283(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_105(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_57), sParam1, 16);
	StringCopy(&(Var0.f_61), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = fParam6;
	Var0.f_71 = iParam8;
	Var0.f_72 = iParam9;
	if (iParam10 != 0)
	{
		func_103(&(Var0.f_69), iParam10);
	}
	return func_53(&Var0);
}

char* func_284(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (_0xD3D15555431AB793())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (_0xD3D15555431AB793())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_285(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	if (func_18())
	{
		if (bParam3)
		{
			*fParam1 = (func_286(Local_171.f_3, iParam2) / 10f);
		}
		else
		{
			*fParam1 = (to_float(iParam2) / 10f);
		}
		return 1;
	}
	*iParam0 = iParam2;
	return 0;
}

float func_286(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (_0xD3D15555431AB793())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_288(to_float(iParam1));
			}
			break;
		
		case 2:
			if (_0xD3D15555431AB793())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_287(to_float(iParam1));
			}
			break;
	}
	return to_float(iParam1);
}

float func_287(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_288(float fParam0)
{
	return (fParam0 / 0.3048f);
}

void func_289()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2437549.f_2708[iVar0 /*80*/].f_2 != 0)
		{
			Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
			func_103(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

int func_290()
{
	return Global_2437549.f_2708[0 /*80*/].f_1;
}

bool func_291()
{
	return IS_BIT_SET(Global_1574647.f_1, 25);
}

int func_292(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if (((*uParam0 > 0 && !func_302()) && !(func_112(PLAYER_ID(), 0) && (func_108(PLAYER_ID()) || func_301(PLAYER_ID())))) && !func_299(PLAYER_ID()))
	{
		func_298();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_47(&(uParam0->f_3)))
			{
				func_2(&(uParam0->f_3), 0, 0);
			}
			else if (func_1(&(uParam0->f_3), 1000, 0))
			{
				SET_BIT(&(Global_1574647.f_1), 25);
				if (bParam1)
				{
					SET_BIT(&(Global_2531497.f_4588), 0);
					func_2(&(uParam0->f_5), 0, 0);
				}
				func_2(&(uParam0->f_1), 0, 0);
				func_297(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_47(&(uParam0->f_5)))
			{
				if (func_1(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_294();
				func_297(uParam0, 2);
			}
			break;
		
		case 2:
			func_294();
			if (func_1(&(uParam0->f_1), 15000, 0))
			{
				if (func_293("AMEV_LBD_HELP"))
				{
					CLEAR_HELP(1);
				}
				func_297(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_1(&(uParam0->f_1), 23500, 0))
			{
				CLEAR_BIT(&(Global_2531497.f_4588), 1);
				func_297(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			CLEAR_BIT(&(Global_2531497.f_4588), 1);
			return 1;
	}
	return 0;
}

int func_293(char* sParam0)
{
	BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_294()
{
	if (IS_BIT_SET(Global_2531497.f_4588, 0))
	{
		if (((((!IS_RADAR_HIDDEN() && !IS_RADAR_HIDDEN(Global_2531497.f_795, 2)) && func_12(IS_RADAR_HIDDEN(), 1, 1)) && !Global_73784) && !Global_58652) && !IS_RADAR_HIDDEN())
		{
			SET_BIT(&(Global_2531497.f_4588), 1);
			func_296("AMEV_LBD_HELP", -1);
			func_295(1);
			CLEAR_BIT(&(Global_2531497.f_4588), 0);
		}
	}
}

void func_295(int iParam0)
{
	0xB9C362BABECDDC7A(3, 21, 200, 0, 0);
	if (iParam0 && !func_302())
	{
		PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);
	}
}

void func_296(char* sParam0, int iParam1)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 0, false, iParam1);
}

void func_297(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_298()
{
	Global_2460541 = 1;
}

int func_299(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_300(Global_2424073[iParam0 /*421*/].f_309.f_5) == 2;
			}
		}
	}
	return 0;
}

int func_300(int iParam0)
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

bool func_301(int iParam0)
{
	return func_107(iParam0, 19);
}

bool func_302()
{
	return Global_2437549.f_2708[0 /*80*/].f_1 != 0;
}

void func_303()
{
	int iVar0[3];
	int iVar1;
	var uVar2[3];
	var uVar3[3];
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	var uVar17[3];
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	if (Local_171.f_4[0] > -1)
	{
		iVar11 = 0;
		bVar12 = (func_325() && !func_100(PLAYER_ID()));
		iVar7 = 0;
		while (iVar7 < 3)
		{
			iVar0[iVar7] = func_102();
			iVar7++;
		}
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (Local_171.f_4[iVar7] > -1)
			{
				iVar18 = INT_TO_PARTICIPANTINDEX(Local_171.f_4[iVar7]);
				if (NETWORK_IS_PARTICIPANT_ACTIVE(iVar18))
				{
					iVar1 = NETWORK_GET_PLAYER_INDEX(iVar18);
					if (func_12(iVar1, 0, 1))
					{
						if (!func_14(iVar1, 0))
						{
							if (Local_1537[Local_171.f_4[iVar7] /*12*/].f_4 != 0)
							{
								iVar0[iVar15] = iVar1;
								func_285(&(uVar2[iVar15]), &(uVar3[iVar15]), Local_1537[Local_171.f_4[iVar7] /*12*/].f_4, 1);
								iVar15++;
								if (func_261(1))
								{
									if (func_89(iVar1, 1))
									{
										uVar17[iVar7] = func_69(iVar1, -2, 0, 0, 0);
									}
								}
							}
						}
					}
				}
			}
			iVar7++;
		}
		iVar8 = PARTICIPANT_ID_TO_INT();
		if (func_100(PLAYER_ID()))
		{
			iVar19 = func_323();
			iVar20 = NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar19);
			if (NETWORK_IS_PLAYER_ACTIVE(iVar20))
			{
				iVar21 = NETWORK_GET_PARTICIPANT_INDEX(iVar20);
				if (NETWORK_IS_PARTICIPANT_ACTIVE(iVar21))
				{
					iVar8 = iVar21;
				}
			}
		}
		func_285(&iVar4, &fVar9, iLocal_144, 1);
		func_285(&iVar5, &fVar10, Local_1537[iVar8 /*12*/].f_4, 1);
		iVar22 = func_28(0);
		iVar23 = func_537(&(Local_171.f_39), 0, 0);
		iVar6 = func_535(0, (iVar22 - iVar23));
		if (func_17(-1, 0))
		{
			func_322(iVar6);
		}
		if (iVar6 > 30000)
		{
			iVar13 = 1;
		}
		else
		{
			iVar13 = 6;
		}
		if (IS_BIT_SET(iLocal_142, 2))
		{
			iVar14 = 2000;
		}
		else
		{
			iVar14 = 0;
		}
		if (func_325() || Local_171.f_3 == 6)
		{
			iVar16 = 2;
		}
		else
		{
			iVar16 = 1;
		}
		if (Local_171.f_37 >= 4)
		{
			iVar6 = 0;
		}
		if (func_18())
		{
			func_318(iVar0[0], iVar0[1], iVar0[2], uVar3[0], uVar3[1], uVar3[2], fVar9, fVar10, iVar6, func_284(Local_171.f_3, 0, 1, 0), &iVar11, iVar13, bVar12, iVar14, func_319(), iVar16, uVar17[0], uVar17[1], uVar17[2]);
		}
		else if (func_282())
		{
			func_317(iVar0[0], iVar0[1], iVar0[2], uVar2[0], uVar2[1], uVar2[2], iVar4, iVar5, iVar6, &iVar11, iVar13, bVar12, iVar14, func_319(), iVar16, uVar17[0], uVar17[1], uVar17[2]);
		}
		else
		{
			func_308(iVar0[0], iVar0[1], iVar0[2], uVar2[0], uVar2[1], uVar2[2], iVar4, iVar5, iVar6, func_284(Local_171.f_3, 0, 1, 0), &iVar11, iVar13, bVar12, iVar14, func_319(), iVar16, uVar17[0], uVar17[1], uVar17[2]);
		}
		func_304();
	}
}

void func_304()
{
	float fVar0;
	int iVar1;
	float fVar2;
	
	fVar0 = func_307();
	if (fVar0 >= 0f)
	{
		if (Local_171.f_37 == 3)
		{
			if (func_12(PLAYER_ID(), 1, 1))
			{
				if (IS_PED_IN_ANY_PLANE(IS_PED_IN_ANY_PLANE()) || IS_PED_IN_ANY_PLANE(IS_PED_IN_ANY_PLANE()))
				{
					iVar1 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
					if (IS_VEHICLE_DRIVEABLE(iVar1, 0))
					{
						func_306(iVar1, &fLocal_148);
						fVar2 = (fVar0 + fLocal_148);
						_SET_MINIMAP_ATTITUDE_INDICATOR_LEVEL(fVar2, 1, 21);
						func_305(fVar0);
						return;
					}
				}
			}
		}
		if (func_293("AMCH_FLYLOW"))
		{
			CLEAR_HELP(1);
		}
		if (IS_BIT_SET(iLocal_142, 4))
		{
			STOP_SOUND(iLocal_150);
			CLEAR_BIT(&iLocal_142, 4);
		}
		_SET_MINIMAP_ATTITUDE_INDICATOR_LEVEL(0f, 0, 21);
	}
}

void func_305(float fParam0)
{
	float fVar0;
	
	if (0x1A8EA222F9C67DBB(&fVar0))
	{
		if (fVar0 > fParam0)
		{
			func_538(6);
			if (!IS_BIT_SET(iLocal_142, 4))
			{
				PLAY_SOUND_FRONTEND(iLocal_150, "Altitude_Warning", "EXILE_1", true);
				SET_BIT(&iLocal_142, 4);
			}
		}
		else
		{
			if (func_293("AMCH_FLYLOW"))
			{
				CLEAR_HELP(1);
			}
			if (IS_BIT_SET(iLocal_142, 4))
			{
				STOP_SOUND(iLocal_150);
				CLEAR_BIT(&iLocal_142, 4);
			}
		}
	}
}

float func_306(int iParam0, float fParam1)
{
	float fVar0;
	vector3 vVar1;
	var uVar2;
	
	vVar1 = { GET_ENTITY_COORDS(iParam0, true) };
	GET_GROUND_Z_FOR_3D_COORD(vVar1, fParam1, 1, 0);
	GET_GROUND_Z_FOR_3D_COORD(vVar1, &uVar2, 0, 0);
	if (0xF9F2922717B819EC())
	{
		func_538(3);
		SET_BIT(&iLocal_142, 10);
		func_27(&uLocal_138, 0, 0);
	}
	else if (IS_BIT_SET(iLocal_142, 10))
	{
		if (func_1(&uLocal_138, 2000, 0))
		{
			CLEAR_BIT(&iLocal_142, 10);
		}
	}
	if (*fParam1 < 0f)
	{
		*fParam1 = 0f;
	}
	fVar0 = (vVar1.z - *fParam1);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 * -1f);
	}
	return fVar0;
}

float func_307()
{
	switch (Local_171.f_3)
	{
		case 11:
			return 20f;
		
		case 12:
			return 100f;
		
		default:
	}
	return -1f;
}

void func_308(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_314(0) == 0)
	{
		return;
	}
	func_313();
	iVar1 = 0;
	if (((Global_2460066[0] != iParam0 || Global_2460066[1] != iParam1) || Global_2460066[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2460066[0] = iParam0;
	Global_2460066[1] = iParam1;
	Global_2460066[2] = iParam2;
	Global_2460066[3] = 0;
	Global_2460066[4] = 0;
	if (Global_2460066[0] != func_102())
	{
		if (iVar1 == 1)
		{
			sVar0 = GET_PLAYER_NAME(Global_2460066[0]);
			Global_2460072[0 /*16*/] = { func_312(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_309(iParam3, &(Global_2460072[0 /*16*/]), -1, 109, 8, 1, sParam9, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, iParam16, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2460066[1] != func_102())
	{
		if (iVar1 == 1)
		{
			sVar0 = GET_PLAYER_NAME(Global_2460066[1]);
			Global_2460072[1 /*16*/] = { func_312(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_309(iParam4, &(Global_2460072[1 /*16*/]), -1, 108, 7, 1, sParam9, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, iParam17, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2460066[2] != func_102())
	{
		if (iVar1 == 1)
		{
			sVar0 = GET_PLAYER_NAME(Global_2460066[2]);
			Global_2460072[2 /*16*/] = { func_312(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_309(iParam5, &(Global_2460072[2 /*16*/]), -1, 107, 6, 1, sParam9, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, iParam18, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (bParam12)
	{
		func_309(iParam6, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 0, 0, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	switch (iParam15)
	{
		case 0:
			if (PLAYER_ID() != func_102())
			{
				if (func_162(PLAYER_ID()) == 0)
				{
					func_309(iParam7, GET_PLAYER_NAME(GET_PLAYER_NAME()), -1, 1, 4, 1, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
			}
			break;
		
		case 1:
			if (func_162(PLAYER_ID()) == 0)
			{
				func_309(iParam7, "HUD_USCORE", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 2:
			if (func_162(PLAYER_ID()) == 0)
			{
				func_309(iParam7, "HUD_UBEST", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_217(sParam14))
	{
		sVar2 = sParam14;
	}
	func_143(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0, -1);
	*iParam10 = 0;
	func_142();
}

void func_309(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_145(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1375006.f_1 = 1;
		func_144(6, iVar0);
		Global_1375006.f_3835[iVar0] = iParam0;
		StringCopy(&(Global_1375006.f_3835.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1375006.f_3835.f_183[iVar0] = iParam3;
		Global_1375006.f_3835.f_172[iVar0] = iParam2;
		Global_1375006.f_3835.f_260[iVar0] = iParam4;
		Global_1375006.f_3835.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1375006.f_3835.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1375006.f_3835.f_443[iVar0] = iParam7;
		Global_1375006.f_3835.f_454[iVar0] = fParam8;
		Global_1375006.f_3835.f_497[iVar0] = iParam9;
		Global_1375006.f_3835.f_508[iVar0] = iParam10;
		Global_1375006.f_3835.f_205[iVar0] = iParam11;
		Global_1375006.f_3835.f_216[iVar0] = iParam12;
		Global_1375006.f_3835.f_227[iVar0] = iParam13;
		Global_1375006.f_3835.f_238[iVar0] = iParam14;
		Global_1375006.f_3835.f_249[iVar0] = iParam15;
		Global_1375006.f_3835.f_519[iVar0] = iParam16;
		Global_1375006.f_3835.f_530[iVar0] = iParam17;
		Global_1375006.f_3835.f_541[iVar0] = iParam18;
		Global_1375006.f_3835.f_552[iVar0] = iParam19;
		Global_1375006.f_3835.f_563[iVar0] = iParam20;
		Global_1375006.f_3835.f_574[iVar0] = iParam21;
		Global_1375006.f_3835.f_585[iVar0] = iParam22;
		Global_1375006.f_3835.f_596[iVar0] = iParam23;
		Global_1375006.f_3835.f_607[iVar0] = iParam24;
		Global_1375006.f_3835.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_311())
		{
			Global_1375006.f_1109 = 1;
		}
		if (IS_PC_VERSION())
		{
			iVar2 = 0;
			_GET_ACTIVE_SCREEN_RESOLUTION(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1375006.f_1113 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1375006.f_1112 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1375006.f_1109 = 1;
			}
			if (func_310())
			{
				Global_1375006.f_1113 = 1;
			}
		}
	}
}

int func_310()
{
	int iVar0;
	var uVar1;
	
	if (IS_PC_VERSION())
	{
		_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_311()
{
	if (((_GET_CURRENT_LANGUAGE_ID() == 8 || _GET_CURRENT_LANGUAGE_ID() == 9) || _GET_CURRENT_LANGUAGE_ID() == 10) || _GET_CURRENT_LANGUAGE_ID() == 12)
	{
		return 1;
	}
	return 0;
}

struct<16> func_312(int iParam0, char* sParam1)
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 1:
			StringCopy(&Var0, _GET_LABEL_TEXT("HUD_POSFIRST"), 64);
			break;
		
		case 2:
			StringCopy(&Var0, _GET_LABEL_TEXT("HUD_POSSECOND"), 64);
			break;
		
		case 3:
			StringCopy(&Var0, _GET_LABEL_TEXT("HUD_POSTHIRD"), 64);
			break;
		
		case 4:
			StringCopy(&Var0, _GET_LABEL_TEXT("HUD_POSFOURTH"), 64);
			break;
		
		case 5:
			StringCopy(&Var0, _GET_LABEL_TEXT("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_313()
{
	HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_2460544 = 1;
}

int func_314(bool bParam0)
{
	if (func_316())
	{
		return 0;
	}
	if (func_315())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_12(PLAYER_ID(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_315()
{
	return Global_1590446[PLAYER_ID() /*871*/].f_196 != 0;
}

bool func_316()
{
	return IS_BIT_SET(Global_2359302, 12);
}

void func_317(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, char* sParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_314(0) == 0)
	{
		return;
	}
	func_313();
	iVar1 = 0;
	if (((Global_2460066[0] != iParam0 || Global_2460066[1] != iParam1) || Global_2460066[2] != iParam2) || *iParam9)
	{
		iVar1 = 1;
	}
	Global_2460066[0] = iParam0;
	Global_2460066[1] = iParam1;
	Global_2460066[2] = iParam2;
	Global_2460066[3] = 0;
	Global_2460066[4] = 0;
	if (Global_2460066[0] != func_102())
	{
		if (iVar1 == 1)
		{
			sVar0 = GET_PLAYER_NAME(Global_2460066[0]);
			Global_2460072[0 /*16*/] = { func_312(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_143(iParam3, &(Global_2460072[0 /*16*/]), 0, 0, -1, 0, 8, 1, 109, 0, 0, 0, 109, 0, iParam15, 0, 0, -1);
		}
	}
	if (Global_2460066[1] != func_102())
	{
		if (iVar1 == 1)
		{
			sVar0 = GET_PLAYER_NAME(Global_2460066[1]);
			Global_2460072[1 /*16*/] = { func_312(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_143(iParam4, &(Global_2460072[1 /*16*/]), 0, 0, -1, 0, 7, 1, 108, 0, 0, 0, 108, 0, iParam16, 0, 0, -1);
		}
	}
	if (Global_2460066[2] != func_102())
	{
		if (iVar1 == 1)
		{
			sVar0 = GET_PLAYER_NAME(Global_2460066[2]);
			Global_2460072[2 /*16*/] = { func_312(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_143(iParam5, &(Global_2460072[2 /*16*/]), 0, 0, -1, 0, 6, 1, 107, 0, 0, 0, 107, 0, iParam17, 0, 0, -1);
		}
	}
	if (bParam11)
	{
		func_143(iParam6, "HUD_ATTEMPTS", 0, 0, -1, 0, 5, 0, 1, 1, iParam12, 0, 0, 0, 0, 0, 0, -1);
	}
	switch (iParam14)
	{
		case 0:
			if (PLAYER_ID() != func_102())
			{
				if (func_162(PLAYER_ID()) == 0)
				{
					func_143(iParam7, GET_PLAYER_NAME(GET_PLAYER_NAME()), 0, 0, -1, 0, 4, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
			}
			break;
		
		case 1:
			if (func_162(PLAYER_ID()) == 0)
			{
				func_143(iParam7, "HUD_USCORE", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			break;
		
		case 2:
			if (func_162(PLAYER_ID()) == 0)
			{
				func_143(iParam7, "HUD_UBEST", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_217(sParam13))
	{
		sVar2 = sParam13;
	}
	func_143(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam10, 0, 0, 0, iParam10, 0, 0, 0, 0, -1);
	*iParam9 = 0;
	func_142();
}

void func_318(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, var uParam16, var uParam17, var uParam18)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_314(0) == 0)
	{
		return;
	}
	func_313();
	iVar1 = 0;
	if (((Global_2460066[0] != iParam0 || Global_2460066[1] != iParam1) || Global_2460066[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2460066[0] = iParam0;
	Global_2460066[1] = iParam1;
	Global_2460066[2] = iParam2;
	Global_2460066[3] = 0;
	Global_2460066[4] = 0;
	if (Global_2460066[0] != func_102())
	{
		if (iVar1 == 1)
		{
			sVar0 = GET_PLAYER_NAME(Global_2460066[0]);
			Global_2460072[0 /*16*/] = { func_312(1, sVar0) };
		}
		if (fParam3 > 0f)
		{
			func_309(-1, &(Global_2460072[0 /*16*/]), -1, 109, 8, 1, sParam9, 1, fParam3, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam16, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2460066[1] != func_102())
	{
		if (iVar1 == 1)
		{
			sVar0 = GET_PLAYER_NAME(Global_2460066[1]);
			Global_2460072[1 /*16*/] = { func_312(2, sVar0) };
		}
		if (fParam4 > 0f)
		{
			func_309(-1, &(Global_2460072[1 /*16*/]), -1, 108, 7, 1, sParam9, 1, fParam4, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam17, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2460066[2] != func_102())
	{
		if (iVar1 == 1)
		{
			sVar0 = GET_PLAYER_NAME(Global_2460066[2]);
			Global_2460072[2 /*16*/] = { func_312(3, sVar0) };
		}
		if (fParam5 > 0f)
		{
			func_309(-1, &(Global_2460072[2 /*16*/]), -1, 107, 6, 1, sParam9, 1, fParam5, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam18, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (bParam12)
	{
		func_309(-1, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 1, fParam6, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	switch (iParam15)
	{
		case 0:
			if (PLAYER_ID() != func_102())
			{
				if (func_162(PLAYER_ID()) == 0)
				{
					func_309(-1, GET_PLAYER_NAME(GET_PLAYER_NAME()), -1, 1, 4, 1, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
				}
			}
			break;
		
		case 1:
			if (func_162(PLAYER_ID()) == 0)
			{
				func_309(-1, "HUD_USCORE", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 2:
			if (func_162(PLAYER_ID()) == 0)
			{
				func_309(-1, "HUD_UBEST", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
			}
			break;
		
		case 3:
			break;
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_217(sParam14))
	{
		sVar2 = sParam14;
	}
	if (iParam8 != -10)
	{
		func_143(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0, -1);
	}
	*iParam10 = 0;
	func_142();
}

char* func_319()
{
	return "HUD_COUNTDOWN";
	switch (func_321(PLAYER_ID()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_320())
			{
				case 0:
					return "AET_CHALL_LJ";
				
				case 1:
					return "AET_CHALL_LS";
				
				case 2:
					return "AET_CHALL_HS";
				
				case 3:
					return "AET_CHALL_LST";
				
				case 4:
					return "AET_CHALL_LW";
				
				case 5:
					return "AET_CHALL_NC";
				
				case 6:
					return "AET_CHALL_LP";
				
				case 7:
					return "AET_CHALL_VS";
				
				case 8:
					return "AET_CHALL_NM";
				
				case 9:
					return "AET_CHALL_RD";
				
				case 10:
					return "AET_CHALL_LF";
				
				case 11:
					return "AET_CHALL_LFL";
				
				case 12:
					return "AET_CHALL_LFI";
				
				case 13:
					return "AET_CHALL_LB";
				
				case 14:
					return "AET_CHALL_MB";
				
				case 15:
					return "AET_CHALL_HSH";
				
				case 16:
					return "AET_CHALL_DB";
				
				case 17:
					return "AET_CHALL_ML";
				
				case 18:
					return "AET_CHALL_LSN";
				
				default:
			}
			break;
		
		case 136:
			return "AET_PENNED";
		
		case 138:
			return "AET_PARCEL";
		
		case 139:
			return "AET_PROPERTY";
		
		case 140:
			return "AET_DDROP";
		
		case 141:
			return "AET_KCASTLE";
		
		case 144:
			return "AET_BLAST";
		
		case 129:
			return "AET_UWARF";
		
		case 146:
			return "AET_BEAST";
	}
	return "";
}

int func_320()
{
	if (func_321(PLAYER_ID()) == 133)
	{
		return Global_2531497.f_4819;
	}
	return -1;
}

int func_321(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628955[iVar0 /*614*/];
	}
	return -1;
}

void func_322(int iParam0)
{
	if (IntToFloat(iParam0) < GET_FRAME_TIME())
	{
		if (IS_BIT_SET(Global_2531497.f_4735, 0))
		{
			if (!IS_STRING_NULL_OR_EMPTY(&(Global_2531497.f_4737)))
			{
				SET_RADIO_TO_STATION_NAME(&(Global_2531497.f_4737));
			}
			SET_USER_RADIO_CONTROL_ENABLED(1);
			TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
			STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
			SET_AUDIO_FLAG("DisableFlightMusic", 0);
			SET_AUDIO_FLAG("WantedMusicDisabled", 0);
			SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
			if (Global_2531497.f_4745 > -1)
			{
				RELEASE_SOUND_ID(Global_2531497.f_4745);
				Global_2531497.f_4745 = -1;
			}
			Global_2531497.f_4735 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (IS_BIT_SET(Global_2531497.f_4735, 0))
		{
			if (IS_BIT_SET(Global_2531497.f_4735, 4))
			{
				if (!IS_BIT_SET(Global_2531497.f_4735, 2))
				{
					if (_0x109697E2FFBAC8A1())
					{
						if ((!ARE_STRINGS_EQUAL(ARE_STRINGS_EQUAL(ARE_STRINGS_EQUAL()), "OFF") && ARE_STRINGS_EQUAL(ARE_STRINGS_EQUAL(), 0)) && !ARE_STRINGS_EQUAL(&(Global_2531497.f_4737)))
						{
							StringCopy(&(Global_2531497.f_4737), "", 32);
							TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
							STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
							SET_AUDIO_FLAG("DisableFlightMusic", 0);
							SET_AUDIO_FLAG("WantedMusicDisabled", 0);
							SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
							SET_USER_RADIO_CONTROL_ENABLED(1);
							SET_BIT(&(Global_2531497.f_4735), 2);
						}
					}
				}
				else if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0) && IS_PED_IN_ANY_VEHICLE(Global_2531497.f_4735, 5))
				{
					SET_RADIO_TO_STATION_NAME("OFF");
				}
			}
			else if (!IS_BIT_SET(Global_2531497.f_4735, 1))
			{
				if (iParam0 < 10000)
				{
					TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_20S");
				}
				else
				{
					TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S");
				}
				START_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
				SET_BIT(&(Global_2531497.f_4735), 1);
			}
			else if (!IS_BIT_SET(Global_2531497.f_4735, 4))
			{
				if (iParam0 < 27500)
				{
					if (GET_PLAYER_RADIO_STATION_GENRE() != 0)
					{
						if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0) && !IS_PED_IN_ANY_VEHICLE())
						{
							StringCopy(&(Global_2531497.f_4737), GET_PLAYER_RADIO_STATION_NAME(), 32);
							SET_RADIO_TO_STATION_NAME("OFF");
						}
						SET_USER_RADIO_CONTROL_ENABLED(1);
						SET_BIT(&(Global_2531497.f_4735), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!IS_BIT_SET(Global_2531497.f_4735, 3))
				{
					Global_2531497.f_4745 = GET_SOUND_ID();
					PLAY_SOUND_FRONTEND(Global_2531497.f_4745, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
					SET_BIT(&(Global_2531497.f_4735), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!IS_BIT_SET(Global_2531497.f_4735, 0))
			{
				Global_2531497.f_4735 = 0;
				Global_2531497.f_4745 = -1;
				PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
				SET_USER_RADIO_CONTROL_ENABLED(0);
				TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
				SET_AUDIO_FLAG("DisableFlightMusic", 1);
				SET_AUDIO_FLAG("WantedMusicDisabled", 1);
				SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
				SET_BIT(&(Global_2531497.f_4735), 0);
				if (!IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0) || IS_PED_IN_ANY_VEHICLE(Global_2531497.f_4735, 2))
				{
					SET_BIT(&(Global_2531497.f_4735), 2);
					SET_BIT(&(Global_2531497.f_4735), 5);
				}
				else
				{
					CLEAR_BIT(&(Global_2531497.f_4735), 5);
					CLEAR_BIT(&(Global_2531497.f_4735), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!IS_BIT_SET(Global_2531497.f_4735, 0))
		{
			Global_2531497.f_4735 = 0;
			Global_2531497.f_4745 = -1;
			PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
			SET_USER_RADIO_CONTROL_ENABLED(0);
			TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
			SET_AUDIO_FLAG("DisableFlightMusic", 1);
			SET_AUDIO_FLAG("WantedMusicDisabled", 1);
			SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
			SET_BIT(&(Global_2531497.f_4735), 0);
			if (!IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
			{
				SET_BIT(&(Global_2531497.f_4735), 2);
				SET_BIT(&(Global_2531497.f_4735), 5);
			}
			else
			{
				CLEAR_BIT(&(Global_2531497.f_4735), 2);
				CLEAR_BIT(&(Global_2531497.f_4735), 5);
			}
		}
	}
}

var func_323()
{
	if (DOES_ENTITY_EXIST(func_324()))
	{
		return func_324();
	}
	return func_97();
}

var func_324()
{
	return Global_2359302.f_3;
}

int func_325()
{
	switch (Local_171.f_3)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 8:
		case 9:
		case 11:
		case 12:
		case 13:
			return 1;
		
		default:
	}
	return 0;
}

void func_326()
{
	int iVar0;
	struct<42> Var1;
	int iVar2;
	int iVar3;
	
	Var1 = -1;
	Var1.f_22 = -1082130432;
	Var1.f_23 = 3;
	Var1.f_39 = -1;
	Var1.f_41 = -1;
	iVar0 = 0;
	while (iVar0 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		Local_192.f_534[iVar0 /*42*/] = { Var1 };
		Local_192.f_534[iVar0 /*42*/].f_1 = func_102();
		if (Local_171.f_4[iVar0] > -1)
		{
			iVar3 = INT_TO_PARTICIPANTINDEX(Local_171.f_4[iVar0]);
			if (NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar2 = NETWORK_GET_PLAYER_INDEX(iVar3);
				if (!func_14(iVar2, 0))
				{
					Local_192.f_534[iVar0 /*42*/] = Local_171.f_4[iVar0];
					Local_192.f_534[iVar0 /*42*/].f_1 = iVar2;
					Local_192.f_534[iVar0 /*42*/].f_9 = Local_1537[Local_171.f_4[iVar0] /*12*/].f_4;
					Local_192.f_534[iVar0 /*42*/].f_31 = -1;
					Local_192.f_1.f_108 = 8;
				}
			}
		}
		iVar0++;
	}
}

void func_327()
{
	SET_BIT(&(Global_2531497.f_1734), 19);
}

int func_328(int iParam0)
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		iVar0 = Local_171.f_4[iParam0];
		if (iVar0 >= 0)
		{
			if (func_21(Local_1537[iVar0 /*12*/].f_4, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_329()
{
}

void func_330()
{
	char* sVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	float fVar4;
	
	func_285(&iVar1, &fVar2, iLocal_144, 1);
	switch (Local_171.f_3)
	{
		case 2:
			sVar0 = "MP_Highest_Speed_Vehicle_Boost_Scene";
			func_332(sVar0, fVar2 >= 70f);
			if (IS_AUDIO_SCENE_ACTIVE(sVar0))
			{
				fVar2 = func_331(fVar2, 110f);
				fVar2 = ((fVar2 - 70f) / 40f);
				SET_AUDIO_SCENE_VARIABLE(sVar0, "HighestSpeedEngineBoost", fVar2);
			}
			break;
		
		case 8:
			sVar0 = "MP_Near_Miss_High_Score_Boost_Scene";
			fVar4 = 0x55A8BECAF28A4EB7();
			bVar3 = (iVar1 >= 30 && fVar4 >= 40f);
			func_332(sVar0, bVar3);
			if (IS_AUDIO_SCENE_ACTIVE(sVar0))
			{
				fVar2 = to_float(iVar1);
				fVar2 = func_331(fVar2, 30f);
				fVar2 = ((fVar2 - 15f) / 15f);
				fVar4 = func_331(fVar4, 70f);
				fVar4 = ((fVar4 - 40f) / 30f);
				SET_AUDIO_SCENE_VARIABLE(sVar0, "VehiclePassByBoost", (fVar2 * fVar4));
			}
			if (iLocal_149 != iLocal_144)
			{
				if (iLocal_144 > 0)
				{
					PLAY_SOUND_FRONTEND(iLocal_151, "Near_Miss_Counter", "GTAO_FM_Events_Soundset", false);
					SET_VARIABLE_ON_SOUND(iLocal_151, "Count", to_float(iVar1));
				}
				else
				{
					PLAY_SOUND_FRONTEND(-1, "Near_Miss_Counter_Reset", "GTAO_FM_Events_Soundset", false);
				}
			}
			iLocal_149 = iLocal_144;
			break;
	}
	if (func_20(0))
	{
		if (!IS_BIT_SET(iLocal_142, 3))
		{
			if (func_257(1))
			{
				PLAY_SOUND_FRONTEND(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", false);
			}
			else
			{
				PLAY_SOUND_FRONTEND(-1, "Enter_1st", "GTAO_FM_Events_Soundset", false);
			}
			SET_BIT(&iLocal_142, 3);
		}
	}
	else if (IS_BIT_SET(iLocal_142, 3))
	{
		if (func_257(1))
		{
			PLAY_SOUND_FRONTEND(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", false);
		}
		else
		{
			PLAY_SOUND_FRONTEND(-1, "Lose_1st", "GTAO_FM_Events_Soundset", false);
		}
		CLEAR_BIT(&iLocal_142, 3);
	}
}

float func_331(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_332(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!IS_AUDIO_SCENE_ACTIVE(sParam0))
		{
			START_AUDIO_SCENE(sParam0);
		}
	}
	else if (IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		STOP_AUDIO_SCENE(sParam0);
	}
}

void func_333()
{
	int iVar0;
	
	if ((!func_162(PLAYER_ID()) && !func_14(PLAYER_ID(), 0)) && func_12(PLAYER_ID(), 1, 1))
	{
		iVar0 = func_358();
		if (iVar0 != Local_1537[PARTICIPANT_ID_TO_INT() /*12*/].f_4)
		{
			if (func_21(iVar0, iLocal_141) || func_357(iVar0, iLocal_141))
			{
				if (!func_356() || func_1(&uLocal_130, 1000, 0))
				{
					func_27(&uLocal_130, 0, 0);
					iLocal_141 = iVar0;
					Local_1537[PARTICIPANT_ID_TO_INT() /*12*/].f_4 = iVar0;
					func_336();
					if (iLocal_140 == 0)
					{
						iLocal_140 = 0xBA7F0B77D80A4EB7();
					}
					if (Local_1538.f_11 == 0)
					{
						Local_1538.f_11 = 0xF12E6CD06C73D69E();
					}
				}
			}
		}
		iLocal_144 = func_334();
	}
}

int func_334()
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = -1;
	switch (Local_171.f_3)
	{
		case 0:
			fVar1 = 0x9EC8858184CD253A();
			break;
		
		case 1:
			fVar1 = 0xAFF47709F1D5DCCE();
			break;
		
		case 2:
			fVar1 = 0x55A8BECAF28A4EB7();
			break;
		
		case 3:
			fVar1 = 0x84A810B375E69C0E();
			break;
		
		case 4:
			fVar1 = 0xA943FD1722E11EFD();
			break;
		
		case 5:
			fVar1 = 0xBA9749CC94C1FD85();
			break;
		
		case 8:
			iVar0 = 0xE8853FBCE7D8D0D6();
			break;
		
		case 9:
			fVar1 = 0x32CAC93C9DE73D32();
			break;
		
		case 11:
			fVar1 = 0x6E0A5253375C4584();
			break;
		
		case 12:
			fVar1 = 0x6E0A5253375C4584();
			break;
		
		case 13:
			fVar1 = 0x0B8B7F74BF061C6D();
			break;
	}
	if (func_18())
	{
		fVar1 = (fVar1 * 10f);
		iVar0 = round(fVar1);
	}
	iVar2 = ABSI(iVar0);
	func_335(&iVar2);
	if (iVar2 == iLocal_143)
	{
		if (func_21(iVar2, 0))
		{
			if (!IS_BIT_SET(iLocal_142, 1))
			{
				func_27(&uLocal_132, 0, 0);
				Local_1537[PARTICIPANT_ID_TO_INT() /*12*/].f_4.f_2 = func_537(&uLocal_132, 0, 0);
				SET_BIT(&iLocal_142, 1);
			}
			else if ((func_537(&uLocal_132, 0, 0) % 1000) == 0)
			{
				Local_1537[PARTICIPANT_ID_TO_INT() /*12*/].f_4.f_2 = func_537(&uLocal_132, 0, 0);
			}
		}
	}
	else
	{
		CLEAR_BIT(&iLocal_142, 1);
	}
	if ((func_21(iLocal_143, 0) && !func_21(iVar2, 0)) && !func_1(&uLocal_134, 2000, 0))
	{
		iVar2 = iLocal_143;
		SET_BIT(&iLocal_142, 2);
	}
	else
	{
		iLocal_143 = iVar2;
		func_46(&uLocal_134);
		CLEAR_BIT(&iLocal_142, 2);
	}
	return iVar2;
}

void func_335(int iParam0)
{
	switch (Local_171.f_3)
	{
		case 2:
			if (*iParam0 > 0)
			{
				if (func_12(PLAYER_ID(), 1, 1))
				{
					if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
					{
						if ((((IS_PED_IN_ANY_BOAT(IS_PED_IN_ANY_BOAT()) || IS_PED_IN_ANY_BOAT(IS_PED_IN_ANY_BOAT())) || IS_PED_IN_ANY_BOAT(IS_PED_IN_ANY_BOAT())) || IS_PED_IN_ANY_BOAT(IS_PED_IN_ANY_BOAT())) || IS_PED_IN_ANY_BOAT(IS_PED_IN_ANY_BOAT()))
						{
							*iParam0 = 0;
						}
					}
					else
					{
						*iParam0 = 0;
					}
				}
			}
			break;
	}
}

void func_336()
{
	if (!IS_BIT_SET(Local_1537[IS_BIT_SET() /*12*/].f_1, 2))
	{
		SET_BIT(&(Local_1537[SET_BIT() /*12*/].f_1), 2);
		func_337(1);
	}
}

void func_337(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (!IS_BIT_SET(Global_1628955[IS_BIT_SET() /*614*/].f_1, 7))
		{
			if (((!func_106(PLAYER_ID()) && !func_7(PLAYER_ID())) && !func_162(PLAYER_ID())) && !func_355(PLAYER_ID()))
			{
				if (func_165())
				{
					func_348(2, 0, 1);
					func_347();
				}
				if (func_346(0))
				{
					uVar0 = func_208(2480, -1, 0);
					CLEAR_BIT(&uVar0, 0);
					func_347();
				}
				if (func_346(func_345(func_321(PLAYER_ID()))))
				{
					uVar0 = func_208(2480, -1, 0);
					CLEAR_BIT(&uVar0, func_345(func_321(CLEAR_BIT())));
					func_347();
				}
				if (func_344())
				{
					func_347();
				}
				if (func_321(PLAYER_ID()) > -1)
				{
					SET_BIT(&(Global_1628955[SET_BIT() /*614*/].f_1), 7);
					if (func_321(PLAYER_ID()) == 236)
					{
						func_343();
					}
					func_340(func_342(func_321(PLAYER_ID())));
				}
			}
		}
	}
	else if (IS_BIT_SET(Global_1628955[IS_BIT_SET() /*614*/].f_1, 7))
	{
		CLEAR_BIT(&(Global_1628955[CLEAR_BIT() /*614*/].f_1), 7);
		func_338();
	}
}

void func_338()
{
	if (func_339())
	{
		CLEAR_BIT(&(Global_1628955[CLEAR_BIT() /*614*/].f_1), 17);
	}
}

bool func_339()
{
	return IS_BIT_SET(Global_1628955[IS_BIT_SET() /*614*/].f_1, 17);
}

void func_340(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_341() /*10828*/].f_6168.f_4015[iVar0 /*3*/] == iParam0)
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

int func_341()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_342(int iParam0)
{
	switch (iParam0)
	{
		case 236:
			return 67;
		
		case 133:
			return 69;
		
		default:
	}
	return 68;
}

void func_343()
{
	if (!func_339())
	{
		Global_2531497.f_6305 = 0xBA7F0B77D80A4EB7();
		SET_BIT(&(Global_1628955[SET_BIT() /*614*/].f_1), 17);
	}
}

int func_344()
{
	if (Global_2437549.f_1155.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

int func_345(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			return 10;
		
		case 132:
			return 1;
		
		case 133:
			return 2;
		
		case 136:
			return 11;
		
		case 138:
			return 5;
		
		case 139:
			return 6;
		
		case 129:
			return 8;
		
		case 140:
			return 4;
		
		case 141:
			return 9;
		
		case 144:
			return 3;
		
		case 146:
			return 7;
		
		case 236:
			return 12;
		
		default:
	}
	return Global_262145.f_23622;
}

bool func_346(int iParam0)
{
	int iVar0;
	
	iVar0 = func_208(2480, -1, 0);
	return IS_BIT_SET(iVar0, iParam0);
}

void func_347()
{
	if (func_344())
	{
		Global_2437549.f_1155.f_16 = 1;
	}
}

void func_348(int iParam0, int iParam1, bool bParam2)
{
	if (func_165())
	{
		if (iParam1 == 1)
		{
			if (Global_2531497.f_4395 == -1)
			{
				Global_2531497.f_4395 = Global_262145.f_26329;
			}
			func_27(&(Global_2531497.f_4393), 0, 0);
			if (bParam2)
			{
				if (Global_2531497.f_4398 == -1)
				{
					Global_2531497.f_4398 = Global_262145.f_26330;
				}
				func_27(&(Global_2531497.f_4396), 0, 0);
			}
			else
			{
				Global_1312417 = 0;
				Global_1628955[PLAYER_ID() /*614*/].f_8 = 0;
				func_354(1);
			}
		}
		else
		{
			Global_1312417 = 0;
			Global_1628955[PLAYER_ID() /*614*/].f_8 = 0;
			func_354(1);
		}
		if ((!NETWORK_IS_ACTIVITY_SESSION() && !func_353()) && !func_349(NETWORK_IS_ACTIVITY_SESSION()))
		{
			Global_968396 = 0;
		}
		0x35EEC6C2BC821A71(0, -1, -1, iParam0);
	}
}

int func_349(int iParam0)
{
	if (func_350(iParam0, 1, 0))
	{
		if (Global_1590446[iParam0 /*871*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_350(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_351(iParam0))
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

bool func_351(int iParam0)
{
	return func_352(iParam0);
}

bool func_352(int iParam0)
{
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_13.f_1, 0);
}

bool func_353()
{
	return Global_2448961.f_740;
}

void func_354(bool bParam0)
{
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_165())
		{
			if (func_12(PLAYER_ID(), 1, 0))
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
			if (func_12(PLAYER_ID(), 1, 1))
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

int func_355(int iParam0)
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

int func_356()
{
	switch (Local_171.f_3)
	{
		case 2:
		case 3:
		case 5:
		case 4:
		case 8:
		case 1:
		case 6:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			return 1;
		
		default:
	}
	return 0;
}

int func_357(int iParam0, int iParam1)
{
	if (Local_171.f_3 == 17)
	{
		if (iParam0 < iParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_358()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (!func_373())
	{
		if (Local_171.f_3 == 14)
		{
			if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0) && func_372(IS_PED_IN_ANY_VEHICLE(), 0) == -1)
			{
				iVar2 = GET_VEHICLE_PED_IS_USING(GET_VEHICLE_PED_IS_USING());
				if ((!func_371(&iVar2, 0) || GET_ENTITY_MODEL(iVar2) != joaat("dodo")) && GET_ENTITY_MODEL(iVar2))
				{
					func_364(Local_171.f_3 != 14, 1, 0);
					if (func_363())
					{
						iVar3 = func_362();
						if (iVar3 >= 0)
						{
							if (!IS_BIT_SET(Local_1537[IS_BIT_SET() /*12*/].f_8[func_361(iVar3)], func_360(iVar3)))
							{
								iLocal_145++;
								SET_BIT(&(Local_1537[SET_BIT() /*12*/].f_8[func_361(iVar3)]), func_360(iVar3));
							}
						}
					}
					iVar0 = iLocal_145;
				}
			}
		}
		else
		{
			iVar0 = func_359();
		}
	}
	else
	{
		0xF11F01D98113536A(&fVar1);
		if (func_18())
		{
			fVar1 = (fVar1 * 10f);
		}
		iVar0 = round(fVar1);
	}
	return ABSI(iVar0);
}

int func_359()
{
	switch (Local_171.f_3)
	{
		case 14:
			return 0;
		
		case 4:
			return 0;
		
		default:
	}
	return -1;
}

int func_360(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_361(iParam0) * 31);
}

int func_361(int iParam0)
{
	if (iParam0 < 31)
	{
		return 0;
	}
	else if (iParam0 < 62)
	{
		return 1;
	}
	return (iParam0 / 31);
}

int func_362()
{
	return iLocal_112;
}

int func_363()
{
	if (iLocal_119 == 1)
	{
		iLocal_119 = 0;
		return 1;
	}
	return 0;
}

void func_364(bool bParam0, bool bParam1, int iParam2)
{
	func_366(bParam0, iParam2);
	if (bParam1)
	{
		if (vLocal_123.z < vLocal_124.z)
		{
			vLocal_123.z = 0f;
		}
		else
		{
			vLocal_124.z = 0f;
		}
		if (vLocal_125.z < vLocal_126.z)
		{
			vLocal_125.z = 0f;
		}
		else
		{
			vLocal_126.z = 0f;
		}
	}
	switch (iLocal_113)
	{
		case 0:
			if (!IS_PED_INJURED(IS_PED_INJURED()))
			{
				if (vdist2(GET_ENTITY_COORDS(GET_ENTITY_COORDS(), false), vLocal_121[iLocal_112 /*3*/]) < fLocal_122)
				{
					if (IS_PED_IN_ANY_HELI(IS_PED_IN_ANY_HELI()) || IS_PED_IN_ANY_HELI(IS_PED_IN_ANY_HELI()))
					{
						if (IS_VEHICLE_DRIVEABLE(IS_VEHICLE_DRIVEABLE(IS_VEHICLE_DRIVEABLE(), 0), 0))
						{
							if (IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), vLocal_123, vLocal_124, fLocal_127, 0, true, 0))
							{
								bLocal_114 = true;
								iLocal_113 = 1;
							}
							if (IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), vLocal_125, vLocal_126, fLocal_127, 0, true, 0))
							{
								bLocal_115 = true;
								iLocal_113 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!IS_PED_INJURED(IS_PED_INJURED()))
			{
				if (!IS_PED_IN_ANY_HELI(IS_PED_IN_ANY_HELI()) && !IS_PED_IN_ANY_HELI(IS_PED_IN_ANY_HELI()))
				{
					func_365();
				}
				else if (!IS_VEHICLE_DRIVEABLE(IS_VEHICLE_DRIVEABLE(IS_VEHICLE_DRIVEABLE(), 0), 0))
				{
					func_365();
				}
				else if (!IS_ENTITY_IN_AIR(IS_ENTITY_IN_AIR(IS_ENTITY_IN_AIR(), 0)) && !bParam1)
				{
					func_365();
				}
				if (bLocal_114)
				{
					if (iLocal_118)
					{
						if (iLocal_117)
						{
							if (!IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), vLocal_123, vLocal_124, fLocal_127, 0, true, 0) && !IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), vLocal_125, vLocal_126, fLocal_127, 0, true, 0))
							{
								func_365();
								iLocal_119 = 1;
							}
						}
						else if (!IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), vLocal_123, vLocal_124, fLocal_127, 0, true, 0) && IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), vLocal_125, vLocal_126, fLocal_127, 0, true, 0))
						{
							iLocal_117 = 1;
						}
						else if (!IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), vLocal_123, vLocal_124, fLocal_127, 0, true, 0) && !IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), vLocal_125, vLocal_126, fLocal_127, 0, true, 0))
						{
							func_365();
						}
					}
					else if (IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), vLocal_123, vLocal_124, fLocal_127, 0, true, 0) && IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), vLocal_125, vLocal_126, fLocal_127, 0, true, 0))
					{
						iLocal_118 = 1;
					}
					else if (!IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), vLocal_123, vLocal_124, fLocal_127, 0, true, 0) && !IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), vLocal_125, vLocal_126, fLocal_127, 0, true, 0))
					{
						func_365();
					}
				}
				else if (bLocal_115)
				{
					if (iLocal_118)
					{
						if (iLocal_116)
						{
							if (!IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), vLocal_123, vLocal_124, fLocal_127, 0, true, 0) && !IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), vLocal_125, vLocal_126, fLocal_127, 0, true, 0))
							{
								func_365();
								iLocal_119 = 1;
							}
						}
						else if (IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), vLocal_123, vLocal_124, fLocal_127, 0, true, 0) && !IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), vLocal_125, vLocal_126, fLocal_127, 0, true, 0))
						{
							iLocal_116 = 1;
						}
						else if (!IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), vLocal_123, vLocal_124, fLocal_127, 0, true, 0) && !IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), vLocal_125, vLocal_126, fLocal_127, 0, true, 0))
						{
							func_365();
						}
					}
					else if (IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), vLocal_123, vLocal_124, fLocal_127, 0, true, 0) && IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), vLocal_125, vLocal_126, fLocal_127, 0, true, 0))
					{
						iLocal_118 = 1;
					}
					else if (!IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), vLocal_123, vLocal_124, fLocal_127, 0, true, 0) && !IS_ENTITY_IN_ANGLED_AREA(IS_ENTITY_IN_ANGLED_AREA(), vLocal_125, vLocal_126, fLocal_127, 0, true, 0))
					{
						func_365();
					}
				}
			}
			break;
	}
}

void func_365()
{
	bLocal_114 = false;
	bLocal_115 = false;
	iLocal_116 = 0;
	iLocal_117 = 0;
	iLocal_118 = 0;
	iLocal_113 = 0;
}

void func_366(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	vLocal_120 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), false) };
	fVar1 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if ((uParam0 || !func_370(iVar0)) && (uParam1 || !func_369(iVar0)))
		{
			if (func_368(vLocal_120, vLocal_121[iVar0 /*3*/], 100f, 0))
			{
				fVar2 = vdist(vLocal_120, vLocal_121[iVar0 /*3*/]);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iLocal_112 = iVar0;
				}
			}
		}
		iVar0++;
	}
	func_367(iLocal_112);
}

void func_367(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			vLocal_123 = { 1103.014f, -233.0374f, 56.13004f };
			vLocal_124 = { 1073.191f, -214.8478f, 66.0593f };
			fLocal_127 = 30f;
			vLocal_125 = { 1093.589f, -248.5926f, 56.88639f };
			vLocal_126 = { 1063.774f, -230.1425f, 66.67847f };
			break;
		
		case 1:
			vLocal_123 = { 1044.182f, -324.5904f, 49.33408f };
			vLocal_124 = { 1016.71f, -307.7383f, 64.81343f };
			fLocal_127 = 30f;
			vLocal_125 = { 1007.983f, -320.6159f, 48.4543f };
			vLocal_126 = { 1036.007f, -337.4204f, 64.4808f };
			break;
		
		case 2:
			vLocal_123 = { 916.599f, -419.8782f, 35.62748f };
			vLocal_124 = { 910.3793f, -383.8826f, 47.54339f };
			fLocal_127 = 7f;
			vLocal_125 = { 912.1362f, -420.5161f, 35.38034f };
			vLocal_126 = { 906.8952f, -384.6779f, 47.24926f };
			break;
		
		case 3:
			vLocal_123 = { 757.7189f, -472.924f, 19.2535f };
			vLocal_124 = { 696.5936f, -420.2115f, 35.46084f };
			fLocal_127 = 20.75f;
			vLocal_125 = { 744.9114f, -480.7373f, 19.06514f };
			vLocal_126 = { 682.5614f, -429.5533f, 37.0266f };
			break;
		
		case 4:
			vLocal_123 = { 680.3677f, -581.1792f, 14.2145f };
			vLocal_124 = { 599.8101f, -528.3059f, 33.40958f };
			fLocal_127 = 45f;
			vLocal_125 = { 667.3692f, -610.5356f, 13.85401f };
			vLocal_126 = { 582.8433f, -556.7818f, 33.40335f };
			break;
		
		case 5:
			vLocal_123 = { 644.2497f, -844.7504f, 12.36707f };
			vLocal_124 = { 526.8608f, -845.2521f, 35.9896f };
			fLocal_127 = 25f;
			vLocal_125 = { 644.3659f, -859.3878f, 12.59677f };
			vLocal_126 = { 526.8615f, -857.5208f, 36.32857f };
			break;
		
		case 6:
			vLocal_123 = { 634.972f, -1011.64f, 10.92594f };
			vLocal_124 = { 539.6501f, -1024.017f, 35.95852f };
			fLocal_127 = 25f;
			vLocal_125 = { 634.9612f, -1029.123f, 10.61846f };
			vLocal_126 = { 543.4893f, -1038.261f, 35.9593f };
			break;
		
		case 7:
			vLocal_123 = { 645.7223f, -1191.215f, 10.45198f };
			vLocal_124 = { 524.3018f, -1197.167f, 39.61172f };
			fLocal_127 = 50f;
			vLocal_125 = { 645.7223f, -1228.966f, 10.98015f };
			vLocal_126 = { 521.9379f, -1217.607f, 39.47172f };
			break;
		
		case 8:
			vLocal_123 = { 642.1216f, -1295.73f, 9.005976f };
			vLocal_124 = { 568.1702f, -1375.351f, 20.12989f };
			fLocal_127 = 7f;
			vLocal_125 = { 644.7772f, -1298.168f, 9.128529f };
			vLocal_126 = { 571.6342f, -1378.644f, 20.35802f };
			break;
		
		case 9:
			vLocal_123 = { 686.5675f, -1444.71f, 9.065001f };
			vLocal_124 = { 598.9328f, -1444.438f, 25.68846f };
			fLocal_127 = 25f;
			vLocal_125 = { 682.3027f, -1429.872f, 9.890836f };
			vLocal_126 = { 593.8217f, -1432.995f, 25.60072f };
			break;
		
		case 10:
			vLocal_123 = { 718.7617f, -1734.313f, 9.082874f };
			vLocal_124 = { 615.0017f, -1725.897f, 27.54585f };
			fLocal_127 = 30f;
			vLocal_125 = { 717.5355f, -1748.646f, 9.363478f };
			vLocal_126 = { 614.218f, -1734.848f, 27.35708f };
			break;
		
		case 11:
			vLocal_123 = { 694.3165f, -2049.806f, 0.009695f };
			vLocal_124 = { 618.6845f, -2040.014f, 25.83412f };
			fLocal_127 = 30f;
			vLocal_125 = { 693.1836f, -2063.225f, 0.429037f };
			vLocal_126 = { 607.5944f, -2055.326f, 26.91816f };
			break;
		
		case 12:
			vLocal_123 = { 642.6671f, -2494.551f, 0.468485f };
			vLocal_124 = { 570.1807f, -2513.959f, 11.78794f };
			fLocal_127 = 20f;
			vLocal_125 = { 647.0339f, -2506.202f, 0.583701f };
			vLocal_126 = { 571.1415f, -2522.975f, 10.45045f };
			break;
		
		case 13:
			vLocal_123 = { 691.8235f, -2558.219f, 0.363352f };
			vLocal_124 = { 645.8863f, -2600.311f, 9.898791f };
			fLocal_127 = 10.25f;
			vLocal_125 = { 695.7928f, -2561.034f, 0.346731f };
			vLocal_126 = { 656.3919f, -2601.972f, 9.643657f };
			break;
		
		case 14:
			vLocal_123 = { 723.6254f, -2562.171f, 0.255647f };
			vLocal_124 = { 720.752f, -2619.77f, 15.73211f };
			fLocal_127 = 15f;
			vLocal_125 = { 735.765f, -2561.935f, 0.311182f };
			vLocal_126 = { 736.1214f, -2618.767f, 15.79061f };
			break;
		
		case 15:
			vLocal_123 = { 891.4387f, -2603.12f, 0f };
			vLocal_124 = { 704.4932f, -2634.793f, 45f };
			fLocal_127 = 20f;
			vLocal_125 = { 893.2578f, -2616.235f, 0f };
			vLocal_126 = { 707.7261f, -2647.696f, 45f };
			break;
		
		case 16:
			vLocal_123 = { -2669.587f, 2491.96f, 2.043799f };
			vLocal_124 = { -2617.765f, 2841.595f, 14.0822f };
			fLocal_127 = 26.5f;
			vLocal_125 = { -2687.606f, 2494.868f, 2.608733f };
			vLocal_126 = { -2637.085f, 2846.875f, 14.15988f };
			break;
		
		case 17:
			vLocal_123 = { -1986.173f, 4521.799f, 0f };
			vLocal_124 = { -1809.903f, 4699.551f, 53.5088f };
			fLocal_127 = 17f;
			vLocal_125 = { -1995.668f, 4531.259f, 0f };
			vLocal_126 = { -1817.543f, 4708.395f, 53.50917f };
			break;
		
		case 18:
			vLocal_123 = { -526.0265f, 4472.442f, 0f };
			vLocal_124 = { -505.5714f, 4335.725f, 86.73311f };
			fLocal_127 = 10f;
			vLocal_125 = { -519.9281f, 4476.346f, 0f };
			vLocal_126 = { -500.7313f, 4336.389f, 86.71289f };
			break;
		
		case 19:
			vLocal_123 = { 98.1615f, 3384.489f, 45.45169f };
			vLocal_124 = { 154.974f, 3350.694f, 30.03358f };
			fLocal_127 = 8f;
			vLocal_125 = { 152.6802f, 3346.793f, 45.02156f };
			vLocal_126 = { 95.57188f, 3380.091f, 30.43284f };
			break;
		
		case 20:
			vLocal_123 = { 147.8606f, 3406.796f, 38.03672f };
			vLocal_124 = { 126.1329f, 3416.927f, 30.02987f };
			fLocal_127 = 14.5f;
			vLocal_125 = { 130.0916f, 3425.417f, 38.05672f };
			vLocal_126 = { 151.8703f, 3415.391f, 30.0578f };
			break;
		
		case 21:
			vLocal_123 = { 2830.972f, 4967.14f, 34.56013f };
			vLocal_124 = { 2818.719f, 4992.298f, 51.2909f };
			fLocal_127 = 10f;
			vLocal_125 = { 2826.767f, 4964.185f, 34.10636f };
			vLocal_126 = { 2814.216f, 4989.983f, 51.21849f };
			break;
		
		case 22:
			vLocal_123 = { -151.5764f, 4264.417f, 31.04735f };
			vLocal_124 = { -193.1962f, 4224.604f, 43.87255f };
			fLocal_127 = 10f;
			vLocal_125 = { -148.3842f, 4261.071f, 31.57409f };
			vLocal_126 = { -190.4719f, 4222.076f, 43.95443f };
			break;
		
		case 23:
			vLocal_123 = { -426.6919f, 2964.272f, 14.848f };
			vLocal_124 = { -396.2298f, 2959.278f, 23.50637f };
			fLocal_127 = 7f;
			vLocal_125 = { -425.0283f, 2967.861f, 15.22699f };
			vLocal_126 = { -395.6073f, 2962.607f, 24.38079f };
			break;
		
		case 24:
			vLocal_123 = { -192.3414f, 2864.916f, 30.72595f };
			vLocal_124 = { -170.1509f, 2857.128f, 43.94182f };
			fLocal_127 = 10f;
			vLocal_125 = { -192.0129f, 2871.603f, 29.99943f };
			vLocal_126 = { -169.5957f, 2863.838f, 44.03251f };
			break;
		
		case 25:
			vLocal_123 = { 2539.185f, 2228.772f, 18.6102f };
			vLocal_124 = { 2574.373f, 2169.401f, 27.26598f };
			fLocal_127 = 10f;
			vLocal_125 = { 2543.708f, 2231.402f, 18.331f };
			vLocal_126 = { 2578.079f, 2171.584f, 27.26057f };
			break;
		
		case 26:
			vLocal_123 = { 2954.087f, 815.7209f, 0.037901f };
			vLocal_124 = { 2933.189f, 796.4688f, 12.98392f };
			fLocal_127 = 35f;
			vLocal_125 = { 2966.123f, 806.8889f, 0.544056f };
			vLocal_126 = { 2950.801f, 786.7816f, 11.74596f };
			break;
		
		case 27:
			vLocal_123 = { 2329.673f, -459.6648f, 70.24277f };
			vLocal_124 = { 2413.384f, -361.2188f, 91.77886f };
			fLocal_127 = 12f;
			vLocal_125 = { 2324.752f, -455.5238f, 70.25145f };
			vLocal_126 = { 2407.409f, -356.2003f, 91.43083f };
			break;
		
		case 28:
			vLocal_123 = { 1943.428f, -753.251f, 80.17905f };
			vLocal_124 = { 1850.365f, -760.9587f, 93.02522f };
			fLocal_127 = 7f;
			vLocal_125 = { 1943.366f, -758.287f, 80.32291f };
			vLocal_126 = { 1851.354f, -765.1807f, 92.93546f };
			break;
		
		case 29:
			vLocal_123 = { -271.2849f, -2414.993f, -10f };
			vLocal_124 = { -542.9096f, -2225.856f, 52.65004f };
			fLocal_127 = 30f;
			vLocal_125 = { -279.8399f, -2427.212f, -10f };
			vLocal_126 = { -551.2656f, -2237.791f, 52.64634f };
			break;
		
		case 30:
			vLocal_123 = { -1483f, 2691.428f, -10f };
			vLocal_124 = { -1377.168f, 2600.769f, 15.95528f };
			fLocal_127 = 12f;
			vLocal_125 = { -1478.152f, 2696.688f, -10f };
			vLocal_126 = { -1378.503f, 2608.698f, 15.60924f };
			break;
		
		case 31:
			vLocal_123 = { 222.1519f, -2343.487f, 0.039199f };
			vLocal_124 = { 222.6849f, -2297.407f, 7.088753f };
			fLocal_127 = 12f;
			vLocal_125 = { 216.959f, -2343.487f, 0.207734f };
			vLocal_126 = { 216.602f, -2295.445f, 7.424279f };
			break;
		
		case 32:
			vLocal_123 = { 346.4622f, -2244.374f, 0.159779f };
			vLocal_124 = { 346.8347f, -2389.591f, 7.852059f };
			fLocal_127 = 20f;
			vLocal_125 = { 359.609f, -2244.468f, 0.129684f };
			vLocal_126 = { 355.4054f, -2390.258f, 7.080691f };
			break;
		
		case 33:
			vLocal_123 = { -1859.68f, -322.6357f, 56.16368f };
			vLocal_124 = { -1836.614f, -335.4141f, 96.1161f };
			fLocal_127 = 7.5f;
			vLocal_125 = { -1860.27f, -327.8634f, 57.543f };
			vLocal_126 = { -1837.271f, -339.2227f, 95.69325f };
			break;
		
		case 34:
			vLocal_123 = { -680.2632f, -600.818f, 69.11289f };
			vLocal_124 = { -706.6613f, -600.7515f, 30.47604f };
			fLocal_127 = 31.5f;
			vLocal_125 = { -680.6077f, -618.3658f, 69.27496f };
			vLocal_126 = { -706.3596f, -618.2385f, 30.31235f };
			break;
		
		case 35:
			vLocal_123 = { -1468.096f, -591.7158f, 67.05518f };
			vLocal_124 = { -1454.7f, -573.4518f, 29.56736f };
			fLocal_127 = 11.75f;
			vLocal_125 = { -1474.903f, -591.1215f, 67.08091f };
			vLocal_126 = { -1457.173f, -568.1316f, 29.44059f };
			break;
		
		case 36:
			vLocal_123 = { -1544.958f, -537.1475f, 72.44347f };
			vLocal_124 = { -1564.616f, -551.1829f, 32.86163f };
			fLocal_127 = 11.75f;
			vLocal_125 = { -1541.008f, -541.5494f, 71.61972f };
			vLocal_126 = { -1561.219f, -555.868f, 32.9279f };
			break;
		
		case 37:
			vLocal_123 = { 333.2108f, -2727.274f, 20.71663f };
			vLocal_124 = { 333.4297f, -2791.609f, 41.99023f };
			fLocal_127 = 20f;
			vLocal_125 = { 343.1127f, -2727.236f, 20.23613f };
			vLocal_126 = { 343.6678f, -2791.602f, 41.37928f };
			break;
		
		case 38:
			vLocal_123 = { 1928.071f, 6228.355f, 43.49398f };
			vLocal_124 = { 2039.882f, 6167.397f, 55.46405f };
			fLocal_127 = 13f;
			vLocal_125 = { 1931.82f, 6235.634f, 43.37382f };
			vLocal_126 = { 2039.598f, 6176.525f, 55.25597f };
			break;
		
		case 39:
			vLocal_123 = { -736.4309f, -1590.921f, 10.80892f };
			vLocal_124 = { -710.811f, -1516.349f, -0.098598f };
			fLocal_127 = 15f;
			vLocal_125 = { -727.2307f, -1585.221f, 11.78027f };
			vLocal_126 = { -700.0201f, -1511.783f, -0.341655f };
			break;
		
		case 40:
			vLocal_123 = { -676.3775f, -1548.553f, 12.33747f };
			vLocal_124 = { -659.329f, -1507.063f, -0.788618f };
			fLocal_127 = 25f;
			vLocal_125 = { -654.203f, -1536.146f, 9.191055f };
			vLocal_126 = { -645.9954f, -1500.219f, -2.406948f };
			break;
		
		case 41:
			vLocal_123 = { -624.2344f, -1537.045f, 12.60193f };
			vLocal_124 = { -622.1749f, -1472.877f, -0.292606f };
			fLocal_127 = 8f;
			vLocal_125 = { -615.4003f, -1536.65f, 12.40271f };
			vLocal_126 = { -619.7385f, -1472.937f, -0.243267f };
			break;
		
		case 42:
			vLocal_123 = { -492.5057f, -1632.457f, 24.3307f };
			vLocal_124 = { -418.2088f, -1487.452f, 0f };
			fLocal_127 = 25f;
			vLocal_125 = { -486.2016f, -1636.095f, 24.20805f };
			vLocal_126 = { -398.7648f, -1490.44f, 0f };
			break;
		
		case 43:
			vLocal_123 = { -359.3541f, -1639.693f, 13.13455f };
			vLocal_124 = { -388.4955f, -1690.945f, -0.183164f };
			fLocal_127 = 25f;
			vLocal_125 = { -378.1518f, -1705.66f, 12.47196f };
			vLocal_126 = { -348.9591f, -1654.411f, 0.193478f };
			break;
		
		case 44:
			vLocal_123 = { -243.4436f, -1814.623f, 25.69465f };
			vLocal_124 = { -183.9987f, -1780.645f, -0.085802f };
			fLocal_127 = 25f;
			vLocal_125 = { -235.1319f, -1822.094f, 25.86542f };
			vLocal_126 = { -175.5105f, -1788.275f, -0.506062f };
			break;
		
		case 45:
			vLocal_123 = { 84.55537f, -2046.159f, 13.30767f };
			vLocal_124 = { 17.93164f, -2045.152f, -0.031946f };
			fLocal_127 = 25f;
			vLocal_125 = { 17.90788f, -2035.773f, 12.62706f };
			vLocal_126 = { 84.57207f, -2034.184f, 0.048385f };
			break;
		
		case 46:
			vLocal_123 = { 221.5029f, -2232.766f, 9.88676f };
			vLocal_124 = { 221.6825f, -2244.081f, 4.479149f };
			fLocal_127 = 8f;
			vLocal_125 = { 218.583f, -2232.766f, 9.886198f };
			vLocal_126 = { 218.729f, -2244.081f, 4.535046f };
			break;
		
		case 47:
			vLocal_123 = { 221.6518f, -2184.635f, 11.66457f };
			vLocal_124 = { 221.6139f, -2208.137f, 5.876424f };
			fLocal_127 = 8f;
			vLocal_125 = { 217.8995f, -2184.635f, 11.5405f };
			vLocal_126 = { 218.3327f, -2208.137f, 5.864793f };
			break;
		
		case 48:
			vLocal_123 = { 2326.57f, 1096.031f, 76.31458f };
			vLocal_124 = { 2290.332f, 1136.131f, 58.85706f };
			fLocal_127 = 21f;
			vLocal_125 = { 2334.453f, 1103.067f, 76.26603f };
			vLocal_126 = { 2297.846f, 1142.897f, 58.84243f };
			break;
		
		case 49:
			vLocal_123 = { 2379.442f, 1150.776f, 58.79632f };
			vLocal_124 = { 2327.658f, 1212.366f, 72.8333f };
			fLocal_127 = 12f;
			vLocal_125 = { 2374.064f, 1146.282f, 58.83331f };
			vLocal_126 = { 2320.895f, 1209.596f, 72.79299f };
			break;
		
		case 50:
			vLocal_123 = { -1179.405f, -355.2554f, 56.53003f };
			vLocal_124 = { -1198.064f, -357.8363f, 35.35551f };
			fLocal_127 = 12.5f;
			vLocal_125 = { -1178.385f, -361.8784f, 56.15081f };
			vLocal_126 = { -1197.104f, -364.7004f, 36.49475f };
			break;
		
		case 51:
			vLocal_123 = { -921.3846f, -384.94f, 137.0181f };
			vLocal_124 = { -912.4324f, -429.229f, 36.70113f };
			fLocal_127 = 16f;
			vLocal_125 = { -914.1658f, -387.9444f, 137.0794f };
			vLocal_126 = { -906.2534f, -424.691f, 47.11882f };
			break;
		
		case 52:
			vLocal_123 = { -740.2564f, 246.4529f, 132.2922f };
			vLocal_124 = { -718.3602f, 201.0042f, 80.95571f };
			fLocal_127 = 22f;
			vLocal_125 = { -726.6429f, 253.0676f, 132.3319f };
			vLocal_126 = { -705.5858f, 210.4336f, 78.70573f };
			break;
		
		case 53:
			vLocal_123 = { -771.2068f, 268.2729f, 132.1689f };
			vLocal_124 = { -778.3417f, 313.1148f, 84.27054f };
			fLocal_127 = 16f;
			vLocal_125 = { -770.8035f, 310.8625f, 137.4161f };
			vLocal_126 = { -763.0681f, 269.044f, 83.31474f };
			break;
		
		case 54:
			vLocal_123 = { 259.2205f, 135.4146f, 136.7083f };
			vLocal_124 = { 279.2396f, 128.1379f, 100.8233f };
			fLocal_127 = 16f;
			vLocal_125 = { 261.9694f, 142.9676f, 136.6889f };
			vLocal_126 = { 281.7203f, 134.9551f, 100.7704f };
			break;
		
		case 55:
			vLocal_123 = { 393.548f, -30.87166f, 152.6635f };
			vLocal_124 = { 369.9622f, -23.88461f, 88.35776f };
			fLocal_127 = 8f;
			vLocal_125 = { 390.5358f, -36.08882f, 152.7813f };
			vLocal_126 = { 368.1275f, -28.81888f, 88.69447f };
			break;
		
		case 56:
			vLocal_123 = { 114.3139f, -648.4297f, 261.8488f };
			vLocal_124 = { 131.0782f, -733.7684f, 39.34393f };
			fLocal_127 = 20f;
			vLocal_125 = { 124.8467f, -646.6575f, 261.8488f };
			vLocal_126 = { 140.0502f, -737.427f, 39.3493f };
			break;
		
		case 57:
			vLocal_123 = { -215.919f, -823.8436f, 126.0224f };
			vLocal_124 = { -193.2237f, -761.7781f, 27.91382f };
			fLocal_127 = 20f;
			vLocal_125 = { -225.397f, -820.3937f, 126.0812f };
			vLocal_126 = { -202.9433f, -758.257f, 27.47734f };
			break;
		
		case 58:
			vLocal_123 = { -296.4725f, -802.0815f, 95.40108f };
			vLocal_124 = { -278.1352f, -747.7841f, 50.40046f };
			fLocal_127 = 20f;
			vLocal_125 = { -305.4602f, -798.8369f, 95.48194f };
			vLocal_126 = { -285.7376f, -745.0959f, 49.57651f };
			break;
		
		case 59:
			vLocal_123 = { -292.3034f, -823.3569f, 95.37621f };
			vLocal_124 = { -258.5991f, -835.5632f, 27.97946f };
			fLocal_127 = 20f;
			vLocal_125 = { -288.9206f, -814.022f, 95.37556f };
			vLocal_126 = { -255.2116f, -826.256f, 27.7375f };
			break;
		
		case 60:
			vLocal_123 = { -256.3589f, -714.7838f, 110.1617f };
			vLocal_124 = { -212.9054f, -730.532f, 32.21946f };
			fLocal_127 = 20f;
			vLocal_125 = { -253.7723f, -705.6632f, 110.1736f };
			vLocal_126 = { -210.0588f, -722.6748f, 32.46536f };
			break;
		
		case 61:
			vLocal_123 = { 1808.214f, 1949.246f, 71.73707f };
			vLocal_124 = { 1837.906f, 2127.283f, 52.80491f };
			fLocal_127 = 9.75f;
			vLocal_125 = { 1802.786f, 1950.262f, 71.74002f };
			vLocal_126 = { 1831.994f, 2127.433f, 52.83893f };
			break;
		
		case 62:
			vLocal_123 = { 2388.733f, 2931.941f, 46.62681f };
			vLocal_124 = { 2426.681f, 2883.066f, 36.21524f };
			fLocal_127 = 10f;
			vLocal_125 = { 2392.547f, 2934.867f, 46.6268f };
			vLocal_126 = { 2430.333f, 2885.908f, 36.28148f };
			break;
		
		case 63:
			vLocal_123 = { 2700.056f, 4836.381f, 42.07854f };
			vLocal_124 = { 2685.673f, 4893.38f, 30.90867f };
			fLocal_127 = 20.75f;
			vLocal_125 = { 2685.672f, 4821.653f, 42.18471f };
			vLocal_126 = { 2672.812f, 4880.356f, 31.13311f };
			break;
		
		case 64:
			vLocal_123 = { -1053.446f, 4766.245f, 234.3251f };
			vLocal_124 = { -1040.263f, 4737.157f, 204.4916f };
			fLocal_127 = 5f;
			vLocal_125 = { -1051.414f, 4767.193f, 234.4293f };
			vLocal_126 = { -1037.954f, 4738.354f, 204.5282f };
			break;
	}
}

int func_368(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
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

int func_369(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 8:
		case 12:
		case 13:
		case 20:
		case 31:
		case 32:
		case 46:
		case 47:
			return 1;
			break;
	}
	return 0;
}

int func_370(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 34:
		case 35:
		case 36:
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
		case 60:
			return 1;
			break;
	}
	return 0;
}

int func_371(int iParam0, int iParam1)
{
	if (DOES_ENTITY_EXIST(*iParam0))
	{
		if (!IS_ENTITY_DEAD(*iParam0, 0) || iParam1)
		{
			if (IS_ENTITY_IN_WATER(*iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_372(int iParam0, int iParam1)
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

int func_373()
{
	switch (Local_171.f_3)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 8:
		case 1:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

int func_374(vector3 vParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_390() < 10)
	{
		iVar0 = func_389();
		func_375(vParam0, fParam1, iVar0, iParam2);
	}
	return iVar0;
}

void func_375(vector3 vParam0, var uParam1, int iParam2, var uParam3)
{
	func_376(vParam0, 0f, 0f, 0f, uParam1, 0, iParam2, uParam3);
}

void func_376(vector3 vParam0, vector3 vParam1, var uParam2, int iParam3, int iParam4, var uParam5)
{
	struct<12> Var0;
	
	if (func_385(PLAYER_ID()) || uParam5)
	{
		if (Var0.f_10 == 1)
		{
			func_384(&vParam0, &vParam1);
		}
		Var0 = { vParam0 };
		Var0.f_3 = { vParam1 };
		Var0.f_6 = uParam2;
		Var0.f_10 = iParam3;
		if (func_379(Var0))
		{
			Global_2405071.f_45.f_64 = func_378(PLAYER_ID());
			func_377(Var0, iParam4);
		}
	}
}

void func_377(struct<12> Param0, int iParam1)
{
	Global_2405071.f_363[iParam1 /*12*/] = { Param0 };
	Global_2405071.f_363[iParam1 /*12*/].f_9 = 1;
}

int func_378(int iParam0)
{
	if (func_12(iParam0, 0, 1))
	{
		return Global_2424073[iParam0 /*421*/].f_1;
	}
	return 0;
}

int func_379(struct<12> Param0)
{
	struct<12> Var0[1];
	int iVar1;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Global_2405071.f_45[iVar1 /*12*/].f_9 == 1)
		{
			if (!func_380(Global_2405071.f_45[iVar1 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

int func_380(vector3 vParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if ((uParam10[iVar0 /*12*/])->f_9)
		{
			switch ((uParam10[iVar0 /*12*/])->f_10)
			{
				case 0:
					switch (vParam0.f_10)
					{
						case 0:
							if (func_383(vParam0, vParam0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_381(vParam0, vParam0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 1:
					switch (vParam0.f_10)
					{
						case 0:
							if (func_383(vParam0, vParam0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_381(vParam0, vParam0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 2:
					break;
				}
		}
		iVar0++;
	}
	if (vmag(vParam0) == 0f)
	{
		return 0;
	}
	return 1;
}

bool func_381(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	fVar2 = (fParam3 * 0.7071068f);
	vVar0 = { vParam2 - Vector(fVar2, fVar2, fVar2) };
	vVar1 = { vParam2 + Vector(fVar2, fVar2, fVar2) };
	return func_382(vParam0, vParam1, vVar0, vVar1);
}

int func_382(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3)
{
	if (((((vParam0.x >= vParam2.x && vParam0.y >= vParam2.y) && vParam0.z >= vParam2.z) && vParam1.x <= vParam3.x) && vParam1.y <= vParam3.y) && vParam1.z <= vParam3.z)
	{
		return 1;
	}
	return 0;
}

int func_383(vector3 vParam0, float fParam1, vector3 vParam2, float fParam3)
{
	vector3 vVar0;
	
	vVar0 = { vParam2 - vParam0 };
	if ((vmag(vVar0) + fParam1) < fParam3)
	{
		return 1;
	}
	return 0;
}

void func_384(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (*uParam0 <= *uParam1)
	{
		vVar0.x = *uParam0;
		vVar1.x = *uParam1;
	}
	else
	{
		vVar0.x = *uParam1;
		vVar1.x = *uParam0;
	}
	if (uParam0->f_1 <= uParam1->f_1)
	{
		vVar0.y = uParam0->f_1;
		vVar1.y = uParam1->f_1;
	}
	else
	{
		vVar0.y = uParam1->f_1;
		vVar1.y = uParam0->f_1;
	}
	if (uParam0->f_2 <= uParam1->f_2)
	{
		vVar0.z = uParam0->f_2;
		vVar1.z = uParam1->f_2;
	}
	else
	{
		vVar0.z = uParam1->f_2;
		vVar1.z = uParam0->f_2;
	}
	*uParam0 = { vVar0 };
	*uParam1 = { vVar1 };
}

int func_385(int iParam0)
{
	if (((func_388(iParam0, 1) || func_387(iParam0)) || func_112(iParam0, 0)) || func_386(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_386(int iParam0)
{
	if (!func_12(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590446[iParam0 /*871*/].f_35;
}

int func_387(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628955[iVar0 /*614*/] != -1;
	}
	return 0;
}

bool func_388(int iParam0, bool bParam1)
{
	if (Global_1312448 != 0)
	{
		return func_378(iParam0) != 0;
	}
	return func_350(iParam0, bParam1, 0);
}

int func_389()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!Global_2405071.f_363[iVar0 /*12*/].f_9)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_390()
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

int func_391(char* sParam0, int iParam1, int iParam2)
{
	BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam1);
	ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
	return END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_392(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AMCH_0";
		
		case 1:
			return "AMCH_1";
		
		case 2:
			return "AMCH_2";
		
		case 3:
			return "AMCH_3";
		
		case 4:
			return "AMCH_4";
		
		case 5:
			return "AMCH_5";
		
		case 6:
			return "AMCH_6";
		
		case 7:
			return "AMCH_7";
		
		case 8:
			return "AMCH_8";
		
		case 14:
			return "AMCH_9";
		
		case 9:
			return "AMCH_12";
		
		case 10:
			return "AMCH_13";
		
		case 11:
			return "AMCH_15";
		
		case 12:
			return "AMCH_16";
		
		case 15:
			return "AMCH_19";
		
		case 16:
			return "AMCH_20";
		
		case 17:
			return "AMCH_21";
		
		case 18:
			return "AMCH_22";
		
		case 13:
			return "AMCH_23";
		
		default:
	}
	return "";
}

char* func_393(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AMCH_0SLC";
		
		case 1:
			return "AMCH_1SLC";
		
		case 2:
			return "AMCH_2SLC";
		
		case 3:
			return "AMCH_3SLC";
		
		case 4:
			return "AMCH_4SLC";
		
		case 5:
			return "AMCH_5SLC";
		
		case 6:
			return "AMCH_6SLC";
		
		case 7:
			return "AMCH_7SLC";
		
		case 8:
			return "AMCH_8SLC";
		
		case 14:
			return "AMCH_9SLC";
		
		case 9:
			return "AMCH_12SLC";
		
		case 10:
			return "AMCH_13SLC";
		
		case 11:
			return "AMCH_15SLC";
		
		case 12:
			return "AMCH_16SLC";
		
		case 15:
			return "AMCH_19SLC";
		
		case 16:
			return "AMCH_20SLC";
		
		case 17:
			return "AMCH_21SLC";
		
		case 18:
			return "AMCH_22SLC";
		
		case 13:
			return "AMCH_23SLC";
		
		default:
	}
	return "";
}

char* func_394(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AMCH_BIG_0";
		
		case 1:
			return "AMCH_BIG_1";
		
		case 2:
			return "AMCH_BIG_2";
		
		case 3:
			return "AMCH_BIG_3";
		
		case 4:
			return "AMCH_BIG_4";
		
		case 5:
			return "AMCH_BIG_5";
		
		case 6:
			return "AMCH_BIG_6";
		
		case 7:
			return "AMCH_BIG_7";
		
		case 8:
			return "AMCH_BIG_8";
		
		case 14:
			return "AMCH_BIG_9";
		
		case 9:
			return "AMCH_BIG_12";
		
		case 10:
			return "AMCH_BIG_13";
		
		case 11:
			return "AMCH_BIG_15";
		
		case 12:
			return "AMCH_BIG_16";
		
		case 15:
			return "AMCH_BIG_19";
		
		case 16:
			return "AMCH_BIG_20";
		
		case 17:
			return "AMCH_BIG_21";
		
		case 18:
			return "AMCH_BIG_22";
		
		case 13:
			return "AMCH_BIG_23";
		
		default:
	}
	return "";
}

void func_395()
{
	if (!func_155())
	{
		return;
	}
	if (!GET_HASH_KEY(GET_HASH_KEY()) == Global_1312585.f_9)
	{
		return;
	}
	func_151();
}

void func_396(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (!func_370(iVar0) && !func_369(iVar0))
		{
			*(uParam0[iVar0 /*3*/]) = { vLocal_121[iVar0 /*3*/] };
		}
		iVar0++;
	}
}

void func_397()
{
	if (!func_373())
	{
		if (Local_171.f_3 == 14)
		{
			func_400();
		}
		Local_1537[PARTICIPANT_ID_TO_INT() /*12*/].f_4.f_1 = func_359();
	}
	else if ((!IS_BIT_SET(Global_1574647.f_1, 4) && !IS_BIT_SET(Global_1574647.f_1, 5)) && !func_399(IS_BIT_SET()))
	{
		func_398();
	}
}

void func_398()
{
	switch (Local_171.f_3)
	{
		case 0:
			0x33D72899E24C3365(8, 2);
			break;
		
		case 1:
			0x33D72899E24C3365(13, 2);
			break;
		
		case 2:
			0x33D72899E24C3365(4, 2);
			break;
		
		case 4:
			0x33D72899E24C3365(1, 2);
			break;
		
		case 3:
			0x33D72899E24C3365(2, 2);
			break;
		
		case 5:
			0x33D72899E24C3365(3, 2);
			break;
		
		case 6:
			0x33D72899E24C3365(11, 3);
			break;
		
		case 7:
			0x33D72899E24C3365(14, 1);
			break;
		
		case 8:
			0x33D72899E24C3365(29, 2);
			break;
		
		case 9:
			0x33D72899E24C3365(12, 2);
			break;
		
		case 10:
			0x33D72899E24C3365(10, 2);
			break;
		
		case 11:
			0x33D72899E24C3365(18, 2);
			break;
		
		case 12:
			0x33D72899E24C3365(20, 2);
			break;
		
		case 13:
			0x33D72899E24C3365(27, 2);
			break;
		
		case 15:
			0x33D72899E24C3365(26, 1);
			break;
		
		case 16:
			0x33D72899E24C3365(25, 1);
			break;
		
		case 17:
			0x33D72899E24C3365(22, 1);
			break;
		
		case 18:
			0x33D72899E24C3365(24, 1);
			break;
	}
	SET_BIT(&iLocal_142, 8);
}

bool func_399(int iParam0)
{
	return func_14(iParam0, 0);
}

void func_400()
{
	vLocal_121[0 /*3*/] = { 1083f, -231f, 60f };
	vLocal_121[1 /*3*/] = { 1024f, -325f, 60f };
	vLocal_121[2 /*3*/] = { 910f, -401f, 43f };
	vLocal_121[3 /*3*/] = { 721f, -457f, 26f };
	vLocal_121[4 /*3*/] = { 643f, -579f, 26f };
	vLocal_121[5 /*3*/] = { 590f, -851f, 26f };
	vLocal_121[6 /*3*/] = { 590f, -1023f, 16f };
	vLocal_121[7 /*3*/] = { 582f, -1205f, 24f };
	vLocal_121[8 /*3*/] = { 608f, -1335f, 16f };
	vLocal_121[9 /*3*/] = { 640f, -1434f, 16f };
	vLocal_121[10 /*3*/] = { 671f, -1742f, 20f };
	vLocal_121[11 /*3*/] = { 651f, -2046f, 16f };
	vLocal_121[12 /*3*/] = { 603f, -2505f, 9f };
	vLocal_121[13 /*3*/] = { 673f, -2582f, 4f };
	vLocal_121[14 /*3*/] = { 728f, -2594f, 10f };
	vLocal_121[15 /*3*/] = { 794f, -2624f, 27f };
	vLocal_121[16 /*3*/] = { -2663f, 2594f, 7.5f };
	vLocal_121[17 /*3*/] = { -1902f, 4617f, 30f };
	vLocal_121[18 /*3*/] = { -513f, 4427f, 40f };
	vLocal_121[19 /*3*/] = { 126f, 3366f, 40f };
	vLocal_121[20 /*3*/] = { 143f, 3418f, 36f };
	vLocal_121[21 /*3*/] = { 2822f, 4978f, 40f };
	vLocal_121[22 /*3*/] = { -162f, 4249f, 40f };
	vLocal_121[23 /*3*/] = { -408f, 2964f, 20f };
	vLocal_121[24 /*3*/] = { -181f, 2862f, 38f };
	vLocal_121[25 /*3*/] = { 2558f, 2201f, 24f };
	vLocal_121[26 /*3*/] = { 2950f, 803f, 8f };
	vLocal_121[27 /*3*/] = { 2369f, -409f, 80f };
	vLocal_121[28 /*3*/] = { 1906f, -755f, 84f };
	vLocal_121[29 /*3*/] = { -403f, -2333f, 40f };
	vLocal_121[30 /*3*/] = { -1429f, 2649f, 10f };
	vLocal_121[31 /*3*/] = { 219f, -2315f, 5f };
	vLocal_121[32 /*3*/] = { 350f, -2315f, 5f };
	vLocal_121[33 /*3*/] = { -1848f, -333f, 75f };
	vLocal_121[34 /*3*/] = { -693f, -608f, 69f };
	vLocal_121[35 /*3*/] = { -1461f, -582f, 53f };
	vLocal_121[36 /*3*/] = { -1553f, -546f, 59f };
	vLocal_121[37 /*3*/] = { 338f, -2758f, 23f };
	vLocal_121[38 /*3*/] = { 1985f, 6201f, 53f };
	vLocal_121[39 /*3*/] = { -713f, -1538f, 13f };
	vLocal_121[40 /*3*/] = { -659f, -1518f, 13f };
	vLocal_121[41 /*3*/] = { -620f, -1502f, 16f };
	vLocal_121[42 /*3*/] = { -445f, -1575f, 26f };
	vLocal_121[43 /*3*/] = { -373f, -1680f, 19f };
	vLocal_121[44 /*3*/] = { -212f, -1805f, 29f };
	vLocal_121[45 /*3*/] = { 47f, -2040f, 18f };
	vLocal_121[46 /*3*/] = { 223f, -2240f, 6f };
	vLocal_121[47 /*3*/] = { 218f, -2189f, 6f };
	vLocal_121[48 /*3*/] = { 2308f, 1124f, 78f };
	vLocal_121[49 /*3*/] = { 2349f, 1174f, 79f };
	vLocal_121[50 /*3*/] = { -1186f, -365f, 46f };
	vLocal_121[51 /*3*/] = { -916f, -407f, 93f };
	vLocal_121[52 /*3*/] = { -726f, 235f, 105f };
	vLocal_121[53 /*3*/] = { -774f, 286f, 112f };
	vLocal_121[54 /*3*/] = { 271f, 134f, 125f };
	vLocal_121[55 /*3*/] = { 377f, -28f, 125f };
	vLocal_121[56 /*3*/] = { 121f, -703f, 150f };
	vLocal_121[57 /*3*/] = { -204f, -784f, 74f };
	vLocal_121[58 /*3*/] = { -287f, -774f, 72f };
	vLocal_121[59 /*3*/] = { -272f, -824f, 71f };
	vLocal_121[60 /*3*/] = { -230f, -723f, 80f };
	vLocal_121[61 /*3*/] = { 1822f, 2044f, 62f };
	vLocal_121[62 /*3*/] = { 2410f, 2907f, 44f };
	vLocal_121[63 /*3*/] = { 2686f, 4858f, 36f };
	vLocal_121[64 /*3*/] = { -1046f, 4751f, 244f };
}

void func_401(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!IS_BIT_SET(Global_2424073[IS_BIT_SET() /*421*/].f_208, iParam0))
		{
			SET_BIT(&(Global_2424073[SET_BIT() /*421*/].f_208), iParam0);
		}
	}
	else if (IS_BIT_SET(Global_2424073[IS_BIT_SET() /*421*/].f_208, iParam0))
	{
		CLEAR_BIT(&(Global_2424073[CLEAR_BIT() /*421*/].f_208), iParam0);
	}
}

void func_402(var uParam0, int iParam1)
{
	if (func_321(PLAYER_ID()) == 133 && iParam1)
	{
		Global_2531497.f_4819 = uParam0;
	}
	else
	{
		Global_2531497.f_4819 = -1;
	}
}

void func_403(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	SET_AUDIO_FLAG("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		SET_AUDIO_FLAG("WantedMusicDisabled", 1);
	}
	Global_2531497.f_4745 = -1;
	bVar0 = (func_112(PLAYER_ID(), 0) && func_108(PLAYER_ID()));
	if (bParam6)
	{
		func_401(func_421(iParam0), 1);
	}
	else
	{
		func_420(iParam0, -1);
		if (func_8(PLAYER_ID()))
		{
			Global_1574647.f_3 = iParam0;
		}
		else
		{
			func_419(iParam0);
		}
		Global_1574647.f_4 = -1;
		if (func_8(PLAYER_ID()))
		{
			SET_BIT(&(Global_1574647.f_1), 5);
		}
		if (((func_165() && !func_164()) || func_163(PLAYER_ID(), 21)) || func_163(PLAYER_ID(), 25))
		{
			SET_BIT(&(Global_1574647.f_1), 4);
		}
		CLEAR_BIT(&(Global_1574647.f_1), 17);
		SET_BIT(&(Global_1574647.f_1), 20);
		if (func_418(iParam0))
		{
			func_417();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_413(fParam1);
		}
		if (fParam2 != 1f)
		{
			SET_WANTED_LEVEL_MULTIPLIER(fParam2);
			if (iParam0 == 146)
			{
				SET_MAX_WANTED_LEVEL(0);
				SET_PLAYER_WANTED_LEVEL(SET_PLAYER_WANTED_LEVEL(), 0, 0);
				SET_PLAYER_WANTED_LEVEL_NOW(SET_PLAYER_WANTED_LEVEL_NOW(), 0);
			}
		}
		if (func_411(iParam0))
		{
			SET_MAX_WANTED_LEVEL(0);
			SET_PLAYER_WANTED_LEVEL(SET_PLAYER_WANTED_LEVEL(), 0, 0);
			SET_PLAYER_WANTED_LEVEL_NOW(SET_PLAYER_WANTED_LEVEL_NOW(), 0);
			SET_BIT(&(Global_1574647.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_2391045)
			{
				func_409(1);
				if (func_264(0))
				{
					SET_BIT(&(Global_1574647.f_1), 9);
				}
				if (!bParam6)
				{
					SET_BIT(&(Global_1574647.f_1), 14);
				}
			}
		}
		if (bParam4)
		{
			func_407(1);
			SET_BIT(&(Global_1574647.f_1), 12);
		}
		if (bParam5)
		{
			func_406();
			SET_BIT(&(Global_1574647.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_404(iParam0))
			{
				SET_BIT(&(Global_1574647.f_1), 21);
			}
		}
	}
	Global_2507562 = 1;
}

int func_404(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 131:
		case 141:
		case 136:
		case 138:
		case 139:
		case 140:
		case 144:
		case 146:
		case 236:
			return 1;
		
		default:
	}
	if (func_405())
	{
		return 1;
	}
	return 0;
}

int func_405()
{
	switch (func_320())
	{
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

void func_406()
{
	SET_BIT(&(Global_2531497.f_4736), 0);
}

void func_407(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_98721.f_8 = 1;
	}
	else
	{
		Global_98721.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_408(iVar0);
		iVar0++;
	}
}

void func_408(int iParam0)
{
	Global_98721.f_181[iParam0] = 1;
	Global_98721.f_180 = 1;
}

void func_409(int iParam0)
{
	if (func_410() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_410()
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

int func_411(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_412(PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_412(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return IS_BIT_SET(Global_1628955[iVar0 /*614*/].f_1, 0);
	}
	return 0;
}

void func_413(float fParam0)
{
	float fVar0;
	
	if (GET_HASH_KEY(GET_HASH_KEY()) == func_414())
	{
		return;
	}
	fVar0 = (Global_2531497.f_4893 - fParam0);
	if (IS_THREAD_ACTIVE(Global_2531497.f_4894))
	{
		if (!Global_2531497.f_4894 == GET_ID_OF_THIS_THREAD() && GET_ID_OF_THIS_THREAD(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2531497.f_4893 = fParam0;
	Global_2531497.f_4894 = GET_ID_OF_THIS_THREAD();
}

int func_414()
{
	switch (func_416())
	{
		case 0:
			return func_415();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_415()
{
	switch (Global_2461343)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_416()
{
	return Global_30736;
}

void func_417()
{
	Global_2424073[PLAYER_ID() /*421*/].f_200 = 0;
	CLEAR_BIT(&(Global_2531497.f_4561), 1);
}

int func_418(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_419(int iParam0)
{
	Global_1628955[PLAYER_ID() /*614*/] = iParam0;
}

void func_420(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_346(0) || func_346(func_345(iVar0)))
		{
			SET_BIT(&(Global_1628955[SET_BIT() /*614*/].f_1), 2);
		}
		else
		{
			CLEAR_BIT(&(Global_1628955[CLEAR_BIT() /*614*/].f_1), 2);
		}
	}
}

int func_421(int iParam0)
{
	switch (iParam0)
	{
		case 134:
			return 21;
		
		case 254:
			return 25;
		
		default:
	}
	return 0;
}

int func_422()
{
	switch (Local_171.f_3)
	{
		case 18:
		case 16:
		case 15:
		case 17:
			return 1;
		
		default:
	}
	return 0;
}

void func_423()
{
	Global_1672277 = 1;
	if (!IS_BIT_SET(Global_2540191, 0))
	{
		SET_BIT(&Global_2540191, 0);
		SET_BIT(&Global_1672278, 0);
	}
	if (!IS_BIT_SET(Global_2540191, 1))
	{
		SET_BIT(&Global_2540191, 1);
		SET_BIT(&Global_1672278, 1);
	}
	if (!IS_BIT_SET(Global_2540191, 5))
	{
		SET_BIT(&Global_2540191, 5);
		SET_BIT(&Global_1672278, 5);
	}
	if (_DOES_DOOR_EXIST(-355737150))
	{
		_SET_DOOR_ACCELERATION_LIMIT(-355737150, 0, false, false);
	}
	if (_DOES_DOOR_EXIST(-580979506))
	{
		_SET_DOOR_ACCELERATION_LIMIT(-580979506, 0, false, false);
	}
	if (_DOES_DOOR_EXIST(-1426452475))
	{
		_SET_DOOR_ACCELERATION_LIMIT(-1426452475, 0, false, false);
	}
	if (_DOES_DOOR_EXIST(745417724))
	{
		_SET_DOOR_ACCELERATION_LIMIT(745417724, 0, false, false);
	}
	if (_DOES_DOOR_EXIST(-1305304906))
	{
		_SET_DOOR_ACCELERATION_LIMIT(-1305304906, 0, false, false);
	}
	if (_DOES_DOOR_EXIST(-1543175077))
	{
		_SET_DOOR_ACCELERATION_LIMIT(-1543175077, 0, false, false);
	}
	if (_DOES_DOOR_EXIST(-811770997))
	{
		_SET_DOOR_ACCELERATION_LIMIT(-811770997, 0, false, false);
	}
}

int func_424()
{
	switch (Local_171.f_3)
	{
		case 1:
		case 6:
		case 11:
		case 12:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

void func_425()
{
	int iVar0;
	int iVar1;
	
	if (func_5(Local_171.f_3))
	{
		if (Local_171.f_3 == 1 || Local_171.f_3 == 6)
		{
			iVar0 = func_204(PLAYER_ID(), 1);
			iVar1 = func_200(iVar0, 1);
			if (iVar1 < 11)
			{
				if (IS_PED_IN_FLYING_VEHICLE(IS_PED_IN_FLYING_VEHICLE()))
				{
					GIVE_WEAPON_TO_PED(GIVE_WEAPON_TO_PED(), joaat("gadget_parachute"), 1, false, false);
					func_426(1);
				}
			}
			else
			{
				SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(), true);
			}
		}
	}
}

void func_426(bool bParam0)
{
	int iVar0;
	
	if (GET_PED_DRAWABLE_VARIATION(GET_PED_DRAWABLE_VARIATION(), 5) != 0)
	{
		SET_PED_RESET_FLAG(SET_PED_RESET_FLAG(), 177, true);
		SET_PLAYER_PARACHUTE_TINT_INDEX(SET_PLAYER_PARACHUTE_TINT_INDEX(), func_208(585, -1, 0));
		if (func_446())
		{
			SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(), 1931904776);
		}
		else if (func_445())
		{
			SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(), -2124524821);
		}
		if (func_442(3610, -1, -1))
		{
		}
		iVar0 = func_208(2040, -1, 0);
		SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(), func_441(SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(SET_PLAYER_PARACHUTE_PACK_TINT_INDEX()), iVar0));
		if (func_261(0))
		{
			SET_PLAYER_PARACHUTE_TINT_INDEX(SET_PLAYER_PARACHUTE_TINT_INDEX(), func_208(585, -1, 0));
		}
		else
		{
			SET_PLAYER_PARACHUTE_TINT_INDEX(SET_PLAYER_PARACHUTE_TINT_INDEX(), func_440(Global_2540475));
		}
		func_439(PLAYER_ID(), iVar0);
		SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(), 5, func_432(SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(), iVar0), func_431(SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(), iVar0), 0);
		func_430(func_208(2040, -1, 0), 1);
		Global_2531497.f_287 = 1;
		func_427(PLAYER_ID(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_427(int iParam0, int iParam1, int iParam2)
{
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_429();
		if (iParam2 == -1)
		{
			iParam2 = func_208(2040, -1, 0);
		}
		SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(iParam0, 5, func_432(SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(iParam0), iParam2), func_431(SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(iParam0), iParam2), 0);
		SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(iParam0, func_441(SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(iParam0), iParam2));
		SET_PED_COMPONENT_VARIATION(SET_PED_COMPONENT_VARIATION(iParam0), 5, func_432(SET_PED_COMPONENT_VARIATION(iParam0), iParam2), func_431(SET_PED_COMPONENT_VARIATION(iParam0), iParam2), func_441(SET_PED_COMPONENT_VARIATION(iParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = func_208(585, -1, 0);
		}
		if (func_261(1) && func_428(iParam0))
		{
			SET_PLAYER_PARACHUTE_TINT_INDEX(iParam0, func_440(Global_2540475));
		}
		else
		{
			SET_PLAYER_PARACHUTE_TINT_INDEX(iParam0, iParam1);
		}
		if (IS_BIT_SET(Global_4456448.f_28, 4))
		{
			SET_PLAYER_PARACHUTE_TINT_INDEX(iParam0, Global_1574435);
			SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(iParam0, -1780610292);
		}
		func_439(iParam0, iParam2);
		SET_PED_RESET_FLAG(SET_PED_RESET_FLAG(iParam0), 177, true);
	}
}

bool func_428(int iParam0)
{
	return func_107(iParam0, 10);
}

void func_429()
{
	Global_76550 = 0;
	Global_76551 = -1;
	Global_76552 = -1;
	Global_76553 = -1;
	Global_76554 = -1;
	Global_76555 = -1;
}

void func_430(int iParam0, int iParam1)
{
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_429();
		func_198(2040, iParam0, -1, 1, 0);
		SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(), 5, func_432(SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(), iParam0), func_431(SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(), iParam0), 0);
		func_439(PLAYER_ID(), iParam0);
		SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(), func_441(SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(), iParam0));
		if ((iParam1 && !IS_PED_INJURED(IS_PED_INJURED())) && IS_PED_INJURED(IS_PED_INJURED(), 5) != 0)
		{
			func_427(PLAYER_ID(), -1, -1);
		}
	}
}

int func_431(int iParam0, int iParam1)
{
	if (iParam1 >= 62)
	{
		return (iParam1 - 62);
	}
	if (iParam1 > 51)
	{
		return (iParam1 - 52);
	}
	if (iParam1 > 46)
	{
		return (iParam1 - 47);
	}
	if (iParam1 > 26)
	{
		return (iParam1 - 27);
	}
	if (iParam1 > 0)
	{
		return (iParam1 - 1);
	}
	return iParam1;
}

var func_432(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = GET_PED_DRAWABLE_VARIATION(iParam0, 9) != false;
	iVar1 = GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, GET_HASH_NAME_FOR_COMPONENT(iParam0, 8), GET_HASH_NAME_FOR_COMPONENT(iParam0, 8));
	iVar2 = GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, GET_HASH_NAME_FOR_COMPONENT(iParam0, 11), GET_HASH_NAME_FOR_COMPONENT(iParam0, 11));
	iVar3 = GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, GET_HASH_NAME_FOR_COMPONENT(iParam0, 4), GET_HASH_NAME_FOR_COMPONENT(iParam0, 4));
	if ((((!bVar0 == Global_76550 || !iParam1 == Global_76551) || !iVar1 == Global_76552) || !iVar2 == Global_76553) || !iVar3 == Global_76554)
	{
		Global_76550 = bVar0;
		Global_76551 = iParam1;
		Global_76552 = iVar1;
		Global_76553 = iVar2;
		Global_76554 = iVar3;
		Global_76555 = func_433(iParam0, iParam1);
		if (iParam1 == 63 || iParam1 == 62)
		{
			if (GET_ENTITY_MODEL(GET_ENTITY_MODEL(GET_ENTITY_MODEL())) == joaat("mp_f_freemode_01"))
			{
				if (Global_76555 == 61)
				{
					Global_76555 = 79;
				}
				else if (Global_76555 == 39)
				{
					Global_76555 = 79;
				}
				else if (Global_76555 == 76)
				{
					Global_76555 = 80;
				}
			}
			else if (GET_ENTITY_MODEL(GET_ENTITY_MODEL(GET_ENTITY_MODEL())) == joaat("mp_m_freemode_01"))
			{
				if (Global_76555 == 61)
				{
					Global_76555 = 78;
				}
				else if (Global_76555 == 39)
				{
					Global_76555 = 78;
				}
			}
		}
	}
	return Global_76555;
}

int func_433(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	if (GET_PED_DRAWABLE_VARIATION(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = GET_ENTITY_MODEL(iParam0);
	iVar3 = 0;
	if (iParam1 > 61)
	{
		iVar3 = 69;
	}
	else if (iParam1 > 51)
	{
		iVar3 = (iParam1 - 1);
	}
	else if (iParam1 > 46)
	{
		iVar3 = 30;
	}
	else if (iParam1 > 26)
	{
		iVar3 = 20;
	}
	else if (iParam1 > 0)
	{
		iVar3 = 9;
	}
	else
	{
		iVar3 = 0;
	}
	iVar4 = GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, GET_HASH_NAME_FOR_COMPONENT(iParam0, 8), GET_HASH_NAME_FOR_COMPONENT(iParam0, 8));
	if (_IS_TAG_RESTRICTED(iVar4, 240476421, 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (_IS_TAG_RESTRICTED(iVar4, -1499233212, 8))
			{
				return (2 + iVar3);
			}
			if (_IS_TAG_RESTRICTED(iVar4, 350281921, 8))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			if (_IS_TAG_RESTRICTED(iVar4, -887141061, 8))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			if (_IS_TAG_RESTRICTED(iVar4, -1185371730, 8))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			if (_IS_TAG_RESTRICTED(iVar4, -2124629577, 8))
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else
		{
			if (_IS_TAG_RESTRICTED(iVar4, -1499233212, 8))
			{
				return (7 + iVar3);
			}
			if (_IS_TAG_RESTRICTED(iVar4, 350281921, 8))
			{
				return (8 + iVar3);
			}
			if (_IS_TAG_RESTRICTED(iVar4, -887141061, 8))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			if (_IS_TAG_RESTRICTED(iVar4, -1185371730, 8))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			if (_IS_TAG_RESTRICTED(iVar4, -2124629577, 8))
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		return func_438(iParam0, iParam1);
	}
	if (func_437(iParam0))
	{
		if (bVar1)
		{
			return (8 + iVar3);
		}
		else
		{
			return (2 + iVar3);
		}
	}
	if (iVar0 > 15)
	{
		iVar5 = GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar0, GET_HASH_NAME_FOR_COMPONENT(iParam0, 11));
		if (_IS_TAG_RESTRICTED(iVar5, 655081063, 0))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -530089825, 0))
		{
			if (bVar1)
			{
				return (6 + iVar3);
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -713698407, 0))
		{
			if (iParam1 > 51)
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return 60;
				}
				else
				{
					return 53;
				}
			}
			else if (iParam1 > 46)
			{
				return 39;
			}
			else if (iParam1 > 26)
			{
				return 29;
			}
			else if (iParam1 > 0)
			{
				return 18;
			}
			else
			{
				return 19;
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -1882920022, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -317649054, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (_IS_TAG_RESTRICTED(iVar5, -979468724, 0))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else if (_IS_TAG_RESTRICTED(iVar5, -306768813, 0))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else if (_IS_TAG_RESTRICTED(iVar5, -58412562, 0))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 1536649085, 0) && !_IS_TAG_RESTRICTED(iVar5, 350281921, 0))
		{
			iVar6 = func_436(iVar5, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar6)
				{
					case 0:
						return (2 + iVar3);
						break;
					
					case 2:
						if (iParam1 > 46)
						{
							return 39;
						}
						else if (iParam1 > 26)
						{
							return 29;
						}
						else if (iParam1 > 0)
						{
							return 18;
						}
						else
						{
							return 19;
						}
						break;
					
					default:
						iVar0 = func_435(iVar5);
						break;
				}
			}
			else
			{
				switch (iVar6)
				{
					case 2:
						return (7 + iVar3);
						break;
					
					default:
						iVar0 = func_435(iVar5);
						break;
					}
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 248194463, 0))
		{
			if (_IS_TAG_RESTRICTED(iVar5, -1347486026, 0))
			{
				return (3 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 396458410, 0))
		{
			iVar7 = func_434(iVar5, 0);
			switch (iVar7)
			{
				case 4:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 28;
					}
					else if (iParam1 > 0)
					{
						return 17;
					}
					else
					{
						return 8;
					}
					break;
				
				case 5:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 14:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 29;
					}
					else if (iParam1 > 0)
					{
						return 18;
					}
					else
					{
						return 19;
					}
					break;
				
				default:
					iVar0 = func_435(iVar5);
					break;
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -779835469, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -1119232689, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -2102859770, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 1784133476, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -1607949555, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 1976716889, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 2099109084, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -1488441032, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -1719167561, 0) || _IS_TAG_RESTRICTED(iVar5, 1431529976, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -1274099003, 0) || _IS_TAG_RESTRICTED(iVar5, 1723403459, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (_IS_TAG_RESTRICTED(iVar5, -1407614029, 0))
				{
					return func_438(iParam0, iParam1) + 15;
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 912543594, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
		}
		else if ((_IS_TAG_RESTRICTED(iVar5, -1086258388, 0) || _IS_TAG_RESTRICTED(iVar5, 103539798, 0)) || _IS_TAG_RESTRICTED(iVar5, -994703884, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 2044466679, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else if (bVar1)
			{
				return (4 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -2020757158, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -1064262817, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -1419806467, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (7 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -1053842259, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -1358888880, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -441291342, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -747583185, 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_438(iParam0, iParam1);
				}
				else
				{
					return (2 + iVar3);
				}
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -1986415230, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -2088146832, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -785939537, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -872449705, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 700658917, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 1714969731, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 745826556, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 1055526375, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 144417099, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 492620493, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -416620954, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -102825006, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -733792105, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 137011325, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -641612092, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -1351486939, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -2119756144, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -1507532917, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 947651647, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -1506370874, 0) || _IS_TAG_RESTRICTED(iVar5, 1927516484, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -1786447517, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -1010805287, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -1325813684, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -549843760, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -828478571, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else if (bVar1)
			{
				return (55 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 1690933245, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 1360588936, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 2136821028, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 1830529185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -269266203, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 201427653, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 967829025, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -685039259, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -1266557933, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -979468724, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -1813210391, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 263623295, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -309899747, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -89003918, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -747858475, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return func_438(iParam0, iParam1);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 490219883, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 1208450825, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 297865853, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 602650322, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 905042630, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 1204125293, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 310055897, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 606713654, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return func_438(iParam0, iParam1);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 1831422288, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -838136846, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 655638019, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 970679185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 83294665, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 382246252, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -99064836, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -697656159, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -398213037, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 1380605304, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_438(iParam0, iParam1);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -306768813, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -58412562, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 1711219157, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 1466664110, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -1968575702, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 245429010, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 15161247, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return (48 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 2044923487, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -915352927, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -538378351, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -2139144017, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -435539886, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 695107163, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -1499233212, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 350281921, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -2124629577, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 1877382859, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -1375878737, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -1347486026, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (1 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -1467843180, 0))
		{
			if (_IS_TAG_RESTRICTED(iVar5, 2006289597, 0))
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return func_438(iParam0, iParam1) + 15;
				}
				else
				{
					return func_438(iParam0, iParam1) + 15;
				}
			}
			else if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -540436505, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 1207461955, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -1467843180, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return func_438(iParam0, iParam1);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -1467843180, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -785939537, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -785939537, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -939525357, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -1986415230, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (4 + iVar3);
			}
			else
			{
				return func_438(iParam0, iParam1);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -1467843180, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -1663871176, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -1467843180, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -1467843180, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -1467843180, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return func_438(iParam0, iParam1);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -939525357, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1);
			}
			else
			{
				return func_438(iParam0, iParam1) + 15;
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 398019854, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_438(iParam0, iParam1) + 15;
			}
			else
			{
				return func_438(iParam0, iParam1);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 1965569012, 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, 2026620439, 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (_IS_TAG_RESTRICTED(iVar5, -1410897066, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if ((_IS_TAG_RESTRICTED(iVar5, -2017999390, 0) || _IS_TAG_RESTRICTED(iVar5, 320460654, 0)) || _IS_TAG_RESTRICTED(iVar5, -826135203, 0))
		{
			return (7 + iVar3);
		}
		else
		{
			iVar8 = iVar0;
			iVar0 = func_435(iVar5);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (5 + iVar3);
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (4 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (5 + iVar3);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 9:
				return (2 + iVar3);
				break;
			
			case 10:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (4 + iVar3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			}
	}
	return (1 + iVar3);
	return 0;
}

int func_434(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (_IS_TAG_RESTRICTED(iParam0, 140732128, iParam1))
	{
		iVar0 = 0;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, 1863955539, iParam1))
	{
		iVar0 = 1;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, 2106216756, iParam1))
	{
		iVar0 = 2;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, -761463976, iParam1))
	{
		iVar0 = 3;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, 1627756587, iParam1))
	{
		iVar0 = 4;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, 684992453, iParam1))
	{
		iVar0 = 5;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, 916636514, iParam1))
	{
		iVar0 = 6;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, -1939378450, iParam1))
	{
		iVar0 = 7;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, 441715397, iParam1))
	{
		iVar0 = 8;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, 264959411, iParam1))
	{
		iVar0 = 9;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, -1127835965, iParam1))
	{
		iVar0 = 10;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, -820724897, iParam1))
	{
		iVar0 = 11;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, 153792394, iParam1))
	{
		iVar0 = 12;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, -672871169, iParam1))
	{
		iVar0 = 13;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, 572416369, iParam1))
	{
		iVar0 = 14;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, -196114988, iParam1))
	{
		iVar0 = 15;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, 1322269404, iParam1))
	{
		iVar0 = 16;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, 548036233, iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_435(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (_IS_TAG_RESTRICTED(iParam0, 821147517, 0))
	{
		iVar0 = 0;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, 2055293595, 0))
	{
		iVar0 = 1;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, -1992562672, 0))
	{
		iVar0 = 2;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, 1458930564, 0))
	{
		iVar0 = 3;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, -1046587084, 0))
	{
		iVar0 = 4;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, 1943944625, 0))
	{
		iVar0 = 5;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, -1999870067, 0))
	{
		iVar0 = 6;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, 2048281121, 0))
	{
		iVar0 = 7;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, -109983526, 0))
	{
		iVar0 = 8;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, -1394888785, 0))
	{
		iVar0 = 9;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, -144826511, 0))
	{
		iVar0 = 10;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, 19149565, 0))
	{
		iVar0 = 11;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, 310957510, 0))
	{
		iVar0 = 12;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, 742787396, 0))
	{
		iVar0 = 13;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, -1604914832, 0))
	{
		iVar0 = 14;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, -1092211054, 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_436(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (_IS_TAG_RESTRICTED(iParam0, -870074461, iParam1))
	{
		iVar0 = 0;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, -1174924468, iParam1))
	{
		iVar0 = 1;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, -868698159, iParam1))
	{
		iVar0 = 2;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, -1177480446, iParam1))
	{
		iVar0 = 3;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, -1347486026, iParam1))
	{
		iVar0 = 4;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, -1655154167, iParam1))
	{
		iVar0 = 5;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, -2105858993, iParam1))
	{
		iVar0 = 6;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, 1893564692, iParam1))
	{
		iVar0 = 7;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, 1710451520, iParam1))
	{
		iVar0 = 8;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, 1416808511, iParam1))
	{
		iVar0 = 9;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, 1641506460, iParam1))
	{
		iVar0 = 10;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, 699233865, iParam1))
	{
		iVar0 = 11;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (_IS_TAG_RESTRICTED(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_437(int iParam0)
{
	if (_IS_TAG_RESTRICTED(_IS_TAG_RESTRICTED(iParam0, 4, _IS_TAG_RESTRICTED(iParam0, 4), _IS_TAG_RESTRICTED(iParam0, 4)), 1052059919, 0))
	{
		return 1;
	}
	return 0;
}

int func_438(int iParam0, int iParam1)
{
	if (iParam1 > 69)
	{
		return 69;
	}
	if (iParam1 > 61)
	{
		return 61;
	}
	if (iParam1 == 53 || iParam1 == 54)
	{
		return 61;
	}
	if (iParam1 > 51)
	{
		return 51;
	}
	if (iParam1 > 46)
	{
		return 51;
	}
	if (iParam1 > 26)
	{
		return 50;
	}
	if (iParam1 > 0)
	{
		return 49;
	}
	return 48;
}

void func_439(int iParam0, int iParam1)
{
	if (iParam1 > 61)
	{
		SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, -1825432403);
	}
	else if (iParam1 > 51)
	{
		SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, 1269440357);
	}
	else if (iParam1 > 46)
	{
		SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, 1766664132);
	}
	else if (iParam1 > 26)
	{
		SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, 1277738372);
	}
	else if (iParam1 > 0)
	{
		SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, 1269440357);
	}
	else
	{
		CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0);
	}
}

int func_440(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 1:
			return 9;
			break;
		
		case 2:
			return 9;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 8;
			break;
		
		case 6:
			return 8;
			break;
		
		case 7:
			return 11;
			break;
		
		case 8:
			return 11;
			break;
		
		case 9:
			return 6;
			break;
		
		case 10:
			return 6;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 10;
			break;
	}
	return 0;
}

int func_441(int iParam0, int iParam1)
{
	return 0;
}

int func_442(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_16();
	}
	iVar1 = func_444(iParam0, iParam1);
	uVar2 = func_443(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_443(int iParam0)
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

int func_444(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_16();
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

bool func_445()
{
	return IS_DLC_PRESENT(1428761799);
}

bool func_446()
{
	return IS_DLC_PRESENT(-1005876368);
}

void func_447()
{
	vector3 vVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	int iVar5;
	vector3 vVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	vector3 vVar11;
	float fVar12;
	
	if ((((!func_7(PLAYER_ID()) && !func_162(PLAYER_ID())) && !func_315()) && !func_458(PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)) && !func_457(PLAYER_ID()))
	{
		if (func_12(PLAYER_ID(), 1, 1))
		{
			fVar4 = 2.147484E+09f;
			iVar5 = -1;
			vVar6 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true) };
			bVar7 = func_5(Local_171.f_3);
			bVar8 = IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0);
			bVar9 = func_455();
			iVar2 = 0;
			while (iVar2 < 10)
			{
				iVar10 = Local_171.f_67[iVar2 /*2*/].f_1;
				if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar10) && NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar10), 0))
				{
					if (!bVar9 && bVar7)
					{
						if (bVar8 && GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0) == GET_VEHICLE_PED_IS_IN(iVar10))
						{
							func_337(1);
						}
					}
					SET_BIT(&uVar3, iVar2);
					if (bVar7 && func_40(Local_171.f_3, iVar2, &vVar0, &uVar1))
					{
						vVar11 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(iVar10), true) };
						if (vdist(vVar11, vVar0) <= 10f)
						{
							fVar12 = vdist(vVar11, vVar6);
							if (fVar12 < fVar4)
							{
								fVar4 = fVar12;
								iVar5 = iVar2;
							}
						}
					}
				}
				iVar2++;
			}
			if (func_41(Local_171.f_3))
			{
				SET_BIT(&uVar3, 31);
			}
			Global_1628955[PLAYER_ID() /*614*/].f_7 = uVar3;
			if (func_5(Local_171.f_3))
			{
				if ((IS_PED_IN_FLYING_VEHICLE(IS_PED_IN_FLYING_VEHICLE()) || (IS_PED_IN_FLYING_VEHICLE(IS_PED_IN_FLYING_VEHICLE()) && !IS_PED_IN_FLYING_VEHICLE(IS_PED_IN_FLYING_VEHICLE()))) || func_17(-1, 0))
				{
					if ((fVar4 < 2.147484E+09f && iVar5 >= 0) && iVar5 < 10)
					{
						if (func_40(Local_171.f_3, iVar5, &vVar0, &uVar1))
						{
							func_454(vVar0, 0f, 60f, 1, 20f, 0, 0, 10f, 1, 1, 0, 1, -1082130432);
							func_453(vVar0, 1, 0);
							func_449(10, 0, 0, 0, 0);
							SET_BIT(&iLocal_142, 5);
						}
					}
				}
				else
				{
					func_448();
				}
			}
		}
	}
	else
	{
		func_448();
	}
}

void func_448()
{
	if (IS_BIT_SET(iLocal_142, 5))
	{
		func_170();
		func_168();
		CLEAR_BIT(&iLocal_142, 5);
		func_167();
	}
}

void func_449(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2437549.f_1893.f_690.f_16 != func_102())
	{
		if (IS_BIT_SET(Global_2424073[Global_2437549.f_1893.f_690.f_16 /*421*/].f_402, 0) && func_450())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412637 = 0;
	}
	Global_2405071.f_485 = iParam0;
	Global_2405071.f_485.f_1 = GET_ID_OF_THIS_THREAD();
	Global_2405071.f_485.f_2 = iParam1;
	Global_2405071.f_485.f_3 = iParam2;
	Global_2405071.f_485.f_4 = iParam3;
	Global_2405071.f_485.f_5 = iParam4;
}

int func_450()
{
	if (((((func_220(PLAYER_ID()) == 229 || func_220(PLAYER_ID()) == 191) || func_452()) || func_451()) || func_355(PLAYER_ID())) || Global_2508349.f_226 == 1)
	{
		return 0;
	}
	return 1;
}

bool func_451()
{
	return Global_1574402;
}

int func_452()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_453(vector3 vParam0, int iParam1, int iParam2)
{
	Global_2405071.f_45.f_49 = { vParam0 };
	Global_2405071.f_45.f_52 = iParam1;
	Global_2405071.f_45.f_53 = iParam2;
}

void func_454(vector3 vParam0, float fParam1, float fParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (IS_THREAD_ACTIVE(Global_2413894.f_6))
	{
		if (!Global_2413894.f_6 == GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (vmag(vParam0) == 0f)
	{
		return;
	}
	if (!IS_THREAD_ACTIVE(Global_2413894.f_6))
	{
		Global_2413894.f_6 = GET_ID_OF_THIS_THREAD();
	}
	Var0.f_6 = Global_2413894.f_6;
	Var0 = { vParam0 };
	Var0.f_5 = fParam1;
	Var0.f_4 = fParam2;
	Var0.f_7 = iParam3;
	Var0.f_3 = fParam4;
	Var0.f_8 = iParam6;
	Var0.f_9 = iParam5;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = fParam7;
	Var0.f_22 = iParam8;
	if (func_385(PLAYER_ID()))
	{
		if (iParam11 || iParam5)
		{
			Var0.f_23 = 1;
		}
		else
		{
			Var0.f_23 = 0;
		}
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam9;
	Var0.f_26 = iParam10;
	Var0.f_27 = iParam12;
	Global_2413894 = { Var0 };
}

int func_455()
{
	if ((((((func_456(PLAYER_ID()) || func_165()) || func_164()) || func_163(PLAYER_ID(), 21)) || func_163(PLAYER_ID(), 25)) || func_8(PLAYER_ID())) || func_7(PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_456(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return IS_BIT_SET(Global_1628955[iVar0 /*614*/].f_1, 7);
	}
	return 0;
}

int func_457(int iParam0)
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

int func_458(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_1590446[iParam0 /*871*/].f_273.f_26 > 0)
	{
		if (bParam1)
		{
			if (IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_24, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_472(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_299(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_471(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_470(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_469(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_468(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_467(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_466(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_465(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_464(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_463(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_462(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_461(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_460(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_459(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_459(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_300(Global_2424073[iParam0 /*421*/].f_309.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_460(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_300(Global_2424073[iParam0 /*421*/].f_309.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_461(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_300(Global_2424073[iParam0 /*421*/].f_309.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_462(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_300(Global_2424073[iParam0 /*421*/].f_309.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_463(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_300(Global_2424073[iParam0 /*421*/].f_309.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_464(int iParam0, bool bParam1)
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
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_102())
			{
				return func_300(Global_2424073[iParam0 /*421*/].f_309.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_465(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_300(Global_2424073[iParam0 /*421*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_466(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_300(Global_2424073[iParam0 /*421*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_467(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_102())
			{
				return func_300(Global_2424073[iParam0 /*421*/].f_309.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_468(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_300(Global_2424073[iParam0 /*421*/].f_309.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_469(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_300(Global_2424073[iParam0 /*421*/].f_309.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_470(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_300(Global_2424073[iParam0 /*421*/].f_309.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_471(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_300(Global_2424073[iParam0 /*421*/].f_309.f_5) == 1;
			}
		}
	}
	return 0;
}

int func_472(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_300(Global_2424073[iParam0 /*421*/].f_309.f_5) == 0;
			}
		}
	}
	return 0;
}

void func_473(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	
	if (func_531())
	{
		if (bParam1)
		{
			iVar0 = PARTICIPANT_ID_TO_INT();
			if (func_100(PLAYER_ID()))
			{
				iVar1 = func_323();
				iVar2 = NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
				if (NETWORK_IS_PLAYER_ACTIVE(iVar2))
				{
					iVar3 = NETWORK_GET_PARTICIPANT_INDEX(iVar2);
					if (NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
					{
						iVar0 = iVar3;
					}
				}
			}
			if (iVar0 >= 0)
			{
				iVar4 = 0;
				while (iVar4 < func_530())
				{
					switch (Local_171.f_3)
					{
						case 14:
							if (!func_370(iVar4) && !func_369(iVar4))
							{
								func_478("AMCH_BRIDGE", bParam0, iVar0, iVar4);
							}
							break;
					}
					iVar4++;
				}
			}
		}
	}
	if (func_43())
	{
		iVar5 = 0;
		while (iVar5 < 10)
		{
			if (((!bParam0 && NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_171.f_67[iVar5 /*2*/].f_1)) && NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_171.f_67[iVar5 /*2*/].f_1), 0)) && NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_171.f_67[iVar5 /*2*/].f_1), -1, 0))
			{
				if (!DOES_BLIP_EXIST(iLocal_164[iVar5]))
				{
					iLocal_164[iVar5] = ADD_BLIP_FOR_ENTITY(ADD_BLIP_FOR_ENTITY(Local_171.f_67[iVar5 /*2*/].f_1));
					SET_BLIP_SPRITE(iLocal_164[iVar5], func_477(iVar5));
					SET_BLIP_PRIORITY(iLocal_164[iVar5], 9);
					SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_164[iVar5], func_476(iVar5));
					func_474(&(iLocal_164[iVar5]), 9);
				}
				else if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
				{
					vVar6 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true) };
					if (vdist(vVar6, GET_ENTITY_COORDS(GET_ENTITY_COORDS(Local_171.f_67[iVar5 /*2*/].f_1), true)) <= 150f)
					{
						_0x75A16C3DA34F1245(iLocal_164[iVar5], true);
					}
					else
					{
						_0x75A16C3DA34F1245(iLocal_164[iVar5], false);
					}
				}
			}
			else if (DOES_BLIP_EXIST(iLocal_164[iVar5]))
			{
				REMOVE_BLIP(&(iLocal_164[iVar5]));
			}
			iVar5++;
		}
	}
}

void func_474(var uParam0, int iParam1)
{
	int iVar0;
	
	if (DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_475(iParam1);
		SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

int func_475(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

char* func_476(int iParam0)
{
	if (IS_THIS_MODEL_A_HELI(Local_171.f_67[iParam0 /*2*/]))
	{
		return "AMCH_AC";
	}
	else if (IS_THIS_MODEL_A_PLANE(Local_171.f_67[iParam0 /*2*/]))
	{
		return "AMCH_AC";
	}
	else if (IS_THIS_MODEL_A_BIKE(Local_171.f_67[iParam0 /*2*/]) && !IS_THIS_MODEL_A_BIKE(Local_171.f_67[iParam0 /*2*/]))
	{
		return "AMCH_BIKE";
	}
	else
	{
		return "AMBL_VEH";
	}
	return "";
}

int func_477(int iParam0)
{
	if (IS_THIS_MODEL_A_HELI(Local_171.f_67[iParam0 /*2*/]))
	{
		return 64;
	}
	if (IS_THIS_MODEL_A_PLANE(Local_171.f_67[iParam0 /*2*/]))
	{
		return 423;
	}
	if (IS_THIS_MODEL_A_BIKE(Local_171.f_67[iParam0 /*2*/]) && !IS_THIS_MODEL_A_BIKE(Local_171.f_67[iParam0 /*2*/]))
	{
		return 348;
	}
	return 225;
}

void func_478(char* sParam0, bool bParam1, int iParam2, int iParam3)
{
	vector3 vVar0;
	
	if (!IS_BIT_SET(Local_1537[iParam2 /*12*/].f_8[func_361(iParam3)], func_360(iParam3)) && !bParam1)
	{
		vVar0 = { func_529(iParam3) };
		if (!DOES_BLIP_EXIST(iLocal_163[iParam3]))
		{
			if (!func_528(vVar0, 0f, 0f, 0f, 0) && !func_528(vVar0, 0f, 0f, -2000f, 0))
			{
				iLocal_163[iParam3] = ADD_BLIP_FOR_COORD(vVar0);
				SET_BLIP_PRIORITY(iLocal_163[iParam3], 9);
				SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_163[iParam3], sParam0);
				func_479(iLocal_163[iParam3], 25, 1152319488, 1137180672);
				func_474(&(iLocal_163[iParam3]), 12);
				_0x75A16C3DA34F1245(iLocal_163[iParam3], true);
			}
		}
		else if (IS_PAUSE_MENU_ACTIVE())
		{
			SET_BLIP_ALPHA(iLocal_163[iParam3], 255);
		}
		else
		{
			func_479(iLocal_163[iParam3], 25, 1152319488, 1137180672);
		}
	}
	else if (DOES_BLIP_EXIST(iLocal_163[iParam3]))
	{
		REMOVE_BLIP(&(iLocal_163[iParam3]));
		if (!bParam1)
		{
			PLAY_SOUND_FRONTEND(-1, "Checkpoint_Hit", "GTAO_FM_Events_Soundset", false);
		}
	}
}

void func_479(int iParam0, int iParam1, float fParam2, float fParam3)
{
	SET_BLIP_ALPHA(iParam0, func_480(iParam0, iParam1, fParam2, fParam3));
}

int func_480(int iParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	
	if (!func_527(Global_2437549) && !func_81())
	{
		fVar0 = func_482(iParam0, fParam3, fParam2);
		if (iParam1 == 0)
		{
			iParam1 = func_481();
		}
		return (round((to_float((255 - iParam1)) * fVar0)) + iParam1);
	}
	return 255;
}

int func_481()
{
	if (func_388(Global_2437549, 1))
	{
		return 50;
	}
	return 0;
}

float func_482(int iParam0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	iVar0 = Global_2437549;
	vVar2 = { func_526(iParam0) };
	vVar2.z = 0f;
	if (Global_1319107 || func_522())
	{
		if (func_521(iVar0))
		{
			vVar3 = { func_485(iVar0) };
		}
		else if (func_484(iVar0))
		{
			vVar3 = { func_483(iVar0) };
		}
	}
	else
	{
		vVar3 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(iVar0), false) };
	}
	vVar3.z = 0f;
	fVar1 = vmag(vVar3 - vVar2);
	if (fVar1 < fParam1)
	{
		fVar1 = fParam1;
	}
	if (fVar1 > fParam2)
	{
		fVar1 = fParam2;
	}
	fVar1 = ((fVar1 - fParam1) / (fParam2 - fParam1));
	fVar1 = (fVar1 - 1f);
	fVar1 = (fVar1 * -1f);
	return fVar1;
}

Vector3 func_483(int iParam0)
{
	int iVar0;
	
	if (func_484(iParam0))
	{
		iVar0 = GET_PLAYER_PED(iParam0);
		if (DOES_ENTITY_EXIST(iVar0))
		{
			return GET_ENTITY_COORDS(GET_ENTITY_COORDS(), false);
		}
	}
	return 0f, 0f, 0f;
}

int func_484(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			iVar0 = GET_PLAYER_PED(iParam0);
			if (DOES_ENTITY_EXIST(iVar0))
			{
				if (IS_ENTITY_AT_COORD(iVar0, 2056.204f, 2954.807f, -70.69892f, 110f, 90f, 15f, false, true, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_485(int iParam0)
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
	
	if (iParam0 == func_102())
	{
	}
	if (func_520(iParam0))
	{
		iVar0 = func_519(iParam0);
		if (iVar0 != func_102())
		{
			if (!func_518(iVar0))
			{
				if (DOES_ENTITY_EXIST(Global_2437549.f_660[iVar0 /*3*/][1]))
				{
					return GET_ENTITY_COORDS(Global_2437549.f_660[iVar0 /*3*/][1], false);
				}
				else
				{
					return Global_2424073[func_519(iParam0) /*421*/].f_309.f_9;
				}
			}
			else
			{
				iVar1 = func_514(iVar0);
				if (!iVar1 == -1)
				{
					return Global_1676879.f_457[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_513(iParam0))
	{
		if (DOES_ENTITY_EXIST(Global_2531497.f_305))
		{
			return GET_ENTITY_COORDS(Global_2531497.f_305, false);
		}
	}
	else if (func_470(iParam0) && !func_512(iParam0))
	{
		iVar2 = Global_2424073[iParam0 /*421*/].f_309.f_8;
		if (iVar2 != func_102())
		{
			iVar3 = func_514(iVar2);
			if (!iVar3 == -1)
			{
				return Global_1676879.f_457[iVar3 /*3*/];
			}
		}
	}
	else if (func_468(iParam0) && !func_511(iParam0))
	{
		if (func_521(iParam0) && func_510())
		{
			return Global_1676879.f_457[Global_2424073[iParam0 /*421*/].f_309.f_5 /*3*/];
		}
		iVar4 = Global_2424073[iParam0 /*421*/].f_309.f_8;
		if (iVar4 != func_102())
		{
			if (func_509(iVar4))
			{
				iVar5 = func_505(iVar4);
				if (iVar5 != -1)
				{
					return Global_1676879.f_457[iVar5 /*3*/];
				}
			}
		}
	}
	else if (func_467(iParam0))
	{
		iVar6 = func_504(iParam0);
		if (iVar6 != func_102())
		{
			if (!func_503(iVar6))
			{
				if (DOES_ENTITY_EXIST(Global_2437549.f_757[iVar6]))
				{
					return GET_ENTITY_COORDS(Global_2437549.f_757[iVar6], false);
				}
				else
				{
					return Global_2424073[func_504(iParam0) /*421*/].f_309.f_16;
				}
			}
			else
			{
				iVar7 = func_505(iVar6);
				if (!iVar7 == -1)
				{
					return Global_1676879.f_457[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_502(iParam0))
	{
		if (DOES_ENTITY_EXIST(Global_2531497.f_307))
		{
			return GET_ENTITY_COORDS(Global_2531497.f_307, false);
		}
	}
	else if (func_466(iParam0) && !func_501(iParam0))
	{
		iVar8 = Global_2424073[iParam0 /*421*/].f_309.f_8;
		if (iVar8 != func_102())
		{
			if (func_500(iVar8))
			{
				iVar9 = func_496(iVar8);
				if (iVar9 != -1)
				{
					return func_495(iVar9);
				}
			}
		}
	}
	else if (func_465(iParam0) && !func_494(iParam0))
	{
		iVar10 = Global_2424073[iParam0 /*421*/].f_309.f_8;
		if (iVar10 != func_102())
		{
			if (func_493(iVar10))
			{
				iVar11 = func_489(iVar10);
				if (iVar11 != -1)
				{
					return Global_1676879.f_457[iVar11 /*3*/];
				}
			}
		}
	}
	else if (func_464(iParam0, 0))
	{
		iVar12 = func_488(iParam0);
		if (iVar12 != func_102())
		{
			if (!func_487(iVar12))
			{
				if (DOES_ENTITY_EXIST(Global_2437549.f_790[iVar12]))
				{
					return GET_ENTITY_COORDS(Global_2437549.f_790[iVar12], false);
				}
				else
				{
					return Global_1628955[func_488(iParam0) /*614*/].f_599;
				}
			}
			else
			{
				iVar13 = func_489(iVar12);
				if (!iVar13 == -1)
				{
					return Global_1676879.f_457[iVar13 /*3*/];
				}
			}
		}
	}
	else if (func_463(iParam0))
	{
		return -366.7f, -1909.6f, 20f;
	}
	if (func_466(iParam0))
	{
		return func_495(Global_2424073[iParam0 /*421*/].f_309.f_5);
	}
	if (func_486(iParam0))
	{
		return 965.8165f, 42.25042f, 122.1267f;
	}
	return Global_1676879.f_457[Global_2424073[iParam0 /*421*/].f_309.f_5 /*3*/];
}

int func_486(int iParam0)
{
	if ((func_462(iParam0) || func_460(iParam0)) || func_461(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_487(int iParam0)
{
	if (iParam0 != func_102())
	{
		return IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309.f_3, 4);
	}
	return 0;
}

int func_488(int iParam0)
{
	if (iParam0 == func_102())
	{
		return iParam0;
	}
	return Global_2424073[iParam0 /*421*/].f_309.f_8;
}

int func_489(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_102())
	{
		iVar0 = func_492(iParam0);
		if (iVar0 != 0)
		{
			return func_490(iVar0);
		}
	}
	return -1;
}

int func_490(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 136)
	{
		if (func_300(iVar0) == 11)
		{
			if (func_491(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_491(int iParam0)
{
	switch (iParam0)
	{
		case 102:
			return 1;
		
		case 103:
			return 2;
		
		case 104:
			return 3;
		
		case 105:
			return 4;
		
		case 106:
			return 5;
		
		case 107:
			return 6;
		
		case 108:
			return 7;
		
		case 109:
			return 8;
		
		case 110:
			return 9;
		
		case 111:
			return 10;
		
		default:
	}
	return 0;
}

int func_492(int iParam0)
{
	if (iParam0 != func_102())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_277;
	}
	return 0;
}

int func_493(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (Global_1590446[iParam0 /*871*/].f_273.f_277 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_494(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_465(iParam0) && Global_2424073[iParam0 /*421*/].f_309.f_8 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_495(int iParam0)
{
	switch (iParam0)
	{
		case 102:
			return 750.5f, -1322.3f, 26.2802f;
		
		case 103:
			return 331.9f, -974.9f, 30f;
		
		case 104:
			return -146f, -1270f, 28.3088f;
		
		case 105:
			return -17.7f, 225.7f, 106.7566f;
		
		case 106:
			return 894.4f, -2106.4f, 29.4768f;
		
		case 107:
			return -668f, -2431.5f, 12.9444f;
		
		case 108:
			return 213.4f, -3166.6f, 4.7903f;
		
		case 109:
			return 366.6f, 237.6f, 104.9f;
		
		case 110:
			return -1275.3f, -666.8f, 25.6332f;
		
		case 111:
			return -1188.8f, -1156.9f, 4.6582f;
		
		default:
	}
	return Global_1676879.f_457[iParam0 /*3*/];
}

int func_496(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_102())
	{
		iVar0 = func_499(iParam0);
		if (iVar0 != 0)
		{
			return func_497(iVar0);
		}
	}
	return -1;
}

int func_497(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 136)
	{
		if (func_300(iVar0) == 11)
		{
			if (func_498(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_498(int iParam0)
{
	switch (iParam0)
	{
		case 102:
			return 1;
		
		case 103:
			return 2;
		
		case 104:
			return 3;
		
		case 105:
			return 4;
		
		case 106:
			return 5;
		
		case 107:
			return 6;
		
		case 108:
			return 7;
		
		case 109:
			return 8;
		
		case 110:
			return 9;
		
		case 111:
			return 10;
		
		default:
	}
	return 0;
}

int func_499(int iParam0)
{
	if (iParam0 != func_102())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_318;
	}
	return 0;
}

int func_500(int iParam0)
{
	if (iParam0 != func_102())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_318 != 0;
	}
	return 0;
}

int func_501(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_466(iParam0) && Global_2424073[iParam0 /*421*/].f_309.f_8 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_502(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_300(Global_2424073[iParam0 /*421*/].f_309.f_5) == 10;
			}
		}
	}
	return 0;
}

int func_503(int iParam0)
{
	if (iParam0 != func_102())
	{
		return IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309.f_2, 6);
	}
	return 0;
}

int func_504(int iParam0)
{
	if (iParam0 == func_102())
	{
		return iParam0;
	}
	return Global_2424073[iParam0 /*421*/].f_309.f_8;
}

int func_505(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_102())
	{
		return -1;
	}
	iVar0 = func_508(iParam0);
	if (!iVar0 == 0)
	{
		return func_506(iVar0);
	}
	return -1;
}

int func_506(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 136)
	{
		if (func_300(iVar0) == 9)
		{
			if (func_507(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_507(int iParam0)
{
	switch (iParam0)
	{
		case 89:
			return 1;
			break;
		
		case 90:
			return 2;
			break;
		
		case 91:
			return 3;
			break;
		
		case 92:
			return 4;
			break;
		
		case 93:
			return 5;
			break;
		
		case 94:
			return 6;
			break;
		
		case 95:
			return 7;
			break;
		
		case 96:
			return 8;
			break;
		
		case 97:
			return 9;
			break;
	}
	return 0;
}

int func_508(int iParam0)
{
	if (iParam0 == func_102())
	{
		return 0;
	}
	return Global_1590446[iParam0 /*871*/].f_273.f_267;
}

int func_509(int iParam0)
{
	if (iParam0 != func_102())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_267 != 0;
	}
	return 0;
}

int func_510()
{
	if (IS_BIT_SET(Global_1676879.f_2, 13) || Global_1676879.f_2814)
	{
		return 1;
	}
	return 0;
}

int func_511(int iParam0)
{
	if (iParam0 == func_102())
	{
		return 0;
	}
	if (func_468(iParam0) && Global_2424073[iParam0 /*421*/].f_309.f_8 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_512(int iParam0)
{
	if (iParam0 == func_102())
	{
		return 0;
	}
	if (func_470(iParam0) && Global_2424073[iParam0 /*421*/].f_309.f_8 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_513(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_300(Global_2424073[iParam0 /*421*/].f_309.f_5) == 6;
			}
		}
	}
	return 0;
}

int func_514(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_102())
	{
		return -1;
	}
	iVar0 = func_517(iParam0);
	if (!iVar0 == 0)
	{
		return func_515(iVar0);
	}
	return -1;
}

int func_515(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 136)
	{
		if (func_516(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_516(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 3;
			break;
		
		case 25:
			return 4;
			break;
		
		case 26:
			return 5;
			break;
		
		case 27:
			return 6;
			break;
		
		case 28:
			return 7;
			break;
		
		case 29:
			return 8;
			break;
		
		case 30:
			return 9;
			break;
		
		case 31:
			return 10;
			break;
		
		case 32:
			return 11;
			break;
		
		case 33:
			return 12;
			break;
		
		case 34:
			return 13;
			break;
		
		case 35:
			return 14;
			break;
		
		case 36:
			return 15;
			break;
		
		case 37:
			return 16;
			break;
		
		case 38:
			return 17;
			break;
		
		case 39:
			return 18;
			break;
		
		case 40:
			return 19;
			break;
		
		case 41:
			return 20;
			break;
		
		case 70:
			return 21;
			break;
		
		case 71:
			return 22;
			break;
		
		case 72:
			return 23;
			break;
		
		case 73:
			return 24;
			break;
		
		case 74:
			return 25;
			break;
		
		case 75:
			return 26;
			break;
		
		case 76:
			return 27;
			break;
		
		case 77:
			return 28;
			break;
		
		case 78:
			return 29;
			break;
		
		case 79:
			return 30;
			break;
		
		case 80:
			return 31;
			break;
	}
	return 0;
}

int func_517(int iParam0)
{
	if (iParam0 == func_102())
	{
		return 0;
	}
	return Global_1590446[iParam0 /*871*/].f_273.f_179[5 /*12*/];
}

int func_518(int iParam0)
{
	if (iParam0 != func_102())
	{
		return IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309, 6);
	}
	return 0;
}

int func_519(int iParam0)
{
	if (iParam0 == func_102())
	{
		return iParam0;
	}
	return Global_2424073[iParam0 /*421*/].f_309.f_8;
}

int func_520(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_102())
			{
				return func_300(Global_2424073[iParam0 /*421*/].f_309.f_5) == 5;
			}
		}
	}
	return 0;
}

int func_521(int iParam0)
{
	if (iParam0 != func_102())
	{
		if (func_12(iParam0, 1, 1))
		{
			return Global_2424073[iParam0 /*421*/].f_309.f_5 != -1;
		}
		else if ((Global_1312873 && iParam0 == PLAYER_ID()) && func_12(iParam0, 1, 0))
		{
			return Global_2424073[iParam0 /*421*/].f_309.f_5 != -1;
		}
	}
	return 0;
}

int func_522()
{
	if ((func_525() || func_524()) || func_523(PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

bool func_523(int iParam0)
{
	if (iParam0 == func_102())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1627738[iParam0 /*38*/].f_29, 20);
}

bool func_524()
{
	return IS_BIT_SET(Global_1687879, 1);
}

bool func_525()
{
	return IS_BIT_SET(Global_1687880, 5);
}

Vector3 func_526(int iParam0)
{
	int iVar0;
	
	switch (GET_BLIP_INFO_ID_TYPE(iParam0))
	{
		case 1:
		case 2:
		case 3:
			iVar0 = GET_BLIP_INFO_ID_ENTITY_INDEX(iParam0);
			if (DOES_ENTITY_EXIST(iVar0))
			{
				return GET_ENTITY_COORDS(iVar0, false);
			}
			break;
	}
	return GET_BLIP_COORDS(iParam0);
}

int func_527(int iParam0)
{
	if ((IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_68.f_2, 9) && !(IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_68.f_2, 6) && IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_68.f_2, 7))) || ((IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_68.f_2, 6) && !IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_68.f_2, 7)) && !IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_68.f_2, 9)))
	{
		return 1;
	}
	return 0;
}

bool func_528(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_529(int iParam0)
{
	switch (Local_171.f_3)
	{
		case 14:
			return vLocal_162[iParam0 /*3*/];
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_530()
{
	switch (Local_171.f_3)
	{
		case 14:
			return 65;
		
		default:
	}
	return 0;
}

int func_531()
{
	switch (Local_171.f_3)
	{
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_532()
{
	switch (Local_171.f_3)
	{
		case -1:
			break;
		
		default:
			return 0;
	}
	return 0;
}

void func_533(var uParam0, char* sParam1)
{
	char* sVar0;
	
	if (func_314(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_217(sParam1))
	{
		sVar0 = sParam1;
	}
	func_143(uParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

char* func_534(int iParam0)
{
	char* sVar0;
	
	sVar0 = GET_THIS_SCRIPT_NAME();
	return "HUD_STARTING";
	if (ARE_STRINGS_EQUAL(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "am_challenges"))
	{
		switch (iParam0)
		{
			case 0:
				return "AST_CHALL_LJ";
			
			case 1:
				return "AST_CHALL_LS";
			
			case 2:
				return "AST_CHALL_HS";
			
			case 3:
				return "AST_CHALL_LST";
			
			case 4:
				return "AST_CHALL_LW";
			
			case 5:
				return "AST_CHALL_NC";
			
			case 6:
				return "AST_CHALL_LP";
			
			case 7:
				return "AST_CHALL_VS";
			
			case 8:
				return "AST_CHALL_NM";
			
			case 9:
				return "AST_CHALL_RD";
			
			case 10:
				return "AST_CHALL_LF";
			
			case 11:
				return "AST_CHALL_LFL";
			
			case 12:
				return "AST_CHALL_LFI";
			
			case 13:
				return "AST_CHALL_LB";
			
			case 14:
				return "AST_CHALL_MB";
			
			case 15:
				return "AST_CHALL_HSH";
			
			case 16:
				return "AST_CHALL_DB";
			
			case 17:
				return "AST_CHALL_ML";
			
			case 18:
				return "AST_CHALL_LSN";
			
			default:
		}
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

int func_535(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_536(int iParam0)
{
	if (IntToFloat(iParam0) < GET_FRAME_TIME())
	{
		Global_2531497.f_4735 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!IS_BIT_SET(Global_2531497.f_4735, 1))
		{
			PLAY_SOUND_FRONTEND(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", false);
			Global_2531497.f_4735 = 0;
			SET_BIT(&(Global_2531497.f_4735), 1);
		}
	}
}

int func_537(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return IS_TIME_EQUAL_TO(IS_TIME_EQUAL_TO(), *uParam0);
		}
		else
		{
			return IS_TIME_EQUAL_TO(IS_TIME_EQUAL_TO(), *uParam0);
		}
	}
	return IS_TIME_EQUAL_TO(IS_TIME_EQUAL_TO(), *uParam0);
}

void func_538(int iParam0)
{
	if (!IS_RADAR_HIDDEN() && !IS_RADAR_HIDDEN())
	{
		switch (iParam0)
		{
			case 0:
				if (!IS_BIT_SET(iLocal_165, iParam0))
				{
					if (!IS_PAUSE_MENU_ACTIVE() && !IS_PAUSE_MENU_ACTIVE())
					{
						if (func_5(Local_171.f_3))
						{
							if (Local_171.f_3 == 12)
							{
								func_296("AMCH_AIRAVI", 30000);
							}
							else
							{
								func_296("AMCH_AIRAV", 30000);
							}
						}
						else if (func_41(Local_171.f_3))
						{
							func_296("AMCH_BIKEAV", 30000);
						}
						func_295(1);
						SET_BIT(&iLocal_165, iParam0);
					}
				}
				break;
			
			case 1:
				if (!IS_BIT_SET(iLocal_165, iParam0))
				{
					if (!IS_PAUSE_MENU_ACTIVE())
					{
						func_296("AMCH_BLOW", 30000);
						func_295(1);
						SET_BIT(&iLocal_165, iParam0);
					}
				}
				break;
			
			case 2:
				if (!IS_BIT_SET(iLocal_165, iParam0))
				{
					if (!IS_PAUSE_MENU_ACTIVE() && !func_543(63))
					{
						switch (Local_171.f_3)
						{
							case 11:
							case 12:
								if (func_12(PLAYER_ID(), 1, 1))
								{
									if (IS_PED_IN_FLYING_VEHICLE(IS_PED_IN_FLYING_VEHICLE()))
									{
										func_296("AMCH_ALTI", 30000);
										func_295(1);
										SET_BIT(&iLocal_165, iParam0);
									}
								}
								break;
							
							case 8:
								if (func_12(PLAYER_ID(), 1, 1))
								{
									func_296("AMCH_NMIS", 30000);
									func_295(1);
									SET_BIT(&iLocal_165, iParam0);
								}
								break;
							
							case 1:
								if (func_12(PLAYER_ID(), 1, 1))
								{
									func_296("AMCH_FRFALL", -1);
									func_295(1);
									SET_BIT(&iLocal_165, iParam0);
								}
								break;
							
							case 16:
							case 15:
							case 18:
								if (func_12(PLAYER_ID(), 1, 1))
								{
									func_296("AMCH_PVPO1", -1);
									func_295(1);
									SET_BIT(&iLocal_165, iParam0);
								}
								break;
							
							case 17:
								if (func_12(PLAYER_ID(), 1, 1))
								{
									func_296("AMCH_PVPO2", -1);
									func_295(1);
									SET_BIT(&iLocal_165, iParam0);
								}
								break;
							
							case 4:
								if (func_12(PLAYER_ID(), 1, 1))
								{
									func_296("AMCH_WHEELIE", 30000);
									func_295(1);
									SET_BIT(&iLocal_165, iParam0);
								}
								break;
							
							case 3:
								if (func_12(PLAYER_ID(), 1, 1))
								{
									func_296("AMCH_STOPPIE", 30000);
									func_295(1);
									SET_BIT(&iLocal_165, iParam0);
								}
								break;
							
							case 10:
								if (func_12(PLAYER_ID(), 1, 1))
								{
									func_296("AMCH_LFALL", 30000);
									func_295(1);
									SET_BIT(&iLocal_165, iParam0);
								}
								break;
							
							case 6:
								if (func_12(PLAYER_ID(), 1, 1))
								{
									func_296("AMCH_LPARA", 30000);
									func_295(1);
									SET_BIT(&iLocal_165, iParam0);
								}
								break;
							}
						}
				}
				break;
			
			case 3:
				if (!IS_BIT_SET(iLocal_165, iParam0))
				{
					if ((!IS_PAUSE_MENU_ACTIVE() && !IS_PAUSE_MENU_ACTIVE()) && !func_543(63))
					{
						switch (Local_171.f_3)
						{
							case 11:
							case 12:
								if (func_12(PLAYER_ID(), 1, 1))
								{
									if (IS_PED_IN_FLYING_VEHICLE(IS_PED_IN_FLYING_VEHICLE()))
									{
										if (func_1(&uLocal_136, 1000, 0))
										{
											func_296("AMCH_OCEAN", 30000);
											func_295(1);
											func_46(&uLocal_136);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 5:
				if (!IS_BIT_SET(iLocal_165, iParam0))
				{
					if (!IS_PAUSE_MENU_ACTIVE() && !func_543(63))
					{
						switch (Local_171.f_3)
						{
							case 11:
							case 12:
								if (func_12(PLAYER_ID(), 1, 1))
								{
									if (IS_PED_IN_FLYING_VEHICLE(IS_PED_IN_FLYING_VEHICLE()))
									{
										if (func_527(PLAYER_ID()) && !func_540(PLAYER_ID()))
										{
											func_296("AMCH_ALTIEXP", 30000);
											func_295(1);
											SET_BIT(&iLocal_165, iParam0);
										}
									}
								}
								break;
							}
						}
				}
				break;
			
			case 6:
				if (!IS_BIT_SET(iLocal_165, iParam0))
				{
					if ((!IS_PAUSE_MENU_ACTIVE() && !IS_PAUSE_MENU_ACTIVE()) && !func_543(63))
					{
						if (func_1(&uLocal_136, 1000, 0))
						{
							func_296("AMCH_FLYLOW", 30000);
							func_295(1);
							func_46(&uLocal_136);
						}
					}
				}
				break;
			
			case 7:
				if (!IS_BIT_SET(iLocal_165, iParam0))
				{
					if (Local_171.f_3 == 7)
					{
						if (iLocal_166 == 0)
						{
							if ((!IS_PAUSE_MENU_ACTIVE() && !IS_PAUSE_MENU_ACTIVE()) && !func_543(63))
							{
								if (func_12(PLAYER_ID(), 1, 1))
								{
									func_296("AMCH_MVS1", 30000);
									func_295(1);
									iLocal_166 = 1;
								}
							}
						}
						else if ((!IS_PAUSE_MENU_ACTIVE() && !IS_PAUSE_MENU_ACTIVE()) && !func_543(63))
						{
							if (func_12(PLAYER_ID(), 1, 1))
							{
								func_296("AMCH_MVS2", 30000);
								func_295(1);
								SET_BIT(&iLocal_165, iParam0);
							}
						}
					}
					if (Local_171.f_3 == 14)
					{
						if (iLocal_166 == 0)
						{
							if ((!IS_PAUSE_MENU_ACTIVE() && !IS_PAUSE_MENU_ACTIVE()) && !func_543(63))
							{
								if (func_12(PLAYER_ID(), 1, 1))
								{
									func_296("AMCH_BRBL", 30000);
									func_295(1);
									iLocal_166 = 1;
								}
							}
						}
						else if ((!IS_PAUSE_MENU_ACTIVE() && !IS_PAUSE_MENU_ACTIVE()) && !func_543(63))
						{
							if (func_12(PLAYER_ID(), 1, 1))
							{
								func_296("AMCH_BRBL2", 30000);
								func_295(1);
								SET_BIT(&iLocal_165, iParam0);
							}
						}
					}
				}
				break;
			
			case 9:
				if (!IS_BIT_SET(iLocal_165, iParam0))
				{
					if (!IS_PAUSE_MENU_ACTIVE() && !IS_PAUSE_MENU_ACTIVE())
					{
						func_539("AMCH_WARN", func_393(Local_171.f_3), func_392(Local_171.f_3), 30000);
						func_295(0);
						Local_1538.f_8 = 0xF12E6CD06C73D69E();
						PLAY_SOUND_FRONTEND(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", false);
						SET_BIT(&iLocal_165, iParam0);
					}
				}
				break;
			}
	}
}

void func_539(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam1);
	ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 0, false, iParam3);
}

bool func_540(int iParam0)
{
	return IS_BIT_SET(Global_1373500.f_241.f_136[func_542(9) /*33*/][iParam0], func_541(9));
}

int func_541(int iParam0)
{
	return (iParam0 % 32);
}

int func_542(int iParam0)
{
	return (iParam0 / 32);
}

bool func_543(int iParam0)
{
	return Global_2437549.f_2708[0 /*80*/].f_1 == iParam0;
}

void func_544(int iParam0)
{
	Local_1537[PARTICIPANT_ID_TO_INT() /*12*/].f_3 = iParam0;
}

void func_545(bool bParam0)
{
	if (bParam0)
	{
		SET_BIT(&(Global_1628955[SET_BIT() /*614*/].f_1), 4);
	}
	else
	{
		CLEAR_BIT(&(Global_1628955[CLEAR_BIT() /*614*/].f_1), 4);
	}
}

int func_546(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_569(PLAYER_ID(), 29))
	{
		return 0;
	}
	if (func_163(PLAYER_ID(), 21))
	{
		return 0;
	}
	if (func_163(PLAYER_ID(), 25))
	{
		return 0;
	}
	if (NETWORK_END_TUTORIAL_SESSION())
	{
		return 0;
	}
	if (bParam1)
	{
		if (NETWORK_SET_IN_MP_CUTSCENE())
		{
			return 0;
		}
	}
	if (func_349(PLAYER_ID()))
	{
		return 0;
	}
	if (func_568())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_567(PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_566())
	{
		return 0;
	}
	if (bParam0)
	{
		if (func_106(PLAYER_ID()))
		{
			return 0;
		}
	}
	else if (func_559(PLAYER_ID()) == 3)
	{
		return 0;
	}
	if (func_558(PLAYER_ID()) != func_102() && func_558(PLAYER_ID()) == func_88(PLAYER_ID()))
	{
		return 0;
	}
	if (func_557(func_290()) && func_321(PLAYER_ID()) != 236)
	{
		return 0;
	}
	if (func_556())
	{
		return 0;
	}
	if (func_315())
	{
		return 0;
	}
	if (NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_351(PLAYER_ID()))
	{
		return 0;
	}
	if (!func_554())
	{
		return 0;
	}
	if (func_163(PLAYER_ID(), 0) || func_163(PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_163(PLAYER_ID(), 12) || func_163(PLAYER_ID(), 14)) || func_163(PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_553(PLAYER_ID(), 1, 1))
	{
		if (!func_525() && !Global_2507941)
		{
			return 0;
		}
	}
	if (func_552(PLAYER_ID()))
	{
		return 0;
	}
	if (func_551())
	{
		return 0;
	}
	if (Global_1662552)
	{
		return 0;
	}
	if (func_386(PLAYER_ID()))
	{
		return 0;
	}
	if (func_550())
	{
		return 0;
	}
	if (func_548(PLAYER_ID()) && Global_1590095.f_171)
	{
		return 0;
	}
	if (func_547())
	{
		return 0;
	}
	if (func_355(PLAYER_ID()))
	{
		return 0;
	}
	if (Global_2530556)
	{
		return 0;
	}
	if (Global_1694287)
	{
		return 0;
	}
	return 1;
}

bool func_547()
{
	return Global_1676879.f_443;
}

int func_548(int iParam0)
{
	if (func_549(Global_1590446[iParam0 /*871*/].f_273.f_26))
	{
		return 1;
	}
	return 0;
}

int func_549(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_550()
{
	if (Global_4254407.f_904 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_551()
{
	return Global_98721.f_346 > 0;
}

bool func_552(int iParam0)
{
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_24, 11);
}

int func_553(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_102())
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

int func_554()
{
	if (func_555() == 0)
	{
		return 1;
	}
	return 0;
}

int func_555()
{
	return Global_1312467.f_18;
}

bool func_556()
{
	return Global_1312873;
}

int func_557(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

int func_558(int iParam0)
{
	return Global_1628955[iParam0 /*614*/].f_11.f_35;
}

int func_559(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_387(iParam0) && !func_8(iParam0)) && !IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 8));
	bVar2 = func_106(iParam0);
	uVar3 = func_165();
	uVar4 = func_560();
	if ((bVar1 && (func_456(iParam0) || func_412(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_108(iParam0)) && !func_301(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2531497.f_4898.f_214 != iVar0)
	{
		Global_2531497.f_4898.f_214 = iVar0;
	}
	return iVar0;
}

int func_560()
{
	if ((func_107(PLAYER_ID(), 21) || func_107(PLAYER_ID(), 22)) || func_564())
	{
		return 1;
	}
	if (func_562())
	{
		func_561(22);
		return 1;
	}
	return 0;
}

void func_561(int iParam0)
{
	SET_BIT(&(Global_1628955[SET_BIT() /*614*/].f_11.f_4), iParam0);
}

int func_562()
{
	if (func_112(PLAYER_ID(), 0))
	{
		if (((func_165() && !func_164()) || func_163(PLAYER_ID(), 21)) || func_163(PLAYER_ID(), 25))
		{
			return 1;
		}
		else
		{
			func_563(27);
		}
	}
	return 0;
}

void func_563(int iParam0)
{
	CLEAR_BIT(&(Global_1628955[CLEAR_BIT() /*614*/].f_11.f_4), iParam0);
}

int func_564()
{
	return func_565(356, -1);
}

int func_565(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2576213[iParam0 /*3*/][func_203(iParam1)];
	if (STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_566()
{
	return Global_1590446[PLAYER_ID() /*871*/] == 5;
}

int func_567(int iParam0)
{
	if (Global_2424073[iParam0 /*421*/].f_261.f_4 != 0 || Global_2424073[iParam0 /*421*/].f_261.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_568()
{
	return IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_39.f_18, 0);
}

bool func_569(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_11.f_5, iParam1);
}

void func_570()
{
	func_571(&(Local_192.f_534), &Local_192, 26, &(Local_192.f_1), &(Local_192.f_117), Local_171.f_3, 0, 0);
}

void func_571(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	struct<4> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
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
	struct<2> Var22;
	
	if (func_681(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_36 = 0;
	if (func_679() || iParam2 == 27)
	{
		if (func_634(iParam1, iParam2, uParam3, Global_1574182, 0, func_682(), sParam7))
		{
			func_633(1);
			if ((!func_632() && !func_631()) || IS_BIT_SET(Global_2531497.f_4588, 1))
			{
				if (func_630())
				{
					func_629();
				}
				else
				{
					SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_628(1);
						Global_1574182 = 0;
						iVar19 = -1;
						if (Global_1574403 != 1)
						{
							func_627(iParam1, 0, 0);
							if (IS_BIT_SET(uParam3->f_33, 7))
							{
								CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 27)
						{
							iVar17 = 0;
							while (iVar17 < 32)
							{
								iVar1[iVar17] = -1;
								iVar17++;
							}
							iVar17 = 0;
							while (iVar17 < 32)
							{
								if (func_12(INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar3 = INT_TO_PLAYERINDEX(iVar17);
									if (!func_14(iVar3, 0))
									{
										if ((func_626(iVar3) || Global_2424073[iVar3 /*421*/].f_236 != -1) || func_625(iVar3))
										{
											iVar9 = iVar3;
											if (func_90(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_622(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_109(PLAYER_ID(), 0) && func_220(PLAYER_ID()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_621())
							{
								if (func_12(INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar3 = INT_TO_PLAYERINDEX(iVar17);
								}
								else
								{
									iVar3 = func_102();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_620(iVar3) && func_617(iVar3, iParam2)) && func_12(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1590446[iVar9 /*871*/].f_211.f_6;
								Var6 = { func_612(iVar3) };
								if (iVar3 == PLAYER_ID())
								{
									uParam3->f_35 = iVar18;
								}
								StringCopy(&(uParam3->f_1), GET_PLAYER_NAME(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_137(iVar3) };
								iVar5 = func_606(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = GET_PEDHEADSHOT_TXD_STRING(iVar5);
								}
								Global_1574182++;
								if ((uParam0[iVar17 /*42*/])->f_22 != -1f)
								{
									fVar10 = (uParam0[iVar17 /*42*/])->f_22;
								}
								if ((uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									iVar11 = (uParam0[iVar17 /*42*/])->f_31;
								}
								if ((uParam0[iVar17 /*42*/])->f_41 != -1)
								{
									iVar12 = (uParam0[iVar17 /*42*/])->f_41;
								}
								iVar8 = (uParam0[iVar17 /*42*/])->f_9;
								if (((uParam0[iVar17 /*42*/])->f_9 != -1 || (uParam0[iVar17 /*42*/])->f_22 != -1f) || (uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									if (!func_621())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_604(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_284(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar13 = (uParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = -2;
									}
								}
								iVar16 = func_603(iVar3, 0);
								if (bVar2)
								{
									if (func_89(iVar3, 1) && iVar1[iVar9] != -1)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
								if ((uParam0[iVar17 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (uParam0[iVar17 /*42*/])->f_39, 16);
								}
								if (func_602(iParam5))
								{
									func_601(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								else
								{
									func_601(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								SET_BIT(&iVar14, iVar3);
								iVar18++;
							}
							iVar17++;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							iVar3 = INT_TO_PLAYERINDEX(iVar17);
							if (func_12(iVar3, 0, 1) && !IS_BIT_SET(iVar14, iVar3))
							{
								iVar3 = INT_TO_PLAYERINDEX(iVar17);
							}
							else
							{
								iVar3 = func_102();
							}
							if (func_620(iVar3))
							{
								if (func_12(INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1590446[iVar9 /*871*/].f_211.f_6;
									Var6 = { func_612(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_137(iVar3) };
									iVar5 = func_606(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = GET_PEDHEADSHOT_TXD_STRING(iVar5);
									}
									Global_1574182++;
									iVar16 = func_603(iVar3, 1);
									if (bVar2)
									{
										if (func_89(iVar3, 1))
										{
											iVar18 = iVar1[iVar17];
										}
										else
										{
											iVar18 = (iVar0 + iVar21);
											iVar21++;
										}
									}
									uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
									func_584(iVar3, GET_PLAYER_NAME(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (IS_BIT_SET(uParam3->f_33, 11))
						{
							func_581(uParam3, iParam1);
						}
						func_46(&(uParam3->f_21));
						func_580();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!IS_BIT_SET(uParam3->f_33, 7))
						{
							func_579(uParam3, iParam1);
							func_578(iParam1, 0, 1);
							SET_BIT(&(uParam3->f_33), 7);
						}
						func_579(uParam3, iParam1);
						if (!IS_BIT_SET(uParam3->f_33, 11))
						{
							SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_574(uParam3))
						{
							Global_1574403 = 1;
						}
						func_572(uParam3);
						if (Global_1574403 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574403 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
					{
						_SET_UI_LAYER(7);
						DRAW_SCALEFORM_MOVIE(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						_SET_UI_LAYER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_580();
			func_628(0);
			if (IS_BIT_SET(uParam3->f_33, 7))
			{
				CLEAR_BIT(&(uParam3->f_33), 7);
			}
			if (IS_BIT_SET(uParam3->f_33, 10))
			{
				CLEAR_BIT(&(uParam3->f_33), 10);
			}
		}
	}
	RESET_SCRIPT_GFX_ALIGN();
}

void func_572(var uParam0)
{
	if (!func_47(&(uParam0->f_21)))
	{
		func_2(&(uParam0->f_21), 0, 0);
	}
	else if (func_1(&(uParam0->f_21), 250, 0))
	{
		func_46(&(uParam0->f_21));
		func_573(0);
	}
}

void func_573(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574403 != 2)
		{
			Global_1574403 = 2;
		}
	}
	else
	{
		switch (Global_1574403)
		{
			case 0:
				Global_1574403 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_574(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	iVar3 = INT_TO_PLAYERINDEX(uParam0->f_37);
	if (iVar3 != func_102() && func_12(iVar3, 0, 1))
	{
		Var2 = { func_137(iVar3) };
		iVar1 = func_577(uParam0, uParam0->f_37);
		if (func_576(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (0x8F5D1AD832AEB06C(&Var2))
					{
						if (NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_575(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_575(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (0x8F5D1AD832AEB06C(&Var2))
					{
						if (!NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_575(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_575(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (0x8F5D1AD832AEB06C(&Var2))
					{
						if (!NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar4 = 1;
							func_575(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_575(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar4;
}

void func_575(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_576(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_577(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_578(int iParam0, bool bParam1, int iParam2)
{
	if (BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "COLLAPSE"))
	{
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(bParam1);
		END_SCALEFORM_MOVIE_METHOD();
	}
	if (iParam2 == 1)
	{
		if (BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "DISPLAY_VIEW"))
		{
			END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_579(var uParam0, int iParam1)
{
	if (!IS_BIT_SET(uParam0->f_33, 10))
	{
		BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_HIGHLIGHT");
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam0->f_35);
		END_SCALEFORM_MOVIE_METHOD();
		SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_580()
{
	if (Global_1574403 != 0)
	{
		Global_1574403 = 0;
	}
}

void func_581(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = INT_TO_PLAYERINDEX(iVar0);
		if (iVar2 != func_102())
		{
			if (func_12(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_583(uParam0->f_38[iVar0 /*2*/], 0);
					func_582(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1590446[iVar0 /*871*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_582(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_ICON"))
		{
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam1);
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam2);
			if (iParam2 == 65)
			{
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam3);
			}
			END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

int func_583(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 65;
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_584(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_600() && iParam4 < func_599())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574184)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574403 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, sVar1))
		{
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam4);
			if (IS_BIT_SET(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_598("");
			}
			else
			{
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam10);
			}
			func_598(sParam1);
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_598("");
			}
			else
			{
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(65);
			}
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(-1);
			func_598("");
			if (uParam3->f_108 == 6)
			{
				func_598("");
			}
			else
			{
				func_598(&sParam5);
			}
			func_589(uParam3, iParam0);
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam9);
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam9);
			if (func_588(uParam3))
			{
				func_587("DPAD_FRIEND");
			}
			else if (func_586(uParam3))
			{
				func_587("DPAD_FRIEND");
			}
			else if (func_585(uParam3))
			{
				func_587("DPAD_CREW");
			}
			else
			{
				func_587("");
			}
			END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_585(var uParam0)
{
	return IS_BIT_SET(uParam0->f_33, 6);
}

bool func_586(var uParam0)
{
	return IS_BIT_SET(uParam0->f_33, 5);
}

void func_587(char* sParam0)
{
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_588(var uParam0)
{
	if (func_586(uParam0) && func_585(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_589(var uParam0, int iParam1)
{
	if (func_597(iParam1))
	{
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(121);
	}
	else if (func_593(iParam1))
	{
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(122);
	}
	else if (((IS_BIT_SET(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && IS_BIT_SET(Global_2424073[iParam1 /*421*/].f_411, 0))
	{
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(123);
	}
	else
	{
		if (func_590())
		{
			uParam0->f_36 = 0;
		}
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(uParam0->f_36);
	}
}

int func_590()
{
	if (NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_591() || func_94())
		{
			return 1;
		}
	}
	return 0;
}

int func_591()
{
	if (NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_94();
	}
	return func_592(Global_4456448.f_154360);
}

int func_592(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4990[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_593(int iParam0)
{
	if ((func_12(iParam0, 0, 1) && func_594()) && func_258(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_594()
{
	if (func_387(PLAYER_ID()) || func_596())
	{
		if (!func_595(PLAYER_ID(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_595(int iParam0, int iParam1)
{
	if (func_321(iParam0) == iParam1)
	{
		return func_456(iParam0);
	}
	return 0;
}

int func_596()
{
	switch (func_220(PLAYER_ID()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_597(int iParam0)
{
	if (func_590())
	{
		if (func_12(iParam0, 0, 1))
		{
			return func_90(iParam0);
		}
	}
	if ((func_12(iParam0, 0, 1) && func_594()) && func_260(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_598(char* sParam0)
{
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam0);
}

int func_599()
{
	int iVar0;
	
	if (Global_1574184)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_600()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574184)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_601(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_600() && iParam3 < func_599())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574184)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574403 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
		{
			if (BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, sVar1))
			{
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam3);
				if (IS_BIT_SET(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_598("");
				}
				else
				{
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_587(sParam16);
				}
				else
				{
					func_598(&(uParam2->f_1));
				}
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_598("");
				}
				else
				{
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(65);
				}
				if (iParam12 == 1)
				{
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
				}
				else
				{
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(-1);
				}
				if (func_621())
				{
					func_598("");
				}
				else if (uParam2->f_108 == 6 && !IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					ADD_TEXT_COMPONENT_INTEGER(iParam17);
					END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 5 && !IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					ADD_TEXT_COMPONENT_INTEGER(iParam17);
					END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 7 && !IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_TWO_INT");
					ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					ADD_TEXT_COMPONENT_INTEGER(iParam17);
					END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 8 && !IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
				{
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						ADD_TEXT_COMPONENT_INTEGER(iParam10);
					}
					ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_104));
					END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 9)
				{
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
					ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
					END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
						ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
						END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH");
						ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
						END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
					{
						func_587(&(uParam2->f_104));
					}
					else
					{
						func_598("");
					}
				}
				else if (iParam14 != -1)
				{
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
					END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (fParam13 != -1f)
				{
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
					ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (iParam10 != -1)
				{
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam10);
				}
				else
				{
					func_598("");
				}
				if (uParam2->f_108 == 6)
				{
					func_598("");
				}
				else
				{
					func_598(&sParam4);
				}
				func_589(uParam2, iParam0);
				if (iParam12 == 1 || IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_598("");
					func_598("");
				}
				else
				{
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam8);
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam8);
				}
				if (func_588(uParam2))
				{
					func_587("DPAD_FRIEND");
				}
				else if (func_586(uParam2))
				{
					func_587("DPAD_FRIEND");
				}
				else if (func_585(uParam2))
				{
					func_587("DPAD_CREW");
				}
				else
				{
					func_587("");
				}
				END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_602(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_603(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_387(iParam0)) && !func_106(iParam0))
	{
		iVar0 = func_66();
	}
	iVar1 = func_87(iParam0);
	if (!iVar1 == -1)
	{
		return func_85(iVar1);
	}
	return iVar0;
}

int func_604(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_605(iParam3))
	{
		*fParam1 = (func_286(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_602(iParam3))
	{
		*fParam1 = (func_286(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

int func_605(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_606(int iParam0)
{
	int iVar0;
	
	iVar0 = func_609(iParam0);
	if (iVar0 == -1)
	{
		func_607(iParam0, 1);
		return 0;
	}
	Global_1385294[iVar0 /*5*/].f_4 = 1;
	return Global_1385294[iVar0 /*5*/].f_2;
}

void func_607(int iParam0, bool bParam1)
{
	if (!func_12(iParam0, 0, 1))
	{
		return;
	}
	if (func_609(iParam0) != -1)
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
	if (func_608(iParam0))
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

int func_608(int iParam0)
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

int func_609(int iParam0)
{
	int iVar0;
	
	if (!func_12(iParam0, 0, 1))
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
			func_610(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_610(int iParam0)
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
	func_611(&(Global_1385294[iVar2 /*5*/]));
	Global_1385455 = (Global_1385455 - 1);
}

void func_611(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_102();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = 0xBA7F0B77D80A4EB7();
	}
}

struct<4> func_612(int iParam0)
{
	char cVar0[32];
	
	if (func_12(iParam0, 0, 1))
	{
		Global_2507671 = { func_137(iParam0) };
		if (IS_DURANGO_VERSION())
		{
			if (func_576(Global_2507671))
			{
				if (!_0xB57A49545BA53CE7(&Global_2507671))
				{
					return cVar0;
				}
			}
		}
		else if (!_0x72D918C99BCACC54(0))
		{
			return cVar0;
		}
		if (func_616(&Global_2507671))
		{
			Global_2507601 = { func_614(iParam0) };
			func_613(&Global_2507601, &cVar0);
		}
	}
	return cVar0;
}

void func_613(var uParam0, char* sParam1)
{
	_0xF45352426FF3A4F0(uParam0, 35, sParam1);
}

struct<35> func_614(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_615(iParam0))
	{
		return Global_1312905[PLAYER_ID() /*35*/];
	}
	Var0 = { func_137(iParam0) };
	NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var0);
	return Var1;
}

int func_615(int iParam0)
{
	if (iParam0 == PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_616(var uParam0)
{
	if (IS_PLAYER_ONLINE())
	{
		if (_NETWORK_PLAYER_IS_IN_CLAN() && _NETWORK_PLAYER_IS_IN_CLAN(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_617(int iParam0, int iParam1)
{
	if (iParam1 == 26)
	{
		if ((func_8(iParam0) || func_619(iParam0)) || func_7(iParam0))
		{
			return 0;
		}
	}
	if (!func_618(iParam0))
	{
		return 0;
	}
	if ((!func_626(iParam0) && Global_2424073[iParam0 /*421*/].f_236 == -1) && !func_625(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_618(int iParam0)
{
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_142, 22);
}

int func_619(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 10) || IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 9));
	}
	return 0;
}

int func_620(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_102())
	{
		return 0;
	}
	if (func_14(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (IS_BIT_SET(Global_1590446[iVar0 /*871*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_621()
{
	switch (func_220(PLAYER_ID()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_321(PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_106(PLAYER_ID()))
	{
		switch (func_220(PLAYER_ID()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_595(PLAYER_ID(), 236))
	{
		return 1;
	}
	return 0;
}

void func_622(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_12(INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = INT_TO_PLAYERINDEX(iVar0);
			if (!func_14(iVar1, 0))
			{
				if ((func_626(iVar1) || Global_2424073[iVar1 /*421*/].f_236 != -1) || func_625(iVar1))
				{
					if (func_623(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_623(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_102())
	{
		if (!bParam2)
		{
			if (func_624(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1628955[iParam0 /*614*/].f_11 != func_102())
		{
			return iParam1 == Global_1628955[iParam0 /*614*/].f_11;
		}
	}
	return 0;
}

int func_624(int iParam0, int iParam1)
{
	if (iParam1 != func_102())
	{
		if (iParam0 != func_102())
		{
			if (Global_1628955[iParam0 /*614*/].f_11 != func_102())
			{
				if (Global_1628955[iParam0 /*614*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_625(int iParam0)
{
	return Global_1590446[iParam0 /*871*/].f_196 != 0;
}

int func_626(int iParam0)
{
	if (func_12(iParam0, 0, 1))
	{
		if (func_12(PLAYER_ID(), 0, 1))
		{
			if (_0x3B39236746714134(iParam0, _0x3B39236746714134()) || func_220(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_627(int iParam0, int iParam1, int iParam2)
{
	if (HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT_EMPTY");
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam1);
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam2);
		END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_628(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1373497.f_2 == 0)
		{
			Global_1373497.f_2 = 1;
		}
	}
	else if (Global_1373497.f_2 == 1)
	{
		Global_1373497.f_2 = 0;
	}
}

void func_629()
{
	if (IS_BIT_SET(Global_2531497.f_4588, 1))
	{
		if (func_302())
		{
			func_289();
		}
	}
}

int func_630()
{
	if (IS_BIT_SET(Global_2531497.f_4588, 0) && func_302())
	{
		return 1;
	}
	if (IS_BIT_SET(Global_2531497.f_4588, 1) && func_302())
	{
		return 1;
	}
	return 0;
}

int func_631()
{
	if (func_302())
	{
		if (func_54(Global_2437549.f_2708[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_632()
{
	if (func_302())
	{
		if (func_67(Global_2437549.f_2708[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_633(int iParam0)
{
	if (Global_1373497.f_1 != Global_1373497)
	{
		Global_1373497.f_1 = Global_1373497;
	}
	if (Global_1373497 != iParam0)
	{
		Global_1373497 = iParam0;
	}
}

int func_634(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	char* sVar6;
	
	StringCopy(&Var0, "", 16);
	bVar3 = func_678(iParam1);
	if (iParam1 == 20)
	{
		bVar2 = true;
	}
	fVar4 = func_677();
	iVar5 = -1;
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_676())
		{
			if (func_675() > 0 && Global_1574184)
			{
				_0x25F87B30C382FCA7();
				_CLEAR_NOTIFICATIONS_POS(fVar4);
				HIDE_HUD_COMPONENT_THIS_FRAME(18);
				if (IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HIDE_HELP_TEXT_THIS_FRAME();
				}
				HIDE_HUD_COMPONENT_THIS_FRAME(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_664())
		{
			func_663(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (IS_BIT_SET(Global_2531497.f_4591, 26))
	{
		func_663(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_47(&(uParam2->f_19)))
	{
		if (func_675() == 1)
		{
			func_662(bVar3, iParam0, 0);
			func_2(&(uParam2->f_19), 0, 0);
			func_663(iParam0, uParam2, 0);
			SET_BIT(&(Global_2531497.f_4592), 5);
		}
	}
	if (func_47(&(uParam2->f_19)) || bParam5)
	{
		if (IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HIDE_HELP_TEXT_THIS_FRAME();
		}
		HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_1(&(uParam2->f_19), 10000, 0) || (func_675() == 0 && !bParam5))
		{
			func_663(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_661();
				if (iParam1 == 26 || iParam1 == 27)
				{
					_0x25F87B30C382FCA7();
				}
				HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!IS_BIT_SET(uParam2->f_33, 0))
			{
				if (bVar2 == 0)
				{
					func_661();
					if (iParam1 == 26 || iParam1 == 27)
					{
						_0x25F87B30C382FCA7();
					}
					HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				_CLEAR_NOTIFICATIONS_POS(fVar4);
				if (func_662(bVar3, iParam0, 0))
				{
					func_627(iParam0, 0, 0);
					sVar1 = func_659(iParam1, &(Global_4456448.f_154367), bParam4);
					Var0 = { func_657(iParam1) };
					if (bParam4)
					{
						func_654(iParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_648(iParam0, func_651(uParam2), func_649(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						sVar6 = func_642(uParam2);
						if (!IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar6 = sParam6;
						}
						func_640(iParam0, sVar6, func_641(), -1);
					}
					else if (func_590())
					{
						uParam2->f_34 = Global_1574183;
						func_654(iParam0, sVar1, &Var0, 1, -1, Global_1574183, 1);
					}
					else if (bVar2)
					{
						iVar5 = func_635(iParam1);
						uParam2->f_34 = Global_1574183;
						func_654(iParam0, sVar1, "", 0, iVar5, Global_1574183, 1);
					}
					else
					{
						iVar5 = func_635(iParam1);
						func_654(iParam0, sVar1, &Var0, 1, iVar5, -1, 1);
					}
					SET_BIT(&(uParam2->f_33), 0);
				}
			}
			if (IS_BIT_SET(uParam2->f_33, 0))
			{
				Global_1574182 = uParam3;
				Global_1574181 = 1;
				_CLEAR_NOTIFICATIONS_POS(fVar4);
				if (bVar2)
				{
					if (uParam2->f_34 != Global_1574183)
					{
						CLEAR_BIT(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_635(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_639())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 39:
			iVar0 = 22;
			break;
		
		case 0:
		case 30:
		case 29:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 25:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_638(PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_637(PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_636(PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_221())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_636(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 4;
}

bool func_637(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 7;
}

bool func_638(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 2;
}

bool func_639()
{
	return Global_4456448.f_1 == 0;
}

void func_640(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_587(sParam1);
		}
		else
		{
			BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_587("");
		if (iParam3 != -1)
		{
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam3);
		}
		END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_641()
{
	switch (func_220(PLAYER_ID()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_642(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_220(PLAYER_ID()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_644())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_257(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_257(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_643(Global_1628955[PLAYER_ID() /*614*/].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_643(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_644()
{
	return (func_647() && func_645(func_646()));
}

int func_645(int iParam0)
{
	return func_260(iParam0, 1);
}

int func_646()
{
	return Global_1628955[PLAYER_ID() /*614*/].f_11.f_35;
}

bool func_647()
{
	return Global_1590446[PLAYER_ID() /*871*/] == 148;
}

void func_648(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_587(sParam1);
		}
		else if (func_321(PLAYER_ID()) == 133)
		{
			BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C");
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_587("");
		if (iParam3 != -1)
		{
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam3);
		}
		END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_649(var uParam0)
{
	int iVar0;
	
	iVar0 = func_321(PLAYER_ID());
	if (func_650())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_320())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

bool func_650()
{
	return Global_1590319;
}

char* func_651(var uParam0)
{
	int iVar0;
	
	iVar0 = func_321(PLAYER_ID());
	if (func_650())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_653() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_653() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_320())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_652() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_652()
{
	return Global_2531497.f_4822;
}

int func_653()
{
	if (func_321(PLAYER_ID()) == 132)
	{
		return Global_2531497.f_4817;
	}
	return -1;
}

void func_654(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_598(sParam1);
		}
		else if (iParam5 != -1)
		{
			BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			ADD_TEXT_COMPONENT_INTEGER(iParam5);
			END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_587(sParam1);
		}
		if (func_676() && iParam6)
		{
			if (func_656())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			BEGIN_TEXT_COMMAND_SCALEFORM_STRING("LBD_DPD_CNT");
			ADD_TEXT_COMPONENT_INTEGER(iVar0);
			ADD_TEXT_COMPONENT_INTEGER(iVar1);
			END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_587(sParam2);
		}
		if (iParam4 != -1)
		{
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam4);
			if (func_655(PLAYER_ID()))
			{
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(166);
			}
			else if (func_64())
			{
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(220);
			}
		}
		END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_655(int iParam0)
{
	if (func_638(iParam0) || func_637(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_656()
{
	return Global_1574184;
}

struct<4> func_657(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_658(PLAYER_ID()) || func_636(PLAYER_ID()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4456448.f_40, 16);
			break;
	}
	if (func_590() && NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_40, 16);
	}
	return Var0;
}

bool func_658(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 5;
}

char* func_659(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_590() || IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		uVar0 = func_660();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 24)
	{
		if (Global_1574422 == 0)
		{
			Global_1574422 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (Global_1574422 == 1)
		{
			Global_1574422 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574422 == 0)
		{
			Global_1574422 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 30:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 25:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 21:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_660()
{
	if (NETWORK_SESSION_IS_CLOSED_FRIENDS())
	{
		return "HUD_LBD_FMF";
	}
	if (NETWORK_SESSION_IS_CLOSED_CREW())
	{
		return "HUD_LBD_FMC";
	}
	if (NETWORK_SESSION_IS_SOLO())
	{
		return "HUD_LBD_FMS";
	}
	if (NETWORK_SESSION_IS_PRIVATE())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_661()
{
	Global_42316 = 1;
}

bool func_662(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		*iParam1 = 0x67D02A194A2FC2BD("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = 0x67D02A194A2FC2BD("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = 0x67D02A194A2FC2BD("mp_matchmaking_card");
	}
	return HAS_SCALEFORM_MOVIE_LOADED(*iParam1);
}

void func_663(int iParam0, var uParam1, bool bParam2)
{
	CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1574182 = 0;
	func_580();
	Global_1574181 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_47(&(uParam1->f_19)))
		{
			func_46(&(uParam1->f_19));
			CLEAR_BIT(&(Global_2531497.f_4592), 5);
		}
	}
	if (HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	}
	if (IS_BIT_SET(uParam1->f_33, 0))
	{
		CLEAR_BIT(&(uParam1->f_33), 0);
	}
	_CLEAR_NOTIFICATIONS_POS(0f);
}

int func_664()
{
	if (func_674())
	{
		return 0;
	}
	if (func_566())
	{
		return 0;
	}
	if (!func_672())
	{
		return 0;
	}
	if (!func_554())
	{
		return 0;
	}
	if (func_671(8, -1))
	{
		return 0;
	}
	if (func_675() == 2)
	{
		return 0;
	}
	if (Global_2531497.f_4543)
	{
		return 0;
	}
	if (func_315())
	{
		return 0;
	}
	else if (!func_350(PLAYER_ID(), 1, 0) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_670(1) || func_668(1)) || Global_22211.f_124) || Global_22211)
	{
		return 0;
	}
	if (IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_667() && Global_1695601 == 2)
	{
		return 0;
	}
	if (func_100(PLAYER_ID()) && !func_667())
	{
		return 0;
	}
	if (Global_1662552)
	{
		return 0;
	}
	if (Global_1662557)
	{
		return 0;
	}
	if (func_666(0))
	{
		return 0;
	}
	if (IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_24, 4))
	{
		return 0;
	}
	if (Global_1366560)
	{
		return 0;
	}
	if ((Global_1688874.f_705.f_5 || Global_1691685.f_705.f_5) || Global_1687917.f_705.f_5)
	{
		return 0;
	}
	if ((Global_1696566.f_711.f_5 || Global_1696566.f_731.f_711.f_5) || Global_1696566.f_1469.f_711.f_5)
	{
		return 0;
	}
	if (func_665(PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_1366595 || Global_1366596) || Global_1366597)
	{
		return 0;
	}
	return 1;
}

bool func_665(int iParam0)
{
	if (iParam0 == func_102())
	{
		return 0;
	}
	return IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309.f_4, 6);
}

bool func_666(int iParam0)
{
	return IS_BIT_SET(Global_2531497.f_4898.f_43, iParam0);
}

bool func_667()
{
	return (IS_BIT_SET(Global_4456448.f_30, 12) && IS_BIT_SET(Global_1695602, 0));
}

int func_668(bool bParam0)
{
	if (_0xFC859E2374407556())
	{
		if (!IS_PED_INJURED(IS_PED_INJURED()))
		{
			if (func_669(PLAYER_PED_ID()))
			{
				if (IS_CONTROL_PRESSED(0, 25) || IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22211.f_130)
	{
		return 0;
	}
	if (IS_CONTROL_PRESSED(0, 19) || (!bParam0 && IS_CONTROL_PRESSED(0, 19)))
	{
		return 1;
	}
	if (IS_PC_VERSION())
	{
		if (((IS_CONTROL_PRESSED(0, 166) || IS_CONTROL_PRESSED(0, 167)) || IS_CONTROL_PRESSED(0, 168)) || IS_CONTROL_PRESSED(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((IS_DISABLED_CONTROL_PRESSED(0, 166) || IS_DISABLED_CONTROL_PRESSED(0, 167)) || IS_DISABLED_CONTROL_PRESSED(0, 168)) || IS_DISABLED_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_669(int iParam0)
{
	int iVar0;
	
	if (IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!IS_PED_INJURED(iParam0))
		{
			GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_670(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

bool func_671(int iParam0, int iParam1)
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

int func_672()
{
	if (func_673())
	{
		return 1;
	}
	if (IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (IS_SCREEN_FADING_OUT() || IS_SCREEN_FADING_OUT())
	{
		return 0;
	}
	if (IS_FRONTEND_FADING())
	{
		return 0;
	}
	return 1;
}

bool func_673()
{
	return Global_1312439;
}

bool func_674()
{
	return GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

int func_675()
{
	return Global_1373500.f_68;
}

int func_676()
{
	if (Global_1574183 > 16)
	{
		return 1;
	}
	return 0;
}

float func_677()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_678(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 26:
		case 27:
		case 39:
			return 1;
		
		default:
	}
	return 0;
}

int func_679()
{
	if (func_682())
	{
		return 1;
	}
	if (func_7(PLAYER_ID()))
	{
		return 0;
	}
	if (func_650())
	{
		return 1;
	}
	if (func_387(PLAYER_ID()))
	{
		switch (func_321(PLAYER_ID()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_680(PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_680(PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_680(PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_680(int iParam0)
{
	return IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 4);
}

int func_681(int iParam0)
{
	if (iParam0 == 27)
	{
		if ((func_387(PLAYER_ID()) && !func_106(PLAYER_ID())) && !func_595(PLAYER_ID(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_112(PLAYER_ID(), 0) && func_106(PLAYER_ID()))
		{
			return 1;
		}
		if (func_559(PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_682()
{
	if (func_683(PLAYER_ID()))
	{
		return Global_1319097;
	}
	return 0;
}

int func_683(int iParam0)
{
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_14(iParam0, 0))
		{
			return NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
		}
	}
	return 0;
}

void func_684()
{
	if (Local_1537[PARTICIPANT_ID_TO_INT() /*12*/].f_3 == 3)
	{
		if (!IS_BIT_SET(iLocal_142, 8))
		{
			if ((!func_7(PLAYER_ID()) && !func_162(PLAYER_ID())) && !func_399(PLAYER_ID()))
			{
				func_398();
			}
		}
		else if (!IS_BIT_SET(iLocal_142, 9))
		{
			if ((func_7(PLAYER_ID()) || func_162(PLAYER_ID())) || func_399(PLAYER_ID()))
			{
				0xA761D4AC6115623D();
				Local_1537[PARTICIPANT_ID_TO_INT() /*12*/].f_4 = 0;
				SET_BIT(&iLocal_142, 9);
			}
		}
	}
}

void func_685()
{
	int iVar0;
	
	if (NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(iLocal_146)))
	{
		iVar0 = NETWORK_GET_PLAYER_INDEX(NETWORK_GET_PLAYER_INDEX(iLocal_146));
		if (NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			func_686(iVar0, 2);
		}
	}
	iLocal_146++;
	if (iLocal_146 >= _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		iLocal_146 = 0;
	}
}

void func_686(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (IS_BIT_SET(Global_1574647.f_1, 0))
	{
		return;
	}
	if (func_47(&(Global_1574647.f_18)))
	{
		return;
	}
	if (IS_BIT_SET(Global_1574647.f_2, iParam0))
	{
		if (Global_1574647 < iParam1 && IS_BIT_SET(Global_1574647.f_1, 1))
		{
			SET_BIT(&(Global_1574647.f_1), 0);
			return;
		}
		if (Global_1574647 != 0)
		{
			SET_BIT(&(Global_1574647.f_1), 1);
		}
		Global_1574647 = 0;
		Global_1574647.f_2 = 0;
	}
	SET_BIT(&(Global_1574647.f_2), iParam0);
	bVar0 = true;
	if (func_8(iParam0))
	{
		bVar0 = false;
	}
	if (func_687(iParam0))
	{
		bVar0 = false;
	}
	if (func_14(iParam0, 0))
	{
		bVar0 = false;
	}
	if (func_7(iParam0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		Global_1574647++;
	}
}

bool func_687(int iParam0)
{
	return IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 10);
}

void func_688(int iParam0, int iParam1)
{
	Local_1537[iParam0 /*12*/] = iParam1;
}

int func_689()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_192.f_534[iVar0 /*42*/].f_1 = func_102();
		iVar0++;
	}
	return 1;
}

int func_690()
{
	return Local_171;
}

int func_691(int iParam0)
{
	return Local_1537[iParam0 /*12*/];
}

void func_692()
{
	if (IS_BIT_SET(Global_1574647.f_1, 6))
	{
		func_715();
		CLEAR_BIT(&(Global_1574647.f_1), 6);
	}
	if (!IS_BIT_SET(Global_1574647.f_1, 7))
	{
		if (IS_BIT_SET(Global_1574647.f_1, 4) || IS_BIT_SET(Global_1574647.f_1, 16))
		{
			if (((!IS_RADAR_HIDDEN() && !IS_RADAR_HIDDEN()) && !func_302()) && func_12(IS_RADAR_HIDDEN(), 1, 1))
			{
				SET_BIT(&(Global_1574647.f_1), 7);
				func_296("FME_PASINT", 30000);
				func_295(1);
			}
		}
		else if (IS_BIT_SET(Global_1574647.f_1, 17))
		{
			if (func_165() && !func_164())
			{
				CLEAR_BIT(&(Global_1574647.f_1), 17);
				SET_BIT(&(Global_1574647.f_1), 16);
			}
		}
	}
	if (!IS_BIT_SET(Global_1574647.f_1, 23))
	{
		if (((((!IS_RADAR_HIDDEN() && !IS_RADAR_HIDDEN(Global_2531497.f_795, 2)) && func_12(IS_RADAR_HIDDEN(), 1, 1)) && !Global_73784) && !Global_58652) && !IS_RADAR_HIDDEN())
		{
			if (func_713())
			{
				func_296("AMEV_GA_RP", -1);
				if (func_220(PLAYER_ID()) != 200)
				{
					func_295(1);
				}
				SET_BIT(&(Global_1574647.f_1), 23);
			}
		}
	}
	if (IS_PAUSE_MENU_ACTIVE() && IS_PAUSE_MENU_ACTIVE() == 15)
	{
		if (func_412(PLAYER_ID()))
		{
			if (!_0x84698AB38D0C6636(1344549371))
			{
				PAUSE_MENU_ACTIVATE_CONTEXT(1344549371);
			}
		}
		else if (_0x84698AB38D0C6636(1344549371))
		{
			OBJECT_DECAL_TOGGLE(1344549371);
		}
	}
	if (IS_BIT_SET(Global_1574647.f_1, 9))
	{
		if (((((!IS_RADAR_HIDDEN() && !IS_RADAR_HIDDEN()) && !func_302()) && func_12(IS_RADAR_HIDDEN(), 1, 1)) && !func_163(IS_RADAR_HIDDEN(), 21)) && !func_163(IS_RADAR_HIDDEN(), 25))
		{
			CLEAR_BIT(&(Global_1574647.f_1), 9);
			func_712(0);
			func_296("FME_TBL00", -1);
			func_295(1);
		}
	}
	if (func_387(PLAYER_ID()))
	{
		if (!IS_BIT_SET(Global_1574647.f_1, 18))
		{
			if ((func_163(PLAYER_ID(), 21) && PLAYER_ID(Global_1574647.f_1, 20)) && !PLAYER_ID(Global_1574647.f_1, 19))
			{
				SET_BIT(&(Global_1574647.f_1), 18);
			}
		}
		else if (IS_BIT_SET(Global_1574647.f_1, 18))
		{
			if (((((!IS_RADAR_HIDDEN() && !IS_RADAR_HIDDEN()) && !func_302()) && func_12(IS_RADAR_HIDDEN(), 1, 1)) && IS_RADAR_HIDDEN()) && !Global_2531497.f_4831)
			{
				CLEAR_BIT(&(Global_1574647.f_1), 18);
				SET_BIT(&(Global_1574647.f_1), 19);
				func_296("AMTT_RPAS", -1);
				func_295(1);
			}
		}
	}
	if (((((func_387(PLAYER_ID()) && !func_8(PLAYER_ID())) && func_321(PLAYER_ID()) != 146) && !func_7(PLAYER_ID())) && !func_162(PLAYER_ID())) && !func_702())
	{
		if (func_411(func_321(PLAYER_ID())))
		{
			0xFAC75988A7D078D3(0xFAC75988A7D078D3());
		}
		if (!IS_BIT_SET(Global_1574647.f_1, 22))
		{
			SET_BIT(&(Global_1574647.f_1), 22);
		}
		if (func_456(PLAYER_ID()) || func_405())
		{
			if (!IS_BIT_SET(Global_1574647.f_1, 10))
			{
				if (func_701(func_321(PLAYER_ID())))
				{
					if (func_264(0) && !Global_2391045)
					{
						SET_BIT(&(Global_1574647.f_1), 9);
					}
					if (!Global_2391045)
					{
						func_409(1);
						SET_BIT(&(Global_1574647.f_1), 14);
					}
				}
				SET_BIT(&(Global_1574647.f_1), 10);
			}
		}
		if (func_412(PLAYER_ID()))
		{
			if (!IS_BIT_SET(Global_1574647.f_1, 11))
			{
				if (!Global_98721.f_8)
				{
					SET_BIT(&(Global_1574647.f_1), 12);
					func_407(1);
				}
				if (!func_700())
				{
					SET_BIT(&(Global_1574647.f_1), 13);
					func_406();
				}
				if (!Global_2391045)
				{
					SET_BIT(&(Global_1574647.f_1), 14);
					if (func_264(0) && !Global_2391045)
					{
						SET_BIT(&(Global_1574647.f_1), 9);
					}
					func_409(1);
				}
				SET_BIT(&(Global_1574647.f_1), 11);
			}
		}
		else
		{
			func_698(0);
		}
	}
	else
	{
		func_698(1);
	}
	func_693();
	if (func_404(func_321(PLAYER_ID())) && !PLAYER_ID(Global_1574647.f_1, 21))
	{
		SET_BIT(&(Global_1574647.f_1), 21);
	}
	if (((func_165() && !func_164()) || func_163(PLAYER_ID(), 21)) || func_163(PLAYER_ID(), 25))
	{
		if (!IS_BIT_SET(Global_1628955[IS_BIT_SET() /*614*/].f_1, 10))
		{
			SET_BIT(&(Global_1628955[SET_BIT() /*614*/].f_1), 10);
		}
	}
	else if (IS_BIT_SET(Global_1628955[IS_BIT_SET() /*614*/].f_1, 10))
	{
		CLEAR_BIT(&(Global_1628955[CLEAR_BIT() /*614*/].f_1), 10);
	}
}

void func_693()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_302())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_543(iVar2))
			{
				iVar0 = iVar2;
				if (iVar0 == 63 || iVar0 >= 81)
				{
					iVar1 = 15000;
				}
				else
				{
					iVar1 = 3000;
				}
				if (IS_BIT_SET(Global_1574647.f_1, 26))
				{
					CLEAR_BIT(&(Global_1574647.f_1), 26);
				}
				func_694(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!IS_BIT_SET(Global_1574647.f_1, 26))
	{
		func_46(&(Global_1574647.f_22));
		SET_BIT(&(Global_1574647.f_1), 26);
	}
}

void func_694(int iParam0, int iParam1)
{
	if (!func_47(&(Global_1574647.f_22)))
	{
		func_2(&(Global_1574647.f_22), 0, 0);
	}
	else if (func_1(&(Global_1574647.f_22), iParam1, 0))
	{
		if (func_675() > 0)
		{
			func_697(iParam0);
			if (func_293("AMEV_LBD_HELP"))
			{
				CLEAR_HELP(1);
			}
			func_46(&(Global_1574647.f_22));
		}
	}
	else
	{
		func_696(0);
		func_695();
	}
}

void func_695()
{
	Global_2531497.f_4532 = 0;
}

void func_696(int iParam0)
{
	Global_1373500.f_68 = iParam0;
}

void func_697(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2437549.f_2708[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
			func_103(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_698(int iParam0)
{
	if ((IS_BIT_SET(Global_1574647.f_1, 11) || (IS_BIT_SET(Global_1574647.f_1, 10) && iParam0)) || (IS_BIT_SET(Global_1574647.f_1, 22) && iParam0))
	{
		if (IS_BIT_SET(Global_1574647.f_1, 12))
		{
			CLEAR_BIT(&(Global_1574647.f_1), 12);
			func_407(0);
		}
		if (IS_BIT_SET(Global_1574647.f_1, 13))
		{
			CLEAR_BIT(&(Global_1574647.f_1), 13);
			func_699();
		}
		if (IS_BIT_SET(Global_1574647.f_1, 14) && !func_112(IS_BIT_SET(), 0))
		{
			CLEAR_BIT(&(Global_1574647.f_1), 14);
			func_409(0);
		}
		CLEAR_BIT(&(Global_1574647.f_1), 11);
		CLEAR_BIT(&(Global_1574647.f_1), 10);
		CLEAR_BIT(&(Global_1574647.f_1), 22);
	}
}

void func_699()
{
	CLEAR_BIT(&(Global_2531497.f_4736), 0);
}

bool func_700()
{
	return IS_BIT_SET(Global_2531497.f_4736, 0);
}

int func_701(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 132:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
			return 1;
		
		case 131:
		case 146:
			return func_412(PLAYER_ID());
		
		case 133:
			return (func_405() || func_5(func_320()));
		
		default:
	}
	return 0;
}

int func_702()
{
	if (((((((((func_711() || func_710()) || func_709()) || func_315()) || (func_708() && !NETWORK_IS_ACTIVITY_SESSION())) || (func_705() && !func_704())) || Global_2394733) || Global_2394733.f_1 != 0) || Global_2394807 != 0) || (func_703() == 2 && !NETWORK_IS_ACTIVITY_SESSION()))
	{
		return 1;
	}
	return 0;
}

int func_703()
{
	return Global_968397;
}

bool func_704()
{
	return IS_BIT_SET(Global_2448961.f_2, 27);
}

int func_705()
{
	if (func_707() || func_706())
	{
		return Global_1590446[PLAYER_ID() /*871*/].f_98 == 8;
	}
	return 0;
}

var func_706()
{
	return Global_2448961.f_635;
}

bool func_707()
{
	return IS_BIT_SET(Global_2448961.f_2, 11);
}

bool func_708()
{
	return IS_BIT_SET(Global_2448961, 5);
}

bool func_709()
{
	return IS_BIT_SET(Global_2448961, 2);
}

bool func_710()
{
	return IS_BIT_SET(Global_2448961, 20);
}

bool func_711()
{
	return Global_2448961.f_598;
}

void func_712(int iParam0)
{
	int iVar0;
	
	iVar0 = func_208(2534, -1, 0);
	if (iParam0 == 0)
	{
		if (!IS_BIT_SET(iVar0, 0))
		{
			SET_BIT(&iVar0, 0);
		}
		else if (!IS_BIT_SET(iVar0, 1))
		{
			SET_BIT(&iVar0, 1);
		}
		else if (!IS_BIT_SET(iVar0, 2))
		{
			SET_BIT(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!IS_BIT_SET(iVar0, 3))
		{
			SET_BIT(&iVar0, 3);
		}
		else if (!IS_BIT_SET(iVar0, 4))
		{
			SET_BIT(&iVar0, 4);
		}
		else if (!IS_BIT_SET(iVar0, 5))
		{
			SET_BIT(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!IS_BIT_SET(iVar0, 6))
		{
			SET_BIT(&iVar0, 6);
		}
		else if (!IS_BIT_SET(iVar0, 7))
		{
			SET_BIT(&iVar0, 7);
		}
		else if (!IS_BIT_SET(iVar0, 8))
		{
			SET_BIT(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!IS_BIT_SET(iVar0, 9))
		{
			SET_BIT(&iVar0, 9);
		}
		else if (!IS_BIT_SET(iVar0, 10))
		{
			SET_BIT(&iVar0, 10);
		}
		else if (!IS_BIT_SET(iVar0, 11))
		{
			SET_BIT(&iVar0, 11);
		}
	}
	func_198(2534, iVar0, -1, 1, 0);
}

int func_713()
{
	int iVar0;
	
	if (!func_47(&(Global_1574647.f_15)))
	{
		func_2(&(Global_1574647.f_15), 0, 0);
		Global_1574647.f_17 = 0;
	}
	else if (func_1(&(Global_1574647.f_15), 1000, 0))
	{
		if (NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(Global_1574647.f_17)))
		{
			iVar0 = NETWORK_GET_PLAYER_INDEX(NETWORK_GET_PLAYER_INDEX(Global_1574647.f_17));
			if (NETWORK_IS_PLAYER_ACTIVE(iVar0))
			{
				if (func_12(iVar0, 1, 1) && func_714(iVar0, 6))
				{
					if (vdist(func_38(PLAYER_ID()), func_38(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1574647.f_17++;
		if (Global_1574647.f_17 >= 32)
		{
			Global_1574647.f_17 = 0;
			func_46(&(Global_1574647.f_15));
		}
	}
	return 0;
}

int func_714(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312448 != 0)
	{
		return 0;
	}
	if (!func_202(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1590446[iVar0 /*871*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_715()
{
	SET_MAX_WANTED_LEVEL(5);
	func_717();
	SET_WANTED_LEVEL_MULTIPLIER(1f);
	CLEAR_BIT(&(Global_1574647.f_1), 8);
	func_716();
}

void func_716()
{
	if (Global_1672277)
	{
		if (IS_BIT_SET(Global_1672278, 0))
		{
			CLEAR_BIT(&Global_2540191, 0);
		}
		if (IS_BIT_SET(Global_1672278, 1))
		{
			CLEAR_BIT(&Global_2540191, 1);
		}
		if (IS_BIT_SET(Global_1672278, 5))
		{
			CLEAR_BIT(&Global_2540191, 5);
		}
		if (_DOES_DOOR_EXIST(-355737150))
		{
			_SET_DOOR_ACCELERATION_LIMIT(-355737150, 1, false, false);
		}
		if (_DOES_DOOR_EXIST(-580979506))
		{
			_SET_DOOR_ACCELERATION_LIMIT(-580979506, 1, false, false);
		}
		if (_DOES_DOOR_EXIST(-1426452475))
		{
			_SET_DOOR_ACCELERATION_LIMIT(-1426452475, 1, false, false);
		}
		if (_DOES_DOOR_EXIST(745417724))
		{
			_SET_DOOR_ACCELERATION_LIMIT(745417724, 1, false, false);
		}
		if (_DOES_DOOR_EXIST(-1305304906))
		{
			_SET_DOOR_ACCELERATION_LIMIT(-1305304906, 1, false, false);
		}
		if (_DOES_DOOR_EXIST(-1543175077))
		{
			_SET_DOOR_ACCELERATION_LIMIT(-1543175077, 1, false, false);
		}
		if (_DOES_DOOR_EXIST(-811770997))
		{
			_SET_DOOR_ACCELERATION_LIMIT(-811770997, 1, false, false);
		}
		Global_1672278 = 0;
	}
	Global_1672277 = 0;
}

void func_717()
{
	if (IS_THREAD_ACTIVE(Global_2531497.f_4894))
	{
		if (!Global_2531497.f_4894 == GET_ID_OF_THIS_THREAD() && Global_2531497.f_4893 < 1f)
		{
			return;
		}
	}
	Global_2531497.f_4894 = -1;
	Global_2531497.f_4893 = 1f;
}

int func_718()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_2531497.f_4734)
	{
		return 0;
	}
	if ((!func_47(&(Local_171.f_39)) && !func_47(&(Local_171.f_41))) && !func_47(&(Local_171.f_43)))
	{
		return 0;
	}
	iVar2 = 0xBA7F0B77D80A4EB7();
	if (func_47(&(Local_171.f_41)))
	{
		iVar0 = func_719(&iVar2, &(Local_171.f_41));
		iVar1 = 20000;
	}
	else if (func_47(&(Local_171.f_39)))
	{
		iVar0 = func_719(&iVar2, &(Local_171.f_39));
		iVar1 = func_28(0);
	}
	else if (func_47(&(Local_171.f_43)))
	{
		iVar0 = func_719(&iVar2, &(Local_171.f_43));
		iVar1 = func_29();
	}
	iVar1 = (iVar1 + 300000);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_719(int iParam0, var uParam1)
{
	return ABSI(ABSI(*iParam0, *uParam1));
}

int func_720()
{
	if (func_721())
	{
		return 1;
	}
	return 0;
}

bool func_721()
{
	return Global_1574647.f_24;
}

int func_722()
{
	var uVar0;
	
	func_726(&uVar0);
	if (Global_1312850 == 0)
	{
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_725())
	{
		return 1;
	}
	if (Global_2461241)
	{
		return 1;
	}
	if (func_724())
	{
		return 1;
	}
	if (func_723(159))
	{
		if (!func_711())
		{
			return 1;
		}
	}
	if (func_723(157))
	{
		return 1;
	}
	if (!NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_414() != 0)
	{
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_414()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_723(int iParam0)
{
	if (GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_724()
{
	return Global_2458999;
}

bool func_725()
{
	return Global_2448961.f_593;
}

void func_726(var uParam0)
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
					func_727(iVar0);
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

void func_727(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_12(vVar0.y, 1, 1))
		{
			iVar1 = GET_PLAYER_PED(vVar0.y);
			if (DOES_ENTITY_EXIST(iVar1))
			{
				if (IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && IS_VEHICLE_WINDOW_INTACT())
					{
						if (func_728(iVar2, &bVar3))
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

int func_728(int iParam0, var uParam1)
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

void func_729()
{
	wait(0);
}

void func_730()
{
	int iVar0;
	
	if (func_722())
	{
		Local_1538.f_5 = 5;
	}
	else if (IS_BIT_SET(Local_171.f_2, 0))
	{
		Local_1538.f_5 = 6;
	}
	else if (func_20(0))
	{
		Local_1538.f_5 = 1;
	}
	else
	{
		Local_1538.f_5 = 2;
	}
	Local_1538 = Local_171.f_52;
	Local_1538.f_1 = Local_171.f_53;
	Local_1538.f_4 = Local_171.f_66;
	Local_1538.f_3 = Local_171.f_51;
	Local_1538.f_10 = (0xF12E6CD06C73D69E() - Local_1538.f_9);
	if (!Global_262145.f_11500)
	{
		if (Local_1538.f_6 > 0)
		{
		}
	}
	if (func_18())
	{
		iVar0 = 1;
	}
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (PARTICIPANT_ID_TO_INT() != -1)
		{
			func_766(Local_1538, Local_171.f_3, Local_1537[PARTICIPANT_ID_TO_INT() /*12*/].f_4, iVar0, -1, -1, -1);
		}
	}
	if (IS_BIT_SET(iLocal_142, 4))
	{
		STOP_SOUND(iLocal_150);
		CLEAR_BIT(&iLocal_142, 4);
	}
	RELEASE_SOUND_ID(iLocal_150);
	RELEASE_SOUND_ID(iLocal_151);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if ((IS_BIT_SET(iLocal_167, iVar0) && iLocal_168[iVar0] != -1) && !IS_BIT_SET(iLocal_168[iVar0]))
		{
			STOP_SOUND(iLocal_168[iVar0]);
			RELEASE_SOUND_ID(iLocal_168[iVar0]);
		}
		iVar0++;
	}
	func_395();
	func_473(1, 1);
	0x26D99D5A82FD18E8(0);
	func_545(0);
	func_402(Local_171.f_3, 0);
	func_731(133, 0, Local_171.f_37 == 6);
	func_401(23, 0);
	if (func_307() >= 0f)
	{
		_SET_MINIMAP_ATTITUDE_INDICATOR_LEVEL(0f, 0, 21);
	}
	if (!IS_BIT_SET(iLocal_142, 9))
	{
		0xA761D4AC6115623D();
	}
	TERMINATE_THIS_THREAD();
}

void func_731(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (PLAYER_ID() != -1)
	{
		if (IS_BIT_SET(Global_1628955[IS_BIT_SET() /*614*/].f_1, 13))
		{
			CLEAR_BIT(&(Global_1628955[CLEAR_BIT() /*614*/].f_1), 13);
		}
		if (IS_BIT_SET(Global_1628955[IS_BIT_SET() /*614*/].f_1, 14))
		{
			CLEAR_BIT(&(Global_1628955[CLEAR_BIT() /*614*/].f_1), 14);
		}
	}
	if (IS_BIT_SET(Global_1574647.f_1, 21))
	{
		CLEAR_BIT(&(Global_1574647.f_1), 21);
	}
	func_762();
	SET_AUDIO_FLAG("DisableFlightMusic", 0);
	SET_AUDIO_FLAG("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_761(func_321(PLAYER_ID()));
		func_401(func_421(iParam0), 0);
	}
	else
	{
		if ((bParam2 && PLAYER_ID() != -1) && func_760(PLAYER_ID()) >= 12)
		{
			func_759(2546, -1);
			iVar1 = func_208(2546, -1, 0);
			if (iVar1 == 2)
			{
				SET_BIT(&Global_1574673, 0);
			}
			else if (iVar1 == 4)
			{
				SET_BIT(&Global_1574673, 1);
			}
			else if (iVar1 == 6)
			{
				SET_BIT(&Global_1574673, 2);
			}
			else if (iVar1 == 8)
			{
				SET_BIT(&Global_1574673, 3);
			}
			else if (iVar1 == 10)
			{
				SET_BIT(&Global_1574673, 4);
			}
			else if (iVar1 == 12)
			{
				SET_BIT(&Global_1574673, 5);
			}
		}
		func_758();
		func_757();
		func_756();
		if ((!func_108(PLAYER_ID()) && !func_301(PLAYER_ID())) && !func_451())
		{
			func_740();
		}
		func_739();
		if (!IS_BIT_SET(Global_1674852.f_3, 0) && !IS_BIT_SET(Global_1674852.f_3, 1))
		{
			func_715();
		}
		func_738();
		CLEAR_BIT(&(Global_2531497.f_1746), 2);
		func_737();
		func_167();
	}
	if (_0x84698AB38D0C6636(1344549371))
	{
		OBJECT_DECAL_TOGGLE(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if (((PLAYER_ID() != -1 && !func_163(PLAYER_ID(), 21)) && !func_163(PLAYER_ID(), 25)) && !func_112(PLAYER_ID(), 0))
		{
			func_409(0);
			func_407(0);
			if (!bParam1)
			{
				func_736();
			}
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_50(26, -1))
		{
			Global_2461173 = -1;
			func_48(26, -1);
		}
	}
	if (!func_732())
	{
		Global_2507562 = 1;
	}
}

int func_732()
{
	if ((((((!func_655(PLAYER_ID()) && !func_636(PLAYER_ID())) && func_321(PLAYER_ID()) != 146) && !func_735()) && !func_734()) && !func_733(Global_4456448.f_190930)) && !func_92())
	{
		return 0;
	}
	return 1;
}

bool func_733(int iParam0)
{
	return iParam0 == 57;
}

int func_734()
{
	if (Global_4456448.f_154360 == Global_262145.f_9596)
	{
		return 1;
	}
	return 0;
}

int func_735()
{
	if ((Global_4456448 == 0 && NETWORK_IS_ACTIVITY_SESSION()) && (((((((Global_4456448.f_5 != 0 || Global_4456448.f_190930 > 0) || NETWORK_IS_ACTIVITY_SESSION(Global_4456448.f_4, 15)) || NETWORK_IS_ACTIVITY_SESSION(Global_4456448.f_4, 18)) || NETWORK_IS_ACTIVITY_SESSION(Global_4456448.f_4, 19)) || NETWORK_IS_ACTIVITY_SESSION(Global_4456448.f_4, 29)) || NETWORK_IS_ACTIVITY_SESSION(Global_4456448.f_4, 28)) || NETWORK_IS_ACTIVITY_SESSION(Global_4456448.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_736()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (IS_BIT_SET(Global_2359721[iVar0 /*26*/].f_12, 11))
		{
			if (IS_BIT_SET(Global_2359721[iVar0 /*26*/].f_13, 26))
			{
				CLEAR_BIT(&(Global_2359721[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_737()
{
	if (IS_BIT_SET(Global_2531497.f_4735, 1))
	{
		CLEAR_BIT(&(Global_2531497.f_4735), 1);
	}
	if (Global_2531497.f_4735 > 0)
	{
		TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
		TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
		STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
		SET_USER_RADIO_CONTROL_ENABLED(1);
		Global_2531497.f_4735 = 0;
		SET_AUDIO_FLAG("DisableFlightMusic", 0);
		SET_AUDIO_FLAG("WantedMusicDisabled", 0);
		SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
		if (!ARE_STRINGS_EQUAL(ARE_STRINGS_EQUAL(), "am_pi_menu"))
		{
			if (Global_2531497.f_4745 > -1)
			{
				RELEASE_SOUND_ID(Global_2531497.f_4745);
				Global_2531497.f_4745 = -1;
			}
		}
	}
}

void func_738()
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1574647 = { Var0 };
}

void func_739()
{
	var uVar0;
	
	Global_1319097 = uVar0;
}

void func_740()
{
	0x213AEB2B90CBA7AC(&(Global_2405071.f_24), &Global_2409324, 2);
	0x213AEB2B90CBA7AC(&(Global_2405071.f_26), &Global_2409326, 19);
	func_754();
	func_743(1, 1, 0);
	func_741();
}

void func_741()
{
	func_742(0, 0);
}

void func_742(int iParam0, int iParam1)
{
	Global_2405071.f_22 = iParam0;
	Global_2405071.f_23 = iParam1;
}

void func_743(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		0x213AEB2B90CBA7AC(&(Global_2405071.f_45), &Global_2409345, 318);
	}
	else
	{
		Global_2405071.f_45 = { Global_2409345 };
		Global_2405071.f_45.f_49 = { Global_2409345.f_49 };
		Global_2405071.f_45.f_52 = Global_2409345.f_52;
		Global_2405071.f_45.f_53 = Global_2409345.f_53;
	}
	if (bParam0)
	{
		func_753();
	}
	if (!bParam2)
	{
		func_745(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_744(0);
	func_170();
}

void func_744(bool bParam0)
{
	if (bParam0)
	{
		Global_2405071.f_703 = 0;
	}
	else
	{
		Global_2405071.f_703 = 1;
	}
}

void func_745(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_752())
		{
			func_751();
		}
		Global_2405071.f_704.f_518 = GET_ID_OF_THIS_THREAD();
		Global_2405071.f_704.f_504 = iParam1;
		Global_2405071.f_704.f_505 = iParam2;
		Global_2405071.f_704.f_506 = iParam10;
		func_749();
		func_449(8, 0, 0, 0, 0);
		Global_2405071.f_704.f_507 = iParam11;
		Global_2405071.f_704.f_512 = iParam3;
		Global_2405071.f_704.f_513 = iParam4;
		Global_2405071.f_704.f_510 = iParam5;
		Global_2405071.f_704.f_511 = iParam6;
		Global_2405071.f_704.f_514 = iParam7;
		Global_2405071.f_704.f_515 = iParam8;
		Global_2405071.f_704.f_516 = iParam9;
		Global_2405071.f_704.f_517 = iParam14;
		Global_2405071.f_704.f_508 = iParam12;
		Global_2405071.f_704.f_509 = iParam13;
		Global_2405071.f_1743 = 1;
	}
	else
	{
		func_746();
	}
}

void func_746()
{
	if (func_752() && !func_748())
	{
		func_751();
	}
	if (func_748())
	{
		func_747();
	}
	else
	{
		func_749();
		func_449(0, 0, 0, 0, 0);
		Global_2405071.f_1743 = 0;
		Global_2405071.f_1742 = 0;
	}
}

void func_747()
{
	0x213AEB2B90CBA7AC(&(Global_2405071.f_704), &(Global_2405071.f_1223), 519);
	Global_2405071.f_485 = { Global_2405071.f_491 };
	if (GET_ID_OF_THIS_THREAD() == Global_2405071.f_704.f_518)
	{
		Global_2405071.f_1742 = 0;
	}
}

int func_748()
{
	if ((Global_2405071.f_1742 && !GET_ID_OF_THIS_THREAD() == Global_2405071.f_1223.f_518) && GET_ID_OF_THIS_THREAD(Global_2405071.f_1223.f_518))
	{
		return 1;
	}
	return 0;
}

void func_749()
{
	if (func_752() && !func_748())
	{
		func_751();
	}
	func_750();
	Global_2405071.f_704 = 0;
}

void func_750()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405071.f_704.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_751()
{
	if (func_748())
	{
		if (Global_2405071.f_704.f_518 == Global_2405071.f_1223.f_518)
		{
			return;
		}
	}
	if (!GET_ID_OF_THIS_THREAD() == Global_2405071.f_704.f_518)
	{
		0x213AEB2B90CBA7AC(&(Global_2405071.f_1223), &(Global_2405071.f_704), 519);
		Global_2405071.f_491 = { Global_2405071.f_485 };
		Global_2405071.f_1742 = 1;
	}
}

int func_752()
{
	if ((Global_2405071.f_1743 && !GET_ID_OF_THIS_THREAD() == Global_2405071.f_704.f_518) && GET_ID_OF_THIS_THREAD(Global_2405071.f_704.f_518))
	{
		return 1;
	}
	return 0;
}

void func_753()
{
	0x213AEB2B90CBA7AC(&(Global_2405071.f_363), &Global_2409663, 121);
}

void func_754()
{
	func_755();
	Global_2405071.f_2252 = 0;
}

void func_755()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405071.f_2253[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_756()
{
	Global_2531497.f_4736 = 0;
}

void func_757()
{
	if (PLAYER_ID() != -1)
	{
		Global_1628955[PLAYER_ID() /*614*/].f_1 = 0;
	}
}

void func_758()
{
	int iVar0;
	
	iVar0 = PLAYER_ID();
	if (iVar0 != -1)
	{
		Global_1628955[iVar0 /*614*/] = -1;
	}
}

void func_759(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_208(iParam0, func_203(iParam1), 0);
	iVar0++;
	if (!func_207(iParam0))
	{
		func_198(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_199(iParam0, iVar0, iParam1, 1);
	}
}

int func_760(int iParam0)
{
	return Global_1590446[iParam0 /*871*/].f_211.f_6;
}

int func_761(int iParam0)
{
	switch (iParam0)
	{
		case 133:
		case 132:
		case 138:
		case 144:
		case 140:
		case 139:
		case 131:
		case 141:
		case -1:
			return 1;
		
		case 146:
			if (func_412(PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_762()
{
	if (IS_BIT_SET(Global_2531497.f_1735, 3) || IS_BIT_SET(Global_2531497.f_1735, 4))
	{
		if (IS_SCREEN_FADED_OUT() || IS_SCREEN_FADED_OUT())
		{
			DO_SCREEN_FADE_IN(800);
		}
	}
	if (IS_BIT_SET(Global_2531497.f_1735, 5))
	{
		CLEAR_BIT(&(Global_2531497.f_1735), 5);
	}
	if (IS_BIT_SET(Global_2531497.f_1735, 3))
	{
		CLEAR_BIT(&(Global_2531497.f_1735), 3);
	}
	if (IS_BIT_SET(Global_2531497.f_1735, 4))
	{
		CLEAR_BIT(&(Global_2531497.f_1735), 4);
	}
	func_765(0);
	func_764(0);
	func_763(0);
}

void func_763(int iParam0)
{
	if (Global_2531497.f_4520 != iParam0)
	{
		Global_2531497.f_4520 = iParam0;
	}
}

void func_764(bool bParam0)
{
	if (Global_2531497.f_4519 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2531497.f_4519 = bParam0;
	}
}

void func_765(int iParam0)
{
	if (Global_2531497.f_4517 != iParam0)
	{
		Global_2531497.f_4517 = iParam0;
	}
}

void func_766(struct<12> Param0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	struct<13> Var1;
	struct<14> Var2;
	struct<18> Var3;
	struct<14> Var4;
	struct<13> Var5;
	struct<14> Var6;
	struct<14> Var7;
	struct<16> Var8;
	struct<13> Var9;
	struct<14> Var10;
	struct<14> Var11;
	struct<13> Var12;
	
	sVar0 = GET_THIS_SCRIPT_NAME();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_76577)
	{
		if (ARE_STRINGS_EQUAL(sVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam1;
			0xBFAFDB5FAAA5C5AB(&Var1);
		}
		else if (ARE_STRINGS_EQUAL(sVar0, func_767()))
		{
			Var2 = { Param0 };
			Var2.f_12 = uParam1;
			Var2.f_13 = iParam2;
			0xBAA2F0490E146BE8(&Var2);
		}
		else if (ARE_STRINGS_EQUAL(sVar0, "am_cp_collection"))
		{
			Var3 = { Param0 };
			Var3.f_12 = uParam1;
			Var3.f_13 = iParam2;
			Var3.f_14 = iParam3;
			Var3.f_15 = iParam4;
			Var3.f_16 = iParam5;
			Var3.f_17 = iParam6;
			0x3DE3AA516FB126A4(&Var3);
		}
		else if (ARE_STRINGS_EQUAL(sVar0, "am_challenges"))
		{
			Var4 = { Param0 };
			Var4.f_12 = uParam1;
			Var4.f_13 = to_float(iParam2);
			if (iParam3 == 1)
			{
				Var4.f_13 = (Var4.f_13 / 10f);
			}
			0x6A60E43998228229(&Var4);
		}
		else if (ARE_STRINGS_EQUAL(sVar0, "am_penned_in"))
		{
			0x1A7CE7CD3E653485(&Param0);
		}
		else if (ARE_STRINGS_EQUAL(sVar0, "am_pass_the_parcel"))
		{
			Var5 = { Param0 };
			Var5.f_12 = uParam1;
			0x419615486BBF1956(&Var5);
		}
		else if (ARE_STRINGS_EQUAL(sVar0, "am_hot_property"))
		{
			Var6 = { Param0 };
			Var6.f_12 = uParam1;
			Var6.f_13 = iParam2;
			0x84DFC579C2FC214C(&Var6);
		}
		else if (ARE_STRINGS_EQUAL(sVar0, "am_dead_drop"))
		{
			Var7 = { Param0 };
			Var7.f_12 = uParam1;
			Var7.f_13 = iParam2;
			0x0A9C7F36E5D7B683(&Var7);
		}
		else if (ARE_STRINGS_EQUAL(sVar0, "am_king_of_the_castle"))
		{
			Var8 = { Param0 };
			Var8.f_12 = uParam1;
			Var8.f_13 = iParam2;
			Var8.f_14 = iParam3;
			Var8.f_15 = iParam4;
			0x164C5FF663790845(&Var8);
		}
		else if (ARE_STRINGS_EQUAL(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var9 = { Param0 };
			Var9.f_12 = uParam1;
			0xEDBF6C9B0D2C65C8(&Var9);
		}
		else if (ARE_STRINGS_EQUAL(sVar0, "AM_KILL_LIST"))
		{
			if (iParam3 == 0)
			{
				Var10 = { Param0 };
				Var10.f_12 = uParam1;
				Var10.f_13 = iParam2;
				0x8C9D11605E59D955(&Var10);
			}
			else
			{
				Var11 = { Param0 };
				Var11.f_12 = uParam1;
				Var11.f_13 = iParam2;
				0x6551B1F7F6CD46EA(&Var11);
			}
		}
		else if (ARE_STRINGS_EQUAL(sVar0, "am_hunt_the_beast"))
		{
			Var12 = { Param0 };
			Var12.f_12 = uParam1;
			0x2CD90358F67D0AA8(&Var12);
		}
	}
}

char* func_767()
{
	switch (Global_2461343)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

int func_768(struct<21> Param0)
{
	int iVar0;
	
	func_777(func_778(Param0), Param0);
	IS_SPHERE_VISIBLE_TO_PLAYER(func_776(9));
	RESERVE_NETWORK_MISSION_PEDS(func_775(9));
	func_772(0, -1, 0);
	func_770(133);
	NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_171, 88);
	NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_1537, 385);
	if (!func_769())
	{
		func_730();
	}
	if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		_0x6DEE77AFF8C21BD1(&(Local_171.f_52), &(Local_171.f_53));
	}
	Local_1538.f_2 = _0xCF61D4B4702EE9EB();
	SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_168[iVar0] = -1;
		iVar0++;
	}
	return 1;
}

int func_769()
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
		if (func_725())
		{
			return 0;
		}
		if (func_723(157))
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

void func_770(int iParam0)
{
	func_738();
	func_771();
	func_756();
	Global_1574647.f_4 = iParam0;
	Global_1574647.f_5 = iParam0;
	func_420(iParam0, -1);
	func_27(&(Global_1574647.f_18), 0, 0);
	Global_2531497.f_4588 = 0;
	Global_2460066[0] = func_102();
	Global_2460066[1] = func_102();
	Global_2460066[2] = func_102();
	Global_2460066[3] = func_102();
	Global_2460066[4] = func_102();
	func_167();
	if (!func_557(func_290()))
	{
		func_289();
	}
	if (func_165() && !func_164())
	{
		SET_BIT(&(Global_1574647.f_1), 16);
	}
	else
	{
		SET_BIT(&(Global_1574647.f_1), 17);
	}
}

void func_771()
{
	var uVar0;
	
	Global_1574672 = uVar0;
}

int func_772(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_774();
			}
			else
			{
				return 0;
			}
		}
		if (!func_773())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_774();
					}
					else
					{
						return 0;
					}
				}
				if (func_725())
				{
					if (!bParam2)
					{
						func_774();
					}
					else
					{
						return 0;
					}
				}
				if (func_723(157))
				{
					if (!bParam2)
					{
						func_774();
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
					func_774();
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
				func_774();
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
			func_774();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_773()
{
	return Global_1312850;
}

void func_774()
{
	TERMINATE_THIS_THREAD();
}

int func_775(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 6:
			return 0;
		
		case 7:
			return 1;
		
		case 8:
			return 10;
		
		case 9:
			return 10;
		
		case 10:
			return 1;
		
		case 11:
			return 6;
		
		case 12:
			return 0;
		
		case 13:
			return 1;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		default:
	}
	return 0;
}

int func_776(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 0;
		
		case 12:
			return 0;
		
		case 13:
			return 0;
		
		case 14:
			return 1;
		
		case 15:
			return 1;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		default:
	}
	return 0;
}

void func_777(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_774();
	}
	NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_16);
}

int func_778(int iParam0)
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
1577160138
__________________________
