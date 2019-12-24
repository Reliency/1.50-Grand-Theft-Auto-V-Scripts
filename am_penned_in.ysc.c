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
	struct<199> Local_112 = { 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 1, 0, 5, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 744705981, -178150202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1 } ;
	struct<8> Local_113[32];
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	var uLocal_122 = 1;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	vector3 vLocal_137 = { 0f, 0f, 0f };
	vector3 vLocal_138 = { 0f, 0f, 0f };
	int iLocal_139 = 0;
	float fLocal_140 = 0f;
	float fLocal_141 = 0f;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	struct<14> Local_147 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	vector3 vLocal_152[217] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_153[217] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_154 = 0;
	float fLocal_155 = 0f;
	float fLocal_156 = 0f;
	float fLocal_157 = 0f;
	int iLocal_158 = 0;
	struct<105> Local_159 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0 } ;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = -1;
	var uLocal_165 = -1;
	var uLocal_166 = -1;
	var uLocal_167 = -1;
	var uLocal_168 = -1;
	var uLocal_169 = -1;
	var uLocal_170 = 0;
	var uLocal_171 = 32;
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
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
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
	var uLocal_467 = 0;
	var uLocal_468 = 0;
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
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
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
	var uLocal_509 = 0;
	var uLocal_510 = 0;
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
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
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
	var uLocal_551 = 0;
	var uLocal_552 = 0;
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
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
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
	int iLocal_588 = 0;
	int iLocal_589 = 0;
	int iLocal_590 = 0;
	int iLocal_591 = 0;
	int iLocal_592 = 0;
	int iLocal_593 = 0;
	int iLocal_594 = 0;
	vector3 vLocal_595 = { 0f, 0f, 0f };
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 12;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
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
	var uLocal_635 = 0;
	var uLocal_636 = 0;
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
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
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
	var uLocal_677 = 0;
	var uLocal_678 = 0;
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
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
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
	var uLocal_719 = 0;
	var uLocal_720 = 0;
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
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
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
	var uLocal_761 = 0;
	var uLocal_762 = 0;
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
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
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
	var uLocal_803 = 0;
	var uLocal_804 = 0;
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
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
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
	var uLocal_845 = 0;
	var uLocal_846 = 0;
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
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
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
	var uLocal_887 = 0;
	var uLocal_888 = 0;
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
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
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
	var uLocal_929 = 0;
	var uLocal_930 = 0;
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
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
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
	var uLocal_971 = 0;
	var uLocal_972 = 0;
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
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
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
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
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
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
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
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
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
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
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
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
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
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
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
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
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
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
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
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
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
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
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
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
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
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
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
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
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
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 1065353216;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	int iLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	struct<12> Local_1296 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_1307 = 0;
	int iLocal_1308 = 0;
	int iLocal_1309 = 0;
	int iLocal_1310 = 0;
	int iLocal_1311 = 0;
	int iLocal_1312 = 0;
	int iLocal_1313 = 0;
	vector3 vLocal_1314 = { 0f, 0f, 0f };
	float fLocal_1315 = 0f;
	float fLocal_1316 = 0f;
	vector3 vLocal_1317 = { 0f, 0f, 0f };
	float fLocal_1318 = 0f;
	int iLocal_1319 = 0;
	int iLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	int iLocal_1323 = 0;
	var uLocal_1324 = 0;
	struct<21> Local_1325 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	iLocal_110 = -1;
	iLocal_111 = -1;
	iLocal_1311 = -1;
	iLocal_1312 = -1;
	fLocal_1316 = -1f;
	if (NETWORK_IS_GAME_IN_PROGRESS() && func_1276(NETWORK_IS_GAME_IN_PROGRESS(), 0, 1))
	{
		func_1223(ScriptParam_1325);
	}
	else
	{
		func_1162();
	}
	while (true)
	{
		func_1161();
		if (func_1154() || func_1151(24))
		{
			func_1162();
		}
		if (func_1150())
		{
			func_1162();
		}
		func_1131();
		if (Local_112.f_197 == 2)
		{
			if (func_1127(1))
			{
				func_1072(0, 5, 0, !IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 0), -1, -1, -1, -1, -1, 0);
				func_1162();
			}
		}
		switch (func_1071(PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_1070() == 1)
				{
					if (func_1069())
					{
						if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 7))
						{
							if (func_1068(11))
							{
								SET_BIT(&(Local_113[SET_BIT() /*8*/].f_1), 7);
							}
						}
						func_1065();
						vLocal_137 = { vLocal_152[0 /*3*/] };
						fLocal_140 = func_1064();
						fLocal_141 = fLocal_140;
						iLocal_136 = 0;
						uLocal_142 = func_1063();
						if (Local_112.f_197 == 2)
						{
							func_1061();
						}
						if (!func_1010(1))
						{
							func_1008(func_1009(), 1);
							func_1003();
						}
						func_996(136, Local_112.f_167, 0, 0);
						if (Local_112.f_197 == 2)
						{
							func_913(-1, 0, Local_112.f_197 == 2, 200, 0, 0);
							if (func_908())
							{
								SET_BIT(&iLocal_116, 1);
							}
						}
						Local_113[PARTICIPANT_ID_TO_INT() /*8*/] = 1;
					}
				}
				else if (func_1070() == 4)
				{
					Local_113[PARTICIPANT_ID_TO_INT() /*8*/] = 3;
				}
				break;
			
			case 1:
				if (func_1070() == 1)
				{
					func_901();
					func_744();
					func_740();
					func_739();
					func_695();
					func_628();
					func_442();
					func_441();
					func_437();
					func_433();
					func_417();
				}
				else if (func_1070() == 4)
				{
					Local_113[PARTICIPANT_ID_TO_INT() /*8*/] = 3;
				}
				break;
			
			case 3:
				func_416(&(Local_112.f_22));
				if (func_415(&(Local_112.f_22)))
				{
					Local_113[PARTICIPANT_ID_TO_INT() /*8*/] = 4;
				}
				break;
			
			case 2:
				Local_113[PARTICIPANT_ID_TO_INT() /*8*/] = 4;
			
			case 4:
				func_1162();
				break;
		}
		if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (Local_112.f_197 == 2)
			{
				if (func_414())
				{
					if (func_1070() < 4)
					{
						Local_112 = 4;
					}
				}
			}
			switch (func_1070())
			{
				case 0:
					if (func_401(&(Local_112.f_167)))
					{
						func_399();
						if (func_1069())
						{
							func_1065();
							Local_112.f_184.f_7 = func_398();
							Local_112.f_8 = func_1064();
							Local_112.f_166 = func_1063();
							Local_112 = 1;
							func_397(&(Local_112.f_32), 0, 0);
							func_394(func_396(136, Local_112.f_167, 0, 0));
						}
					}
					break;
				
				case 1:
					func_384();
					func_28();
					func_3();
					if (func_1())
					{
						Local_112 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	bool bVar0;
	int iVar1;
	
	if (Local_112.f_21 >= 2)
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			if (NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(iVar1)))
			{
				if (Local_113[iVar1 /*8*/].f_7 < 5)
				{
					bVar0 = false;
				}
			}
			iVar1++;
		}
	}
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

void func_3()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (Local_112.f_197 == 2)
	{
		return;
	}
	bVar1 = true;
	if (Local_112.f_21 > 0)
	{
		if (func_27())
		{
			iVar0 = GET_PLAYER_PED(Local_112.f_184.f_7);
		}
		else
		{
			func_26();
		}
		if (!func_25(vLocal_137, Local_112.f_194, 1056964608, 0))
		{
			if (!func_24(&uLocal_1321))
			{
				func_397(&uLocal_1321, 0, 0);
			}
			else if (func_23(&uLocal_1321, 500, 0))
			{
				Local_112.f_194 = { vLocal_137 };
				func_22(&uLocal_1321);
			}
		}
		iVar2 = Global_262145.f_11159;
		func_4(&(Local_112.f_184), iVar0, Local_112.f_194, bVar1, Global_262145.f_11157, Global_262145.f_11158, iVar2, 4352);
	}
}

void func_4(var uParam0, int iParam1, vector3 vParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	switch (func_21(uParam0))
	{
		case 0:
			if (GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) == 0)
			{
				RESERVE_NETWORK_MISSION_OBJECTS(1);
			}
			func_20(uParam0, 1);
			break;
		
		case 1:
			if (!func_19(vParam2))
			{
				if (func_13(uParam0, func_18(vParam2), func_17()))
				{
					if (func_9(uParam0))
					{
						func_7(uParam0);
						func_20(uParam0, 2);
					}
				}
			}
			break;
		
		case 2:
			if (bParam3)
			{
				if (func_6(uParam0))
				{
					iVar0 = NET_TO_PED(uParam0->f_3);
					iVar1 = NET_TO_VEH(uParam0->f_2);
					func_5(uParam0, iVar0, iVar1, iParam1, fParam4, fParam5, iParam6, iParam7);
				}
			}
			break;
		
		default:
			break;
	}
}

void func_5(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (!func_24(&(uParam0->f_8)))
	{
		func_397(&(uParam0->f_8), 0, 0);
	}
	else if (func_23(&(uParam0->f_8), 5000, 0))
	{
		func_22(&(uParam0->f_8));
		iVar0 = 1;
	}
	if ((!IS_PED_INJURED(iParam1) && !IS_PED_INJURED(iParam2, 0)) && !IS_PED_INJURED(iParam3))
	{
		if (((GET_SCRIPT_TASK_STATUS(iParam1, -1273030092) != 1 && GET_SCRIPT_TASK_STATUS(iParam1, -1273030092) != 0) || iParam3 != uParam0->f_4) || iVar0)
		{
			if (iParam3 != uParam0->f_4)
			{
				uParam0->f_4 = iParam3;
				CLEAR_PED_TASKS(iParam1);
			}
			TASK_VEHICLE_HELI_PROTECT(iParam1, iParam2, iParam3, fParam4, 32, fParam5, iParam6, iParam7);
		}
	}
}

int func_6(var uParam0)
{
	if (NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_2) && NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_3))
	{
		return 1;
	}
	return 0;
}

void func_7(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = NET_TO_ENT(uParam0->f_2);
	SET_ENTITY_PROOFS(iVar0, true, true, true, true, false, false, 0, false);
	_SET_ENTITY_SOMETHING(iVar0, false);
	iVar1 = NET_TO_VEH(uParam0->f_2);
	_0x7D6F9A3EF26136A0(iVar1, false, 0);
	SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON(iVar1, false);
	iVar2 = NET_TO_ENT(uParam0->f_3);
	SET_ENTITY_INVINCIBLE(iVar2, true);
	SET_VEHICLE_ENGINE_ON(iVar1, true, true, 0);
	_0xE6F13851780394DA(iVar1, 0.3f);
	SET_HELI_BLADES_FULL_SPEED(iVar1);
	ACTIVATE_PHYSICS(iVar1);
	func_8(1);
}

void func_8(bool bParam0)
{
	if (bParam0)
	{
		if (Global_2359296 == 0)
		{
			Global_2359296 = 1;
		}
	}
	else if (Global_2359296 == 1)
	{
		Global_2359296 = 0;
	}
}

int func_9(var uParam0)
{
	int iVar0;
	
	if (NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_3))
	{
		return 1;
	}
	REQUEST_MODEL(uParam0->f_1);
	if (HAS_MODEL_LOADED(uParam0->f_1))
	{
		if (func_11(uParam0->f_2))
		{
			iVar0 = NET_TO_ENT(uParam0->f_2);
			if (NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (func_10(&(uParam0->f_3), uParam0->f_2, 4, uParam0->f_1, -1, 1, 1, 1))
				{
					return 1;
				}
			}
			else
			{
				NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
			}
		}
	}
	return 0;
}

int func_10(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!CAN_REGISTER_MISSION_OBJECTS(1))
	{
		return 0;
	}
	if (!NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
	{
		return 0;
	}
	if (!IS_VEHICLE_DRIVEABLE(IS_VEHICLE_DRIVEABLE(iParam1), 0))
	{
		return 0;
	}
	*uParam0 = PED_TO_NET(PED_TO_NET(PED_TO_NET(iParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		_SET_ENTITY_SOMETHING(_SET_ENTITY_SOMETHING(*uParam0), bParam7);
		if (NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK_GET_ENTITY_IS_NETWORKED(*uParam0)))
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

int func_11(int iParam0)
{
	if (NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_12(NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_12(int iParam0)
{
	if (DOES_ENTITY_EXIST(iParam0))
	{
		if (IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
		else if (!IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_13(var uParam0, vector3 vParam1, float fParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	if (NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_2))
	{
		return 1;
	}
	bVar0 = true;
	bVar1 = true;
	bVar2 = true;
	bVar3 = false;
	bVar4 = true;
	REQUEST_MODEL(*uParam0);
	if (HAS_MODEL_LOADED(*uParam0))
	{
		if (!func_19(vParam1))
		{
			if (func_14(&(uParam0->f_2), *uParam0, vParam1, fParam2, bVar0, bVar1, bVar2, bVar3, bVar4, 1, 0, 0, 0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_14(var uParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
			func_15(vParam2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_15(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_16(PLAYER_ID(), vParam0, iParam2) > -1)
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

int func_16(int iParam0, vector3 vParam1, int iParam2)
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

float func_17()
{
	return Global_4456448.f_92415[0 /*282*/].f_3;
}

Vector3 func_18(vector3 vParam0)
{
	vector3 vVar0;
	
	vVar0 = { vParam0 };
	vVar0.z = (vVar0.z + 100f);
	return vVar0;
}

int func_19(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_20(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

int func_21(var uParam0)
{
	return uParam0->f_5;
}

void func_22(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_23(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_397(uParam0, bParam2, 0);
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

bool func_24(var uParam0)
{
	return uParam0->f_1;
}

int func_25(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
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

void func_26()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = func_398();
	iVar2 = 0;
	while (iVar2 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(iVar2)))
		{
			iVar0 = NETWORK_GET_PLAYER_INDEX(NETWORK_GET_PLAYER_INDEX(iVar2));
			if (func_1276(iVar0, 1, 1))
			{
				if (IS_BIT_SET(Local_113[iVar2 /*8*/].f_1, 0))
				{
					if (!IS_BIT_SET(Local_113[iVar2 /*8*/].f_1, 1))
					{
						if (!IS_BIT_SET(Local_113[iVar2 /*8*/].f_1, 11))
						{
							iVar1 = iVar0;
						}
					}
				}
			}
		}
		iVar2++;
	}
	if (Local_112.f_184.f_7 != iVar1)
	{
		Local_112.f_184.f_7 = iVar1;
	}
}

int func_27()
{
	int iVar0;
	int iVar1;
	
	if (Local_112.f_184.f_7 != func_398())
	{
		if (func_1276(Local_112.f_184.f_7, 1, 1))
		{
			if (NETWORK_IS_PLAYER_A_PARTICIPANT(Local_112.f_184.f_7))
			{
				iVar0 = NETWORK_GET_PARTICIPANT_INDEX(Local_112.f_184.f_7);
				if (NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
				{
					iVar1 = iVar0;
					if (!IS_BIT_SET(Local_113[iVar1 /*8*/].f_1, 1))
					{
						if (!IS_BIT_SET(Local_113[iVar1 /*8*/].f_1, 11))
						{
							if (IS_BIT_SET(Local_113[iVar1 /*8*/].f_1, 0))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_28()
{
	switch (Local_112.f_21)
	{
		case 0:
			func_379();
			if (IS_BIT_SET(Local_112.f_1, 2))
			{
				if (IS_BIT_SET(Local_112.f_1, 0))
				{
					SET_BIT(&(Local_112.f_1), 8);
					Local_112.f_21 = 1;
					CLEAR_AREA_OF_PROJECTILES(vLocal_152[0 /*3*/], (func_1064() + 50f), 1);
				}
			}
			else if (IS_BIT_SET(Local_112.f_1, 13))
			{
				SET_BIT(&(Local_112.f_1), 8);
				Local_112.f_21 = 1;
				CLEAR_AREA_OF_PROJECTILES(vLocal_152[0 /*3*/], (func_1064() + 50f), 1);
			}
			if (IS_BIT_SET(Local_112.f_1, 12))
			{
				Local_112.f_21 = 3;
			}
			if (IS_BIT_SET(Local_112.f_1, 16))
			{
				func_37();
				Local_112.f_21 = 3;
			}
			else if (IS_BIT_SET(Local_112.f_1, 18))
			{
				Local_112.f_21 = 3;
			}
			break;
		
		case 1:
			if (IS_BIT_SET(Local_112.f_1, 9))
			{
				Local_112.f_21 = 2;
			}
			break;
		
		case 2:
			func_33();
			func_29(0);
			if (IS_BIT_SET(Local_112.f_1, 3))
			{
				Local_112.f_21 = 3;
			}
			if (IS_BIT_SET(Local_112.f_1, 10))
			{
				Local_112.f_21 = 3;
			}
			break;
		
		case 3:
			if (IS_BIT_SET(Local_112.f_1, 16))
			{
				func_37();
			}
			if (IS_BIT_SET(Local_112.f_1, 5))
			{
				if (Local_112.f_21 == 3)
				{
					Local_112.f_21 = 5;
				}
			}
			break;
		
		case 4:
			break;
		
		case 5:
			break;
	}
}

void func_29(bool bParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	bool bVar8;
	vector3 vVar9;
	vector3 vVar10;
	bool bVar11;
	
	if (bParam0)
	{
		if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return;
		}
	}
	if (Local_112.f_197 == 0 || Local_112.f_197 == 2)
	{
		fLocal_1315 = func_32();
	}
	iVar0 = iLocal_136 + 1;
	if (!func_31(vLocal_137, 0f, 0f, 0f, 0))
	{
		if (!func_31(vLocal_1314, vLocal_137, 0))
		{
			vLocal_1314 = { vLocal_137 };
		}
	}
	if (iVar0 < 217)
	{
		vVar1 = { vLocal_152[iVar0 /*3*/] };
		fVar5 = vdist2(vLocal_137, vVar1);
		if (!func_31(vLocal_152[iVar0 /*3*/], 0f, 0f, 0f, 0))
		{
			if (!func_31(vLocal_152[iLocal_136 /*3*/], 0f, 0f, 0f, 0))
			{
				if (fVar5 < (0.1f * 0.1f))
				{
					vLocal_137 = { vLocal_152[iVar0 /*3*/] };
					iLocal_136++;
					bVar7 = true;
				}
				else
				{
					vVar2 = { vVar1 - vLocal_137 };
					vVar3 = { func_30(vVar2) };
					if (!NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						vVar4 = { vLocal_137 + vVar3 * FtoV(GET_FRAME_TIME()) * Vector(Local_112.f_166, Local_112.f_166, Local_112.f_166) * Vector(fLocal_1315, fLocal_1315, fLocal_1315) };
					}
					else
					{
						vVar4 = { vLocal_137 + vVar3 * FtoV(GET_FRAME_TIME()) * Vector(Local_112.f_166, Local_112.f_166, Local_112.f_166) };
					}
					fVar6 = vdist2(vLocal_137, vVar4);
					if (fVar6 > fVar5)
					{
						vVar9 = { vVar1 };
					}
					else
					{
						vVar9 = { vVar4 };
					}
				}
			}
		}
		else
		{
			if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 3))
			{
				SET_BIT(&(Local_113[SET_BIT() /*8*/].f_1), 3);
			}
			if (!IS_BIT_SET(Local_112.f_1, 4))
			{
				if (!func_31(vLocal_152[(iLocal_154 - 1) /*3*/], 0f, 0f, 0f, 0))
				{
					vVar9 = { vLocal_152[(iLocal_154 - 1) /*3*/] };
				}
			}
		}
	}
	if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!func_24(&(Local_112.f_172)))
		{
			func_397(&(Local_112.f_172), 0, 0);
		}
		if (!IS_BIT_SET(Local_112.f_1, 4))
		{
			if (!func_23(&(Local_112.f_172), 16000, 0))
			{
				if (!bVar7)
				{
					Local_112.f_176 = { vVar9 };
					Local_112.f_171 = iLocal_136;
				}
				else
				{
					Local_112.f_176 = { vLocal_137 };
					Local_112.f_171 = iLocal_136;
				}
			}
			else if (func_23(&(Local_112.f_172), 16500, 0))
			{
				func_22(&(Local_112.f_172));
			}
		}
	}
	if (!func_31(Local_112.f_176, 0f, 0f, 0f, 0))
	{
		if (iLocal_139 != Local_112.f_171 || !func_31(vLocal_138, Local_112.f_176, 0))
		{
			if (iLocal_139 != Local_112.f_171)
			{
				iLocal_139 = Local_112.f_171;
				vLocal_138 = { Local_112.f_176 };
				vLocal_137 = { vLocal_138 };
				iLocal_136 = iLocal_139;
				bVar7 = true;
			}
			else
			{
				vLocal_138 = { Local_112.f_176 };
				vVar10 = { Local_112.f_176 };
			}
			bVar8 = true;
		}
	}
	if (!bVar7)
	{
		if (bVar8)
		{
			bVar11 = true;
			if (bVar11)
			{
				vLocal_137 = { vVar10 };
			}
		}
		else
		{
			vLocal_137 = { vVar9 };
		}
	}
	if (IS_BIT_SET(Local_112.f_1, 4))
	{
		if (!func_31(vLocal_137, vLocal_152[(iLocal_154 - 1) /*3*/], 0))
		{
			vLocal_137 = { vLocal_152[(iLocal_154 - 1) /*3*/] };
		}
	}
	if (DOES_BLIP_EXIST(iLocal_134))
	{
		SET_BLIP_COORDS(iLocal_134, vLocal_137);
	}
}

Vector3 func_30(vector3 vParam0)
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

bool func_31(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

float func_32()
{
	return 0.9f;
}

void func_33()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (!func_24(&(Local_112.f_26)))
	{
		func_397(&(Local_112.f_26), 0, 0);
	}
	if (!func_23(&(Local_112.f_26), 10000, 0))
	{
		return;
	}
	else if (!func_23(&(Local_112.f_26), 20000, 0))
	{
		if (!func_24(&uLocal_145))
		{
			func_397(&uLocal_145, 0, 0);
		}
		if (func_23(&uLocal_145, 1000, 0))
		{
			fVar0 = Local_112.f_166;
			if (fVar0 < func_36())
			{
				fVar0 = (fVar0 + 0.5f);
				fVar0 = (fVar0 * func_35());
				if (fVar0 > func_36())
				{
					fVar0 = func_36();
				}
				Local_112.f_166 = fVar0;
			}
			func_22(&uLocal_145);
		}
	}
	else if (fLocal_156 <= (fLocal_155 / 2f))
	{
		if (Local_112.f_166 != func_36())
		{
			Local_112.f_166 = func_36();
		}
	}
	else if (!func_24(&uLocal_145))
	{
		func_397(&uLocal_145, 0, 0);
	}
	else if (func_23(&uLocal_145, 1000, 0))
	{
		if (Local_112.f_166 > func_34())
		{
			fVar1 = (func_36() - func_34());
			fVar3 = (fLocal_155 / 2f);
			fVar2 = ((fLocal_156 - fVar3) / fVar3);
			fVar4 = (func_36() - (fVar1 * fVar2));
			fVar4 = (fVar4 * 0.8f);
			fVar4 = (fVar4 * func_35());
			if (fVar4 < func_34())
			{
				fVar4 = func_34();
			}
			Local_112.f_166 = fVar4;
			func_22(&uLocal_145);
		}
	}
}

float func_34()
{
	return Global_262145.f_11148;
}

float func_35()
{
	return Global_262145.f_11149;
}

float func_36()
{
	return Global_262145.f_11146;
}

void func_37()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	char cVar6[32];
	struct<4> Var7;
	struct<4> Var8;
	struct<4> Var9;
	int iVar10;
	int iVar11;
	struct<20> Var12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	struct<4> Var18;
	struct<4> Var19;
	var uVar20;
	var uVar21;
	int iVar22;
	var uVar23;
	int iVar24;
	char[] cVar25[8];
	var uVar26;
	int iVar27;
	var uVar28;
	char cVar29[32];
	int iVar30;
	var uVar31;
	struct<4> Var32;
	struct<4> Var33;
	struct<4> Var34;
	
	iVar5 = -1;
	Var9 = { func_378() };
	iVar10 = func_398();
	if (!func_376(PLAYER_ID(), 0))
	{
		iVar5 = PARTICIPANT_ID_TO_INT();
		iVar10 = PLAYER_ID();
	}
	else
	{
		iVar11 = Global_1590446[PLAYER_ID() /*871*/].f_735;
		if (NETWORK_IS_PLAYER_ACTIVE(iVar11))
		{
			if (NETWORK_IS_PLAYER_A_PARTICIPANT(iVar11))
			{
				iVar10 = iVar11;
				iVar5 = NETWORK_GET_PARTICIPANT_INDEX(iVar11);
			}
		}
	}
	Var12.f_2 = 1065353216;
	Var12.f_3 = 1065353216;
	Var12.f_4 = 1;
	Var12.f_9 = -1;
	Var12.f_18 = -1;
	Var12.f_19 = -1;
	if (Local_112.f_197 != 2)
	{
		if (func_375(PLAYER_ID()))
		{
			SET_BIT(&(Local_113[SET_BIT() /*8*/].f_1), 2);
			return;
		}
	}
	else if (func_368())
	{
		SET_BIT(&(Local_113[SET_BIT() /*8*/].f_1), 2);
		return;
	}
	if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 2))
	{
		return;
	}
	if (IS_BIT_SET(Local_112.f_1, 12))
	{
		SET_BIT(&(Local_113[SET_BIT() /*8*/].f_1), 2);
		return;
	}
	if (!func_1010(1))
	{
		if (iVar5 > -1)
		{
			if (iVar10 != func_398())
			{
				if (!IS_BIT_SET(Local_112.f_1, 17))
				{
					if (!IS_BIT_SET(Local_112.f_1, 16))
					{
						if (!IS_BIT_SET(Local_112.f_1, 18))
						{
							if (IS_BIT_SET(Local_113[iVar5 /*8*/].f_1, 0))
							{
								if (!IS_BIT_SET(iLocal_114, 17))
								{
									if (!IS_BIT_SET(Local_112.f_1, 10))
									{
										if (IS_BIT_SET(Local_112.f_1, 3) && IS_BIT_SET(Local_112.f_1, 11))
										{
											if (!IS_BIT_SET(iLocal_114, 19))
											{
												if (!IS_PED_INJURED(IS_PED_INJURED()))
												{
													if (IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE()))
													{
														if (NETWORK_HAS_CONTROL_OF_ENTITY(NETWORK_HAS_CONTROL_OF_ENTITY(NETWORK_HAS_CONTROL_OF_ENTITY(), 0)))
														{
															SET_BIT(&iLocal_114, 19);
														}
													}
												}
											}
											if (IS_BIT_SET(Local_112.f_10, iVar5))
											{
												if (!IS_BIT_SET(Local_113[iVar5 /*8*/].f_1, 1))
												{
													bVar17 = true;
												}
											}
											if (func_367(&iVar13, &iVar14, &iVar15))
											{
												if (iVar15 > 2)
												{
													if (func_366(iVar10, iVar13, iVar14))
													{
														bVar2 = true;
													}
													if (!bVar2)
													{
														bVar16 = true;
													}
												}
												else if (iVar15 == 2)
												{
													if (iVar10 == iVar13 || iVar10 == iVar14)
													{
														Var18 = { func_365() };
														if (iVar10 == iVar13)
														{
															func_363(func_364(), &Var18, GET_PLAYER_NAME(iVar14), 1, 15000, &Var9, 2);
														}
														else
														{
															func_363(func_364(), &Var18, GET_PLAYER_NAME(iVar13), 1, 15000, &Var9, 2);
														}
														func_362(1);
													}
													else
													{
														if (func_366(iVar10, iVar13, iVar14))
														{
															bVar2 = true;
														}
														if (!bVar2)
														{
															Var19 = { func_361() };
															func_359(func_360(), func_398(), func_398(), -1, &Var19, &Var9, 1, 15000, 2, GET_PLAYER_NAME(iVar13), GET_PLAYER_NAME(iVar14), 0);
														}
														func_362(0);
													}
												}
												if (!bVar2 || (bVar2 && iVar4))
												{
													if (iVar5 == PARTICIPANT_ID_TO_INT())
													{
														func_347(bVar17, &iVar0, &iVar1, iVar15);
														if (Local_112.f_197 != 2)
														{
															Local_1296.f_6 = iVar0;
															Local_1296.f_7 = iVar1;
															Global_2461199 = iVar0;
															if (iVar0 > 0)
															{
																if (func_346())
																{
																	func_335(968073639, iVar0, &uVar20, 0, 1, 0);
																}
																else
																{
																	_NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_PENNED_IN", &uVar21);
																}
															}
															if (!func_334())
															{
																if (Local_1296.f_6 > 0)
																{
																	func_333(11, Local_1296.f_6);
																}
															}
															func_332();
															func_331(0, "", -1636175450, 1487716476, iVar1, 1, -1, 0);
														}
														else
														{
															Var12 = iVar0;
															Var12.f_1 = iVar1;
															func_137(200, bVar17, &Var12, 0);
														}
													}
													SET_BIT(&iLocal_114, 17);
												}
											}
											else if (bVar17)
											{
												if (iVar5 == PARTICIPANT_ID_TO_INT())
												{
													func_347(1, &iVar0, &iVar1, 1);
													if (Local_112.f_197 != 2)
													{
														Local_1296.f_6 = iVar0;
														Local_1296.f_7 = iVar1;
														Global_2461199 = iVar0;
														if (iVar0 > 0)
														{
															if (func_346())
															{
																func_335(968073639, iVar0, &iVar22, 0, 1, 0);
															}
															else
															{
																_NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_PENNED_IN", &uVar23);
															}
														}
														if (!func_334())
														{
															if (Local_1296.f_6 > 0)
															{
																func_333(11, Local_1296.f_6);
															}
														}
														func_332();
														func_331(0, "", -1636175450, 1487716476, iVar1, 1, -1, 0);
													}
													else
													{
														Var12 = iVar0;
														Var12.f_1 = iVar1;
														func_137(200, 1, &Var12, 0);
													}
												}
												Var7 = { func_136() };
												func_134(func_135(), "PEN_WIN", &Var7, 1, 15000, 2, 1, 0);
												SET_BIT(&iLocal_114, 17);
												func_362(1);
											}
											else if (IS_BIT_SET(Local_112.f_1, 3))
											{
												if (func_1276(iVar10, 1, 1))
												{
													iVar13 = func_133();
													if (iVar13 != func_398())
													{
														if (NETWORK_IS_PLAYER_ACTIVE(iVar13))
														{
															if (!bVar2)
															{
																if (func_131(iVar13, 1))
																{
																	iVar24 = func_130(iVar13);
																	if (iVar24 > -1)
																	{
																		uVar26 = func_128(iVar24);
																		cVar25 = func_118(iVar13);
																		bVar3 = true;
																	}
																}
															}
															if (Local_112.f_197 == 2)
															{
																bVar2 = false;
																bVar3 = false;
															}
															if (!bVar2 && !bVar3)
															{
																Var8 = { func_117() };
																func_363(func_360(), &Var8, GET_PLAYER_NAME(iVar13), 1, 15000, &Var9, 2);
															}
															else if (bVar3)
															{
																Var8 = { func_116() };
																func_68(func_360(), &Var9, &Var8, cVar25, uVar26, 0, -1, -1, -1, 2, -1);
															}
															else if (NETWORK_IS_PLAYER_A_PARTICIPANT(iVar13))
															{
																Var8 = { func_67() };
																func_363(91, &Var8, GET_PLAYER_NAME(iVar13), 1, 15000, &Var9, 2);
																iVar4 = 1;
															}
															else
															{
																Var8 = { func_117() };
																func_363(func_360(), &Var8, GET_PLAYER_NAME(iVar13), 1, 15000, &Var9, 2);
																iVar4 = 1;
															}
														}
													}
													else
													{
														cVar6 = { func_66() };
														func_134(func_360(), &Var9, &cVar6, 1, 15000, 2, 1, 0);
													}
													if (!bVar2 || (bVar2 && iVar4))
													{
														if (iVar5 == PARTICIPANT_ID_TO_INT())
														{
															func_347(0, &iVar0, &iVar1, 1);
															if (Local_112.f_197 != 2)
															{
																Local_1296.f_6 = iVar0;
																Local_1296.f_7 = iVar1;
																Global_2461199 = iVar0;
																if (iVar0 > 0)
																{
																	if (func_346())
																	{
																		func_335(968073639, iVar0, &iVar27, 0, 1, 0);
																	}
																	else
																	{
																		_NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_PENNED_IN", &uVar28);
																	}
																}
																if (!func_334())
																{
																	if (Local_1296.f_6 > 0)
																	{
																		func_333(11, Local_1296.f_6);
																	}
																}
																func_332();
																func_331(0, "", -1636175450, 1487716476, iVar1, 1, -1, 0);
															}
															else
															{
																Var12 = iVar0;
																Var12.f_1 = iVar1;
																func_137(200, 0, &Var12, 0);
															}
														}
														SET_BIT(&iLocal_114, 17);
													}
													func_362(0);
												}
											}
											if (bVar16)
											{
												cVar29 = { func_65() };
												if (bVar17)
												{
													func_134(func_364(), &Var9, &cVar29, 1, -1, 2, 1, 0);
												}
												else
												{
													func_134(func_364(), &Var9, &cVar29, 1, -1, 2, 1, 0);
												}
												func_362(0);
											}
										}
									}
									else
									{
										cVar6 = { func_66() };
										func_134(func_360(), &Var9, &cVar6, 1, 15000, 2, 1, 0);
										if (iVar5 == PARTICIPANT_ID_TO_INT())
										{
											func_347(0, &iVar0, &iVar1, 1);
											if (Local_112.f_197 != 2)
											{
												Local_1296.f_6 = iVar0;
												Local_1296.f_7 = iVar1;
												Global_2461199 = iVar0;
												if (iVar0 > 0)
												{
													if (func_346())
													{
														func_335(968073639, iVar0, &iVar30, 0, 1, 0);
													}
													else
													{
														_NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_PENNED_IN", &uVar31);
													}
												}
												func_332();
												func_331(0, "", -1636175450, 1487716476, iVar1, 1, -1, 0);
											}
											else
											{
												Var12 = iVar0;
												Var12.f_1 = iVar1;
												func_137(200, 0, &Var12, 0);
											}
										}
										SET_BIT(&iLocal_114, 17);
									}
								}
								if (IS_BIT_SET(iLocal_114, 17))
								{
									if (IS_BIT_SET(Local_113[iVar5 /*8*/].f_1, 5))
									{
										if (!IS_BIT_SET(Local_113[iVar5 /*8*/].f_1, 1))
										{
											STOP_SOUND(iLocal_594);
											RELEASE_SOUND_ID(iLocal_594);
										}
									}
									if (IS_SCREEN_FADED_IN())
									{
										SET_BIT(&(Local_113[SET_BIT() /*8*/].f_1), 2);
									}
								}
							}
							else if (!IS_BIT_SET(Local_112.f_1, 10))
							{
								if (IS_BIT_SET(Local_112.f_1, 3))
								{
									iVar13 = func_133();
									if (iVar13 != func_398())
									{
										if (!func_367(&iVar13, &iVar14, &iVar15))
										{
											Var32 = { func_117() };
											func_62(&Var32, iVar13, 1, 0, 0, 0, 1, 1, 0);
										}
										else if (iVar15 == 2)
										{
											Var33 = { func_61() };
											func_58(&Var33, iVar13, iVar14, 1, 1, 0, 0, 1);
										}
										else
										{
											Var34 = { func_65() };
											func_53(&Var34, 1);
										}
									}
									SET_BIT(&(Local_113[SET_BIT() /*8*/].f_1), 2);
									if (Local_112.f_197 != 2)
									{
										func_48(0);
									}
									else
									{
										func_362(0);
									}
								}
							}
							else
							{
								SET_BIT(&(Local_113[SET_BIT() /*8*/].f_1), 2);
								if (Local_112.f_197 != 2)
								{
									func_48(0);
								}
								else
								{
									func_362(0);
								}
							}
						}
						else if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 2))
						{
							SET_BIT(&(Local_113[SET_BIT() /*8*/].f_1), 2);
							if (func_38(PLAYER_ID()) >= 2)
							{
								func_134(func_360(), &Var9, "CAG_NOP", 1, 15000, 2, 1, 0);
							}
							func_362(0);
						}
					}
					else if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 2))
					{
						SET_BIT(&(Local_113[SET_BIT() /*8*/].f_1), 2);
						if (func_38(PLAYER_ID()) >= 2)
						{
							func_134(func_360(), &Var9, "CAG_NOP", 1, 15000, 2, 1, 0);
						}
						func_362(0);
					}
				}
				else if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 2))
				{
					SET_BIT(&(Local_113[SET_BIT() /*8*/].f_1), 2);
					if (func_38(PLAYER_ID()) >= 2)
					{
						if (!IS_BIT_SET(iLocal_116, 1))
						{
							func_134(func_360(), &Var9, "CAG_PRES", 1, 15000, 2, 1, 0);
						}
					}
					func_362(0);
				}
			}
			else if (func_376(PLAYER_ID(), 0))
			{
				if (IS_BIT_SET(Local_112.f_1, 3) && IS_BIT_SET(Local_112.f_1, 11))
				{
					SET_BIT(&(Local_113[SET_BIT() /*8*/].f_1), 2);
				}
				else if (IS_BIT_SET(Local_112.f_1, 10))
				{
					SET_BIT(&(Local_113[SET_BIT() /*8*/].f_1), 2);
				}
			}
		}
	}
	else if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 2))
	{
		if ((IS_BIT_SET(Local_112.f_1, 3) || IS_BIT_SET(Local_112.f_1, 10)) || IS_BIT_SET(Local_112.f_1, 16))
		{
			SET_BIT(&(Local_113[SET_BIT() /*8*/].f_1), 2);
		}
	}
}

int func_38(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	
	iVar0 = 2;
	bVar1 = ((func_47(iParam0) && !func_46(iParam0)) && !IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 8));
	bVar2 = func_45(iParam0);
	uVar3 = func_44();
	bVar4 = func_368();
	if ((bVar1 && (func_43(iParam0) || func_42(iParam0))) || bVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_41(iParam0)) && !func_39(iParam0)))
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

bool func_39(int iParam0)
{
	return func_40(iParam0, 19);
}

bool func_40(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

int func_41(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_40(iParam0, 9);
	}
	return 0;
}

int func_42(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return IS_BIT_SET(Global_1628955[iVar0 /*614*/].f_1, 0);
	}
	return 0;
}

int func_43(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return IS_BIT_SET(Global_1628955[iVar0 /*614*/].f_1, 7);
	}
	return 0;
}

bool func_44()
{
	return Global_1312417;
}

bool func_45(int iParam0)
{
	return func_40(iParam0, 20);
}

bool func_46(int iParam0)
{
	return IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 2);
}

int func_47(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628955[iVar0 /*614*/] != -1;
	}
	return 0;
}

void func_48(bool bParam0)
{
	if (bParam0)
	{
		if (func_49(1))
		{
			SET_BIT(&Global_1574672, 1);
		}
	}
	else if (func_49(2))
	{
		SET_BIT(&Global_1574672, 2);
	}
}

int func_49(int iParam0)
{
	int iVar0;
	
	iVar0 = func_50(2534, -1, 0);
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

int func_50(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_51(iParam1)];
	if (STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_52();
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

int func_52()
{
	return Global_1312745;
}

int func_53(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	iVar0 = END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
	func_54(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_54(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_57() || !NETWORK_IS_ACTIVITY_SESSION()) || !func_376(NETWORK_IS_ACTIVITY_SESSION(), 0))
	{
		return;
	}
	iVar0 = func_55(iParam2);
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

int func_55(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1671392 - 1))
	{
		if (iParam0 > Global_1671392.f_5[iVar0 /*53*/].f_1)
		{
			func_56(iVar0);
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

void func_56(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1671392.f_5[iVar0 /*53*/] = { Global_1671392.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_57()
{
	return IS_DLC_PRESENT(-1762644250);
}

int func_58(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	struct<8> Var1;
	struct<8> Var2;
	
	iVar0 = -1;
	if ((_0x3B39236746714134(_0x3B39236746714134(), iParam1) && _0x3B39236746714134(_0x3B39236746714134(), iParam2)) || iParam6)
	{
		if (!bParam5)
		{
			StringCopy(&Var1, GET_PLAYER_NAME(iParam1), 64);
			StringCopy(&Var2, GET_PLAYER_NAME(iParam2), 64);
		}
		else
		{
			StringCopy(&Var1, GET_PLAYER_NAME(iParam1), 64);
			StringCopy(&Var2, GET_PLAYER_NAME(iParam2), 64);
		}
		if (IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		if (IS_STRING_NULL_OR_EMPTY(&Var2))
		{
		}
		_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
		_SET_NOTIFICATION_COLOR_NEXT(iParam3);
		ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_59(&Var1));
		_SET_NOTIFICATION_COLOR_NEXT(iParam4);
		ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_59(&Var2));
		iVar0 = END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
		func_54(22, sParam0, 1, &Var1, 0, 0, 0, 0f, 0, &Var2, 0, 0);
	}
	return iVar0;
}

var func_59(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_60(&cVar0);
}

var func_60(char[4] cParam0)
{
	return cParam0;
}

struct<4> func_61()
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_WON2P", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_WON2P", 16);
			break;
	}
	return Var0;
}

int func_62(char* sParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<16> Var1;
	int iVar2;
	int iVar3;
	
	iVar0 = -1;
	if (_0x3B39236746714134(_0x3B39236746714134(), iParam1) || iParam4)
	{
		if (!bParam3)
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
		_SET_NOTIFICATION_COLOR_NEXT(iParam2);
		ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_59(&Var1));
		if (!bParam5)
		{
			iVar0 = END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
		}
		else
		{
			Global_2507671 = { func_64(iParam1) };
			if (NETWORK_CLAN_PLAYER_GET_DESC(&Global_2507601, 35, &Global_2507671))
			{
				iVar2 = 0;
				if (ARE_STRINGS_EQUAL(&(Global_2507601.f_22), "Leader") && Global_2507601.f_30 == 0)
				{
					iVar2 = 1;
				}
				if (Global_2507601.f_21 > 0)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 1;
				}
				if (bParam7)
				{
					if (bParam8)
					{
						Var1 = { func_63(&Var1) };
					}
					iVar0 = END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(iVar3, END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(&Global_2507601, 35), &(Global_2507601.f_17), Global_2507601.f_30, iVar2, 0, Global_2507601, &Var1, Global_1314030, Global_1314031, Global_1314032);
				}
				else
				{
					iVar0 = _DRAW_NOTIFICATION_APARTMENT_INVITE(iVar3, _DRAW_NOTIFICATION_APARTMENT_INVITE(&Global_2507601, 35), &(Global_2507601.f_17), Global_2507601.f_30, iVar2, 0, Global_2507601, Global_1314030, Global_1314031, Global_1314032);
				}
			}
			else
			{
				iVar0 = END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
			}
		}
		func_54(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_63(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

struct<13> func_64(int iParam0)
{
	struct<13> Var0;
	
	NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

struct<4> func_65()
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_DRAWD", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_DRAWD", 16);
			break;
	}
	return Var0;
}

struct<4> func_66()
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_NWN", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_NWN", 16);
			break;
	}
	return Var0;
}

struct<4> func_67()
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_WONPG", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_WONPG", 16);
			break;
	}
	return Var0;
}

int func_68(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_398();
	iVar1 = func_398();
	iVar2 = func_398();
	return func_69(uParam0, sParam1, sParam2, sParam3, uParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_69(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
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
	func_115(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = uParam4;
	Var0.f_71 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_72 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	func_113(&(Var0.f_69), 4);
	return func_70(&Var0);
}

int func_70(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2437549.f_3030)
		{
			return 0;
		}
	}
	func_85(uParam0, uParam0->f_17);
	func_82(uParam0);
	if (func_81())
	{
		func_82(uParam0);
	}
	if (func_80(uParam0->f_1))
	{
		func_73();
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
				func_73();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_113(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 2);
				Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_72(uParam0->f_69, 128))
			{
				if (func_71(Global_2437549.f_2708[iVar0 /*80*/].f_1))
				{
					Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
					func_113(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_71(int iParam0)
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

bool func_72(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_73()
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
	func_74();
	if (bVar0)
	{
		Global_76845 = 0;
	}
}

void func_74()
{
	Global_2437549.f_3032 = 0;
	Global_2437549.f_3032.f_578 = 0;
	func_78(&(Global_2437549.f_3032.f_1));
	Global_2437549.f_3032.f_1.f_1 = 0;
	func_75(&(Global_2437549.f_3032.f_1));
}

void func_75(var uParam0)
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
				if (IS_SCREEN_FADED_OUT() && !func_77(0))
				{
					DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_76(0);
}

void func_76(int iParam0)
{
	Global_76837 = iParam0;
	Global_76838 = iParam0;
}

bool func_77(bool bParam0)
{
	if (!bParam0 && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return IS_BIT_SET(Global_76825, 0);
}

void func_78(var uParam0)
{
	func_79(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_79(var uParam0)
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

int func_80(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

bool func_81()
{
	return Global_2448961.f_17;
}

void func_82(var uParam0)
{
	if (func_84(uParam0->f_1))
	{
		uParam0->f_72 = func_83();
	}
}

int func_83()
{
	return 21;
}

int func_84(int iParam0)
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

void func_85(var uParam0, int iParam1)
{
	if (func_84(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_398() || !func_1276(iParam1, 0, 1))
	{
		return;
	}
	if (func_71(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_86(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_86(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_111(iParam0) && !bParam4)
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
	if (((func_111(PLAYER_ID()) || (func_110() && func_109())) && !PLAYER_ID(Global_2531497.f_4591, 31)) && !bParam4)
	{
		iVar1 = func_108();
		if (DOES_ENTITY_EXIST(iVar1))
		{
			if (IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_1276(NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_149437[iParam1] != -1)
							{
								return func_106(iParam1, iParam0, 0);
							}
							else
							{
								return func_99(iParam0, NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_99(iParam0, NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_149437[iParam1] != -1)
				{
					return func_106(iParam1, iParam0, 0);
				}
				else
				{
					return func_87(0, -1, 0);
				}
			}
			else
			{
				return func_87(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_149437[iParam1] != -1)
		{
			return func_106(iParam1, iParam0, 0);
		}
		else
		{
			return func_99(iParam0, PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_99(iParam0, PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_87(bool bParam0, int iParam1, bool bParam2)
{
	return func_88(PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_88(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = GET_PLAYER_TEAM(iParam0);
	if ((func_98() || (func_97() && func_95())) && Global_1384328.f_1)
	{
		if (bParam1)
		{
			return func_94(iParam2, iVar0);
		}
		else
		{
			return func_94(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_93(iVar0, iParam2, 0) && !IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_92(1);
				}
				else
				{
					return func_92(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_89(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_89(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_92(1);
	}
	return func_92(0);
}

int func_89(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_91(iParam0, iParam1, iParam3);
	if (func_90(Global_4456448.f_154360, 1))
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

int func_90(int iParam0, bool bParam1)
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

int func_91(int iParam0, int iParam1, int iParam2)
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
			if (!func_93(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_92(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_93(int iParam0, int iParam1, int iParam2)
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

int func_94(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_91(iParam1, iParam0, 4);
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

bool func_95()
{
	if (func_96())
	{
		return 1;
	}
	return IS_BIT_SET(Global_4456448.f_195024, 4);
}

bool func_96()
{
	return IS_BIT_SET(Global_4456448.f_184550, 12);
}

bool func_97()
{
	if (NETWORK_IS_ACTIVITY_SESSION())
	{
		return IS_BIT_SET(Global_4456448.f_195024, 0);
	}
	return ((IS_BIT_SET(Global_4456448.f_195024, 0) || Global_1654024) && IS_BIT_SET(joaat("fm_deathmatch_creator")) > 0);
}

int func_98()
{
	if (func_96() && NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_99(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_102())
			{
				iVar3 = func_130(iParam0);
				if (!iVar3 == -1)
				{
					return func_128(iVar3);
				}
			}
			if ((func_101(iParam1, iParam0, iVar0, 0) && !IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_93(IS_BIT_SET(iParam1), IS_BIT_SET(iParam0), 0) && IS_BIT_SET(Global_4456448.f_15, 23)) && !IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_92(1);
			}
			else if (IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_100(1);
			}
			else
			{
				return func_88(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574407 || Global_1574398) || Global_1590446[iParam0 /*871*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574407 == 1 && Global_1574417 == 0))
			{
				return func_92(1);
			}
			else
			{
				return func_88(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574402 && Global_1573899.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_130(iParam0);
	if (!iVar4 == -1)
	{
		return func_128(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_100(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_101(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_102()
{
	if (((func_105() || func_104()) || func_81()) || func_103())
	{
		return 1;
	}
	return 0;
}

bool func_103()
{
	return Global_2448961.f_19;
}

var func_104()
{
	return Global_2448961.f_16;
}

var func_105()
{
	return Global_2448961.f_15;
}

int func_106(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969029.f_13[iParam0];
	if (func_102())
	{
		iVar2 = func_130(iParam1);
		if (!iVar2 == -1)
		{
			return func_128(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (IS_BIT_SET(Global_4456448.f_106[iParam0 /*11610*/].f_5831[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_398())
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
			iVar0 = func_88(iParam1, !bParam2, iParam0, 0);
		}
		if (IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_107(iParam0);
		}
		if (IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (IS_BIT_SET(Global_4456448.f_15, 26) && !func_93(iParam0, IS_BIT_SET(iParam1), 0))
		{
			iVar0 = func_100(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_107(int iParam0)
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

var func_108()
{
	return Global_2359302.f_2;
}

bool func_109()
{
	return IS_BIT_SET(Global_2359302, 4);
}

bool func_110()
{
	return IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_39.f_18, 14);
}

int func_111(int iParam0)
{
	if (func_376(iParam0, 0))
	{
		return 1;
	}
	if (func_112())
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

bool func_112()
{
	return IS_BIT_SET(Global_2359302, 3);
}

void func_113(var uParam0, int iParam1)
{
	func_114(uParam0, iParam1);
}

void func_114(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_115(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_398();
	uParam1->f_18 = func_398();
	uParam1->f_19 = func_398();
	uParam1->f_20 = func_398();
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

struct<4> func_116()
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_WONPG2", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_WONPG2", 16);
			break;
	}
	return Var0;
}

struct<4> func_117()
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_WONP", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_WONP", 16);
			break;
	}
	return Var0;
}

char* func_118(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == PLAYER_ID())
	{
		sVar0 = func_127(&(Global_1628955[iParam0 /*614*/].f_11.f_104));
		return sVar0;
	}
	if (Global_1628955[iParam0 /*614*/].f_11.f_120 != Global_1628955[PLAYER_ID() /*614*/].f_11.f_120)
	{
		sVar0 = func_122(iParam0, 0);
		return sVar0;
	}
	if (((func_40(iParam0, 28) || func_40(PLAYER_ID(), 28)) || func_121(iParam0)) && !func_120(iParam0))
	{
		return func_122(iParam0, 0);
	}
	iVar1 = func_119(iParam0);
	if (iVar1 != func_398())
	{
		if (iVar1 != PLAYER_ID())
		{
			if (!IS_DURANGO_VERSION() && !IS_DURANGO_VERSION(0, -1, 1))
			{
				return func_122(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_398())
	{
		sVar0 = func_127(&(Global_1628955[iVar1 /*614*/].f_11.f_104));
		if (IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return func_122(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_119(int iParam0)
{
	if (iParam0 != func_398())
	{
		return Global_1628955[iParam0 /*614*/].f_11;
	}
	return func_398();
}

int func_120(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_64(iParam0) };
	if (IS_DURANGO_VERSION())
	{
		if (_0x72D918C99BCACC54(0))
		{
			if (_0xB57A49545BA53CE7(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_121(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_398())
	{
		Var0 = { func_64(iParam0) };
		if (IS_ORBIS_VERSION() || IS_ORBIS_VERSION())
		{
			if (_0x72D918C99BCACC54(0))
			{
				return 0;
			}
		}
		else if (IS_DURANGO_VERSION())
		{
			if (_0x72D918C99BCACC54(0))
			{
				if (_0xB57A49545BA53CE7(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

char* func_122(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_124(iParam0, 1))
		{
			return func_123();
		}
	}
	return _GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_123()
{
	return _GET_LABEL_TEXT("GB_REST_ACCM");
}

bool func_124(int iParam0, bool bParam1)
{
	return func_125(iParam0, bParam1, 1);
}

int func_125(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_398())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_126(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628955[iParam0 /*614*/].f_11;
	if (iVar0 != func_398() && Global_1628955[iVar0 /*614*/].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_126(int iParam0, int iParam1)
{
	if (iParam0 != func_398())
	{
		if (Global_1628955[iParam0 /*614*/].f_11 != func_398())
		{
			if (Global_1628955[iParam0 /*614*/].f_11 == iParam0 && Global_1628955[iParam0 /*614*/].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_127(var uParam0)
{
	return uParam0;
}

int func_128(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_129(iParam0);
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

var func_129(int iParam0)
{
	return Global_2417783.f_2105.f_44[iParam0 /*2*/].f_1;
}

int func_130(int iParam0)
{
	if (!iParam0 == func_398())
	{
		if (func_131(iParam0, 1))
		{
			return Global_2417783.f_2105.f_11[func_119(iParam0)];
		}
	}
	return -1;
}

bool func_131(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_132(iParam0))
		{
			return 0;
		}
	}
	return Global_1628955[iParam0 /*614*/].f_11 != func_398();
}

int func_132(int iParam0)
{
	if (iParam0 != func_398())
	{
		if (Global_1628955[iParam0 /*614*/].f_11 != func_398())
		{
			return Global_1628955[iParam0 /*614*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_133()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_398();
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (iVar0 == func_398())
		{
			if (IS_BIT_SET(Local_112.f_10, iVar2))
			{
				if (NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(iVar2)))
				{
					iVar1 = NETWORK_GET_PLAYER_INDEX(NETWORK_GET_PLAYER_INDEX(iVar2));
					if (NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
					{
						iVar0 = iVar1;
					}
				}
			}
		}
		iVar2++;
	}
	return iVar0;
}

int func_134(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	func_115(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_113(&(Var0.f_69), iParam7);
	}
	return func_70(&Var0);
}

int func_135()
{
	if (Local_112.f_197 != 2)
	{
		return 64;
	}
	return 87;
}

struct<4> func_136()
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_WON", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_WON", 16);
			break;
	}
	return Var0;
}

void func_137(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	func_329(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_328(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		iVar1 = round((to_float(iVar1) / to_float(uParam2->f_4)));
		iVar1 = round((IntToFloat(iVar1) * fVar3));
		iVar1 = round((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + func_327(iParam0, bParam3));
		iVar0 = round((to_float(iVar0) / to_float(uParam2->f_4)));
		iVar0 = round((IntToFloat(iVar0) * fVar2));
		iVar0 = round((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = round((to_float(iVar1) / to_float(uParam2->f_4)));
		iVar1 = round((IntToFloat(iVar1) * fVar3));
		iVar1 = round((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = round((to_float(iVar0) / to_float(uParam2->f_4)));
		iVar0 = round((IntToFloat(iVar0) * fVar2));
		iVar0 = round((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_18 > -1)
	{
		iVar0 = (iVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (func_325(iParam0))
	{
		if (bParam1)
		{
			if (func_324(PLAYER_ID()) > 0)
			{
				func_323();
			}
			else
			{
				func_322();
			}
		}
		else
		{
			func_321();
		}
	}
	func_305(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_303(iParam0, uParam2, &iVar0, &iVar5);
	func_280(iParam0, uParam2, &iVar0, &iVar5);
	func_266(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_249(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2531497.f_4898.f_380 = iVar4;
	}
	else
	{
		Global_2531497.f_4898.f_380 = iVar5;
	}
	iVar8 = func_248();
	if (iVar8 != func_398() && iParam0 != 148)
	{
		if (func_131(PLAYER_ID(), 0))
		{
			if (!func_246(PLAYER_ID(), iVar8, 1))
			{
				func_236(&iVar0, 1);
			}
		}
	}
	func_230(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1674861.f_10 = iVar1;
		func_332();
		func_182(0, PLAYER_PED_ID(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1674861.f_9 = iVar0;
		func_169(iParam0, iVar0, iVar7, iVar4, iVar5, uParam2);
		func_168(iParam0, iVar0);
		if (func_167(iParam0))
		{
			if (func_166(iParam0) > -1)
			{
				func_333(func_166(iParam0), iVar0);
			}
		}
		Global_2461199 = iVar0;
		func_165(&Global_2459463, 0, 0);
	}
	if (func_41(PLAYER_ID()) || func_45(PLAYER_ID()))
	{
		func_153(iParam0);
	}
	if (func_152(iParam0))
	{
		Global_1674879.f_13 = iVar0;
		Global_1674879.f_14 = iVar1;
	}
	if (func_151(iParam0))
	{
		Global_1674933.f_13 = iVar0;
		Global_1674933.f_14 = iVar1;
	}
	if (func_150(iParam0))
	{
		Global_1674996.f_12 = iVar0;
		Global_1674996.f_13 = iVar1;
	}
	if (func_149(iParam0))
	{
		Global_1675040.f_12 = iVar0;
		Global_1675040.f_13 = iVar1;
	}
	if (func_148(iParam0))
	{
		Global_1675094.f_12 = iVar0;
		Global_1675094.f_13 = iVar1;
	}
	if (func_147(iParam0))
	{
		if (func_146(iParam0))
		{
			Global_1675175.f_12 = iVar0;
			Global_1675175.f_13 = iVar1;
		}
		else if (func_140(iParam0))
		{
			Global_1675228.f_12 = iVar0;
			Global_1675228.f_13 = iVar1;
		}
	}
	if (func_139(iParam0))
	{
		Global_1675312.f_12 = iVar0;
		Global_1675312.f_13 = iVar1;
	}
	if (func_138(iParam0))
	{
		Global_1675387.f_16 = iVar0;
		Global_1675387.f_17 = iVar1;
	}
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

int func_139(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

int func_140(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_141(func_142(PLAYER_ID()))))
	{
		return 1;
	}
	return 0;
}

int func_141(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 3:
		case 2:
		case 5:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

int func_142(int iParam0)
{
	if (func_145(iParam0) == 237 || func_145(iParam0) == 250)
	{
		return func_143(iParam0);
	}
	return -1;
}

int func_143(int iParam0)
{
	if (func_144(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_181;
	}
	return -1;
}

int func_144(int iParam0, int iParam1)
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 || (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_145(int iParam0)
{
	if (func_144(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_33;
	}
	return -1;
}

int func_146(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

int func_147(int iParam0)
{
	switch (iParam0)
	{
		case 236:
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
			return 1;
		
		default:
	}
	return 0;
}

int func_148(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_149(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_150(int iParam0)
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_151(int iParam0)
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

int func_152(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1590446[PLAYER_ID() /*871*/] == 148 && func_126(Global_1628955[PLAYER_ID() /*614*/].f_11.f_35, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_153(int iParam0)
{
	if (func_164(PLAYER_ID()) && func_162())
	{
		if (func_161(iParam0))
		{
			func_157(9639, -1);
		}
		else if (func_156(iParam0))
		{
			func_157(9641, -1);
		}
		else if (func_155(iParam0, 1))
		{
			func_157(9642, -1);
		}
		else if (func_154(iParam0))
		{
			func_157(9643, -1);
		}
	}
}

int func_154(int iParam0)
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

int func_155(int iParam0, int iParam1)
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

int func_156(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

void func_157(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_50(iParam0, func_51(iParam1), 0);
	iVar0++;
	if (!func_160(iParam0))
	{
		func_159(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_158(iParam0, iVar0, iParam1, 1);
	}
}

void func_158(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2542527[iParam0 /*3*/][func_51(iParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1384207[func_51(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1384213[func_51(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1384219[func_51(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1384225[func_51(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1384177[func_51(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1384183[func_51(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1384189[func_51(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1384195[func_51(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1384147[func_51(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1384153[func_51(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1384159[func_51(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1384165[func_51(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1384237[func_51(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1384243[func_51(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1384249[func_51(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1384255[func_51(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1384267[func_51(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1384273[func_51(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1384279[func_51(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1384285[func_51(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2578592[0 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2578592[1 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2578592[2 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2578592[3 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 9509:
			Global_2578729[func_51(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1384291[func_51(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1384297[func_51(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1384303[func_51(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1384315[func_51(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2578659[0 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2578659[1 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2578659[2 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2578659[3 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2578659[4 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2578732[0 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2578732[1 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2578732[2 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2578732[3 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2578732[4 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2578748[0 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2578748[1 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2578748[2 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2578748[3 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2578748[4 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2578659[5 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2578592[4 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2578764[func_51(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2578773[func_51(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2578767[func_51(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2578776[func_51(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2578770[func_51(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2578779[func_51(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2578782[func_51(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2578659[6 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2578592[5 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2578659[7 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2578592[6 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2578659[8 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2578592[7 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2578659[9 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2578592[8 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2578659[10 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2578592[9 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2578659[11 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2578592[10 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2578659[12 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2578592[11 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2578659[13 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2578592[12 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2578659[14 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2578592[13 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2578659[15 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2578592[14 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2578659[16 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2578592[15 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2578659[17 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2578592[16 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2578592[17 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2578592[18 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2578592[19 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2578592[20 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2578785[func_51(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2578788[func_51(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2578791[func_51(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2578794[func_51(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2578797[func_51(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2578800[func_51(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2578803[func_51(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2578806[func_51(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2578809[func_51(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2578812[func_51(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2578815[func_51(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2578818[func_51(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2578821[func_51(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2578824[func_51(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2578592[21 /*3*/][func_51(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_159(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_51(iParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_160(int iParam0)
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

int func_161(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

bool func_162()
{
	return func_163(PLAYER_ID());
}

bool func_163(int iParam0)
{
	return func_126(iParam0, 1);
}

bool func_164(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_119, 14);
}

void func_165(var uParam0, bool bParam1, bool bParam2)
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

int func_166(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_167(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_168(int iParam0, int iParam1)
{
	if (func_164(PLAYER_ID()) && func_162())
	{
		if (func_161(iParam0) && iParam1 > 0)
		{
			func_159(9640, (func_50(9640, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_169(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	struct<2> Var7;
	
	iVar5 = func_181();
	if (iVar5 != func_398())
	{
		func_180(iVar5, &uVar0, &uVar1);
	}
	bVar6 = !func_179(1);
	Var7.f_1 = -1;
	switch (iParam0)
	{
		case 168:
			if (!func_346())
			{
				0xECA658CE2A4E5A72(iParam1, iParam3);
			}
			break;
		
		case 190:
			if (func_162())
			{
				if (!func_346())
				{
					Var7 = { func_178() };
					0x8586789730B10CAF(iParam1, 0x8586789730B10CAF(func_177(Var7)), func_176(Var7), iParam4);
				}
			}
			else if (func_346())
			{
				func_335(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				0xECA658CE2A4E5A72(iParam1, iParam4);
			}
			break;
		
		case 226:
			if (func_175())
			{
				if (!func_346())
				{
					0x8586789730B10CAF(iParam1, 0x8586789730B10CAF(func_177(func_174(0x8586789730B10CAF()))), 5, iParam4);
				}
			}
			else if (func_346())
			{
				func_335(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				0xECA658CE2A4E5A72(iParam1, iParam4);
			}
			break;
		
		case 230:
			if (func_175())
			{
				if (!func_346())
				{
					iVar2 = func_170(uParam5->f_16, iParam4);
					iVar3 = iParam1;
					if (iVar2 > 0)
					{
						iVar3 = (iVar3 - iVar2);
					}
					if (iParam2 > 0)
					{
						iVar3 = (iVar3 - iParam2);
					}
					0x6B7E4FB50D5F3D65(iVar3, iParam4, iParam2, iVar2, uParam5->f_16);
				}
			}
			else if (func_346())
			{
				func_335(463142405, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				0xDEE612F2D71B0308(uVar0, uVar1, iParam1, bVar6);
			}
			break;
		
		case 233:
			if (func_346())
			{
				func_335(1407278493, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				0xED26584F6BDCBBFD(iParam1);
			}
			break;
		
		case 237:
			if (func_175())
			{
				if (!func_346())
				{
					0x0B39CF0D53F1C883(iParam1, uParam5->f_20, iParam4);
				}
			}
			else if (func_346())
			{
				func_335(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				0xECA658CE2A4E5A72(iParam1, iParam4);
			}
			break;
		
		case 250:
			if (func_346())
			{
				func_335(-961034881, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				0xA75EAC69F59E96E7(iParam1);
			}
			break;
		
		case 249:
			if (func_346())
			{
				func_335(1135468152, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				0xC5156361F26E2212(iParam1);
			}
			break;
		
		case 242:
		case 244:
		case 248:
		case 241:
		case 239:
		case 240:
			if (func_346())
			{
				func_335(-634726636, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				0x1FDA0AA679C9919B(iParam1);
			}
			break;
		
		case 243:
			if (func_346())
			{
				func_335(1698417709, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				0x566FD402B25787DE(iParam1);
			}
			break;
		
		case 158:
			if (uParam5->f_21)
			{
				if (func_346())
				{
					func_335(1668610896, iParam1, &iVar4, 0, 1, 0);
				}
				else
				{
					0x72E7C7B9615FA3C3(iParam1, 0, 0, 1, iParam1, 0, 0);
				}
			}
			else if (func_346())
			{
				func_335(-2032529561, iParam1, &iVar4, 0, 1, 0);
			}
			else
			{
				0x72E7C7B9615FA3C3(iParam1, 1, iParam1, 0, 0, 0, 0);
			}
			break;
		
		default:
			if (func_346())
			{
				func_335(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263810[iVar4 /*84*/].f_6 = uVar0;
				Global_4263810[iVar4 /*84*/].f_7 = uVar1;
				Global_4263810[iVar4 /*84*/].f_8 = bVar6;
			}
			else
			{
				0x0CB1BE0633C024A8(uVar0, uVar1, iParam1, bVar6);
			}
			break;
	}
}

int func_170(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_173(iParam0, iParam1);
	fVar1 = (to_float(func_171(iParam0, iParam1)) * fVar0);
	return round(fVar1);
}

int func_171(int iParam0, int iParam1)
{
	return (func_172(iParam0) * iParam1);
}

int func_172(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_22294;
		
		case 0:
			return Global_262145.f_22295;
		
		case 1:
			return Global_262145.f_22296;
		
		case 2:
			return Global_262145.f_22297;
		
		case 3:
			return Global_262145.f_22298;
		
		case 4:
			return Global_262145.f_22299;
		
		case 5:
			return Global_262145.f_22300;
		
		case 6:
			return Global_262145.f_22301;
		
		case 7:
			return Global_262145.f_22302;
		
		default:
	}
	return 0;
}

float func_173(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = to_float(Global_262145.f_22304);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_22306;
			fVar1 = to_float(Global_262145.f_22303);
			break;
		
		case 3:
			fVar0 = Global_262145.f_22306;
			fVar1 = to_float(Global_262145.f_22303);
			break;
		
		case 0:
			fVar0 = Global_262145.f_22307;
			break;
		
		case 1:
			fVar0 = Global_262145.f_22307;
			break;
		
		case 4:
			fVar0 = Global_262145.f_22307;
			break;
		
		case 6:
			fVar0 = Global_262145.f_22308;
			fVar1 = to_float(Global_262145.f_22305);
			break;
		
		case 2:
			fVar0 = Global_262145.f_22308;
			fVar1 = to_float(Global_262145.f_22305);
			break;
		
		case 5:
			fVar0 = Global_262145.f_22308;
			fVar1 = to_float(Global_262145.f_22305);
			break;
	}
	iVar2 = floor((to_float(iParam1) / fVar1));
	return (to_float(iVar2) * fVar0);
}

int func_174(int iParam0)
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return Global_1590446[iParam0 /*871*/].f_273.f_179[5 /*12*/];
}

bool func_175()
{
	return func_132(PLAYER_ID());
}

int func_176(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

char* func_177(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_178()
{
	return Global_1628955[PLAYER_ID() /*614*/].f_11.f_193;
}

bool func_179(bool bParam0)
{
	return func_131(PLAYER_ID(), bParam0);
}

void func_180(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1628955[iParam0 /*614*/].f_11.f_8[0];
	*uParam2 = Global_1628955[iParam0 /*614*/].f_11.f_8[1];
}

int func_181()
{
	return Global_1628955[PLAYER_ID() /*614*/].f_11;
}

int func_182(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_183(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_183(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_193(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (DOES_ENTITY_EXIST(iParam1))
		{
			if (IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_189(GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_184(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_184(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0 = { func_187(iParam0, 1) };
	if (iParam0 == func_186(PLAYER_PED_ID()))
	{
		func_185(1);
	}
	func_189(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_185(int iParam0)
{
	Global_2437549.f_1890 = iParam0;
}

int func_186(int iParam0)
{
	return iParam0;
}

Vector3 func_187(int iParam0, bool bParam1)
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
	if (iParam0 == func_188(PLAYER_PED_ID()) && PLAYER_PED_ID(PLAYER_PED_ID()) == 4)
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

int func_188(int iParam0)
{
	return iParam0;
}

void func_189(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
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
			Global_2437549.f_1289[iVar1 /*30*/].f_4 = func_192(Global_2437549.f_1289[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2437549.f_1289[iVar1 /*30*/].f_7 = 0xBA7F0B77D80A4EB7();
			Global_2437549.f_1289[iVar1 /*30*/].f_3 = iParam1;
			Global_2437549.f_1289[iVar1 /*30*/].f_8 = iParam2;
			Global_2437549.f_1289[iVar1 /*30*/].f_9 = func_191();
			Global_2437549.f_1289[iVar1 /*30*/].f_10 = func_190();
			StringCopy(&(Global_2437549.f_1289[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2437549.f_1289[iVar1 /*30*/].f_26 = HAS_NETWORK_TIME_STARTED(HAS_NETWORK_TIME_STARTED(), iParam4);
		}
	}
}

int func_190()
{
	if (Global_2437549.f_1890)
	{
		Global_2437549.f_1890 = 0;
		return 1;
	}
	Global_2437549.f_1890 = 0;
	return 0;
}

var func_191()
{
	var uVar0;
	
	uVar0 = Global_2437549.f_1892;
	Global_2437549.f_1892 = 1;
	return uVar0;
}

float func_192(vector3 vParam0, var uParam1, var uParam2)
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

var func_193(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_194(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_194(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (iParam1 == 0)
	{
		if (func_229(PLAYER_ID()) || func_228(PLAYER_ID()))
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
		else if (func_226() || func_225(PLAYER_ID()))
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
		else if (func_103())
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
	if (func_224(sParam2))
	{
	}
	if (func_223())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_221(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_220(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_217(0, &iVar1);
					break;
				
				case 3:
					func_217(1, &iVar1);
					break;
				
				case 1:
					func_214(&iVar1);
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
			func_213(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_204((func_211(PLAYER_ID(), 1) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1590446[PLAYER_ID() /*871*/].f_39.f_2 != -1)
				{
					func_213(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_199(iVar1);
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
				func_195((func_197(PLAYER_ID()) + iVar1));
			}
			else
			{
				func_195((func_197(PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_195(int iParam0)
{
	if (func_223())
	{
		Global_1590446[PLAYER_ID() /*871*/].f_211.f_5 = iParam0;
		func_196(joaat("mpply_globalxp"), iParam0);
	}
}

void func_196(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_197(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_1276(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER_ID())
			{
				return func_198(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1590446[iParam0 /*871*/].f_211.f_5;
			}
		}
		else
		{
			return func_198(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_198(int iParam0)
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

void func_199(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_64(PLAYER_ID()) };
	if (_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_202(func_203(&Var0));
			if (iVar1 == 0)
			{
				func_201(&Global_1384134, iParam0);
				func_200(joaat("mpply_crew_local_xp_0"), Global_1384134);
			}
			else if (iVar1 == 1)
			{
				func_201(&Global_1384135, iParam0);
				func_200(joaat("mpply_crew_local_xp_1"), Global_1384135);
			}
			else if (iVar1 == 2)
			{
				func_201(&Global_1384136, iParam0);
				func_200(joaat("mpply_crew_local_xp_2"), Global_1384136);
			}
			else if (iVar1 == 3)
			{
				func_201(&Global_1384137, iParam0);
				func_200(joaat("mpply_crew_local_xp_3"), Global_1384137);
			}
			else if (iVar1 == 4)
			{
				func_201(&Global_1384138, iParam0);
				func_200(joaat("mpply_crew_local_xp_4"), Global_1384138);
			}
		}
	}
}

void func_200(int iParam0, int iParam1)
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

void func_201(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_202(int iParam0)
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

int func_203(var uParam0)
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

void func_204(int iParam0, int iParam1, int iParam2)
{
	if (func_223())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1384279[func_51(-1)])
				{
					PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1384279[func_51(-1)])
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
		if (func_210(PLAYER_ID()))
		{
			Global_1590446[PLAYER_ID() /*871*/].f_211.f_1 = iParam0;
			Global_1590446[PLAYER_ID() /*871*/].f_211.f_6 = func_208(iParam0, 1);
		}
		func_158(639, iParam0, -1, 1);
		func_159(640, func_208(iParam0, 1), -1, 1, 0);
		Global_1384279[func_51(-1)] = iParam0;
		func_205(-1109644434, 7, 0);
	}
}

void func_205(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_207(iParam1, iParam2))
	{
		iVar0 = func_206();
		Global_2458876[iVar0] = iParam1;
		Global_2458887[iVar0] = iParam0;
	}
}

int func_206()
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

int func_207(int iParam0, var uParam1)
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

int func_208(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_209(iParam0, 0);
}

int func_209(int iParam0, int iParam1)
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

int func_210(int iParam0)
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

int func_211(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_212(iParam0);
}

int func_212(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER_ID())
			{
				return Global_1384279[func_51(-1)];
			}
			else if (func_210(iParam0))
			{
				return Global_1590446[iParam0 /*871*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1384279[func_51(-1)];
	}
	return 0;
}

void func_213(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_50(iParam0, func_51(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_160(iParam0))
	{
		func_159(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_158(iParam0, iVar0, iParam2, 1);
	}
}

void func_214(int iParam0)
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
				if (GET_PLAYER_TEAM(iVar5) == iVar1 || func_93(GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER_ID())
					{
						if (func_216(PLAYER_ID(), iVar5))
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
		iVar6 = round((func_215(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_215(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_215(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_216(int iParam0, int iParam1)
{
	if (_NETWORK_PLAYER_IS_IN_CLAN())
	{
		Global_2507671 = { func_64(iParam0) };
		Global_2507684 = { func_64(iParam1) };
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

void func_217(bool bParam0, int iParam1)
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
				if (func_1276(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER_ID())
					{
						iVar1++;
						if (func_216(PLAYER_ID(), iVar4))
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
			if (func_1276(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER_ID())
				{
					if (func_218(PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_216(PLAYER_ID(), iVar4))
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
		iVar5 = round((func_215(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_215(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_218(int iParam0, int iParam1)
{
	return vdist(func_219(iParam0), func_219(iParam1));
	return 0f;
}

Vector3 func_219(int iParam0)
{
	return GET_ENTITY_COORDS(GET_ENTITY_COORDS(iParam0), false);
}

int func_220(int iParam0)
{
	int iVar0;
	
	if (GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_215(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_221(int iParam0)
{
	if (iParam0 < 0)
	{
		if (ABSI(iParam0) > func_211(ABSI(), 1))
		{
			iParam0 = -func_211(PLAYER_ID(), 1);
		}
	}
	if (func_222(8000, 0, 0) > 0)
	{
		if (func_222(8000, 0, 0) < (iParam0 + func_211(PLAYER_ID(), 1)))
		{
			iParam0 = (func_222(8000, 0, 0) - func_211(PLAYER_ID(), 1));
		}
	}
	return iParam0;
}

int func_222(int iParam0, bool bParam1, int iParam2)
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

int func_223()
{
	return 1;
}

int func_224(char* sParam0)
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

int func_225(int iParam0)
{
	return func_148(func_145(iParam0));
}

bool func_226()
{
	if (NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_81();
	}
	return func_227(Global_4456448.f_154360);
}

int func_227(int iParam0)
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

bool func_228(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 2;
}

bool func_229(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 7;
}

void func_230(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_235(7))
	{
		return;
	}
	iVar0 = func_233(iParam0);
	iVar1 = func_232(iParam0);
	iVar2 = ABSI(ABSI(Global_2531497.f_4898.f_263, ABSI()));
	if (func_231(iParam0) != -1)
	{
		if (iVar2 > func_231(iParam0))
		{
			iVar2 = func_231(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_12395)
	{
		iVar2 = Global_262145.f_12395;
	}
	iVar3 = floor((to_float(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_231(int iParam0)
{
	if (func_155(iParam0, 0) || func_156(iParam0))
	{
		return Global_262145.f_18475;
	}
	if (func_161(iParam0))
	{
		return Global_262145.f_18474;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_18471;
		
		case 191:
			return Global_262145.f_18473;
		
		case 190:
			return Global_262145.f_18472;
		
		case 227:
			return Global_262145.f_21031;
		
		case 226:
			return Global_262145.f_21019;
		
		case 225:
			return Global_262145.f_21039;
		
		case 230:
			return Global_262145.f_22291;
		
		case 229:
			return Global_262145.f_22195;
		
		case 233:
			return Global_262145.f_22767;
		
		case 237:
			return Global_262145.f_23930;
		
		case 238:
			return Global_262145.f_24041;
		
		case 249:
			return Global_262145.f_24057;
		
		case 243:
			return Global_262145.f_26237;
		
		default:
	}
	return -1;
}

int func_232(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12486;
		
		case 152:
			return Global_262145.f_12521;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12509;
		
		case 157:
			return Global_262145.f_12476;
		
		case 159:
			return Global_262145.f_12459;
		
		case 164:
			return Global_262145.f_12499;
		
		case 160:
			return Global_262145.f_12549;
		
		case 162:
			return Global_262145.f_12569;
		
		case 163:
			return Global_262145.f_12534;
		
		case 154:
			return Global_262145.f_12604;
		
		case 155:
			return Global_262145.f_12594;
		
		case 153:
			return Global_262145.f_12558;
		
		case 170:
			return Global_262145.f_14983;
		
		case 171:
			return Global_262145.f_15042;
		
		case 172:
			return Global_262145.f_15060;
		
		case 173:
			return Global_262145.f_15001;
		
		case 166:
			return Global_262145.f_15016;
		
		case 167:
			return Global_262145.f_15107;
		
		case 169:
			return Global_262145.f_15079;
		
		case 168:
			return Global_262145.f_15072;
		
		case 179:
			return Global_262145.f_18354;
		
		case 180:
			return Global_262145.f_18132;
		
		case 182:
			return Global_262145.f_18132;
		
		case 183:
			return Global_262145.f_18132;
		
		case 185:
			return Global_262145.f_18132;
		
		case 186:
			return Global_262145.f_18132;
		
		case 189:
			return Global_262145.f_18354;
		
		case 190:
			return Global_262145.f_18008;
		
		case 191:
			return Global_262145.f_18099;
		
		case 192:
			return Global_262145.f_17893;
		
		case 193:
			return Global_262145.f_18354;
		
		case 194:
			return Global_262145.f_18354;
		
		case 195:
			return Global_262145.f_18132;
		
		case 197:
			return Global_262145.f_18132;
		
		case 198:
			return Global_262145.f_18132;
		
		case 199:
			return Global_262145.f_18354;
		
		case 200:
			return Global_262145.f_18354;
		
		case 201:
			return Global_262145.f_18354;
		
		case 205:
			return Global_262145.f_18354;
		
		case 207:
			return Global_262145.f_18132;
		
		case 208:
			return Global_262145.f_18132;
		
		case 209:
			return Global_262145.f_18132;
		
		case 210:
			return Global_262145.f_18354;
		
		case 211:
			return Global_262145.f_18354;
		
		case 214:
			return Global_262145.f_19204;
		
		case 215:
			return Global_262145.f_19206;
		
		case 216:
			return Global_262145.f_19208;
		
		case 217:
			return Global_262145.f_19210;
		
		case 218:
			return Global_262145.f_19212;
		
		case 219:
			return Global_262145.f_19214;
		
		case 220:
			return Global_262145.f_19216;
		
		case 221:
			return Global_262145.f_19218;
		
		case 225:
			if (!func_175())
			{
				return Global_262145.f_21041;
			}
			break;
		
		case 226:
			if (!func_175())
			{
				return Global_262145.f_21021;
			}
			break;
		
		case 227:
			if (!func_175())
			{
				return Global_262145.f_21033;
			}
			break;
		
		case 229:
			if (!func_175())
			{
				return Global_262145.f_22197;
			}
			break;
		
		case 230:
			if (!func_175())
			{
				return Global_262145.f_22293;
			}
			break;
		
		case 233:
			if (!func_175())
			{
				return Global_262145.f_22766;
			}
			break;
		
		case 241:
			return 100;
		
		case 242:
			return 100;
		
		case 244:
			return 100;
		
		case 248:
			return 100;
		
		case 239:
			return 100;
		
		case 240:
			return 100;
		
		case 250:
			return 100;
		
		case 237:
			if (!func_175())
			{
				return Global_262145.f_23932;
			}
			break;
		
		case 238:
			if (!func_175())
			{
				return Global_262145.f_24043;
			}
			break;
		
		case 249:
			if (!func_175())
			{
				return Global_262145.f_24059;
			}
			break;
		
		case 243:
			if (!func_175())
			{
				return Global_262145.f_26240;
			}
			break;
		
		case 158:
			if (!func_175())
			{
				return 100;
			}
			break;
	}
	return 0;
}

int func_233(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12485;
		
		case 152:
			return Global_262145.f_12520;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12508;
		
		case 157:
			return Global_262145.f_12475;
		
		case 159:
			return Global_262145.f_12458;
		
		case 164:
			return Global_262145.f_12498;
		
		case 160:
			return Global_262145.f_12548;
		
		case 162:
			return Global_262145.f_12568;
		
		case 163:
			return Global_262145.f_12533;
		
		case 154:
			return Global_262145.f_12603;
		
		case 155:
			return Global_262145.f_12593;
		
		case 153:
			return Global_262145.f_12557;
		
		case 170:
			return Global_262145.f_14982;
		
		case 171:
			return Global_262145.f_15041;
		
		case 172:
			return Global_262145.f_15059;
		
		case 173:
			return Global_262145.f_15000;
		
		case 166:
			return Global_262145.f_15015;
		
		case 179:
			return Global_262145.f_18353;
		
		case 180:
			return Global_262145.f_18131;
		
		case 182:
			return Global_262145.f_18131;
		
		case 183:
			return Global_262145.f_18131;
		
		case 185:
			return Global_262145.f_18131;
		
		case 186:
			return Global_262145.f_18131;
		
		case 189:
			return Global_262145.f_18353;
		
		case 193:
			return Global_262145.f_18353;
		
		case 194:
			return Global_262145.f_18353;
		
		case 195:
			return Global_262145.f_18131;
		
		case 197:
			return Global_262145.f_18131;
		
		case 198:
			return Global_262145.f_18131;
		
		case 199:
			return Global_262145.f_18353;
		
		case 200:
			return Global_262145.f_18353;
		
		case 201:
			return Global_262145.f_18353;
		
		case 205:
			return Global_262145.f_18353;
		
		case 207:
			return Global_262145.f_18131;
		
		case 208:
			return Global_262145.f_18131;
		
		case 209:
			return Global_262145.f_18131;
		
		case 210:
			return Global_262145.f_18353;
		
		case 211:
			return Global_262145.f_18353;
		
		case 190:
			if (func_234(0))
			{
				return Global_262145.f_18007;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (func_234(0))
			{
				return Global_262145.f_18098;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (func_234(0))
			{
				return Global_262145.f_17892;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_19203;
		
		case 215:
			return Global_262145.f_19205;
		
		case 216:
			return Global_262145.f_19207;
		
		case 217:
			return Global_262145.f_19209;
		
		case 218:
			return Global_262145.f_19211;
		
		case 219:
			return Global_262145.f_19213;
		
		case 220:
			return Global_262145.f_19215;
		
		case 221:
			return Global_262145.f_19217;
		
		case 225:
			if (func_234(0))
			{
				return Global_262145.f_21040;
			}
			break;
		
		case 226:
			if (func_234(0))
			{
				return Global_262145.f_21020;
			}
			break;
		
		case 227:
			if (func_234(0))
			{
				return Global_262145.f_21032;
			}
			break;
		
		case 229:
			if (func_234(0))
			{
				return Global_262145.f_22196;
			}
			break;
		
		case 230:
			if (func_234(0))
			{
				return Global_262145.f_22292;
			}
			break;
		
		case 233:
			if (func_234(0))
			{
				return Global_262145.f_22768;
			}
			break;
		
		case 241:
			return 500;
		
		case 242:
			return 500;
		
		case 244:
			return 500;
		
		case 248:
			return 500;
		
		case 239:
			return 500;
		
		case 240:
			return 500;
		
		case 250:
			return 500;
		
		case 237:
			if (func_234(0))
			{
				return Global_262145.f_23931;
			}
			break;
		
		case 238:
			if (func_234(0))
			{
				return Global_262145.f_24042;
			}
			break;
		
		case 249:
			if (func_234(0))
			{
				return Global_262145.f_24058;
			}
			break;
		
		case 243:
			return Global_262145.f_26236;
		
		case 158:
			if (func_234(0))
			{
				return 500;
			}
			break;
	}
	return 0;
}

bool func_234(bool bParam0)
{
	return func_124(PLAYER_ID(), bParam0);
}

bool func_235(int iParam0)
{
	return IS_BIT_SET(Global_2531497.f_4898.f_43, iParam0);
}

void func_236(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_175())
		{
			if (func_179(0))
			{
				if (!func_234(0))
				{
					if (NETWORK_IS_PLAYER_ACTIVE(func_181()))
					{
						if (func_245() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_245());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_243(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_242("GB_BCUT_TICK1", func_181(), iVar0, 0, 0, 1, 1);
						}
						func_241(20);
						func_237(func_181(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_237(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_1276(iParam0, 0, 1))
	{
		Var0 = -1590759069;
		Var0.f_1 = PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_240(iParam0);
		func_239(&(Var0.f_6), &(Var0.f_7));
		TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_238(iParam0));
	}
}

int func_238(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

void func_239(var uParam0, var uParam1)
{
	*uParam0 = Global_1651198.f_9;
	*uParam1 = Global_1651198.f_10;
}

var func_240(int iParam0)
{
	return Global_1628955[iParam0 /*614*/].f_532;
}

void func_241(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	SET_BIT(&(Global_2531497.f_4898.f_7[iVar0]), iVar1);
}

int func_242(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
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
		_SET_NOTIFICATION_COLOR_NEXT(func_86(iParam1, -2, 1, 0, 0));
		ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_59(&Var1));
		if (!iParam3 == 0)
		{
			_SET_NOTIFICATION_COLOR_NEXT(iParam3);
		}
		ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
		func_54(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_243(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_244(1);
	}
	else
	{
		iVar1 = func_244(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_244(bool bParam0)
{
	if (bParam0)
	{
		return round((0.05f * 100f));
	}
	return Global_262145.f_12390;
}

int func_245()
{
	return Global_262145.f_12389;
}

int func_246(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_398())
	{
		if (!bParam2)
		{
			if (func_247(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1628955[iParam0 /*614*/].f_11 != func_398())
		{
			return iParam1 == Global_1628955[iParam0 /*614*/].f_11;
		}
	}
	return 0;
}

int func_247(int iParam0, int iParam1)
{
	if (iParam1 != func_398())
	{
		if (iParam0 != func_398())
		{
			if (Global_1628955[iParam0 /*614*/].f_11 != func_398())
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

int func_248()
{
	return Global_1628955[PLAYER_ID() /*614*/].f_11.f_35;
}

void func_249(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	bVar18 = func_234(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_175())
		{
			iVar17 = PLAYER_ID();
		}
		else
		{
			iVar17 = func_181();
		}
		iVar11 = iVar17;
		if (iVar11 != -1)
		{
			iVar0 = Global_1590446[iVar11 /*871*/].f_849.f_1;
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = to_float(uParam1->f_10);
				fVar13 = to_float(uParam1->f_11);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = ceil(fVar15);
			}
			*uParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_1590446[iVar11 /*871*/].f_849.f_2;
			}
			else
			{
				iVar2 = func_265(Global_1590446[iVar11 /*871*/].f_849, *uParam3);
			}
			if (uParam1->f_17)
			{
				iVar20 = (iVar2 - ceil((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = func_264(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == PLAYER_ID())
				{
					func_263("TICK_TCUT", iVar10, 1);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1675175.f_49 = *uParam3;
			if (iVar17 == PLAYER_ID())
			{
				if (iVar2 > 0)
				{
					func_262(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_260(*uParam3);
				}
				iVar6 = func_259(&uVar5);
				iVar7 = Global_262145.f_23961;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = ceil((IntToFloat(iVar6) * Global_262145.f_23960));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_241(140);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
						{
							iVar22 = iVar21;
							if (NETWORK_IS_PARTICIPANT_ACTIVE(iVar22))
							{
								iVar23 = NETWORK_GET_PLAYER_INDEX(iVar22);
								if (func_258(iVar23))
								{
									func_250(iVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_2531497.f_4898.f_379 = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_262145.f_23933;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_23934;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1686916 = *iParam2;
					func_241(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_250(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_252(iParam0);
	func_251(iParam0, uVar0, iParam1, iParam2);
}

void func_251(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0 = -1548391120;
	Var0.f_1 = PLAYER_ID();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_240(iParam0);
	func_239(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_398())
	{
		if (NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_238(iParam0));
		}
	}
}

int func_252(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_257();
	iVar0 = func_255(iParam0, iVar0);
	iVar1 = Global_1628955[func_181() /*614*/].f_11.f_449;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14943));
	if (iVar0 < func_254())
	{
		iVar0 = func_254();
	}
	if (iVar0 > func_253())
	{
		iVar0 = func_253();
	}
	return iVar0;
}

int func_253()
{
	return Global_262145.f_14944;
}

int func_254()
{
	return Global_262145.f_16119;
}

int func_255(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_324(iParam0) * func_256());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_256()
{
	return Global_262145.f_16118;
}

var func_257()
{
	return Global_262145.f_12381;
}

int func_258(int iParam0)
{
	if (NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (iParam0 != PLAYER_ID())
		{
			if (func_246(iParam0, PLAYER_ID(), 0))
			{
				if (!func_40(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_259(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK_IS_PLAYER_ACTIVE(NETWORK_IS_PLAYER_ACTIVE(iVar0)))
		{
			iVar2 = INT_TO_PLAYERINDEX(iVar0);
			if (!func_376(iVar2, 0) && !func_246(iVar2, PLAYER_ID(), 1))
			{
				iVar1++;
			}
			else if (func_376(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_260(int iParam0)
{
	func_261(iParam0, 7236);
}

void func_261(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_50(iParam1, -1, 0);
	func_159(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_262(int iParam0)
{
	func_261(iParam0, 7231);
}

int func_263(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
	func_54(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_264(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = to_float(iParam0);
	fVar1 = (fVar0 * Global_262145.f_23962);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return round(fVar1);
}

int func_265(struct<5> Param0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (iParam1 == Param0.f_1)
	{
		return Param0.f_2;
	}
	iVar0 = Param0.f_2;
	if ((Param0.f_4 == 1 || Param0.f_4 == 2) || Param0.f_4 == 3)
	{
		iVar0 = (iVar0 - Param0.f_3);
	}
	fVar1 = (to_float(iParam1) / to_float(Param0.f_1));
	fVar2 = to_float(iVar0);
	return floor((fVar2 * fVar1));
}

void func_266(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	*uParam4 = 0;
	bVar16 = func_234(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_175())
		{
			iVar15 = PLAYER_ID();
		}
		else
		{
			iVar15 = func_181();
		}
		if (iVar15 != -1)
		{
			if (uParam1->f_16 == 8)
			{
				iVar0 = (func_278(iVar15) + uParam1->f_8);
			}
			else
			{
				iVar0 = (func_269(uParam1->f_16) + uParam1->f_8);
			}
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = to_float(uParam1->f_10);
				fVar11 = to_float(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = ceil(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_171(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_170(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_268(*iParam2) > 0)
			{
				if (iVar15 == PLAYER_ID())
				{
					func_263("SMTICK_RONCUT", func_268(*iParam2), 1);
				}
				*iParam2 = (*iParam2 - func_268(*iParam2));
			}
			if (iVar15 == PLAYER_ID())
			{
				func_267(iVar2, iVar9);
				iVar6 = func_259(&uVar5);
				iVar7 = Global_262145.f_22310;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = ceil((IntToFloat(iVar6) * Global_262145.f_22309));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_241(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
						{
							iVar19 = iVar18;
							if (NETWORK_IS_PARTICIPANT_ACTIVE(iVar19))
							{
								iVar20 = NETWORK_GET_PLAYER_INDEX(iVar19);
								if (func_258(iVar20))
								{
									func_250(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2531497.f_4898.f_379 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_22243;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_22244;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1686916 = *iParam2;
					func_241(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_267(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_261(iParam0, 6116);
	}
	if (iParam1 > 0)
	{
		func_261(iParam1, 6117);
	}
}

int func_268(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = to_float(iParam0);
	fVar1 = (fVar0 * Global_262145.f_22277);
	if (fVar1 > to_float(Global_262145.f_22278))
	{
		fVar1 = to_float(Global_262145.f_22278);
	}
	return round(fVar1);
}

int func_269(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_276())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_278(PLAYER_ID());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_271(func_272(func_275(iVar0), -1, -1));
		if (func_270(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_270(int iParam0)
{
	switch (iParam0)
	{
		case -508960047:
			return 5;
		
		case -1996578712:
			return 5;
		
		case -324063008:
			return 7;
		
		case -1537242760:
			return 7;
		
		case 167523060:
			return 1;
		
		case 440723308:
			return 1;
		
		case -1821684485:
			return 6;
		
		case 1075487129:
			return 6;
		
		case 1339867730:
			return 4;
		
		case 1158536477:
			return 4;
		
		case -1222709082:
			return 0;
		
		case -260422691:
			return 0;
		
		case -1117639471:
			return 3;
		
		case -1434473216:
			return 3;
		
		case 690570889:
			return 2;
		
		case 320416020:
			return 2;
		
		default:
	}
	return -1;
}

int func_271(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -508960047;
		
		case 2:
			return -1996578712;
		
		case 3:
			return -324063008;
		
		case 4:
			return -1537242760;
		
		case 5:
			return 167523060;
		
		case 6:
			return 440723308;
		
		case 7:
			return -1821684485;
		
		case 8:
			return 1075487129;
		
		case 9:
			return 1339867730;
		
		case 10:
			return 1158536477;
		
		case 11:
			return -1222709082;
		
		case 12:
			return -260422691;
		
		case 13:
			return -1117639471;
		
		case 14:
			return -1434473216;
		
		case 15:
			return 690570889;
		
		case 16:
			return 320416020;
		
		default:
	}
	return 0;
}

int func_272(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_52();
	}
	iVar0 = 0;
	iVar1 = func_274(iParam0, iParam1);
	iVar2 = func_273(iParam0);
	if (0 != iVar1)
	{
		if (!STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_273(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - _0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - _0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - _0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - _0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - _0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - _0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - _0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - _0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - _0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - _0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - _0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - _0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - _0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - _0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - _0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - _0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - _0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - _0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - _0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - _0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - _0x94F12ABF9C79E339((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - _0x94F12ABF9C79E339((iParam0 - 27258)) * 8) * 8;
	}
	return iVar0;
}

int func_274(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_52();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = _GET_PSTAT_INT_HASH((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = _GET_PSTAT_INT_HASH((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = _GET_PSTAT_INT_HASH((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = _GET_PSTAT_INT_HASH((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = _GET_TUPSTAT_INT_HASH((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = _GET_TUPSTAT_INT_HASH((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
	}
	return iVar0;
}

int func_275(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16011;
		
		case 1:
			return 16012;
		
		case 2:
			return 16013;
		
		case 3:
			return 16014;
		
		case 4:
			return 16015;
		
		case 5:
			return 16016;
		
		case 6:
			return 16017;
		
		case 7:
			return 16018;
		
		case 8:
			return 16019;
		
		case 9:
			return 16020;
		
		case 10:
			return 16021;
		
		case 11:
			return 16022;
		
		case 12:
			return 16023;
		
		case 13:
			return 16024;
		
		case 14:
			return 16025;
		
		case 15:
			return 16026;
		
		case 16:
			return 16027;
		
		case 17:
			return 16028;
		
		case 18:
			return 16029;
		
		case 19:
			return 16030;
		
		case 20:
			return 16031;
		
		case 21:
			return 16032;
		
		case 22:
			return 16033;
		
		case 23:
			return 16034;
		
		case 24:
			return 16035;
		
		case 25:
			return 16036;
		
		case 26:
			return 16037;
		
		case 27:
			return 16038;
		
		case 28:
			return 16039;
		
		case 29:
			return 16040;
		
		case 30:
			return 16041;
		
		case 31:
			return 16042;
		
		case 32:
			return 16043;
		
		case 33:
			return 16044;
		
		case 34:
			return 16045;
		
		case 35:
			return 16046;
		
		case 36:
			return 16047;
		
		case 37:
			return 16048;
		
		case 38:
			return 16049;
		
		case 39:
			return 16050;
		
		case 40:
			return 16051;
		
		case 41:
			return 16052;
		
		case 42:
			return 16053;
		
		case 43:
			return 16054;
		
		case 44:
			return 16055;
		
		case 45:
			return 16056;
		
		case 46:
			return 16057;
		
		case 47:
			return 16058;
		
		case 48:
			return 16059;
		
		case 49:
			return 16060;
		
		default:
	}
	return 16011;
}

bool func_276()
{
	return func_277() != 0;
}

int func_277()
{
	return Global_1590446[PLAYER_ID() /*871*/].f_273.f_260;
}

int func_278(int iParam0)
{
	if (iParam0 != func_398() && func_279(iParam0))
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_260.f_3;
	}
	return 0;
}

int func_279(int iParam0)
{
	if (iParam0 != func_398())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_260 != 0;
	}
	return 0;
}

void func_280(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	bVar17 = func_234(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_175())
		{
			iVar15 = PLAYER_ID();
		}
		else
		{
			iVar15 = func_181();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_174(iVar15);
			iVar0 = (func_302(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = to_float(uParam1->f_10);
				fVar11 = to_float(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = ceil(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_298(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = ceil((IntToFloat(iVar2) * Global_262145.f_21023));
			}
			else
			{
				iVar2 = ceil((IntToFloat(iVar2) * Global_262145.f_21022));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == PLAYER_ID())
			{
				func_295(iVar16, iVar2);
				if (func_291(iVar16) >= Global_262145.f_20571 || iVar2 >= Global_262145.f_20571)
				{
					func_281(5);
				}
				iVar6 = func_259(&uVar5);
				iVar7 = round(Global_262145.f_21025);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = ceil((IntToFloat(iVar6) * Global_262145.f_21024));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_241(108);
					}
					else
					{
						func_241(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
						{
							iVar19 = iVar18;
							if (NETWORK_IS_PARTICIPANT_ACTIVE(iVar19))
							{
								iVar20 = NETWORK_GET_PLAYER_INDEX(iVar19);
								if (func_258(iVar20))
								{
									func_250(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2531497.f_4898.f_379 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_21026;
				iVar3 = ceil((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_21027;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1686916 = *iParam2;
					func_241(112);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_281(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20559)
			{
				if (func_283(Global_262145.f_20560))
				{
					func_282("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_20561)
			{
				if (func_283(Global_262145.f_20562))
				{
					func_282("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_20563)
			{
				if (func_283(Global_262145.f_20564))
				{
					func_282("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_20565)
			{
				if (func_283(Global_262145.f_20566))
				{
					func_282("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_20567)
			{
				if (func_283(Global_262145.f_20568))
				{
					func_282("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_20569)
			{
				if (func_283(Global_262145.f_20570))
				{
					func_263("CLOTHAWDSTRAP3", Global_262145.f_20571, 1);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_20572)
			{
				if (func_283(Global_262145.f_20573))
				{
					func_263("CLOTHAWDSTRAP5", Global_262145.f_20705, 1);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_20575)
			{
				if (func_283(Global_262145.f_20576))
				{
					func_282("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_20577)
			{
				if (func_283(Global_262145.f_20578))
				{
					func_282("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_20579)
			{
				if (func_283(Global_262145.f_20580))
				{
					func_282("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_20581)
			{
				if (func_283(Global_262145.f_20582))
				{
					func_282("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_20583)
			{
				if (func_283(Global_262145.f_20584))
				{
					func_282("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_20585)
			{
				if (func_283(Global_262145.f_20586))
				{
					func_282("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_20587)
			{
				if (func_283(Global_262145.f_20588))
				{
					func_282("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_20589)
			{
				if (func_283(Global_262145.f_20590))
				{
					func_282("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_282(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	if (!iParam2 == 0)
	{
		_SET_NOTIFICATION_COLOR_NEXT(iParam2);
	}
	if (!iParam3 == 0)
	{
		_SET_NOTIFICATION_COLOR_NEXT(iParam3);
	}
	ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	if (!bParam4)
	{
		iVar0 = END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
	}
	else
	{
		Global_2507671 = { func_64(PLAYER_ID()) };
		if (NETWORK_CLAN_PLAYER_GET_DESC(&Global_2507601, 35, &Global_2507671))
		{
			iVar1 = 0;
			if (ARE_STRINGS_EQUAL(&(Global_2507601.f_22), "Leader") && Global_2507601.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2507601.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(iVar2, END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(&Global_2507601, 35), &(Global_2507601.f_17), Global_2507601.f_30, iVar1, 0, Global_2507601, END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME()), Global_1314030, Global_1314031, Global_1314032);
		}
		else
		{
			iVar0 = END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
		}
	}
	func_54(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_283(int iParam0)
{
	switch (iParam0)
	{
		case 558790811:
		case 1740171158:
		case -1191485992:
		case -1735342207:
			if (!func_288(15417, -1, -1))
			{
				func_287(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2108830041:
		case -120911428:
		case -1407302654:
		case -2039798986:
			if (!func_288(15418, -1, -1))
			{
				func_287(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1898746692:
		case -1359197372:
		case -140996548:
		case -1850642937:
			if (!func_288(15425, -1, -1))
			{
				func_287(15425, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -695364761:
		case 1263491585:
		case -1307315235:
		case 258618816:
			if (!func_288(15405, -1, -1))
			{
				func_287(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2024167318:
		case 1915398071:
		case -571324979:
		case 1374601256:
			if (!func_288(15393, -1, -1))
			{
				func_287(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1720955761:
		case 1608057620:
		case 867332432:
		case -660288110:
			if (!func_288(15409, -1, -1))
			{
				func_287(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case 221872318:
		case -1802539904:
		case -1005186539:
		case -426022529:
			if (!func_288(15396, -1, -1))
			{
				func_287(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2098369500:
		case -1196968784:
		case -1314656979:
		case -1132522169:
			if (!func_288(15412, -1, -1))
			{
				func_287(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1172743557:
		case -1502212019:
		case 1110085176:
		case -889671110:
			if (!func_286(209, -1))
			{
				func_284(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1883175477:
		case -584614481:
		case -1736983851:
		case -182614393:
			if (!func_288(15403, -1, -1))
			{
				func_287(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1449333520:
		case -890709710:
		case -1496983695:
		case 48701978:
			if (!func_286(209, -1))
			{
				func_284(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -869990766:
		case -581140963:
		case 1827333048:
		case -646852824:
			if (!func_288(15389, -1, -1))
			{
				func_287(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case -542628448:
		case -870458464:
		case 420690954:
		case -408392811:
			if (!func_286(209, -1))
			{
				func_284(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 787769067:
		case 1132791298:
		case 1330653315:
		case 1717168382:
			if (!func_288(15398, -1, -1))
			{
				func_287(15398, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -1361097493:
		case -73647644:
		case -1036580403:
		case -1765816422:
		case -1991379993:
		case -1731611121:
			if (!func_288(15400, -1, -1))
			{
				func_287(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1167465472:
		case -313418417:
		case -203035350:
		case -1533320367:
		case 2065127290:
		case -390081030:
			if (!func_286(209, -1))
			{
				func_284(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2105609173:
		case -698486936:
		case 917598912:
		case 939297301:
		case -56403312:
		case -1368923829:
			if (!func_288(15408, -1, -1))
			{
				func_287(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1864920868:
		case -1072905530:
		case 682284723:
		case 1186965403:
		case -292700571:
		case -2068738593:
			if (!func_286(209, -1))
			{
				func_284(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1729183056:
		case 2114404000:
		case 481083063:
		case 1575507436:
		case -648899601:
		case -612123774:
			if (!func_288(15411, -1, -1))
			{
				func_287(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1967315379:
		case 1750602562:
		case 114660105:
		case 1783131820:
		case -889194678:
		case 801334272:
			if (!func_288(15397, -1, -1))
			{
				func_287(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1192623422:
		case 1330733365:
		case 1897981854:
		case 2059866009:
		case 867092646:
		case -146705667:
			if (!func_288(15413, -1, -1))
			{
				func_287(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1444780905:
		case 1272666697:
		case 1601455173:
		case -1997689882:
		case 627387411:
		case -847831191:
			if (!func_288(15391, -1, -1))
			{
				func_287(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case 444212231:
		case -1563654102:
		case 1932815241:
		case -1617209023:
		case 308545041:
		case 1682427144:
			if (!func_288(15388, -1, -1))
			{
				func_287(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case 704955164:
		case -720081735:
		case 1626031863:
		case -1391954917:
		case 35480964:
		case 2029975158:
			if (!func_286(209, -1))
			{
				func_284(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1124704392:
		case -850093035:
		case 926585800:
		case -1832969872:
		case 1539395388:
		case 1377465778:
			if (!func_288(15401, -1, -1))
			{
				func_287(15401, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 1029334921:
		case -322091380:
		case -1604737223:
		case -836382797:
			if (!func_288(15394, -1, -1))
			{
				func_287(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case -534855486:
		case -1168575065:
		case -1367129204:
		case -1006027910:
			if (!func_286(209, -1))
			{
				func_284(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -516333262:
		case 756873456:
		case 87453937:
		case -1438775324:
			if (!func_288(15406, -1, -1))
			{
				func_287(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case 485135095:
		case -730037708:
		case -1686659723:
		case -1094274807:
			if (!func_288(15395, -1, -1))
			{
				func_287(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1713551997:
		case -970458486:
		case 1992217604:
		case -1348726092:
			if (!func_286(209, -1))
			{
				func_284(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1490658501:
		case 975601953:
		case -1934557208:
		case 1786218600:
			if (!func_288(15410, -1, -1))
			{
				func_287(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1735635238:
		case 1614208560:
		case -1034032319:
		case -1858021894:
			if (!func_288(15407, -1, -1))
			{
				func_287(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1931303956:
		case -726032561:
		case 1747334867:
		case 1237632771:
			if (!func_286(209, -1))
			{
				func_284(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1931617488:
		case -1824987162:
		case 236389050:
		case 1987485798:
			if (!func_286(209, -1))
			{
				func_284(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1726332301:
		case 417579524:
		case 591736086:
		case 908992470:
			if (!func_288(15414, -1, -1))
			{
				func_287(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1382922530:
		case 734151492:
		case -357636850:
		case -1021993708:
			if (!func_288(15415, -1, -1))
			{
				func_287(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case 452778672:
		case -1766862320:
		case 479676642:
		case -1654828636:
			if (!func_288(15399, -1, -1))
			{
				func_287(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1776790350:
		case 579562906:
		case 242920617:
		case -1365707749:
			if (!func_288(15404, -1, -1))
			{
				func_287(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1988057295:
		case -619754931:
		case -1219723702:
		case -388208479:
			if (!func_286(209, -1))
			{
				func_284(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 816707921:
		case 1424441799:
		case -1576971340:
		case 2087194554:
			if (!func_288(15392, -1, -1))
			{
				func_287(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case 744446190:
		case -1405036369:
		case -622901905:
		case 981732339:
			if (!func_288(15390, -1, -1))
			{
				func_287(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case 917772807:
		case 1929056908:
		case -981132613:
		case 1271443068:
			if (!func_288(15402, -1, -1))
			{
				func_287(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case -292922355:
		case -34538790:
		case -1908986844:
		case -1785118184:
			if (!func_288(15416, -1, -1))
			{
				func_287(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1495432685:
		case 1898518287:
		case 2029126042:
		case -1521032813:
			if (!func_286(209, -1))
			{
				func_284(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -2123485438:
		case 1457900554:
		case -14316613:
		case 619771057:
			if (!func_288(15426, -1, -1))
			{
				func_287(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case -815706791:
		case -1066127505:
		case 1281631799:
		case -1519028808:
			if (!func_288(15422, -1, -1))
			{
				func_287(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1318802347:
		case -1366750043:
		case 447234752:
		case 1996626130:
			if (!func_288(15423, -1, -1))
			{
				func_287(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case 306110040:
		case 1944822196:
		case 278933172:
		case -1981759857:
			if (!func_288(15421, -1, -1))
			{
				func_287(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1828101251:
		case -1639289459:
		case -562607521:
		case -879279621:
			if (!func_288(15427, -1, -1))
			{
				func_287(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case -919314748:
		case 1282565442:
		case 755492739:
		case 1276101346:
			if (!func_288(15419, -1, -1))
			{
				func_287(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1971111649:
		case -884280700:
		case -85982412:
		case 1573086793:
			if (!func_288(15420, -1, -1))
			{
				func_287(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_284(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_285())
	{
		iVar0 = Global_2576213[iParam0 /*3*/][func_51(iParam2)];
		if (iVar0 != 0)
		{
			STAT_SET_BOOL(iVar0, bParam1, iParam3);
		}
	}
}

int func_285()
{
	return 1;
	return 0;
}

int func_286(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2576213[iParam0 /*3*/][func_51(iParam1)];
	if (STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_287(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_52();
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

int func_288(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_52();
	}
	iVar1 = func_290(iParam0, iParam1);
	uVar2 = func_289(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_289(int iParam0)
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

int func_290(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_52();
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

int func_291(int iParam0)
{
	int iVar0;
	
	iVar0 = func_293(iParam0);
	return func_50(func_292(iVar0), -1, 0);
}

int func_292(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3951;
		
		case 1:
			return 3952;
		
		case 2:
			return 3953;
		
		case 3:
			return 3954;
		
		case 4:
			return 3955;
		
		case 5:
			return 5456;
		
		default:
	}
	return 3951;
}

int func_293(int iParam0)
{
	int iVar0;
	
	if (func_294(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[PLAYER_ID() /*871*/].f_273.f_179[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_294(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_295(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_293(iParam0);
	iVar1 = func_292(iVar0);
	iVar2 = (func_50(iVar1, -1, 0) + iParam1);
	func_159(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_272(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[PLAYER_ID() /*871*/].f_273.f_179[iVar0 /*12*/] != 0)
			{
				iVar1 = func_292(iVar0);
				iVar3 = (iVar3 + func_50(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_297(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_296(9357, iVar5, -1, 1);
	}
}

var func_296(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_52();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = _GET_PSTAT_INT_HASH((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - _0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = _GET_PSTAT_INT_HASH((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - _0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = _GET_PSTAT_INT_HASH((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - _0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = _GET_PSTAT_INT_HASH((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - _0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = _GET_TUPSTAT_INT_HASH((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - _0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = _GET_TUPSTAT_INT_HASH((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - _0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - _0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - _0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - _0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - _0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - _0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - _0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - _0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - _0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - _0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - _0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - _0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - _0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - _0x94F12ABF9C79E339((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 27258), 0, 1, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - _0x94F12ABF9C79E339((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - _0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = _GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - _0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = STAT_SET_MASKED_INT(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_297(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		
		case 2:
			return 300000;
			break;
		
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_298(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_176(iParam1);
	if (func_294(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16948;
				if (func_299(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16953);
				}
				if (func_299(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16958);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16947;
				if (func_299(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16952);
				}
				if (func_299(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16957);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16946;
				if (func_299(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16951);
				}
				if (func_299(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16956);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16944;
				if (func_299(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16949);
				}
				if (func_299(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16954);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16945;
				if (func_299(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16950);
				}
				if (func_299(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16955);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_21048;
				if (func_299(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_21050);
				}
				if (func_299(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_21049);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_299(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_301(iParam0, iParam1))
	{
		iVar0 = func_300(iParam0, iParam1);
		return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_300(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_294(iParam1) && iParam0 != func_398())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_301(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_294(iParam1) && iParam0 != func_398())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_302(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_398())
	{
		return 0;
	}
	if (func_294(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_303(int iParam0, var uParam1, int iParam2, var uParam3)
{
	struct<2> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14;
	float fVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	int iVar23;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_162())
			{
				Var0 = { func_178() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar1 = to_float(uParam1->f_10);
					fVar2 = to_float(uParam1->f_11);
					fVar3 = ((fVar1 / fVar2) * 100f);
					iVar4 = (uParam1->f_15 + uParam1->f_8);
					fVar5 = ((IntToFloat(iVar4) / 100f) * fVar3);
					*uParam3 = ceil(fVar5);
				}
				iVar6 = func_298(PLAYER_ID(), Var0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar7 = (to_float(iVar6) * Global_262145.f_18583);
					iVar6 = round(fVar7);
				}
				else
				{
					fVar8 = (to_float(iVar6) * Global_262145.f_18582);
					iVar6 = round(fVar8);
				}
				*iParam2 = (*iParam2 + iVar6);
				iVar10 = func_259(&uVar9);
				iVar11 = round(Global_262145.f_18573);
				if (iVar10 > iVar11)
				{
					iVar10 = iVar11;
				}
				iVar12 = ceil((IntToFloat(iVar10) * Global_262145.f_18572));
				iVar13 = ((*iParam2 / 100) * iVar12);
				*iParam2 = (*iParam2 + iVar13);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar10 > 0)
				{
					func_241(86);
				}
				Global_2531497.f_4898.f_379 = *iParam2;
			}
			else if (func_234(0))
			{
				Var14 = { func_304(func_181()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar15 = to_float(uParam1->f_10);
					fVar16 = to_float(uParam1->f_11);
					fVar17 = ((fVar15 / fVar16) * 100f);
					iVar18 = (uParam1->f_15 + uParam1->f_8);
					fVar19 = ((IntToFloat(iVar18) / 100f) * fVar17);
					*uParam3 = ceil(fVar19);
				}
				iVar20 = func_298(func_181(), Var14, *uParam3);
				if (Var14.f_1 == 1)
				{
					iVar20 = ceil((IntToFloat(iVar20) * Global_262145.f_18583));
				}
				else if (Var14.f_1 == 0)
				{
					iVar20 = ceil((IntToFloat(iVar20) * Global_262145.f_18582));
				}
				*iParam2 = (*iParam2 + iVar20);
				fVar21 = Global_262145.f_18622;
				iVar22 = ceil((IntToFloat(*iParam2) * fVar21));
				*iParam2 = iVar22;
				iVar23 = Global_262145.f_18623;
				if (*iParam2 > iVar23)
				{
					*iParam2 = iVar23;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_304(int iParam0)
{
	return Global_1628955[iParam0 /*614*/].f_11.f_193;
}

void func_305(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 == 167)
	{
		if (func_132(PLAYER_ID()))
		{
			if (bParam1)
			{
				func_320();
			}
			func_319();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_132(PLAYER_ID()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_311(Global_1628955[PLAYER_ID() /*614*/].f_11.f_182));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_310(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_259(&uVar2);
					iVar4 = Global_262145.f_16129;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = ceil((IntToFloat(iVar3) * Global_262145.f_15338));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_241(44);
					}
				}
				func_308(*iParam3);
				func_307();
				Global_2531497.f_4898.f_379 = *iParam3;
				iVar7 = 0;
				while (iVar7 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
				{
					iVar8 = iVar7;
					if (NETWORK_IS_PARTICIPANT_ACTIVE(iVar8))
					{
						iVar9 = NETWORK_GET_PLAYER_INDEX(iVar8);
						if (func_258(iVar9))
						{
							func_250(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_132(PLAYER_ID()))
		{
			func_306();
		}
	}
}

void func_306()
{
	int iVar0;
	
	iVar0 = Global_2578770[func_52()];
	iVar0++;
	func_158(3667, iVar0, -1, 1);
}

void func_307()
{
	int iVar0;
	
	iVar0 = Global_2578776[func_52()];
	iVar0++;
	func_158(3666, iVar0, -1, 1);
}

void func_308(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2578779[func_52()];
	iVar0 = (iVar0 + iParam0);
	func_158(3668, iVar0, -1, 1);
	if (func_272(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_309(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_296(7666, iVar2, -1, 1);
	}
}

int func_309(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_16262;
			break;
		
		case 2:
			return Global_262145.f_16263;
			break;
		
		case 3:
			return Global_262145.f_16264;
			break;
		
		case 4:
			return Global_262145.f_16265;
			break;
		
		case 5:
			return Global_262145.f_16266;
			break;
		
		case 6:
			return Global_262145.f_16267;
			break;
		
		case 7:
			return Global_262145.f_16268;
			break;
		
		case 8:
			return Global_262145.f_16269;
			break;
		
		case 9:
			return Global_262145.f_16270;
			break;
		
		case 10:
			return Global_262145.f_16271;
			break;
		
		case 11:
			return Global_262145.f_16272;
			break;
		
		case 12:
			return Global_262145.f_16273;
			break;
		
		case 13:
			return Global_262145.f_16274;
			break;
		
		case 14:
			return Global_262145.f_16275;
			break;
		
		case 15:
			return Global_262145.f_16276;
			break;
		
		case 16:
			return Global_262145.f_16277;
			break;
		
		case 17:
			return Global_262145.f_16278;
			break;
		
		case 18:
			return Global_262145.f_16279;
			break;
		
		case 19:
			return Global_262145.f_16280;
			break;
		
		case 20:
			return Global_262145.f_16281;
			break;
		
		case 21:
			return Global_262145.f_16282;
			break;
		
		case 22:
			return Global_262145.f_16283;
			break;
		
		case 23:
			return Global_262145.f_16284;
			break;
		
		case 24:
			return Global_262145.f_16285;
			break;
	}
	return 0;
}

var func_310(int iParam0)
{
	if (iParam0 >= Global_262145.f_15316)
	{
		return Global_262145.f_15337;
	}
	else if (iParam0 >= Global_262145.f_15315)
	{
		return Global_262145.f_15336;
	}
	else if (iParam0 >= Global_262145.f_15314)
	{
		return Global_262145.f_15335;
	}
	else if (iParam0 >= Global_262145.f_15313)
	{
		return Global_262145.f_15334;
	}
	else if (iParam0 >= Global_262145.f_15312)
	{
		return Global_262145.f_15333;
	}
	else if (iParam0 >= Global_262145.f_15311)
	{
		return Global_262145.f_15332;
	}
	else if (iParam0 >= Global_262145.f_15310)
	{
		return Global_262145.f_15331;
	}
	else if (iParam0 >= Global_262145.f_15309)
	{
		return Global_262145.f_15330;
	}
	else if (iParam0 >= Global_262145.f_15308)
	{
		return Global_262145.f_15329;
	}
	else if (iParam0 >= Global_262145.f_15307)
	{
		return Global_262145.f_15328;
	}
	else if (iParam0 >= Global_262145.f_15306)
	{
		return Global_262145.f_15327;
	}
	else if (iParam0 >= Global_262145.f_15305)
	{
		return Global_262145.f_15326;
	}
	else if (iParam0 >= Global_262145.f_15304)
	{
		return Global_262145.f_15325;
	}
	else if (iParam0 >= Global_262145.f_15303)
	{
		return Global_262145.f_15324;
	}
	else if (iParam0 >= Global_262145.f_15302)
	{
		return Global_262145.f_15323;
	}
	else if (iParam0 >= Global_262145.f_15301)
	{
		return Global_262145.f_15322;
	}
	else if (iParam0 >= Global_262145.f_15300)
	{
		return Global_262145.f_15321;
	}
	else if (iParam0 >= Global_262145.f_15299)
	{
		return Global_262145.f_15320;
	}
	else if (iParam0 >= Global_262145.f_15298)
	{
		return Global_262145.f_15319;
	}
	else if (iParam0 >= Global_262145.f_15297)
	{
		return Global_262145.f_15318;
	}
	return Global_262145.f_15317;
}

int func_311(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_318(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_317(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_316(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_312(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_312(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_316(GET_RANDOM_INT_IN_RANGE(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_312(int iParam0)
{
	int iVar0;
	
	if (func_315(iParam0))
	{
		iVar0 = func_313(func_314(iParam0));
		return func_50(iVar0, -1, 0);
	}
	return 0;
}

int func_313(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3646;
	}
	else if (iParam0 == 1)
	{
		return 3647;
	}
	else if (iParam0 == 2)
	{
		return 3648;
	}
	else if (iParam0 == 3)
	{
		return 3649;
	}
	else if (iParam0 == 4)
	{
		return 3650;
	}
	return 3646;
}

int func_314(int iParam0)
{
	int iVar0;
	
	if (func_315(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590446[PLAYER_ID() /*871*/].f_273.f_102[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_315(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_316(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15516;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15514;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15518;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15512;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15510;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15520;
	}
	return 0;
}

int func_317(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_315(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1676590[iVar0] == iParam1 && Global_1676597[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_318(int iParam0)
{
	int iVar0;
	
	if (func_315(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590446[PLAYER_ID() /*871*/].f_273.f_102[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_319()
{
	int iVar0;
	
	iVar0 = Global_2578767[func_52()];
	iVar0++;
	Global_2578767[func_52()] = iVar0;
	func_158(3665, iVar0, -1, 1);
}

void func_320()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2578764[func_52()];
	iVar1 = Global_2578773[func_52()];
	iVar0++;
	iVar1++;
	Global_2578764[func_52()] = iVar0;
	Global_2578773[func_52()] = iVar1;
	Global_1590446[PLAYER_ID() /*871*/].f_273.f_124 = iVar1;
	func_158(3663, iVar0, -1, 1);
	func_158(3664, iVar1, -1, 1);
}

void func_321()
{
	if (func_175())
	{
		Global_2449755.f_3072.f_134 = 0;
		Global_1628955[PLAYER_ID() /*614*/].f_11.f_449 = Global_2449755.f_3072.f_134;
	}
}

void func_322()
{
	if (func_175())
	{
		if (Global_2449755.f_3072.f_134 < 10)
		{
			Global_2449755.f_3072.f_134++;
			Global_1628955[PLAYER_ID() /*614*/].f_11.f_449 = Global_2449755.f_3072.f_134;
		}
	}
}

void func_323()
{
	if (func_175())
	{
		if (Global_2449755.f_3072.f_134 > 0)
		{
			Global_2449755.f_3072.f_134 = (Global_2449755.f_3072.f_134 - 1);
			Global_1628955[PLAYER_ID() /*614*/].f_11.f_449 = Global_2449755.f_3072.f_134;
		}
	}
}

int func_324(int iParam0)
{
	return Global_1628955[iParam0 /*614*/].f_11.f_28;
}

int func_325(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
		case 158:
			if (func_179(1) && !func_234(1))
			{
				if (func_326(func_181()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_326(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_24, 26);
}

int func_327(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return Global_262145.f_18269;
	}
	switch (iParam0)
	{
		case 142:
			return round((IntToFloat(Global_262145.f_12506) * Global_262145.f_12511));
		
		case 157:
			return 0;
		
		case 159:
			return round((IntToFloat(Global_262145.f_12456) * Global_262145.f_12461));
		
		case 151:
			return 0;
		
		case 148:
			return round((IntToFloat(Global_262145.f_12483) * Global_262145.f_12487));
		
		case 164:
			return round((IntToFloat(Global_262145.f_12496) * Global_262145.f_12500));
		
		case 152:
			return round((IntToFloat(Global_262145.f_12518) * Global_262145.f_12523));
		
		case 153:
			return round((IntToFloat(Global_262145.f_12680) * Global_262145.f_12681));
		
		case 154:
			return round((IntToFloat(Global_262145.f_12686) * Global_262145.f_12687));
		
		case 155:
			return round((IntToFloat(Global_262145.f_12684) * Global_262145.f_12685));
		
		case 160:
			return round((IntToFloat(Global_262145.f_12678) * Global_262145.f_12679));
		
		case 162:
			return round((IntToFloat(Global_262145.f_12682) * Global_262145.f_12683));
		
		case 163:
			return round((IntToFloat(Global_262145.f_12676) * Global_262145.f_12677));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_15039;
		
		case 172:
			return Global_262145.f_15055;
		
		case 173:
			return Global_262145.f_14998;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_18277;
		
		case 180:
			return Global_262145.f_18152;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18160;
		
		case 185:
			return Global_262145.f_18169;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18365;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18382;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18229;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18413;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18291;
		
		case 205:
			return Global_262145.f_18400;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18258;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18395;
		
		case 211:
			return Global_262145.f_18359;
		
		case 214:
			return Global_262145.f_18953;
		
		case 215:
			return Global_262145.f_18963;
		
		case 216:
			return Global_262145.f_18973;
		
		case 217:
			return Global_262145.f_18982;
		
		case 218:
			return Global_262145.f_18991;
		
		case 219:
			return Global_262145.f_19007;
		
		case 241:
			return Global_262145.f_24078;
		
		case 242:
			return Global_262145.f_24074;
		
		case 248:
			return Global_262145.f_24077;
		
		case 244:
			return Global_262145.f_24075;
		
		case 239:
			return Global_262145.f_24079;
		
		case 240:
			return Global_262145.f_24080;
		
		case 243:
			return Global_262145.f_26235;
		
		default:
	}
	return 0;
}

int func_328(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return Global_262145.f_18270;
	}
	switch (iParam0)
	{
		case 142:
			return round((IntToFloat(Global_262145.f_12507) * Global_262145.f_12512));
		
		case 157:
			return 0;
		
		case 159:
			return round((IntToFloat(Global_262145.f_12457) * Global_262145.f_12462));
		
		case 151:
			return 0;
		
		case 148:
			return round((IntToFloat(Global_262145.f_12484) * Global_262145.f_12488));
		
		case 164:
			return round((IntToFloat(Global_262145.f_12497) * Global_262145.f_12501));
		
		case 152:
			return round((IntToFloat(Global_262145.f_12519) * Global_262145.f_12524));
		
		case 153:
			return round((IntToFloat(Global_262145.f_12556) * Global_262145.f_12559));
		
		case 154:
			return round((IntToFloat(Global_262145.f_12602) * Global_262145.f_12605));
		
		case 155:
			return round((IntToFloat(Global_262145.f_12592) * Global_262145.f_12595));
		
		case 160:
			return round((IntToFloat(Global_262145.f_12547) * Global_262145.f_12550));
		
		case 162:
			return round((IntToFloat(Global_262145.f_12567) * Global_262145.f_12572));
		
		case 163:
			return round((IntToFloat(Global_262145.f_12532) * Global_262145.f_12535));
		
		case 170:
			return Global_262145.f_14981;
		
		case 171:
			return Global_262145.f_15040;
		
		case 172:
			return Global_262145.f_15056;
		
		case 173:
			return Global_262145.f_14999;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_17078;
		
		case 168:
			return Global_262145.f_17077;
		
		case 179:
			return Global_262145.f_18278;
		
		case 180:
			return Global_262145.f_18153;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18161;
		
		case 185:
			return Global_262145.f_18170;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18366;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18383;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18230;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18414;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18292;
		
		case 205:
			return Global_262145.f_18401;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18259;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18396;
		
		case 211:
			return Global_262145.f_18360;
		
		case 214:
			return Global_262145.f_18954;
		
		case 215:
			return Global_262145.f_18964;
		
		case 216:
			return Global_262145.f_18974;
		
		case 217:
			return Global_262145.f_18983;
		
		case 218:
			return Global_262145.f_18992;
		
		case 219:
			return Global_262145.f_19008;
		
		case 178:
			if (func_175())
			{
				return Global_262145.f_18831;
			}
			else if (bParam1)
			{
				return Global_262145.f_18832;
			}
			break;
		
		case 188:
			if (func_175())
			{
				return Global_262145.f_18915;
			}
			else if (bParam1)
			{
				return Global_262145.f_18916;
			}
			break;
		
		case 225:
			if (func_175() && !func_162())
			{
				if (func_326(PLAYER_ID()))
				{
					return Global_262145.f_21036;
				}
				else
				{
					return Global_262145.f_21037;
				}
			}
			else if (func_162())
			{
				return Global_262145.f_21038;
			}
			break;
		
		case 226:
			if (func_175() && !func_162())
			{
				if (func_326(PLAYER_ID()))
				{
					return Global_262145.f_21016;
				}
				else
				{
					return Global_262145.f_21017;
				}
			}
			else if (func_162())
			{
				return Global_262145.f_21018;
			}
			break;
		
		case 227:
			if (func_175() && !func_162())
			{
				if (func_326(PLAYER_ID()))
				{
					return Global_262145.f_21028;
				}
				else
				{
					return Global_262145.f_21029;
				}
			}
			else if (func_162())
			{
				return Global_262145.f_21030;
			}
			break;
		
		case 229:
			if (func_175() && !func_162())
			{
				if (func_326(PLAYER_ID()))
				{
					return Global_262145.f_22192;
				}
				else
				{
					return Global_262145.f_22193;
				}
			}
			else if (func_162())
			{
				return Global_262145.f_22194;
			}
			break;
		
		case 230:
			if (func_175() && !func_162())
			{
				if (func_326(PLAYER_ID()))
				{
					return Global_262145.f_22288;
				}
				else
				{
					return Global_262145.f_22289;
				}
			}
			else if (func_162())
			{
				return Global_262145.f_22290;
			}
			break;
		
		case 233:
			if (func_175() && !func_162())
			{
				if (func_326(PLAYER_ID()))
				{
					return Global_262145.f_22764;
				}
				else
				{
					return Global_262145.f_22765;
				}
			}
			else if (func_162())
			{
				return Global_262145.f_22763;
			}
			break;
		
		case 241:
			return Global_262145.f_24085;
		
		case 242:
			return Global_262145.f_24081;
		
		case 244:
			return Global_262145.f_24082;
		
		case 248:
			return Global_262145.f_24084;
		
		case 239:
			return Global_262145.f_24086;
		
		case 240:
			return Global_262145.f_24087;
		
		case 237:
			if (func_175() && !func_162())
			{
				if (func_326(PLAYER_ID()))
				{
					return Global_262145.f_23927;
				}
				else
				{
					return Global_262145.f_23928;
				}
			}
			else if (func_162())
			{
				return Global_262145.f_23929;
			}
			break;
		
		case 238:
			if (func_175() && !func_162())
			{
				if (func_326(PLAYER_ID()))
				{
					return Global_262145.f_24038;
				}
				else
				{
					return Global_262145.f_24039;
				}
			}
			else if (func_162())
			{
				return Global_262145.f_24040;
			}
			break;
		
		case 249:
			if (func_175() && !func_162())
			{
				if (func_326(PLAYER_ID()))
				{
					return Global_262145.f_24054;
				}
				else
				{
					return Global_262145.f_24055;
				}
			}
			else if (func_162())
			{
				return Global_262145.f_24056;
			}
			break;
		
		case 243:
			if (func_175() && !func_162())
			{
				if (func_326(PLAYER_ID()))
				{
					return Global_262145.f_26238;
				}
				else
				{
					return Global_262145.f_26239;
				}
			}
			else if (func_162())
			{
				return Global_262145.f_26238;
			}
			break;
		
		case 158:
			if (func_175() && !func_162())
			{
				if (func_326(PLAYER_ID()))
				{
					return 1500;
				}
				else
				{
					return 1000;
				}
			}
			else if (func_162())
			{
				return 1500;
			}
			break;
	}
	return 0;
}

void func_329(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_330(iParam0))
	{
		if (!func_175())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_12400;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_131(PLAYER_ID(), 1))
	{
		if (func_152(iParam0))
		{
			*uParam1 = (Global_262145.f_18129 / 100f);
			*uParam2 = (Global_262145.f_18129 / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_262145.f_24088;
			*uParam2 = Global_262145.f_24088;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_262145.f_24089;
			*uParam2 = Global_262145.f_24089;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_262145.f_24091;
			*uParam2 = Global_262145.f_24091;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_262145.f_24092;
			*uParam2 = Global_262145.f_24092;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_262145.f_24093;
			*uParam2 = Global_262145.f_24093;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_262145.f_24094;
			*uParam2 = Global_262145.f_24094;
		}
		else
		{
			*uParam1 = Global_262145.f_12397;
			*uParam2 = Global_262145.f_12396;
		}
	}
	else if (func_152(iParam0))
	{
		*uParam1 = (Global_262145.f_18130 / 100f);
		*uParam2 = (Global_262145.f_18130 / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_262145.f_24095;
		*uParam2 = Global_262145.f_24095;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_262145.f_24096;
		*uParam2 = Global_262145.f_24096;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_262145.f_24098;
		*uParam2 = Global_262145.f_24098;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_262145.f_24099;
		*uParam2 = Global_262145.f_24099;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_262145.f_24100;
		*uParam2 = Global_262145.f_24100;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_262145.f_24101;
		*uParam2 = Global_262145.f_24101;
	}
	else
	{
		*uParam1 = Global_262145.f_12399;
		*uParam2 = Global_262145.f_12398;
	}
	iVar0 = func_248();
	if (iVar0 != func_398())
	{
		if (func_246(PLAYER_ID(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_330(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

var func_331(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_193(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

void func_332()
{
	Global_2460540 = 1;
}

void func_333(int iParam0, int iParam1)
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

bool func_334()
{
	return Global_262145.f_11406;
}

void func_335(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_346())
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
				func_336(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_336(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_336(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_336(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_336(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_346())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!_NETWORK_SHOP_GET_TRANSACTIONS_ENABLED_FOR_CHARACTER(func_52()) || _NETWORK_SHOP_GET_TRANSACTIONS_ENABLED_FOR_CHARACTER())
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
			*uParam0 = func_343(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_342(1, iParam4);
			Global_4264385 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_337(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_337(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			SET_BIT(&(Global_2424073[SET_BIT() /*421*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_338(iParam0);
	}
}

void func_338(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_346())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_341(iParam0))
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
		func_339(&(Global_4263810[iParam0 /*84*/]));
	}
}

void func_339(var uParam0)
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
	func_340(&(uParam0->f_13));
	func_340(&(uParam0->f_13.f_13));
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

void func_340(var uParam0)
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

int func_341(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263810[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

void func_342(int iParam0, int iParam1)
{
	Global_2461338 = iParam1;
	Global_2461337 = iParam0;
}

int func_343(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263810[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_346())
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
				func_344(Global_4263810[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_344(struct<66> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_238(vVar0.y);
	if ((Global_262145.f_23556 && !Global_262145.f_23557) && !Global_262145.f_23558)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_345();
		TRIGGER_SCRIPT_EVENT(1, &vVar0, 35, iVar1);
	}
}

void func_345()
{
	REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_346()
{
	if (IS_PC_VERSION())
	{
		return 0x7D2708796355B20B();
	}
	return 0;
}

void func_347(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	
	if (Local_112.f_197 == 2)
	{
		func_358(bParam0, iParam1, iParam2, iParam3);
		return;
	}
	if (iLocal_1311 == -1)
	{
		iLocal_1311 = func_357(&uLocal_150, 0, 0);
	}
	if (!bParam0)
	{
		if (Local_112.f_197 != 2)
		{
			func_48(1);
		}
	}
	if (iLocal_1311 < (Global_262145.f_11288 * 60000))
	{
		fVar0 = Global_262145.f_11292;
	}
	else if (iLocal_1311 < (Global_262145.f_11289 * 60000))
	{
		fVar0 = Global_262145.f_11293;
	}
	else if (iLocal_1311 < (Global_262145.f_11290 * 60000))
	{
		fVar0 = Global_262145.f_11294;
	}
	else if (iLocal_1311 < (Global_262145.f_11291 * 60000))
	{
		fVar0 = Global_262145.f_11295;
	}
	else
	{
		fVar0 = Global_262145.f_11296;
	}
	fVar1 = to_float(func_356());
	fVar2 = to_float(func_355());
	fVar3 = to_float(func_354());
	fVar4 = to_float(func_353());
	fVar5 = func_352();
	iVar6 = func_351();
	if (iLocal_1312 > iVar6)
	{
		iLocal_1312 = iVar6;
	}
	uVar7 = func_350(1);
	uVar8 = func_348(1);
	*iParam1 = uVar7;
	*iParam2 = uVar8;
	if (bParam0)
	{
		if (!IS_BIT_SET(Local_112.f_1, 14))
		{
			iVar9 = round((((fVar1 * fVar0) + (((fVar3 * fVar0) * (to_float(iLocal_1312) * fVar5)) / IntToFloat(iParam3))) * Global_262145.f_11444));
			*iParam2 = (*iParam2 + round((((fVar2 * fVar0) + ((fVar4 * fVar0) * (to_float(iLocal_1312) * fVar5))) * Global_262145.f_11445)));
			if (Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_5 == -1)
			{
				Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_5 = *iParam1;
			}
			func_236(&iVar9, 1);
			*iParam1 = (*iParam1 + iVar9);
		}
	}
}

int func_348(bool bParam0)
{
	int iVar0;
	
	if (!bParam0)
	{
		return Global_262145.f_11300;
	}
	func_349();
	iVar0 = (Global_262145.f_11300 * iLocal_1307);
	if (Local_112.f_197 == 2)
	{
		return 0;
	}
	return iVar0;
}

void func_349()
{
	float fVar0;
	
	if (iLocal_1307 != 0)
	{
		return;
	}
	if (func_24(&uLocal_1305))
	{
		iLocal_1307 = func_357(&uLocal_1305, 0, 0);
	}
	fVar0 = to_float(iLocal_1307);
	fVar0 = (fVar0 / 60000f);
	iLocal_1307 = floor(fVar0);
	if (iLocal_1307 >= 1)
	{
	}
	else
	{
		iLocal_1307 = 1;
	}
	if (iLocal_1307 > Global_262145.f_11435)
	{
		iLocal_1307 = Global_262145.f_11435;
	}
}

int func_350(bool bParam0)
{
	int iVar0;
	
	if (!bParam0)
	{
		return Global_262145.f_11299;
	}
	func_349();
	iVar0 = (Global_262145.f_11299 * iLocal_1307);
	if (Local_112.f_197 == 2)
	{
		return 0;
	}
	return iVar0;
}

var func_351()
{
	if (Local_112.f_197 == 2)
	{
		return Global_262145.f_18342;
	}
	return Global_262145.f_11298;
}

var func_352()
{
	if (Local_112.f_197 == 2)
	{
		return Global_262145.f_18341;
	}
	return Global_262145.f_11297;
}

var func_353()
{
	if (Local_112.f_197 == 2)
	{
		return Global_262145.f_18335;
	}
	return Global_262145.f_11287;
}

var func_354()
{
	if (Local_112.f_197 == 2)
	{
		return Global_262145.f_18333;
	}
	return Global_262145.f_11286;
}

var func_355()
{
	if (Local_112.f_197 == 2)
	{
		return Global_262145.f_18334;
	}
	return Global_262145.f_11285;
}

var func_356()
{
	if (Local_112.f_197 == 2)
	{
		return Global_262145.f_18332;
	}
	return Global_262145.f_11284;
}

int func_357(var uParam0, bool bParam1, bool bParam2)
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

void func_358(bool bParam0, var uParam1, var uParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	
	if (iLocal_1311 == -1)
	{
		iLocal_1311 = func_357(&uLocal_150, 0, 0);
	}
	if (iLocal_1311 < (Global_262145.f_11288 * 60000))
	{
		fVar0 = Global_262145.f_18336;
	}
	else if (iLocal_1311 < (Global_262145.f_11289 * 60000))
	{
		fVar0 = Global_262145.f_18337;
	}
	else if (iLocal_1311 < (Global_262145.f_11290 * 60000))
	{
		fVar0 = Global_262145.f_18338;
	}
	else if (iLocal_1311 < (Global_262145.f_11291 * 60000))
	{
		fVar0 = Global_262145.f_18339;
	}
	else
	{
		fVar0 = Global_262145.f_18340;
	}
	fVar1 = to_float(func_356());
	fVar2 = to_float(func_355());
	fVar3 = to_float(func_354());
	fVar4 = to_float(func_353());
	fVar5 = func_352();
	iVar6 = func_351();
	if (iLocal_1312 > iVar6)
	{
		iLocal_1312 = iVar6;
	}
	uVar7 = func_350(1);
	uVar8 = func_348(1);
	*uParam1 = uVar7;
	*uParam2 = uVar8;
	if (bParam0)
	{
		if (!IS_BIT_SET(Local_112.f_1, 14))
		{
			iVar9 = round((((fVar1 * fVar0) + (((fVar3 * fVar0) * (to_float(iLocal_1312) * fVar5)) / IntToFloat(iParam3))) * Global_262145.f_11444));
			*uParam2 = (*uParam2 + round((((fVar2 * fVar0) + ((fVar4 * fVar0) * (to_float(iLocal_1312) * fVar5))) * Global_262145.f_11445)));
			if (Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_5 == -1)
			{
				Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_5 = *uParam1;
			}
			func_236(&iVar9, 1);
			*uParam1 = (*uParam1 + iVar9);
		}
	}
}

int func_359(var uParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
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
	func_115(uParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_17 = iParam1;
	Var0.f_18 = iParam2;
	Var0.f_71 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_72 = iParam8;
	StringCopy(&(Var0.f_25), sParam9, 64);
	StringCopy(&(Var0.f_41), sParam10, 64);
	StringCopy(&(Var0.f_57), sParam11, 16);
	return func_70(&Var0);
}

int func_360()
{
	if (Local_112.f_197 != 2)
	{
		return 66;
	}
	return 88;
}

struct<4> func_361()
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_DRAW2P", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_DRAW2P", 16);
			break;
	}
	return Var0;
}

void func_362(bool bParam0)
{
	if (Local_112.f_197 == 2)
	{
		if (!IS_BIT_SET(iLocal_115, 31))
		{
			Global_1674861.f_2 = Local_112.f_179;
			Global_1674861.f_3 = Local_112.f_180;
			if (bParam0)
			{
				func_1072(1, 1, 0, !IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 0), -1, -1, -1, -1, -1, 0);
			}
			else
			{
				func_1072(0, 2, 0, !IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 0), -1, -1, -1, -1, -1, 0);
			}
		}
	}
}

int func_363(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)
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
	func_115(iParam0, &Var0, -1, sParam1, sParam5);
	StringCopy(&(Var0.f_25), sParam2, 64);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam6;
	return func_70(&Var0);
}

int func_364()
{
	if (Local_112.f_197 != 2)
	{
		return 68;
	}
	return 88;
}

struct<4> func_365()
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_DRAWP", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_DRAWP", 16);
			break;
	}
	return Var0;
}

int func_366(int iParam0, int iParam1, int iParam2)
{
	return 0;
	if (!func_175())
	{
		return 0;
	}
	if (iParam1 != func_398())
	{
		if (func_246(iParam1, iParam0, 1))
		{
			return 1;
		}
	}
	if (iParam2 != func_398())
	{
		if (func_246(iParam2, iParam0, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_367(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = func_133();
	*iParam1 = func_398();
	if (iVar0 != func_398())
	{
		*iParam2 = 1;
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (IS_BIT_SET(Local_112.f_10, iVar2))
			{
				if (NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(iVar2)))
				{
					iVar1 = NETWORK_GET_PLAYER_INDEX(NETWORK_GET_PLAYER_INDEX(iVar2));
					if (!func_376(iVar1, 0))
					{
						if (iVar1 != iVar0)
						{
							if (NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
							{
								iVar4 = NETWORK_GET_PARTICIPANT_INDEX(iVar1);
								iVar3 = iVar4;
								if (!IS_BIT_SET(Local_113[iVar3 /*8*/].f_1, 1))
								{
									*iParam2++;
									if (*iParam1 == func_398())
									{
										*iParam0 = iVar0;
										*iParam1 = iVar1;
									}
								}
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	if (*iParam2 > 1)
	{
		return 1;
	}
	return 0;
}

int func_368()
{
	if ((func_40(PLAYER_ID(), 21) || func_40(PLAYER_ID(), 22)) || func_374())
	{
		return 1;
	}
	if (func_370())
	{
		func_369(22);
		return 1;
	}
	return 0;
}

void func_369(int iParam0)
{
	SET_BIT(&(Global_1628955[SET_BIT() /*614*/].f_11.f_4), iParam0);
}

int func_370()
{
	if (func_144(PLAYER_ID(), 0))
	{
		if (((func_44() && !func_373()) || func_372(PLAYER_ID(), 21)) || func_372(PLAYER_ID(), 25))
		{
			return 1;
		}
		else
		{
			func_371(27);
		}
	}
	return 0;
}

void func_371(int iParam0)
{
	CLEAR_BIT(&(Global_1628955[CLEAR_BIT() /*614*/].f_11.f_4), iParam0);
}

bool func_372(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_208, iParam1);
}

bool func_373()
{
	return Global_1312417.f_1;
}

bool func_374()
{
	return func_286(356, -1);
}

bool func_375(int iParam0)
{
	if (func_46(iParam0))
	{
		return 1;
	}
	return IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 8);
}

bool func_376(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER_ID())
	{
		bVar0 = func_377(-1, 0) == 8;
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

int func_377(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_52();
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

struct<4> func_378()
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_OVR", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "BK_RUN_OVER", 16);
			break;
	}
	return Var0;
}

void func_379()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = IS_BIT_SET(Local_112.f_1, 1);
	if (Local_112.f_197 == 2)
	{
		bVar0 = true;
	}
	if (IS_BIT_SET(Local_112.f_1, 6))
	{
		if (!IS_BIT_SET(Local_112.f_1, 7))
		{
			if (func_383() - func_357(&(Local_112.f_24), 0, 0)) >= func_382()
			{
				func_22(&(Local_112.f_24));
				SET_BIT(&(Local_112.f_1), 7);
			}
		}
	}
	iVar1 = func_383();
	if (IS_BIT_SET(Local_112.f_1, 7))
	{
		iVar1 = func_382();
	}
	if (!IS_BIT_SET(Local_112.f_1, 12))
	{
		if (bVar0)
		{
			if (func_24(&(Local_112.f_30)))
			{
				func_22(&(Local_112.f_30));
			}
			if (!func_24(&(Local_112.f_24)))
			{
				func_397(&(Local_112.f_24), 0, 0);
				if (Local_112.f_34 > 0)
				{
					iVar2 = HAS_NETWORK_TIME_STARTED(HAS_NETWORK_TIME_STARTED(), (-1 * Local_112.f_34));
					func_381(&(Local_112.f_24), iVar2);
					Local_112.f_34 = 0;
				}
			}
			else if (!IS_BIT_SET(Local_112.f_1, 2))
			{
				if ((iVar1 - func_357(&(Local_112.f_24), 0, 0)) <= 0)
				{
					if (IS_BIT_SET(Local_112.f_1, 1))
					{
						SET_BIT(&(Local_112.f_1), 2);
					}
					else
					{
						SET_BIT(&(Local_112.f_1), 16);
					}
				}
			}
		}
		else
		{
			if (IS_BIT_SET(Local_112.f_1, 0))
			{
				if (func_24(&(Local_112.f_24)))
				{
					Local_112.f_34 = func_357(&(Local_112.f_24), 0, 0);
				}
			}
			else
			{
				Local_112.f_34 = 0;
			}
			if (func_24(&(Local_112.f_24)))
			{
				func_22(&(Local_112.f_24));
			}
			if (!func_24(&(Local_112.f_30)))
			{
				func_397(&(Local_112.f_30), 0, 0);
			}
			else if (func_23(&(Local_112.f_30), func_380(), 0))
			{
				SET_BIT(&(Local_112.f_1), 12);
			}
		}
	}
}

int func_380()
{
	if (Local_112.f_197 != 2)
	{
		return Global_262145.f_11137;
	}
	return Global_262145.f_18329 * 1000;
}

void func_381(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	uParam0->f_1 = 1;
}

int func_382()
{
	return Global_262145.f_11152;
}

int func_383()
{
	if (Local_112.f_197 != 2)
	{
		return Global_262145.f_11136;
	}
	return 300000;
}

void func_384()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	
	bVar6 = false;
	bVar7 = false;
	if (Local_112 != 4)
	{
		iLocal_117 = 0;
		while (iLocal_117 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			if (NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(iLocal_117)))
			{
				iVar0++;
				iVar11 = NETWORK_GET_PLAYER_INDEX(NETWORK_GET_PLAYER_INDEX(iLocal_117));
				if (!func_376(iVar11, 0))
				{
					if (Local_112.f_197 == 2)
					{
						if (!bVar10)
						{
							if (func_393() != func_398())
							{
								if (func_393() == iVar11)
								{
									bVar10 = true;
								}
							}
							else
							{
								bVar10 = true;
							}
						}
					}
					if (IS_BIT_SET(Local_113[iLocal_117 /*8*/].f_1, 0))
					{
						iVar1++;
					}
					if (!func_46(iVar11) || (Local_112.f_197 == 2 && func_38(iVar11) > 0))
					{
						iVar4++;
					}
					else if (Local_112.f_21 == 0)
					{
						if (Local_112.f_197 == 2)
						{
							if (func_38(iVar11) == 0)
							{
							}
						}
					}
					if (Local_112.f_21 == 0)
					{
						if (!IS_BIT_SET(Local_113[iLocal_117 /*8*/].f_1, 0))
						{
							if (IS_BIT_SET(Local_113[iLocal_117 /*8*/].f_1, 13))
							{
								iVar5 = func_392();
								if (iVar5 < func_391())
								{
									SET_BIT(&(Local_112.f_35), iLocal_117);
								}
							}
							else if (IS_BIT_SET(Local_112.f_35, iLocal_117))
							{
								CLEAR_BIT(&(Local_112.f_35), iLocal_117);
							}
						}
					}
					if (!IS_BIT_SET(Local_112.f_1, 9))
					{
						if (Local_112.f_21 == 1)
						{
							if (IS_BIT_SET(Local_113[iLocal_117 /*8*/].f_1, 0))
							{
								if (!IS_BIT_SET(Local_113[iLocal_117 /*8*/].f_1, 4))
								{
									bVar7 = true;
								}
							}
						}
						else
						{
							bVar7 = true;
						}
					}
					if (!IS_BIT_SET(Local_112.f_1, 4))
					{
						if (IS_BIT_SET(Local_113[iLocal_117 /*8*/].f_1, 3))
						{
							bVar8 = true;
						}
					}
					if (IS_BIT_SET(Local_113[iLocal_117 /*8*/].f_1, 0))
					{
						if (!IS_BIT_SET(Local_113[iLocal_117 /*8*/].f_1, 1))
						{
							if (!IS_BIT_SET(Local_112.f_1, 4) || (IS_BIT_SET(Local_112.f_1, 4) && !IS_BIT_SET(Local_113[iLocal_117 /*8*/].f_1, 5)))
							{
								if (func_390(bVar8))
								{
									iVar2++;
									if (!IS_BIT_SET(Local_112.f_9, iLocal_117))
									{
										SET_BIT(&(Local_112.f_9), iLocal_117);
										SET_BIT(&(Local_112.f_10), iVar11);
										if (IS_BIT_SET(Local_112.f_1, 3) && !IS_BIT_SET(Local_112.f_1, 11))
										{
										}
									}
									if (IS_BIT_SET(Local_112.f_1, 4))
									{
										iVar9 = 1;
									}
								}
							}
							else if (!IS_BIT_SET(Local_112.f_1, 3))
							{
								if (IS_BIT_SET(Local_112.f_9, iLocal_117))
								{
									CLEAR_BIT(&(Local_112.f_9), iLocal_117);
									CLEAR_BIT(&(Local_112.f_10), iVar11);
								}
								if (IS_BIT_SET(Local_112.f_1, 4))
								{
									if (IS_BIT_SET(Local_113[iLocal_117 /*8*/].f_1, 5))
									{
										iVar3++;
									}
								}
							}
						}
						else if (IS_BIT_SET(Local_112.f_9, iLocal_117))
						{
							CLEAR_BIT(&(Local_112.f_9), iLocal_117);
							CLEAR_BIT(&(Local_112.f_10), iVar11);
						}
					}
					else
					{
						if (IS_BIT_SET(Local_112.f_9, iLocal_117))
						{
							CLEAR_BIT(&(Local_112.f_9), iLocal_117);
						}
						if (IS_BIT_SET(Local_112.f_10, iVar11))
						{
							CLEAR_BIT(&(Local_112.f_10), iVar11);
						}
					}
					if (func_1276(iVar11, 1, 1))
					{
					}
				}
				else
				{
					if (IS_BIT_SET(Local_112.f_9, iLocal_117))
					{
						CLEAR_BIT(&(Local_112.f_9), iLocal_117);
					}
					if (IS_BIT_SET(Local_112.f_35, iLocal_117))
					{
						CLEAR_BIT(&(Local_112.f_35), iLocal_117);
					}
				}
				if (Local_112.f_21 <= 2)
				{
					bVar6 = true;
				}
				else if (!IS_BIT_SET(Local_113[iLocal_117 /*8*/].f_1, 2))
				{
					if (!func_376(iVar11, 0))
					{
					}
					bVar6 = true;
				}
			}
			else
			{
				if (IS_BIT_SET(Local_112.f_9, iLocal_117))
				{
					CLEAR_BIT(&(Local_112.f_9), iLocal_117);
				}
				if (IS_BIT_SET(Local_112.f_35, iLocal_117))
				{
					CLEAR_BIT(&(Local_112.f_35), iLocal_117);
				}
			}
			iLocal_117++;
		}
		if (Local_112.f_197 == 2)
		{
			if (!IS_BIT_SET(Local_112.f_1, 17))
			{
				if (!bVar10)
				{
					SET_BIT(&(Local_112.f_1), 17);
				}
			}
		}
		if (iVar1 > Local_112.f_183)
		{
			Local_112.f_183 = iVar1;
		}
		if (iVar0 > Local_112.f_182)
		{
			Local_112.f_182 = iVar0;
		}
		else
		{
			Local_112.f_181 = (Local_112.f_182 - iVar0);
		}
		if (Local_112.f_165 != (iVar2 + iVar3))
		{
			Local_112.f_165 = (iVar2 + iVar3);
			func_386();
		}
		if (!IS_BIT_SET(Local_112.f_1, 13))
		{
			if (Local_112.f_165 >= func_391() || (iVar4 >= 2 && Local_112.f_165 >= iVar4))
			{
				SET_BIT(&(Local_112.f_1), 13);
			}
		}
		if (Local_112.f_21 == 0)
		{
			if (!IS_BIT_SET(Local_112.f_1, 0))
			{
				if (iVar1 >= 1)
				{
					SET_BIT(&(Local_112.f_1), 0);
				}
			}
			else if (iVar1 == 0)
			{
				CLEAR_BIT(&(Local_112.f_1), 0);
			}
			if (!IS_BIT_SET(Local_112.f_1, 1))
			{
				if (iVar1 >= 2)
				{
					SET_BIT(&(Local_112.f_1), 1);
				}
			}
			else if (iVar1 < 2)
			{
				CLEAR_BIT(&(Local_112.f_1), 1);
			}
			if (!IS_BIT_SET(Local_112.f_1, 6))
			{
				if (iVar1 >= func_385())
				{
					SET_BIT(&(Local_112.f_1), 6);
				}
			}
			if (Local_112.f_197 == 2)
			{
				if (!IS_BIT_SET(Local_112.f_1, 18))
				{
					if (func_24(&(Local_112.f_32)))
					{
						if (func_23(&(Local_112.f_32), 10000, 0))
						{
							if (iVar4 < 2)
							{
								SET_BIT(&(Local_112.f_1), 18);
							}
						}
					}
				}
			}
		}
		if (!IS_BIT_SET(Local_112.f_1, 9))
		{
			if (Local_112.f_21 == 1)
			{
				if (!bVar7)
				{
					SET_BIT(&(Local_112.f_1), 9);
				}
			}
		}
		if (!IS_BIT_SET(Local_112.f_1, 4))
		{
			if (bVar8)
			{
				SET_BIT(&(Local_112.f_1), 4);
			}
		}
		if (IS_BIT_SET(Local_112.f_1, 4))
		{
			if (!IS_BIT_SET(Local_112.f_1, 3))
			{
				if (!IS_BIT_SET(Local_112.f_1, 10))
				{
					if (!func_24(&(Local_112.f_28)))
					{
						func_397(&(Local_112.f_28), 0, 0);
					}
					else if (func_23(&(Local_112.f_28), 60000, 0))
					{
						SET_BIT(&(Local_112.f_1), 10);
					}
				}
				if (iVar2 == 0 && iVar3 == 0)
				{
					if (!IS_BIT_SET(Local_112.f_1, 10))
					{
						SET_BIT(&(Local_112.f_1), 10);
					}
				}
			}
		}
		if (Local_112.f_21 == 2)
		{
			if (!IS_BIT_SET(Local_112.f_1, 3))
			{
				if (iVar2 == 1 || iVar9)
				{
					Local_112.f_169 = 1900;
					Local_112.f_168 = 18000;
					SET_BIT(&(Local_112.f_1), 3);
					if (!IS_BIT_SET(Local_112.f_1, 4))
					{
						SET_BIT(&(Local_112.f_1), 11);
					}
					if (iVar1 == 1)
					{
						if (!IS_BIT_SET(Local_112.f_1, 14))
						{
							SET_BIT(&(Local_112.f_1), 14);
						}
					}
				}
				else if (iVar2 == 0)
				{
					if (!IS_BIT_SET(Local_112.f_1, 3))
					{
						if (!IS_BIT_SET(Local_112.f_1, 4) || (IS_BIT_SET(Local_112.f_1, 4) && iVar3 == 0))
						{
							SET_BIT(&(Local_112.f_1), 3);
							if (!IS_BIT_SET(Local_112.f_1, 4))
							{
								SET_BIT(&(Local_112.f_1), 11);
							}
						}
					}
				}
				else if (iVar4 == 0)
				{
					Local_112.f_21 = 5;
				}
				else if (IS_BIT_SET(Local_112.f_1, 4))
				{
				}
			}
		}
		if (IS_BIT_SET(Local_112.f_1, 3))
		{
			if (!func_24(&(Local_112.f_174)))
			{
				func_397(&(Local_112.f_174), 0, 0);
			}
			if (func_23(&(Local_112.f_174), 100, 0))
			{
				if (!IS_BIT_SET(Local_112.f_1, 11))
				{
					func_386();
					SET_BIT(&(Local_112.f_1), 11);
				}
			}
		}
		if (Local_112.f_21 > 2)
		{
			if (!IS_BIT_SET(Local_112.f_1, 5))
			{
				if (!bVar6)
				{
					SET_BIT(&(Local_112.f_1), 5);
				}
			}
		}
	}
}

int func_385()
{
	if (Global_262145.f_11407 < Global_262145.f_11476)
	{
		return Global_262145.f_11407;
	}
	return Global_262145.f_11476;
}

void func_386()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	
	iVar0 = 0;
	while (iVar0 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(iVar0)))
		{
			iVar1 = NETWORK_GET_PLAYER_INDEX(NETWORK_GET_PLAYER_INDEX(iVar0));
			func_389(iVar0);
			bVar2 = IS_BIT_SET(Local_113[iVar0 /*8*/].f_1, 0);
			bVar3 = true;
			if (!bVar2)
			{
				bVar3 = false;
			}
			if (IS_BIT_SET(Local_113[iVar0 /*8*/].f_1, 1))
			{
				bVar3 = false;
			}
			if (IS_BIT_SET(Local_112.f_1, 4))
			{
				if (IS_BIT_SET(Local_113[iVar0 /*8*/].f_1, 5))
				{
					bVar3 = false;
				}
			}
			func_388(iVar0, iVar1, bVar3, bVar2);
		}
		else if (Local_112.f_36[iVar0 /*4*/].f_2 != -1)
		{
			func_389(iVar0);
		}
		iVar0++;
	}
	func_387();
}

void func_387()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	iVar0 = 31;
	while (iVar0 >= 0)
	{
		iVar1 = 31;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_112.f_36[iVar1 /*4*/].f_2 > Local_112.f_36[(iVar1 - 1) /*4*/].f_2)
				{
					uVar2 = Local_112.f_36[iVar1 /*4*/].f_2;
					uVar3 = Local_112.f_36[iVar1 /*4*/];
					uVar4 = Local_112.f_36[iVar1 /*4*/].f_1;
					uVar5 = Local_112.f_36[iVar1 /*4*/].f_3;
					Local_112.f_36[iVar1 /*4*/].f_2 = Local_112.f_36[(iVar1 - 1) /*4*/].f_2;
					Local_112.f_36[iVar1 /*4*/] = Local_112.f_36[(iVar1 - 1) /*4*/];
					Local_112.f_36[iVar1 /*4*/].f_1 = Local_112.f_36[(iVar1 - 1) /*4*/].f_1;
					Local_112.f_36[iVar1 /*4*/].f_3 = Local_112.f_36[(iVar1 - 1) /*4*/].f_3;
					Local_112.f_36[(iVar1 - 1) /*4*/].f_2 = uVar2;
					Local_112.f_36[(iVar1 - 1) /*4*/].f_3 = uVar5;
					Local_112.f_36[(iVar1 - 1) /*4*/] = uVar3;
					Local_112.f_36[(iVar1 - 1) /*4*/].f_1 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_388(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		iVar0 = 1;
	}
	if (bParam3)
	{
		iVar1 = 1;
	}
	Local_112.f_36[iParam0 /*4*/] = iParam0;
	Local_112.f_36[iParam0 /*4*/].f_1 = iParam1;
	Local_112.f_36[iParam0 /*4*/].f_2 = iVar0;
	Local_112.f_36[iParam0 /*4*/].f_3 = iVar1;
}

void func_389(int iParam0)
{
	Local_112.f_36[iParam0 /*4*/] = -1;
	Local_112.f_36[iParam0 /*4*/].f_1 = -1;
	Local_112.f_36[iParam0 /*4*/].f_2 = -1;
	Local_112.f_36[iParam0 /*4*/].f_3 = -1;
}

int func_390(bool bParam0)
{
	if (!IS_BIT_SET(Local_112.f_1, 3))
	{
		return 1;
	}
	if (IS_BIT_SET(Local_112.f_1, 3))
	{
		if (!IS_BIT_SET(Local_112.f_1, 11))
		{
			if (IS_BIT_SET(Local_112.f_1, 4))
			{
				return 1;
			}
			if (bParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_391()
{
	if (Local_112.f_197 != 2)
	{
		return Global_262145.f_11407;
	}
	return Global_262145.f_18331;
}

int func_392()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (IS_BIT_SET(Local_112.f_35, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_393()
{
	if (NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(Local_112.f_198)))
	{
		return NETWORK_GET_PLAYER_INDEX(NETWORK_GET_PLAYER_INDEX(Local_112.f_198));
	}
	return func_398();
}

void func_394(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	
	vVar0.x = 226654995;
	vVar0.y = PLAYER_ID();
	vVar0.z = iParam0;
	iVar1 = func_395(1, 1);
	if (!iVar1 == 0)
	{
		TRIGGER_SCRIPT_EVENT(1, &vVar0, 3, iVar1);
	}
}

var func_395(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = INT_TO_PLAYERINDEX(iVar1);
		if (func_1276(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					SET_BIT(&uVar0, iVar1);
				}
				else if (!func_376(iVar2, 0))
				{
					SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_396(int iParam0, int iParam1, int iParam2, int iParam3)
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

void func_397(var uParam0, bool bParam1, bool bParam2)
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

int func_398()
{
	return -1;
}

void func_399()
{
	if (Local_112.f_197 != -1)
	{
		return;
	}
	switch (Local_112.f_167)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			Local_112.f_197 = 0;
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			Local_112.f_197 = 2;
			func_400();
			break;
	}
}

void func_400()
{
	if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (Local_112.f_198 == -1)
		{
			Local_112.f_198 = PARTICIPANT_ID_TO_INT();
		}
	}
}

int func_401(var uParam0)
{
	if (func_411())
	{
		*uParam0 = GET_RANDOM_INT_IN_RANGE(6, 11);
		if (!func_405(*uParam0, 1128792064))
		{
		}
		else
		{
			return 0;
		}
	}
	else
	{
		*uParam0 = GET_RANDOM_INT_IN_RANGE(0, 5);
	}
	if (!func_404(*uParam0))
	{
		if (!func_402(136, *uParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_402(int iParam0, int iParam1, int iParam2, int iParam3)
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
	iVar1 = func_403(iParam0);
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (iVar0 < Global_262145.f_8112)
		{
			if (Global_2501271.f_130[iVar0 /*2*/] == iVar1 && Global_2501271.f_130[iVar0 /*2*/].f_1 == func_396(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_403(int iParam0)
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

int func_404(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_11139;
			break;
		
		case 1:
			return Global_262145.f_11140;
			break;
		
		case 2:
			return Global_262145.f_11141;
			break;
		
		case 3:
			return Global_262145.f_11142;
			break;
		
		case 4:
			return Global_262145.f_11143;
			break;
		
		case 6:
			return Global_262145.f_18344;
			break;
		
		case 7:
			return Global_262145.f_18345;
			break;
		
		case 8:
			return Global_262145.f_18346;
			break;
		
		case 9:
			return Global_262145.f_18347;
			break;
		
		case 10:
			return Global_262145.f_18348;
			break;
	}
	return 0;
}

bool func_405(int iParam0, float fParam1)
{
	return func_406(func_410(iParam0), fParam1, 1, 1, 0, 0, 0, 0);
}

int func_406(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && PLAYER_ID() != iVar1) || iParam6 == 0)
		{
			if (func_1276(iVar1, bParam2, bParam3))
			{
				if (_0x3B39236746714134(_0x3B39236746714134(), iVar1))
				{
					if (!bParam5 || (!IS_PED_INJURED(IS_PED_INJURED(iVar1)) && func_409(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && GET_PLAYER_TEAM(GET_PLAYER_TEAM()) != GET_PLAYER_TEAM(iVar1))) || GET_PLAYER_TEAM(GET_PLAYER_TEAM()) == -1)
						{
							if (((GET_PLAYER_TEAM(GET_PLAYER_TEAM()) == -1 && iParam7) && bParam4) && func_407(iVar1))
							{
							}
							else if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST(iVar1)))
							{
								if (GET_DISTANCE_BETWEEN_COORDS(func_219(iVar1), vParam0, true) < fParam1)
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

int func_407(int iParam0)
{
	if (func_216(PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2507671 = { func_64(iParam0) };
	if (NETWORK_IS_FRIEND(&Global_2507671))
	{
		return 1;
	}
	if (func_408(PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_408(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_119(iParam0);
	if (!iVar0 == func_398())
	{
		if (iVar0 == func_119(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_409(int iParam0)
{
	if (IS_ENTITY_VISIBLE_TO_SCRIPT(IS_ENTITY_VISIBLE_TO_SCRIPT(iParam0)) || Global_2424073[iParam0 /*421*/].f_245)
	{
		return 1;
	}
	return 0;
}

Vector3 func_410(int iParam0)
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 6:
			vVar0 = { 770.8729f, -232.9857f, 65.1145f };
			break;
		
		case 7:
			vVar0 = { 157.237f, -1519.715f, 28.1416f };
			break;
		
		case 8:
			vVar0 = { -899.8332f, 5567.762f, 2.7747f };
			break;
		
		case 9:
			vVar0 = { -1894.427f, 2010.27f, 140.5029f };
			break;
		
		case 10:
			vVar0 = { 1036.689f, -619.3324f, 57.1851f };
			break;
	}
	return vVar0;
}

bool func_411()
{
	return func_412(PLAYER_ID()) == 200;
}

int func_412(int iParam0)
{
	if (func_413(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_32;
	}
	return -1;
}

int func_413(int iParam0, int iParam1)
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_32 != -1 || (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

int func_414()
{
	if (Global_2531497.f_4898.f_38)
	{
		Global_2531497.f_4898.f_38 = 0;
		return 1;
	}
	return 0;
}

int func_415(var uParam0)
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

void func_416(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_397(uParam0, 0, 0);
		}
	}
}

void func_417()
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_376(PLAYER_ID(), 0))
	{
		switch (iLocal_1323)
		{
			case 0:
				if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_4, 0))
				{
					if (func_432("PEN_BIKE"))
					{
						SET_BIT(&(Local_113[SET_BIT() /*8*/].f_4), 0);
					}
				}
				else if (!func_432("PEN_BIKE"))
				{
					CLEAR_BIT(&(Local_113[CLEAR_BIT() /*8*/].f_4), 0);
				}
				iLocal_1323++;
				break;
			
			case 1:
				if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_4, 1))
				{
					if (func_432("PEN_VEHG"))
					{
						SET_BIT(&(Local_113[SET_BIT() /*8*/].f_4), 1);
					}
				}
				else if (!func_432("PEN_VEHG"))
				{
					CLEAR_BIT(&(Local_113[CLEAR_BIT() /*8*/].f_4), 1);
				}
				iLocal_1323++;
				break;
			
			case 2:
				if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_4, 2))
				{
					if (func_432("PEN_PBIKE"))
					{
						SET_BIT(&(Local_113[SET_BIT() /*8*/].f_4), 2);
					}
				}
				else if (!func_432("PEN_PBIKE"))
				{
					CLEAR_BIT(&(Local_113[CLEAR_BIT() /*8*/].f_4), 2);
				}
				iLocal_1323++;
				break;
			
			case 3:
				if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_4, 3))
				{
					if (func_432("PEN_PVEHG"))
					{
						SET_BIT(&(Local_113[SET_BIT() /*8*/].f_4), 3);
					}
				}
				else if (!func_432("PEN_PVEHG"))
				{
					CLEAR_BIT(&(Local_113[CLEAR_BIT() /*8*/].f_4), 3);
				}
				iLocal_1323++;
				break;
			
			case 4:
				if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_4, 4))
				{
					if (func_432("PEN_AREA"))
					{
						SET_BIT(&(Local_113[SET_BIT() /*8*/].f_4), 4);
					}
				}
				else if (!func_432("PEN_AREA"))
				{
					CLEAR_BIT(&(Local_113[CLEAR_BIT() /*8*/].f_4), 4);
				}
				iLocal_1323++;
				break;
			
			case 5:
				if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_4, 5))
				{
					if (func_432("PEN_BAREA"))
					{
						SET_BIT(&(Local_113[SET_BIT() /*8*/].f_4), 5);
					}
				}
				else if (!func_432("PEN_BAREA"))
				{
					CLEAR_BIT(&(Local_113[CLEAR_BIT() /*8*/].f_4), 5);
				}
				iLocal_1323++;
				break;
			
			case 6:
				if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_4, 6))
				{
					if (func_432("PEN_EXITV"))
					{
						SET_BIT(&(Local_113[SET_BIT() /*8*/].f_4), 6);
					}
				}
				else if (!func_432("PEN_EXITV"))
				{
					CLEAR_BIT(&(Local_113[CLEAR_BIT() /*8*/].f_4), 6);
				}
				iLocal_1323++;
				break;
			
			case 7:
				Var0 = { func_431() };
				if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_4, 7))
				{
					if (func_432(&Var0))
					{
						SET_BIT(&(Local_113[SET_BIT() /*8*/].f_4), 7);
					}
				}
				else if (!func_432(&Var0))
				{
					CLEAR_BIT(&(Local_113[CLEAR_BIT() /*8*/].f_4), 7);
				}
				iLocal_1323++;
				break;
		}
		if (iLocal_1323 > 7)
		{
			iLocal_1323 = 0;
		}
	}
	else
	{
		if (Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_4 != 0)
		{
			Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_4 = 0;
		}
		iVar1 = Global_1590446[PLAYER_ID() /*871*/].f_735;
		if (NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
			{
				iVar2 = NETWORK_GET_PARTICIPANT_INDEX(iVar1);
				iVar3 = iVar2;
				switch (iLocal_1323)
				{
					case 0:
						if (!IS_BIT_SET(Local_113[iVar3 /*8*/].f_4, 0))
						{
							if (func_432("PEN_BIKE"))
							{
								func_430();
							}
						}
						else if (!func_432("PEN_BIKE"))
						{
							func_418("PEN_BIKE", 0);
						}
						iLocal_1323++;
						break;
					
					case 1:
						if (!IS_BIT_SET(Local_113[iVar3 /*8*/].f_4, 1))
						{
							if (func_432("PEN_VEHG"))
							{
								func_430();
							}
						}
						else if (!func_432("PEN_VEHG"))
						{
							func_418("PEN_VEHG", 0);
						}
						iLocal_1323++;
						break;
					
					case 2:
						if (!IS_BIT_SET(Local_113[iVar3 /*8*/].f_4, 2))
						{
							if (func_432("PEN_PBIKE"))
							{
								func_430();
							}
						}
						else if (!func_432("PEN_PBIKE"))
						{
							func_418("PEN_PBIKE", 0);
						}
						iLocal_1323++;
						break;
					
					case 3:
						if (!IS_BIT_SET(Local_113[iVar3 /*8*/].f_4, 3))
						{
							if (func_432("PEN_PVEHG"))
							{
								func_430();
							}
						}
						else if (!func_432("PEN_PVEHG"))
						{
							func_418("PEN_PVEHG", 0);
						}
						iLocal_1323++;
						break;
					
					case 4:
						if (!IS_BIT_SET(Local_113[iVar3 /*8*/].f_4, 4))
						{
							if (func_432("PEN_AREA"))
							{
								func_430();
							}
						}
						else if (!func_432("PEN_AREA"))
						{
							func_418("PEN_AREA", 0);
						}
						iLocal_1323++;
						break;
					
					case 5:
						if (!IS_BIT_SET(Local_113[iVar3 /*8*/].f_4, 5))
						{
							if (func_432("PEN_BAREA"))
							{
								func_430();
							}
						}
						else if (!func_432("PEN_BAREA"))
						{
							func_418("PEN_BAREA", 0);
						}
						iLocal_1323++;
						break;
					
					case 6:
						if (!IS_BIT_SET(Local_113[iVar3 /*8*/].f_4, 6))
						{
							if (func_432("PEN_EXITV"))
							{
								func_430();
							}
						}
						else if (!func_432("PEN_EXITV"))
						{
							func_418("PEN_EXITV", 0);
						}
						iLocal_1323++;
						break;
					
					case 7:
						Var0 = { func_431() };
						if (!IS_BIT_SET(Local_113[iVar3 /*8*/].f_4, 7))
						{
							if (func_432(&Var0))
							{
								func_430();
							}
						}
						else if (!func_432(&Var0))
						{
							func_418(&Var0, 0);
						}
						iLocal_1323++;
						break;
				}
				if (iLocal_1323 > 7)
				{
					iLocal_1323 = 0;
				}
			}
		}
	}
}

void func_418(char* sParam0, bool bParam1)
{
	if (IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (_GET_LENGTH_OF_STRING(sParam0) > 23)
	{
		return;
	}
	if (func_428(sParam0))
	{
		return;
	}
	func_422();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_421();
	func_420(bParam1);
	func_419();
}

void func_419()
{
	SET_BIT(&(Global_1312585.f_59), 1);
}

void func_420(bool bParam0)
{
	if (bParam0)
	{
		SET_BIT(&(Global_1312585.f_59), 0);
		return;
	}
	CLEAR_BIT(&(Global_1312585.f_59), 0);
}

void func_421()
{
	Global_1312585.f_10 = HAS_NETWORK_TIME_STARTED(HAS_NETWORK_TIME_STARTED(), 86400000);
	Global_1312585.f_11 = 0xBA7F0B77D80A4EB7();
}

void func_422()
{
	func_424();
	func_423(0);
}

void func_423(bool bParam0)
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

void func_424()
{
	if (!func_427())
	{
	}
	if (func_426())
	{
		BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1312585.f_12));
		func_425();
		END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_425()
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

int func_426()
{
	if (Global_1312585 == 20)
	{
		return 0;
	}
	return 1;
}

int func_427()
{
	if (!func_426())
	{
		return 0;
	}
	BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312585.f_12));
	func_425();
	return END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_428(char* sParam0)
{
	if (!func_426())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		return func_429(sParam0);
	}
	if (IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return GET_HASH_KEY(sParam0) == GET_HASH_KEY(&(Global_1312585.f_12));
}

bool func_429(char* sParam0)
{
	if (!func_426())
	{
		return 0;
	}
	if (IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return GET_HASH_KEY(sParam0) == GET_HASH_KEY(&(Global_1312585.f_16));
}

void func_430()
{
	if (!func_426())
	{
		return;
	}
	if (!GET_HASH_KEY(GET_HASH_KEY()) == Global_1312585.f_9)
	{
		return;
	}
	func_422();
}

struct<4> func_431()
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_STARTO", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_STARTO", 16);
			break;
	}
	return Var0;
}

int func_432(char* sParam0)
{
	if (IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!func_426())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		if (_GET_LENGTH_OF_STRING(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (_GET_LENGTH_OF_STRING(sParam0) > 23)
	{
		return 0;
	}
	return func_428(sParam0);
}

void func_433()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 0))
	{
		if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 1))
		{
			bVar5 = true;
		}
	}
	if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 6))
	{
		if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 1))
		{
			if (!IS_PED_INJURED(IS_PED_INJURED()))
			{
				if (IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE()))
				{
					iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
					iVar1 = GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0);
					if (DOES_ENTITY_EXIST(iVar1))
					{
						if (iVar1 != PLAYER_PED_ID())
						{
							if (IS_PED_A_PLAYER(iVar1))
							{
								iVar2 = NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
								if (NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
								{
									iVar3 = NETWORK_GET_PARTICIPANT_INDEX(iVar2);
									iVar4 = iVar3;
									if (IS_BIT_SET(Local_113[iVar4 /*8*/].f_1, 0))
									{
										bVar5 = true;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (func_436(PLAYER_ID()))
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		func_435();
		func_434();
	}
}

void func_434()
{
	Global_2531497.f_1791.f_56 = 1;
}

void func_435()
{
	Global_2531497.f_1791.f_54 = 1;
}

bool func_436(int iParam0)
{
	return IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 4);
}

void func_437()
{
	float fVar0;
	
	if (!func_24(&uLocal_1297) || (func_24(&uLocal_1297) && func_23(&uLocal_1297, 5000, 0)))
	{
		fVar0 = func_440(PLAYER_PED_ID(), vLocal_137, 1);
		if (!func_439(PLAYER_ID()))
		{
			if (fVar0 <= 700f)
			{
				func_438(1);
			}
		}
		else if (fVar0 > 700f)
		{
			func_438(0);
		}
		func_22(&uLocal_1297);
		func_397(&uLocal_1297, 0, 0);
	}
}

void func_438(bool bParam0)
{
	if (bParam0)
	{
		SET_BIT(&(Global_1628955[SET_BIT() /*614*/].f_1), 5);
	}
	else
	{
		CLEAR_BIT(&(Global_1628955[CLEAR_BIT() /*614*/].f_1), 5);
	}
}

int func_439(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 5);
	}
	return 0;
}

float func_440(int iParam0, vector3 vParam1, bool bParam2)
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

void func_441()
{
	if (Local_112.f_197 != 2)
	{
		if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 0) || IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 6))
		{
			if (!IS_BIT_SET(iLocal_115, 11))
			{
				if (Local_112.f_21 == 2)
				{
					if (TRIGGER_MUSIC_EVENT("PENNED_IN_START_MUSIC"))
					{
						SET_BIT(&iLocal_115, 11);
					}
				}
			}
			else if (IS_BIT_SET(iLocal_115, 15))
			{
				if (!IS_BIT_SET(iLocal_115, 12))
				{
					if (!IS_BIT_SET(iLocal_115, 16))
					{
						if (TRIGGER_MUSIC_EVENT("PENNED_IN_70_PERCENT"))
						{
							SET_BIT(&iLocal_115, 16);
						}
					}
				}
			}
			if (!IS_BIT_SET(iLocal_115, 12))
			{
				if (IS_BIT_SET(iLocal_115, 11))
				{
					if (Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_7 > 2)
					{
						if (TRIGGER_MUSIC_EVENT("PENNED_IN_STOP_MUSIC"))
						{
							SET_BIT(&iLocal_115, 12);
						}
					}
				}
			}
		}
	}
	else if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 0) || IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 6))
	{
		if (!IS_BIT_SET(iLocal_115, 11))
		{
			if (Local_112.f_21 == 2)
			{
				if (TRIGGER_MUSIC_EVENT("CAGED_IN_START_MUSIC"))
				{
					SET_BIT(&iLocal_115, 11);
					SET_USER_RADIO_CONTROL_ENABLED(0);
				}
			}
		}
		else if (IS_BIT_SET(iLocal_115, 15))
		{
			if (!IS_BIT_SET(iLocal_115, 12))
			{
				if (!IS_BIT_SET(iLocal_115, 16))
				{
					if (TRIGGER_MUSIC_EVENT("CAGED_IN_70_PERCENT"))
					{
						SET_BIT(&iLocal_115, 16);
					}
				}
			}
		}
		if (!IS_BIT_SET(iLocal_115, 12))
		{
			if (IS_BIT_SET(iLocal_115, 11))
			{
				if (Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_7 > 2)
				{
					if (TRIGGER_MUSIC_EVENT("CAGED_IN_STOP_MUSIC"))
					{
						SET_BIT(&iLocal_115, 12);
						SET_USER_RADIO_CONTROL_ENABLED(1);
					}
				}
			}
		}
	}
}

void func_442()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_376(PLAYER_ID(), 0))
	{
		if (IS_BIT_SET(iLocal_115, 22))
		{
			CLEAR_BIT(&iLocal_115, 22);
		}
		return;
	}
	if (func_626())
	{
		func_503(0);
	}
	iVar0 = Global_1590446[PLAYER_ID() /*871*/].f_735;
	if (!IS_BIT_SET(iLocal_115, 22))
	{
		if (Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_1 != 0)
		{
			Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_1 = 0;
		}
		SET_BIT(&iLocal_115, 22);
	}
	if (!IS_BIT_SET(iLocal_115, 13))
	{
		SET_BIT(&iLocal_115, 13);
		func_430();
	}
	if (iLocal_1320 == 2)
	{
		func_494();
	}
	if (NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		if (NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
		{
			iVar1 = NETWORK_GET_PARTICIPANT_INDEX(iVar0);
			iVar2 = iVar1;
			iVar3 = Local_113[iVar2 /*8*/].f_7;
			if (iVar3 > 0)
			{
				if (DOES_BLIP_EXIST(iLocal_135))
				{
					REMOVE_BLIP(&iLocal_135);
				}
			}
			switch (iVar3)
			{
				case 0:
					func_487(1, 0);
					func_477();
					func_463();
					break;
				
				case 1:
					func_463();
					func_487(!IS_BIT_SET(iLocal_114, 9), 0);
					break;
				
				case 2:
					func_29(1);
					func_457();
					func_487(0, 0);
					func_448();
					if (IS_BIT_SET(Local_113[iVar2 /*8*/].f_1, 5))
					{
						if (!IS_BIT_SET(Local_113[iVar2 /*8*/].f_1, 1))
						{
							if (!func_24(&uLocal_143))
							{
								func_397(&uLocal_143, 0, 0);
							}
							if (func_24(&uLocal_143))
							{
								if ((func_447() - func_357(&uLocal_143, 0, 0)) >= 0)
								{
									func_444((func_447() - func_357(&uLocal_143, 0, 0)), "PEN_ELM", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
					}
					else if (func_24(&uLocal_143))
					{
						func_22(&uLocal_143);
					}
					func_37();
					break;
				
				case 3:
					if (IS_BIT_SET(Local_113[iVar2 /*8*/].f_1, 0) || IS_BIT_SET(Local_113[iVar2 /*8*/].f_1, 6))
					{
						func_487(0, 1);
					}
					if (DOES_BLIP_EXIST(iLocal_134))
					{
						SET_BLIP_COLOUR(iLocal_134, 55);
					}
					func_37();
					break;
				
				default:
					if (IS_BIT_SET(Local_113[iVar2 /*8*/].f_1, 2))
					{
						func_443();
					}
					break;
				}
			}
	}
	if (Local_112.f_21 > 4)
	{
		func_1162();
	}
}

void func_443()
{
	if (DOES_BLIP_EXIST(iLocal_134))
	{
		REMOVE_BLIP(&iLocal_134);
	}
}

void func_444(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_446(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1375006.f_1 = 1;
		func_445(7, iVar0);
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

void func_445(int iParam0, int iParam1)
{
	SET_BIT(&(Global_1375006.f_6184[iParam0]), iParam1);
}

bool func_446(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_1375006.f_6184[iParam0], iParam1);
}

int func_447()
{
	if (Local_112.f_197 != 2)
	{
		return Global_262145.f_11153;
	}
	return 15000;
}

void func_448()
{
	float fVar0;
	float fVar1;
	
	if (IS_BIT_SET(Local_112.f_1, 3))
	{
		return;
	}
	if (iLocal_1312 == -1)
	{
		if (Local_112.f_165 > 0)
		{
			iLocal_1312 = Local_112.f_165;
		}
	}
	else if (Local_112.f_165 > iLocal_1312)
	{
		iLocal_1312 = Local_112.f_165;
	}
	if (func_454(0))
	{
		if (!func_1010(1))
		{
			func_451(Local_112.f_165, "PEN_REMP", -1, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	fVar0 = func_450();
	if (fVar0 >= fLocal_156)
	{
		fLocal_156 = fVar0;
	}
	if (!IS_BIT_SET(iLocal_115, 15))
	{
		if (fLocal_156 >= fLocal_157)
		{
			SET_BIT(&iLocal_115, 15);
		}
	}
	fVar1 = (fLocal_155 - fLocal_156);
	if (func_454(0))
	{
		if (!func_1010(1))
		{
			func_449(round(fVar1), round(fLocal_155), "PEN_DST", 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1);
		}
	}
}

void func_449(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_446(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1375006.f_1 = 1;
		func_445(0, iVar0);
		Global_1375006.f_1114[iVar0] = iParam0;
		Global_1375006.f_1114.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1375006.f_1114.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1375006.f_1114.f_194[iVar0] = iParam3;
		Global_1375006.f_1114.f_183[iVar0] = iParam4;
		Global_1375006.f_1114.f_216[iVar0] = iParam5;
		Global_1375006.f_1114.f_227[iVar0 /*3*/] = iParam6;
		Global_1375006.f_1114.f_227[iVar0 /*3*/].f_1 = iParam7;
		Global_1375006.f_1114.f_258[iVar0] = iParam8;
		Global_1375006.f_1114.f_269[iVar0] = iParam9;
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

float func_450()
{
	float fVar0;
	int iVar1;
	
	fVar0 = GET_DISTANCE_BETWEEN_COORDS(vLocal_137, vLocal_152[iLocal_136 /*3*/], true);
	if (iLocal_136 > 0)
	{
		iVar1 = 0;
		while (iVar1 <= (iLocal_136 - 1))
		{
			fVar0 = (fVar0 + fLocal_153[iVar1]);
			iVar1++;
		}
	}
	return fVar0;
}

void func_451(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
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
			if (func_446(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1375006.f_1 = 1;
		func_445(6, iVar0);
		Global_1375006.f_3835[iVar0] = iParam0;
		StringCopy(&(Global_1375006.f_3835.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1375006.f_3835.f_183[iVar0] = iParam3;
		Global_1375006.f_3835.f_172[iVar0] = iParam2;
		Global_1375006.f_3835.f_260[iVar0] = iParam4;
		Global_1375006.f_3835.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1375006.f_3835.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1375006.f_3835.f_443[iVar0] = iParam7;
		Global_1375006.f_3835.f_454[iVar0] = iParam8;
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
		if (iParam15 == 5 && func_453())
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
			if (func_452())
			{
				Global_1375006.f_1113 = 1;
			}
		}
	}
}

int func_452()
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

int func_453()
{
	if (((_GET_CURRENT_LANGUAGE_ID() == 8 || _GET_CURRENT_LANGUAGE_ID() == 9) || _GET_CURRENT_LANGUAGE_ID() == 10) || _GET_CURRENT_LANGUAGE_ID() == 12)
	{
		return 1;
	}
	return 0;
}

int func_454(bool bParam0)
{
	if (func_456())
	{
		return 0;
	}
	if (func_455())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_1276(PLAYER_ID(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_455()
{
	return Global_1590446[PLAYER_ID() /*871*/].f_196 != 0;
}

bool func_456()
{
	return IS_BIT_SET(Global_2359302, 12);
}

void func_457()
{
	if (iLocal_1313)
	{
		func_443();
		if (func_462(100f, 10f, 5f))
		{
			iLocal_1313 = 1;
		}
	}
	func_458();
	if (DOES_BLIP_EXIST(iLocal_134))
	{
		SET_BLIP_SCALE(iLocal_134, fLocal_140);
	}
}

void func_458()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_461();
	fVar1 = (fVar0 / fLocal_155);
	fVar2 = ((((func_1064() - func_460()) * fVar1) + func_460()) * func_459());
	if (fVar2 < func_460())
	{
		fVar2 = func_460();
	}
	if (fVar2 > func_1064())
	{
		fVar2 = func_1064();
	}
	fLocal_141 = fLocal_140;
	if (fVar2 > fLocal_141)
	{
		fVar2 = fLocal_141;
	}
	fLocal_140 = fVar2;
	if (IS_BIT_SET(Local_112.f_1, 4))
	{
		if (fLocal_140 != func_460())
		{
			fLocal_140 = func_460();
		}
	}
	if (!func_24(&uLocal_1301) || (func_24(&uLocal_1301) && func_23(&uLocal_1301, 5000, 0)))
	{
		func_22(&uLocal_1301);
		func_397(&uLocal_1301, 0, 0);
		Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_6 = fLocal_140;
	}
}

float func_459()
{
	return Global_262145.f_11150;
}

float func_460()
{
	if (Local_112.f_197 != 2)
	{
		return Global_262145.f_11145;
	}
	return Global_262145.f_18350;
}

float func_461()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = GET_DISTANCE_BETWEEN_COORDS(vLocal_137, vLocal_152[iLocal_136 + 1 /*3*/], true);
	iVar1 = iLocal_136 + 1;
	if (iVar1 < (iLocal_154 - 1))
	{
		iVar2 = iVar1;
		while (iVar2 <= (iLocal_154 - 1))
		{
			fVar0 = (fVar0 + fLocal_153[iVar2]);
			iVar2++;
		}
	}
	return fVar0;
}

int func_462(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	fVar0 = ABSF((fParam0 - fParam1));
	if (fLocal_140 > fParam1)
	{
		fLocal_140 = (fLocal_140 - IntToFloat(floor(((fVar0 / fParam2) * GET_FRAME_TIME()))));
		if (fLocal_140 < fParam1)
		{
			fLocal_140 = fParam1;
		}
	}
	else
	{
		fLocal_140 = fParam1;
		return 1;
	}
	return 0;
}

void func_463()
{
	if (!IS_BIT_SET(iLocal_114, 7))
	{
		func_476(&iLocal_1290);
		SET_BIT(&iLocal_114, 7);
	}
	if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 4))
	{
		if (func_475(&iLocal_1290))
		{
			if (IS_BIT_SET(Local_112.f_1, 8))
			{
				if (func_464(&iLocal_1290, 1, 0, 1))
				{
					SET_BIT(&(Local_113[SET_BIT() /*8*/].f_1), 4);
				}
			}
		}
	}
}

int func_464(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 6))
	{
		if (func_1010(1))
		{
			return 1;
		}
	}
	if (func_475(iParam0))
	{
		if (!func_474(&(iParam0->f_3)))
		{
			func_472(&(iParam0->f_3));
		}
		_SET_UI_LAYER(4);
		if (HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			DRAW_SCALEFORM_MOVIE_FULLSCREEN(*iParam0, 255, 255, 255, 100, 0);
		}
		iVar0 = floor(func_469(&(iParam0->f_3)));
		iVar1 = ABSI((iVar0 - 3));
		bVar2 = false;
		if (func_72(iParam0->f_1, 4))
		{
			if (iParam0->f_2 >= 5)
			{
				if (!func_72(iParam0->f_1, 16))
				{
					PLAY_SOUND_FRONTEND(-1, "GO", "HUD_MINI_GAME_SOUNDSET", false);
					func_113(&(iParam0->f_1), 16);
					STOP_STREAM();
				}
			}
			else
			{
				iParam0->f_2++;
			}
		}
		if (!func_72(iParam0->f_1, 8))
		{
			if (iVar1 == 3 && !func_72(iParam0->f_1, 1))
			{
				func_113(&(iParam0->f_1), 1);
				PLAY_SOUND_FRONTEND(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", false);
				func_468(iParam0, iVar1);
			}
			else if (iVar1 == 2 && !func_72(iParam0->f_1, 2))
			{
				func_113(&(iParam0->f_1), 2);
				PLAY_SOUND_FRONTEND(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", false);
				func_468(iParam0, iVar1);
			}
			else if (iVar1 == 1 && !func_72(iParam0->f_1, 4))
			{
				func_113(&(iParam0->f_1), 4);
				PLAY_SOUND_FRONTEND(-1, "3_2_1", "HUD_MINI_GAME_SOUNDSET", false);
				func_468(iParam0, iVar1);
				if (!func_376(PLAYER_ID(), 0))
				{
					func_418("PEN_AREA", 0);
				}
			}
			else if (iVar1 == 0 && !func_72(iParam0->f_1, 8))
			{
				func_113(&(iParam0->f_1), 8);
				GET_HUD_COLOUR(18, &iVar3, &iVar4, &iVar5, &uVar6);
				BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_MESSAGE");
				func_467("CNTDWN_GO");
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar3);
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar4);
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar5);
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(true);
				END_SCALEFORM_MOVIE_METHOD();
				func_443();
				func_1008(func_1009(), 0);
				SET_BIT(&iLocal_114, 9);
				if (!IS_BIT_SET(iLocal_114, 6))
				{
					ANIMPOSTFX_PLAY("pennedIn", 0, 1);
					SET_BIT(&iLocal_114, 6);
					if (IS_AUDIO_SCENE_ACTIVE("MP_Player_Outside_Bubble_Scene"))
					{
						STOP_AUDIO_SCENE("MP_Player_Outside_Bubble_Scene");
					}
					START_AUDIO_SCENE("MP_Player_Inside_Bubble_Scene");
				}
				if (!bParam1)
				{
					bVar2 = true;
				}
			}
		}
		else if (iVar1 == 1)
		{
			bVar2 = true;
		}
		if ((iParam2 && func_466()) || iVar0 > 5)
		{
			bVar2 = true;
		}
		if (bVar2)
		{
			if (bParam3)
			{
				iParam0->f_1 = 0;
				func_465(&(iParam0->f_3));
			}
			STOP_AUDIO_SCENE("RACES_RADIO_MUTE_scene");
			START_AUDIO_SCENE("MP_RACE_GENERAL_SCENE");
			iVar7 = 0;
			while (iVar7 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
			{
				if (NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(iVar7)))
				{
					iVar8 = NETWORK_GET_PLAYER_INDEX(NETWORK_GET_PLAYER_INDEX(iVar7));
					if (iVar8 != PLAYER_ID())
					{
						iVar9 = GET_PLAYER_PED(iVar8);
						if (IS_PED_IN_ANY_VEHICLE(iVar9, 0))
						{
							iVar10 = GET_VEHICLE_PED_IS_IN(iVar9, 0);
							_DYNAMIC_MIXER_RELATED_FN(iVar10, "MP_RACE_NPC_CAR_Group", 0f);
						}
					}
				}
				iVar7++;
			}
			return 1;
		}
	}
	return 0;
}

void func_465(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_466()
{
	if (IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (IS_CONTROL_PRESSED(0, 18) || IS_CONTROL_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_467(char* sParam0)
{
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_468(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
	BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_MESSAGE");
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
	ADD_TEXT_COMPONENT_INTEGER(ADD_TEXT_COMPONENT_INTEGER(iParam1));
	END_TEXT_COMMAND_SCALEFORM_STRING();
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar1);
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar2);
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(true);
	END_SCALEFORM_MOVIE_METHOD();
}

float func_469(var uParam0)
{
	if (func_474(uParam0))
	{
		if (func_471(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_470(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_470(bool bParam0)
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

bool func_471(var uParam0)
{
	return IS_BIT_SET(*uParam0, 2);
}

void func_472(int iParam0)
{
	func_473(iParam0, 0f);
}

void func_473(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_470(IS_BIT_SET(*iParam0, 4)) - fParam1);
	SET_BIT(iParam0, 1);
	CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_474(var uParam0)
{
	return IS_BIT_SET(*uParam0, 1);
}

int func_475(int iParam0)
{
	if (!HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		return 0;
	}
	return 1;
}

void func_476(int iParam0)
{
	*iParam0 = 0x67D02A194A2FC2BD("COUNTDOWN");
}

void func_477()
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	int iVar3;
	int iVar4;
	
	bVar0 = IS_BIT_SET(Local_112.f_1, 1);
	if (!func_486())
	{
		return;
	}
	iVar1 = func_383();
	if (IS_BIT_SET(Local_112.f_1, 7))
	{
		iVar1 = func_382();
	}
	if (Local_112.f_197 == 2)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iVar3 = func_391();
		if (iVar3 > iLocal_1308)
		{
			iVar3 = iLocal_1308;
		}
		if (iVar4 != Local_112.f_165)
		{
			iVar4 = Local_112.f_165;
		}
		if (!func_376(PLAYER_ID(), 0))
		{
			Var2 = { func_431() };
			if (Local_112.f_197 != 2)
			{
				if (!func_432(&Var2))
				{
					func_418(&Var2, 0);
				}
			}
			else if (!func_432(&Var2))
			{
				func_483(&Var2, "CAG_BLIP", iLocal_1310, 0);
			}
		}
		if (Local_112.f_197 != 2)
		{
			if ((iVar1 - func_357(&(Local_112.f_24), 0, 0)) >= 0)
			{
				func_482((iVar1 - func_357(&(Local_112.f_24), 0, 0)));
				func_478(iVar4, iVar3, (iVar1 - func_357(&(Local_112.f_24), 0, 0)), 1, func_481(-1));
			}
			else
			{
				func_478(iVar4, iVar3, 0, 1, func_481(-1));
			}
		}
		else if ((iVar1 - func_357(&(Local_112.f_24), 0, 0)) >= 0)
		{
			func_482((iVar1 - func_357(&(Local_112.f_24), 0, 0)));
			func_478(iVar4, iVar3, (iVar1 - func_357(&(Local_112.f_24), 0, 0)), 1, "SYG_GOTOTIMER");
		}
		else
		{
			func_478(iVar4, iVar3, 0, 1, "SYG_GOTOTIMER");
		}
	}
	else if (!func_376(PLAYER_ID(), 0))
	{
		Var2 = { func_431() };
		if (func_432(&Var2))
		{
			func_430();
		}
	}
}

void func_478(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	
	if (func_454(0) == 0)
	{
		return;
	}
	func_480();
	func_479(iParam0, iParam1, "HUD_PARITIC", -1, 1, 4, 0, 0, 0, 0, 0, 1, 1, 0, 255, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_224(sParam4))
	{
		sVar0 = sParam4;
	}
	func_444(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0, -1);
}

void func_479(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_446(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1375006.f_1 = 1;
		func_445(4, iVar0);
		Global_1375006.f_3163[iVar0] = iParam0;
		Global_1375006.f_3163.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1375006.f_3163.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1375006.f_3163.f_183[iVar0] = iParam3;
		Global_1375006.f_3163.f_216[iVar0] = iParam5;
		Global_1375006.f_3163.f_194[iVar0] = iParam4;
		Global_1375006.f_3163.f_227[iVar0] = iParam6;
		Global_1375006.f_3163.f_270[iVar0] = iParam7;
		Global_1375006.f_3163.f_281[iVar0] = iParam8;
		Global_1375006.f_3163.f_292[iVar0] = iParam9;
		Global_1375006.f_3163.f_303[iVar0] = iParam10;
		Global_1375006.f_3163.f_314[iVar0] = iParam11;
		Global_1375006.f_3163.f_325[iVar0] = iParam13;
		Global_1375006.f_3163.f_336[iVar0] = iParam14;
		Global_1375006.f_3163.f_347[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && IS_PC_VERSION()) && iParam12)
		{
			Global_1375006.f_1109 = 1;
		}
	}
}

void func_480()
{
	HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_2460544 = 1;
}

char* func_481(int iParam0)
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

void func_482(int iParam0)
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

void func_483(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_484(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312585 = 19;
		Global_1312585.f_56 = iParam2;
	}
}

int func_484(char* sParam0, char* sParam1, bool bParam2, var uParam3)
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
	if (func_485(sParam0, sParam1) && Global_1312585.f_56 == Global_1312585.f_58)
	{
		return 0;
	}
	func_422();
	Global_1312585 = 3;
	StringCopy(&(Global_1312585.f_1), GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	Global_1312585.f_58 = uParam3;
	Global_1312585.f_56 = uParam3;
	func_421();
	func_420(bParam2);
	func_419();
	return 1;
}

bool func_485(char* sParam0, char* sParam1)
{
	if (!func_426())
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

int func_486()
{
	if (Local_112.f_197 != 2)
	{
		return 1;
	}
	else if (func_908())
	{
		return 1;
	}
	else if (func_38(PLAYER_ID()) == 3)
	{
		return 1;
	}
	if (func_432("CAG_STARTO"))
	{
		func_430();
	}
	return 0;
}

void func_487(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	vector3 vVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	bool bVar9;
	
	if (Local_112.f_197 == 2)
	{
		if (func_38(PLAYER_ID()) < 2)
		{
			return;
		}
	}
	if (!bParam0)
	{
		if (!bParam1 || func_493())
		{
			GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
		}
		else
		{
			GET_HUD_COLOUR(3, &iVar0, &iVar1, &iVar2, &iVar3);
		}
	}
	else if (Local_112.f_197 == 2)
	{
		GET_HUD_COLOUR(iLocal_1310, &iVar0, &iVar1, &iVar2, &iVar3);
	}
	else
	{
		GET_HUD_COLOUR(29, &iVar0, &iVar1, &iVar2, &iVar3);
	}
	fVar4 = 0.5f;
	vVar5 = { vLocal_137 };
	fVar6 = (fLocal_140 * 2f);
	switch (Local_112.f_167)
	{
		case 0:
			fVar7 = 36.9f;
			fVar8 = 7.875f;
			fVar6 = func_492();
			vVar5 = { func_491() };
			break;
		
		case 1:
			fVar7 = 26.25f;
			fVar8 = 4.375f;
			fVar6 = func_492();
			vVar5 = { func_491() };
			break;
		
		case 2:
			fVar7 = 49.875f;
			fVar8 = 12f;
			fVar6 = func_492();
			vVar5 = { func_491() };
			break;
		
		case 3:
			fVar7 = 9.5f;
			fVar8 = 0f;
			fVar6 = func_492();
			vVar5 = { func_491() };
			break;
		
		case 4:
			fVar7 = 38.75f;
			fVar8 = 10.25f;
			fVar6 = func_492();
			vVar5 = { func_491() };
			break;
		
		case 6:
			fVar7 = 5.25f;
			fVar8 = 0f;
			fVar6 = func_492();
			vVar5 = { func_491() };
			break;
		
		case 7:
			fVar7 = 5.25f;
			fVar8 = 0.875f;
			fVar6 = func_492();
			vVar5 = { func_491() };
			break;
		
		case 8:
			fVar7 = 15.375f;
			fVar8 = 4.75f;
			fVar6 = func_492();
			vVar5 = { func_491() };
			break;
		
		case 9:
			fVar7 = 13.625f;
			fVar8 = 4.5f;
			fVar6 = 38.875f;
			vVar5 = { func_491() };
			break;
		
		case 10:
			fVar7 = 7.75f;
			fVar8 = 2f;
			fVar6 = func_492();
			vVar5 = { func_491() };
			break;
	}
	vVar5.z = (vVar5.z - fVar8);
	if (func_493())
	{
		fVar4 = (fVar4 / 2f);
	}
	if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 6))
	{
		if (func_1010(1))
		{
			bVar9 = true;
		}
	}
	if (!func_490())
	{
		if (func_489(PLAYER_ID()) == 0)
		{
			if (!func_488())
			{
				if (!bParam0)
				{
					if (!IS_BIT_SET(Local_112.f_1, 3))
					{
						if (!bVar9)
						{
							0x799017F9E3B10112(vLocal_137, fLocal_140, iVar0, iVar1, iVar2, fVar4);
						}
					}
				}
				else
				{
					DRAW_MARKER(1, vVar5, 0f, 0f, 0f, 0f, 0f, 0f, fVar6, fVar6, fVar7, iVar0, iVar1, iVar2, iVar3, 0, 0, 2, 0, 0, 0, false);
				}
			}
		}
	}
}

bool func_488()
{
	return IS_BIT_SET(Global_2448961, 20);
}

int func_489(int iParam0)
{
	return Global_1590446[iParam0 /*871*/].f_196;
}

bool func_490()
{
	return (IS_BIT_SET(iLocal_115, 5) || IS_BIT_SET(iLocal_115, 8));
}

Vector3 func_491()
{
	vector3 vVar0;
	
	switch (Local_112.f_167)
	{
		case 0:
			vVar0 = { vLocal_137 };
			vVar0.x = 1457.639f;
			vVar0.y = -2371.45f;
			break;
		
		case 1:
			vVar0 = { vLocal_137 };
			vVar0.x = -1903.733f;
			vVar0.y = 2042.75f;
			break;
		
		case 2:
			vVar0 = { vLocal_137 };
			vVar0.x = 2237.85f;
			vVar0.y = 1469f;
			break;
		
		case 3:
			vVar0 = { vLocal_137 };
			vVar0.x = -1210.197f;
			vVar0.y = -2437.739f;
			break;
		
		case 4:
			vVar0 = { vLocal_137 };
			vVar0.x = 106.968f;
			vVar0.y = 7003.605f;
			break;
		
		case 6:
			vVar0 = { vLocal_137 };
			break;
		
		case 7:
			vVar0 = { vLocal_137 };
			break;
		
		case 8:
			vVar0 = { vLocal_137 };
			vVar0.x = -2653.049f;
			vVar0.y = 1505.637f;
			break;
		
		case 9:
			vVar0 = { vLocal_137 };
			vVar0.x = -1464.237f;
			vVar0.y = 2789.826f;
			break;
		
		case 10:
			vVar0 = { vLocal_137 };
			vVar0.x = 999.892f;
			vVar0.y = -677.42f;
			break;
	}
	return vVar0;
}

float func_492()
{
	float fVar0;
	
	switch (Local_112.f_167)
	{
		case 0:
			fVar0 = 155.375f;
			break;
		
		case 1:
			fVar0 = 94.75f;
			break;
		
		case 2:
			fVar0 = 198.75f;
			break;
		
		case 3:
			fVar0 = 250f;
			break;
		
		case 4:
			fVar0 = 196.375f;
			break;
		
		case 7:
			fVar0 = 36f;
			break;
		
		case 6:
		case 8:
		case 9:
		case 10:
			fVar0 = 42.5f;
			break;
	}
	return fVar0;
}

int func_493()
{
	if (PARTICIPANT_ID_TO_INT() != -1)
	{
		return IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 11);
	}
	return 0;
}

void func_494()
{
	if (!IS_BIT_SET(iLocal_115, 19))
	{
		func_502();
		0xCD74233600C4EA6B(0);
		if (func_501("SCTV_HELI_HLP"))
		{
			CLEAR_HELP(1);
		}
		func_496(&(Local_112.f_184), 1, IS_BIT_SET(Local_112.f_1, 5), 0);
		if (!func_376(PLAYER_ID(), 0))
		{
			CLEAR_BIT(&(Local_113[CLEAR_BIT() /*8*/].f_1), 11);
			CLEAR_BIT(&(Global_2424073[CLEAR_BIT() /*421*/].f_195), 2);
			CLEAR_BIT(&(Global_1628955[CLEAR_BIT() /*614*/].f_1), 14);
			func_495(PLAYER_ID(), 0);
		}
		SET_BIT(&iLocal_115, 19);
	}
}

void func_495(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (DECOR_EXIST_ON(DECOR_EXIST_ON(iParam0), "MPBitset"))
	{
		iVar0 = DECOR_GET_INT(DECOR_GET_INT(iParam0), "MPBitset");
	}
	CLEAR_BIT(&iVar0, iParam1);
	DECOR_SET_INT(DECOR_SET_INT(iParam0), "MPBitset", iVar0);
}

void func_496(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
	}
	if (bParam2)
	{
		if (NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_2) && NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_2))
		{
			iVar0 = NET_TO_ENT(uParam0->f_2);
			if (bParam3)
			{
				func_500(&(uParam0->f_2));
			}
			else
			{
				SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
			}
		}
		if (NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_3) && NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_3))
		{
			iVar1 = NET_TO_ENT(uParam0->f_3);
			if (bParam3)
			{
				func_500(&(uParam0->f_3));
			}
			else
			{
				SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar1);
			}
		}
	}
	func_497(1, -1);
	func_8(0);
}

void func_497(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_499(&iVar0, 0, iParam1))
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
		func_498(&(Global_22350.f_5660[iVar0 /*10*/]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_498(int iParam0)
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

int func_499(var uParam0, bool bParam1, int iParam2)
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

void func_500(var uParam0)
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

int func_501(char* sParam0)
{
	BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_502()
{
	Global_2437549.f_1155.f_10 = 0;
}

void func_503(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		Global_1365114[iVar0 /*42*/] = -1;
		Global_1365114[iVar0 /*42*/].f_1 = func_398();
		Global_1365114[iVar0 /*42*/].f_9 = -1;
		Global_1365114[iVar0 /*42*/].f_31 = -1;
		StringCopy(&(Local_159.f_104), "FM_AE_SORT_12", 16);
		if (Local_112.f_36[iVar0 /*4*/] > -1)
		{
			if (Local_112.f_36[iVar0 /*4*/].f_3 > 0)
			{
				Global_1365114[iVar0 /*42*/] = Local_112.f_36[iVar0 /*4*/];
				Global_1365114[iVar0 /*42*/].f_1 = Local_112.f_36[iVar0 /*4*/].f_1;
				Global_1365114[iVar0 /*42*/].f_9 = -1;
				Global_1365114[iVar0 /*42*/].f_41 = Local_112.f_36[iVar0 /*4*/].f_2;
			}
		}
		iVar0++;
	}
	if (bParam0)
	{
		if (!func_625())
		{
			if (Local_159.f_103 != 136)
			{
				Local_159.f_103 = 136;
			}
			else
			{
				func_623(1, 136);
			}
		}
	}
	iVar1 = 26;
	if (Local_112.f_197 == 2)
	{
		iVar1 = 27;
	}
	func_504(&Global_1365114, &iLocal_158, iVar1, &Local_159, &uLocal_171, -1, 0, 0);
}

void func_504(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
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
	
	if (func_622(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_36 = 0;
	if (func_621() || iParam2 == 27)
	{
		if (func_573(iParam1, iParam2, uParam3, Global_1574182, 0, func_626(), sParam7))
		{
			func_572(1);
			if ((!func_571() && !func_570()) || IS_BIT_SET(Global_2531497.f_4588, 1))
			{
				if (func_569())
				{
					func_566();
				}
				else
				{
					SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_565(1);
						Global_1574182 = 0;
						iVar19 = -1;
						if (Global_1574403 != 1)
						{
							func_564(iParam1, 0, 0);
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
								if (func_1276(INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar3 = INT_TO_PLAYERINDEX(iVar17);
									if (!func_376(iVar3, 0))
									{
										if ((func_563(iVar3) || Global_2424073[iVar3 /*421*/].f_236 != -1) || func_562(iVar3))
										{
											iVar9 = iVar3;
											if (func_132(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_561(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_559(PLAYER_ID(), 0) && func_145(PLAYER_ID()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_558())
							{
								if (func_1276(INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar3 = INT_TO_PLAYERINDEX(iVar17);
								}
								else
								{
									iVar3 = func_398();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_557(iVar3) && func_554(iVar3, iParam2)) && func_1276(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1590446[iVar9 /*871*/].f_211.f_6;
								Var6 = { func_549(iVar3) };
								if (iVar3 == PLAYER_ID())
								{
									uParam3->f_35 = iVar18;
								}
								StringCopy(&(uParam3->f_1), GET_PLAYER_NAME(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_64(iVar3) };
								iVar5 = func_543(iVar3);
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
									if (!func_558())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_538(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_537(iParam5, 1, 0, 0), 16);
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
								iVar16 = func_536(iVar3, 0);
								if (bVar2)
								{
									if (func_131(iVar3, 1) && iVar1[iVar9] != -1)
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
								if (func_535(iParam5))
								{
									func_534(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								else
								{
									func_534(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
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
							if (func_1276(iVar3, 0, 1) && !IS_BIT_SET(iVar14, iVar3))
							{
								iVar3 = INT_TO_PLAYERINDEX(iVar17);
							}
							else
							{
								iVar3 = func_398();
							}
							if (func_557(iVar3))
							{
								if (func_1276(INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1590446[iVar9 /*871*/].f_211.f_6;
									Var6 = { func_549(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_64(iVar3) };
									iVar5 = func_543(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = GET_PEDHEADSHOT_TXD_STRING(iVar5);
									}
									Global_1574182++;
									iVar16 = func_536(iVar3, 1);
									if (bVar2)
									{
										if (func_131(iVar3, 1))
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
									func_517(iVar3, GET_PLAYER_NAME(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (IS_BIT_SET(uParam3->f_33, 11))
						{
							func_514(uParam3, iParam1);
						}
						func_22(&(uParam3->f_21));
						func_513();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!IS_BIT_SET(uParam3->f_33, 7))
						{
							func_512(uParam3, iParam1);
							func_511(iParam1, 0, 1);
							SET_BIT(&(uParam3->f_33), 7);
						}
						func_512(uParam3, iParam1);
						if (!IS_BIT_SET(uParam3->f_33, 11))
						{
							SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_507(uParam3))
						{
							Global_1574403 = 1;
						}
						func_505(uParam3);
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
			func_513();
			func_565(0);
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

void func_505(var uParam0)
{
	if (!func_24(&(uParam0->f_21)))
	{
		func_397(&(uParam0->f_21), 0, 0);
	}
	else if (func_23(&(uParam0->f_21), 250, 0))
	{
		func_22(&(uParam0->f_21));
		func_506(0);
	}
}

void func_506(bool bParam0)
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

int func_507(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	iVar3 = INT_TO_PLAYERINDEX(uParam0->f_37);
	if (iVar3 != func_398() && func_1276(iVar3, 0, 1))
	{
		Var2 = { func_64(iVar3) };
		iVar1 = func_510(uParam0, uParam0->f_37);
		if (func_509(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (0x8F5D1AD832AEB06C(&Var2))
					{
						if (NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_508(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_508(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (0x8F5D1AD832AEB06C(&Var2))
					{
						if (!NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_508(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_508(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (0x8F5D1AD832AEB06C(&Var2))
					{
						if (!NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar4 = 1;
							func_508(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_508(uParam0, iVar0, 0);
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

void func_508(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_509(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_510(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_511(int iParam0, bool bParam1, int iParam2)
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

void func_512(var uParam0, int iParam1)
{
	if (!IS_BIT_SET(uParam0->f_33, 10))
	{
		BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_HIGHLIGHT");
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam0->f_35);
		END_SCALEFORM_MOVIE_METHOD();
		SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_513()
{
	if (Global_1574403 != 0)
	{
		Global_1574403 = 0;
	}
}

void func_514(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = INT_TO_PLAYERINDEX(iVar0);
		if (iVar2 != func_398())
		{
			if (func_1276(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_516(uParam0->f_38[iVar0 /*2*/], 0);
					func_515(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1590446[iVar0 /*871*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_515(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_516(int iParam0, bool bParam1)
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

void func_517(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_533() && iParam4 < func_532())
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
				func_531("");
			}
			else
			{
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam10);
			}
			func_531(sParam1);
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_531("");
			}
			else
			{
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(65);
			}
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(-1);
			func_531("");
			if (uParam3->f_108 == 6)
			{
				func_531("");
			}
			else
			{
				func_531(&sParam5);
			}
			func_521(uParam3, iParam0);
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam9);
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam9);
			if (func_520(uParam3))
			{
				func_467("DPAD_FRIEND");
			}
			else if (func_519(uParam3))
			{
				func_467("DPAD_FRIEND");
			}
			else if (func_518(uParam3))
			{
				func_467("DPAD_CREW");
			}
			else
			{
				func_467("");
			}
			END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_518(var uParam0)
{
	return IS_BIT_SET(uParam0->f_33, 6);
}

bool func_519(var uParam0)
{
	return IS_BIT_SET(uParam0->f_33, 5);
}

int func_520(var uParam0)
{
	if (func_519(uParam0) && func_518(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_521(var uParam0, int iParam1)
{
	if (func_530(iParam1))
	{
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(121);
	}
	else if (func_525(iParam1))
	{
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(122);
	}
	else if (((IS_BIT_SET(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && IS_BIT_SET(Global_2424073[iParam1 /*421*/].f_411, 0))
	{
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(123);
	}
	else
	{
		if (func_522())
		{
			uParam0->f_36 = 0;
		}
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(uParam0->f_36);
	}
}

int func_522()
{
	if (NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_523() || func_105())
		{
			return 1;
		}
	}
	return 0;
}

int func_523()
{
	if (NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_105();
	}
	return func_524(Global_4456448.f_154360);
}

int func_524(int iParam0)
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

int func_525(int iParam0)
{
	if ((func_1276(iParam0, 0, 1) && func_526()) && func_124(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_526()
{
	if (func_47(PLAYER_ID()) || func_529())
	{
		if (!func_527(PLAYER_ID(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_527(int iParam0, int iParam1)
{
	if (func_528(iParam0) == iParam1)
	{
		return func_43(iParam0);
	}
	return 0;
}

int func_528(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628955[iVar0 /*614*/];
	}
	return -1;
}

int func_529()
{
	switch (func_145(PLAYER_ID()))
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

int func_530(int iParam0)
{
	if (func_522())
	{
		if (func_1276(iParam0, 0, 1))
		{
			return func_132(iParam0);
		}
	}
	if ((func_1276(iParam0, 0, 1) && func_526()) && func_126(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_531(char* sParam0)
{
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam0);
}

int func_532()
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

int func_533()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574184)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_534(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_533() && iParam3 < func_532())
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
					func_531("");
				}
				else
				{
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_467(sParam16);
				}
				else
				{
					func_531(&(uParam2->f_1));
				}
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_531("");
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
				if (func_558())
				{
					func_531("");
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
						func_467(&(uParam2->f_104));
					}
					else
					{
						func_531("");
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
					func_531("");
				}
				if (uParam2->f_108 == 6)
				{
					func_531("");
				}
				else
				{
					func_531(&sParam4);
				}
				func_521(uParam2, iParam0);
				if (iParam12 == 1 || IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_531("");
					func_531("");
				}
				else
				{
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam8);
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam8);
				}
				if (func_520(uParam2))
				{
					func_467("DPAD_FRIEND");
				}
				else if (func_519(uParam2))
				{
					func_467("DPAD_FRIEND");
				}
				else if (func_518(uParam2))
				{
					func_467("DPAD_CREW");
				}
				else
				{
					func_467("");
				}
				END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_535(int iParam0)
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

int func_536(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_47(iParam0)) && !func_45(iParam0))
	{
		iVar0 = func_83();
	}
	iVar1 = func_130(iParam0);
	if (!iVar1 == -1)
	{
		return func_128(iVar1);
	}
	return iVar0;
}

char* func_537(int iParam0, bool bParam1, bool bParam2, int iParam3)
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

int func_538(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_542(iParam3))
	{
		*fParam1 = (func_539(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_535(iParam3))
	{
		*fParam1 = (func_539(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_539(int iParam0, int iParam1)
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
				return func_541(to_float(iParam1));
			}
			break;
		
		case 2:
			if (_0xD3D15555431AB793())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_540(to_float(iParam1));
			}
			break;
	}
	return to_float(iParam1);
}

float func_540(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_541(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_542(int iParam0)
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

int func_543(int iParam0)
{
	int iVar0;
	
	iVar0 = func_546(iParam0);
	if (iVar0 == -1)
	{
		func_544(iParam0, 1);
		return 0;
	}
	Global_1385294[iVar0 /*5*/].f_4 = 1;
	return Global_1385294[iVar0 /*5*/].f_2;
}

void func_544(int iParam0, bool bParam1)
{
	if (!func_1276(iParam0, 0, 1))
	{
		return;
	}
	if (func_546(iParam0) != -1)
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
	if (func_545(iParam0))
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

int func_545(int iParam0)
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

int func_546(int iParam0)
{
	int iVar0;
	
	if (!func_1276(iParam0, 0, 1))
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
			func_547(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_547(int iParam0)
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
	func_548(&(Global_1385294[iVar2 /*5*/]));
	Global_1385455 = (Global_1385455 - 1);
}

void func_548(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_398();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = 0xBA7F0B77D80A4EB7();
	}
}

struct<4> func_549(int iParam0)
{
	char cVar0[32];
	
	if (func_1276(iParam0, 0, 1))
	{
		Global_2507671 = { func_64(iParam0) };
		if (IS_DURANGO_VERSION())
		{
			if (func_509(Global_2507671))
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
		if (func_553(&Global_2507671))
		{
			Global_2507601 = { func_551(iParam0) };
			func_550(&Global_2507601, &cVar0);
		}
	}
	return cVar0;
}

void func_550(var uParam0, char* sParam1)
{
	_0xF45352426FF3A4F0(uParam0, 35, sParam1);
}

struct<35> func_551(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_552(iParam0))
	{
		return Global_1312905[PLAYER_ID() /*35*/];
	}
	Var0 = { func_64(iParam0) };
	NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var0);
	return Var1;
}

int func_552(int iParam0)
{
	if (iParam0 == PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_553(var uParam0)
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

int func_554(int iParam0, int iParam1)
{
	if (iParam1 == 26)
	{
		if ((func_46(iParam0) || func_556(iParam0)) || func_375(iParam0))
		{
			return 0;
		}
	}
	if (!func_555(iParam0))
	{
		return 0;
	}
	if ((!func_563(iParam0) && Global_2424073[iParam0 /*421*/].f_236 == -1) && !func_562(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_555(int iParam0)
{
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_142, 22);
}

int func_556(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 10) || IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 9));
	}
	return 0;
}

int func_557(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_398())
	{
		return 0;
	}
	if (func_376(iParam0, 0))
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

int func_558()
{
	switch (func_145(PLAYER_ID()))
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
	switch (func_528(PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_45(PLAYER_ID()))
	{
		switch (func_145(PLAYER_ID()))
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
	if (func_527(PLAYER_ID(), 236))
	{
		return 1;
	}
	return 0;
}

int func_559(int iParam0, int iParam1)
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 && func_560(Global_1628955[iParam0 /*614*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1)
	{
		if (func_560(Global_1628955[iParam0 /*614*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_560(int iParam0)
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
	return func_155(iParam0, 0);
	return 0;
}

void func_561(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_1276(INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = INT_TO_PLAYERINDEX(iVar0);
			if (!func_376(iVar1, 0))
			{
				if ((func_563(iVar1) || Global_2424073[iVar1 /*421*/].f_236 != -1) || func_562(iVar1))
				{
					if (func_246(iVar1, iParam1, 0))
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

bool func_562(int iParam0)
{
	return Global_1590446[iParam0 /*871*/].f_196 != 0;
}

int func_563(int iParam0)
{
	if (func_1276(iParam0, 0, 1))
	{
		if (func_1276(PLAYER_ID(), 0, 1))
		{
			if (_0x3B39236746714134(iParam0, _0x3B39236746714134()) || func_145(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_564(int iParam0, int iParam1, int iParam2)
{
	if (HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT_EMPTY");
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam1);
		_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam2);
		END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_565(bool bParam0)
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

void func_566()
{
	if (IS_BIT_SET(Global_2531497.f_4588, 1))
	{
		if (func_568())
		{
			func_567();
		}
	}
}

void func_567()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2437549.f_2708[iVar0 /*80*/].f_2 != 0)
		{
			Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
			func_113(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

bool func_568()
{
	return Global_2437549.f_2708[0 /*80*/].f_1 != 0;
}

int func_569()
{
	if (IS_BIT_SET(Global_2531497.f_4588, 0) && func_568())
	{
		return 1;
	}
	if (IS_BIT_SET(Global_2531497.f_4588, 1) && func_568())
	{
		return 1;
	}
	return 0;
}

int func_570()
{
	if (func_568())
	{
		if (func_71(Global_2437549.f_2708[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_571()
{
	if (func_568())
	{
		if (func_84(Global_2437549.f_2708[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_572(int iParam0)
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

int func_573(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	char* sVar6;
	
	StringCopy(&Var0, "", 16);
	bVar3 = func_620(iParam1);
	if (iParam1 == 20)
	{
		bVar2 = true;
	}
	fVar4 = func_619();
	iVar5 = -1;
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_618())
		{
			if (func_617() > 0 && Global_1574184)
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
		if (!func_601())
		{
			func_600(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (IS_BIT_SET(Global_2531497.f_4591, 26))
	{
		func_600(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_24(&(uParam2->f_19)))
	{
		if (func_617() == 1)
		{
			func_599(bVar3, iParam0, 0);
			func_397(&(uParam2->f_19), 0, 0);
			func_600(iParam0, uParam2, 0);
			SET_BIT(&(Global_2531497.f_4592), 5);
		}
	}
	if (func_24(&(uParam2->f_19)) || bParam5)
	{
		if (IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HIDE_HELP_TEXT_THIS_FRAME();
		}
		HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_23(&(uParam2->f_19), 10000, 0) || (func_617() == 0 && !bParam5))
		{
			func_600(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_598();
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
					func_598();
					if (iParam1 == 26 || iParam1 == 27)
					{
						_0x25F87B30C382FCA7();
					}
					HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				_CLEAR_NOTIFICATIONS_POS(fVar4);
				if (func_599(bVar3, iParam0, 0))
				{
					func_564(iParam0, 0, 0);
					sVar1 = func_596(iParam1, &(Global_4456448.f_154367), bParam4);
					Var0 = { func_594(iParam1) };
					if (bParam4)
					{
						func_591(iParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_585(iParam0, func_588(uParam2), func_586(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						sVar6 = func_581(uParam2);
						if (!IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar6 = sParam6;
						}
						func_579(iParam0, sVar6, func_580(), -1);
					}
					else if (func_522())
					{
						uParam2->f_34 = Global_1574183;
						func_591(iParam0, sVar1, &Var0, 1, -1, Global_1574183, 1);
					}
					else if (bVar2)
					{
						iVar5 = func_574(iParam1);
						uParam2->f_34 = Global_1574183;
						func_591(iParam0, sVar1, "", 0, iVar5, Global_1574183, 1);
					}
					else
					{
						iVar5 = func_574(iParam1);
						func_591(iParam0, sVar1, &Var0, 1, iVar5, -1, 1);
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

int func_574(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_578())
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
			if (func_577(PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_576(PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_575(PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_226())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_575(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 4;
}

bool func_576(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 7;
}

bool func_577(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 2;
}

bool func_578()
{
	return Global_4456448.f_1 == 0;
}

void func_579(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_467(sParam1);
		}
		else
		{
			BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_467("");
		if (iParam3 != -1)
		{
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam3);
		}
		END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_580()
{
	switch (func_145(PLAYER_ID()))
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

char* func_581(var uParam0)
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
	switch (func_145(PLAYER_ID()))
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
			if (func_583())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_234(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_234(1))
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
			if (func_582(Global_1628955[PLAYER_ID() /*614*/].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_582(int iParam0)
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

bool func_583()
{
	return (func_584() && func_163(func_248()));
}

bool func_584()
{
	return Global_1590446[PLAYER_ID() /*871*/] == 148;
}

void func_585(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_467(sParam1);
		}
		else if (func_528(PLAYER_ID()) == 133)
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
		func_467("");
		if (iParam3 != -1)
		{
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam3);
		}
		END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_586(var uParam0)
{
	int iVar0;
	
	iVar0 = func_528(PLAYER_ID());
	if (func_625())
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
			switch (func_587())
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

int func_587()
{
	if (func_528(PLAYER_ID()) == 133)
	{
		return Global_2531497.f_4819;
	}
	return -1;
}

char* func_588(var uParam0)
{
	int iVar0;
	
	iVar0 = func_528(PLAYER_ID());
	if (func_625())
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
			if (func_590() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_590() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_587())
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
			if (func_589() == 1)
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

int func_589()
{
	return Global_2531497.f_4822;
}

int func_590()
{
	if (func_528(PLAYER_ID()) == 132)
	{
		return Global_2531497.f_4817;
	}
	return -1;
}

void func_591(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_531(sParam1);
		}
		else if (iParam5 != -1)
		{
			BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			ADD_TEXT_COMPONENT_INTEGER(iParam5);
			END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_467(sParam1);
		}
		if (func_618() && iParam6)
		{
			if (func_593())
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
			func_467(sParam2);
		}
		if (iParam4 != -1)
		{
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam4);
			if (func_592(PLAYER_ID()))
			{
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(166);
			}
			else if (func_81())
			{
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(220);
			}
		}
		END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_592(int iParam0)
{
	if (func_577(iParam0) || func_576(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_593()
{
	return Global_1574184;
}

struct<4> func_594(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_595(PLAYER_ID()) || func_575(PLAYER_ID()))
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
	if (func_522() && NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_40, 16);
	}
	return Var0;
}

bool func_595(int iParam0)
{
	return Global_2424073[iParam0 /*421*/].f_115 == 5;
}

char* func_596(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_522() || IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		uVar0 = func_597();
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

char* func_597()
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

void func_598()
{
	Global_42316 = 1;
}

bool func_599(bool bParam0, int iParam1, bool bParam2)
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

void func_600(int iParam0, var uParam1, bool bParam2)
{
	CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1574182 = 0;
	func_513();
	Global_1574181 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_24(&(uParam1->f_19)))
		{
			func_22(&(uParam1->f_19));
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

int func_601()
{
	if (func_616())
	{
		return 0;
	}
	if (func_615())
	{
		return 0;
	}
	if (!func_613())
	{
		return 0;
	}
	if (!func_611())
	{
		return 0;
	}
	if (func_610(8, -1))
	{
		return 0;
	}
	if (func_617() == 2)
	{
		return 0;
	}
	if (Global_2531497.f_4543)
	{
		return 0;
	}
	if (func_455())
	{
		return 0;
	}
	else if (!func_607(PLAYER_ID(), 1, 0) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_606(1) || func_604(1)) || Global_22211.f_124) || Global_22211)
	{
		return 0;
	}
	if (IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_603() && Global_1695601 == 2)
	{
		return 0;
	}
	if (func_111(PLAYER_ID()) && !func_603())
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
	if (func_235(0))
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
	if (func_602(PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_1366595 || Global_1366596) || Global_1366597)
	{
		return 0;
	}
	return 1;
}

bool func_602(int iParam0)
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309.f_4, 6);
}

bool func_603()
{
	return (IS_BIT_SET(Global_4456448.f_30, 12) && IS_BIT_SET(Global_1695602, 0));
}

int func_604(bool bParam0)
{
	if (_0xFC859E2374407556())
	{
		if (!IS_PED_INJURED(IS_PED_INJURED()))
		{
			if (func_605(PLAYER_PED_ID()))
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

int func_605(int iParam0)
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

bool func_606(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

int func_607(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_608(iParam0))
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

bool func_608(int iParam0)
{
	return func_609(iParam0);
}

bool func_609(int iParam0)
{
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_13.f_1, 0);
}

bool func_610(int iParam0, int iParam1)
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

int func_611()
{
	if (func_612() == 0)
	{
		return 1;
	}
	return 0;
}

int func_612()
{
	return Global_1312467.f_18;
}

int func_613()
{
	if (func_614())
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

bool func_614()
{
	return Global_1312439;
}

bool func_615()
{
	return Global_1590446[PLAYER_ID() /*871*/] == 5;
}

bool func_616()
{
	return GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

int func_617()
{
	return Global_1373500.f_68;
}

int func_618()
{
	if (Global_1574183 > 16)
	{
		return 1;
	}
	return 0;
}

float func_619()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_620(int iParam0)
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

int func_621()
{
	if (func_626())
	{
		return 1;
	}
	if (func_375(PLAYER_ID()))
	{
		return 0;
	}
	if (func_625())
	{
		return 1;
	}
	if (func_47(PLAYER_ID()))
	{
		switch (func_528(PLAYER_ID()))
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
				if (!func_436(PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_436(PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_436(PLAYER_ID()))
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

int func_622(int iParam0)
{
	if (iParam0 == 27)
	{
		if ((func_47(PLAYER_ID()) && !func_45(PLAYER_ID())) && !func_527(PLAYER_ID(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_144(PLAYER_ID(), 0) && func_45(PLAYER_ID()))
		{
			return 1;
		}
		if (func_38(PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_623(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!Global_1590319)
		{
			if (!func_1068(0) && !func_1068(func_624(iParam1)))
			{
				Global_1590319 = 1;
			}
		}
	}
	else if (Global_1590319)
	{
		Global_1590319 = 0;
	}
}

int func_624(int iParam0)
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

bool func_625()
{
	return Global_1590319;
}

int func_626()
{
	if (func_627(PLAYER_ID()))
	{
		return Global_1319097;
	}
	return 0;
}

int func_627(int iParam0)
{
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_376(iParam0, 0))
		{
			return NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
		}
	}
	return 0;
}

void func_628()
{
	int iVar0;
	vector3 vVar1;
	bool bVar2;
	bool bVar3;
	
	bVar2 = true;
	bVar3 = true;
	if (iLocal_1320 == 1 && !func_455())
	{
		func_691(&vLocal_595);
	}
	switch (iLocal_1320)
	{
		case 0:
			if (func_690())
			{
				iLocal_1320++;
			}
			break;
		
		case 1:
			iVar0 = GET_PLAYER_PED(Local_112.f_184.f_7);
			if (DOES_ENTITY_EXIST(iVar0) && !DOES_ENTITY_EXIST(iVar0, 0))
			{
				vVar1 = { GET_ENTITY_COORDS(iVar0, true) };
				vLocal_595.f_2 = { vVar1 };
			}
			else if (!func_19(vLocal_595.f_2))
			{
				vVar1 = { vLocal_595.f_2 };
			}
			vLocal_595.y = NET_TO_ENT(Local_112.f_184.f_2);
			if (DOES_ENTITY_EXIST(vLocal_595.y))
			{
				if (!IS_ENTITY_DEAD(vLocal_595.y, 0))
				{
					if (!func_682())
					{
						if (func_19(vLocal_1317))
						{
							if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()))
							{
								if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
								{
									vLocal_1317 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true) };
									fLocal_1318 = GET_ENTITY_HEADING(GET_ENTITY_HEADING());
								}
							}
						}
					}
					SET_ENTITY_VISIBLE_IN_CUTSCENE(vLocal_595.y);
					if (Global_2424073[PLAYER_ID() /*421*/].f_222 == 99)
					{
						if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 11))
						{
							SET_NIGHTVISION(false);
							if (!0xC2D2AD9EAAE265B8())
							{
								0xCD74233600C4EA6B(1);
							}
							_0x267C78C60E806B9A(vLocal_595.y, 1);
							ATTACH_ENTITY_TO_ENTITY(ATTACH_ENTITY_TO_ENTITY(), vLocal_595.y, ATTACH_ENTITY_TO_ENTITY(vLocal_595.y, "chassis"), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							SET_BIT(&(Local_113[SET_BIT() /*8*/].f_1), 11);
							SET_BIT(&(Global_2424073[SET_BIT() /*421*/].f_195), 2);
							SET_BIT(&(Global_1628955[SET_BIT() /*614*/].f_1), 14);
							func_681(PLAYER_ID(), 0);
							func_676();
						}
						if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 12))
						{
							func_667(PLAYER_ID(), 0, 8192, 0);
							SET_ENTITY_INVINCIBLE(SET_ENTITY_INVINCIBLE(), true);
							SET_BIT(&(Local_113[SET_BIT() /*8*/].f_1), 12);
						}
						func_658();
						func_656();
						if (func_682())
						{
							func_667(PLAYER_ID(), 1, 0, 0);
							iLocal_1320++;
						}
						else
						{
							func_639(&(Local_112.f_184), &vLocal_595, vLocal_595.y, vVar1, bVar3, bVar2);
							if (bVar2)
							{
								if (!IS_BIT_SET(iLocal_115, 18) && func_631(0, 1, 1, 0))
								{
									func_630("SCTV_HELI_HLP", 30000);
									if (Local_112.f_197 != 2)
									{
										func_629(1);
									}
									SET_BIT(&iLocal_115, 18);
								}
							}
						}
					}
				}
			}
			break;
		
		case 2:
			break;
	}
}

void func_629(int iParam0)
{
	0xB9C362BABECDDC7A(3, 21, 200, 0, 0);
	if (iParam0 && !func_568())
	{
		PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);
	}
}

void func_630(char* sParam0, int iParam1)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 0, false, iParam1);
}

int func_631(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_638())
	{
		return 0;
	}
	if (!IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_616())
	{
		return 0;
	}
	if (func_637())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_607(PLAYER_ID(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_636(PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_635())
	{
		return 0;
	}
	if (IS_PED_INJURED(IS_PED_INJURED()))
	{
		return 0;
	}
	if (IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!IS_PLAYER_CONTROL_ON(IS_PLAYER_CONTROL_ON()))
		{
			return 0;
		}
	}
	if (Global_1574181)
	{
		return 0;
	}
	if (func_634())
	{
		return 0;
	}
	if (func_633())
	{
		return 0;
	}
	if (func_455())
	{
		return 0;
	}
	if (Global_73784)
	{
		return 0;
	}
	if (Global_2541150)
	{
		return 0;
	}
	if (func_632(PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_632(int iParam0)
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

bool func_633()
{
	return Global_2448961.f_591;
}

bool func_634()
{
	return Global_2448961.f_744;
}

bool func_635()
{
	return Global_2437549.f_3032.f_578;
}

int func_636(int iParam0)
{
	if (Global_2424073[iParam0 /*421*/].f_208 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_637()
{
	return IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_39.f_18, 0);
}

int func_638()
{
	if (Global_20805 != 0 || IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_639(var uParam0, var uParam1, int iParam2, vector3 vParam3, bool bParam4, bool bParam5)
{
	switch (func_655(uParam1))
	{
		case 0:
			if (func_654() || bParam4)
			{
				func_653(uParam1, 1);
			}
			break;
		
		case 1:
			if (!DOES_CAM_EXIST(*uParam1))
			{
				*uParam1 = CREATE_CAM("default_scripted_camera", false);
			}
			else
			{
				_0x23B59D8912F94246();
				ATTACH_CAM_TO_ENTITY(*uParam1, iParam2, 0f, 2.75f, -1.25f, 1);
				SET_CAM_ACTIVE(*uParam1, true);
				RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				func_8(1);
				func_653(uParam1, 2);
			}
			break;
		
		case 2:
			if (DOES_CAM_EXIST(*uParam1))
			{
				if (!IS_CAM_ACTIVE(*uParam1))
				{
					ATTACH_CAM_TO_ENTITY(*uParam1, iParam2, 0f, 2.75f, -1.25f, 1);
					SET_CAM_ACTIVE(*uParam1, true);
					RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				}
				else
				{
					POINT_CAM_AT_COORD(*uParam1, vParam3);
				}
				if (bParam5)
				{
					func_640(uParam1);
				}
				if (func_654() && !bParam4)
				{
					func_496(uParam0, 1, 1, 1);
					func_653(uParam1, 0);
				}
			}
			else
			{
				func_653(uParam1, 0);
			}
			break;
		
		default:
			break;
	}
}

void func_640(var uParam0)
{
	struct<9> Var0;
	
	Var0 = { func_652() };
	if (func_650(0, -1, 0))
	{
		switch (uParam0->f_694)
		{
			case 0:
				func_648(&(uParam0->f_7));
				func_647(2, 202, "HUD_QUIT", &(uParam0->f_7), 1, 359);
				uParam0->f_694++;
				break;
			
			case 1:
				func_641(&(uParam0->f_6), &Var0, &(uParam0->f_7), 0);
				break;
			}
	}
}

void func_641(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam3 == 1 || _0x6CD79468A1E595C6(2))
	{
		*uParam2 = 0;
		if (HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			if (IS_PC_VERSION())
			{
				BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(false);
				END_SCALEFORM_MOVIE_METHOD();
			}
			BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
			END_SCALEFORM_MOVIE_METHOD();
		}
		func_646(uParam2);
	}
	if (Global_1315712 < 2)
	{
		func_645(1);
	}
	if (*uParam2 == 0)
	{
		if (!HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			*uParam0 = 0x67D02A194A2FC2BD("instructional_buttons");
		}
		if (HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			CALL_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
			if (IS_PC_VERSION())
			{
				BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(true);
				END_SCALEFORM_MOVIE_METHOD();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_680)
			{
				if (IS_BIT_SET(uParam2->f_676, iVar0))
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
					if (!IS_BIT_SET(uParam2->f_677, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0 /*56*/].f_53;
						iVar2 = uParam2->f_1[iVar0 /*56*/].f_54;
						iVar3 = uParam2->f_1[iVar0 /*56*/].f_55;
						func_644(GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar1, iVar2, true));
						if (iVar3 < 359)
						{
							func_644(GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[iVar0 /*56*/].f_53;
						iVar5 = uParam2->f_1[iVar0 /*56*/].f_54;
						func_644(_0x80C2FD58D720C801(iVar4, iVar5, true));
					}
					if (IS_BIT_SET(uParam2->f_674, iVar0))
					{
						BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (IS_BIT_SET(uParam2->f_675, iVar0))
					{
						BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[iVar0 /*56*/].f_32));
						ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[iVar0 /*56*/].f_37));
						END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						func_467(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (IS_PC_VERSION())
					{
						if (IS_BIT_SET(uParam2->f_678, iVar0))
						{
							_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(true);
							_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam2->f_1[iVar0 /*56*/].f_54);
						}
						else
						{
							_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(false);
							_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(359);
						}
					}
					END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
					_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
					func_644(&(uParam2->f_1[iVar0 /*56*/]));
					if (!IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1[iVar0 /*56*/].f_16)))
					{
						func_644(&(uParam2->f_1[iVar0 /*56*/].f_16));
					}
					if (IS_BIT_SET(uParam2->f_674, iVar0))
					{
						BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (IS_BIT_SET(uParam2->f_675, iVar0))
					{
						BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[iVar0 /*56*/].f_32));
						ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[iVar0 /*56*/].f_37));
						END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						func_467(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (IS_PC_VERSION())
					{
						_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(false);
						_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(359);
					}
					END_SCALEFORM_MOVIE_METHOD();
				}
				iVar0++;
			}
			BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(uParam2->f_686);
			END_SCALEFORM_MOVIE_METHOD();
			BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
			END_SCALEFORM_MOVIE_METHOD();
			*uParam2 = 1;
		}
	}
	uParam2->f_682 = 0.05f;
	uParam2->f_683 = 0.045f;
	uParam2->f_684 = 0f;
	uParam2->f_685 = 0f;
	if (*uParam2 == 1)
	{
		func_643(*uParam0, uParam1);
	}
	func_642();
}

void func_642()
{
	HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HIDE_HUD_COMPONENT_THIS_FRAME(9);
}

void func_643(int iParam0, var uParam1)
{
	DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_644(char* sParam0)
{
	_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam0);
}

void func_645(int iParam0)
{
	Global_1315712 = iParam0;
}

void func_646(var uParam0)
{
	uParam0->f_679 = 0;
}

void func_647(int iParam0, int iParam1, char* sParam2, var uParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (uParam3->f_680 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_680;
	StringCopy(&(uParam3->f_1[iVar0 /*56*/].f_32), sParam2, 16);
	SET_BIT(&(uParam3->f_676), iVar0);
	uParam3->f_1[iVar0 /*56*/].f_53 = iParam0;
	uParam3->f_1[iVar0 /*56*/].f_54 = iParam1;
	uParam3->f_1[iVar0 /*56*/].f_55 = iParam5;
	if (bParam4)
	{
		SET_BIT(&(uParam3->f_678), iVar0);
		if (iParam5 < 359)
		{
		}
	}
	uParam3->f_680++;
}

void func_648(var uParam0)
{
	func_649(uParam0);
	uParam0->f_679 = 1;
}

void func_649(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*56*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*56*/].f_36 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_37), "", 64);
		uParam0->f_1[iVar0 /*56*/].f_53 = 2;
		uParam0->f_1[iVar0 /*56*/].f_54 = 359;
		uParam0->f_1[iVar0 /*56*/].f_55 = 359;
		iVar0++;
	}
	uParam0->f_674 = 0;
	uParam0->f_675 = 0;
	uParam0->f_676 = 0;
	uParam0->f_678 = 0;
	uParam0->f_677 = 0;
	uParam0->f_679 = 0;
	uParam0->f_680 = 0;
	uParam0->f_682 = 0f;
	uParam0->f_683 = 0f;
	uParam0->f_684 = 0f;
	uParam0->f_685 = 0f;
	uParam0->f_686 = 1f;
}

bool func_650(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_499(&iVar0, 1, iParam1))
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
	bVar2 = func_651(&(Global_22350.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_651(var uParam0)
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

struct<9> func_652()
{
	struct<9> Var0;
	
	Var0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

void func_653(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

int func_654()
{
	if ((!_IS_INPUT_DISABLED(2) && _IS_INPUT_DISABLED(2, 231)) || (_IS_INPUT_DISABLED(2) && _IS_INPUT_DISABLED(2, 44)))
	{
		return 1;
	}
	return 0;
}

int func_655(var uParam0)
{
	return uParam0->f_5;
}

void func_656()
{
	_0xEB2D525B57F42B40();
	func_657();
}

void func_657()
{
	Global_22211.f_134 = 1;
}

void func_658()
{
	func_666();
	func_659(0);
	HIDE_HUD_AND_RADAR_THIS_FRAME();
	HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
}

void func_659(int iParam0)
{
	if (func_665())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_664(0))
		{
			func_660(iParam0);
		}
		SET_BIT(&Global_7357, 2);
	}
}

void func_660(int iParam0)
{
	if (func_665())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_663())
		{
			func_662(1, 1);
		}
		else
		{
			func_662(0, 0);
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
	if (!func_661())
	{
		Global_19486.f_1 = 3;
	}
}

int func_661()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_662(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_664(0))
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

bool func_663()
{
	return IS_BIT_SET(Global_1687880, 5);
}

int func_664(int iParam0)
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

bool func_665()
{
	return IS_BIT_SET(Global_1687880, 19);
}

void func_666()
{
	Global_2437549.f_1155.f_10 = 1;
}

void func_667(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	if (func_675())
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
		if (!func_611())
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
				else if (bVar13 || (!func_376(PLAYER_ID(), 0) && !func_112()))
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
				func_672(0, 0, 0);
				if (bVar24)
				{
					CLEAR_FOCUS();
				}
				if (!func_671(iVar26) && !IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar26))
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
					func_670();
					func_669();
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
				if (!func_671(iVar26) && !IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar26))
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
					if (func_668(Global_4456448.f_190930))
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

bool func_668(int iParam0)
{
	return iParam0 == 17;
}

void func_669()
{
	vector3 vVar0;
	
	Global_2437549.f_1232 = 0;
	Global_2437549.f_1233 = 0;
	Global_2437549.f_1234 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2437549.f_1239 = -1;
	Global_2437549.f_1240 = 0;
	Global_2405071.f_2681 = { vVar0 };
}

void func_670()
{
	Global_2405071.f_692 = 0;
	Global_2405071.f_2724 = 0;
	Global_2405071.f_510 = 0;
	Global_2405071.f_598 = 0;
	Global_2424073[PLAYER_ID() /*421*/].f_207 = 0;
	Global_2405071.f_2679 = 0;
}

int func_671(int iParam0)
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

void func_672(bool bParam0, int iParam1, int iParam2)
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
				func_674();
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
		if (func_376(PLAYER_ID(), 0))
		{
			NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1, 1);
		}
		else
		{
			_GET_DATE_AND_TIME_FROM_UNIX_EPOCH(bParam0, iParam1);
		}
		KEY_HUD_COLOUR(bParam0, iParam1);
		func_673(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_673(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STAT_SET_BOOL(iVar0, bParam1, 1);
	}
}

void func_674()
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

int func_675()
{
	if (Global_1590446[PLAYER_ID() /*871*/].f_35 && !Global_2449755.f_2846.f_214 == -1)
	{
		return 1;
	}
	return 0;
}

void func_676()
{
	if (func_680() || func_679())
	{
		func_678();
		func_677();
	}
}

void func_677()
{
	if ((!func_455() && !func_633()) && Global_2449754)
	{
		Global_4456448.f_154360 = 0;
	}
}

void func_678()
{
	Global_2448961.f_656 = 1;
}

var func_679()
{
	return Global_2448961.f_635;
}

bool func_680()
{
	return IS_BIT_SET(Global_2448961.f_2, 11);
}

void func_681(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (DECOR_EXIST_ON(DECOR_EXIST_ON(iParam0), "MPBitset"))
	{
		iVar0 = DECOR_GET_INT(DECOR_GET_INT(iParam0), "MPBitset");
	}
	SET_BIT(&iVar0, iParam1);
	DECOR_SET_INT(DECOR_SET_INT(iParam0), "MPBitset", iVar0);
}

int func_682()
{
	if (func_689(&vLocal_595))
	{
		return 1;
	}
	if (IS_BIT_SET(Local_112.f_1, 3))
	{
		return 1;
	}
	if (IS_BIT_SET(Local_112.f_1, 5))
	{
		return 1;
	}
	if (func_683())
	{
		return 1;
	}
	if (func_1010(0))
	{
		return 1;
	}
	if (func_376(PLAYER_ID(), 0))
	{
		return 1;
	}
	if (Local_112.f_184.f_7 == func_398())
	{
		return 1;
	}
	return 0;
}

int func_683()
{
	if (IS_BIT_SET(Global_2531497.f_393.f_5, 0))
	{
		return 1;
	}
	if (func_685() && Global_1590446[PLAYER_ID() /*871*/].f_98 != 3)
	{
		return 1;
	}
	if (func_684() && Global_1590446[PLAYER_ID() /*871*/].f_98 != 3)
	{
		return 1;
	}
	if (Global_2394768)
	{
		return 1;
	}
	if (Global_1574647.f_20)
	{
		return 1;
	}
	return 0;
}

bool func_684()
{
	return IS_BIT_SET(Global_2448961, 5);
}

int func_685()
{
	if (((func_688() || func_488()) || func_687()) || func_686())
	{
		return 1;
	}
	return 0;
}

bool func_686()
{
	return IS_BIT_SET(Global_2448961, 1);
}

bool func_687()
{
	return IS_BIT_SET(Global_2448961, 2);
}

bool func_688()
{
	return Global_2448961.f_598;
}

bool func_689(var uParam0)
{
	return IS_BIT_SET(uParam0->f_696, 2);
}

int func_690()
{
	if (!func_6(&(Local_112.f_184)))
	{
		return 0;
	}
	if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 0))
	{
		return 0;
	}
	if (Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_7 < 3)
	{
		return 0;
	}
	if (!func_1276(PLAYER_ID(), 1, 1))
	{
		return 0;
	}
	if (IS_BIT_SET(Local_112.f_1, 3))
	{
		return 0;
	}
	if (IS_BIT_SET(Local_112.f_1, 5))
	{
		return 0;
	}
	if (IS_BIT_SET(Local_112.f_1, 12))
	{
		return 0;
	}
	if (Local_112.f_184.f_7 == func_398())
	{
		return 0;
	}
	if (!func_1276(Local_112.f_184.f_7, 1, 1))
	{
		return 0;
	}
	if (Local_112.f_184.f_7 == PLAYER_ID())
	{
		return 0;
	}
	if (!IS_BIT_SET(iLocal_115, 21))
	{
		return 0;
	}
	if (func_455())
	{
		return 0;
	}
	if (IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(IS_ENTITY_ATTACHED_TO_ANY_VEHICLE()))
	{
		return 0;
	}
	if (Local_112.f_165 < 2)
	{
		return 0;
	}
	return 1;
}

void func_691(var uParam0)
{
	if (!IS_BIT_SET(uParam0->f_696, 2))
	{
		switch (uParam0->f_695)
		{
			case 0:
				if (!IS_PAUSE_MENU_ACTIVE())
				{
					if (func_694(uParam0))
					{
						func_693(uParam0);
						_set_warning_message_2("SPEC_LEAVE", "SPEC_SURE", 36, 0, 0, -1, 0, 0, 1, 0);
						if (IS_DISABLED_CONTROL_JUST_PRESSED(2, 201))
						{
							PLAY_SOUND_FRONTEND(-1, "EXIT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							uParam0->f_695++;
						}
					}
					else
					{
						func_692(uParam0);
					}
				}
				break;
			
			case 1:
				SET_BIT(&(uParam0->f_696), 2);
				break;
			}
	}
}

void func_692(var uParam0)
{
	if (_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (IS_DISABLED_CONTROL_JUST_PRESSED(2, 202))
	{
		if (!IS_BIT_SET(uParam0->f_696, 0))
		{
			SET_BIT(&(uParam0->f_696), 0);
		}
		if (!IS_BIT_SET(uParam0->f_696, 1))
		{
			PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			SET_BIT(&(uParam0->f_696), 1);
		}
	}
}

void func_693(var uParam0)
{
	if (_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (IS_DISABLED_CONTROL_JUST_PRESSED(2, 202))
	{
		if (IS_BIT_SET(uParam0->f_696, 0))
		{
			PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			CLEAR_BIT(&(uParam0->f_696), 0);
		}
	}
}

bool func_694(var uParam0)
{
	return IS_BIT_SET(uParam0->f_696, 0);
}

void func_695()
{
	vector3 vVar0;
	
	if (Local_112.f_197 != 2)
	{
		return;
	}
	if (Local_112.f_21 > 0)
	{
		return;
	}
	vVar0 = { vLocal_152[0 /*3*/] };
	if (!func_31(vVar0, 0f, 0f, 0f, 0))
	{
		func_696(200, vVar0, &uLocal_1324, 1140457472, 1144750080, 0);
	}
}

void func_696(int iParam0, vector3 vParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	
	if ((((func_47(PLAYER_ID()) && !func_46(PLAYER_ID())) && !PLAYER_ID(Global_1628955[PLAYER_ID() /*614*/].f_1, 8)) && (func_43(PLAYER_ID()) || func_42(PLAYER_ID()))) || func_19(vParam1))
	{
		return;
	}
	Global_1674852 = { vParam1 };
	fVar0 = vdist(GET_ENTITY_COORDS(GET_ENTITY_COORDS(), false), vParam1);
	func_735(iParam0, fVar0);
	if (IS_PAUSE_MENU_ACTIVE() && IS_PAUSE_MENU_ACTIVE() == 15)
	{
		if (func_41(PLAYER_ID()) || func_734(PLAYER_ID()))
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
	if (fVar0 < fParam3)
	{
		if (!(func_372(PLAYER_ID(), 21) || func_372(PLAYER_ID(), 25)))
		{
			func_733(vParam1, 1, 0);
		}
		if (!*uParam2 && func_1276(PLAYER_ID(), 1, 1))
		{
			*uParam2 = 1;
			if (func_732(iParam0))
			{
				SET_WANTED_LEVEL_MULTIPLIER(func_731(iParam0));
				if (func_730(iParam0, -1))
				{
					SET_MAX_WANTED_LEVEL(0);
					if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) > 0)
					{
						SET_PLAYER_WANTED_LEVEL(SET_PLAYER_WANTED_LEVEL(), 0, 1);
						SET_PLAYER_WANTED_LEVEL_NOW(SET_PLAYER_WANTED_LEVEL_NOW(), 1);
					}
					SET_BIT(&(Global_1674852.f_3), 0);
				}
			}
			if (func_729(iParam0))
			{
				fVar1 = func_728(iParam0);
				if (fVar1 != 1f)
				{
					func_724(fVar1);
					SET_BIT(&(Global_1674852.f_3), 1);
				}
			}
			if (!Global_2391045)
			{
				if (func_723(iParam0) && func_41(PLAYER_ID()))
				{
					func_721(1);
					func_720(2);
				}
			}
			func_369(19);
		}
	}
	else
	{
		if (fVar0 > fParam4)
		{
			if (func_40(PLAYER_ID(), 19))
			{
				func_371(19);
			}
		}
		if (*uParam2 && func_1276(PLAYER_ID(), 1, 1))
		{
			*uParam2 = 0;
			if (func_732(iParam0))
			{
				if (IS_BIT_SET(Global_1674852.f_3, 0))
				{
					SET_WANTED_LEVEL_MULTIPLIER(1f);
					SET_MAX_WANTED_LEVEL(5);
					CLEAR_BIT(&(Global_1674852.f_3), 0);
				}
			}
			if (func_729(iParam0))
			{
				func_719();
				CLEAR_BIT(&(Global_1674852.f_3), 1);
			}
			if (iParam5 && !func_47(PLAYER_ID()))
			{
				if (func_145(PLAYER_ID()) != 152)
				{
					func_698();
				}
			}
			if (func_235(2))
			{
				func_721(0);
				func_697(2);
			}
		}
	}
}

void func_697(int iParam0)
{
	CLEAR_BIT(&(Global_2531497.f_4898.f_43), iParam0);
}

void func_698()
{
	0x213AEB2B90CBA7AC(&(Global_2405071.f_24), &Global_2409324, 2);
	0x213AEB2B90CBA7AC(&(Global_2405071.f_26), &Global_2409326, 19);
	func_717();
	func_701(1, 1, 0);
	func_699();
}

void func_699()
{
	func_700(0, 0);
}

void func_700(int iParam0, int iParam1)
{
	Global_2405071.f_22 = iParam0;
	Global_2405071.f_23 = iParam1;
}

void func_701(bool bParam0, bool bParam1, bool bParam2)
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
		func_716();
	}
	if (!bParam2)
	{
		func_704(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_703(0);
	func_702();
}

void func_702()
{
	struct<6> Var0;
	
	if (Global_2405071.f_485.f_1 == GET_ID_OF_THIS_THREAD())
	{
		Global_2405071.f_485 = { Var0 };
	}
}

void func_703(bool bParam0)
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

void func_704(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_715())
		{
			func_714();
		}
		Global_2405071.f_704.f_518 = GET_ID_OF_THIS_THREAD();
		Global_2405071.f_704.f_504 = iParam1;
		Global_2405071.f_704.f_505 = iParam2;
		Global_2405071.f_704.f_506 = iParam10;
		func_712();
		func_708(8, 0, 0, 0, 0);
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
		func_705();
	}
}

void func_705()
{
	if (func_715() && !func_707())
	{
		func_714();
	}
	if (func_707())
	{
		func_706();
	}
	else
	{
		func_712();
		func_708(0, 0, 0, 0, 0);
		Global_2405071.f_1743 = 0;
		Global_2405071.f_1742 = 0;
	}
}

void func_706()
{
	0x213AEB2B90CBA7AC(&(Global_2405071.f_704), &(Global_2405071.f_1223), 519);
	Global_2405071.f_485 = { Global_2405071.f_491 };
	if (GET_ID_OF_THIS_THREAD() == Global_2405071.f_704.f_518)
	{
		Global_2405071.f_1742 = 0;
	}
}

int func_707()
{
	if ((Global_2405071.f_1742 && !GET_ID_OF_THIS_THREAD() == Global_2405071.f_1223.f_518) && GET_ID_OF_THIS_THREAD(Global_2405071.f_1223.f_518))
	{
		return 1;
	}
	return 0;
}

void func_708(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2437549.f_1893.f_690.f_16 != func_398())
	{
		if (IS_BIT_SET(Global_2424073[Global_2437549.f_1893.f_690.f_16 /*421*/].f_402, 0) && func_709())
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

int func_709()
{
	if (((((func_145(PLAYER_ID()) == 229 || func_145(PLAYER_ID()) == 191) || func_711()) || func_710()) || func_632(PLAYER_ID())) || Global_2508349.f_226 == 1)
	{
		return 0;
	}
	return 1;
}

bool func_710()
{
	return Global_1574402;
}

int func_711()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_712()
{
	if (func_715() && !func_707())
	{
		func_714();
	}
	func_713();
	Global_2405071.f_704 = 0;
}

void func_713()
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

void func_714()
{
	if (func_707())
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

int func_715()
{
	if ((Global_2405071.f_1743 && !GET_ID_OF_THIS_THREAD() == Global_2405071.f_704.f_518) && GET_ID_OF_THIS_THREAD(Global_2405071.f_704.f_518))
	{
		return 1;
	}
	return 0;
}

void func_716()
{
	0x213AEB2B90CBA7AC(&(Global_2405071.f_363), &Global_2409663, 121);
}

void func_717()
{
	func_718();
	Global_2405071.f_2252 = 0;
}

void func_718()
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

void func_719()
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

void func_720(int iParam0)
{
	SET_BIT(&(Global_2531497.f_4898.f_43), iParam0);
}

void func_721(int iParam0)
{
	if (func_722() && iParam0)
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

int func_722()
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

int func_723(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		
		default:
	}
	return 0;
}

void func_724(float fParam0)
{
	float fVar0;
	
	if (GET_HASH_KEY(GET_HASH_KEY()) == func_725())
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

int func_725()
{
	switch (func_727())
	{
		case 0:
			return func_726();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_726()
{
	switch (Global_2461343)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_727()
{
	return Global_30736;
}

float func_728(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
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
		case 243:
		case 158:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_729(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
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
			return 1;
		
		default:
	}
	return 0;
}

int func_730(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
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
		case 227:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_731(int iParam0)
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

int func_732(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
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
			return 1;
		
		default:
	}
	return 0;
}

void func_733(vector3 vParam0, int iParam1, int iParam2)
{
	Global_2405071.f_45.f_49 = { vParam0 };
	Global_2405071.f_45.f_52 = iParam1;
	Global_2405071.f_45.f_53 = iParam2;
}

int func_734(int iParam0)
{
	if (func_132(iParam0))
	{
		if (func_41(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_735(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_738(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_736();
	}
}

void func_736()
{
	if (!func_737(PLAYER_ID()))
	{
		func_369(25);
	}
}

bool func_737(int iParam0)
{
	return func_40(iParam0, 25);
}

int func_738(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_12522;
		
		case 142:
			return Global_262145.f_12510;
		
		case 157:
			return Global_262145.f_12477;
		
		case 159:
			return Global_262145.f_12460;
		
		case 162:
			return Global_262145.f_12571;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

void func_739()
{
	int iVar0;
	
	if (!IS_BIT_SET(Local_112.f_1, 3))
	{
		if (Local_112.f_197 == 2)
		{
			if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 0))
			{
				if (Local_112.f_21 >= 2)
				{
					if (!IS_BIT_SET(iLocal_116, 3))
					{
						if (!IS_PED_INJURED(IS_PED_INJURED()))
						{
							if (IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE()))
							{
								iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
								iLocal_592 = iVar0;
								SET_ENTITY_PROOFS(iVar0, false, true, true, false, false, false, 0, false);
								SET_BIT(&iLocal_116, 3);
							}
						}
					}
					else if (IS_PED_INJURED(IS_PED_INJURED()))
					{
						if (DOES_ENTITY_EXIST(iLocal_592))
						{
							if (IS_VEHICLE_DRIVEABLE(iLocal_592, 0))
							{
								SET_ENTITY_PROOFS(iLocal_592, false, false, false, false, false, false, 0, false);
								CLEAR_BIT(&iLocal_116, 3);
							}
						}
					}
					else if (IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE()))
					{
						iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
						if (iVar0 != iLocal_592)
						{
							if (DOES_ENTITY_EXIST(iLocal_592))
							{
								if (IS_VEHICLE_DRIVEABLE(iLocal_592, 0))
								{
									SET_ENTITY_PROOFS(iLocal_592, false, false, false, false, false, false, 0, false);
									CLEAR_BIT(&iLocal_116, 3);
								}
							}
						}
					}
				}
			}
		}
	}
	else if (IS_BIT_SET(iLocal_116, 3))
	{
		if (DOES_ENTITY_EXIST(iLocal_592))
		{
			if (IS_VEHICLE_DRIVEABLE(iLocal_592, 0))
			{
				SET_ENTITY_PROOFS(iLocal_592, false, false, false, false, false, false, 0, false);
				CLEAR_BIT(&iLocal_116, 3);
			}
		}
	}
}

void func_740()
{
	if (Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_7 == 0 || Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_7 == 2)
	{
		if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 0) || IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 6))
		{
			if (!func_743())
			{
				func_742();
			}
		}
	}
	else if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 0) || IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 6))
	{
		if (func_743())
		{
			func_741();
		}
	}
}

void func_741()
{
	CLEAR_BIT(&(Global_1674852.f_3), 5);
}

void func_742()
{
	SET_BIT(&(Global_1674852.f_3), 5);
}

bool func_743()
{
	return IS_BIT_SET(Global_1674852.f_3, 5);
}

void func_744()
{
	struct<4> Var0;
	char* sVar1;
	int iVar2;
	struct<4> Var3;
	struct<4> Var4;
	struct<4> Var5;
	struct<4> Var6;
	struct<4> Var7;
	struct<4> Var8;
	
	if (func_376(PLAYER_ID(), 0))
	{
		return;
	}
	switch (Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_7)
	{
		case 0:
			if (Local_112.f_197 == 2)
			{
				if (!IS_BIT_SET(iLocal_115, 29))
				{
					if (func_908())
					{
						func_886(200, 1, Local_112.f_197, 0);
					}
					else
					{
						func_886(200, 0, Local_112.f_197, 0);
					}
					SET_BIT(&iLocal_115, 29);
				}
			}
			if (!func_1010(1))
			{
				if (IS_BIT_SET(iLocal_114, 31))
				{
					func_1008(func_1009(), 1);
					func_1003();
					CLEAR_BIT(&iLocal_114, 31);
				}
				if (Local_112.f_21 == 0)
				{
					if (!IS_BIT_SET(iLocal_114, 0))
					{
						if (func_631(0, 1, 1, 1))
						{
							if (func_885())
							{
								sVar1 = func_884();
								if (Local_112.f_197 == 2)
								{
									if (func_885())
									{
										func_883(sVar1, "CAG_BLIPS", iLocal_1310, 30000);
									}
								}
								else
								{
									func_630(sVar1, 30000);
									func_629(0);
								}
								SET_BIT(&iLocal_114, 0);
								PLAY_SOUND_FRONTEND(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", false);
							}
						}
					}
				}
				if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 0))
				{
					if (func_882(1))
					{
						if (!IS_BIT_SET(Global_1574647.f_1, 8))
						{
							func_881();
						}
						if (IS_BIT_SET(iLocal_115, 3))
						{
							Var0 = { func_880() };
							if (func_501(&Var0))
							{
								if (func_23(&uLocal_1303, 3000, 0))
								{
									CLEAR_BIT(&iLocal_115, 3);
									func_22(&uLocal_1303);
									CLEAR_HELP(1);
								}
							}
						}
						if (iLocal_589 < func_391())
						{
							if (!func_436(PLAYER_ID()))
							{
								func_879(1);
							}
							if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 8))
							{
								SET_CURRENT_PED_WEAPON(SET_CURRENT_PED_WEAPON(), joaat("weapon_unarmed"), false);
								if (!func_44())
								{
									if (!IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE()))
									{
										NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
										SET_BIT(&(Local_113[SET_BIT() /*8*/].f_1), 8);
										SET_PED_CAN_BE_DRAGGED_OUT(SET_PED_CAN_BE_DRAGGED_OUT(), 0);
										SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 422, true);
									}
									else if (func_877(GET_ENTITY_MODEL(GET_ENTITY_MODEL(GET_ENTITY_MODEL(), 0))))
									{
										if (func_876(GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0)))
										{
											NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
											SET_PED_CAN_BE_DRAGGED_OUT(SET_PED_CAN_BE_DRAGGED_OUT(), 0);
											SET_BIT(&(Local_113[SET_BIT() /*8*/].f_1), 8);
											SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 422, true);
										}
									}
								}
							}
							else if (func_44())
							{
								CLEAR_BIT(&(Local_113[CLEAR_BIT() /*8*/].f_1), 8);
							}
							if (!IS_BIT_SET(iLocal_114, 18))
							{
								SET_BIT(&iLocal_114, 18);
							}
							if (IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE()))
							{
								if (!func_44())
								{
									if (func_877(GET_ENTITY_MODEL(GET_ENTITY_MODEL(GET_ENTITY_MODEL(), 0))))
									{
										if (IS_BIT_SET(iLocal_114, 24))
										{
											CLEAR_BIT(&iLocal_114, 24);
										}
										if (IS_BIT_SET(iLocal_114, 23))
										{
											CLEAR_BIT(&iLocal_114, 23);
										}
										iVar2 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
										if (IS_VEHICLE_DRIVEABLE(iVar2, 0))
										{
											SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 398, true);
											if (GET_PED_IN_VEHICLE_SEAT(iVar2, -1, 0) == GET_PED_IN_VEHICLE_SEAT())
											{
												if (!IS_PED_INJURED(IS_PED_INJURED()))
												{
													if (IS_PED_ON_ANY_BIKE(IS_PED_ON_ANY_BIKE()))
													{
														if (CAN_KNOCK_PED_OFF_VEHICLE(CAN_KNOCK_PED_OFF_VEHICLE()))
														{
															SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(), 1);
														}
													}
													else if (!CAN_KNOCK_PED_OFF_VEHICLE(CAN_KNOCK_PED_OFF_VEHICLE()))
													{
														SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(), 0);
													}
												}
												if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 13))
												{
													SET_BIT(&(Local_113[SET_BIT() /*8*/].f_1), 13);
												}
												if (IS_BIT_SET(Local_112.f_35, IS_BIT_SET()))
												{
													if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 6))
													{
														CLEAR_BIT(&(Local_113[CLEAR_BIT() /*8*/].f_1), 6);
													}
													SET_BIT(&(Local_113[SET_BIT() /*8*/].f_1), 0);
													iLocal_591 = iVar2;
													if (Local_1296.f_11 == 0)
													{
														Local_1296.f_11 = 0xF12E6CD06C73D69E();
													}
													sVar1 = func_875();
													if (func_501(sVar1))
													{
														CLEAR_HELP(1);
													}
												}
											}
											else
											{
												if (!IS_BIT_SET(iLocal_114, 11))
												{
													if (func_631(0, 1, 1, 1))
													{
														if (func_885())
														{
															Var3 = { func_874() };
															if (func_885())
															{
																func_630(&Var3, 30000);
															}
															if (Local_112.f_197 != 2)
															{
																func_629(1);
															}
															SET_BIT(&iLocal_114, 11);
														}
													}
												}
												if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 6))
												{
													SET_BIT(&(Local_113[SET_BIT() /*8*/].f_1), 6);
												}
											}
										}
									}
									else
									{
										if (!IS_BIT_SET(iLocal_114, 24))
										{
											if (func_631(0, 1, 1, 1))
											{
												if (func_885())
												{
													sVar1 = func_873();
													if (func_885())
													{
														func_630(sVar1, 30000);
													}
													if (Local_112.f_197 != 2)
													{
														func_629(1);
													}
													SET_BIT(&iLocal_114, 24);
												}
											}
										}
										if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 8))
										{
											func_872(1);
											CLEAR_BIT(&(Local_113[CLEAR_BIT() /*8*/].f_1), 8);
											SET_PED_CAN_BE_DRAGGED_OUT(SET_PED_CAN_BE_DRAGGED_OUT(), 1);
										}
									}
								}
								else if (!IS_BIT_SET(iLocal_114, 23))
								{
									if (func_631(0, 1, 1, 1))
									{
										SET_BIT(&iLocal_114, 23);
										if (func_885())
										{
											func_630("PEN_PASSMD", 30000);
										}
										if (Local_112.f_197 != 2)
										{
											func_629(1);
										}
									}
								}
							}
							else
							{
								if (!IS_BIT_SET(iLocal_114, 1))
								{
									if (IS_BIT_SET(iLocal_114, 0))
									{
										if (func_631(0, 1, 1, 1))
										{
											if (func_885())
											{
												sVar1 = func_875();
												if (func_885())
												{
													func_630(sVar1, 30000);
												}
												if (Local_112.f_197 != 2)
												{
													func_629(1);
												}
												SET_BIT(&iLocal_114, 1);
											}
										}
									}
								}
								if (IS_VEHICLE_DRIVEABLE(iLocal_591, 0))
								{
								}
								if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 6))
								{
									CLEAR_BIT(&(Local_113[CLEAR_BIT() /*8*/].f_1), 6);
								}
							}
							func_871();
						}
					}
					else if (!IS_PED_INJURED(IS_PED_INJURED()))
					{
						if (IS_BIT_SET(Global_1574647.f_1, 8))
						{
							func_869();
						}
						if (IS_BIT_SET(iLocal_114, 24))
						{
							CLEAR_BIT(&iLocal_114, 24);
						}
						if (IS_BIT_SET(iLocal_114, 18))
						{
							CLEAR_BIT(&iLocal_114, 18);
						}
						if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 8))
						{
							func_872(1);
							SET_PED_CAN_BE_DRAGGED_OUT(SET_PED_CAN_BE_DRAGGED_OUT(), 1);
							CLEAR_BIT(&(Local_113[CLEAR_BIT() /*8*/].f_1), 8);
							SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 422, false);
						}
						if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 6))
						{
							CLEAR_BIT(&(Local_113[CLEAR_BIT() /*8*/].f_1), 6);
						}
						if (!IS_PED_INJURED(IS_PED_INJURED()) && !IS_PED_INJURED(IS_PED_INJURED()))
						{
							SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(), 0);
						}
						if (IS_BIT_SET(iLocal_115, 4))
						{
							if (!IS_BIT_SET(iLocal_115, 3))
							{
								if (func_631(0, 1, 1, 1))
								{
									if (func_885())
									{
										CLEAR_BIT(&iLocal_115, 4);
										SET_BIT(&iLocal_115, 3);
										func_22(&uLocal_1303);
										func_397(&uLocal_1303, 0, 0);
										Var0 = { func_880() };
										if (func_885())
										{
											func_630(&Var0, 30000);
										}
										if (Local_112.f_197 != 2)
										{
											func_629(1);
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if (!func_882(1))
					{
						if (!IS_PED_INJURED(IS_PED_INJURED()))
						{
							if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 8))
							{
								func_872(1);
								CLEAR_BIT(&(Local_113[CLEAR_BIT() /*8*/].f_1), 8);
								SET_PED_CAN_BE_DRAGGED_OUT(SET_PED_CAN_BE_DRAGGED_OUT(), 1);
								SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 422, false);
							}
							CLEAR_BIT(&(Local_113[CLEAR_BIT() /*8*/].f_1), 0);
							CLEAR_BIT(&(Local_113[CLEAR_BIT() /*8*/].f_1), 13);
							func_1003();
							if (!IS_PED_INJURED(IS_PED_INJURED()) && !IS_PED_INJURED(IS_PED_INJURED()))
							{
								SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(), 0);
							}
							if (IS_BIT_SET(iLocal_114, 18))
							{
								CLEAR_BIT(&iLocal_114, 18);
							}
							if (IS_VEHICLE_DRIVEABLE(iLocal_591, 0))
							{
							}
							SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 398, false);
							if (func_436(PLAYER_ID()))
							{
								func_879(0);
							}
							SET_BIT(&iLocal_115, 4);
						}
					}
					else
					{
						if (IS_BIT_SET(iLocal_115, 3))
						{
							Var0 = { func_880() };
							if (func_501(&Var0))
							{
								if (func_23(&uLocal_1303, 3000, 0))
								{
									CLEAR_BIT(&iLocal_115, 3);
									func_22(&uLocal_1303);
									CLEAR_HELP(1);
								}
							}
						}
						if (IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE()))
						{
						}
						if (func_44())
						{
							if (!IS_PED_INJURED(IS_PED_INJURED()) && !IS_PED_INJURED(IS_PED_INJURED()))
							{
								SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(), 0);
							}
							CLEAR_BIT(&(Local_113[CLEAR_BIT() /*8*/].f_1), 0);
							CLEAR_BIT(&(Local_113[CLEAR_BIT() /*8*/].f_1), 13);
						}
						else if (!IS_BIT_SET(iLocal_114, 25))
						{
							if (IS_BIT_SET(Local_112.f_1, 7))
							{
								if (func_631(0, 1, 1, 1))
								{
									if (func_885())
									{
										Var4 = { func_868() };
										if (func_885())
										{
											func_630(&Var4, 30000);
										}
										if (Local_112.f_197 != 2)
										{
											func_629(1);
										}
										SET_BIT(&iLocal_114, 25);
									}
								}
							}
						}
						func_871();
					}
					if (!IS_PED_INJURED(IS_PED_INJURED()))
					{
						if ((!IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE()) || (IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE()) && !IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE(), 0), 0))) || !func_877(IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE(), 0))))
						{
							CLEAR_BIT(&(Local_113[CLEAR_BIT() /*8*/].f_1), 0);
							CLEAR_BIT(&(Local_113[CLEAR_BIT() /*8*/].f_1), 13);
							if (IS_VEHICLE_DRIVEABLE(iLocal_591, 0))
							{
							}
						}
						else if (IS_BIT_SET(Local_112.f_1, 1))
						{
							Var0 = { func_867() };
							if (func_501(&Var0))
							{
								CLEAR_HELP(1);
							}
						}
						else if (!IS_BIT_SET(iLocal_114, 3))
						{
							if (func_631(0, 1, 1, 1))
							{
								if (func_885())
								{
									Var0 = { func_867() };
									if (func_885())
									{
										func_630(&Var0, 30000);
									}
									if (Local_112.f_197 != 2)
									{
										func_629(1);
									}
									SET_BIT(&iLocal_114, 3);
								}
							}
						}
					}
					if (IS_BIT_SET(iLocal_114, 0))
					{
						if (!IS_BIT_SET(iLocal_114, 2))
						{
							if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 0))
							{
								if (IS_BIT_SET(Local_112.f_1, 1))
								{
									if (func_631(0, 1, 1, 1))
									{
										if (func_885())
										{
											Var0 = { func_866() };
											if (func_885())
											{
												func_630(&Var0, 30000);
											}
											if (Local_112.f_197 != 2)
											{
												func_629(1);
											}
											SET_BIT(&iLocal_114, 2);
										}
									}
								}
							}
						}
					}
				}
				func_487(1, 0);
				func_477();
				func_463();
			}
			else if (!IS_BIT_SET(iLocal_114, 31))
			{
				if (DOES_BLIP_EXIST(iLocal_135))
				{
					REMOVE_BLIP(&iLocal_135);
				}
				func_443();
				func_430();
				SET_BIT(&iLocal_114, 31);
				SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 422, false);
				if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 0))
				{
					CLEAR_BIT(&(Local_113[CLEAR_BIT() /*8*/].f_1), 0);
				}
			}
			if (Local_112.f_21 >= 1)
			{
				if (!IS_BIT_SET(Local_112.f_1, 12))
				{
					if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 0))
					{
						if (Local_112.f_197 == 2)
						{
							if (!func_908())
							{
								func_721(1);
							}
							func_860(0);
							func_736();
							func_859(1);
						}
						else
						{
							func_850(136, 0f, 0f, 1, 1, 1, 0);
							func_826(1);
							func_879(0);
						}
						func_879(0);
						if (DOES_BLIP_EXIST(iLocal_135))
						{
							REMOVE_BLIP(&iLocal_135);
						}
						func_430();
						func_825(1);
						func_822();
						if (!IS_PED_INJURED(IS_PED_INJURED()) && !IS_PED_INJURED(IS_PED_INJURED()))
						{
							SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(), 0);
						}
						iLocal_133 = GET_PED_RELATIONSHIP_GROUP_HASH(GET_PED_RELATIONSHIP_GROUP_HASH());
						if (Local_112.f_197 != 2)
						{
							SET_PED_RELATIONSHIP_GROUP_HASH(SET_PED_RELATIONSHIP_GROUP_HASH(), iLocal_131);
							SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 422, true);
						}
						else
						{
							func_872(0);
							SET_ENTITY_PROOFS(SET_ENTITY_PROOFS(), false, true, true, false, false, false, 0, false);
							SET_BIT(&iLocal_116, 2);
							SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 422, false);
						}
						func_819(8, 0, 1);
						CLEAR_PLAYER_WANTED_LEVEL(CLEAR_PLAYER_WANTED_LEVEL());
						func_397(&uLocal_1305, 0, 0);
						Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 1;
					}
					else if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 6))
					{
						if (Local_112.f_197 == 2)
						{
						}
						else
						{
							func_850(136, 0f, 0f, 1, 1, 0, 0);
						}
						func_430();
						if (DOES_BLIP_EXIST(iLocal_135))
						{
							REMOVE_BLIP(&iLocal_135);
						}
						func_825(1);
						CLEAR_PLAYER_WANTED_LEVEL(CLEAR_PLAYER_WANTED_LEVEL());
						func_879(0);
						Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 1;
					}
					else
					{
						if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 8))
						{
							func_872(1);
							SET_PED_CAN_BE_DRAGGED_OUT(SET_PED_CAN_BE_DRAGGED_OUT(), 1);
							CLEAR_BIT(&(Local_113[CLEAR_BIT() /*8*/].f_1), 8);
							SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 422, false);
						}
						if (DOES_BLIP_EXIST(iLocal_135))
						{
							REMOVE_BLIP(&iLocal_135);
						}
						func_879(0);
						SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 398, false);
						func_430();
						func_818(&iLocal_1290);
						Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 3;
					}
				}
				else
				{
					if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 8))
					{
						func_872(1);
						SET_PED_CAN_BE_DRAGGED_OUT(SET_PED_CAN_BE_DRAGGED_OUT(), 1);
						CLEAR_BIT(&(Local_113[CLEAR_BIT() /*8*/].f_1), 8);
						SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 422, false);
					}
					func_443();
					if (DOES_BLIP_EXIST(iLocal_135))
					{
						REMOVE_BLIP(&iLocal_135);
					}
					func_430();
					func_818(&iLocal_1290);
					func_879(0);
					SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 398, false);
					Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 3;
				}
			}
			else if (Local_112.f_197 != 2 && func_815(2, 0, 1, 0, 0))
			{
				func_879(0);
				Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 5;
			}
			func_814();
			break;
		
		case 1:
			func_463();
			func_814();
			func_487(!IS_BIT_SET(iLocal_114, 9), 0);
			func_871();
			func_813();
			if (Local_112.f_21 >= 2)
			{
				func_397(&uLocal_150, 0, 0);
				Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 2;
			}
			break;
		
		case 2:
			if (Local_1296.f_9 == 0)
			{
				Local_1296.f_9 = 0xF12E6CD06C73D69E();
			}
			if (Local_112.f_197 == 2)
			{
				if (!IS_BIT_SET(iLocal_116, 0))
				{
					SET_MAX_WANTED_LEVEL(0);
					SET_BIT(&iLocal_116, 0);
				}
				else if (GET_MAX_WANTED_LEVEL() > 0)
				{
					SET_MAX_WANTED_LEVEL(0);
				}
			}
			func_29(1);
			func_457();
			func_487(0, 0);
			func_804();
			func_448();
			func_503(0);
			func_797();
			func_814();
			func_795();
			sVar1 = func_875();
			if (!IS_BIT_SET(iLocal_114, 13))
			{
				Var8 = { func_794() };
				if (!func_1010(1))
				{
					if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 6))
					{
						if (func_631(0, 0, 1, 1))
						{
							if (!func_793(55))
							{
								func_630(&Var8, 30000);
								if (Local_112.f_197 != 2)
								{
									func_629(1);
								}
								SET_BIT(&iLocal_114, 13);
							}
						}
					}
				}
				else
				{
					Var5 = { func_874() };
					Var6 = { func_868() };
					Var7 = { func_880() };
					if ((((((func_501(&Var8) || func_501(&Var7)) || func_501(&Var5)) || func_501(sVar1)) || func_501(&Var6)) || func_501("PEN_MPLAY")) || func_501("PEN_START2"))
					{
						CLEAR_HELP(1);
					}
				}
			}
			else if (iLocal_118 != 0)
			{
				if (!IS_BIT_SET(iLocal_114, 5))
				{
					if (func_631(0, 0, 1, 1))
					{
						if (!func_793(55))
						{
							func_630("PEN_STILLP", 30000);
							if (Local_112.f_197 != 2)
							{
								func_629(1);
							}
							SET_BIT(&iLocal_114, 5);
						}
					}
				}
			}
			if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 1))
			{
				Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 3;
				func_430();
				if (DOES_BLIP_EXIST(iLocal_593))
				{
					REMOVE_BLIP(&iLocal_593);
				}
			}
			else if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 6))
			{
				if (IS_BIT_SET(iLocal_114, 12))
				{
					Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 3;
					func_430();
				}
			}
			if (Local_112.f_21 == 3)
			{
				func_443();
				func_430();
				Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 3;
			}
			if (func_455())
			{
				if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 0))
				{
					CLEAR_BIT(&(Local_113[CLEAR_BIT() /*8*/].f_1), 0);
				}
				if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 6))
				{
					CLEAR_BIT(&(Local_113[CLEAR_BIT() /*8*/].f_1), 6);
				}
				if (func_792())
				{
					func_791(0);
				}
				SET_BIT(&iLocal_115, 20);
				func_443();
				func_430();
				func_872(1);
				CLEAR_BIT(&(Local_113[CLEAR_BIT() /*8*/].f_1), 8);
				SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 422, false);
				Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 3;
			}
			else if (Local_112.f_21 == 4)
			{
				Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 4;
			}
			else if (Local_112.f_21 > 4)
			{
				Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 5;
			}
			else if (Local_112.f_197 != 2 && func_815(2, 0, 1, 0, 0))
			{
				Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 5;
			}
			else if (func_490())
			{
				func_443();
				func_430();
				func_872(1);
				CLEAR_BIT(&(Local_113[CLEAR_BIT() /*8*/].f_1), 8);
				SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 422, false);
				Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 3;
			}
			break;
		
		case 3:
			if (!func_1010(1))
			{
				if ((!IS_BIT_SET(Local_112.f_1, 17) && !IS_BIT_SET(Local_112.f_1, 16)) && !IS_BIT_SET(Local_112.f_1, 18))
				{
					func_786();
					func_784();
				}
				func_814();
				if ((!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 0) || IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 1)) || IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 6))
				{
					if (Local_112.f_21 > 1 && Local_112.f_21 < 3)
					{
						if (!IS_BIT_SET(iLocal_115, 17))
						{
							if (DOES_BLIP_EXIST(iLocal_134))
							{
								SET_BLIP_COLOUR(iLocal_134, 55);
								SET_BIT(&iLocal_115, 17);
							}
						}
						func_29(1);
						func_457();
					}
					if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 0) || IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 6))
					{
						func_487(0, 1);
					}
				}
			}
			else if (IS_BIT_SET(iLocal_115, 17))
			{
				if (DOES_BLIP_EXIST(iLocal_134))
				{
					REMOVE_BLIP(&iLocal_134);
				}
			}
			if (IS_BIT_SET(iLocal_116, 0))
			{
				SET_MAX_WANTED_LEVEL(5);
				CLEAR_BIT(&iLocal_116, 0);
			}
			if (func_792())
			{
				if (func_455())
				{
					func_791(0);
				}
			}
			func_37();
			if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 0))
			{
				if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 2))
				{
					func_503(1);
				}
			}
			else
			{
				func_783();
			}
			if (IS_BIT_SET(iLocal_114, 6))
			{
				if (IS_AUDIO_SCENE_ACTIVE("MP_Player_Inside_Bubble_Scene"))
				{
					STOP_AUDIO_SCENE("MP_Player_Inside_Bubble_Scene");
				}
				if (IS_AUDIO_SCENE_ACTIVE("MP_Player_Outside_Bubble_Scene"))
				{
					STOP_AUDIO_SCENE("MP_Player_Outside_Bubble_Scene");
				}
				ANIMPOSTFX_STOP("pennedIn");
				ANIMPOSTFX_PLAY("PennedInOut", 0, 0);
				CLEAR_BIT(&iLocal_114, 6);
			}
			if (Local_112.f_197 != 2)
			{
				if (func_47(PLAYER_ID()))
				{
					func_826(0);
					func_825(0);
					SET_BIT(&iLocal_115, 24);
					func_757(136, 0, 1);
				}
			}
			else if (!IS_BIT_SET(iLocal_115, 24))
			{
				func_825(0);
				SET_BIT(&iLocal_115, 24);
			}
			if (!IS_BIT_SET(iLocal_115, 21))
			{
				if (IS_BIT_SET(iLocal_115, 14) || IS_BIT_SET(iLocal_114, 20))
				{
					SET_BIT(&iLocal_115, 21);
				}
			}
			if (func_682())
			{
				if (func_745())
				{
					if (Local_112.f_21 == 4)
					{
						Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 4;
					}
					else if (Local_112.f_21 > 4)
					{
						Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 5;
					}
					else
					{
						func_494();
					}
				}
			}
			break;
		
		case 4:
			if (Local_112.f_21 > 4)
			{
				Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_7 = 5;
			}
			break;
		
		case 5:
			func_1162();
			break;
	}
}

int func_745()
{
	if ((func_493() && !func_19(vLocal_1317)) || IS_BIT_SET(iLocal_115, 23))
	{
		switch (iLocal_1319)
		{
			case 0:
				if (!IS_SCREEN_FADED_OUT() && !IS_SCREEN_FADED_OUT())
				{
					DO_SCREEN_FADE_OUT(500);
				}
				else
				{
					iLocal_1319++;
				}
				break;
			
			case 1:
				if (IS_SCREEN_FADED_OUT())
				{
					SET_BIT(&iLocal_115, 23);
					func_756();
					func_494();
					iLocal_1319++;
				}
				break;
			
			case 2:
				if (func_746(vLocal_1317, fLocal_1318, 0, 1, 0, 0, 1, 0, 1, 0, 0))
				{
					iLocal_1319++;
				}
				break;
			
			case 3:
				if (!IS_SCREEN_FADING_IN() && !IS_SCREEN_FADING_IN())
				{
					DO_SCREEN_FADE_IN(500);
					iLocal_1319++;
				}
				break;
			
			case 4:
				if (IS_SCREEN_FADED_IN())
				{
					iLocal_1319++;
				}
				break;
			
			case 5:
				return 1;
				break;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_746(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, float fParam10)
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	Global_22211.f_6 = 1;
	if (Global_2437549.f_1232 && Global_2437549.f_1240)
	{
		func_754(0, bParam7);
		return 1;
	}
	if (IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam7)
	{
		if (Global_2437549.f_1232)
		{
			func_754(0, bParam7);
		}
		return 0;
	}
	if ((IS_NEW_LOAD_SCENE_ACTIVE() && !bParam7) && !IS_NEW_LOAD_SCENE_ACTIVE())
	{
		return 0;
	}
	if (!func_753())
	{
		if (func_752(PLAYER_ID(), 1, 0) && !(func_603() || func_751()))
		{
			if (((bParam7 && func_1276(PLAYER_ID(), 1, 0)) && PLAYER_ID()) && Global_2424073[PLAYER_ID() /*421*/].f_222 == 1)
			{
			}
			else if (func_750() == 28)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (fParam1 < 0f)
	{
		fParam1 = (fParam1 + 360f);
	}
	if (fParam1 >= 360f)
	{
		fParam1 = (fParam1 + -360f);
	}
	if (!Global_2437549.f_1232 && !bParam9)
	{
		vVar1 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), false) };
		if ((ABSF((vVar1.x - vParam0.x)) < 0.2f && ABSF((vVar1.y - vParam0.y)) < 0.2f) && ABSF((vVar1.z - vParam0.z)) < 1.2f)
		{
			fVar2 = (fParam1 - GET_ENTITY_HEADING(GET_ENTITY_HEADING()));
			if (fVar2 > 180f)
			{
				fVar2 = (fVar2 + -360f);
			}
			if (fVar2 < -180f)
			{
				fVar2 = (fVar2 + 360f);
			}
			if (ABSF(fVar2) < 1f)
			{
				Global_2437549.f_1232 = 0;
				Global_2437549.f_1233 = 0;
				if (IS_PLAYER_TELEPORT_ACTIVE())
				{
					STOP_PLAYER_TELEPORT();
				}
				return 1;
			}
		}
	}
	if (((!vParam0.x == Global_2437549.f_1234 || !vParam0.y == Global_2437549.f_1234.f_1) || !vParam0.z == Global_2437549.f_1234.f_2) || !fParam1 == Global_2437549.f_1237)
	{
		if (Global_2437549.f_1232 == 1)
		{
			if (IS_TIME_EQUAL_TO(IS_TIME_EQUAL_TO(), Global_2437549.f_1238) < func_749(0))
			{
				return 0;
			}
			STOP_PLAYER_TELEPORT();
			Global_2437549.f_1233 = 1;
		}
		else
		{
			Global_2437549.f_1233 = 0;
		}
		Global_2437549.f_1234 = { vParam0 };
		Global_2437549.f_1237 = fParam1;
		Global_2437549.f_1232 = 0;
	}
	if (!Global_2437549.f_1232 && !IS_PLAYER_TELEPORT_ACTIVE())
	{
		if (bParam2)
		{
			bParam3 = false;
		}
		bParam5 = bParam5;
		if (bParam5)
		{
		}
		if (bParam3)
		{
		}
		if (bParam6)
		{
		}
		if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
		{
			if (!IS_BIT_SET(Global_98721.f_1357[44], 16))
			{
				func_748(0);
			}
			if (!GET_CURRENT_PED_VEHICLE_WEAPON(GET_CURRENT_PED_VEHICLE_WEAPON(), &(Global_2405071.f_497)))
			{
				Global_2405071.f_497 = 0;
			}
		}
		if (bParam2)
		{
			if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
			{
				iVar0 = GET_VEHICLE_PED_IS_USING(GET_VEHICLE_PED_IS_USING());
				if (IS_VEHICLE_ATTACHED_TO_TRAILER(iVar0))
				{
					Global_2437549.f_1239 = 0;
				}
			}
		}
		if (Global_2437549.f_1239 > -1)
		{
			Global_2437549.f_1238 = 0xBA7F0B77D80A4EB7();
			Global_2437549.f_1232 = 1;
		}
		else
		{
			if (bParam7)
			{
				if (bParam2)
				{
					if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
					{
						iVar0 = GET_VEHICLE_PED_IS_USING(GET_VEHICLE_PED_IS_USING());
						if (NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
						{
							SET_ENTITY_COORDS(iVar0, vParam0, 0, true, 1, 1);
							SET_ENTITY_HEADING(iVar0, fParam1);
							if (fParam10 != 0f)
							{
								SET_ENTITY_ROTATION(iVar0, fParam10, 0f, fParam1, 2, 1);
							}
						}
						else
						{
							NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
						}
					}
					else
					{
						SET_ENTITY_COORDS(SET_ENTITY_COORDS(), vParam0, 0, false, 0, 1);
						SET_ENTITY_HEADING(SET_ENTITY_HEADING(), fParam1);
					}
				}
				else
				{
					SET_ENTITY_COORDS(SET_ENTITY_COORDS(), vParam0, 0, false, 0, 1);
					SET_ENTITY_HEADING(SET_ENTITY_HEADING(), fParam1);
				}
				func_754(bParam4, bParam7);
				return 1;
			}
			else
			{
				CLEAR_FOCUS();
				START_PLAYER_TELEPORT(START_PLAYER_TELEPORT(), vParam0, fParam1, bParam2, bParam8, 0);
			}
			Global_2437549.f_1238 = 0xBA7F0B77D80A4EB7();
			Global_2437549.f_1232 = 1;
		}
	}
	if (Global_2437549.f_1232)
	{
		Global_22211.f_6 = 1;
		Global_2437549.f_1238 = 0xBA7F0B77D80A4EB7();
		if (Global_2437549.f_1239 > -1)
		{
			if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
			{
				iVar0 = GET_VEHICLE_PED_IS_USING(GET_VEHICLE_PED_IS_USING());
			}
			if (func_747(&(Global_2437549.f_1239), vParam0, fParam1, iVar0))
			{
				func_754(bParam4, bParam7);
				return 1;
			}
		}
		else
		{
			if (bParam7)
			{
				if (vdist(GET_ENTITY_COORDS(GET_ENTITY_COORDS(), false), Global_2437549.f_1234) < 2f)
				{
					if (IS_PLAYER_TELEPORT_ACTIVE())
					{
						STOP_PLAYER_TELEPORT();
					}
					func_754(bParam4, bParam7);
					return 1;
				}
			}
			if (!IS_PLAYER_TELEPORT_ACTIVE())
			{
				if (fParam10 != 0f)
				{
					if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
					{
						iVar0 = GET_VEHICLE_PED_IS_USING(GET_VEHICLE_PED_IS_USING());
						SET_ENTITY_ROTATION(iVar0, fParam10, 0f, fParam1, 2, 1);
						Global_2437549.f_1240 = 1;
						return 0;
					}
				}
				func_754(bParam4, bParam7);
				return 1;
			}
		}
	}
	return 0;
}

int func_747(var uParam0, vector3 vParam1, float fParam2, int iParam3)
{
	if (DOES_ENTITY_EXIST(Global_2437549.f_1241) && !DOES_ENTITY_EXIST(Global_2437549.f_1241, 0))
	{
		NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2437549.f_1241);
	}
	switch (*uParam0)
	{
		case 0:
			Global_2437549.f_1241 = iParam3;
			NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2437549.f_1241);
			if (NETWORK_HAS_CONTROL_OF_ENTITY(Global_2437549.f_1241))
			{
				if (!IS_ENTITY_DEAD(Global_2437549.f_1241, 0))
				{
					SET_ENTITY_HEADING(Global_2437549.f_1241, fParam2);
					SET_ENTITY_COORDS(Global_2437549.f_1241, vParam1, 0, true, 1, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_748(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_2405071.f_2680;
	if ((0x2DD39BF3E2F9C47F() && Global_2405071.f_2678 == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2405071.f_2677)
	{
		if (!IS_RADIO_RETUNING())
		{
			Global_2405071.f_2677 = iVar0;
		}
	}
}

int func_749(bool bParam0)
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

int func_750()
{
	return Global_1312808;
}

bool func_751()
{
	return ((IS_BIT_SET(Global_4456448.f_30, 12) && IS_BIT_SET(Global_1695602, 12)) && Global_1695601 == 8);
}

int func_752(int iParam0, bool bParam1, int iParam2)
{
	if (Global_2424073[iParam0 /*421*/].f_222 == 99)
	{
		if ((iParam2 && Global_2424073[iParam0 /*421*/].f_225 == 0) || iParam2 == 0)
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (Global_2424073[iParam0 /*421*/].f_222 == 13)
		{
			return 0;
		}
	}
	return 1;
}

bool func_753()
{
	return Global_1312850;
}

void func_754(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
	{
		CLEAR_PED_WETNESS(CLEAR_PED_WETNESS());
	}
	if (!bParam1)
	{
		CLEAR_FOCUS();
	}
	if (IS_PLAYER_TELEPORT_ACTIVE())
	{
		STOP_PLAYER_TELEPORT();
	}
	func_669();
	if (!IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_24, 14))
	{
		func_755();
	}
}

void func_755()
{
	Global_2540318.f_80 = 1;
}

void func_756()
{
	if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()))
	{
		if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
		{
			if (IS_ENTITY_ATTACHED(IS_ENTITY_ATTACHED()))
			{
				DETACH_ENTITY(DETACH_ENTITY(), 1, true);
			}
		}
	}
}

void func_757(int iParam0, bool bParam1, bool bParam2)
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
	func_779();
	SET_AUDIO_FLAG("DisableFlightMusic", 0);
	SET_AUDIO_FLAG("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_778(func_528(PLAYER_ID()));
		func_776(func_777(iParam0), 0);
	}
	else
	{
		if ((bParam2 && PLAYER_ID() != -1) && func_775(PLAYER_ID()) >= 12)
		{
			func_157(2546, -1);
			iVar1 = func_50(2546, -1, 0);
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
		func_774();
		func_773();
		func_772();
		if ((!func_41(PLAYER_ID()) && !func_39(PLAYER_ID())) && !func_710())
		{
			func_698();
		}
		func_771();
		if (!IS_BIT_SET(Global_1674852.f_3, 0) && !IS_BIT_SET(Global_1674852.f_3, 1))
		{
			func_869();
		}
		func_770();
		CLEAR_BIT(&(Global_2531497.f_1746), 2);
		func_769();
		func_768();
	}
	if (_0x84698AB38D0C6636(1344549371))
	{
		OBJECT_DECAL_TOGGLE(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if (((PLAYER_ID() != -1 && !func_372(PLAYER_ID(), 21)) && !func_372(PLAYER_ID(), 25)) && !func_144(PLAYER_ID(), 0))
		{
			func_721(0);
			func_766(0);
			if (!bParam1)
			{
				func_765();
			}
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_764(26, -1))
		{
			Global_2461173 = -1;
			func_762(26, -1);
		}
	}
	if (!func_758())
	{
		Global_2507562 = 1;
	}
}

int func_758()
{
	if ((((((!func_592(PLAYER_ID()) && !func_575(PLAYER_ID())) && func_528(PLAYER_ID()) != 146) && !func_761()) && !func_760()) && !func_759(Global_4456448.f_190930)) && !func_103())
	{
		return 0;
	}
	return 1;
}

bool func_759(int iParam0)
{
	return iParam0 == 57;
}

int func_760()
{
	if (Global_4456448.f_154360 == Global_262145.f_9596)
	{
		return 1;
	}
	return 0;
}

int func_761()
{
	if ((Global_4456448 == 0 && NETWORK_IS_ACTIVITY_SESSION()) && (((((((Global_4456448.f_5 != 0 || Global_4456448.f_190930 > 0) || NETWORK_IS_ACTIVITY_SESSION(Global_4456448.f_4, 15)) || NETWORK_IS_ACTIVITY_SESSION(Global_4456448.f_4, 18)) || NETWORK_IS_ACTIVITY_SESSION(Global_4456448.f_4, 19)) || NETWORK_IS_ACTIVITY_SESSION(Global_4456448.f_4, 29)) || NETWORK_IS_ACTIVITY_SESSION(Global_4456448.f_4, 28)) || NETWORK_IS_ACTIVITY_SESSION(Global_4456448.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_762(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_52();
	}
	switch (iParam0)
	{
		case 0:
			_0x723C1CE13FBFDB67(0, iParam1);
			break;
		
		default:
			iVar1 = func_763(iParam1);
			iVar0 = GET_PROFILE_SETTING(iVar1);
			if (IS_BIT_SET(iVar0, iParam0))
			{
				CLEAR_BIT(&iVar0, iParam0);
				_0x723C1CE13FBFDB67(iVar0, iParam1);
			}
			break;
	}
}

int func_763(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_52();
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

bool func_764(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_52();
	}
	iVar0 = func_763(iParam1);
	iVar1 = GET_PROFILE_SETTING(iVar0);
	return IS_BIT_SET(iVar1, iParam0);
}

void func_765()
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

void func_766(bool bParam0)
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
		func_767(iVar0);
		iVar0++;
	}
}

void func_767(int iParam0)
{
	Global_98721.f_181[iParam0] = 1;
	Global_98721.f_180 = 1;
}

void func_768()
{
	Global_1628955[PLAYER_ID() /*614*/].f_7 = 0;
}

void func_769()
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

void func_770()
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1574647 = { Var0 };
}

void func_771()
{
	var uVar0;
	
	Global_1319097 = uVar0;
}

void func_772()
{
	Global_2531497.f_4736 = 0;
}

void func_773()
{
	if (PLAYER_ID() != -1)
	{
		Global_1628955[PLAYER_ID() /*614*/].f_1 = 0;
	}
}

void func_774()
{
	int iVar0;
	
	iVar0 = PLAYER_ID();
	if (iVar0 != -1)
	{
		Global_1628955[iVar0 /*614*/] = -1;
	}
}

int func_775(int iParam0)
{
	return Global_1590446[iParam0 /*871*/].f_211.f_6;
}

void func_776(int iParam0, bool bParam1)
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

int func_777(int iParam0)
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

int func_778(int iParam0)
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
			if (func_42(PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_779()
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
	func_782(0);
	func_781(0);
	func_780(0);
}

void func_780(int iParam0)
{
	if (Global_2531497.f_4520 != iParam0)
	{
		Global_2531497.f_4520 = iParam0;
	}
}

void func_781(bool bParam0)
{
	if (Global_2531497.f_4519 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2531497.f_4519 = bParam0;
	}
}

void func_782(int iParam0)
{
	if (Global_2531497.f_4517 != iParam0)
	{
		Global_2531497.f_4517 = iParam0;
	}
}

void func_783()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (!IS_PED_INJURED(IS_PED_INJURED()))
	{
		if (IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE()))
		{
			iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
			iVar1 = GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0);
			if (iVar1 != 0)
			{
				if (iVar1 != PLAYER_PED_ID())
				{
					if (IS_PED_A_PLAYER(iVar1))
					{
						iVar2 = NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
						if (NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
						{
							iVar3 = NETWORK_GET_PARTICIPANT_INDEX(iVar2);
							iVar4 = iVar3;
							if (IS_BIT_SET(Local_113[iVar4 /*8*/].f_1, 0))
							{
								if (!IS_BIT_SET(Local_113[iVar4 /*8*/].f_1, 1))
								{
									bVar5 = true;
								}
							}
						}
					}
				}
			}
		}
	}
	if (bVar5)
	{
		func_871();
	}
}

void func_784()
{
	struct<4> Var0;
	
	if (!IS_BIT_SET(Local_112.f_1, 12))
	{
		if (!IS_BIT_SET(iLocal_114, 10))
		{
			if (Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_7 == 3)
			{
				if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 1))
				{
					if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 0))
					{
						if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 6))
						{
							if (!IS_BIT_SET(iLocal_115, 20))
							{
								if (!func_490())
								{
									if (func_631(0, 1, 1, 1))
									{
										Var0 = { func_785() };
										func_630(&Var0, 30000);
										if (Local_112.f_197 != 2)
										{
											func_629(1);
										}
										SET_BIT(&iLocal_114, 10);
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

struct<4> func_785()
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_NAVAIL", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_NAVAIL", 16);
			break;
	}
	return Var0;
}

void func_786()
{
	struct<4> Var0;
	
	if (!IS_BIT_SET(iLocal_114, 4))
	{
		if (!IS_BIT_SET(Local_112.f_1, 12))
		{
			if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 0))
			{
				if (func_631(0, 1, 1, 1))
				{
					if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 1))
					{
						if (IS_BIT_SET(iLocal_115, 5))
						{
							if (!IS_BIT_SET(iLocal_115, 6))
							{
								Var0 = { func_790() };
								func_630(&Var0, -1);
								if (Local_112.f_197 != 2)
								{
									func_629(1);
								}
								SET_BIT(&iLocal_115, 6);
							}
						}
						else if (IS_BIT_SET(iLocal_115, 8))
						{
							if (!IS_BIT_SET(iLocal_115, 6))
							{
								Var0 = { func_789() };
								func_630(&Var0, -1);
								if (Local_112.f_197 != 2)
								{
									func_629(1);
								}
								SET_BIT(&iLocal_115, 6);
							}
						}
						else if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 6))
						{
							if (!IS_BIT_SET(iLocal_115, 6))
							{
								Var0 = { func_789() };
								func_630(&Var0, -1);
								if (Local_112.f_197 != 2)
								{
									func_629(1);
								}
								SET_BIT(&iLocal_115, 6);
							}
						}
					}
					else if (!IS_BIT_SET(Local_112.f_1, 5))
					{
						Var0 = { func_788() };
						func_630(&Var0, 30000);
						if (Local_112.f_197 != 2)
						{
							func_629(1);
						}
					}
					SET_BIT(&iLocal_114, 4);
				}
			}
			else if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 1))
			{
				if (func_631(0, 1, 1, 1))
				{
					if (!IS_BIT_SET(iLocal_114, 20))
					{
						Var0 = { func_788() };
						func_630(&Var0, 30000);
						if (Local_112.f_197 != 2)
						{
							func_629(1);
						}
						SET_BIT(&iLocal_114, 4);
					}
				}
			}
		}
		else
		{
			Var0 = { func_787() };
			func_53(&Var0, 1);
			SET_BIT(&iLocal_114, 4);
		}
	}
}

struct<4> func_787()
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_EXPD", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_EXPD", 16);
			break;
	}
	return Var0;
}

struct<4> func_788()
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_NAVAIL2", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_NAVAIL2", 16);
			break;
	}
	return Var0;
}

struct<4> func_789()
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_EXITD", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_EXITD", 16);
			break;
	}
	return Var0;
}

struct<4> func_790()
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_EXITP", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_EXITP", 16);
			break;
	}
	return Var0;
}

void func_791(int iParam0)
{
	Global_2531497.f_4821 = iParam0;
}

bool func_792()
{
	return Global_2531497.f_4821;
}

bool func_793(int iParam0)
{
	return Global_2437549.f_2708[0 /*80*/].f_1 == iParam0;
}

struct<4> func_794()
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_NDRV2", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_NDRV2", 16);
			break;
	}
	return Var0;
}

void func_795()
{
	if (Local_112.f_197 == 2)
	{
		if (!IS_BIT_SET(iLocal_115, 30))
		{
			if (!IS_PED_INJURED(IS_PED_INJURED()))
			{
				if (IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE()))
				{
					if (!IS_BIT_SET(iLocal_115, 2))
					{
						if (!func_24(&uLocal_148))
						{
							func_397(&uLocal_148, 0, 0);
						}
						else if (func_23(&uLocal_148, 10000, 0))
						{
							if (!IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								func_796("BRS_BM_EXP1", -1);
								SET_BIT(&iLocal_115, 30);
							}
						}
					}
				}
			}
		}
	}
}

void func_796(char* sParam0, int iParam1)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

void func_797()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	
	if (!IS_BIT_SET(iLocal_114, 16))
	{
		if (Local_112.f_21 > 1)
		{
			if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 0))
			{
				if (!IS_PED_INJURED(IS_PED_INJURED()))
				{
					if (IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE()))
					{
						iLocal_590 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
						if (GET_PED_IN_VEHICLE_SEAT(iLocal_590, -1, 0) == GET_PED_IN_VEHICLE_SEAT())
						{
							if (NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_590))
							{
								if (((((!func_803(iLocal_590, 1) && !func_802(iLocal_590)) && !func_801(iLocal_590)) && !func_800(iLocal_590)) && !func_799(iLocal_590)) && !func_798(iLocal_590))
								{
									if (func_877(GET_ENTITY_MODEL(iLocal_590)))
									{
										SET_ENTITY_AS_MISSION_ENTITY(iLocal_590, false, 1);
										SET_BIT(&iLocal_114, 16);
										iVar2 = 0;
										while (iVar2 < 32)
										{
											SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_590, false, Global_1574964[iVar2]);
											iVar2++;
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
	if (DOES_ENTITY_EXIST(iLocal_590))
	{
		if (!func_803(iLocal_590, 1) && !func_800(iLocal_590))
		{
			if (IS_THIS_MODEL_A_BIKE(IS_THIS_MODEL_A_BIKE(iLocal_590)))
			{
				sVar1 = "PEN_BIKE";
			}
			else
			{
				sVar1 = "PEN_VEHG";
			}
			bVar3 = true;
		}
		else
		{
			if (IS_THIS_MODEL_A_BIKE(IS_THIS_MODEL_A_BIKE(iLocal_590)))
			{
				sVar1 = "PEN_PBIKE";
			}
			else
			{
				sVar1 = "PEN_PVEHG";
			}
			bVar3 = true;
		}
	}
	if (DOES_ENTITY_EXIST(iLocal_590))
	{
		if (func_803(iLocal_590, 1) || func_800(iLocal_590))
		{
			if (Local_112.f_21 == 2)
			{
				if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 1))
				{
					if (IS_VEHICLE_DRIVEABLE(iLocal_590, 0))
					{
						if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 5))
						{
							if (!IS_PED_INJURED(IS_PED_INJURED()))
							{
								if (!IS_PED_SITTING_IN_VEHICLE(IS_PED_SITTING_IN_VEHICLE(), iLocal_590))
								{
									if (!func_432(sVar1))
									{
										func_418(sVar1, 0);
									}
								}
								else if (func_432(sVar1))
								{
									func_430();
								}
							}
						}
						else if (func_432(sVar1))
						{
							func_430();
						}
					}
					else if (bVar3)
					{
						if (func_432(sVar1))
						{
							func_430();
						}
					}
				}
			}
		}
	}
	if (IS_BIT_SET(iLocal_114, 16))
	{
		if (Local_112.f_21 == 2)
		{
			if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 1))
			{
				if (IS_VEHICLE_DRIVEABLE(iLocal_590, 0))
				{
					if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 5))
					{
						if (!IS_PED_INJURED(IS_PED_INJURED()))
						{
							if (!IS_PED_SITTING_IN_VEHICLE(IS_PED_SITTING_IN_VEHICLE(), iLocal_590))
							{
								if (!DOES_BLIP_EXIST(iLocal_593))
								{
									iLocal_593 = ADD_BLIP_FOR_ENTITY(iLocal_590);
									SET_BLIP_AS_FRIENDLY(iLocal_593, true);
								}
								if (!func_432(sVar1))
								{
									func_418(sVar1, 0);
								}
							}
							else if (func_877(GET_ENTITY_MODEL(iLocal_590)))
							{
								if (DOES_BLIP_EXIST(iLocal_593))
								{
									REMOVE_BLIP(&iLocal_593);
								}
								if (bVar3)
								{
									if (func_432(sVar1))
									{
										func_430();
									}
								}
							}
						}
					}
					else if (bVar3)
					{
						if (func_432(sVar1))
						{
							func_430();
						}
					}
				}
				else
				{
					if (DOES_BLIP_EXIST(iLocal_593))
					{
						REMOVE_BLIP(&iLocal_593);
					}
					if (bVar3)
					{
						if (func_432(sVar1))
						{
							func_430();
						}
					}
				}
			}
		}
	}
	if (DOES_BLIP_EXIST(iLocal_593) || !DOES_BLIP_EXIST(iLocal_590, 0))
	{
		if (!IS_PED_INJURED(IS_PED_INJURED()))
		{
			if (IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE()))
			{
				iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
				if (func_877(GET_ENTITY_MODEL(iVar0)))
				{
					if (iVar0 != iLocal_590)
					{
						if (GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) == GET_PED_IN_VEHICLE_SEAT())
						{
							if (NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
							{
								iLocal_590 = iVar0;
								if (bVar3)
								{
									if (func_432(sVar1))
									{
										func_430();
									}
								}
								REMOVE_BLIP(&iLocal_593);
								if (!func_803(iLocal_590, 1))
								{
									SET_ENTITY_AS_MISSION_ENTITY(iLocal_590, false, 1);
								}
							}
						}
						else if (bVar3)
						{
							if (func_432(sVar1))
							{
								func_430();
							}
						}
					}
				}
			}
			else if (IS_VEHICLE_DRIVEABLE(iLocal_590, 0))
			{
			}
		}
	}
	if (!IS_BIT_SET(iLocal_115, 1))
	{
		if (!IS_PED_INJURED(IS_PED_INJURED()))
		{
			if (!IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
			{
				SET_BIT(&iLocal_115, 1);
				CLEAR_BIT(&iLocal_115, 2);
			}
		}
	}
	else if (!IS_PED_INJURED(IS_PED_INJURED()))
	{
		if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
		{
			if (!IS_BIT_SET(iLocal_115, 2))
			{
				iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
				if (func_877(GET_ENTITY_MODEL(iVar0)))
				{
					CLEAR_BIT(&iLocal_115, 1);
					CLEAR_BIT(&iLocal_115, 2);
				}
				else
				{
					SET_BIT(&iLocal_115, 2);
				}
			}
		}
		else if (IS_BIT_SET(iLocal_115, 2))
		{
			CLEAR_BIT(&iLocal_115, 2);
		}
	}
	if (Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_7 == 2)
	{
		if (!IS_BIT_SET(iLocal_115, 5))
		{
			if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 6))
			{
				if (!IS_PED_INJURED(IS_PED_INJURED()))
				{
					if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
					{
						iVar4 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
						if (GET_PED_IN_VEHICLE_SEAT(iVar4, -1, 0) == GET_PED_IN_VEHICLE_SEAT())
						{
							SET_BIT(&iLocal_115, 5);
							func_430();
						}
					}
				}
			}
		}
	}
	if (!IS_BIT_SET(iLocal_115, 8))
	{
		if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 0))
		{
			if (!IS_PED_INJURED(IS_PED_INJURED()))
			{
				if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
				{
					iVar4 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
					if (GET_PED_IN_VEHICLE_SEAT(iVar4, -1, 0) != GET_PED_IN_VEHICLE_SEAT() && GET_PED_IN_VEHICLE_SEAT(iVar4, -1, 0) != 0)
					{
						CLEAR_BIT(&(Local_113[CLEAR_BIT() /*8*/].f_1), 0);
						SET_BIT(&iLocal_115, 8);
					}
				}
			}
		}
	}
}

int func_798(int iParam0)
{
	if (Global_2531497.f_314 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_799(int iParam0)
{
	if (Global_2531497.f_306 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_800(int iParam0)
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

int func_801(int iParam0)
{
	if (Global_2531497.f_302[0] == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_802(int iParam0)
{
	if (Global_2531497.f_301 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_803(int iParam0, bool bParam1)
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

void func_804()
{
	char* sVar0;
	
	if (IS_BIT_SET(Local_112.f_1, 3) || IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 10))
	{
		if (IS_BIT_SET(iLocal_114, 6))
		{
			if (IS_AUDIO_SCENE_ACTIVE("MP_Player_Inside_Bubble_Scene"))
			{
				STOP_AUDIO_SCENE("MP_Player_Inside_Bubble_Scene");
			}
			if (IS_AUDIO_SCENE_ACTIVE("MP_Player_Outside_Bubble_Scene"))
			{
				STOP_AUDIO_SCENE("MP_Player_Outside_Bubble_Scene");
			}
			ANIMPOSTFX_STOP("pennedIn");
			ANIMPOSTFX_PLAY("PennedInOut", 0, 0);
			CLEAR_BIT(&iLocal_114, 6);
		}
		if (func_432("PEN_BAREA"))
		{
			func_430();
		}
		if (func_432("PEN_BAREA"))
		{
			func_430();
		}
		if (func_432("PEN_AREA"))
		{
			func_430();
		}
		return;
	}
	if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 6))
	{
		if (func_1010(1))
		{
			if (IS_BIT_SET(iLocal_114, 6))
			{
				if (IS_AUDIO_SCENE_ACTIVE("MP_Player_Inside_Bubble_Scene"))
				{
					STOP_AUDIO_SCENE("MP_Player_Inside_Bubble_Scene");
				}
				if (IS_AUDIO_SCENE_ACTIVE("MP_Player_Outside_Bubble_Scene"))
				{
					STOP_AUDIO_SCENE("MP_Player_Outside_Bubble_Scene");
				}
				ANIMPOSTFX_STOP("pennedIn");
				ANIMPOSTFX_PLAY("PennedInOut", 0, 0);
				CLEAR_BIT(&iLocal_114, 6);
			}
			if (func_432("PEN_BAREA"))
			{
				func_430();
			}
			if (func_432("PEN_BAREA"))
			{
				func_430();
			}
			if (func_432("PEN_AREA"))
			{
				func_430();
			}
			func_443();
			return;
		}
	}
	if ((func_882(0) && !IS_BIT_SET(iLocal_115, 2)) && !IS_BIT_SET(IS_BIT_SET()))
	{
		if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 9))
		{
			SET_BIT(&(Local_113[SET_BIT() /*8*/].f_1), 9);
		}
		if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 10))
		{
			if (IS_BIT_SET(Local_112.f_1, 4))
			{
				SET_BIT(&(Local_113[SET_BIT() /*8*/].f_1), 10);
			}
			else if (IS_BIT_SET(iLocal_115, 9))
			{
				SET_BIT(&(Local_113[SET_BIT() /*8*/].f_1), 10);
			}
		}
		if (func_24(&uLocal_143))
		{
			func_22(&uLocal_143);
			_0x8290252FFF36ACB5(0, 255, 255, 255);
		}
		if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 5))
		{
			CLEAR_BIT(&(Local_113[CLEAR_BIT() /*8*/].f_1), 5);
			PLAY_SOUND_FRONTEND(-1, "OOB_Cancel", "GTAO_FM_Events_Soundset", false);
			STOP_SOUND(iLocal_594);
			RELEASE_SOUND_ID(iLocal_594);
			CLEAR_BIT(&iLocal_115, 7);
		}
		if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 6))
		{
			if (!func_793(55))
			{
				if ((DOES_ENTITY_EXIST(iLocal_590) && !DOES_ENTITY_EXIST(DOES_ENTITY_EXIST(), 0)) && DOES_ENTITY_EXIST(iLocal_590, 0))
				{
					if (func_432("PEN_AREA"))
					{
						func_430();
					}
				}
				else if (!DOES_BLIP_EXIST(iLocal_593))
				{
					if (!func_432("PEN_AREA"))
					{
						func_418("PEN_AREA", 0);
					}
				}
			}
		}
		else if (!func_432("PEN_AREA"))
		{
			func_418("PEN_AREA", 0);
		}
		if (!IS_BIT_SET(iLocal_114, 6))
		{
			if (IS_AUDIO_SCENE_ACTIVE("MP_Player_Outside_Bubble_Scene"))
			{
				STOP_AUDIO_SCENE("MP_Player_Outside_Bubble_Scene");
			}
			START_AUDIO_SCENE("MP_Player_Inside_Bubble_Scene");
			ANIMPOSTFX_PLAY("pennedIn", 0, 1);
			SET_BIT(&iLocal_114, 6);
		}
	}
	else
	{
		if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 9))
		{
			CLEAR_BIT(&(Local_113[CLEAR_BIT() /*8*/].f_1), 9);
		}
		if (!IS_PED_INJURED(IS_PED_INJURED()))
		{
			func_811();
			if (!IS_BIT_SET(iLocal_115, 2))
			{
				if (!func_432("PEN_BAREA"))
				{
					func_418("PEN_BAREA", 0);
				}
			}
			else
			{
				if (!func_432("PEN_EXITV"))
				{
					func_418("PEN_EXITV", 0);
				}
				if (!IS_BIT_SET(iLocal_114, 24))
				{
					if (func_631(0, 1, 1, 1))
					{
						sVar0 = func_873();
						func_630(sVar0, 30000);
						if (Local_112.f_197 != 2)
						{
							func_629(1);
						}
						SET_BIT(&iLocal_114, 24);
					}
				}
			}
		}
		if (IS_BIT_SET(iLocal_114, 6))
		{
			if (IS_AUDIO_SCENE_ACTIVE("MP_Player_Inside_Bubble_Scene"))
			{
				STOP_AUDIO_SCENE("MP_Player_Inside_Bubble_Scene");
			}
			START_AUDIO_SCENE("MP_Player_Outside_Bubble_Scene");
			ANIMPOSTFX_STOP("pennedIn");
			ANIMPOSTFX_PLAY("PennedInOut", 0, 0);
			CLEAR_BIT(&iLocal_114, 6);
		}
		if (!func_24(&uLocal_143))
		{
			func_397(&uLocal_143, 0, 0);
		}
		if (!IS_BIT_SET(iLocal_115, 7))
		{
			SET_BIT(&iLocal_115, 7);
			PLAY_SOUND_FRONTEND(-1, "OOB_Start", "GTAO_FM_Events_Soundset", false);
			iLocal_594 = GET_SOUND_ID();
			PLAY_SOUND_FRONTEND(iLocal_594, "OOB_Timer_Dynamic", "GTAO_FM_Events_Soundset", false);
			SET_VARIABLE_ON_SOUND(iLocal_594, "Time", (to_float(func_447()) / 1000f));
		}
		if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 5))
		{
			SET_BIT(&(Local_113[SET_BIT() /*8*/].f_1), 5);
		}
		if (!IS_BIT_SET(iLocal_114, 12))
		{
			if (func_24(&uLocal_143))
			{
				if ((func_447() - func_357(&uLocal_143, 0, 0)) >= 0)
				{
					if (!IS_PED_INJURED(IS_PED_INJURED()))
					{
						func_444((func_447() - func_357(&uLocal_143, 0, 0)), "PEN_ELM", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
					}
					else
					{
						func_808();
					}
				}
				else
				{
					func_808();
				}
			}
		}
	}
	func_805();
	func_871();
}

void func_805()
{
	int iVar0;
	
	if (IS_PED_INJURED(IS_PED_INJURED()))
	{
		return;
	}
	if (!IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
	{
		return;
	}
	iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
	if (GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) != GET_PED_IN_VEHICLE_SEAT())
	{
		if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 0))
		{
			if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 1))
			{
				return;
			}
		}
	}
	if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 6))
	{
		return;
	}
	if (IS_BIT_SET(iLocal_115, 2))
	{
		return;
	}
	func_806();
	func_813();
}

void func_806()
{
	struct<4> Var0;
	
	if (!IS_BIT_SET(iLocal_114, 21))
	{
		if ((IS_CONTROL_JUST_PRESSED(0, 75) || IS_CONTROL_JUST_PRESSED(0, 75)) || IS_CONTROL_JUST_PRESSED(0, 75))
		{
			SET_BIT(&iLocal_114, 21);
		}
	}
	else if (!IS_BIT_SET(iLocal_114, 22))
	{
		if (!IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			Var0 = { func_807() };
			func_630(&Var0, 30000);
			if (Local_112.f_197 != 2)
			{
				func_629(1);
			}
			SET_BIT(&iLocal_114, 22);
		}
	}
}

struct<4> func_807()
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_EXV", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_EXV", 16);
			break;
	}
	return Var0;
}

void func_808()
{
	int iVar0;
	
	if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 1))
	{
		return;
	}
	if (IS_BIT_SET(iLocal_114, 18))
	{
		CLEAR_BIT(&iLocal_114, 18);
	}
	SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 422, false);
	CLEAR_BIT(&(Local_113[CLEAR_BIT() /*8*/].f_1), 8);
	_0xCB0360EFEFB2580D(0);
	if (!IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 6))
	{
		func_349();
		SET_BIT(&(Local_113[SET_BIT() /*8*/].f_1), 1);
		Local_147.f_2 = -1851137829;
		Local_147.f_10 = PLAYER_ID();
		func_809(Local_147, func_810(1));
		if (!IS_PED_INJURED(IS_PED_INJURED()))
		{
			SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 398, false);
		}
		if (!IS_PED_INJURED(IS_PED_INJURED()))
		{
			if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
			{
				iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
				if (NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
				}
				if (!IS_THIS_MODEL_A_BICYCLE(IS_THIS_MODEL_A_BICYCLE(iVar0)))
				{
					iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
					CLEAR_ENTITY_LAST_DAMAGE_ENTITY(CLEAR_ENTITY_LAST_DAMAGE_ENTITY());
					CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iVar0);
					if (Local_112.f_197 == 2)
					{
						SET_ENTITY_PROOFS(SET_ENTITY_PROOFS(), false, false, false, false, false, false, 0, false);
						SET_ENTITY_PROOFS(SET_ENTITY_PROOFS(SET_ENTITY_PROOFS(), 0), false, false, false, false, false, false, 0, false);
						CLEAR_BIT(&iLocal_116, 2);
						NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
					}
					else
					{
						func_872(1);
					}
					if (!IS_THIS_MODEL_A_HELI(IS_THIS_MODEL_A_HELI(iVar0)))
					{
						NETWORK_EXPLODE_VEHICLE(iVar0, 1, 0, -1);
					}
					else
					{
						0x2A5E0621DD815A9A(iVar0, 1, 0, 0);
					}
					func_791(1);
					SET_BIT(&iLocal_114, 20);
				}
			}
			else
			{
				if (IS_BIT_SET(iLocal_116, 2))
				{
					SET_ENTITY_PROOFS(SET_ENTITY_PROOFS(), false, false, false, false, false, false, 0, false);
					CLEAR_BIT(&iLocal_116, 2);
				}
				CLEAR_ENTITY_LAST_DAMAGE_ENTITY(CLEAR_ENTITY_LAST_DAMAGE_ENTITY());
				SET_ENTITY_HEALTH(SET_ENTITY_HEALTH(), 0, 0);
				func_791(1);
				SET_BIT(&iLocal_114, 20);
			}
		}
		else
		{
			func_791(1);
			SET_BIT(&iLocal_115, 14);
		}
		iLocal_1311 = func_357(&uLocal_150, 0, 0);
	}
	if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 5))
	{
		CLEAR_BIT(&(Local_113[CLEAR_BIT() /*8*/].f_1), 5);
		STOP_SOUND(iLocal_594);
		RELEASE_SOUND_ID(iLocal_594);
		CLEAR_BIT(&iLocal_115, 7);
	}
	SET_BIT(&iLocal_114, 12);
}

void func_809(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = 564131320;
	Param0.f_1 = PLAYER_ID();
	if (!iParam13 == 0)
	{
		TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam13);
	}
}

int func_810(int iParam0)
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
			if (func_1276(iVar2, 0, 0))
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

void func_811()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	fVar1 = 80f;
	fVar2 = 0f;
	iVar3 = 130;
	iVar4 = 130;
	fVar0 = ((fVar1 + fVar2) + IntToFloat(GET_RANDOM_INT_IN_RANGE(0, 3)));
	if (0xBA7F0B77D80A4EB7() - iLocal_588) >= round((60000f / fVar0))
	{
		if (!IS_BIT_SET(iLocal_114, 15))
		{
			SET_BIT(&iLocal_114, 15);
		}
		iLocal_588 = 0xBA7F0B77D80A4EB7();
	}
	else if (IS_BIT_SET(iLocal_114, 15))
	{
		CLEAR_BIT(&iLocal_114, 15);
	}
	if (func_812())
	{
		SET_PAD_SHAKE(0, 0, 0);
		SET_PAD_SHAKE(0, iVar3, iVar4);
		_0x8290252FFF36ACB5(0, 255, 0, 0);
	}
	else
	{
		_0x8290252FFF36ACB5(0, 255, 255, 255);
	}
}

bool func_812()
{
	return IS_BIT_SET(iLocal_114, 15);
}

void func_813()
{
	if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
	{
		DISABLE_CONTROL_ACTION(0, 75, 1);
	}
}

void func_814()
{
	int iVar0;
	
	if (!IS_BIT_SET(iLocal_114, 14))
	{
		if ((Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_7 == 1 || Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_7 == 2) || (((func_436(PARTICIPANT_ID_TO_INT()) && func_882(0)) && PARTICIPANT_ID_TO_INT(Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_1, 0)) && !func_1010(1)))
		{
			if (!IS_PED_INJURED(IS_PED_INJURED()))
			{
				if (IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE()))
				{
					iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
					if (NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						SET_VEHICLE_AUTOMATICALLY_ATTACHES(iVar0, false, 0);
						SET_BIT(&iLocal_114, 14);
					}
				}
			}
		}
	}
	else if (!IS_PED_INJURED(IS_PED_INJURED()))
	{
		if (IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE()))
		{
			if (Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_7 >= 3 || PARTICIPANT_ID_TO_INT(iLocal_114, 31))
			{
				iVar0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
				if (IS_VEHICLE_DRIVEABLE(iVar0, 0))
				{
					if (NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						SET_VEHICLE_AUTOMATICALLY_ATTACHES(iVar0, true, 0);
						CLEAR_BIT(&iLocal_114, 14);
					}
				}
			}
		}
		else
		{
			CLEAR_BIT(&iLocal_114, 14);
		}
	}
}

int func_815(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_144(PLAYER_ID(), 0) || func_559(PLAYER_ID(), 0))
	{
		if (func_41(PLAYER_ID()) || func_45(PLAYER_ID()))
		{
			bParam2 = false;
		}
	}
	if (_0xCF61D4B4702EE9EB() < iParam0)
	{
		if (bParam2)
		{
			func_817(sParam3, sParam4, 1);
		}
		if (func_764(26, -1))
		{
			func_762(26, -1);
		}
		return 1;
	}
	if (func_24(&(Global_1574647.f_18)))
	{
		if (!func_23(&(Global_1574647.f_18), 7500, 0))
		{
			return 0;
		}
		func_22(&(Global_1574647.f_18));
	}
	if (func_816())
	{
		if (bParam2)
		{
			func_817(sParam3, sParam4, 0);
		}
		if (func_764(26, -1))
		{
			func_762(26, -1);
		}
		return 1;
	}
	if (iParam1 && NETWORK_GET_NUM_PARTICIPANTS() < iParam0)
	{
		if (bParam2)
		{
			func_817(sParam3, sParam4, 1);
		}
		if (func_764(26, -1))
		{
			func_762(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_816()
{
	return IS_BIT_SET(Global_1574647.f_1, 0);
}

void func_817(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!IS_BIT_SET(Global_1574647.f_1, 2) && !func_46(IS_BIT_SET())) && !func_375(IS_BIT_SET()))
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
		func_134(66, sParam0, sParam1, 1, -1, 2, 1, 0);
		SET_BIT(&(Global_1574647.f_1), 2);
	}
}

void func_818(int iParam0)
{
	SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	RELEASE_NAMED_SCRIPT_AUDIO_BANK("HUD_MINI_GAME_SOUNDSET");
}

void func_819(int iParam0, int iParam1, bool bParam2)
{
	if (func_44())
	{
		if (iParam1 == 1)
		{
			if (Global_2531497.f_4395 == -1)
			{
				Global_2531497.f_4395 = Global_262145.f_26329;
			}
			func_165(&(Global_2531497.f_4393), 0, 0);
			if (bParam2)
			{
				if (Global_2531497.f_4398 == -1)
				{
					Global_2531497.f_4398 = Global_262145.f_26330;
				}
				func_165(&(Global_2531497.f_4396), 0, 0);
			}
			else
			{
				Global_1312417 = 0;
				Global_1628955[PLAYER_ID() /*614*/].f_8 = 0;
				func_872(1);
			}
		}
		else
		{
			Global_1312417 = 0;
			Global_1628955[PLAYER_ID() /*614*/].f_8 = 0;
			func_872(1);
		}
		if ((!NETWORK_IS_ACTIVITY_SESSION() && !func_821()) && !func_820(NETWORK_IS_ACTIVITY_SESSION()))
		{
			Global_968396 = 0;
		}
		0x35EEC6C2BC821A71(0, -1, -1, iParam0);
	}
}

int func_820(int iParam0)
{
	if (func_607(iParam0, 1, 0))
	{
		if (Global_1590446[iParam0 /*871*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_821()
{
	return Global_2448961.f_740;
}

void func_822()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_824(&iVar0) && DECOR_EXIST_ON(iVar0, "Veh_Modded_By_Player"))
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar2 = INT_TO_PLAYERINDEX(iVar1);
			if (func_1276(iVar2, 0, 1))
			{
				if (DECOR_GET_INT(iVar0, "Veh_Modded_By_Player") == DECOR_GET_INT(iVar2))
				{
					func_823(func_238(iVar2));
				}
			}
			iVar1++;
		}
	}
}

void func_823(int iParam0)
{
	struct<2> Var0;
	
	Var0 = -1264082575;
	Var0.f_1 = PLAYER_ID();
	if (!iParam0 == 0)
	{
		TRIGGER_SCRIPT_EVENT(1, &Var0, 2, iParam0);
	}
}

int func_824(var uParam0)
{
	if (IS_PED_IN_ANY_VEHICLE(IS_PED_IN_ANY_VEHICLE(), 0))
	{
		*uParam0 = GET_VEHICLE_PED_IS_IN(GET_VEHICLE_PED_IS_IN(), 0);
		if (DECOR_IS_REGISTERED_AS_TYPE("bombdec1", 3))
		{
			if (DECOR_EXIST_ON(*uParam0, "bombdec1"))
			{
				return 1;
			}
		}
		if (DECOR_IS_REGISTERED_AS_TYPE("bombdec", 3))
		{
			if (DECOR_EXIST_ON(*uParam0, "bombdec"))
			{
				return 1;
			}
		}
		if (DECOR_IS_REGISTERED_AS_TYPE("bombowner", 3))
		{
			if (DECOR_EXIST_ON(*uParam0, "bombowner"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_825(bool bParam0)
{
	if (bParam0)
	{
		Global_1312451 = 1;
	}
	else
	{
		Global_1312451 = 0;
	}
}

void func_826(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!IS_BIT_SET(Global_1628955[IS_BIT_SET() /*614*/].f_1, 0))
		{
			Global_2461173 = func_528(PLAYER_ID());
			if (Global_2461173 == -1)
			{
				Global_2461173 = Global_1574647.f_4;
			}
			if (func_849(Global_2461173) == 0)
			{
				if (func_848(1) > 0)
				{
					func_847(26, -1);
				}
			}
			if (func_44())
			{
				func_819(2, 0, 1);
				func_846();
			}
			if (func_1068(0))
			{
				iVar1 = func_50(2480, -1, 0);
				CLEAR_BIT(&iVar1, 0);
				func_846();
			}
			if (func_1068(func_624(func_528(PLAYER_ID()))))
			{
				iVar1 = func_50(2480, -1, 0);
				CLEAR_BIT(&iVar1, func_624(func_528(CLEAR_BIT())));
				func_846();
			}
			if (func_845())
			{
				func_846();
			}
			SET_BIT(&(Global_1628955[SET_BIT() /*614*/].f_1), 0);
		}
	}
	else if (IS_BIT_SET(Global_1628955[IS_BIT_SET() /*614*/].f_1, 0))
	{
		if ((!func_844() && !func_843()) && !func_842())
		{
			Global_2461173 = -1;
			func_762(26, -1);
		}
		else if (func_849(Global_2461173) == 0)
		{
			iVar0 = func_829(1);
			if (iVar0 > 0)
			{
				func_827(joaat("mpply_fmevn_cheat_end"), iVar0);
				func_213(1932, 1, -1);
				func_827(joaat("mpply_activity_ended"), 1);
			}
		}
		else if (func_764(26, -1))
		{
			Global_2461173 = -1;
			func_762(26, -1);
		}
		CLEAR_BIT(&(Global_1628955[CLEAR_BIT() /*614*/].f_1), 0);
	}
}

void func_827(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_198(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_828(iParam0))
	{
		func_196(iParam0, iVar0);
	}
	else
	{
		func_200(iParam0, iVar0);
	}
}

int func_828(int iParam0)
{
	if (Global_1384128)
	{
		switch (iParam0)
		{
			case joaat("mpply_crew_0_id"):
			case joaat("mpply_crew_1_id"):
			case joaat("mpply_crew_2_id"):
			case joaat("mpply_crew_3_id"):
			case joaat("mpply_crew_4_id"):
			case joaat("mpply_crew_local_xp_0"):
			case joaat("mpply_crew_local_xp_1"):
			case joaat("mpply_crew_local_xp_2"):
			case joaat("mpply_crew_local_xp_3"):
			case joaat("mpply_crew_local_xp_4"):
			case joaat("mpply_became_cheater_num"):
			case joaat("mpply_friendly"):
			case joaat("mpply_offensive_language"):
			case joaat("mpply_griefing"):
			case joaat("mpply_helpful"):
			case joaat("mpply_offensive_tagplate"):
			case joaat("mpply_offensive_ugc"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_829(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_2460056 == 0)
	{
		return 0;
	}
	if (func_842())
	{
		if (NETWORK_IS_ACTIVITY_SESSION() || (func_841() || func_839()))
		{
			Global_2459003 = 1;
		}
	}
	Global_2460056 = 0;
	if (Global_1315700)
	{
		iVar0 = 1;
	}
	if (Global_2459003)
	{
		iVar0 = 1;
	}
	if (Global_2459002)
	{
		iVar0 = 1;
	}
	if (func_72(Global_110588.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2458925)
	{
		iVar0 = 1;
	}
	if (func_838(512))
	{
		iVar0 = 1;
	}
	if (func_837(128))
	{
		iVar0 = 1;
	}
	if (Global_1315724 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_753())
	{
		iVar0 = 0;
	}
	if (Global_2459495)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_835())
		{
			if (Global_4456448.f_156036 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_376(PLAYER_ID(), 0))
	{
		iVar0 = 0;
	}
	if (func_834())
	{
		iVar0 = 0;
	}
	if ((Global_2459003 || Global_2459002) || Global_1315700)
	{
		if (func_839())
		{
			iVar0 = 0;
		}
	}
	Global_2459495 = 0;
	Global_2459002 = 0;
	Global_2459003 = 0;
	Global_1315700 = 0;
	Global_2458925 = 0;
	func_832(&(Global_110588.f_1), 32);
	func_831(512);
	func_830(128);
	return iVar0;
}

void func_830(int iParam0)
{
	Global_110645 = (Global_110645 - (Global_110645 && iParam0));
}

void func_831(int iParam0)
{
	Global_110646 = (Global_110646 - (Global_110646 && iParam0));
}

void func_832(var uParam0, int iParam1)
{
	func_833(uParam0, iParam1);
}

void func_833(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_834()
{
	if (((Global_1574425 || Global_1574395) || func_376(PLAYER_ID(), 0)) || func_110())
	{
		return 1;
	}
	return 0;
}

int func_835()
{
	switch (func_836())
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

int func_836()
{
	return Global_2449755.f_1.f_2822;
}

bool func_837(int iParam0)
{
	return (Global_110645 && iParam0) != 0;
}

bool func_838(int iParam0)
{
	return (Global_110646 && iParam0) != 0;
}

int func_839()
{
	if (func_849(Global_2461173))
	{
		return 0;
	}
	if (func_840(PLAYER_ID(), 146))
	{
		return 1;
	}
	return 0;
}

int func_840(int iParam0, int iParam1)
{
	if (Global_1628955[iParam0 /*614*/] == iParam1)
	{
		return func_42(iParam0);
	}
	return 0;
}

int func_841()
{
	if (func_849(Global_2461173))
	{
		return 0;
	}
	if (func_42(PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

bool func_842()
{
	return IS_BIT_SET(Global_1312424, 0);
}

bool func_843()
{
	return Global_1312842;
}

bool func_844()
{
	return Global_1312873;
}

int func_845()
{
	if (Global_2437549.f_1155.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_846()
{
	if (func_845())
	{
		Global_2437549.f_1155.f_16 = 1;
	}
}

void func_847(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_52();
	}
	switch (iParam0)
	{
		case 0:
			_0x723C1CE13FBFDB67(0, iParam1);
			break;
		
		default:
			iVar1 = func_763(iParam1);
			iVar0 = GET_PROFILE_SETTING(iVar1);
			if (!IS_BIT_SET(iVar0, iParam0))
			{
				SET_BIT(&iVar0, iParam0);
				_0x723C1CE13FBFDB67(iVar0, iParam1);
			}
			break;
	}
}

int func_848(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_1315724 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_753())
	{
		iVar0 = 0;
	}
	if (iParam0 == 0)
	{
		if (!func_835())
		{
			if (Global_4456448.f_156036 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_376(PLAYER_ID(), 0))
	{
		iVar0 = 0;
	}
	if (func_834())
	{
		iVar0 = 0;
	}
	Global_2460056 = 1;
	return iVar0;
}

int func_849(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_11389)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_262145.f_11391)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_262145.f_11388)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_262145.f_11392)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_262145.f_11393)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_262145.f_11394)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_262145.f_11390)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_262145.f_11395)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_262145.f_11396)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_262145.f_11397)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_262145.f_11398)
			{
				return 1;
			}
			break;
		
		case 236:
			break;
	}
	return 0;
}

void func_850(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	SET_AUDIO_FLAG("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		SET_AUDIO_FLAG("WantedMusicDisabled", 1);
	}
	Global_2531497.f_4745 = -1;
	bVar0 = (func_144(PLAYER_ID(), 0) && func_41(PLAYER_ID()));
	if (bParam6)
	{
		func_776(func_777(iParam0), 1);
	}
	else
	{
		func_858(iParam0, -1);
		if (func_46(PLAYER_ID()))
		{
			Global_1574647.f_3 = iParam0;
		}
		else
		{
			func_857(iParam0);
		}
		Global_1574647.f_4 = -1;
		if (func_46(PLAYER_ID()))
		{
			SET_BIT(&(Global_1574647.f_1), 5);
		}
		if (((func_44() && !func_373()) || func_372(PLAYER_ID(), 21)) || func_372(PLAYER_ID(), 25))
		{
			SET_BIT(&(Global_1574647.f_1), 4);
		}
		CLEAR_BIT(&(Global_1574647.f_1), 17);
		SET_BIT(&(Global_1574647.f_1), 20);
		if (func_856(iParam0))
		{
			func_855();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_724(fParam1);
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
		if (func_854(iParam0))
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
				func_721(1);
				if (func_49(0))
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
			func_766(1);
			SET_BIT(&(Global_1574647.f_1), 12);
		}
		if (bParam5)
		{
			func_853();
			SET_BIT(&(Global_1574647.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_851(iParam0))
			{
				SET_BIT(&(Global_1574647.f_1), 21);
			}
		}
	}
	Global_2507562 = 1;
}

int func_851(int iParam0)
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
	if (func_852())
	{
		return 1;
	}
	return 0;
}

int func_852()
{
	switch (func_587())
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

void func_853()
{
	SET_BIT(&(Global_2531497.f_4736), 0);
}

int func_854(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_42(PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_855()
{
	Global_2424073[PLAYER_ID() /*421*/].f_200 = 0;
	CLEAR_BIT(&(Global_2531497.f_4561), 1);
}

int func_856(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_857(int iParam0)
{
	Global_1628955[PLAYER_ID() /*614*/] = iParam0;
}

void func_858(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_1068(0) || func_1068(func_624(iVar0)))
		{
			SET_BIT(&(Global_1628955[SET_BIT() /*614*/].f_1), 2);
		}
		else
		{
			CLEAR_BIT(&(Global_1628955[CLEAR_BIT() /*614*/].f_1), 2);
		}
	}
}

void func_859(bool bParam0)
{
	if (bParam0)
	{
		if (!func_40(PLAYER_ID(), 9))
		{
			if (func_38(PLAYER_ID()) != 0)
			{
				func_369(9);
			}
		}
	}
	else if (func_40(PLAYER_ID(), 9))
	{
		func_371(9);
	}
}

void func_860(int iParam0)
{
	if (!func_45(PLAYER_ID()))
	{
		if (iParam0 || func_38(PLAYER_ID()) != 0)
		{
			func_369(20);
			func_861(func_863());
			if (func_47(PLAYER_ID()))
			{
				if (!IS_BIT_SET(Global_1628955[IS_BIT_SET() /*614*/].f_1, 8))
				{
					SET_BIT(&(Global_1628955[SET_BIT() /*614*/].f_1), 8);
				}
			}
		}
	}
}

void func_861(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_862() /*10828*/].f_6168.f_4015[iVar0 /*3*/] == iParam0)
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

int func_862()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_863()
{
	int iVar0;
	
	iVar0 = func_145(PLAYER_ID());
	if (func_865(iVar0) == 0)
	{
		return -1;
	}
	if (func_156(iVar0))
	{
		return 65;
	}
	if (func_161(iVar0))
	{
		return 66;
	}
	if (func_864(iVar0))
	{
		return 63;
	}
	return 64;
}

int func_864(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return 0;
}

int func_865(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

struct<4> func_866()
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_START2", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_START2", 16);
			break;
	}
	return Var0;
}

struct<4> func_867()
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_MPLAY", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_MPLAY", 16);
			break;
	}
	return Var0;
}

struct<4> func_868()
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_QSTART", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_QSTART", 16);
			break;
	}
	return Var0;
}

void func_869()
{
	SET_MAX_WANTED_LEVEL(5);
	func_719();
	SET_WANTED_LEVEL_MULTIPLIER(1f);
	CLEAR_BIT(&(Global_1574647.f_1), 8);
	func_870();
}

void func_870()
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

void func_871()
{
	DISABLE_CONTROL_ACTION(0, 69, 1);
	DISABLE_CONTROL_ACTION(0, 70, 1);
	DISABLE_CONTROL_ACTION(0, 68, 1);
	DISABLE_CONTROL_ACTION(0, 114, 1);
	DISABLE_CONTROL_ACTION(0, 115, 1);
	DISABLE_CONTROL_ACTION(0, 116, 1);
	DISABLE_CONTROL_ACTION(0, 91, 1);
	DISABLE_CONTROL_ACTION(0, 92, 1);
	DISABLE_CONTROL_ACTION(0, 24, 1);
	DISABLE_CONTROL_ACTION(0, 257, 1);
	DISABLE_CONTROL_ACTION(0, 37, 1);
	if (Local_112.f_197 != 2)
	{
		DISABLE_CONTROL_ACTION(0, 99, 1);
		DISABLE_CONTROL_ACTION(0, 100, 1);
	}
}

void func_872(bool bParam0)
{
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_44())
		{
			if (func_1276(PLAYER_ID(), 1, 0))
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
			if (func_1276(PLAYER_ID(), 1, 1))
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

char* func_873()
{
	char* sVar0;
	
	switch (Local_112.f_197)
	{
		case 0:
			sVar0 = "PEN_VALVEH";
			break;
		
		case 2:
			sVar0 = "CAG_VEH";
			break;
	}
	return sVar0;
}

struct<4> func_874()
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_NDRV", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_NDRV", 16);
			break;
	}
	return Var0;
}

char* func_875()
{
	char* sVar0;
	
	switch (Local_112.f_197)
	{
		case 0:
			sVar0 = "PEN_VEH";
			break;
		
		case 2:
			sVar0 = "CAG_VEH";
			break;
	}
	return sVar0;
}

int func_876(int iParam0)
{
	int iVar0;
	
	if (DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECOR_GET_INT(iParam0, "MPBitset");
		}
		if (IS_BIT_SET(iVar0, 10))
		{
			return 0;
		}
	}
	return 1;
}

int func_877(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	if ((((iParam0 == joaat("rhino") || iParam0 == joaat("dump")) || iParam0 == joaat("limo2")) || iParam0 == -286046740) || iParam0 == -1254331310)
	{
		iVar0 = 0;
	}
	switch (Local_112.f_197)
	{
		case 0:
			break;
		
		case 2:
			if (((!IS_THIS_MODEL_A_BIKE(iParam0) && !IS_THIS_MODEL_A_BIKE(iParam0)) && !func_878(iParam0)) || IS_THIS_MODEL_A_BIKE(iParam0))
			{
				iVar0 = 0;
			}
			break;
	}
	if (Global_1574647.f_12 != 0 && iParam0 == Global_1574647.f_12)
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_878(int iParam0)
{
	switch (iParam0)
	{
		case joaat("chimera"):
			return 1;
		
		default:
	}
	return 0;
}

void func_879(bool bParam0)
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

struct<4> func_880()
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_REGS", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_REGS", 16);
			break;
	}
	return Var0;
}

void func_881()
{
	if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_WANTED_LEVEL()) == 0)
	{
		SET_WANTED_LEVEL_MULTIPLIER(0f);
		SET_MAX_WANTED_LEVEL(0);
		SET_PLAYER_WANTED_LEVEL(SET_PLAYER_WANTED_LEVEL(), 0, 0);
		SET_PLAYER_WANTED_LEVEL_NOW(SET_PLAYER_WANTED_LEVEL_NOW(), 0);
		SET_BIT(&(Global_1574647.f_1), 8);
	}
}

int func_882(bool bParam0)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (Local_112.f_197 == 2)
	{
		if (func_38(PLAYER_ID()) < 2)
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (!IS_PED_INJURED(IS_PED_INJURED()))
		{
			vVar1 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true) };
			vVar2 = { func_491() };
			fVar0 = GET_DISTANCE_BETWEEN_COORDS(vVar1, vVar2, false);
			fVar3 = (func_492() / 2f);
			if (fVar0 <= fVar3)
			{
				if (ABSF((vVar2.z - vVar1.z)) <= fVar3)
				{
					return 1;
				}
			}
		}
	}
	else if (!IS_PED_INJURED(IS_PED_INJURED()))
	{
		if (fLocal_140 < 10f)
		{
			vVar1 = { GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true) };
			fVar0 = GET_DISTANCE_BETWEEN_COORDS(vVar1, vLocal_137, false);
			if (fVar0 <= fLocal_140)
			{
				if (ABSF((vLocal_137.z - vVar1.z)) <= 10f)
				{
					return 1;
				}
			}
		}
		else
		{
			fVar0 = func_440(PLAYER_PED_ID(), vLocal_137, 1);
			if (fVar0 <= fLocal_140)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_883(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		_SET_NOTIFICATION_COLOR_NEXT(iParam2);
	}
	ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam1);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 0, false, iParam3);
}

char* func_884()
{
	char* sVar0;
	
	switch (Local_112.f_197)
	{
		case 0:
			sVar0 = "PEN_START";
			break;
		
		case 2:
			sVar0 = "CAG_STARC";
			break;
	}
	return sVar0;
}

int func_885()
{
	if (Local_112.f_197 != 2)
	{
		return 1;
	}
	else if (func_908())
	{
		return 1;
	}
	else if (func_38(PLAYER_ID()) >= 2)
	{
		return 1;
	}
	return 0;
}

void func_886(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1628955[PLAYER_ID() /*614*/].f_11.f_33 != iParam0)
	{
		func_900(-1);
		Global_1628955[PLAYER_ID() /*614*/].f_11.f_33 = iParam0;
		if (func_899() != -1)
		{
			func_898(-1);
		}
		if (func_897() != -1)
		{
			func_896(-1);
		}
		func_895(iParam2);
		func_893(iParam0);
		if (!func_729(iParam0))
		{
			fVar0 = func_728(iParam0);
			if (fVar0 != 1f)
			{
				func_724(fVar0);
				SET_BIT(&(Global_1674852.f_3), 1);
			}
		}
		if (!func_732(iParam0) || iParam3)
		{
			if (func_730(iParam0, iParam2) && iParam3 == 1)
			{
				SET_MAX_WANTED_LEVEL(0);
				if (!IS_PED_INJURED(IS_PED_INJURED()))
				{
					SET_PLAYER_WANTED_LEVEL(SET_PLAYER_WANTED_LEVEL(), 0, 0);
					SET_PLAYER_WANTED_LEVEL_NOW(SET_PLAYER_WANTED_LEVEL_NOW(), 0);
				}
				SET_BIT(&(Global_1674852.f_3), 0);
			}
			else if (GET_MAX_WANTED_LEVEL() < 5)
			{
				SET_WANTED_LEVEL_MULTIPLIER(1f);
				SET_MAX_WANTED_LEVEL(5);
			}
		}
		if (func_44())
		{
			func_369(27);
		}
		if (bParam1)
		{
			if (!func_368())
			{
				func_721(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((IS_BIT_SET(Global_2531497.f_4555, 1) || IS_BIT_SET(Global_2531497.f_4555, 4)) || IS_BIT_SET(Global_2531497.f_4555, 0))
			{
				func_241(6);
			}
			func_892();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			ENABLE_DISPATCH_SERVICE(3, false);
			ENABLE_DISPATCH_SERVICE(5, false);
		}
		if (func_47(PLAYER_ID()) && func_41(PLAYER_ID()))
		{
			SET_BIT(&(Global_1628955[SET_BIT() /*614*/].f_1), 8);
		}
		func_888();
		if (func_887(iParam0))
		{
			ENABLE_DISPATCH_SERVICE(3, false);
			ENABLE_DISPATCH_SERVICE(5, false);
			SET_BIT(&(Global_1674852.f_3), 6);
		}
		Global_2531497.f_6307 = 0;
	}
}

int func_887(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

void func_888()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	bVar3 = func_891();
	iVar2 = func_119(PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (func_246(iVar1, iVar2, 1) || func_889(iVar1, PLAYER_ID()))
			{
				0x55FCC0C390620314(0x55FCC0C390620314(), iVar1, bVar3);
				0x55FCC0C390620314(iVar1, 0x55FCC0C390620314(), bVar3);
			}
		}
		iVar0++;
	}
}

int func_889(int iParam0, int iParam1)
{
	if (func_131(iParam0, 1) && func_131(iParam1, 1))
	{
		return (func_890(iParam0) == func_119(iParam1) || func_890(iParam1) == func_119(iParam0));
	}
	return 0;
}

int func_890(int iParam0)
{
	if (func_131(iParam0, 1))
	{
		return Global_1628955[func_119(iParam0) /*614*/].f_11.f_484;
	}
	return func_398();
}

int func_891()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_181();
	if (iVar0 != func_398())
	{
		if (func_1276(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return IS_BIT_SET(Global_1628955[iVar1 /*614*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_892()
{
	if (IS_BIT_SET(Global_2531497.f_4555, 1))
	{
		CLEAR_BIT(&(Global_2531497.f_4555), 1);
	}
	if (IS_BIT_SET(Global_2531497.f_4555, 4))
	{
		CLEAR_BIT(&(Global_2531497.f_4555), 4);
	}
	if (IS_BIT_SET(Global_2531497.f_4555, 6))
	{
		CLEAR_BIT(&(Global_2531497.f_4555), 6);
	}
	CLEAR_BIT(&(Global_2531497.f_4555), 0);
	CLEAR_BIT(&(Global_2531497.f_4555), 2);
	Global_1590446[PLAYER_ID() /*871*/].f_746 = 0;
	if (Global_2531497.f_4557 > 0)
	{
		SET_MAX_WANTED_LEVEL(Global_2531497.f_4557);
	}
	Global_2531497.f_4556 = 0;
}

void func_893(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_50(3791, -1, 0);
	iVar1 = func_894(iParam0);
	if (iVar1 != -1)
	{
		SET_BIT(&iVar0, iVar1);
		func_159(3791, iVar0, -1, 1, 0);
	}
}

int func_894(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		case 214:
			return 5;
		
		case 215:
			return 6;
		
		case 216:
			return 7;
		
		case 217:
			return 8;
		
		case 218:
			return 9;
		
		case 219:
			return 10;
		
		case 220:
			return 11;
		
		case 221:
			return 12;
		
		default:
	}
	return -1;
}

void func_895(int iParam0)
{
	int iVar0;
	
	iVar0 = PLAYER_ID();
	if (Global_1628955[iVar0 /*614*/].f_11.f_181 != iParam0)
	{
		Global_1628955[iVar0 /*614*/].f_11.f_181 = iParam0;
	}
}

void func_896(int iParam0)
{
	if (Global_2531497.f_4898.f_338 != iParam0)
	{
		Global_2531497.f_4898.f_338 = iParam0;
	}
}

int func_897()
{
	return Global_2531497.f_4898.f_338;
}

void func_898(int iParam0)
{
	if (Global_2531497.f_4898.f_337 != iParam0)
	{
		Global_2531497.f_4898.f_337 = iParam0;
	}
}

int func_899()
{
	return Global_2531497.f_4898.f_337;
}

void func_900(int iParam0)
{
	Global_1628955[PLAYER_ID() /*614*/].f_11.f_32 = iParam0;
}

void func_901()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!IS_BIT_SET(iLocal_115, 9))
	{
		if (IS_BIT_SET(Local_112.f_1, 4))
		{
			SET_BIT(&iLocal_115, 9);
		}
	}
	if (Local_112 != 4)
	{
		iVar0 = 0;
		while (iVar0 < _NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			if (NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(iVar0)))
			{
				iVar4 = NETWORK_GET_PLAYER_INDEX(NETWORK_GET_PLAYER_INDEX(iVar0));
				iVar5 = GET_PLAYER_PED(iVar4);
				if (!func_376(iVar4, 0))
				{
					if (Local_113[iVar0 /*8*/].f_7 == 0)
					{
						if (iVar0 != PARTICIPANT_ID_TO_INT())
						{
							if (IS_BIT_SET(Local_113[iVar0 /*8*/].f_1, 0))
							{
								iVar1++;
							}
						}
						if (!func_46(iVar4))
						{
							iVar2++;
						}
					}
					if (!IS_BIT_SET(iLocal_115, 10))
					{
						if (!IS_BIT_SET(iLocal_115, 9))
						{
							if (IS_BIT_SET(Local_113[iVar0 /*8*/].f_1, 3))
							{
								SET_BIT(&iLocal_115, 9);
							}
						}
					}
					if (iVar0 != PARTICIPANT_ID_TO_INT())
					{
						if (Local_112.f_197 == 0 || Local_112.f_197 == 2)
						{
							if (!IS_BIT_SET(iLocal_1309, iVar0))
							{
								0x13F1FCB111B820B0(iVar4, 0);
								SET_BIT(&iLocal_1309, iVar0);
							}
						}
						if (Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_7 == 2)
						{
							if (Local_113[iVar0 /*8*/].f_7 == 2)
							{
								if (!IS_PED_INJURED(IS_PED_INJURED()))
								{
									if (!IS_BIT_SET(Local_113[iVar0 /*8*/].f_1, 6) && !func_907(IS_BIT_SET(), iVar5))
									{
										if (!IS_BIT_SET(iLocal_118, iVar0))
										{
											if (!IS_BIT_SET(Local_113[iVar0 /*8*/].f_1, 1))
											{
												SET_BIT(&iLocal_118, iVar0);
												func_905(iVar4, 441, 1, 0);
												if (Local_112.f_197 == 2)
												{
													func_902(iVar4, 1, 1, 0);
												}
											}
										}
										else if (IS_BIT_SET(Local_113[iVar0 /*8*/].f_1, 1))
										{
											CLEAR_BIT(&iLocal_118, iVar0);
											func_905(iVar4, 441, 0, 0);
											if (Local_112.f_197 == 2)
											{
												func_902(iVar4, 1, 0, 0);
											}
										}
									}
								}
							}
							else if (IS_BIT_SET(iLocal_118, iVar0))
							{
								CLEAR_BIT(&iLocal_118, iVar0);
								func_905(iVar4, 441, 0, 0);
								if (Local_112.f_197 == 2)
								{
									func_902(iVar4, 1, 0, 0);
								}
							}
						}
						else if (IS_BIT_SET(iLocal_118, iVar0))
						{
							CLEAR_BIT(&iLocal_118, iVar0);
							func_905(iVar4, 441, 0, 0);
							if (Local_112.f_197 == 2)
							{
								func_902(iVar4, 1, 0, 0);
							}
						}
						if (Local_113[PARTICIPANT_ID_TO_INT() /*8*/].f_7 > 0)
						{
							if (!IS_BIT_SET(iLocal_119, iVar0) && !IS_BIT_SET(Local_112.f_1, 3))
							{
								if (IS_BIT_SET(Local_113[iVar0 /*8*/].f_1, 9))
								{
									_DYNAMIC_MIXER_RELATED_FN(iVar5, "MP_Penned_In_Vehicles_In_Bubble_Group", 0f);
									SET_BIT(&iLocal_119, iVar0);
									if (IS_PED_IN_ANY_VEHICLE(iVar5, 0))
									{
										iVar3 = GET_VEHICLE_PED_IS_IN(iVar5, 0);
										_DYNAMIC_MIXER_RELATED_FN(iVar3, "MP_Penned_In_Vehicles_In_Bubble_Group", 0f);
									}
								}
							}
							else if (!IS_BIT_SET(Local_113[iVar0 /*8*/].f_1, 9) || IS_BIT_SET(Local_112.f_1, 3))
							{
								_0x18EB48CFC41F2EA0(iVar5, 0f);
								CLEAR_BIT(&iLocal_119, iVar0);
								if (IS_PED_IN_ANY_VEHICLE(iVar5, 0))
								{
									iVar3 = GET_VEHICLE_PED_IS_IN(iVar5, 0);
									_0x18EB48CFC41F2EA0(iVar3, 0f);
								}
							}
						}
						if (Local_112.f_197 == 0 || Local_112.f_197 == 2)
						{
							if (!IS_PED_INJURED(IS_PED_INJURED()))
							{
								if (!IS_PED_INJURED(iVar5))
								{
									if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 8))
									{
										if (!IS_BIT_SET(iLocal_120, iVar0))
										{
											if (!IS_BIT_SET(Local_113[iVar0 /*8*/].f_1, 8))
											{
												if (!func_907(PLAYER_PED_ID(), iVar5))
												{
													if (!IS_BIT_SET(Local_113[iVar0 /*8*/].f_1, 11))
													{
														SET_BIT(&iLocal_120, iVar0);
														SET_BIT(&iLocal_121, iVar4);
														0x13F1FCB111B820B0(iVar4, 1);
													}
												}
											}
										}
										else if (IS_BIT_SET(Local_113[iVar0 /*8*/].f_1, 8))
										{
											CLEAR_BIT(&iLocal_120, iVar0);
											CLEAR_BIT(&iLocal_121, iVar4);
											0x13F1FCB111B820B0(iVar4, 0);
										}
										else if (IS_BIT_SET(Local_113[iVar0 /*8*/].f_1, 11))
										{
											CLEAR_BIT(&iLocal_120, iVar0);
											CLEAR_BIT(&iLocal_121, iVar4);
											0x13F1FCB111B820B0(iVar4, 0);
										}
										else if (func_907(PLAYER_PED_ID(), iVar5))
										{
											CLEAR_BIT(&iLocal_120, iVar0);
											CLEAR_BIT(&iLocal_121, iVar4);
											0x13F1FCB111B820B0(iVar4, 0);
										}
									}
									else if (IS_BIT_SET(iLocal_120, iVar0))
									{
										0x13F1FCB111B820B0(iVar4, 0);
										CLEAR_BIT(&iLocal_120, iVar0);
										CLEAR_BIT(&iLocal_121, iVar4);
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (iLocal_589 != iVar1)
		{
			iLocal_589 = iVar1;
		}
		if (iLocal_1308 != iVar2)
		{
			iLocal_1308 = iVar2;
		}
	}
}

void func_902(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_904(iParam0))
	{
		return;
	}
	if (func_903(&(Global_2416074.f_619[iParam0]), &(Global_2416074.f_982[iParam0]), &(Global_2416074.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416074.f_454[iParam0] = iParam1;
		}
	}
}

int func_903(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
{
	if (bParam5)
	{
		if (!IS_THREAD_ACTIVE(*uParam1) || *uParam1 == IS_THREAD_ACTIVE())
		{
			*uParam1 = GET_ID_OF_THIS_THREAD();
			*uParam0 = GET_ID_OF_THIS_THREAD();
		}
	}
	if (!IS_THREAD_ACTIVE(*uParam0) || *uParam0 == IS_THREAD_ACTIVE())
	{
		if (bParam3)
		{
			if (!IS_BIT_SET(*iParam2, iParam4))
			{
				*uParam6 = 1;
				SET_BIT(iParam2, iParam4);
			}
			*uParam0 = GET_ID_OF_THIS_THREAD();
		}
		else
		{
			if (IS_BIT_SET(*iParam2, iParam4))
			{
				*uParam6 = 1;
				CLEAR_BIT(iParam2, iParam4);
			}
			if (*uParam1 == GET_ID_OF_THIS_THREAD())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (IS_THREAD_ACTIVE(*uParam1) && !*uParam1 == IS_THREAD_ACTIVE())
	{
	}
	return 0;
}

int func_904(int iParam0)
{
	if (iParam0 == func_398())
	{
		return 1;
	}
	if (GET_HASH_KEY(GET_HASH_KEY()) == func_725())
	{
		return 1;
	}
	return 0;
}

void func_905(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_904(iParam0))
	{
		return;
	}
	if (func_903(&(Global_2416074.f_586[iParam0]), &(Global_2416074.f_949[iParam0]), &(Global_2416074.f_388), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2416074.f_421[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_906();
		}
	}
}

void func_906()
{
	Global_2416074.f_1515 = 1;
}

bool func_907(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (!IS_PED_IN_ANY_VEHICLE(iParam0, 0) || !IS_PED_IN_ANY_VEHICLE(iParam1, 0))
	{
		return 0;
	}
	return GET_VEHICLE_PED_IS_IN(iParam0, 0) == GET_VEHICLE_PED_IS_IN(iParam1, 0);
}

int func_908()
{
	if (func_131(PLAYER_ID(), 1))
	{
		if (PLAYER_ID() == func_393())
		{
			return 1;
		}
		else if (func_909(PLAYER_ID(), func_393(), 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_909(int iParam0, int iParam1, bool bParam2)
{
	return func_910(iParam0, iParam1, bParam2, 1);
}

int func_910(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam1 != func_398() && iParam0 != func_398())
	{
		if (!bParam2)
		{
			if (func_912(iParam0, iParam1, iParam3))
			{
				return 0;
			}
		}
		if (Global_1628955[iParam0 /*614*/].f_11 != func_398())
		{
			if (iParam1 == Global_1628955[iParam0 /*614*/].f_11)
			{
				return func_911(iParam1, iParam3);
			}
		}
	}
	return 0;
}

int func_911(int iParam0, int iParam1)
{
	if (func_132(iParam0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_450 == iParam1;
	}
	return 0;
}

int func_912(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_398())
	{
		if (iParam0 != func_398())
		{
			if (Global_1628955[iParam0 /*614*/].f_11 != func_398())
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

void func_913(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (bParam5)
	{
		iVar0 = func_528(PLAYER_ID());
		Global_1675140 = iVar0;
		Global_1675140.f_1 = iParam0;
		if (func_181() != func_398())
		{
			Global_1675140.f_2 = func_995(func_181());
			Global_1675140.f_3 = func_994(func_181());
		}
		if (func_248() != func_398())
		{
			func_180(func_248(), &(Global_1675140.f_2), &(Global_1675140.f_3));
		}
		Global_1675140.f_7 = 0xF12E6CD06C73D69E();
		Global_1675140.f_28 = func_993(PLAYER_ID());
		Global_1675140.f_13 = 0;
		Global_1675140.f_14 = 0;
		if (func_131(PLAYER_ID(), 1))
		{
			Global_1675140.f_23 = func_992(func_234(1));
		}
	}
	else
	{
		iVar0 = func_145(PLAYER_ID());
	}
	if (bParam2 || func_152(iVar0))
	{
		if (iParam3 != -1 && bParam2)
		{
			iVar0 = iParam3;
		}
		Global_1674879 = iVar0;
		if (func_161(iVar0))
		{
			Global_1674879.f_1 = 4;
		}
		else if (func_991(iVar0))
		{
			Global_1674879.f_1 = 5;
		}
		else if (func_155(iVar0, 0))
		{
			Global_1674879.f_1 = 2;
			if (func_154(iVar0))
			{
				Global_1674879.f_1 = 3;
			}
		}
		else
		{
			Global_1674879.f_1 = 1;
		}
		if (func_181() != func_398())
		{
			Global_1674879.f_4 = func_995(func_181());
			Global_1674879.f_5 = func_994(func_181());
		}
		if (func_248() != func_398())
		{
			func_180(func_248(), &(Global_1674879.f_6), &(Global_1674879.f_7));
		}
		Global_1674879.f_9 = 0xF12E6CD06C73D69E();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1674879.f_27 = 1;
			Global_1674879.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1674879.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1674879.f_40 = func_176(iParam1);
			Global_1674879.f_41 = func_990();
			Global_1674879.f_42 = func_302(PLAYER_ID(), iParam1);
			Global_1674879.f_44 = func_989(PLAYER_ID(), iParam1);
		}
		if (!func_175() || iVar0 != 192)
		{
			Global_1674879.f_53 = 0;
		}
	}
	else if (func_150(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1674996 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1674996 = iParam0 + 1;
		}
		else
		{
			Global_1674996 = func_988(PLAYER_ID());
		}
		switch (iVar0)
		{
			case 225:
				if (func_143(PLAYER_ID()) == 0)
				{
					Global_1674996.f_1 = 0;
				}
				else
				{
					Global_1674996.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1674996.f_1 = 2;
				break;
			
			case 227:
				Global_1674996.f_1 = 3;
				break;
		}
		Global_1674996.f_21 = 1;
		Global_1674996.f_22 = 1;
		if (func_181() != func_398())
		{
			Global_1674996.f_4 = func_995(func_181());
			Global_1674996.f_5 = func_994(func_181());
		}
		if (func_248() != func_398())
		{
			func_180(func_248(), &(Global_1674996.f_4), &(Global_1674996.f_5));
		}
		Global_1674996.f_8 = 0xF12E6CD06C73D69E();
		if (iParam0 != -1)
		{
			Global_1674996.f_20 = iParam0;
		}
	}
	else if (func_151(iVar0))
	{
		if (iParam3 != -1 && bParam2)
		{
		}
		Global_1674933 = iVar0;
		Global_1674879.f_1 = 1;
		if (func_181() != func_398())
		{
			Global_1674933.f_4 = func_995(func_181());
			Global_1674933.f_5 = func_994(func_181());
		}
		if (func_248() != func_398())
		{
			func_180(func_248(), &(Global_1674933.f_6), &(Global_1674933.f_7));
		}
		Global_1674933.f_9 = 0xF12E6CD06C73D69E();
		if (iParam0 != -1)
		{
			Global_1674933.f_21 = iParam0;
		}
	}
	else if (func_149(iVar0))
	{
		Global_1675040 = iVar0;
		Global_1675040.f_1 = iParam0;
		Global_1675040.f_21 = 1;
		Global_1675040.f_22 = 1;
		if (func_181() != func_398())
		{
			Global_1675040.f_4 = func_995(func_181());
			Global_1675040.f_5 = func_994(func_181());
		}
		if (func_248() != func_398())
		{
			func_180(func_248(), &(Global_1675040.f_4), &(Global_1675040.f_5));
		}
		Global_1675040.f_8 = 0xF12E6CD06C73D69E();
		if (iParam0 != -1)
		{
			Global_1675040.f_20 = iParam0;
		}
		Global_1675040.f_27 = func_986(func_52(), 5);
		Global_1675040.f_28 = func_992(func_279(PLAYER_ID()));
		Global_1675040.f_29 = func_50(6107, -1, 0);
		Global_1675040.f_30 = func_50(6103, -1, 0);
		Global_1675040.f_31 = func_50(6104, -1, 0);
		Global_1675040.f_32 = func_50(6106, -1, 0);
		Global_1675040.f_33 = func_50(6105, -1, 0);
		Global_1675040.f_34 = func_50(6108, -1, 0);
		Global_1675040.f_7 = func_984();
		Global_1675040.f_51 = func_992(bParam4);
	}
	else if (func_148(iVar0))
	{
		Global_1675094 = iVar0;
		Global_1675094.f_1 = iParam0;
		Global_1675094.f_21 = 1;
		Global_1675094.f_22 = 1;
		if (func_181() != func_398())
		{
			Global_1675094.f_4 = func_995(func_181());
			Global_1675094.f_5 = func_994(func_181());
		}
		if (func_248() != func_398())
		{
			func_180(func_248(), &(Global_1675094.f_4), &(Global_1675094.f_5));
		}
		Global_1675094.f_8 = 0xF12E6CD06C73D69E();
		if (iParam0 != -1)
		{
			Global_1675094.f_20 = iParam0;
		}
		Global_1675094.f_24 = func_50(6157, -1, 0);
		Global_1675094.f_25 = func_50(6162, -1, 0);
		Global_1675094.f_26 = func_50(6163, -1, 0);
		Global_1675094.f_27 = func_992((((func_983() || func_982()) || func_981()) || func_980(PLAYER_ID())));
		Global_1675094.f_28 = func_50(6164, -1, 0);
		Global_1675094.f_29 = func_992(func_979());
		Global_1675094.f_31 = 0;
		Global_1675094.f_30 = 0;
		Global_1675094.f_32 = 0;
		Global_1675094.f_33 = 0;
		Global_1675094.f_34 = 0;
		Global_1675094.f_16 = 0;
		Global_1675094.f_7 = func_984();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_141(func_142(PLAYER_ID()))))
	{
		Global_1675228 = iVar0;
		Global_1675228.f_1 = iParam0;
		Global_1675228.f_21 = 1;
		Global_1675228.f_22 = 1;
		Global_1675228.f_7 = func_984();
		if (func_181() != func_398())
		{
			Global_1675228.f_4 = func_995(func_181());
			Global_1675228.f_5 = func_994(func_181());
		}
		if (func_248() != func_398())
		{
			func_180(func_248(), &(Global_1675228.f_4), &(Global_1675228.f_5));
		}
		if (func_181() != -1)
		{
			Global_1675228.f_17 = func_775(func_181());
		}
		Global_1675228.f_8 = 0xF12E6CD06C73D69E();
		Global_1675228.f_28 = func_993(PLAYER_ID());
		Global_1675228.f_16 = 0;
		Global_1675228.f_24 = 0;
		Global_1675228.f_23 = 0;
		if (func_131(PLAYER_ID(), 1))
		{
			Global_1675228.f_33 = func_992(func_234(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_1675175 = iVar0;
		Global_1675175.f_1 = iParam0;
		Global_1675175.f_21 = 1;
		Global_1675175.f_22 = 1;
		Global_1675175.f_7 = func_984();
		Global_1675175.f_24 = 0;
		Global_1675175.f_23 = 0;
		Global_1675175.f_16 = 0;
		if (func_181() != func_398())
		{
			Global_1675175.f_4 = func_995(func_181());
			Global_1675175.f_5 = func_994(func_181());
		}
		Global_1675175.f_28 = func_993(PLAYER_ID());
		if (Global_1675175.f_28)
		{
			Global_1675175.f_29 = func_978(PLAYER_ID());
		}
		else
		{
			Global_1675175.f_29 = 0;
		}
		Global_1675175.f_30 = func_962(PLAYER_ID(), 4, -1);
		Global_1675175.f_31 = func_961(PLAYER_ID());
		Global_1675175.f_32 = func_992(func_960(PLAYER_ID()));
		Global_1675175.f_33 = func_992(func_959(PLAYER_ID()));
		Global_1675175.f_34 = func_992(func_958(PLAYER_ID()));
		Global_1675175.f_35 = func_992(func_957(PLAYER_ID()));
		Global_1675175.f_36 = func_956(PLAYER_ID());
		Global_1675175.f_37 = func_955(PLAYER_ID());
		Global_1675175.f_39 = func_954(PLAYER_ID());
		if (func_131(PLAYER_ID(), 1))
		{
			Global_1675175.f_41 = func_992(func_234(1));
		}
		if (func_248() != func_398())
		{
			func_180(func_248(), &(Global_1675175.f_4), &(Global_1675175.f_5));
		}
		Global_1675175.f_8 = 0xF12E6CD06C73D69E();
		Global_1675175.f_28 = func_993(PLAYER_ID());
	}
	else if (func_139(iVar0))
	{
		Global_1675312 = iVar0;
		Global_1675312.f_1 = func_143(PLAYER_ID());
		Global_1675312.f_2 = func_953();
		Global_1675312.f_3 = func_952();
		Global_1675312.f_4 = func_995(func_181());
		Global_1675312.f_5 = func_994(func_181());
		Global_1675312.f_7 = func_984();
		Global_1675312.f_8 = 0xF12E6CD06C73D69E();
		if (func_181() != -1)
		{
			Global_1675312.f_17 = func_775(func_181());
		}
		Global_1675312.f_21 = 1;
		Global_1675312.f_22 = 1;
		Global_1675312.f_25 = iParam0;
		Global_1675312.f_27 = func_992(func_951(PLAYER_ID()));
		Global_1675312.f_28 = func_949(21, -1);
	}
	else if (func_138(iVar0))
	{
		Global_1675387 = Global_786547.f_1;
		Global_1675387.f_2 = Global_786547;
		Global_1675387.f_6 = func_995(func_181());
		Global_1675387.f_7 = func_994(func_181());
		if (func_131(PLAYER_ID(), 1))
		{
			Global_1675387.f_8 = func_992(func_234(1));
		}
		if (func_181() != -1)
		{
			Global_1675387.f_9 = func_775(func_181());
		}
		Global_1675387.f_10 = func_984();
		Global_1675387.f_19 = 1;
		Global_1675387.f_20 = 1;
		Global_1675387.f_21 = 0;
		Global_1675387.f_22 = 0;
		Global_1675387.f_23 = 0;
		Global_1703065 = 0xF12E6CD06C73D69E();
	}
	else
	{
		if (func_181() != func_398())
		{
			Global_1674861 = func_995(func_181());
			Global_1674861.f_1 = func_994(func_181());
		}
		Global_1674861.f_5 = 0xF12E6CD06C73D69E();
		Global_1674861.f_13 = func_948();
		Global_1674861.f_15 = 0;
		if (func_179(1))
		{
			if (func_248() == func_181())
			{
				Global_1674861.f_15 = 1;
			}
		}
		if (func_947())
		{
			Global_1674996.f_28 = 1;
		}
		if (((((func_946() || func_945()) || func_944()) || func_943()) || func_942()) || func_941(PLAYER_ID()))
		{
			Global_1674996.f_30 = 1;
		}
		if (func_939(func_940(-1881846085)))
		{
			Global_1674996.f_32 = 1;
		}
		if (func_922(func_938(joaat("caddy"))))
		{
			Global_1674996.f_31 = 1;
		}
		if (func_921(PLAYER_ID()) || func_920(PLAYER_ID()))
		{
			Global_1674996.f_29 = 1;
		}
		if (func_919(PLAYER_ID()))
		{
			Global_1674996.f_33 = 1;
			Global_1674996.f_34 = 1;
		}
		if (func_918(PLAYER_ID()))
		{
			Global_1674996.f_36 = 1;
		}
		if (func_917(0, PLAYER_ID()) == 1)
		{
			Global_1674996.f_35 = 1;
		}
		if (func_916(PLAYER_ID(), 3, &uVar1))
		{
			Global_1674996.f_37 = 1;
		}
		if (func_916(PLAYER_ID(), 7, &uVar1))
		{
			Global_1674996.f_38 = 1;
		}
		if (func_915(PLAYER_ID()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_914(PLAYER_ID(), iVar2);
				if (func_299(PLAYER_ID(), iVar3, 0))
				{
					Global_1674996.f_39 = 1;
				}
				if (func_299(PLAYER_ID(), iVar3, 2))
				{
					Global_1674996.f_40 = 1;
				}
				if (func_299(PLAYER_ID(), iVar3, 1))
				{
					Global_1674996.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_914(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_398())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_294(Global_1590446[iParam0 /*871*/].f_273.f_179[iParam1 /*12*/]))
	{
		uVar0 = Global_1590446[iParam0 /*871*/].f_273.f_179[iParam1 /*12*/];
	}
	return uVar0;
}

int func_915(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_398())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_916(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 != func_398())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_917(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_917(int iParam0, int iParam1)
{
	if (iParam1 == func_398())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 0))
			{
				return 3;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 3))
			{
				return 2;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 6))
			{
				return 4;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 9))
			{
				return 1;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 12))
			{
				return 7;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 15))
			{
				return 5;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 18))
			{
				return 6;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 21))
			{
				return 0;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 1))
			{
				return 3;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 4))
			{
				return 2;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 7))
			{
				return 4;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 10))
			{
				return 1;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 13))
			{
				return 7;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 16))
			{
				return 5;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 19))
			{
				return 6;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 22))
			{
				return 0;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 2))
			{
				return 3;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 5))
			{
				return 2;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 8))
			{
				return 4;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 11))
			{
				return 1;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 14))
			{
				return 7;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 17))
			{
				return 5;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 20))
			{
				return 6;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 23))
			{
				return 0;
			}
			else if (IS_BIT_SET(Global_1590446[iParam1 /*871*/].f_273.f_255, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

bool func_918(int iParam0)
{
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 7);
}

bool func_919(int iParam0)
{
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 8);
}

bool func_920(int iParam0)
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 11);
}

bool func_921(int iParam0)
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 10);
}

int func_922(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_949(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_936(11));
		func_935(iVar1, &iVar0, 1);
		iVar2 = func_949(func_924(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_50(func_923(4, iVar0), -1, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_923(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1795;
				
				case 15:
					return 1802;
				
				case 16:
					return 1809;
				
				case 17:
					return 1816;
				
				case 18:
					return 1823;
				
				case 19:
					return 1830;
				
				case 20:
					return 1837;
				
				case 21:
					return 1844;
				
				case 22:
					return 1851;
				
				case 23:
					return 1858;
				
				case 24:
					return 1864;
				
				case 25:
					return 1870;
				
				case 26:
					return 2165;
				
				case 27:
					return 2172;
				
				case 28:
					return 2179;
				
				case 29:
					return 2186;
				
				case 30:
					return 2193;
				
				case 31:
					return 2200;
				
				case 32:
					return 2207;
				
				case 33:
					return 2214;
				
				case 34:
					return 2221;
				
				case 35:
					return 2228;
				
				case 36:
					return 2235;
				
				case 37:
					return 2241;
				
				case 38:
					return 2247;
				
				case 39:
					return 2828;
				
				case 40:
					return 2835;
				
				case 41:
					return 2842;
				
				case 42:
					return 2849;
				
				case 43:
					return 2856;
				
				case 44:
					return 2863;
				
				case 45:
					return 2870;
				
				case 46:
					return 2877;
				
				case 47:
					return 2884;
				
				case 48:
					return 2891;
				
				case 49:
					return 2898;
				
				case 50:
					return 2904;
				
				case 51:
					return 2910;
				
				case 52:
					return 2952;
				
				case 53:
					return 2959;
				
				case 54:
					return 2966;
				
				case 55:
					return 2973;
				
				case 56:
					return 2980;
				
				case 57:
					return 2987;
				
				case 58:
					return 2994;
				
				case 59:
					return 3001;
				
				case 60:
					return 3008;
				
				case 61:
					return 3015;
				
				case 62:
					return 3022;
				
				case 63:
					return 3028;
				
				case 64:
					return 3034;
				
				case 65:
					return 3235;
				
				case 66:
					return 3243;
				
				case 67:
					return 3251;
				
				case 68:
					return 3259;
				
				case 69:
					return 3267;
				
				case 70:
					return 3275;
				
				case 71:
					return 3283;
				
				case 72:
					return 3291;
				
				case 73:
					return 3299;
				
				case 74:
					return 3307;
				
				case 75:
					return 3315;
				
				case 76:
					return 3323;
				
				case 77:
					return 3331;
				
				case 78:
					return 3339;
				
				case 79:
					return 3347;
				
				case 80:
					return 3355;
				
				case 81:
					return 3363;
				
				case 82:
					return 3371;
				
				case 83:
					return 3379;
				
				case 84:
					return 3387;
				
				case 85:
					return 3395;
				
				case 86:
					return 3402;
				
				case 87:
					return 3409;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4031;
				
				case 89:
					return 4039;
				
				case 90:
					return 4047;
				
				case 91:
					return 4055;
				
				case 92:
					return 4063;
				
				case 93:
					return 4071;
				
				case 94:
					return 4079;
				
				case 95:
					return 4087;
				
				case 96:
					return 4095;
				
				case 97:
					return 4103;
				
				case 98:
					return 4111;
				
				case 99:
					return 4119;
				
				case 100:
					return 4127;
				
				case 101:
					return 4135;
				
				case 102:
					return 4143;
				
				case 103:
					return 4151;
				
				case 104:
					return 4159;
				
				case 105:
					return 4167;
				
				case 106:
					return 4175;
				
				case 107:
					return 4183;
				
				case 108:
					return 4191;
				
				case 109:
					return 4199;
				
				case 110:
					return 4207;
				
				case 111:
					return 4215;
				
				case 112:
					return 4223;
				
				case 113:
					return 4231;
				
				case 114:
					return 4239;
				
				case 115:
					return 4247;
				
				case 116:
					return 4255;
				
				case 117:
					return 4263;
				
				case 118:
					return 4271;
				
				case 119:
					return 4279;
				
				case 120:
					return 4287;
				
				case 121:
					return 4295;
				
				case 122:
					return 4303;
				
				case 123:
					return 4311;
				
				case 124:
					return 4319;
				
				case 125:
					return 4327;
				
				case 126:
					return 4335;
				
				case 127:
					return 4343;
				
				case 128:
					return 4351;
				
				case 129:
					return 4359;
				
				case 130:
					return 4367;
				
				case 131:
					return 4375;
				
				case 132:
					return 4383;
				
				case 133:
					return 4391;
				
				case 134:
					return 4399;
				
				case 135:
					return 4407;
				
				case 136:
					return 4415;
				
				case 137:
					return 4423;
				
				case 138:
					return 4431;
				
				case 139:
					return 4439;
				
				case 140:
					return 4447;
				
				case 141:
					return 4455;
				
				case 142:
					return 4463;
				
				case 143:
					return 4471;
				
				case 144:
					return 4479;
				
				case 145:
					return 4487;
				
				case 146:
					return 4495;
				
				case 147:
					return 4503;
				
				case 148:
					return 4511;
				
				case 149:
					return 4519;
				
				case 150:
					return 4527;
				
				case 151:
					return 4535;
				
				case 152:
					return 4543;
				
				case 153:
					return 4551;
				
				case 154:
					return 4559;
				
				case 155:
					return 4567;
				
				case 156:
					return 4575;
				
				case 157:
					return 4583;
				
				case 158:
					return 5476;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5925;
				
				case 160:
					return 5932;
				
				case 161:
					return 5939;
				
				case 162:
					return 5946;
				
				case 163:
					return 5953;
				
				case 164:
					return 5960;
				
				case 165:
					return 5967;
				
				case 166:
					return 5974;
				
				case 167:
					return 5981;
				
				case 168:
					return 5988;
				
				case 169:
					return 5995;
				
				case 170:
					return 6002;
				
				case 171:
					return 6009;
				
				case 172:
					return 6016;
				
				case 173:
					return 6023;
				
				case 174:
					return 6030;
				
				case 175:
					return 6037;
				
				case 176:
					return 6044;
				
				case 177:
					return 6051;
				
				case 178:
					return 6058;
				
				case 179:
					return 6065;
				
				case 180:
					return 6072;
				
				case 181:
					return 6079;
				
				case 182:
					return 6086;
				
				case 183:
					return 6093;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6170;
				
				case 185:
					return 6177;
				
				case 186:
					return 6184;
				
				case 187:
					return 6191;
				
				case 188:
					return 6198;
				
				case 189:
					return 6205;
				
				case 190:
					return 6212;
				
				case 191:
					return 6219;
				
				case 192:
					return 6226;
				
				case 193:
					return 6233;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6567;
				
				case 195:
					return 6574;
				
				case 196:
					return 6581;
				
				case 197:
					return 6588;
				
				case 198:
					return 6595;
				
				case 199:
					return 6602;
				
				case 200:
					return 6609;
				
				case 201:
					return 6616;
				
				case 202:
					return 6623;
				
				case 203:
					return 6630;
				
				case 204:
					return 6637;
				
				case 205:
					return 6644;
				
				case 206:
					return 6651;
				
				case 207:
					return 6658;
				
				case 208:
					return 6665;
				
				case 209:
					return 6672;
				
				case 210:
					return 6679;
				
				case 211:
					return 6686;
				
				case 212:
					return 6693;
				
				case 213:
					return 6700;
				
				case 214:
					return 6707;
				
				case 215:
					return 6714;
				
				case 216:
					return 6721;
				
				case 217:
					return 6728;
				
				case 218:
					return 6735;
				
				case 219:
					return 6742;
				
				case 220:
					return 6749;
				
				case 221:
					return 6756;
				
				case 222:
					return 6763;
				
				case 223:
					return 6770;
				
				case 224:
					return 6777;
				
				case 225:
					return 6784;
				
				case 226:
					return 6791;
				
				case 227:
					return 6798;
				
				case 228:
					return 6805;
				
				case 229:
					return 6812;
				
				case 230:
					return 6819;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7289;
				
				case 232:
					return 7296;
				
				case 233:
					return 7303;
				
				case 234:
					return 7310;
				
				case 235:
					return 7317;
				
				case 236:
					return 7324;
				
				case 237:
					return 7331;
				
				case 238:
					return 7338;
				
				case 239:
					return 7345;
				
				case 240:
					return 7352;
				
				case 241:
					return 7359;
				
				case 242:
					return 7366;
				
				case 243:
					return 7373;
				
				case 244:
					return 7380;
				
				case 245:
					return 7387;
				
				case 246:
					return 7394;
				
				case 247:
					return 7401;
				
				case 248:
					return 7408;
				
				case 249:
					return 7415;
				
				case 250:
					return 7422;
				
				case 251:
					return 7429;
				
				case 252:
					return 7436;
				
				case 253:
					return 7443;
				
				case 254:
					return 7450;
				
				case 255:
					return 7457;
				
				case 256:
					return 7464;
				
				case 257:
					return 7471;
				
				case 258:
					return 7478;
				
				case 259:
					return 7485;
				
				case 260:
					return 7492;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8012;
				
				case 262:
					return 8019;
				
				case 263:
					return 8026;
				
				case 264:
					return 8033;
				
				case 265:
					return 8040;
				
				case 266:
					return 8047;
				
				case 267:
					return 8054;
				
				case 268:
					return 8061;
				
				case 269:
					return 8068;
				
				case 270:
					return 8075;
				
				case 271:
					return 8536;
				
				case 272:
					return 8543;
				
				case 273:
					return 8550;
				
				case 274:
					return 8557;
				
				case 275:
					return 8564;
				
				case 276:
					return 8571;
				
				case 277:
					return 8578;
				
				case 278:
					return 8585;
				
				case 279:
					return 8592;
				
				case 280:
					return 8599;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
				case 39:
					return 2829;
				
				case 40:
					return 2836;
				
				case 41:
					return 2843;
				
				case 42:
					return 2850;
				
				case 43:
					return 2857;
				
				case 44:
					return 2864;
				
				case 45:
					return 2871;
				
				case 46:
					return 2878;
				
				case 47:
					return 2885;
				
				case 48:
					return 2892;
				
				case 49:
					return 2899;
				
				case 50:
					return 2905;
				
				case 51:
					return 2911;
				
				case 52:
					return 2953;
				
				case 53:
					return 2960;
				
				case 54:
					return 2967;
				
				case 55:
					return 2974;
				
				case 56:
					return 2981;
				
				case 57:
					return 2988;
				
				case 58:
					return 2995;
				
				case 59:
					return 3002;
				
				case 60:
					return 3009;
				
				case 61:
					return 3016;
				
				case 62:
					return 3023;
				
				case 63:
					return 3029;
				
				case 64:
					return 3035;
				
				case 65:
					return 3236;
				
				case 66:
					return 3244;
				
				case 67:
					return 3252;
				
				case 68:
					return 3260;
				
				case 69:
					return 3268;
				
				case 70:
					return 3276;
				
				case 71:
					return 3284;
				
				case 72:
					return 3292;
				
				case 73:
					return 3300;
				
				case 74:
					return 3308;
				
				case 75:
					return 3316;
				
				case 76:
					return 3324;
				
				case 77:
					return 3332;
				
				case 78:
					return 3340;
				
				case 79:
					return 3348;
				
				case 80:
					return 3356;
				
				case 81:
					return 3364;
				
				case 82:
					return 3372;
				
				case 83:
					return 3380;
				
				case 84:
					return 3388;
				
				case 85:
					return 3396;
				
				case 86:
					return 3403;
				
				case 87:
					return 3410;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4032;
				
				case 89:
					return 4040;
				
				case 90:
					return 4048;
				
				case 91:
					return 4056;
				
				case 92:
					return 4064;
				
				case 93:
					return 4072;
				
				case 94:
					return 4080;
				
				case 95:
					return 4088;
				
				case 96:
					return 4096;
				
				case 97:
					return 4104;
				
				case 98:
					return 4112;
				
				case 99:
					return 4120;
				
				case 100:
					return 4128;
				
				case 101:
					return 4136;
				
				case 102:
					return 4144;
				
				case 103:
					return 4152;
				
				case 104:
					return 4160;
				
				case 105:
					return 4168;
				
				case 106:
					return 4176;
				
				case 107:
					return 4184;
				
				case 108:
					return 4192;
				
				case 109:
					return 4200;
				
				case 110:
					return 4208;
				
				case 111:
					return 4216;
				
				case 112:
					return 4224;
				
				case 113:
					return 4232;
				
				case 114:
					return 4240;
				
				case 115:
					return 4248;
				
				case 116:
					return 4256;
				
				case 117:
					return 4264;
				
				case 118:
					return 4272;
				
				case 119:
					return 4280;
				
				case 120:
					return 4288;
				
				case 121:
					return 4296;
				
				case 122:
					return 4304;
				
				case 123:
					return 4312;
				
				case 124:
					return 4320;
				
				case 125:
					return 4328;
				
				case 126:
					return 4336;
				
				case 127:
					return 4344;
				
				case 128:
					return 4352;
				
				case 129:
					return 4360;
				
				case 130:
					return 4368;
				
				case 131:
					return 4376;
				
				case 132:
					return 4384;
				
				case 133:
					return 4392;
				
				case 134:
					return 4400;
				
				case 135:
					return 4408;
				
				case 136:
					return 4416;
				
				case 137:
					return 4424;
				
				case 138:
					return 4432;
				
				case 139:
					return 4440;
				
				case 140:
					return 4448;
				
				case 141:
					return 4456;
				
				case 142:
					return 4464;
				
				case 143:
					return 4472;
				
				case 144:
					return 4480;
				
				case 145:
					return 4488;
				
				case 146:
					return 4496;
				
				case 147:
					return 4504;
				
				case 148:
					return 4512;
				
				case 149:
					return 4520;
				
				case 150:
					return 4528;
				
				case 151:
					return 4536;
				
				case 152:
					return 4544;
				
				case 153:
					return 4552;
				
				case 154:
					return 4560;
				
				case 155:
					return 4568;
				
				case 156:
					return 4576;
				
				case 157:
					return 4584;
				
				case 158:
					return 5477;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5926;
				
				case 160:
					return 5933;
				
				case 161:
					return 5940;
				
				case 162:
					return 5947;
				
				case 163:
					return 5954;
				
				case 164:
					return 5961;
				
				case 165:
					return 5968;
				
				case 166:
					return 5975;
				
				case 167:
					return 5982;
				
				case 168:
					return 5989;
				
				case 169:
					return 5996;
				
				case 170:
					return 6003;
				
				case 171:
					return 6010;
				
				case 172:
					return 6017;
				
				case 173:
					return 6024;
				
				case 174:
					return 6031;
				
				case 175:
					return 6038;
				
				case 176:
					return 6045;
				
				case 177:
					return 6052;
				
				case 178:
					return 6059;
				
				case 179:
					return 6066;
				
				case 180:
					return 6073;
				
				case 181:
					return 6080;
				
				case 182:
					return 6087;
				
				case 183:
					return 6094;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6171;
				
				case 185:
					return 6178;
				
				case 186:
					return 6185;
				
				case 187:
					return 6192;
				
				case 188:
					return 6199;
				
				case 189:
					return 6206;
				
				case 190:
					return 6213;
				
				case 191:
					return 6220;
				
				case 192:
					return 6227;
				
				case 193:
					return 6234;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6568;
				
				case 195:
					return 6575;
				
				case 196:
					return 6582;
				
				case 197:
					return 6589;
				
				case 198:
					return 6596;
				
				case 199:
					return 6603;
				
				case 200:
					return 6610;
				
				case 201:
					return 6617;
				
				case 202:
					return 6624;
				
				case 203:
					return 6631;
				
				case 204:
					return 6638;
				
				case 205:
					return 6645;
				
				case 206:
					return 6652;
				
				case 207:
					return 6659;
				
				case 208:
					return 6666;
				
				case 209:
					return 6673;
				
				case 210:
					return 6680;
				
				case 211:
					return 6687;
				
				case 212:
					return 6694;
				
				case 213:
					return 6701;
				
				case 214:
					return 6708;
				
				case 215:
					return 6715;
				
				case 216:
					return 6722;
				
				case 217:
					return 6729;
				
				case 218:
					return 6736;
				
				case 219:
					return 6743;
				
				case 220:
					return 6750;
				
				case 221:
					return 6757;
				
				case 222:
					return 6764;
				
				case 223:
					return 6771;
				
				case 224:
					return 6778;
				
				case 225:
					return 6785;
				
				case 226:
					return 6792;
				
				case 227:
					return 6799;
				
				case 228:
					return 6806;
				
				case 229:
					return 6813;
				
				case 230:
					return 6820;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7290;
				
				case 232:
					return 7297;
				
				case 233:
					return 7304;
				
				case 234:
					return 7311;
				
				case 235:
					return 7318;
				
				case 236:
					return 7325;
				
				case 237:
					return 7332;
				
				case 238:
					return 7339;
				
				case 239:
					return 7346;
				
				case 240:
					return 7353;
				
				case 241:
					return 7360;
				
				case 242:
					return 7367;
				
				case 243:
					return 7374;
				
				case 244:
					return 7381;
				
				case 245:
					return 7388;
				
				case 246:
					return 7395;
				
				case 247:
					return 7402;
				
				case 248:
					return 7409;
				
				case 249:
					return 7416;
				
				case 250:
					return 7423;
				
				case 251:
					return 7430;
				
				case 252:
					return 7437;
				
				case 253:
					return 7444;
				
				case 254:
					return 7451;
				
				case 255:
					return 7458;
				
				case 256:
					return 7465;
				
				case 257:
					return 7472;
				
				case 258:
					return 7479;
				
				case 259:
					return 7486;
				
				case 260:
					return 7493;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8013;
				
				case 262:
					return 8020;
				
				case 263:
					return 8027;
				
				case 264:
					return 8034;
				
				case 265:
					return 8041;
				
				case 266:
					return 8048;
				
				case 267:
					return 8055;
				
				case 268:
					return 8062;
				
				case 269:
					return 8069;
				
				case 270:
					return 8076;
				
				case 271:
					return 8537;
				
				case 272:
					return 8544;
				
				case 273:
					return 8551;
				
				case 274:
					return 8558;
				
				case 275:
					return 8565;
				
				case 276:
					return 8572;
				
				case 277:
					return 8579;
				
				case 278:
					return 8586;
				
				case 279:
					return 8593;
				
				case 280:
					return 8600;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2830;
				
				case 40:
					return 2837;
				
				case 41:
					return 2844;
				
				case 42:
					return 2851;
				
				case 43:
					return 2858;
				
				case 44:
					return 2865;
				
				case 45:
					return 2872;
				
				case 46:
					return 2879;
				
				case 47:
					return 2886;
				
				case 48:
					return 2893;
				
				case 49:
					return 2900;
				
				case 50:
					return 2906;
				
				case 51:
					return 2912;
				
				case 52:
					return 2954;
				
				case 53:
					return 2961;
				
				case 54:
					return 2968;
				
				case 55:
					return 2975;
				
				case 56:
					return 2982;
				
				case 57:
					return 2989;
				
				case 58:
					return 2996;
				
				case 59:
					return 3003;
				
				case 60:
					return 3010;
				
				case 61:
					return 3017;
				
				case 62:
					return 3024;
				
				case 63:
					return 3030;
				
				case 64:
					return 3036;
				
				case 65:
					return 3237;
				
				case 66:
					return 3245;
				
				case 67:
					return 3253;
				
				case 68:
					return 3261;
				
				case 69:
					return 3269;
				
				case 70:
					return 3277;
				
				case 71:
					return 3285;
				
				case 72:
					return 3293;
				
				case 73:
					return 3301;
				
				case 74:
					return 3309;
				
				case 75:
					return 3317;
				
				case 76:
					return 3325;
				
				case 77:
					return 3333;
				
				case 78:
					return 3341;
				
				case 79:
					return 3349;
				
				case 80:
					return 3357;
				
				case 81:
					return 3365;
				
				case 82:
					return 3373;
				
				case 83:
					return 3381;
				
				case 84:
					return 3389;
				
				case 85:
					return 3397;
				
				case 86:
					return 3404;
				
				case 87:
					return 3411;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4033;
				
				case 89:
					return 4041;
				
				case 90:
					return 4049;
				
				case 91:
					return 4057;
				
				case 92:
					return 4065;
				
				case 93:
					return 4073;
				
				case 94:
					return 4081;
				
				case 95:
					return 4089;
				
				case 96:
					return 4097;
				
				case 97:
					return 4105;
				
				case 98:
					return 4113;
				
				case 99:
					return 4121;
				
				case 100:
					return 4129;
				
				case 101:
					return 4137;
				
				case 102:
					return 4145;
				
				case 103:
					return 4153;
				
				case 104:
					return 4161;
				
				case 105:
					return 4169;
				
				case 106:
					return 4177;
				
				case 107:
					return 4185;
				
				case 108:
					return 4193;
				
				case 109:
					return 4201;
				
				case 110:
					return 4209;
				
				case 111:
					return 4217;
				
				case 112:
					return 4225;
				
				case 113:
					return 4233;
				
				case 114:
					return 4241;
				
				case 115:
					return 4249;
				
				case 116:
					return 4257;
				
				case 117:
					return 4265;
				
				case 118:
					return 4273;
				
				case 119:
					return 4281;
				
				case 120:
					return 4289;
				
				case 121:
					return 4297;
				
				case 122:
					return 4305;
				
				case 123:
					return 4313;
				
				case 124:
					return 4321;
				
				case 125:
					return 4329;
				
				case 126:
					return 4337;
				
				case 127:
					return 4345;
				
				case 128:
					return 4353;
				
				case 129:
					return 4361;
				
				case 130:
					return 4369;
				
				case 131:
					return 4377;
				
				case 132:
					return 4385;
				
				case 133:
					return 4393;
				
				case 134:
					return 4401;
				
				case 135:
					return 4409;
				
				case 136:
					return 4417;
				
				case 137:
					return 4425;
				
				case 138:
					return 4433;
				
				case 139:
					return 4441;
				
				case 140:
					return 4449;
				
				case 141:
					return 4457;
				
				case 142:
					return 4465;
				
				case 143:
					return 4473;
				
				case 144:
					return 4481;
				
				case 145:
					return 4489;
				
				case 146:
					return 4497;
				
				case 147:
					return 4505;
				
				case 148:
					return 4513;
				
				case 149:
					return 4521;
				
				case 150:
					return 4529;
				
				case 151:
					return 4537;
				
				case 152:
					return 4545;
				
				case 153:
					return 4553;
				
				case 154:
					return 4561;
				
				case 155:
					return 4569;
				
				case 156:
					return 4577;
				
				case 157:
					return 4585;
				
				case 158:
					return 5478;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5927;
				
				case 160:
					return 5934;
				
				case 161:
					return 5941;
				
				case 162:
					return 5948;
				
				case 163:
					return 5955;
				
				case 164:
					return 5962;
				
				case 165:
					return 5969;
				
				case 166:
					return 5976;
				
				case 167:
					return 5983;
				
				case 168:
					return 5990;
				
				case 169:
					return 5997;
				
				case 170:
					return 6004;
				
				case 171:
					return 6011;
				
				case 172:
					return 6018;
				
				case 173:
					return 6025;
				
				case 174:
					return 6032;
				
				case 175:
					return 6039;
				
				case 176:
					return 6046;
				
				case 177:
					return 6053;
				
				case 178:
					return 6060;
				
				case 179:
					return 6067;
				
				case 180:
					return 6074;
				
				case 181:
					return 6081;
				
				case 182:
					return 6088;
				
				case 183:
					return 6095;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6172;
				
				case 185:
					return 6179;
				
				case 186:
					return 6186;
				
				case 187:
					return 6193;
				
				case 188:
					return 6200;
				
				case 189:
					return 6207;
				
				case 190:
					return 6214;
				
				case 191:
					return 6221;
				
				case 192:
					return 6228;
				
				case 193:
					return 6235;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6569;
				
				case 195:
					return 6576;
				
				case 196:
					return 6583;
				
				case 197:
					return 6590;
				
				case 198:
					return 6597;
				
				case 199:
					return 6604;
				
				case 200:
					return 6611;
				
				case 201:
					return 6618;
				
				case 202:
					return 6625;
				
				case 203:
					return 6632;
				
				case 204:
					return 6639;
				
				case 205:
					return 6646;
				
				case 206:
					return 6653;
				
				case 207:
					return 6660;
				
				case 208:
					return 6667;
				
				case 209:
					return 6674;
				
				case 210:
					return 6681;
				
				case 211:
					return 6688;
				
				case 212:
					return 6695;
				
				case 213:
					return 6702;
				
				case 214:
					return 6709;
				
				case 215:
					return 6716;
				
				case 216:
					return 6723;
				
				case 217:
					return 6730;
				
				case 218:
					return 6737;
				
				case 219:
					return 6744;
				
				case 220:
					return 6751;
				
				case 221:
					return 6758;
				
				case 222:
					return 6765;
				
				case 223:
					return 6772;
				
				case 224:
					return 6779;
				
				case 225:
					return 6786;
				
				case 226:
					return 6793;
				
				case 227:
					return 6800;
				
				case 228:
					return 6807;
				
				case 229:
					return 6814;
				
				case 230:
					return 6821;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7291;
				
				case 232:
					return 7298;
				
				case 233:
					return 7305;
				
				case 234:
					return 7312;
				
				case 235:
					return 7319;
				
				case 236:
					return 7326;
				
				case 237:
					return 7333;
				
				case 238:
					return 7340;
				
				case 239:
					return 7347;
				
				case 240:
					return 7354;
				
				case 241:
					return 7361;
				
				case 242:
					return 7368;
				
				case 243:
					return 7375;
				
				case 244:
					return 7382;
				
				case 245:
					return 7389;
				
				case 246:
					return 7396;
				
				case 247:
					return 7403;
				
				case 248:
					return 7410;
				
				case 249:
					return 7417;
				
				case 250:
					return 7424;
				
				case 251:
					return 7431;
				
				case 252:
					return 7438;
				
				case 253:
					return 7445;
				
				case 254:
					return 7452;
				
				case 255:
					return 7459;
				
				case 256:
					return 7466;
				
				case 257:
					return 7473;
				
				case 258:
					return 7480;
				
				case 259:
					return 7487;
				
				case 260:
					return 7494;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8014;
				
				case 262:
					return 8021;
				
				case 263:
					return 8028;
				
				case 264:
					return 8035;
				
				case 265:
					return 8042;
				
				case 266:
					return 8049;
				
				case 267:
					return 8056;
				
				case 268:
					return 8063;
				
				case 269:
					return 8070;
				
				case 270:
					return 8077;
				
				case 271:
					return 8538;
				
				case 272:
					return 8545;
				
				case 273:
					return 8552;
				
				case 274:
					return 8559;
				
				case 275:
					return 8566;
				
				case 276:
					return 8573;
				
				case 277:
					return 8580;
				
				case 278:
					return 8587;
				
				case 279:
					return 8594;
				
				case 280:
					return 8601;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 10:
					return 1702;
				
				case 11:
					return 1708;
				
				case 12:
					return 1714;
				
				case 13:
					return 1720;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 23:
					return 1861;
				
				case 24:
					return 1867;
				
				case 25:
					return 1873;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 36:
					return 2238;
				
				case 37:
					return 2244;
				
				case 38:
					return 2250;
				
				case 39:
					return 2831;
				
				case 40:
					return 2838;
				
				case 41:
					return 2845;
				
				case 42:
					return 2852;
				
				case 43:
					return 2859;
				
				case 44:
					return 2866;
				
				case 45:
					return 2873;
				
				case 46:
					return 2880;
				
				case 47:
					return 2887;
				
				case 48:
					return 2894;
				
				case 49:
					return 2901;
				
				case 50:
					return 2907;
				
				case 51:
					return 2913;
				
				case 52:
					return 2955;
				
				case 53:
					return 2962;
				
				case 54:
					return 2969;
				
				case 55:
					return 2976;
				
				case 56:
					return 2983;
				
				case 57:
					return 2990;
				
				case 58:
					return 2997;
				
				case 59:
					return 3004;
				
				case 60:
					return 3011;
				
				case 61:
					return 3018;
				
				case 62:
					return 3025;
				
				case 63:
					return 3031;
				
				case 64:
					return 3037;
				
				case 65:
					return 3238;
				
				case 66:
					return 3246;
				
				case 67:
					return 3254;
				
				case 68:
					return 3262;
				
				case 69:
					return 3270;
				
				case 70:
					return 3278;
				
				case 71:
					return 3286;
				
				case 72:
					return 3294;
				
				case 73:
					return 3302;
				
				case 74:
					return 3310;
				
				case 75:
					return 3318;
				
				case 76:
					return 3326;
				
				case 77:
					return 3334;
				
				case 78:
					return 3342;
				
				case 79:
					return 3350;
				
				case 80:
					return 3358;
				
				case 81:
					return 3366;
				
				case 82:
					return 3374;
				
				case 83:
					return 3382;
				
				case 84:
					return 3390;
				
				case 85:
					return 3398;
				
				case 86:
					return 3405;
				
				case 87:
					return 3412;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				
				case 89:
					return 4042;
				
				case 90:
					return 4050;
				
				case 91:
					return 4058;
				
				case 92:
					return 4066;
				
				case 93:
					return 4074;
				
				case 94:
					return 4082;
				
				case 95:
					return 4090;
				
				case 96:
					return 4098;
				
				case 97:
					return 4106;
				
				case 98:
					return 4114;
				
				case 99:
					return 4122;
				
				case 100:
					return 4130;
				
				case 101:
					return 4138;
				
				case 102:
					return 4146;
				
				case 103:
					return 4154;
				
				case 104:
					return 4162;
				
				case 105:
					return 4170;
				
				case 106:
					return 4178;
				
				case 107:
					return 4186;
				
				case 108:
					return 4194;
				
				case 109:
					return 4202;
				
				case 110:
					return 4210;
				
				case 111:
					return 4218;
				
				case 112:
					return 4226;
				
				case 113:
					return 4234;
				
				case 114:
					return 4242;
				
				case 115:
					return 4250;
				
				case 116:
					return 4258;
				
				case 117:
					return 4266;
				
				case 118:
					return 4274;
				
				case 119:
					return 4282;
				
				case 120:
					return 4290;
				
				case 121:
					return 4298;
				
				case 122:
					return 4306;
				
				case 123:
					return 4314;
				
				case 124:
					return 4322;
				
				case 125:
					return 4330;
				
				case 126:
					return 4338;
				
				case 127:
					return 4346;
				
				case 128:
					return 4354;
				
				case 129:
					return 4362;
				
				case 130:
					return 4370;
				
				case 131:
					return 4378;
				
				case 132:
					return 4386;
				
				case 133:
					return 4394;
				
				case 134:
					return 4402;
				
				case 135:
					return 4410;
				
				case 136:
					return 4418;
				
				case 137:
					return 4426;
				
				case 138:
					return 4434;
				
				case 139:
					return 4442;
				
				case 140:
					return 4450;
				
				case 141:
					return 4458;
				
				case 142:
					return 4466;
				
				case 143:
					return 4474;
				
				case 144:
					return 4482;
				
				case 145:
					return 4490;
				
				case 146:
					return 4498;
				
				case 147:
					return 4506;
				
				case 148:
					return 4514;
				
				case 149:
					return 4522;
				
				case 150:
					return 4530;
				
				case 151:
					return 4538;
				
				case 152:
					return 4546;
				
				case 153:
					return 4554;
				
				case 154:
					return 4562;
				
				case 155:
					return 4570;
				
				case 156:
					return 4578;
				
				case 157:
					return 4586;
				
				case 158:
					return 5479;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5928;
				
				case 160:
					return 5935;
				
				case 161:
					return 5942;
				
				case 162:
					return 5949;
				
				case 163:
					return 5956;
				
				case 164:
					return 5963;
				
				case 165:
					return 5970;
				
				case 166:
					return 5977;
				
				case 167:
					return 5984;
				
				case 168:
					return 5991;
				
				case 169:
					return 5998;
				
				case 170:
					return 6005;
				
				case 171:
					return 6012;
				
				case 172:
					return 6019;
				
				case 173:
					return 6026;
				
				case 174:
					return 6033;
				
				case 175:
					return 6040;
				
				case 176:
					return 6047;
				
				case 177:
					return 6054;
				
				case 178:
					return 6061;
				
				case 179:
					return 6068;
				
				case 180:
					return 6075;
				
				case 181:
					return 6082;
				
				case 182:
					return 6089;
				
				case 183:
					return 6096;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				
				case 185:
					return 6180;
				
				case 186:
					return 6187;
				
				case 187:
					return 6194;
				
				case 188:
					return 6201;
				
				case 189:
					return 6208;
				
				case 190:
					return 6215;
				
				case 191:
					return 6222;
				
				case 192:
					return 6229;
				
				case 193:
					return 6236;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				
				case 195:
					return 6577;
				
				case 196:
					return 6584;
				
				case 197:
					return 6591;
				
				case 198:
					return 6598;
				
				case 199:
					return 6605;
				
				case 200:
					return 6612;
				
				case 201:
					return 6619;
				
				case 202:
					return 6626;
				
				case 203:
					return 6633;
				
				case 204:
					return 6640;
				
				case 205:
					return 6647;
				
				case 206:
					return 6654;
				
				case 207:
					return 6661;
				
				case 208:
					return 6668;
				
				case 209:
					return 6675;
				
				case 210:
					return 6682;
				
				case 211:
					return 6689;
				
				case 212:
					return 6696;
				
				case 213:
					return 6703;
				
				case 214:
					return 6710;
				
				case 215:
					return 6717;
				
				case 216:
					return 6724;
				
				case 217:
					return 6731;
				
				case 218:
					return 6738;
				
				case 219:
					return 6745;
				
				case 220:
					return 6752;
				
				case 221:
					return 6759;
				
				case 222:
					return 6766;
				
				case 223:
					return 6773;
				
				case 224:
					return 6780;
				
				case 225:
					return 6787;
				
				case 226:
					return 6794;
				
				case 227:
					return 6801;
				
				case 228:
					return 6808;
				
				case 229:
					return 6815;
				
				case 230:
					return 6822;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				
				case 232:
					return 7299;
				
				case 233:
					return 7306;
				
				case 234:
					return 7313;
				
				case 235:
					return 7320;
				
				case 236:
					return 7327;
				
				case 237:
					return 7334;
				
				case 238:
					return 7341;
				
				case 239:
					return 7348;
				
				case 240:
					return 7355;
				
				case 241:
					return 7362;
				
				case 242:
					return 7369;
				
				case 243:
					return 7376;
				
				case 244:
					return 7383;
				
				case 245:
					return 7390;
				
				case 246:
					return 7397;
				
				case 247:
					return 7404;
				
				case 248:
					return 7411;
				
				case 249:
					return 7418;
				
				case 250:
					return 7425;
				
				case 251:
					return 7432;
				
				case 252:
					return 7439;
				
				case 253:
					return 7446;
				
				case 254:
					return 7453;
				
				case 255:
					return 7460;
				
				case 256:
					return 7467;
				
				case 257:
					return 7474;
				
				case 258:
					return 7481;
				
				case 259:
					return 7488;
				
				case 260:
					return 7495;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8015;
				
				case 262:
					return 8022;
				
				case 263:
					return 8029;
				
				case 264:
					return 8036;
				
				case 265:
					return 8043;
				
				case 266:
					return 8050;
				
				case 267:
					return 8057;
				
				case 268:
					return 8064;
				
				case 269:
					return 8071;
				
				case 270:
					return 8078;
				
				case 271:
					return 8539;
				
				case 272:
					return 8546;
				
				case 273:
					return 8553;
				
				case 274:
					return 8560;
				
				case 275:
					return 8567;
				
				case 276:
					return 8574;
				
				case 277:
					return 8581;
				
				case 278:
					return 8588;
				
				case 279:
					return 8595;
				
				case 280:
					return 8602;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1633;
				
				case 1:
					return 1640;
				
				case 2:
					return 1647;
				
				case 3:
					return 1654;
				
				case 4:
					return 1661;
				
				case 5:
					return 1668;
				
				case 6:
					return 1675;
				
				case 7:
					return 1682;
				
				case 8:
					return 1689;
				
				case 9:
					return 1696;
				
				case 10:
					return 1703;
				
				case 11:
					return 1709;
				
				case 12:
					return 1715;
				
				case 13:
					return 1721;
				
				case 14:
					return 1799;
				
				case 15:
					return 1806;
				
				case 16:
					return 1813;
				
				case 17:
					return 1820;
				
				case 18:
					return 1827;
				
				case 19:
					return 1834;
				
				case 20:
					return 1841;
				
				case 21:
					return 1848;
				
				case 22:
					return 1855;
				
				case 23:
					return 1862;
				
				case 24:
					return 1868;
				
				case 25:
					return 1874;
				
				case 26:
					return 2169;
				
				case 27:
					return 2176;
				
				case 28:
					return 2183;
				
				case 29:
					return 2190;
				
				case 30:
					return 2197;
				
				case 31:
					return 2204;
				
				case 32:
					return 2211;
				
				case 33:
					return 2218;
				
				case 34:
					return 2225;
				
				case 35:
					return 2232;
				
				case 36:
					return 2239;
				
				case 37:
					return 2245;
				
				case 38:
					return 2251;
				
				case 39:
					return 2832;
				
				case 40:
					return 2839;
				
				case 41:
					return 2846;
				
				case 42:
					return 2853;
				
				case 43:
					return 2860;
				
				case 44:
					return 2867;
				
				case 45:
					return 2874;
				
				case 46:
					return 2881;
				
				case 47:
					return 2888;
				
				case 48:
					return 2895;
				
				case 49:
					return 2902;
				
				case 50:
					return 2908;
				
				case 51:
					return 2914;
				
				case 52:
					return 2956;
				
				case 53:
					return 2963;
				
				case 54:
					return 2970;
				
				case 55:
					return 2977;
				
				case 56:
					return 2984;
				
				case 57:
					return 2991;
				
				case 58:
					return 2998;
				
				case 59:
					return 3005;
				
				case 60:
					return 3012;
				
				case 61:
					return 3019;
				
				case 62:
					return 3026;
				
				case 63:
					return 3032;
				
				case 64:
					return 3038;
				
				case 65:
					return 3239;
				
				case 66:
					return 3247;
				
				case 67:
					return 3255;
				
				case 68:
					return 3263;
				
				case 69:
					return 3271;
				
				case 70:
					return 3279;
				
				case 71:
					return 3287;
				
				case 72:
					return 3295;
				
				case 73:
					return 3303;
				
				case 74:
					return 3311;
				
				case 75:
					return 3319;
				
				case 76:
					return 3327;
				
				case 77:
					return 3335;
				
				case 78:
					return 3343;
				
				case 79:
					return 3351;
				
				case 80:
					return 3359;
				
				case 81:
					return 3367;
				
				case 82:
					return 3375;
				
				case 83:
					return 3383;
				
				case 84:
					return 3391;
				
				case 85:
					return 3399;
				
				case 86:
					return 3406;
				
				case 87:
					return 3413;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				
				case 89:
					return 4043;
				
				case 90:
					return 4051;
				
				case 91:
					return 4059;
				
				case 92:
					return 4067;
				
				case 93:
					return 4075;
				
				case 94:
					return 4083;
				
				case 95:
					return 4091;
				
				case 96:
					return 4099;
				
				case 97:
					return 4107;
				
				case 98:
					return 4115;
				
				case 99:
					return 4123;
				
				case 100:
					return 4131;
				
				case 101:
					return 4139;
				
				case 102:
					return 4147;
				
				case 103:
					return 4155;
				
				case 104:
					return 4163;
				
				case 105:
					return 4171;
				
				case 106:
					return 4179;
				
				case 107:
					return 4187;
				
				case 108:
					return 4195;
				
				case 109:
					return 4203;
				
				case 110:
					return 4211;
				
				case 111:
					return 4219;
				
				case 112:
					return 4227;
				
				case 113:
					return 4235;
				
				case 114:
					return 4243;
				
				case 115:
					return 4251;
				
				case 116:
					return 4259;
				
				case 117:
					return 4267;
				
				case 118:
					return 4275;
				
				case 119:
					return 4283;
				
				case 120:
					return 4291;
				
				case 121:
					return 4299;
				
				case 122:
					return 4307;
				
				case 123:
					return 4315;
				
				case 124:
					return 4323;
				
				case 125:
					return 4331;
				
				case 126:
					return 4339;
				
				case 127:
					return 4347;
				
				case 128:
					return 4355;
				
				case 129:
					return 4363;
				
				case 130:
					return 4371;
				
				case 131:
					return 4379;
				
				case 132:
					return 4387;
				
				case 133:
					return 4395;
				
				case 134:
					return 4403;
				
				case 135:
					return 4411;
				
				case 136:
					return 4419;
				
				case 137:
					return 4427;
				
				case 138:
					return 4435;
				
				case 139:
					return 4443;
				
				case 140:
					return 4451;
				
				case 141:
					return 4459;
				
				case 142:
					return 4467;
				
				case 143:
					return 4475;
				
				case 144:
					return 4483;
				
				case 145:
					return 4491;
				
				case 146:
					return 4499;
				
				case 147:
					return 4507;
				
				case 148:
					return 4515;
				
				case 149:
					return 4523;
				
				case 150:
					return 4531;
				
				case 151:
					return 4539;
				
				case 152:
					return 4547;
				
				case 153:
					return 4555;
				
				case 154:
					return 4563;
				
				case 155:
					return 4571;
				
				case 156:
					return 4579;
				
				case 157:
					return 4587;
				
				case 158:
					return 5480;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				
				case 160:
					return 5936;
				
				case 161:
					return 5943;
				
				case 162:
					return 5950;
				
				case 163:
					return 5957;
				
				case 164:
					return 5964;
				
				case 165:
					return 5971;
				
				case 166:
					return 5978;
				
				case 167:
					return 5985;
				
				case 168:
					return 5992;
				
				case 169:
					return 5999;
				
				case 170:
					return 6006;
				
				case 171:
					return 6013;
				
				case 172:
					return 6020;
				
				case 173:
					return 6027;
				
				case 174:
					return 6034;
				
				case 175:
					return 6041;
				
				case 176:
					return 6048;
				
				case 177:
					return 6055;
				
				case 178:
					return 6062;
				
				case 179:
					return 6069;
				
				case 180:
					return 6076;
				
				case 181:
					return 6083;
				
				case 182:
					return 6090;
				
				case 183:
					return 6097;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				
				case 185:
					return 6181;
				
				case 186:
					return 6188;
				
				case 187:
					return 6195;
				
				case 188:
					return 6202;
				
				case 189:
					return 6209;
				
				case 190:
					return 6216;
				
				case 191:
					return 6223;
				
				case 192:
					return 6230;
				
				case 193:
					return 6237;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				
				case 195:
					return 6578;
				
				case 196:
					return 6585;
				
				case 197:
					return 6592;
				
				case 198:
					return 6599;
				
				case 199:
					return 6606;
				
				case 200:
					return 6613;
				
				case 201:
					return 6620;
				
				case 202:
					return 6627;
				
				case 203:
					return 6634;
				
				case 204:
					return 6641;
				
				case 205:
					return 6648;
				
				case 206:
					return 6655;
				
				case 207:
					return 6662;
				
				case 208:
					return 6669;
				
				case 209:
					return 6676;
				
				case 210:
					return 6683;
				
				case 211:
					return 6690;
				
				case 212:
					return 6697;
				
				case 213:
					return 6704;
				
				case 214:
					return 6711;
				
				case 215:
					return 6718;
				
				case 216:
					return 6725;
				
				case 217:
					return 6732;
				
				case 218:
					return 6739;
				
				case 219:
					return 6746;
				
				case 220:
					return 6753;
				
				case 221:
					return 6760;
				
				case 222:
					return 6767;
				
				case 223:
					return 6774;
				
				case 224:
					return 6781;
				
				case 225:
					return 6788;
				
				case 226:
					return 6795;
				
				case 227:
					return 6802;
				
				case 228:
					return 6809;
				
				case 229:
					return 6816;
				
				case 230:
					return 6823;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				
				case 232:
					return 7300;
				
				case 233:
					return 7307;
				
				case 234:
					return 7314;
				
				case 235:
					return 7321;
				
				case 236:
					return 7328;
				
				case 237:
					return 7335;
				
				case 238:
					return 7342;
				
				case 239:
					return 7349;
				
				case 240:
					return 7356;
				
				case 241:
					return 7363;
				
				case 242:
					return 7370;
				
				case 243:
					return 7377;
				
				case 244:
					return 7384;
				
				case 245:
					return 7391;
				
				case 246:
					return 7398;
				
				case 247:
					return 7405;
				
				case 248:
					return 7412;
				
				case 249:
					return 7419;
				
				case 250:
					return 7426;
				
				case 251:
					return 7433;
				
				case 252:
					return 7440;
				
				case 253:
					return 7447;
				
				case 254:
					return 7454;
				
				case 255:
					return 7461;
				
				case 256:
					return 7468;
				
				case 257:
					return 7475;
				
				case 258:
					return 7482;
				
				case 259:
					return 7489;
				
				case 260:
					return 7496;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8016;
				
				case 262:
					return 8023;
				
				case 263:
					return 8030;
				
				case 264:
					return 8037;
				
				case 265:
					return 8044;
				
				case 266:
					return 8051;
				
				case 267:
					return 8058;
				
				case 268:
					return 8065;
				
				case 269:
					return 8072;
				
				case 270:
					return 8079;
				
				case 271:
					return 8540;
				
				case 272:
					return 8547;
				
				case 273:
					return 8554;
				
				case 274:
					return 8561;
				
				case 275:
					return 8568;
				
				case 276:
					return 8575;
				
				case 277:
					return 8582;
				
				case 278:
					return 8589;
				
				case 279:
					return 8596;
				
				case 280:
					return 8603;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1635;
				
				case 1:
					return 1642;
				
				case 2:
					return 1649;
				
				case 3:
					return 1656;
				
				case 4:
					return 1663;
				
				case 5:
					return 1670;
				
				case 6:
					return 1677;
				
				case 7:
					return 1684;
				
				case 8:
					return 1691;
				
				case 9:
					return 1698;
				
				case 13:
					return 1723;
				
				case 14:
					return 1801;
				
				case 15:
					return 1808;
				
				case 16:
					return 1815;
				
				case 17:
					return 1822;
				
				case 18:
					return 1829;
				
				case 19:
					return 1836;
				
				case 20:
					return 1843;
				
				case 21:
					return 1850;
				
				case 22:
					return 1857;
				
				case 26:
					return 2171;
				
				case 27:
					return 2178;
				
				case 28:
					return 2185;
				
				case 29:
					return 2192;
				
				case 30:
					return 2199;
				
				case 31:
					return 2206;
				
				case 32:
					return 2213;
				
				case 33:
					return 2220;
				
				case 34:
					return 2227;
				
				case 35:
					return 2234;
				
				case 39:
					return 2834;
				
				case 40:
					return 2841;
				
				case 41:
					return 2848;
				
				case 42:
					return 2855;
				
				case 43:
					return 2862;
				
				case 44:
					return 2869;
				
				case 45:
					return 2876;
				
				case 46:
					return 2883;
				
				case 47:
					return 2890;
				
				case 48:
					return 2897;
				
				case 52:
					return 2958;
				
				case 53:
					return 2965;
				
				case 54:
					return 2972;
				
				case 55:
					return 2979;
				
				case 56:
					return 2986;
				
				case 57:
					return 2993;
				
				case 58:
					return 3000;
				
				case 59:
					return 3007;
				
				case 60:
					return 3014;
				
				case 61:
					return 3021;
				
				case 65:
					return 3242;
				
				case 66:
					return 3250;
				
				case 67:
					return 3258;
				
				case 68:
					return 3266;
				
				case 69:
					return 3274;
				
				case 70:
					return 3282;
				
				case 71:
					return 3290;
				
				case 72:
					return 3298;
				
				case 73:
					return 3306;
				
				case 74:
					return 3314;
				
				case 75:
					return 3322;
				
				case 76:
					return 3330;
				
				case 77:
					return 3338;
				
				case 78:
					return 3346;
				
				case 79:
					return 3354;
				
				case 80:
					return 3362;
				
				case 81:
					return 3370;
				
				case 82:
					return 3378;
				
				case 83:
					return 3386;
				
				case 84:
					return 3394;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4038;
				
				case 89:
					return 4046;
				
				case 90:
					return 4054;
				
				case 91:
					return 4062;
				
				case 92:
					return 4070;
				
				case 93:
					return 4078;
				
				case 94:
					return 4086;
				
				case 95:
					return 4094;
				
				case 96:
					return 4102;
				
				case 97:
					return 4110;
				
				case 98:
					return 4118;
				
				case 99:
					return 4126;
				
				case 100:
					return 4134;
				
				case 101:
					return 4142;
				
				case 102:
					return 4150;
				
				case 103:
					return 4158;
				
				case 104:
					return 4166;
				
				case 105:
					return 4174;
				
				case 106:
					return 4182;
				
				case 107:
					return 4190;
				
				case 108:
					return 4198;
				
				case 109:
					return 4206;
				
				case 110:
					return 4214;
				
				case 111:
					return 4222;
				
				case 112:
					return 4230;
				
				case 113:
					return 4238;
				
				case 114:
					return 4246;
				
				case 115:
					return 4254;
				
				case 116:
					return 4262;
				
				case 117:
					return 4270;
				
				case 118:
					return 4278;
				
				case 119:
					return 4286;
				
				case 120:
					return 4294;
				
				case 121:
					return 4302;
				
				case 122:
					return 4310;
				
				case 123:
					return 4318;
				
				case 124:
					return 4326;
				
				case 125:
					return 4334;
				
				case 126:
					return 4342;
				
				case 127:
					return 4350;
				
				case 128:
					return 4358;
				
				case 129:
					return 4366;
				
				case 130:
					return 4374;
				
				case 131:
					return 4382;
				
				case 132:
					return 4390;
				
				case 133:
					return 4398;
				
				case 134:
					return 4406;
				
				case 135:
					return 4414;
				
				case 136:
					return 4422;
				
				case 137:
					return 4430;
				
				case 138:
					return 4438;
				
				case 139:
					return 4446;
				
				case 140:
					return 4454;
				
				case 141:
					return 4462;
				
				case 142:
					return 4470;
				
				case 143:
					return 4478;
				
				case 144:
					return 4486;
				
				case 145:
					return 4494;
				
				case 146:
					return 4502;
				
				case 147:
					return 4510;
				
				case 148:
					return 4518;
				
				case 149:
					return 4526;
				
				case 150:
					return 4534;
				
				case 151:
					return 4542;
				
				case 152:
					return 4550;
				
				case 153:
					return 4558;
				
				case 154:
					return 4566;
				
				case 155:
					return 4574;
				
				case 156:
					return 4582;
				
				case 157:
					return 4590;
				
				case 158:
					return 5483;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				
				case 160:
					return 5938;
				
				case 161:
					return 5945;
				
				case 162:
					return 5952;
				
				case 163:
					return 5959;
				
				case 164:
					return 5966;
				
				case 165:
					return 5973;
				
				case 166:
					return 5980;
				
				case 167:
					return 5987;
				
				case 168:
					return 5994;
				
				case 169:
					return 6001;
				
				case 170:
					return 6008;
				
				case 171:
					return 6015;
				
				case 172:
					return 6022;
				
				case 173:
					return 6029;
				
				case 174:
					return 6036;
				
				case 175:
					return 6043;
				
				case 176:
					return 6050;
				
				case 177:
					return 6057;
				
				case 178:
					return 6064;
				
				case 179:
					return 6071;
				
				case 180:
					return 6078;
				
				case 181:
					return 6085;
				
				case 182:
					return 6092;
				
				case 183:
					return 6099;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				
				case 185:
					return 6183;
				
				case 186:
					return 6190;
				
				case 187:
					return 6197;
				
				case 188:
					return 6204;
				
				case 189:
					return 6211;
				
				case 190:
					return 6218;
				
				case 191:
					return 6225;
				
				case 192:
					return 6232;
				
				case 193:
					return 6239;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				
				case 195:
					return 6580;
				
				case 196:
					return 6587;
				
				case 197:
					return 6594;
				
				case 198:
					return 6601;
				
				case 199:
					return 6608;
				
				case 200:
					return 6615;
				
				case 201:
					return 6622;
				
				case 202:
					return 6629;
				
				case 203:
					return 6636;
				
				case 204:
					return 6643;
				
				case 205:
					return 6650;
				
				case 206:
					return 6657;
				
				case 207:
					return 6664;
				
				case 208:
					return 6671;
				
				case 209:
					return 6678;
				
				case 210:
					return 6685;
				
				case 211:
					return 6692;
				
				case 212:
					return 6699;
				
				case 213:
					return 6706;
				
				case 214:
					return 6713;
				
				case 215:
					return 6720;
				
				case 216:
					return 6727;
				
				case 217:
					return 6734;
				
				case 218:
					return 6741;
				
				case 219:
					return 6748;
				
				case 220:
					return 6755;
				
				case 221:
					return 6762;
				
				case 222:
					return 6769;
				
				case 223:
					return 6776;
				
				case 224:
					return 6783;
				
				case 225:
					return 6790;
				
				case 226:
					return 6797;
				
				case 227:
					return 6804;
				
				case 228:
					return 6811;
				
				case 229:
					return 6818;
				
				case 230:
					return 6825;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				
				case 232:
					return 7302;
				
				case 233:
					return 7309;
				
				case 234:
					return 7316;
				
				case 235:
					return 7323;
				
				case 236:
					return 7330;
				
				case 237:
					return 7337;
				
				case 238:
					return 7344;
				
				case 239:
					return 7351;
				
				case 240:
					return 7358;
				
				case 241:
					return 7365;
				
				case 242:
					return 7372;
				
				case 243:
					return 7379;
				
				case 244:
					return 7386;
				
				case 245:
					return 7393;
				
				case 246:
					return 7400;
				
				case 247:
					return 7407;
				
				case 248:
					return 7414;
				
				case 249:
					return 7421;
				
				case 250:
					return 7428;
				
				case 251:
					return 7435;
				
				case 252:
					return 7442;
				
				case 253:
					return 7449;
				
				case 254:
					return 7456;
				
				case 255:
					return 7463;
				
				case 256:
					return 7470;
				
				case 257:
					return 7477;
				
				case 258:
					return 7484;
				
				case 259:
					return 7491;
				
				case 260:
					return 7498;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8018;
				
				case 262:
					return 8025;
				
				case 263:
					return 8032;
				
				case 264:
					return 8039;
				
				case 265:
					return 8046;
				
				case 266:
					return 8053;
				
				case 267:
					return 8060;
				
				case 268:
					return 8067;
				
				case 269:
					return 8074;
				
				case 270:
					return 8081;
				
				case 271:
					return 8542;
				
				case 272:
					return 8549;
				
				case 273:
					return 8556;
				
				case 274:
					return 8563;
				
				case 275:
					return 8570;
				
				case 276:
					return 8577;
				
				case 277:
					return 8584;
				
				case 278:
					return 8591;
				
				case 279:
					return 8598;
				
				case 280:
					return 8605;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1634;
				
				case 1:
					return 1641;
				
				case 2:
					return 1648;
				
				case 3:
					return 1655;
				
				case 4:
					return 1662;
				
				case 5:
					return 1669;
				
				case 6:
					return 1676;
				
				case 7:
					return 1683;
				
				case 8:
					return 1690;
				
				case 9:
					return 1697;
				
				case 10:
					return 1704;
				
				case 11:
					return 1710;
				
				case 12:
					return 1716;
				
				case 13:
					return 1722;
				
				case 14:
					return 1800;
				
				case 15:
					return 1807;
				
				case 16:
					return 1814;
				
				case 17:
					return 1821;
				
				case 18:
					return 1828;
				
				case 19:
					return 1835;
				
				case 20:
					return 1842;
				
				case 21:
					return 1849;
				
				case 22:
					return 1856;
				
				case 23:
					return 1863;
				
				case 24:
					return 1869;
				
				case 25:
					return 1875;
				
				case 26:
					return 2170;
				
				case 27:
					return 2177;
				
				case 28:
					return 2184;
				
				case 29:
					return 2191;
				
				case 30:
					return 2198;
				
				case 31:
					return 2205;
				
				case 32:
					return 2212;
				
				case 33:
					return 2219;
				
				case 34:
					return 2226;
				
				case 35:
					return 2233;
				
				case 36:
					return 2240;
				
				case 37:
					return 2246;
				
				case 38:
					return 2252;
				
				case 39:
					return 2833;
				
				case 40:
					return 2840;
				
				case 41:
					return 2847;
				
				case 42:
					return 2854;
				
				case 43:
					return 2861;
				
				case 44:
					return 2868;
				
				case 45:
					return 2875;
				
				case 46:
					return 2882;
				
				case 47:
					return 2889;
				
				case 48:
					return 2896;
				
				case 49:
					return 2903;
				
				case 50:
					return 2909;
				
				case 51:
					return 2915;
				
				case 52:
					return 2957;
				
				case 53:
					return 2964;
				
				case 54:
					return 2971;
				
				case 55:
					return 2978;
				
				case 56:
					return 2985;
				
				case 57:
					return 2992;
				
				case 58:
					return 2999;
				
				case 59:
					return 3006;
				
				case 60:
					return 3013;
				
				case 61:
					return 3020;
				
				case 62:
					return 3027;
				
				case 63:
					return 3033;
				
				case 64:
					return 3039;
				
				case 65:
					return 3240;
				
				case 66:
					return 3248;
				
				case 67:
					return 3256;
				
				case 68:
					return 3264;
				
				case 69:
					return 3272;
				
				case 70:
					return 3280;
				
				case 71:
					return 3288;
				
				case 72:
					return 3296;
				
				case 73:
					return 3304;
				
				case 74:
					return 3312;
				
				case 75:
					return 3320;
				
				case 76:
					return 3328;
				
				case 77:
					return 3337;
				
				case 78:
					return 3345;
				
				case 79:
					return 3352;
				
				case 80:
					return 3360;
				
				case 81:
					return 3368;
				
				case 82:
					return 3376;
				
				case 83:
					return 3384;
				
				case 84:
					return 3392;
				
				case 85:
					return 3400;
				
				case 86:
					return 3407;
				
				case 87:
					return 3414;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				
				case 89:
					return 4044;
				
				case 90:
					return 4052;
				
				case 91:
					return 4060;
				
				case 92:
					return 4068;
				
				case 93:
					return 4076;
				
				case 94:
					return 4084;
				
				case 95:
					return 4092;
				
				case 96:
					return 4100;
				
				case 97:
					return 4108;
				
				case 98:
					return 4116;
				
				case 99:
					return 4124;
				
				case 100:
					return 4133;
				
				case 101:
					return 4141;
				
				case 102:
					return 4148;
				
				case 103:
					return 4156;
				
				case 104:
					return 4164;
				
				case 105:
					return 4172;
				
				case 106:
					return 4180;
				
				case 107:
					return 4188;
				
				case 108:
					return 4196;
				
				case 109:
					return 4204;
				
				case 110:
					return 4212;
				
				case 111:
					return 4220;
				
				case 112:
					return 4228;
				
				case 113:
					return 4236;
				
				case 114:
					return 4244;
				
				case 115:
					return 4252;
				
				case 116:
					return 4260;
				
				case 117:
					return 4268;
				
				case 118:
					return 4276;
				
				case 119:
					return 4284;
				
				case 120:
					return 4293;
				
				case 121:
					return 4301;
				
				case 122:
					return 4308;
				
				case 123:
					return 4316;
				
				case 124:
					return 4324;
				
				case 125:
					return 4332;
				
				case 126:
					return 4340;
				
				case 127:
					return 4348;
				
				case 128:
					return 4356;
				
				case 129:
					return 4364;
				
				case 130:
					return 4372;
				
				case 131:
					return 4380;
				
				case 132:
					return 4388;
				
				case 133:
					return 4396;
				
				case 134:
					return 4404;
				
				case 135:
					return 4412;
				
				case 136:
					return 4420;
				
				case 137:
					return 4428;
				
				case 138:
					return 4436;
				
				case 139:
					return 4444;
				
				case 140:
					return 4453;
				
				case 141:
					return 4461;
				
				case 142:
					return 4468;
				
				case 143:
					return 4476;
				
				case 144:
					return 4484;
				
				case 145:
					return 4492;
				
				case 146:
					return 4500;
				
				case 147:
					return 4508;
				
				case 148:
					return 4516;
				
				case 149:
					return 4524;
				
				case 150:
					return 4532;
				
				case 151:
					return 4540;
				
				case 152:
					return 4548;
				
				case 153:
					return 4556;
				
				case 154:
					return 4564;
				
				case 155:
					return 4572;
				
				case 156:
					return 4580;
				
				case 157:
					return 4588;
				
				case 158:
					return 5481;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				
				case 160:
					return 5937;
				
				case 161:
					return 5944;
				
				case 162:
					return 5951;
				
				case 163:
					return 5958;
				
				case 164:
					return 5965;
				
				case 165:
					return 5972;
				
				case 166:
					return 5979;
				
				case 167:
					return 5986;
				
				case 168:
					return 5993;
				
				case 169:
					return 6000;
				
				case 170:
					return 6007;
				
				case 171:
					return 6014;
				
				case 172:
					return 6021;
				
				case 173:
					return 6028;
				
				case 174:
					return 6035;
				
				case 175:
					return 6042;
				
				case 176:
					return 6049;
				
				case 177:
					return 6056;
				
				case 178:
					return 6063;
				
				case 179:
					return 6070;
				
				case 180:
					return 6077;
				
				case 181:
					return 6084;
				
				case 182:
					return 6091;
				
				case 183:
					return 6098;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				
				case 185:
					return 6182;
				
				case 186:
					return 6189;
				
				case 187:
					return 6196;
				
				case 188:
					return 6203;
				
				case 189:
					return 6210;
				
				case 190:
					return 6217;
				
				case 191:
					return 6224;
				
				case 192:
					return 6231;
				
				case 193:
					return 6238;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				
				case 195:
					return 6579;
				
				case 196:
					return 6586;
				
				case 197:
					return 6593;
				
				case 198:
					return 6600;
				
				case 199:
					return 6607;
				
				case 200:
					return 6614;
				
				case 201:
					return 6621;
				
				case 202:
					return 6628;
				
				case 203:
					return 6635;
				
				case 204:
					return 6642;
				
				case 205:
					return 6649;
				
				case 206:
					return 6656;
				
				case 207:
					return 6663;
				
				case 208:
					return 6670;
				
				case 209:
					return 6677;
				
				case 210:
					return 6684;
				
				case 211:
					return 6691;
				
				case 212:
					return 6698;
				
				case 213:
					return 6705;
				
				case 214:
					return 6712;
				
				case 215:
					return 6719;
				
				case 216:
					return 6726;
				
				case 217:
					return 6733;
				
				case 218:
					return 6740;
				
				case 219:
					return 6747;
				
				case 220:
					return 6754;
				
				case 221:
					return 6761;
				
				case 222:
					return 6768;
				
				case 223:
					return 6775;
				
				case 224:
					return 6782;
				
				case 225:
					return 6789;
				
				case 226:
					return 6796;
				
				case 227:
					return 6803;
				
				case 228:
					return 6810;
				
				case 229:
					return 6817;
				
				case 230:
					return 6824;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				
				case 232:
					return 7301;
				
				case 233:
					return 7308;
				
				case 234:
					return 7315;
				
				case 235:
					return 7322;
				
				case 236:
					return 7329;
				
				case 237:
					return 7336;
				
				case 238:
					return 7343;
				
				case 239:
					return 7350;
				
				case 240:
					return 7357;
				
				case 241:
					return 7364;
				
				case 242:
					return 7371;
				
				case 243:
					return 7378;
				
				case 244:
					return 7385;
				
				case 245:
					return 7392;
				
				case 246:
					return 7399;
				
				case 247:
					return 7406;
				
				case 248:
					return 7413;
				
				case 249:
					return 7420;
				
				case 250:
					return 7427;
				
				case 251:
					return 7434;
				
				case 252:
					return 7441;
				
				case 253:
					return 7448;
				
				case 254:
					return 7455;
				
				case 255:
					return 7462;
				
				case 256:
					return 7469;
				
				case 257:
					return 7476;
				
				case 258:
					return 7483;
				
				case 259:
					return 7490;
				
				case 260:
					return 7497;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8017;
				
				case 262:
					return 8024;
				
				case 263:
					return 8031;
				
				case 264:
					return 8038;
				
				case 265:
					return 8045;
				
				case 266:
					return 8052;
				
				case 267:
					return 8059;
				
				case 268:
					return 8066;
				
				case 269:
					return 8073;
				
				case 270:
					return 8080;
				
				case 271:
					return 8541;
				
				case 272:
					return 8548;
				
				case 273:
					return 8555;
				
				case 274:
					return 8562;
				
				case 275:
					return 8569;
				
				case 276:
					return 8576;
				
				case 277:
					return 8583;
				
				case 278:
					return 8590;
				
				case 279:
					return 8597;
				
				case 280:
					return 8604;
				
				default:
			}
			break;
	}
	return 1629;
}

int func_924(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 281)
	{
		iVar0 = 0;
		while (iVar0 < 23)
		{
			if (iParam0 >= func_936(iVar0) && iParam0 < func_925(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_925(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
		
		case 14:
			return 192;
			break;
		
		case 15:
			return 202;
			break;
		
		case 16:
			return 212;
			break;
		
		case 17:
			return 222;
			break;
		
		case 18:
			return 236;
			break;
		
		case 19:
			return 246;
			break;
		
		case 20:
			return 256;
			break;
		
		case 21:
			return 268;
			break;
		
		case 22:
			return 278;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_934(iParam0);
		return func_933(iVar0);
	}
	return (func_926(iParam0, -1) * iParam0 + 1);
}

int func_926(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_929(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_928(iParam1))
			{
				return 0;
			}
			else if (func_927(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 == 125)
			{
				return 10;
			}
			else if (iParam1 == 126)
			{
				return 10;
			}
			else if (iParam1 <= 126 && iParam1 > 0)
			{
				if (Global_1049852[iParam1 /*1951*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049852[iParam1 /*1951*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049852[iParam1 /*1951*/].f_33 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
		
		case 21:
			return 10;
			break;
		
		case 22:
			return 10;
			break;
	}
	return 0;
}

int func_927(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_928(int iParam0)
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

int func_929(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_930(PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_930(PLAYER_ID(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_930(int iParam0, bool bParam1)
{
	if (Global_1590284 != func_398())
	{
		if (!func_932(Global_1590284))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PLAYER_ID() != Global_1590284)
			{
				if (IS_BIT_SET(Global_2424073[Global_1590284 /*421*/].f_195, 24) || func_931(Global_1590284))
				{
					return 1;
				}
			}
		}
	}
	return IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_195, 24);
}

int func_931(int iParam0)
{
	if (iParam0 != func_398())
	{
		return IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_195, 9);
	}
	return 0;
}

int func_932(int iParam0)
{
	if (iParam0 != func_398())
	{
		return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 2);
	}
	return 0;
}

int func_933(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		default:
	}
	return -1;
}

int func_934(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

void func_935(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_10163)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1671745[iParam0] - 1);
		if (bParam2)
		{
			if ((GET_FRAME_COUNT() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_936(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
		
		case 14:
			return 191;
			break;
		
		case 15:
			return 192;
			break;
		
		case 16:
			return 202;
			break;
		
		case 17:
			return 212;
			break;
		
		case 18:
			return 227;
			break;
		
		case 19:
			return 237;
			break;
		
		case 20:
			return 247;
			break;
		
		case 21:
			return 258;
			break;
		
		case 22:
			return 268;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_934(iParam0);
		return func_937(iVar0);
	}
	return (func_926(iParam0, -1) * iParam0);
}

int func_937(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		case 2:
			return 223;
		
		case 1:
			return 224;
		
		default:
	}
	return -1;
}

int func_938(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_939(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_935(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_50(func_923(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_940(int iParam0)
{
	switch (iParam0)
	{
		case -1881846085:
			return 0;
			break;
	}
	return -1;
}

int func_941(int iParam0)
{
	if (iParam0 != func_398())
	{
		if (Global_1590446[iParam0 /*871*/].f_273.f_335 != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_942()
{
	return func_50(6542, -1, 0) != 0;
}

bool func_943()
{
	return func_50(6163, -1, 0) != 0;
}

bool func_944()
{
	return func_50(5380, -1, 0) != 0;
}

bool func_945()
{
	return func_50(3828, -1, 0) != 0;
}

bool func_946()
{
	return func_50(3223, -1, 0) != 0;
}

bool func_947()
{
	return func_50(5379, -1, 0) != 0;
}

int func_948()
{
	int iVar0;
	
	iVar0 = func_181();
	if (iVar0 != func_398())
	{
		return Global_1628955[iVar0 /*614*/].f_11.f_98;
	}
	return 0;
}

int func_949(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_52();
	}
	if (iParam0 == 7 && !Global_262145.f_16972)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_934(iParam0);
		if (iVar1 == 0 && func_50(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_950(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_993(PLAYER_ID()) && iVar1 == 1)
		{
			return 1237;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1384285[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2578729[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 23)
		{
			return 0;
		}
		return Global_2578592[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

bool func_950(int iParam0)
{
	if (!Global_262145.f_23651)
	{
		return 0;
	}
	return func_50(7207, iParam0, 0) != 0;
}

int func_951(int iParam0)
{
	if (iParam0 != func_398())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_365 != 0;
	}
	return 0;
}

int func_952()
{
	if (Global_1674861.f_3 != 0)
	{
		return Global_1674861.f_3;
	}
	return -1;
}

int func_953()
{
	if (Global_1674861.f_2 != 0)
	{
		return Global_1674861.f_2;
	}
	return -1;
}

int func_954(int iParam0)
{
	if (iParam0 != func_398())
	{
		return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_330, 12);
	}
	return 0;
}

int func_955(int iParam0)
{
	if (iParam0 != func_398())
	{
		return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_330, 10);
	}
	return 0;
}

int func_956(int iParam0)
{
	if (iParam0 != func_398())
	{
		return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_330, 11);
	}
	return 0;
}

bool func_957(int iParam0)
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 4);
}

bool func_958(int iParam0)
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 3);
}

bool func_959(int iParam0)
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 2);
}

bool func_960(int iParam0)
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 1);
}

bool func_961(int iParam0)
{
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 31);
}

int func_962(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_398() || !func_977(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_972(iParam0, iParam2);
		
		case 1:
			return func_970(iParam0, iParam2);
		
		case 3:
			return func_969(iParam0);
		
		case 2:
			return func_964(iParam0, iParam2);
		
		case 4:
			return func_963(iParam0);
		
		default:
	}
	return 0;
}

bool func_963(int iParam0)
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 6);
}

int func_964(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_968(iParam0);
		
		case 11:
			return func_967(iParam0);
		
		case 12:
			return func_966(iParam0);
		
		case 13:
			return func_965(iParam0);
		
		default:
	}
	return 0;
}

bool func_965(int iParam0)
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 15);
}

bool func_966(int iParam0)
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 14);
}

bool func_967(int iParam0)
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 13);
}

bool func_968(int iParam0)
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 12);
}

bool func_969(int iParam0)
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 5);
}

int func_970(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_971(iParam0);
		
		case 6:
			return func_960(iParam0);
		
		case 7:
			return func_959(iParam0);
		
		case 8:
			return func_958(iParam0);
		
		case 9:
			return func_957(iParam0);
		
		default:
	}
	return 0;
}

bool func_971(int iParam0)
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 0);
}

int func_972(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_976(iParam0);
		
		case 1:
			return func_975(iParam0);
		
		case 2:
			return func_974(iParam0);
		
		case 3:
			return func_973(iParam0);
		
		case 4:
			return func_961(iParam0);
		
		default:
	}
	return 0;
}

bool func_973(int iParam0)
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 10);
}

bool func_974(int iParam0)
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 9);
}

bool func_975(int iParam0)
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 8);
}

bool func_976(int iParam0)
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_277.f_4, 7);
}

bool func_977(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_978(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_398())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_962(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_962(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_962(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_962(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_979()
{
	return func_50(6156, -1, 0) != 0;
}

int func_980(int iParam0)
{
	if (iParam0 != func_398())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_267 != 0;
	}
	return 0;
}

bool func_981()
{
	return func_50(6164, -1, 0) == 3;
}

bool func_982()
{
	return func_50(6164, -1, 0) == 2;
}

bool func_983()
{
	return func_50(6164, -1, 0) == 1;
}

int func_984()
{
	int iVar0;
	
	if (func_162())
	{
		return 4;
	}
	else if (func_175())
	{
		if (func_326(PLAYER_ID()))
		{
			return 8;
		}
		return 6;
	}
	if (func_234(1))
	{
		iVar0 = func_985(PLAYER_ID());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_179(1))
	{
		if (func_326(func_181()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_985(int iParam0)
{
	if (func_131(iParam0, 1))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_451;
	}
	return -1;
}

int func_986(int iParam0, int iParam1)
{
	return func_50(func_987(iParam1), iParam0, 0);
}

int func_987(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3898;
		
		case 1:
			return 3927;
		
		case 2:
			return 3931;
		
		case 3:
			return 3935;
		
		case 4:
			return 3939;
		
		case 5:
			return 5450;
		
		default:
	}
	return 3898;
}

int func_988(int iParam0)
{
	if (func_145(iParam0) == 225 || func_145(iParam0) == 226)
	{
		return func_143(iParam0);
	}
	return -1;
}

int func_989(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_398())
	{
		return 0;
	}
	if (func_294(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

var func_990()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_301(PLAYER_ID(), iVar0))
		{
			SET_BIT(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

int func_991(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_992(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_993(int iParam0)
{
	if (iParam0 != func_398())
	{
		return Global_1590446[iParam0 /*871*/].f_273.f_318 != 0;
	}
	return 0;
}

int func_994(int iParam0)
{
	if (iParam0 == func_398())
	{
		return -1;
	}
	return Global_1628955[iParam0 /*614*/].f_11.f_8[1];
}

int func_995(int iParam0)
{
	if (iParam0 == func_398())
	{
		return -1;
	}
	return Global_1628955[iParam0 /*614*/].f_11.f_8[0];
}

void func_996(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
			switch (iParam1)
			{
				case 0:
					func_997("kwUfKUus6EuQyNSL8KpY-w");
					func_997("yMTOFLfO2UKwzKrmgPP7kg");
					func_997("9mGvlJ1Cxk-HxC2zkAwdQg");
					break;
				
				case 2:
					func_997("tP5HSeCA0UiHnkRzakdO2Q");
					func_997("uEkrqoerQEmQ0uZRtp4rkw");
					func_997("xIXaDwts7kKz0sbMnwYlCQ");
					break;
				
				case 3:
					func_997("UOTaXepxrUOUEU7QtfBvGQ");
					break;
				
				case 6:
					func_997("734uySYXUk2ej47Ni5jlZw");
					break;
			}
			break;
		
		case 139:
			switch (iParam1)
			{
				case 1:
					func_997("OZ5hEthzqUSuK_x9YuO4uw");
					break;
				
				case 2:
					func_997("uEkrqoerQEmQ0uZRtp4rkw");
					break;
			}
			break;
		
		case 138:
			switch (iParam1)
			{
				case 2:
					func_997("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 3:
					func_997("uEkrqoerQEmQ0uZRtp4rkw");
					func_997("92t91kL3Wkqvl2Kc82cNSA");
					func_997("43Yoc5jfr0OwGfW9UP5TXA");
					break;
				
				case 5:
					func_997("WfnWlxu780CwC7LLUrLljw");
					break;
				
				case 6:
					func_997("lowxnyELLUCxqy_Q1uslIg");
					break;
				
				case 7:
					func_997("QmlvLMLCwkOvoZlkAstYxw");
					break;
			}
			break;
		
		case 141:
			switch (iParam1)
			{
				case 0:
					func_997("TT4ifq2kgEG6G1fCUYHXSQ");
					break;
			}
			break;
		
		case 134:
			switch (iParam1)
			{
				case 1:
					func_997("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 4:
					func_997("fOfm7nzMLkav0ldcSCNAzA");
					func_997("JMbOeJ2-ak-02KwNLtnOJg");
					break;
				
				case 5:
					func_997("3AAj-muvN0iHI5IMyGlboA");
					break;
				
				case 0:
					func_997("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 9:
					func_997("Ma78E44OMkGfYPmCPZXUNA");
					func_997("Pqz3l_Dhg0ar0yHiz2wMqQ");
					break;
				
				case 19:
					func_997("ZmoxEY6L60WSR-7I5IUjPg");
					break;
				
				case 10:
					func_997("gxmtJHj2OUWQDt8nNMy3TQ");
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
							func_997("lowxnyELLUCxqy_Q1uslIg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 2:
							func_997("dCWpYaU7CU-Bxz5s2qGjaA");
							break;
					}
					break;
				
				case 2:
					func_997("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 3:
					switch (iParam2)
					{
						case 1:
							func_997("Cl3Gh6-LMkuZ7Z_jPqSE8g");
							break;
						
						case 2:
							func_997("TT4ifq2kgEG6G1fCUYHXSQ");
							break;
					}
					break;
				
				case 4:
					func_997("A0vXbIK2WEmiVSUNYRGpvA");
					switch (iParam2)
					{
						case 2:
							func_997("3AAj-muvN0iHI5IMyGlboA");
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
							func_997("kXry-nXRbEC6ktiopjDDcg");
							break;
						
						case 1:
							func_997("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_997("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_997("fOfm7nzMLkav0ldcSCNAzA");
							func_997("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							func_997("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_997("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							func_997("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_997("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 3:
							func_997("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 1:
							func_997("gaJhsFMzFkyl3al5SRa6fQ");
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 1:
							func_997("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_997("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_997("fOfm7nzMLkav0ldcSCNAzA");
							func_997("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							func_997("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_997("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							func_997("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_997("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 3:
							func_997("xIXaDwts7kKz0sbMnwYlCQ");
							break;
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
								case 1:
									func_997("UOTaXepxrUOUEU7QtfBvGQ");
									break;
								
								case 2:
									func_997("xIXaDwts7kKz0sbMnwYlCQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_997("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 2:
									func_997("QmlvLMLCwkOvoZlkAstYxw");
									break;
								
								case 3:
									func_997("gxmtJHj2OUWQDt8nNMy3TQ");
									break;
								
								case 4:
									func_997("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									func_997("dCWpYaU7CU-Bxz5s2qGjaA");
									break;
								
								case 2:
									func_997("aGBjo2rKi0yMDLl3a2ATGA");
									func_997("yMTOFLfO2UKwzKrmgPP7kg");
									break;
								
								case 3:
									func_997("lhGatLUmgke_87surSFS5g");
									break;
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 1:
									func_997("VmS_SI5wSE2LuL9qItQqbw");
									break;
								
								case 4:
									func_997("f2lnL6wZPkGWUowu0yLm1Q");
									func_997("ZmoxEY6L60WSR-7I5IUjPg");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 1:
									func_997("Ma78E44OMkGfYPmCPZXUNA");
									break;
								
								case 2:
									func_997("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									func_997("W-OJzHlM-0ym9PsIASYZtw");
									func_997("uEkrqoerQEmQ0uZRtp4rkw");
									break;
								
								case 1:
									func_997("3AAj-muvN0iHI5IMyGlboA");
									break;
								
								case 3:
									func_997("TjGz31AMYE6bGCjAIitu6w");
									func_997("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 2:
									func_997("QmlvLMLCwkOvoZlkAstYxw");
									func_997("BktATxH9R0Wp2x0kWSbqjw");
									break;
								
								case 3:
									func_997("BktATxH9R0Wp2x0kWSbqjw");
									func_997("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 4:
									func_997("f2lnL6wZPkGWUowu0yLm1Q");
									break;
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
								case 1:
									func_997("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 3:
									func_997("PY8hdiWoAkudg9SpK8G2xQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_997("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
								
								case 1:
									func_997("9mGvlJ1Cxk-HxC2zkAwdQg");
									break;
								
								case 2:
									func_997("tP5HSeCA0UiHnkRzakdO2Q");
									break;
								
								case 3:
									func_997("kXry-nXRbEC6ktiopjDDcg");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 3:
									func_997("Cl3Gh6-LMkuZ7Z_jPqSE8g");
									break;
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
									func_997("Pqz3l_Dhg0ar0yHiz2wMqQ");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									func_997("W-OJzHlM-0ym9PsIASYZtw");
									break;
							}
							break;
					}
					break;
			}
			break;
	}
}

void func_997(char* sParam0)
{
	int iVar0;
	int iVar1;
	
	if (IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	iVar0 = GET_HASH_KEY(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (IS_BIT_SET(Global_2359721[iVar1 /*26*/].f_12, 11))
		{
			if (func_998(&(Global_2359721[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!IS_BIT_SET(Global_2359721[iVar1 /*26*/].f_13, 26))
				{
					SET_BIT(&(Global_2359721[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_998(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar1 = 0;
	iVar2 = func_1000(uParam0);
	if (iVar2 == -1)
	{
		return iVar1;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_999(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar1;
		
		default:
	}
	return iVar1;
}

struct<13> func_999(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar1 = func_1000(uParam0);
	if (iVar1 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_107189[iVar1 /*13*/];
		
		case 62:
			return Global_917806.f_9405[iVar1 /*13*/];
		
		default:
	}
	return Var0;
}

int func_1000(var uParam0)
{
	int iVar0;
	
	if (IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_1002(uParam0->f_1))
	{
		if (func_1001(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (IS_BIT_SET(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (ARE_STRINGS_EQUAL(&(Global_794709.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!IS_BIT_SET(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1218)
			{
				if (IS_BIT_SET(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (ARE_STRINGS_EQUAL(&(Global_794709.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (IS_BIT_SET(Global_917806.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (ARE_STRINGS_EQUAL(&(Global_917806.f_604[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!IS_BIT_SET(Global_917806.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 100)
			{
				if (IS_BIT_SET(Global_917806.f_604[iVar0 /*88*/].f_76, 13))
				{
					if (ARE_STRINGS_EQUAL(&(Global_917806.f_604[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == PLAYER_ID())
	{
		if (IS_BIT_SET(Global_939452.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (ARE_STRINGS_EQUAL(&(Global_939452.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (IS_BIT_SET(Global_939452.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (IS_BIT_SET(Global_939452.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (ARE_STRINGS_EQUAL(&(Global_939452.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_1001(var uParam0)
{
	if (Global_2398103)
	{
		if (ARE_STRINGS_EQUAL(&(Global_2398103.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_1002(int iParam0)
{
	return iParam0 == 9999;
}

void func_1003()
{
	struct<4> Var0;
	
	if (!DOES_BLIP_EXIST(iLocal_135))
	{
		if (func_1007())
		{
			iLocal_135 = ADD_BLIP_FOR_COORD(func_491());
			if (Local_112.f_197 == 2)
			{
				SET_BLIP_SPRITE(iLocal_135, 493);
			}
			else
			{
				SET_BLIP_SPRITE(iLocal_135, 441);
			}
			SET_BLIP_FLASHES(iLocal_135, true);
			SET_BLIP_FLASH_TIMER(iLocal_135, 7000);
			SET_BLIP_PRIORITY(iLocal_135, 9);
			Var0 = { func_1006() };
			SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_135, &Var0);
			if (Local_112.f_197 == 2)
			{
				func_1004(&iLocal_135, iLocal_1310);
			}
			else
			{
				func_1004(&iLocal_135, 29);
			}
			if (!IS_BIT_SET(iLocal_114, 30))
			{
				FLASH_MINIMAP_DISPLAY();
				SET_BIT(&iLocal_114, 30);
			}
		}
	}
}

void func_1004(int iParam0, int iParam1)
{
	int iVar0;
	
	if (DOES_BLIP_EXIST(*iParam0))
	{
		iVar0 = func_1005(iParam1);
		SET_BLIP_COLOUR(*iParam0, iVar0);
	}
}

int func_1005(int iParam0)
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

struct<4> func_1006()
{
	struct<4> Var0;
	
	switch (Local_112.f_197)
	{
		case 0:
			StringCopy(&Var0, "PEN_BLIP", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "CAG_BLIP", 16);
			break;
	}
	return Var0;
}

int func_1007()
{
	if (Local_112.f_197 != 2)
	{
		return 1;
	}
	else if (func_908())
	{
		return 1;
	}
	else if (func_38(PLAYER_ID()) >= 2)
	{
		return 1;
	}
	return 0;
}

void func_1008(vector3 vParam0, bool bParam1)
{
	if (!DOES_BLIP_EXIST(iLocal_134))
	{
		if (func_1007())
		{
			if (!bParam1)
			{
				iLocal_134 = ADD_BLIP_FOR_RADIUS(vParam0, fLocal_140);
				if (Local_112.f_197 != 2)
				{
					SET_BLIP_COLOUR(iLocal_134, 5);
				}
				else
				{
					SET_BLIP_COLOUR(iLocal_134, 5);
				}
			}
			else
			{
				iLocal_134 = ADD_BLIP_FOR_RADIUS(func_491(), (func_492() / 2f));
				if (Local_112.f_197 != 2)
				{
					func_1004(&iLocal_134, 29);
				}
				else
				{
					func_1004(&iLocal_134, iLocal_1310);
				}
			}
			SET_BLIP_ALPHA(iLocal_134, 100);
			_0x75A16C3DA34F1245(iLocal_134, false);
		}
	}
}

Vector3 func_1009()
{
	return vLocal_152[0 /*3*/];
}

int func_1010(bool bParam0)
{
	int iVar0;
	
	if (Local_112.f_197 != 2)
	{
		if (func_375(PLAYER_ID()))
		{
			iVar0 = 1;
		}
		if (func_1068(0))
		{
			iVar0 = 1;
		}
		if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 6))
		{
			if (func_375(PLAYER_ID()))
			{
				iVar0 = 1;
			}
		}
	}
	else
	{
		if (func_368())
		{
			iVar0 = 1;
		}
		if (func_1060())
		{
			iVar0 = 1;
		}
		if (!func_1033(1, 1, 1, 0))
		{
			iVar0 = 1;
		}
		if (func_1032(200))
		{
			iVar0 = 1;
		}
	}
	if (bParam0)
	{
		if (Local_112.f_197 == 2)
		{
			if (!func_1033(1, 1, 1, 0))
			{
				iVar0 = 1;
			}
		}
		else if (!func_1020(0, 1, 1))
		{
			iVar0 = 1;
		}
	}
	if (!func_1012(136, 0, 0))
	{
		iVar0 = 1;
	}
	if (Global_1662552)
	{
		iVar0 = 1;
	}
	if (func_1011(PLAYER_ID()))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1011(int iParam0)
{
	if (!func_1276(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590446[iParam0 /*871*/].f_35;
}

bool func_1012(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_7686 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_1016(PLAYER_ID(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4718 == 1)
		{
			return 1;
		}
	}
	if (func_1015() || func_1014())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_1013())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return IS_BIT_SET(Global_1574634[iVar1], iVar0);
}

int func_1013()
{
	int iVar0;
	
	if (Global_1312447)
	{
		return 1;
	}
	if (IS_BIT_SET(Global_2531497.f_1731, 23))
	{
		return 1;
	}
	if (func_1015())
	{
		return 1;
	}
	if (func_1014())
	{
		return 1;
	}
	iVar0 = Global_1384267[func_51(-1)];
	if (IS_BIT_SET(iVar0, 7))
	{
		SET_BIT(&(Global_2531497.f_1731), 23);
		return 1;
	}
	return 0;
}

bool func_1014()
{
	return Global_1312861;
}

bool func_1015()
{
	return Global_1312863;
}

bool func_1016(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_1019())
	{
		return 0;
	}
	if (func_1018())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_1017(iParam1);
	iVar1 = uVar0;
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_725, iVar1);
}

int func_1017(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		case 22:
			return 8;
		
		case 53:
			return 9;
		
		case 34:
			return 10;
		
		case 152:
			return 11;
		
		case 85:
			return 12;
		
		case 84:
			return 13;
		
		case 0:
			return 14;
		
		case 1:
			return 15;
		
		case 153:
			return 16;
		
		case 151:
			return 17;
		
		case 14:
			return 18;
		
		case 15:
			return 19;
		
		case 24:
			return 20;
		
		case 30:
			return 21;
		
		case 46:
			return 22;
		
		case 47:
			return 23;
		
		case 54:
			return 24;
		
		case 51:
			return 25;
		
		case 60:
			return 26;
		
		case 62:
			return 27;
		
		case 66:
			return 28;
		
		case 69:
			return 29;
		
		case 154:
			return 30;
		
		case 82:
			return 31;
		
		case 157:
			return 32;
		
		default:
	}
	return 1;
}

bool func_1018()
{
	return IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_146, 3);
}

int func_1019()
{
	if (Global_1312447)
	{
		return 1;
	}
	if (func_1015())
	{
		return 1;
	}
	if (func_1014())
	{
		return 1;
	}
	return func_286(120, -1);
}

int func_1020(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_1031(PLAYER_ID(), 29))
	{
		return 0;
	}
	if (func_372(PLAYER_ID(), 21))
	{
		return 0;
	}
	if (func_372(PLAYER_ID(), 25))
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
	if (func_820(PLAYER_ID()))
	{
		return 0;
	}
	if (func_637())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_1030(PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_615())
	{
		return 0;
	}
	if (bParam0)
	{
		if (func_45(PLAYER_ID()))
		{
			return 0;
		}
	}
	else if (func_38(PLAYER_ID()) == 3)
	{
		return 0;
	}
	if (func_1029(PLAYER_ID()) != func_398() && func_1029(PLAYER_ID()) == func_119(PLAYER_ID()))
	{
		return 0;
	}
	if (func_1027(func_1028()) && func_528(PLAYER_ID()) != 236)
	{
		return 0;
	}
	if (func_844())
	{
		return 0;
	}
	if (func_455())
	{
		return 0;
	}
	if (NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_608(PLAYER_ID()))
	{
		return 0;
	}
	if (!func_611())
	{
		return 0;
	}
	if (func_372(PLAYER_ID(), 0) || func_372(PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_372(PLAYER_ID(), 12) || func_372(PLAYER_ID(), 14)) || func_372(PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_1026(PLAYER_ID(), 1, 1))
	{
		if (!func_663() && !Global_2507941)
		{
			return 0;
		}
	}
	if (func_1025(PLAYER_ID()))
	{
		return 0;
	}
	if (func_1024())
	{
		return 0;
	}
	if (Global_1662552)
	{
		return 0;
	}
	if (func_1011(PLAYER_ID()))
	{
		return 0;
	}
	if (func_1023())
	{
		return 0;
	}
	if (func_1022(PLAYER_ID()) && Global_1590095.f_171)
	{
		return 0;
	}
	if (func_1021())
	{
		return 0;
	}
	if (func_632(PLAYER_ID()))
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

bool func_1021()
{
	return Global_1676879.f_443;
}

int func_1022(int iParam0)
{
	if (func_928(Global_1590446[iParam0 /*871*/].f_273.f_26))
	{
		return 1;
	}
	return 0;
}

int func_1023()
{
	if (Global_4254407.f_904 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_1024()
{
	return Global_98721.f_346 > 0;
}

bool func_1025(int iParam0)
{
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_24, 11);
}

int func_1026(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_398())
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

int func_1027(int iParam0)
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

int func_1028()
{
	return Global_2437549.f_2708[0 /*80*/].f_1;
}

int func_1029(int iParam0)
{
	return Global_1628955[iParam0 /*614*/].f_11.f_35;
}

int func_1030(int iParam0)
{
	if (Global_2424073[iParam0 /*421*/].f_261.f_4 != 0 || Global_2424073[iParam0 /*421*/].f_261.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_1031(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_11.f_5, iParam1);
}

int func_1032(int iParam0)
{
	if (!func_175() && !func_131(PLAYER_ID(), 1))
	{
		if (!func_41(PLAYER_ID()))
		{
			if (func_368())
			{
				return 1;
			}
		}
	}
	switch (iParam0)
	{
		case 148:
			break;
		
		case 151:
			break;
		
		case 152:
			break;
	}
	return 0;
}

int func_1033(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_1031(PLAYER_ID(), 29))
	{
		return 0;
	}
	if (func_372(PLAYER_ID(), 21))
	{
		return 0;
	}
	if (func_372(PLAYER_ID(), 25))
	{
		return 0;
	}
	if (bParam2)
	{
		if (NETWORK_END_TUTORIAL_SESSION())
		{
			return 0;
		}
	}
	if (!func_555(PLAYER_ID()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (NETWORK_SET_IN_MP_CUTSCENE())
		{
			return 0;
		}
	}
	if (func_820(PLAYER_ID()))
	{
		return 0;
	}
	if (func_637())
	{
		return 0;
	}
	if (func_615())
	{
		return 0;
	}
	if (func_844())
	{
		return 0;
	}
	if (func_455())
	{
		return 0;
	}
	if (NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_608(PLAYER_ID()))
	{
		return 0;
	}
	if (!func_611())
	{
		return 0;
	}
	if (func_372(PLAYER_ID(), 0) || func_372(PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_372(PLAYER_ID(), 12) || func_372(PLAYER_ID(), 14)) || func_372(PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_1053(PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_1038())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_1024())
		{
			return 0;
		}
	}
	if (Global_1662552)
	{
		return 0;
	}
	if (func_1011(PLAYER_ID()))
	{
		return 0;
	}
	if (func_1023())
	{
		return 0;
	}
	if (func_1037(PLAYER_ID()))
	{
		return 0;
	}
	if ((func_1036(PLAYER_ID()) && func_1035(PLAYER_ID()) == 123) && !bParam3)
	{
		return 0;
	}
	if (func_1034())
	{
		return 0;
	}
	if (IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_24, 4))
	{
		return 0;
	}
	if (func_1030(PLAYER_ID()))
	{
		return 0;
	}
	if (func_632(PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

bool func_1034()
{
	return Global_1676879.f_4090 != -1;
}

int func_1035(int iParam0)
{
	if (iParam0 != func_398() && func_1276(iParam0, 1, 1))
	{
		return Global_2424073[iParam0 /*421*/].f_309.f_14;
	}
	return -1;
}

int func_1036(int iParam0)
{
	if (iParam0 != func_398() && func_1276(iParam0, 1, 1))
	{
		return IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309, 3);
	}
	return 0;
}

int func_1037(int iParam0)
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

int func_1038()
{
	int iVar0;
	
	iVar0 = func_145(PLAYER_ID());
	if (((func_928(Global_1590446[PLAYER_ID() /*871*/].f_273.f_26) || func_1052(PLAYER_ID())) || func_1051(PLAYER_ID())) || func_1050(PLAYER_ID()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_1049(PLAYER_ID()))
	{
		if (func_161(iVar0) || func_991(iVar0))
		{
			return 1;
		}
	}
	if (func_1048(PLAYER_ID()))
	{
		if (func_991(iVar0))
		{
			return 1;
		}
	}
	if (func_1047(PLAYER_ID()))
	{
		if (func_150(iVar0))
		{
			return 1;
		}
	}
	if (func_1046(PLAYER_ID()))
	{
		if (func_149(iVar0))
		{
			return 1;
		}
	}
	if (func_1045(PLAYER_ID()))
	{
		if (func_148(iVar0))
		{
			return 1;
		}
	}
	if (func_1044(PLAYER_ID()))
	{
		if (func_1043(iVar0))
		{
			return 1;
		}
	}
	if (func_1042(PLAYER_ID(), 0))
	{
		if (func_864(iVar0))
		{
			if (func_1041(PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	if (func_1039(PLAYER_ID()))
	{
		if (func_138(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1039(int iParam0)
{
	if (iParam0 != func_398())
	{
		if (func_1276(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_1040(Global_2424073[iParam0 /*421*/].f_309.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_1040(int iParam0)
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

int func_1041(int iParam0)
{
	if (func_1029(iParam0) != func_398())
	{
		return func_1029(iParam0) == func_119(iParam0);
	}
	return 0;
}

int func_1042(int iParam0, bool bParam1)
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
	if (iParam0 != func_398())
	{
		if (func_1276(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_398())
			{
				return func_1040(Global_2424073[iParam0 /*421*/].f_309.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_1043(int iParam0)
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_1044(int iParam0)
{
	if (iParam0 != func_398())
	{
		if (func_1276(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_1040(Global_2424073[iParam0 /*421*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_1045(int iParam0)
{
	if (iParam0 != func_398())
	{
		if (func_1276(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_1040(Global_2424073[iParam0 /*421*/].f_309.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_1046(int iParam0)
{
	if (iParam0 != func_398())
	{
		if (func_1276(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_1040(Global_2424073[iParam0 /*421*/].f_309.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_1047(int iParam0)
{
	if (iParam0 != func_398())
	{
		if (func_1276(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_1040(Global_2424073[iParam0 /*421*/].f_309.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_1048(int iParam0)
{
	if (iParam0 != func_398())
	{
		if (func_1276(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_1040(Global_2424073[iParam0 /*421*/].f_309.f_5) == 2;
			}
		}
	}
	return 0;
}

int func_1049(int iParam0)
{
	if (func_927(Global_1590446[iParam0 /*871*/].f_273.f_26, -1))
	{
		return 1;
	}
	return 0;
}

int func_1050(int iParam0)
{
	if (func_929(Global_1590446[iParam0 /*871*/].f_273.f_26, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_1051(int iParam0)
{
	if (iParam0 != func_398())
	{
		if (func_1276(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_1040(Global_2424073[iParam0 /*421*/].f_309.f_5) == 1;
			}
		}
	}
	return 0;
}

int func_1052(int iParam0)
{
	if (iParam0 != func_398())
	{
		if (func_1276(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_1040(Global_2424073[iParam0 /*421*/].f_309.f_5) == 0;
			}
		}
	}
	return 0;
}

int func_1053(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
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
		if (func_1052(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_1048(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_1051(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_1047(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_1046(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_1045(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_1059(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_1044(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_1058(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_1042(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_1057(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_1039(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_1056(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_1055(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_1054(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1054(int iParam0)
{
	if (iParam0 != func_398())
	{
		if (func_1276(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_1040(Global_2424073[iParam0 /*421*/].f_309.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_1055(int iParam0)
{
	if (iParam0 != func_398())
	{
		if (func_1276(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_1040(Global_2424073[iParam0 /*421*/].f_309.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_1056(int iParam0)
{
	if (iParam0 != func_398())
	{
		if (func_1276(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_1040(Global_2424073[iParam0 /*421*/].f_309.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_1057(int iParam0)
{
	if (iParam0 != func_398())
	{
		if (func_1276(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_1040(Global_2424073[iParam0 /*421*/].f_309.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_1058(int iParam0)
{
	if (iParam0 != func_398())
	{
		if (func_1276(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_1040(Global_2424073[iParam0 /*421*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_1059(int iParam0)
{
	if (iParam0 != func_398())
	{
		if (func_1276(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1 && Global_2424073[iParam0 /*421*/].f_309.f_8 != func_398())
			{
				return func_1040(Global_2424073[iParam0 /*421*/].f_309.f_5) == 8;
			}
		}
	}
	return 0;
}

int func_1060()
{
	return 0;
}

void func_1061()
{
	int iVar0;
	
	if (iLocal_1310 == 0)
	{
		iVar0 = func_393();
		if (iVar0 != func_398())
		{
			iLocal_1310 = func_1062(iVar0);
		}
	}
}

int func_1062(int iParam0)
{
	int iVar0;
	
	iVar0 = func_130(iParam0);
	if (iVar0 != -1)
	{
		return func_128(iVar0);
	}
	return 1;
}

var func_1063()
{
	return Global_262145.f_11147;
}

float func_1064()
{
	if (Local_112.f_197 != 2)
	{
		return Global_262145.f_11144;
	}
	return Global_262145.f_18349;
}

void func_1065()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	if (!func_31(vLocal_152[0 /*3*/], 0f, 0f, 0f, 0))
	{
		return;
	}
	switch (Local_112.f_167)
	{
		case 0:
			vLocal_152[0 /*3*/] = { 1476.637f, -2436.075f, 65.2401f };
			vLocal_152[1 /*3*/] = { 1591.158f, -1980.835f, 93.9884f };
			vLocal_152[2 /*3*/] = { 1105.58f, -1734.014f, 34.7122f };
			vLocal_152[3 /*3*/] = { 674.1869f, -1733.183f, 28.3527f };
			vLocal_152[4 /*3*/] = { 276.4475f, -1857.687f, 25.8607f };
			vLocal_152[5 /*3*/] = { 241.6554f, -1713.72f, 28.1339f };
			vLocal_152[6 /*3*/] = { 276.8612f, -1670.451f, 28.3137f };
			vLocal_152[7 /*3*/] = { 158.5084f, -1512.412f, 28.1416f };
			vLocal_152[8 /*3*/] = { 154.052f, -1394.604f, 28.3049f };
			vLocal_152[9 /*3*/] = { 297.3363f, -1202.901f, 28.1848f };
			vLocal_152[10 /*3*/] = { 216.0453f, -1130.863f, 28.3051f };
			vLocal_152[11 /*3*/] = { 303.6096f, -1124.259f, 28.4586f };
			vLocal_152[12 /*3*/] = { 349.6563f, -953.8064f, 28.4776f };
			vLocal_152[13 /*3*/] = { 228.3761f, -955.8815f, 28.3232f };
			iLocal_154 = 14;
			break;
		
		case 1:
			vLocal_152[0 /*3*/] = { -1900.185f, 2050.775f, 139.7211f };
			vLocal_152[1 /*3*/] = { -1797.919f, 1886.775f, 147.74f };
			vLocal_152[2 /*3*/] = { -1710.175f, 1885.316f, 160.217f };
			vLocal_152[3 /*3*/] = { -1610.52f, 2033.944f, 101.5237f };
			vLocal_152[4 /*3*/] = { -1517.004f, 2141.703f, 55.0511f };
			vLocal_152[5 /*3*/] = { -1337.505f, 2178.097f, 51.2807f };
			vLocal_152[6 /*3*/] = { -1147.637f, 2341.332f, 98.8094f };
			vLocal_152[7 /*3*/] = { -934.5955f, 2262.843f, 140.7183f };
			vLocal_152[8 /*3*/] = { -730.47f, 2344.86f, 68.405f };
			vLocal_152[9 /*3*/] = { -708.701f, 2426.99f, 61.1469f };
			vLocal_152[10 /*3*/] = { -573.3401f, 2500.494f, 50.3152f };
			vLocal_152[11 /*3*/] = { -545.0461f, 2672.93f, 44.4979f };
			vLocal_152[12 /*3*/] = { -436.4757f, 2756.389f, 44.6457f };
			vLocal_152[13 /*3*/] = { -322.5151f, 2775.025f, 61.0514f };
			vLocal_152[14 /*3*/] = { -149.1279f, 2737.515f, 54.9277f };
			vLocal_152[15 /*3*/] = { 222.302f, 2489.443f, 53.8394f };
			vLocal_152[16 /*3*/] = { 569.7415f, 2454.868f, 58.4488f };
			vLocal_152[17 /*3*/] = { 753.546f, 2518.788f, 72.1194f };
			vLocal_152[18 /*3*/] = { 924.3738f, 2593.375f, 60.2089f };
			vLocal_152[19 /*3*/] = { 965.1749f, 2621.371f, 45.0674f };
			vLocal_152[20 /*3*/] = { 1039.363f, 2671.289f, 38.5509f };
			iLocal_154 = 21;
			break;
		
		case 2:
			vLocal_152[0 /*3*/] = { 2304f, 1469f, 66f };
			vLocal_152[1 /*3*/] = { 2131f, 2031f, 96f };
			vLocal_152[2 /*3*/] = { 2059f, 2868f, 52f };
			vLocal_152[3 /*3*/] = { 2707f, 3485f, 64f };
			vLocal_152[4 /*3*/] = { 2855f, 3729f, 47f };
			vLocal_152[5 /*3*/] = { 2506f, 4153f, 41f };
			vLocal_152[6 /*3*/] = { 2885f, 4472f, 51f };
			vLocal_152[7 /*3*/] = { 2786.236f, 4941.378f, 32.6857f };
			vLocal_152[8 /*3*/] = { 2890.608f, 5034.026f, 30.7725f };
			vLocal_152[9 /*3*/] = { 3058.765f, 5052.091f, 24.441f };
			vLocal_152[10 /*3*/] = { 3063.052f, 5094.116f, 23.0524f };
			vLocal_152[11 /*3*/] = { 3131.718f, 5101.371f, 20.6628f };
			vLocal_152[12 /*3*/] = { 3175.018f, 5118.771f, 16.61f };
			vLocal_152[13 /*3*/] = { 3228.467f, 5133.4f, 18.321f };
			vLocal_152[14 /*3*/] = { 3283.499f, 5150.864f, 17.6323f };
			vLocal_152[15 /*3*/] = { 3297.67f, 5150.701f, 17.3023f };
			vLocal_152[16 /*3*/] = { 3320.565f, 5151.295f, 17.3289f };
			vLocal_152[17 /*3*/] = { 3337.017f, 5151.827f, 17.4344f };
			vLocal_152[18 /*3*/] = { 3348.801f, 5152.016f, 18.4475f };
			iLocal_154 = 19;
			break;
		
		case 3:
			func_1067();
			vLocal_152[0 /*3*/] = { -1210.197f, -2437.739f, 12.9452f };
			vLocal_152[1 /*3*/] = { -1342.587f, -2667.462f, 12.9449f };
			vLocal_152[2 /*3*/] = { -1220.798f, -2861.65f, 12.9455f };
			vLocal_152[3 /*3*/] = { -1126.435f, -2699.413f, 22.00294f };
			vLocal_152[4 /*3*/] = { -1017.039f, -2713.215f, 34.56547f };
			vLocal_152[5 /*3*/] = { -936.5955f, -2585.454f, 21.38621f };
			vLocal_152[6 /*3*/] = { -841.7922f, -2569.529f, 16.83603f };
			vLocal_152[7 /*3*/] = { -723.1095f, -2396.833f, 17.03123f };
			vLocal_152[8 /*3*/] = { -616.2985f, -2279.408f, 13.04065f };
			vLocal_152[9 /*3*/] = { -677.7834f, -2181.811f, 14.21462f };
			vLocal_152[10 /*3*/] = { -613.1539f, -2109.985f, 21.81665f };
			vLocal_152[11 /*3*/] = { -475.038f, -2148f, 17.4868f };
			vLocal_152[12 /*3*/] = { -336.4597f, -2143.653f, 13.9572f };
			vLocal_152[13 /*3*/] = { -256.3312f, -2131.896f, 22.1408f };
			vLocal_152[14 /*3*/] = { -162.249f, -2084.908f, 26.85073f };
			vLocal_152[15 /*3*/] = { -161.8921f, -2043.37f, 21.8606f };
			vLocal_152[16 /*3*/] = { -154.6475f, -2009.529f, 21.8819f };
			vLocal_152[17 /*3*/] = { -186.8038f, -2005.34f, 26.6204f };
			vLocal_152[18 /*3*/] = { -216.7214f, -1999.232f, 26.7554f };
			iLocal_154 = 19;
			break;
		
		case 4:
			vLocal_152[0 /*3*/] = { 105.443f, 7028.38f, 10.2844f };
			vLocal_152[1 /*3*/] = { 157.7284f, 6525.143f, 30.6533f };
			vLocal_152[2 /*3*/] = { -59.2422f, 6653.804f, 28.721f };
			vLocal_152[3 /*3*/] = { -168.4514f, 6476.554f, 29.0678f };
			vLocal_152[4 /*3*/] = { -111.8802f, 6419.246f, 30.4455f };
			vLocal_152[5 /*3*/] = { -154.2424f, 6339.732f, 30.6176f };
			vLocal_152[6 /*3*/] = { -93.9484f, 6279.499f, 30.3124f };
			vLocal_152[7 /*3*/] = { -182.7545f, 6195.686f, 30.1968f };
			vLocal_152[8 /*3*/] = { -260.1141f, 6185.812f, 30.4429f };
			vLocal_152[9 /*3*/] = { -304.2122f, 6227.968f, 30.4542f };
			vLocal_152[10 /*3*/] = { -473.7666f, 6066.529f, 29.34f };
			vLocal_152[11 /*3*/] = { -715.7206f, 6049.093f, -0.0726f };
			vLocal_152[12 /*3*/] = { -811.3691f, 5957.282f, 19.4103f };
			vLocal_152[13 /*3*/] = { -897.6384f, 6050.558f, 43.1834f };
			iLocal_154 = 14;
			break;
		
		case 6:
			vLocal_152[0 /*3*/] = { 770.8729f, -232.9857f, 65.1145f };
			vLocal_152[1 /*3*/] = { 838.7502f, -256.9497f, 64.6297f };
			vLocal_152[2 /*3*/] = { 903.3063f, -221.7793f, 68.666f };
			vLocal_152[3 /*3*/] = { 935.5661f, -166.9423f, 73.4974f };
			vLocal_152[4 /*3*/] = { 935.502f, -150.7537f, 73.7236f };
			vLocal_152[5 /*3*/] = { 903.4067f, -123.2328f, 76.2099f };
			vLocal_152[6 /*3*/] = { 881.9219f, -103.4221f, 78.4213f };
			vLocal_152[7 /*3*/] = { 880.8146f, -80.6718f, 77.7643f };
			vLocal_152[8 /*3*/] = { 924.9553f, -20.0444f, 77.7643f };
			vLocal_152[9 /*3*/] = { 953.8312f, -19.9404f, 77.764f };
			vLocal_152[10 /*3*/] = { 968.3574f, -3.2091f, 79.9909f };
			vLocal_152[11 /*3*/] = { 1009.373f, 64.5172f, 79.9909f };
			vLocal_152[12 /*3*/] = { 1004.334f, 70.7857f, 79.9909f };
			vLocal_152[13 /*3*/] = { 961.9669f, 97.0632f, 79.9909f };
			vLocal_152[14 /*3*/] = { 974.4698f, 116.5434f, 79.9909f };
			vLocal_152[15 /*3*/] = { 1023.872f, 169.1899f, 79.9905f };
			vLocal_152[16 /*3*/] = { 1023.795f, 181.0932f, 79.8559f };
			vLocal_152[17 /*3*/] = { 1003.224f, 191.8311f, 79.9087f };
			vLocal_152[18 /*3*/] = { 945.6973f, 122.5348f, 79.7235f };
			vLocal_152[19 /*3*/] = { 931.2999f, 104.402f, 78.3884f };
			vLocal_152[20 /*3*/] = { 884.1791f, 48.7134f, 77.631f };
			vLocal_152[21 /*3*/] = { 820.7046f, -20.0586f, 79.7007f };
			vLocal_152[22 /*3*/] = { 824.5161f, -65.76f, 79.6442f };
			vLocal_152[23 /*3*/] = { 854.3058f, -113.1723f, 78.3323f };
			vLocal_152[24 /*3*/] = { 847.928f, -140.3758f, 77.3008f };
			vLocal_152[25 /*3*/] = { 825.0543f, -176.4968f, 71.886f };
			vLocal_152[26 /*3*/] = { 803.1815f, -203.4303f, 71.9304f };
			vLocal_152[27 /*3*/] = { 772.341f, -248.5203f, 65.1143f };
			vLocal_152[28 /*3*/] = { 766.5759f, -268.8026f, 65.4267f };
			vLocal_152[29 /*3*/] = { 751.6126f, -300.7643f, 58.892f };
			vLocal_152[30 /*3*/] = { 723.4518f, -321.204f, 51.9976f };
			vLocal_152[31 /*3*/] = { 691.1819f, -341.8955f, 39.0741f };
			vLocal_152[32 /*3*/] = { 644.3198f, -353.9926f, 29.0699f };
			vLocal_152[33 /*3*/] = { 628.4379f, -365.0165f, 23.5751f };
			vLocal_152[34 /*3*/] = { 607.2872f, -399.7075f, 23.7997f };
			vLocal_152[35 /*3*/] = { 599.2954f, -478.0787f, 23.7562f };
			vLocal_152[36 /*3*/] = { 566.7018f, -553.8478f, 23.7368f };
			vLocal_152[37 /*3*/] = { 538.7103f, -643.3187f, 23.7397f };
			vLocal_152[38 /*3*/] = { 508.0503f, -682.8132f, 24.2827f };
			vLocal_152[39 /*3*/] = { 456.5249f, -685.2498f, 26.8735f };
			vLocal_152[40 /*3*/] = { 456.4284f, -821.7599f, 26.5584f };
			vLocal_152[41 /*3*/] = { 406.9605f, -830.3608f, 28.3306f };
			vLocal_152[42 /*3*/] = { 406.1039f, -876.7354f, 28.3905f };
			vLocal_152[43 /*3*/] = { 402.9865f, -938.0498f, 28.4551f };
			vLocal_152[44 /*3*/] = { 404.8474f, -950.4066f, 28.4433f };
			vLocal_152[45 /*3*/] = { 416.964f, -954.1458f, 28.4324f };
			vLocal_152[46 /*3*/] = { 485.1107f, -954.6018f, 26.3922f };
			vLocal_152[47 /*3*/] = { 496.7718f, -957.6362f, 26.1527f };
			vLocal_152[48 /*3*/] = { 500.8447f, -966.6793f, 26.4009f };
			vLocal_152[49 /*3*/] = { 499.6066f, -1038.969f, 27.357f };
			vLocal_152[50 /*3*/] = { 482.2613f, -1070.182f, 28.2113f };
			vLocal_152[51 /*3*/] = { 462.5394f, -1125.002f, 28.3189f };
			vLocal_152[52 /*3*/] = { 452.1105f, -1131.479f, 28.4588f };
			vLocal_152[53 /*3*/] = { 411.7074f, -1132.298f, 28.4582f };
			vLocal_152[54 /*3*/] = { 401.2792f, -1126.838f, 28.4871f };
			vLocal_152[55 /*3*/] = { 398.4309f, -1108.895f, 28.4618f };
			vLocal_152[56 /*3*/] = { 398.5521f, -1011.637f, 28.4602f };
			vLocal_152[57 /*3*/] = { 391.9118f, -1000.936f, 28.4172f };
			vLocal_152[58 /*3*/] = { 384.0373f, -999.108f, 28.4212f };
			vLocal_152[59 /*3*/] = { 280.6655f, -998.2255f, 28.2999f };
			vLocal_152[60 /*3*/] = { 274.747f, -997.3961f, 28.3239f };
			vLocal_152[61 /*3*/] = { 254.8134f, -990.8824f, 28.2714f };
			vLocal_152[62 /*3*/] = { 244.1949f, -980.8467f, 28.3573f };
			vLocal_152[63 /*3*/] = { 244.9183f, -958.1761f, 28.3041f };
			vLocal_152[64 /*3*/] = { 265.0497f, -896.29f, 27.9801f };
			vLocal_152[65 /*3*/] = { 259.8165f, -869.8301f, 28.273f };
			vLocal_152[66 /*3*/] = { 226.9681f, -839.9088f, 29.2632f };
			vLocal_152[67 /*3*/] = { 224.8172f, -815.2034f, 29.5278f };
			vLocal_152[68 /*3*/] = { 223.5029f, -758.9518f, 29.8235f };
			vLocal_152[69 /*3*/] = { 234.023f, -729.6653f, 29.8196f };
			vLocal_152[70 /*3*/] = { 268.7956f, -743.4052f, 33.64f };
			vLocal_152[71 /*3*/] = { 224.9066f, -736.6704f, 33.2013f };
			vLocal_152[72 /*3*/] = { 172.0603f, -721.1422f, 32.1324f };
			vLocal_152[73 /*3*/] = { 75.1364f, -688.8935f, 30.6218f };
			vLocal_152[74 /*3*/] = { 112.1867f, -577.6705f, 30.47f };
			vLocal_152[75 /*3*/] = { 58.5058f, -554.6415f, 32.7843f };
			vLocal_152[76 /*3*/] = { -35.6377f, -545.9135f, 38.9156f };
			vLocal_152[77 /*3*/] = { -77.4362f, -537.5404f, 39.1736f };
			iLocal_154 = 78;
			break;
		
		case 7:
			vLocal_152[0 /*3*/] = { 174.5999f, -2079.691f, 16.7487f };
			vLocal_152[1 /*3*/] = { 152.0048f, -2053.034f, 17.3217f };
			vLocal_152[2 /*3*/] = { 150.1924f, -2031.796f, 17.3217f };
			vLocal_152[3 /*3*/] = { 152.2747f, -2013.484f, 17.1417f };
			vLocal_152[4 /*3*/] = { 156.9549f, -2002.106f, 17.2518f };
			vLocal_152[5 /*3*/] = { 164.4116f, -1991.569f, 17.2641f };
			vLocal_152[6 /*3*/] = { 205.3133f, -1942.91f, 20.535f };
			vLocal_152[7 /*3*/] = { 211.3832f, -1932.955f, 21.5803f };
			vLocal_152[8 /*3*/] = { 208.533f, -1920.367f, 22.2848f };
			vLocal_152[9 /*3*/] = { 196.7893f, -1907.76f, 22.6872f };
			vLocal_152[10 /*3*/] = { 182.3722f, -1898.424f, 22.5606f };
			vLocal_152[11 /*3*/] = { 108.5148f, -1864.741f, 23.4672f };
			vLocal_152[12 /*3*/] = { 86.2217f, -1841.194f, 24.2874f };
			vLocal_152[13 /*3*/] = { 43.7092f, -1805.996f, 24.4549f };
			vLocal_152[14 /*3*/] = { 17.8062f, -1777.351f, 28.2925f };
			vLocal_152[15 /*3*/] = { 21.8941f, -1750.064f, 28.3031f };
			vLocal_152[16 /*3*/] = { 44.7469f, -1721.505f, 28.3031f };
			vLocal_152[17 /*3*/] = { 63.9396f, -1707.914f, 28.2608f };
			vLocal_152[18 /*3*/] = { 76.1903f, -1681.886f, 28.3242f };
			vLocal_152[19 /*3*/] = { 86.0975f, -1653.219f, 28.3469f };
			vLocal_152[20 /*3*/] = { 116.5378f, -1632.756f, 28.3471f };
			vLocal_152[21 /*3*/] = { 152.7263f, -1602.194f, 28.3415f };
			vLocal_152[22 /*3*/] = { 143.9074f, -1564.712f, 28.2093f };
			vLocal_152[23 /*3*/] = { 145.1265f, -1550.904f, 28.1529f };
			vLocal_152[24 /*3*/] = { 153.1621f, -1536.478f, 28.3099f };
			vLocal_152[25 /*3*/] = { 156.3295f, -1515.14f, 28.1416f };
			vLocal_152[26 /*3*/] = { 148.7433f, -1498.556f, 28.1416f };
			vLocal_152[27 /*3*/] = { 128.6626f, -1476.814f, 28.1416f };
			vLocal_152[28 /*3*/] = { 104.1582f, -1414.095f, 28.1921f };
			vLocal_152[29 /*3*/] = { 83.6966f, -1380.602f, 28.2915f };
			vLocal_152[30 /*3*/] = { 50.458f, -1383.531f, 28.2943f };
			vLocal_152[31 /*3*/] = { -1.9688f, -1383.943f, 28.3059f };
			vLocal_152[32 /*3*/] = { -24.7047f, -1377.866f, 28.1996f };
			vLocal_152[33 /*3*/] = { -92.3499f, -1377.083f, 28.3276f };
			vLocal_152[34 /*3*/] = { -130.9038f, -1387.612f, 28.4695f };
			vLocal_152[35 /*3*/] = { -148.5784f, -1398.707f, 29.0652f };
			vLocal_152[36 /*3*/] = { -148.0146f, -1415.724f, 29.7007f };
			vLocal_152[37 /*3*/] = { -140.9057f, -1431.51f, 29.8724f };
			vLocal_152[38 /*3*/] = { -172.1216f, -1469.894f, 31.0887f };
			vLocal_152[39 /*3*/] = { -200.9877f, -1510.344f, 30.632f };
			vLocal_152[40 /*3*/] = { -228.8574f, -1535.488f, 30.6189f };
			vLocal_152[41 /*3*/] = { -242.2845f, -1539.538f, 30.5592f };
			vLocal_152[42 /*3*/] = { -256.5187f, -1570.94f, 30.9427f };
			vLocal_152[43 /*3*/] = { -268.7609f, -1629.413f, 30.8488f };
			vLocal_152[44 /*3*/] = { -255.8852f, -1689.953f, 30.8488f };
			vLocal_152[45 /*3*/] = { -224.6088f, -1727.568f, 31.5576f };
			vLocal_152[46 /*3*/] = { -182.6528f, -1758.622f, 28.8952f };
			vLocal_152[47 /*3*/] = { -148.3479f, -1787.901f, 28.7988f };
			vLocal_152[48 /*3*/] = { -122.57f, -1807.999f, 27.3089f };
			vLocal_152[49 /*3*/] = { -73.0749f, -1876.611f, 7.596f };
			vLocal_152[50 /*3*/] = { -39.416f, -1901.59f, 9.9099f };
			vLocal_152[51 /*3*/] = { 7.5512f, -1955.098f, 4.4117f };
			vLocal_152[52 /*3*/] = { 55.3094f, -2021.311f, 0.4589f };
			vLocal_152[53 /*3*/] = { 69.4583f, -2095.662f, 0.2051f };
			vLocal_152[54 /*3*/] = { 49.8936f, -2146.708f, 1.5683f };
			vLocal_152[55 /*3*/] = { 41.0185f, -2157.943f, 4.4323f };
			vLocal_152[56 /*3*/] = { 24.7718f, -2164.335f, 8.1637f };
			vLocal_152[57 /*3*/] = { -2.2288f, -2158.396f, 9.2835f };
			vLocal_152[58 /*3*/] = { -22.7019f, -2158.668f, 9.3111f };
			vLocal_152[59 /*3*/] = { -38.4647f, -2199.598f, 6.8117f };
			vLocal_152[60 /*3*/] = { -45.3264f, -2212.231f, 6.8117f };
			vLocal_152[61 /*3*/] = { -55.3598f, -2222.49f, 6.8117f };
			vLocal_152[62 /*3*/] = { -82.3358f, -2223.918f, 6.8117f };
			vLocal_152[63 /*3*/] = { -131.381f, -2223.081f, 6.8117f };
			vLocal_152[64 /*3*/] = { -150.9629f, -2233.896f, 6.8117f };
			vLocal_152[65 /*3*/] = { -158.0284f, -2244.346f, 6.8117f };
			vLocal_152[66 /*3*/] = { -181.3241f, -2250.348f, 6.8117f };
			vLocal_152[67 /*3*/] = { -262.8565f, -2253.175f, 6.9858f };
			vLocal_152[68 /*3*/] = { -294.0698f, -2233.267f, 7.2625f };
			vLocal_152[69 /*3*/] = { -297.9966f, -2218.1f, 8.5029f };
			vLocal_152[70 /*3*/] = { -313.9771f, -2206.949f, 8.4925f };
			vLocal_152[71 /*3*/] = { -327.7408f, -2209.155f, 7.2109f };
			vLocal_152[72 /*3*/] = { -364.1004f, -2262.198f, 6.6082f };
			vLocal_152[73 /*3*/] = { -374.4983f, -2272.426f, 6.6082f };
			vLocal_152[74 /*3*/] = { -375.8295f, -2282.563f, 6.6082f };
			iLocal_154 = 75;
			break;
		
		case 8:
			vLocal_152[0 /*3*/] = { -2653.049f, 1505.637f, 116.9031f };
			vLocal_152[1 /*3*/] = { -2663.594f, 1470.743f, 122.7177f };
			vLocal_152[2 /*3*/] = { -2681.781f, 1433.767f, 120.1581f };
			vLocal_152[3 /*3*/] = { -2701.294f, 1403.518f, 112.9536f };
			vLocal_152[4 /*3*/] = { -2717.157f, 1376.807f, 105.1303f };
			vLocal_152[5 /*3*/] = { -2748.094f, 1336.441f, 89.7583f };
			vLocal_152[6 /*3*/] = { -2772.662f, 1306.338f, 82.0139f };
			vLocal_152[7 /*3*/] = { -2807.116f, 1282.497f, 71.1255f };
			vLocal_152[8 /*3*/] = { -2860.727f, 1279.025f, 58.2654f };
			vLocal_152[9 /*3*/] = { -2904.519f, 1259.097f, 40.7003f };
			vLocal_152[10 /*3*/] = { -2921.85f, 1257.993f, 37.2144f };
			vLocal_152[11 /*3*/] = { -2945.241f, 1243.167f, 31.8372f };
			vLocal_152[12 /*3*/] = { -2971.91f, 1212.205f, 23.1993f };
			vLocal_152[13 /*3*/] = { -2993.662f, 1208.524f, 18.0748f };
			vLocal_152[14 /*3*/] = { -3038.551f, 1209.651f, 14.0096f };
			vLocal_152[15 /*3*/] = { -3107.971f, 1226.064f, 9.658f };
			vLocal_152[16 /*3*/] = { -3199.303f, 1252.489f, 4.3497f };
			vLocal_152[17 /*3*/] = { -3218.386f, 1252.134f, 2.8398f };
			vLocal_152[18 /*3*/] = { -3236.587f, 1234.213f, 2.2581f };
			vLocal_152[19 /*3*/] = { -3257.229f, 1188.7f, 1.6827f };
			vLocal_152[20 /*3*/] = { -3268.847f, 1110.996f, 1.1708f };
			vLocal_152[21 /*3*/] = { -3286.199f, 1046.93f, 2.2738f };
			vLocal_152[22 /*3*/] = { -3291.467f, 984.0225f, 2.3848f };
			vLocal_152[23 /*3*/] = { -3291.941f, 951.162f, 1.1346f };
			vLocal_152[24 /*3*/] = { -3284.428f, 937.3236f, 1.0801f };
			vLocal_152[25 /*3*/] = { -3266.242f, 925.3865f, 1.6379f };
			vLocal_152[26 /*3*/] = { -3234.646f, 874.3011f, 1.695f };
			vLocal_152[27 /*3*/] = { -3219.083f, 829.6504f, 1.2816f };
			vLocal_152[28 /*3*/] = { -3198.246f, 813.9434f, 2.7979f };
			vLocal_152[29 /*3*/] = { -3165.079f, 798.1581f, 6.5002f };
			vLocal_152[30 /*3*/] = { -3143.296f, 790.5193f, 7.0137f };
			vLocal_152[31 /*3*/] = { -3124.516f, 789.1387f, 16.9934f };
			vLocal_152[32 /*3*/] = { -3094.212f, 777.5895f, 18.5135f };
			vLocal_152[33 /*3*/] = { -3086.898f, 756.6077f, 19.5227f };
			vLocal_152[34 /*3*/] = { -3093.979f, 726.5751f, 20.3224f };
			vLocal_152[35 /*3*/] = { -3082.263f, 693.1727f, 15.8985f };
			vLocal_152[36 /*3*/] = { -3056.846f, 661.2524f, 9.0803f };
			vLocal_152[37 /*3*/] = { -3043.558f, 636.358f, 6.5869f };
			vLocal_152[38 /*3*/] = { -3024.625f, 583.9476f, 6.8377f };
			vLocal_152[39 /*3*/] = { -3019.437f, 554.1682f, 6.6729f };
			vLocal_152[40 /*3*/] = { -3021.381f, 512.9918f, 6.234f };
			vLocal_152[41 /*3*/] = { -3031.198f, 466.6764f, 5.5596f };
			vLocal_152[42 /*3*/] = { -3049.935f, 424.7576f, 5.5665f };
			vLocal_152[43 /*3*/] = { -3066.961f, 377.4491f, 6.0668f };
			vLocal_152[44 /*3*/] = { -3057.431f, 345.7499f, 8.5701f };
			vLocal_152[45 /*3*/] = { -3046.631f, 292.6304f, 18.9137f };
			vLocal_152[46 /*3*/] = { -3041.826f, 279.6342f, 16.9957f };
			vLocal_152[47 /*3*/] = { -3035.306f, 269.0156f, 14.7234f };
			vLocal_152[48 /*3*/] = { -3012.362f, 233.9675f, 15.2325f };
			vLocal_152[49 /*3*/] = { -3013.188f, 213.9026f, 15.268f };
			vLocal_152[50 /*3*/] = { -3011.671f, 196.2197f, 15.146f };
			vLocal_152[51 /*3*/] = { -3006.454f, 177.695f, 14.8855f };
			vLocal_152[52 /*3*/] = { -2994.663f, 154.9807f, 14.3746f };
			vLocal_152[53 /*3*/] = { -2979.672f, 136.2853f, 13.7377f };
			vLocal_152[54 /*3*/] = { -2950.832f, 112.3324f, 12.904f };
			vLocal_152[55 /*3*/] = { -2921.329f, 97.7186f, 12.7178f };
			vLocal_152[56 /*3*/] = { -2851.489f, 75.2672f, 13.5427f };
			vLocal_152[57 /*3*/] = { -2836.61f, 32.9254f, 12.8794f };
			vLocal_152[58 /*3*/] = { -2831.988f, 18.7339f, 10.4085f };
			vLocal_152[59 /*3*/] = { -2824.56f, -8.0105f, 6.1181f };
			vLocal_152[60 /*3*/] = { -2803.649f, -81.9439f, -0.221f };
			vLocal_152[61 /*3*/] = { -2780.207f, -96.5313f, 0.3584f };
			vLocal_152[62 /*3*/] = { -2736.673f, -109.0135f, 0.5296f };
			vLocal_152[63 /*3*/] = { -2700.451f, -141.5591f, 0.9655f };
			vLocal_152[64 /*3*/] = { -2671.83f, -175.5449f, 1.0133f };
			vLocal_152[65 /*3*/] = { -2630.613f, -198.3817f, 2.1479f };
			vLocal_152[66 /*3*/] = { -2547.985f, -249.0516f, 2.2801f };
			vLocal_152[67 /*3*/] = { -2473.847f, -295.0556f, 2.7219f };
			vLocal_152[68 /*3*/] = { -2434.094f, -326.3175f, 3.0194f };
			vLocal_152[69 /*3*/] = { -2410.113f, -331.2293f, 2.6013f };
			vLocal_152[70 /*3*/] = { -2376.031f, -335.9692f, 2.5363f };
			vLocal_152[71 /*3*/] = { -2356.186f, -344.7604f, 2.6766f };
			vLocal_152[72 /*3*/] = { -2327.246f, -365.7754f, 2.3142f };
			vLocal_152[73 /*3*/] = { -2276.542f, -398.5323f, 1.8233f };
			vLocal_152[74 /*3*/] = { -2230.823f, -415.3987f, 3.087f };
			vLocal_152[75 /*3*/] = { -2213.564f, -418.7813f, 5.5765f };
			vLocal_152[76 /*3*/] = { -2199.396f, -420.4765f, 11.8061f };
			vLocal_152[77 /*3*/] = { -2176.137f, -416.0254f, 12.2345f };
			vLocal_152[78 /*3*/] = { -2126.029f, -402.4269f, 11.7143f };
			vLocal_152[79 /*3*/] = { -2102.225f, -366.2369f, 11.8076f };
			vLocal_152[80 /*3*/] = { -2095.268f, -318.8827f, 12.0248f };
			vLocal_152[81 /*3*/] = { -2093.999f, -264.2969f, 18.7933f };
			vLocal_152[82 /*3*/] = { -2089.104f, -214.1321f, 19.5783f };
			vLocal_152[83 /*3*/] = { -2071.153f, -210.7178f, 21.0689f };
			vLocal_152[84 /*3*/] = { -2050.075f, -223.6322f, 25.6497f };
			vLocal_152[85 /*3*/] = { -2030.981f, -224.0641f, 27.9967f };
			vLocal_152[86 /*3*/] = { -1998.867f, -224.0556f, 31.1763f };
			vLocal_152[87 /*3*/] = { -1987.922f, -232.1616f, 32.9357f };
			vLocal_152[88 /*3*/] = { -1986.724f, -241.0943f, 33.9168f };
			vLocal_152[89 /*3*/] = { -1980.237f, -257.3627f, 33.6684f };
			vLocal_152[90 /*3*/] = { -1966.573f, -261.1625f, 34.9521f };
			vLocal_152[91 /*3*/] = { -1948.827f, -242.7568f, 34.8759f };
			vLocal_152[92 /*3*/] = { -1938.963f, -233.8106f, 35.8376f };
			vLocal_152[93 /*3*/] = { -1911.051f, -214.8513f, 35.2168f };
			vLocal_152[94 /*3*/] = { -1874.86f, -185.5185f, 37.115f };
			vLocal_152[95 /*3*/] = { -1864.559f, -180.1412f, 43.2547f };
			vLocal_152[96 /*3*/] = { -1850.851f, -185.8726f, 45.6611f };
			vLocal_152[97 /*3*/] = { -1834.413f, -189.1538f, 48.8693f };
			vLocal_152[98 /*3*/] = { -1815.983f, -200.1424f, 50.7411f };
			vLocal_152[99 /*3*/] = { -1805.788f, -203.853f, 51.7412f };
			vLocal_152[100 /*3*/] = { -1792.717f, -217.502f, 50.9357f };
			vLocal_152[101 /*3*/] = { -1774.695f, -229.8553f, 51.7138f };
			vLocal_152[102 /*3*/] = { -1756.903f, -238.1252f, 52.0989f };
			vLocal_152[103 /*3*/] = { -1736.251f, -241.4447f, 52.672f };
			vLocal_152[104 /*3*/] = { -1712.573f, -240.3414f, 53.0528f };
			vLocal_152[105 /*3*/] = { -1699.116f, -234.5364f, 54.4754f };
			vLocal_152[106 /*3*/] = { -1689.302f, -217.4817f, 56.5364f };
			vLocal_152[107 /*3*/] = { -1682.485f, -202.5944f, 56.595f };
			vLocal_152[108 /*3*/] = { -1680.894f, -188.3022f, 56.5344f };
			vLocal_152[109 /*3*/] = { -1682.963f, -173.7911f, 56.5401f };
			vLocal_152[110 /*3*/] = { -1689.333f, -162.1221f, 56.5802f };
			vLocal_152[111 /*3*/] = { -1702.223f, -155.7313f, 56.3958f };
			vLocal_152[112 /*3*/] = { -1709.647f, -161.5643f, 56.4539f };
			vLocal_152[113 /*3*/] = { -1715.474f, -168.1092f, 56.503f };
			vLocal_152[114 /*3*/] = { -1725.536f, -168.0596f, 56.7325f };
			vLocal_152[115 /*3*/] = { -1733.644f, -169.4988f, 57.5363f };
			vLocal_152[116 /*3*/] = { -1733.434f, -177.1803f, 58.3052f };
			vLocal_152[117 /*3*/] = { -1731.431f, -182.4709f, 57.4901f };
			vLocal_152[118 /*3*/] = { -1730.025f, -191.5667f, 57.3605f };
			iLocal_154 = 119;
			break;
		
		case 9:
			vLocal_152[0 /*3*/] = { -1463.912f, 2789.826f, 20.0877f };
			vLocal_152[1 /*3*/] = { -1477.148f, 2845.476f, 25.45f };
			vLocal_152[2 /*3*/] = { -1506.965f, 2872.34f, 30.2234f };
			vLocal_152[3 /*3*/] = { -1577.26f, 2932.705f, 31.917f };
			vLocal_152[4 /*3*/] = { -1591.626f, 2997.577f, 32.261f };
			vLocal_152[5 /*3*/] = { -1639.98f, 3059.17f, 29.948f };
			vLocal_152[6 /*3*/] = { -1645.001f, 3178.496f, 29.4591f };
			vLocal_152[7 /*3*/] = { -1655.642f, 3226.443f, 33.7777f };
			vLocal_152[8 /*3*/] = { -1694.704f, 3249.402f, 32.0673f };
			vLocal_152[9 /*3*/] = { -1725.478f, 3262.473f, 31.5433f };
			vLocal_152[10 /*3*/] = { -1951.812f, 3391.708f, 31.1172f };
			vLocal_152[11 /*3*/] = { -1984.661f, 3398.118f, 31.1172f };
			vLocal_152[12 /*3*/] = { -2011.397f, 3398.739f, 30.4796f };
			vLocal_152[13 /*3*/] = { -2034.775f, 3383.387f, 30.2602f };
			vLocal_152[14 /*3*/] = { -2065.773f, 3384.615f, 30.3096f };
			vLocal_152[15 /*3*/] = { -2109.027f, 3382.438f, 30.9568f };
			vLocal_152[16 /*3*/] = { -2137.183f, 3393.041f, 31.1325f };
			vLocal_152[17 /*3*/] = { -2143.365f, 3397.595f, 32.7541f };
			vLocal_152[18 /*3*/] = { -2161.112f, 3410.701f, 31.6593f };
			vLocal_152[19 /*3*/] = { -2187.906f, 3415.621f, 31.7261f };
			vLocal_152[20 /*3*/] = { -2199.671f, 3426.611f, 31.6199f };
			vLocal_152[21 /*3*/] = { -2217.014f, 3434.519f, 31.6187f };
			vLocal_152[22 /*3*/] = { -2237.547f, 3433.59f, 31.6194f };
			vLocal_152[23 /*3*/] = { -2251.789f, 3432.903f, 32.4218f };
			vLocal_152[24 /*3*/] = { -2256.215f, 3432.564f, 31.059f };
			vLocal_152[25 /*3*/] = { -2276.618f, 3439.096f, 31.0393f };
			vLocal_152[26 /*3*/] = { -2292.811f, 3446.875f, 30.8394f };
			vLocal_152[27 /*3*/] = { -2315.683f, 3443.764f, 30.3699f };
			vLocal_152[28 /*3*/] = { -2341.133f, 3432.404f, 28.5928f };
			vLocal_152[29 /*3*/] = { -2365.814f, 3428.073f, 26.8742f };
			vLocal_152[30 /*3*/] = { -2381.983f, 3423.883f, 30.3016f };
			vLocal_152[31 /*3*/] = { -2394.041f, 3416.595f, 30.5506f };
			vLocal_152[32 /*3*/] = { -2530.589f, 3337.515f, 30.4319f };
			vLocal_152[33 /*3*/] = { -2548.137f, 3339.134f, 28.6846f };
			vLocal_152[34 /*3*/] = { -2562.008f, 3341.58f, 28.0224f };
			vLocal_152[35 /*3*/] = { -2588.223f, 3351.021f, 24.6836f };
			vLocal_152[36 /*3*/] = { -2594.071f, 3356.079f, 22.1251f };
			vLocal_152[37 /*3*/] = { -2595.745f, 3365.915f, 17.9894f };
			vLocal_152[38 /*3*/] = { -2595.793f, 3377.574f, 12.8038f };
			vLocal_152[39 /*3*/] = { -2608.662f, 3392.612f, 13.1174f };
			vLocal_152[40 /*3*/] = { -2623.495f, 3407.143f, 13.6065f };
			vLocal_152[41 /*3*/] = { -2653.212f, 3424.437f, 13.7192f };
			vLocal_152[42 /*3*/] = { -2699.876f, 3437.248f, 12.9223f };
			vLocal_152[43 /*3*/] = { -2721.948f, 3443.959f, 11.9598f };
			vLocal_152[44 /*3*/] = { -2779.478f, 3456.656f, 10.6559f };
			vLocal_152[45 /*3*/] = { -2804.644f, 3470.18f, 9.7878f };
			vLocal_152[46 /*3*/] = { -2825.771f, 3501.169f, 7.9953f };
			vLocal_152[47 /*3*/] = { -2837.044f, 3518.584f, 7.4085f };
			vLocal_152[48 /*3*/] = { -2864.506f, 3523.516f, 7.1469f };
			vLocal_152[49 /*3*/] = { -2913.54f, 3523.989f, 7.2342f };
			vLocal_152[50 /*3*/] = { -2944.496f, 3519.349f, 7.215f };
			vLocal_152[51 /*3*/] = { -2957.936f, 3509.118f, 7.5977f };
			vLocal_152[52 /*3*/] = { -2968.712f, 3494.814f, 8.0967f };
			vLocal_152[53 /*3*/] = { -2982.313f, 3472.155f, 8.5156f };
			vLocal_152[54 /*3*/] = { -2997.359f, 3440.916f, 8.5745f };
			vLocal_152[55 /*3*/] = { -3006.354f, 3441.868f, 8.3125f };
			vLocal_152[56 /*3*/] = { -3010.171f, 3442.161f, 7.8361f };
			vLocal_152[57 /*3*/] = { -3016.127f, 3442.632f, 6.1649f };
			vLocal_152[58 /*3*/] = { -3044.019f, 3439.902f, 2.6837f };
			vLocal_152[59 /*3*/] = { -3083.78f, 3434.43f, 0.6736f };
			vLocal_152[60 /*3*/] = { -3108.864f, 3426.914f, 0.5969f };
			vLocal_152[61 /*3*/] = { -3121.052f, 3417.526f, 0.8856f };
			vLocal_152[62 /*3*/] = { -3128.933f, 3401.378f, 0.723f };
			vLocal_152[63 /*3*/] = { -3127.117f, 3385.608f, -0.0289f };
			vLocal_152[64 /*3*/] = { -3120.614f, 3370.245f, -0.3007f };
			vLocal_152[65 /*3*/] = { -3120.843f, 3355.337f, -0.3184f };
			vLocal_152[66 /*3*/] = { -3131.457f, 3337.666f, -0.4124f };
			vLocal_152[67 /*3*/] = { -3130.055f, 3331.133f, 0.453f };
			vLocal_152[68 /*3*/] = { -3126.044f, 3311.187f, 1.9264f };
			vLocal_152[69 /*3*/] = { -3121.625f, 3297.583f, 4.969f };
			vLocal_152[70 /*3*/] = { -3114.625f, 3288.416f, 5.7302f };
			vLocal_152[71 /*3*/] = { -3109.753f, 3286.727f, 5.3114f };
			vLocal_152[72 /*3*/] = { -3094.209f, 3285.138f, 3.4169f };
			vLocal_152[73 /*3*/] = { -3078.461f, 3294.387f, 3.5013f };
			vLocal_152[74 /*3*/] = { -3064.696f, 3299.328f, 4.393f };
			vLocal_152[75 /*3*/] = { -3042.485f, 3298.661f, 4.2975f };
			vLocal_152[76 /*3*/] = { -3012.822f, 3298.938f, 8.3148f };
			vLocal_152[77 /*3*/] = { -3005.919f, 3298.79f, 8.8372f };
			vLocal_152[78 /*3*/] = { -2979.524f, 3296.409f, 9.4458f };
			vLocal_152[79 /*3*/] = { -2965.909f, 3290.236f, 10.2551f };
			vLocal_152[80 /*3*/] = { -2956.04f, 3279.582f, 10.3873f };
			vLocal_152[81 /*3*/] = { -2941.26f, 3267.032f, 10.8597f };
			vLocal_152[82 /*3*/] = { -2928.623f, 3259.063f, 10.4515f };
			vLocal_152[83 /*3*/] = { -2922.033f, 3248.532f, 9.6349f };
			vLocal_152[84 /*3*/] = { -2917.52f, 3233.934f, 9.5718f };
			vLocal_152[85 /*3*/] = { -2907.681f, 3215.423f, 9.8787f };
			vLocal_152[86 /*3*/] = { -2879.219f, 3175.582f, 9.9335f };
			vLocal_152[87 /*3*/] = { -2837.914f, 3137.461f, 9.104f };
			vLocal_152[88 /*3*/] = { -2778.595f, 3095.414f, 7.9147f };
			vLocal_152[89 /*3*/] = { -2755.339f, 3093.435f, 7.9238f };
			vLocal_152[90 /*3*/] = { -2732.754f, 3091.263f, 11.8101f };
			vLocal_152[91 /*3*/] = { -2715.51f, 3088.629f, 18.9392f };
			vLocal_152[92 /*3*/] = { -2704.912f, 3088.065f, 22.5439f };
			vLocal_152[93 /*3*/] = { -2698.571f, 3088.829f, 24.5249f };
			vLocal_152[94 /*3*/] = { -2688.089f, 3088.755f, 26.9138f };
			vLocal_152[95 /*3*/] = { -2668.202f, 3087.626f, 31.0204f };
			vLocal_152[96 /*3*/] = { -2663.953f, 3087.523f, 31.2972f };
			vLocal_152[97 /*3*/] = { -2649.556f, 3076.861f, 31.3129f };
			vLocal_152[98 /*3*/] = { -2625.872f, 3048.057f, 31.3104f };
			vLocal_152[99 /*3*/] = { -2598.408f, 3019.676f, 31.4648f };
			vLocal_152[100 /*3*/] = { -2586.226f, 3015.642f, 31.7198f };
			vLocal_152[101 /*3*/] = { -2560.566f, 2996.848f, 37.5706f };
			vLocal_152[102 /*3*/] = { -2552.737f, 2986.765f, 36.5308f };
			vLocal_152[103 /*3*/] = { -2545.417f, 2969.709f, 35.8487f };
			vLocal_152[104 /*3*/] = { -2540.366f, 2955.316f, 35.0142f };
			vLocal_152[105 /*3*/] = { -2532.989f, 2947.141f, 34.4408f };
			vLocal_152[106 /*3*/] = { -2527.326f, 2945.037f, 33.7632f };
			vLocal_152[107 /*3*/] = { -2510.012f, 2935.014f, 31.8324f };
			vLocal_152[108 /*3*/] = { -2506.855f, 2927.783f, 31.8324f };
			vLocal_152[109 /*3*/] = { -2502f, 2923.38f, 31.8656f };
			vLocal_152[110 /*3*/] = { -2453.283f, 2895.443f, 31.827f };
			vLocal_152[111 /*3*/] = { -2448.633f, 2893.234f, 31.8105f };
			vLocal_152[112 /*3*/] = { -2441.97f, 2894.076f, 31.8161f };
			vLocal_152[113 /*3*/] = { -2435.053f, 2899.211f, 31.8101f };
			vLocal_152[114 /*3*/] = { -2419.494f, 2912.728f, 31.8101f };
			vLocal_152[115 /*3*/] = { -2410.999f, 2920.665f, 31.8101f };
			vLocal_152[116 /*3*/] = { -2402.981f, 2926.109f, 31.8101f };
			vLocal_152[117 /*3*/] = { -2388.711f, 2931.548f, 31.8101f };
			vLocal_152[118 /*3*/] = { -2376.195f, 2935.068f, 31.8101f };
			vLocal_152[119 /*3*/] = { -2362.174f, 2937.172f, 31.8101f };
			vLocal_152[120 /*3*/] = { -2349.693f, 2937.485f, 31.8097f };
			vLocal_152[121 /*3*/] = { -2335.747f, 2935.854f, 31.8095f };
			vLocal_152[122 /*3*/] = { -2318.942f, 2929.66f, 31.7445f };
			vLocal_152[123 /*3*/] = { -2297.421f, 2923.055f, 31.402f };
			vLocal_152[124 /*3*/] = { -2273.065f, 2913.495f, 31.1485f };
			vLocal_152[125 /*3*/] = { -2255.359f, 2902.834f, 31.3591f };
			vLocal_152[126 /*3*/] = { -2229.69f, 2883.807f, 31.236f };
			vLocal_152[127 /*3*/] = { -2202.925f, 2869.314f, 31.1578f };
			vLocal_152[128 /*3*/] = { -2183.306f, 2857.042f, 31.1936f };
			vLocal_152[129 /*3*/] = { -2163.49f, 2841.464f, 31.3816f };
			vLocal_152[130 /*3*/] = { -2149.862f, 2823.891f, 31.4544f };
			vLocal_152[131 /*3*/] = { -2144.587f, 2808.735f, 31.4497f };
			vLocal_152[132 /*3*/] = { -2132.177f, 2795.02f, 31.7241f };
			vLocal_152[133 /*3*/] = { -2108.141f, 2785.463f, 31.7808f };
			vLocal_152[134 /*3*/] = { -2068.579f, 2784.021f, 31.4615f };
			vLocal_152[135 /*3*/] = { -2051.136f, 2791.31f, 31.825f };
			vLocal_152[136 /*3*/] = { -2042.002f, 2795.728f, 31.2093f };
			vLocal_152[137 /*3*/] = { -2024.121f, 2799.866f, 31.5836f };
			vLocal_152[138 /*3*/] = { -2004.372f, 2797.404f, 31.7003f };
			vLocal_152[139 /*3*/] = { -1976.047f, 2791.383f, 31.5104f };
			vLocal_152[140 /*3*/] = { -1947.483f, 2778.565f, 31.1414f };
			vLocal_152[141 /*3*/] = { -1936.379f, 2768.897f, 31.1447f };
			vLocal_152[142 /*3*/] = { -1929.758f, 2758.106f, 30.6489f };
			vLocal_152[143 /*3*/] = { -1925.991f, 2751.949f, 25.9925f };
			vLocal_152[144 /*3*/] = { -1921.41f, 2746.268f, 24.8392f };
			vLocal_152[145 /*3*/] = { -1915.137f, 2739.659f, 23.8019f };
			vLocal_152[146 /*3*/] = { -1900.307f, 2727.201f, 21.1878f };
			vLocal_152[147 /*3*/] = { -1883.745f, 2715.262f, 19.6892f };
			vLocal_152[148 /*3*/] = { -1875.748f, 2711.08f, 12.552f };
			vLocal_152[149 /*3*/] = { -1867.896f, 2703.139f, 3.0778f };
			vLocal_152[150 /*3*/] = { -1861.963f, 2692.423f, 3.1018f };
			vLocal_152[151 /*3*/] = { -1857.476f, 2683.575f, 3.2905f };
			vLocal_152[152 /*3*/] = { -1848.774f, 2668.988f, 2.0379f };
			vLocal_152[153 /*3*/] = { -1842.34f, 2663.985f, 1.5316f };
			vLocal_152[154 /*3*/] = { -1838.295f, 2661.605f, 0.5979f };
			vLocal_152[155 /*3*/] = { -1815.526f, 2665.483f, 0.7053f };
			vLocal_152[156 /*3*/] = { -1805.632f, 2669.156f, 2.2314f };
			vLocal_152[157 /*3*/] = { -1786.138f, 2670.602f, 2.2725f };
			vLocal_152[158 /*3*/] = { -1771.023f, 2668.491f, 2.1361f };
			vLocal_152[159 /*3*/] = { -1760.869f, 2665.975f, 1.8861f };
			vLocal_152[160 /*3*/] = { -1755.284f, 2664.367f, 1.7509f };
			vLocal_152[161 /*3*/] = { -1748.707f, 2663.003f, 1.9587f };
			vLocal_152[162 /*3*/] = { -1736.189f, 2659.886f, 1.9917f };
			vLocal_152[163 /*3*/] = { -1728.476f, 2658.183f, 1.9464f };
			vLocal_152[164 /*3*/] = { -1722.725f, 2657.996f, 2.0025f };
			vLocal_152[165 /*3*/] = { -1719.555f, 2657.884f, 1.4411f };
			vLocal_152[166 /*3*/] = { -1715.606f, 2657.734f, 0.7234f };
			vLocal_152[167 /*3*/] = { -1710.382f, 2658.301f, 0.4668f };
			vLocal_152[168 /*3*/] = { -1707.359f, 2659.483f, 0.282f };
			vLocal_152[169 /*3*/] = { -1703.736f, 2660.578f, 0.5126f };
			vLocal_152[170 /*3*/] = { -1697.277f, 2662.122f, 0.7382f };
			vLocal_152[171 /*3*/] = { -1694.411f, 2662.705f, 1.5014f };
			vLocal_152[172 /*3*/] = { -1690.597f, 2663.54f, 1.8258f };
			vLocal_152[173 /*3*/] = { -1683.022f, 2665.116f, 1.8626f };
			vLocal_152[174 /*3*/] = { -1677.613f, 2664.286f, 1.8642f };
			vLocal_152[175 /*3*/] = { -1675.041f, 2662.993f, 1.525f };
			vLocal_152[176 /*3*/] = { -1669.615f, 2661.57f, 1.3865f };
			vLocal_152[177 /*3*/] = { -1660.996f, 2660.514f, 1.5346f };
			vLocal_152[178 /*3*/] = { -1654.274f, 2660.621f, 1.3163f };
			vLocal_152[179 /*3*/] = { -1652.602f, 2661.721f, 0.846f };
			vLocal_152[180 /*3*/] = { -1650.772f, 2663.604f, 0.3205f };
			vLocal_152[181 /*3*/] = { -1648.723f, 2666.767f, -0.3498f };
			vLocal_152[182 /*3*/] = { -1646.614f, 2670.389f, -0.2246f };
			vLocal_152[183 /*3*/] = { -1645.298f, 2672.659f, 0.4074f };
			vLocal_152[184 /*3*/] = { -1643.886f, 2675.479f, 1.3415f };
			vLocal_152[185 /*3*/] = { -1643.052f, 2678.978f, 1.7816f };
			vLocal_152[186 /*3*/] = { -1643.81f, 2684.713f, 1.9387f };
			vLocal_152[187 /*3*/] = { -1644.436f, 2692.437f, 2.6905f };
			vLocal_152[188 /*3*/] = { -1643.396f, 2700.886f, 4.7337f };
			vLocal_152[189 /*3*/] = { -1642.371f, 2702.699f, 4.6934f };
			vLocal_152[190 /*3*/] = { -1634.92f, 2708.292f, 4.7769f };
			vLocal_152[191 /*3*/] = { -1622.842f, 2712.665f, 4.7364f };
			vLocal_152[192 /*3*/] = { -1616.741f, 2718.592f, 4.7278f };
			vLocal_152[193 /*3*/] = { -1615.26f, 2726.292f, 4.782f };
			vLocal_152[194 /*3*/] = { -1615.372f, 2740.197f, 5.415f };
			vLocal_152[195 /*3*/] = { -1615.563f, 2747.673f, 7.4045f };
			vLocal_152[196 /*3*/] = { -1615.097f, 2751.565f, 8.8844f };
			vLocal_152[197 /*3*/] = { -1611.762f, 2755.532f, 10.7072f };
			vLocal_152[198 /*3*/] = { -1608.429f, 2757.899f, 11.9354f };
			vLocal_152[199 /*3*/] = { -1603.668f, 2759.287f, 13.1858f };
			vLocal_152[200 /*3*/] = { -1595.852f, 2761.264f, 15.6171f };
			vLocal_152[201 /*3*/] = { -1591.107f, 2762.998f, 17.0786f };
			vLocal_152[202 /*3*/] = { -1588.631f, 2765.09f, 17.4527f };
			vLocal_152[203 /*3*/] = { -1583.653f, 2766.244f, 17.432f };
			vLocal_152[204 /*3*/] = { -1575.535f, 2763.518f, 17.2576f };
			vLocal_152[205 /*3*/] = { -1568.713f, 2759.889f, 17.0294f };
			vLocal_152[206 /*3*/] = { -1560.931f, 2756.537f, 16.5327f };
			vLocal_152[207 /*3*/] = { -1550.389f, 2752.672f, 16.8426f };
			vLocal_152[208 /*3*/] = { -1539.915f, 2745.988f, 16.6513f };
			vLocal_152[209 /*3*/] = { -1329.159f, 2560.402f, 16.6908f };
			vLocal_152[210 /*3*/] = { -1312.168f, 2545.424f, 17.302f };
			vLocal_152[211 /*3*/] = { -1299.685f, 2536.006f, 17.8598f };
			vLocal_152[212 /*3*/] = { -1294.188f, 2532.739f, 18.3548f };
			vLocal_152[213 /*3*/] = { -1288.149f, 2528.114f, 18.6202f };
			iLocal_154 = 214;
			break;
		
		case 10:
			vLocal_152[0 /*3*/] = { 1007.392f, -677.4196f, 55.6986f };
			vLocal_152[1 /*3*/] = { 1015.88f, -640.8702f, 57.6189f };
			vLocal_152[2 /*3*/] = { 1028.693f, -521.0793f, 60.0037f };
			vLocal_152[3 /*3*/] = { 1001.013f, -469.0658f, 62.3685f };
			vLocal_152[4 /*3*/] = { 1024.273f, -438.0688f, 64.0854f };
			vLocal_152[5 /*3*/] = { 1099.331f, -371.6267f, 66.0863f };
			vLocal_152[6 /*3*/] = { 1154.278f, -350.7854f, 66.0453f };
			vLocal_152[7 /*3*/] = { 1196.453f, -317.2407f, 68.006f };
			vLocal_152[8 /*3*/] = { 1228.658f, -285.5526f, 69.5564f };
			vLocal_152[9 /*3*/] = { 1269.14f, -280.8539f, 78.9299f };
			vLocal_152[10 /*3*/] = { 1303.481f, -279.4128f, 89.277f };
			vLocal_152[11 /*3*/] = { 1307.264f, -261.738f, 93.4534f };
			vLocal_152[12 /*3*/] = { 1275.53f, -228.7392f, 97.2897f };
			vLocal_152[13 /*3*/] = { 1280.287f, -201.123f, 100.2999f };
			vLocal_152[14 /*3*/] = { 1316.522f, -182.0543f, 106.8589f };
			vLocal_152[15 /*3*/] = { 1328.355f, -161.1792f, 109.7738f };
			vLocal_152[16 /*3*/] = { 1330.984f, -124.4583f, 116.3178f };
			vLocal_152[17 /*3*/] = { 1349.718f, -112.3109f, 120.3794f };
			vLocal_152[18 /*3*/] = { 1440.839f, -126.4933f, 136.0253f };
			vLocal_152[19 /*3*/] = { 1547.464f, -88.492f, 155.8418f };
			vLocal_152[20 /*3*/] = { 1572.396f, -73.2005f, 158.7627f };
			vLocal_152[21 /*3*/] = { 1617.536f, -76.5607f, 164.2157f };
			vLocal_152[22 /*3*/] = { 1634.688f, -86.0398f, 166.32f };
			vLocal_152[23 /*3*/] = { 1652.054f, -86.2994f, 169.5492f };
			vLocal_152[24 /*3*/] = { 1677.106f, -69.6387f, 172.8701f };
			vLocal_152[25 /*3*/] = { 1708.012f, -81.5238f, 176.1925f };
			vLocal_152[26 /*3*/] = { 1727.578f, -106.2123f, 177.8113f };
			vLocal_152[27 /*3*/] = { 1743.88f, -104.5237f, 180.5338f };
			vLocal_152[28 /*3*/] = { 1787.022f, -75.6841f, 189.1488f };
			vLocal_152[29 /*3*/] = { 1830.548f, -88.8782f, 185.5151f };
			vLocal_152[30 /*3*/] = { 1869.148f, -84.2897f, 188.3576f };
			vLocal_152[31 /*3*/] = { 1908.125f, -94.0947f, 189.7598f };
			vLocal_152[32 /*3*/] = { 1935.856f, -70.0841f, 194.3318f };
			vLocal_152[33 /*3*/] = { 1965.012f, -81.9638f, 206.0977f };
			vLocal_152[34 /*3*/] = { 1994.382f, -81.4886f, 210.8208f };
			vLocal_152[35 /*3*/] = { 2015.317f, -15.1936f, 200.4373f };
			vLocal_152[36 /*3*/] = { 2045.597f, -7.7503f, 209.3502f };
			vLocal_152[37 /*3*/] = { 2097.736f, 3.6562f, 214.3764f };
			vLocal_152[38 /*3*/] = { 2170.912f, -23.0015f, 227.7495f };
			vLocal_152[39 /*3*/] = { 2216.6f, -39.4283f, 202.1804f };
			vLocal_152[40 /*3*/] = { 2265.253f, -42.4669f, 176.595f };
			vLocal_152[41 /*3*/] = { 2317.634f, -62.7793f, 143.5891f };
			vLocal_152[42 /*3*/] = { 2361.621f, -88.1377f, 114.5316f };
			vLocal_152[43 /*3*/] = { 2415.541f, -127.203f, 88.2837f };
			vLocal_152[44 /*3*/] = { 2442.605f, -132.4298f, 88.5436f };
			vLocal_152[45 /*3*/] = { 2467.73f, -87.5151f, 90.4025f };
			vLocal_152[46 /*3*/] = { 2478.927f, -49.3336f, 91.7194f };
			vLocal_152[47 /*3*/] = { 2514.862f, -54.7729f, 90.5497f };
			vLocal_152[48 /*3*/] = { 2535.467f, -44.4498f, 95.4292f };
			vLocal_152[49 /*3*/] = { 2551.987f, -14.4109f, 96.8787f };
			vLocal_152[50 /*3*/] = { 2564.848f, 7.4979f, 95.322f };
			vLocal_152[51 /*3*/] = { 2574.244f, 28.346f, 94.1519f };
			vLocal_152[52 /*3*/] = { 2583.104f, 64.6646f, 97.2344f };
			vLocal_152[53 /*3*/] = { 2590.313f, 90.8608f, 96.7709f };
			vLocal_152[54 /*3*/] = { 2605.615f, 146.4206f, 97.0373f };
			vLocal_152[55 /*3*/] = { 2608.438f, 159.9902f, 97.7789f };
			vLocal_152[56 /*3*/] = { 2616.801f, 193.4394f, 97.8768f };
			vLocal_152[57 /*3*/] = { 2620.917f, 208.1355f, 99.8613f };
			vLocal_152[58 /*3*/] = { 2622.716f, 214.0569f, 100.3944f };
			vLocal_152[59 /*3*/] = { 2625.155f, 223.4091f, 100.4454f };
			vLocal_152[60 /*3*/] = { 2628.51f, 238.1807f, 98.0427f };
			vLocal_152[61 /*3*/] = { 2631.146f, 251.6104f, 99.134f };
			vLocal_152[62 /*3*/] = { 2644.033f, 286.1281f, 96.6342f };
			vLocal_152[63 /*3*/] = { 2668.01f, 344.2533f, 93.6781f };
			vLocal_152[64 /*3*/] = { 2674.79f, 475.0252f, 93.3655f };
			vLocal_152[65 /*3*/] = { 2677.321f, 563.7356f, 92.1778f };
			vLocal_152[66 /*3*/] = { 2676.736f, 657.8879f, 88.5073f };
			vLocal_152[67 /*3*/] = { 2689.552f, 707.0382f, 83.2467f };
			vLocal_152[68 /*3*/] = { 2694.685f, 719.9797f, 79.118f };
			vLocal_152[69 /*3*/] = { 2705.136f, 742.6617f, 63.8294f };
			vLocal_152[70 /*3*/] = { 2732.751f, 770.7942f, 48.8289f };
			vLocal_152[71 /*3*/] = { 2754.752f, 779.1329f, 37.7362f };
			vLocal_152[72 /*3*/] = { 2795.073f, 775.9935f, 19.6025f };
			vLocal_152[73 /*3*/] = { 2815.378f, 772.0298f, 18.5162f };
			vLocal_152[74 /*3*/] = { 2823.101f, 760.8618f, 18.5399f };
			vLocal_152[75 /*3*/] = { 2829.417f, 747.6486f, 18.4988f };
			vLocal_152[76 /*3*/] = { 2838.551f, 742.6433f, 18.5283f };
			vLocal_152[77 /*3*/] = { 2852.99f, 747.0413f, 18.3301f };
			vLocal_152[78 /*3*/] = { 2866.382f, 755.1819f, 18.1503f };
			vLocal_152[79 /*3*/] = { 2876.903f, 759.4967f, 16.8825f };
			vLocal_152[80 /*3*/] = { 2883.941f, 767.9843f, 17.9021f };
			vLocal_152[81 /*3*/] = { 2890.169f, 774.4565f, 18.7225f };
			vLocal_152[82 /*3*/] = { 2898.975f, 775.8782f, 19.8196f };
			vLocal_152[83 /*3*/] = { 2908.946f, 777.8163f, 22.677f };
			vLocal_152[84 /*3*/] = { 2911.956f, 780.126f, 23.7715f };
			vLocal_152[85 /*3*/] = { 2917.168f, 783.8945f, 24.2316f };
			vLocal_152[86 /*3*/] = { 2924.857f, 790.0166f, 24.7335f };
			vLocal_152[87 /*3*/] = { 2934.356f, 798.6711f, 23.9277f };
			vLocal_152[88 /*3*/] = { 2940.85f, 803.635f, 23.7534f };
			vLocal_152[89 /*3*/] = { 2944.641f, 806.6476f, 23.5292f };
			vLocal_152[90 /*3*/] = { 2951.772f, 813.8921f, 22.0205f };
			iLocal_154 = 91;
			break;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_154)
	{
		vVar1 = { vLocal_152[iVar0 /*3*/] };
		vVar2 = { vLocal_152[iVar0 + 1 /*3*/] };
		if (!func_31(vVar2, 0f, 0f, 0f, 0))
		{
			fLocal_153[iVar0] = GET_DISTANCE_BETWEEN_COORDS(vVar1, vVar2, true);
			fLocal_155 = (fLocal_155 + fLocal_153[iVar0]);
		}
		iVar0++;
	}
	fLocal_157 = ((fLocal_155 * 70f) / 100f);
	func_1066(vLocal_152[0 /*3*/]);
}

void func_1066(vector3 vParam0)
{
	Global_1574647.f_6 = { vParam0 };
}

void func_1067()
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

bool func_1068(int iParam0)
{
	int iVar0;
	
	iVar0 = func_50(2480, -1, 0);
	return IS_BIT_SET(iVar0, iParam0);
}

int func_1069()
{
	return 1;
}

int func_1070()
{
	return Local_112;
}

int func_1071(int iParam0)
{
	return Local_113[iParam0 /*8*/];
}

void func_1072(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_528(PLAYER_ID());
		Global_1675140.f_4 = func_953();
		Global_1675140.f_5 = func_952();
		if (func_42(PLAYER_ID()) || func_43(PLAYER_ID()))
		{
			Global_1675140.f_6 = 1;
		}
		else
		{
			Global_1675140.f_6 = 0;
		}
		Global_1675140.f_1 = func_1123(bParam9);
		Global_1675140.f_8 = 0xF12E6CD06C73D69E();
		Global_1675140.f_9 = func_992(bParam0);
		Global_1675140.f_10 = iParam1;
		Global_1675140.f_17 = Global_1675140.f_2;
		Global_1675140.f_18 = Global_1675140.f_2;
		Global_1675140.f_19 = func_984();
		Global_1675140.f_21 = (Global_1675140.f_8 - Global_1675140.f_7);
		if (func_131(PLAYER_ID(), 1))
		{
			Global_1675140.f_23 = func_992(func_234(1));
		}
		Global_1675140.f_24 = func_1122(PLAYER_ID());
		Global_1675140.f_28 = func_993(PLAYER_ID());
		if (Global_1675140.f_24 > 2)
		{
			Global_1675140.f_24 = 2;
		}
		func_1120(iVar0);
	}
	else
	{
		iVar0 = func_145(PLAYER_ID());
	}
	if (func_152(iVar0))
	{
		Global_1674879.f_2 = func_953();
		Global_1674879.f_3 = func_952();
		Global_1674879.f_50 = iParam4;
		Global_1674879.f_51 = iParam5;
		Global_1674879.f_10 = 0xF12E6CD06C73D69E();
		Global_1674879.f_20 = (Global_1674879.f_10 - Global_1674879.f_9);
		Global_1674879.f_12 = iParam1;
		Global_1674879.f_19 = func_1116(iVar0, bParam0, func_1119(bParam3));
		if (bParam0)
		{
			Global_1674879.f_11 = 1;
		}
		else
		{
			Global_1674879.f_11 = 0;
		}
		if ((func_41(PLAYER_ID()) || func_39(PLAYER_ID())) || func_45(PLAYER_ID()))
		{
			Global_1674879.f_8 = 1;
		}
		else
		{
			Global_1674879.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1674879.f_43 = 0;
			Global_1674879.f_45 = func_989(func_181(), iParam2);
			Global_1674879.f_47 = iParam7;
			Global_1674879.f_46 = iParam6;
			Global_1674879.f_52 = func_1115(func_181(), iParam2);
		}
		func_1113(iVar0);
	}
	else if (func_151(iVar0))
	{
		Global_1674933.f_2 = func_953();
		Global_1674933.f_3 = func_952();
		Global_1674933.f_10 = 0xF12E6CD06C73D69E();
		Global_1674933.f_19 = (Global_1674933.f_10 - Global_1674933.f_9);
		Global_1674933.f_12 = iParam1;
		if (bParam0)
		{
			Global_1674933.f_11 = 1;
		}
		else
		{
			Global_1674933.f_11 = 0;
		}
		if ((func_41(PLAYER_ID()) || func_39(PLAYER_ID())) || func_45(PLAYER_ID()))
		{
			Global_1674933.f_8 = 1;
		}
		else
		{
			Global_1674933.f_8 = 0;
		}
		func_1111(iVar0);
	}
	else if (func_150(iVar0))
	{
		Global_1674996.f_2 = func_953();
		Global_1674996.f_3 = func_952();
		Global_1674996.f_9 = 0xF12E6CD06C73D69E();
		Global_1674996.f_18 = (Global_1674996.f_9 - Global_1674996.f_8);
		Global_1674996.f_11 = iParam1;
		Global_1674996.f_7 = func_984();
		Global_1674996.f_42 = func_986(func_52(), 5);
		iVar1 = PLAYER_ID();
		iVar2 = func_174(iVar1);
		Global_1674996.f_28 = iVar2;
		Global_1674996.f_29 = func_992((func_921(iVar1) || func_920(iVar1)));
		Global_1674996.f_30 = func_992(func_1110(iVar1));
		Global_1674996.f_32 = func_992(func_918(iVar1));
		Global_1674996.f_33 = func_992(func_919(iVar1));
		Global_1674996.f_34 = func_992(func_1109(iVar1));
		Global_1674996.f_35 = func_992(func_917(0, iVar1) == 1);
		Global_1674996.f_36 = func_992(func_1108(iVar1));
		Global_1674996.f_37 = func_992(func_1107(iVar1));
		Global_1674996.f_38 = func_992(func_1106(iVar1));
		Global_1674996.f_39 = func_992(func_299(iVar1, iVar2, 0));
		Global_1674996.f_40 = func_992(func_299(iVar1, iVar2, 2));
		Global_1674996.f_41 = func_992(func_299(iVar1, iVar2, 1));
		if (func_1105(iVar1))
		{
			Global_1674996.f_31 = 2;
		}
		else if (func_1104(iVar1))
		{
			Global_1674996.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1674996.f_10 = 1;
		}
		else
		{
			Global_1674996.f_10 = 0;
		}
		if ((func_41(PLAYER_ID()) || func_39(PLAYER_ID())) || func_45(PLAYER_ID()))
		{
			Global_1674996.f_6 = 1;
		}
		else
		{
			Global_1674996.f_6 = 0;
		}
		Global_1674996.f_21 = -2;
		Global_1674996.f_22 = -2;
		func_1102(iVar0);
	}
	else if (func_149(iVar0))
	{
		Global_1675040.f_2 = func_953();
		Global_1675040.f_3 = func_952();
		if ((func_41(PLAYER_ID()) || func_39(PLAYER_ID())) || func_45(PLAYER_ID()))
		{
			Global_1675040.f_6 = 1;
		}
		else
		{
			Global_1675040.f_6 = 0;
		}
		Global_1675040.f_9 = 0xF12E6CD06C73D69E();
		Global_1675040.f_10 = func_992(bParam0);
		Global_1675040.f_11 = iParam1;
		Global_1675040.f_17 = func_985(func_248());
		Global_1675040.f_18 = (Global_1675040.f_9 - Global_1675040.f_8);
		Global_1675040.f_20 = iParam8;
		Global_1675040.f_21 = -2;
		Global_1675040.f_22 = -2;
		Global_1675040.f_27 = func_1101();
		Global_1675040.f_29 = func_50(6107, -1, 0);
		Global_1675040.f_30 = func_50(6103, -1, 0);
		Global_1675040.f_31 = func_50(6104, -1, 0);
		Global_1675040.f_32 = func_50(6106, -1, 0);
		Global_1675040.f_33 = func_50(6105, -1, 0);
		Global_1675040.f_34 = func_50(6108, -1, 0);
		Global_1675040.f_36 = func_992(func_234(1));
		Global_1675040.f_37 = func_1099();
		func_1089();
		func_1087(iVar0);
	}
	else if (func_148(iVar0))
	{
		Global_1675094.f_2 = func_953();
		Global_1675094.f_3 = func_952();
		if ((func_41(PLAYER_ID()) || func_39(PLAYER_ID())) || func_45(PLAYER_ID()))
		{
			Global_1675094.f_6 = 1;
		}
		else
		{
			Global_1675094.f_6 = 0;
		}
		Global_1675094.f_9 = 0xF12E6CD06C73D69E();
		Global_1675094.f_10 = func_992(bParam0);
		Global_1675094.f_11 = iParam1;
		Global_1675094.f_18 = (Global_1675094.f_9 - Global_1675094.f_8);
		Global_1675094.f_20 = iParam8;
		Global_1675094.f_23 = Global_786547;
		Global_1675094.f_36 = Global_786547.f_1;
		Global_1675094.f_24 = func_50(6157, -1, 0);
		Global_1675094.f_25 = func_50(6162, -1, 0);
		Global_1675094.f_26 = func_50(6163, -1, 0);
		Global_1675094.f_27 = func_992((((func_983() || func_982()) || func_981()) || func_980(PLAYER_ID())));
		Global_1675094.f_28 = func_50(6164, -1, 0);
		Global_1675094.f_29 = func_992(func_979());
		Global_1675094.f_35 = -1;
		Global_1675094.f_38 = -1;
		Global_1675094.f_39 = Global_1675094.f_4;
		Global_1675094.f_40 = Global_1675094.f_5;
		Global_1675094.f_41 = func_953();
		Global_1675094.f_42 = func_992(func_234(1));
		Global_1675094.f_44 = Global_1675094.f_18;
		func_1085(iVar0);
	}
	else if (func_140(iVar0))
	{
		if (Global_1675228.f_2 == -1)
		{
			Global_1675228.f_2 = func_953();
		}
		if (Global_1675228.f_3 == -1)
		{
			Global_1675228.f_3 = func_952();
		}
		if ((func_41(PLAYER_ID()) || func_39(PLAYER_ID())) || func_45(PLAYER_ID()))
		{
			Global_1675228.f_6 = 1;
		}
		else
		{
			Global_1675228.f_6 = 0;
		}
		Global_1675228.f_1 = func_1123(0);
		Global_1675228.f_7 = func_984();
		Global_1675228.f_9 = 0xF12E6CD06C73D69E();
		Global_1675228.f_10 = func_992(bParam0);
		Global_1675228.f_11 = iParam1;
		if (func_181() != -1)
		{
			Global_1675228.f_17 = func_775(func_181());
		}
		Global_1675228.f_18 = (Global_1675228.f_9 - Global_1675228.f_8);
		Global_1675228.f_19 = Global_2531497.f_6307;
		Global_1675228.f_28 = func_993(PLAYER_ID());
		Global_1675228.f_29 = func_992(func_1084(PLAYER_ID()));
		Global_1675228.f_30 = func_992(func_1083(PLAYER_ID()));
		Global_1675228.f_31 = func_961(PLAYER_ID());
		if (func_131(PLAYER_ID(), 1))
		{
			Global_1675228.f_33 = func_992(func_234(1));
		}
		if (Global_1675228.f_34 > 2)
		{
			Global_1675228.f_34 = 2;
		}
		func_1081(iVar0);
	}
	else if (func_146(iVar0))
	{
		Global_1675175.f_2 = func_953();
		Global_1675175.f_3 = func_952();
		if ((func_41(PLAYER_ID()) || func_39(PLAYER_ID())) || func_45(PLAYER_ID()))
		{
			Global_1675175.f_6 = 1;
		}
		else
		{
			Global_1675175.f_6 = 0;
		}
		Global_1675175.f_1 = func_1123(0);
		Global_1675175.f_9 = 0xF12E6CD06C73D69E();
		Global_1675175.f_10 = func_992(bParam0);
		Global_1675175.f_11 = iParam1;
		Global_1675175.f_18 = (Global_1675175.f_9 - Global_1675175.f_8);
		Global_1675175.f_28 = func_993(PLAYER_ID());
		if (Global_1675175.f_28)
		{
			Global_1675175.f_29 = func_978(PLAYER_ID());
		}
		else
		{
			Global_1675175.f_29 = 0;
		}
		Global_1675175.f_30 = func_962(PLAYER_ID(), 4, -1);
		Global_1675175.f_31 = func_961(PLAYER_ID());
		Global_1675175.f_32 = func_992(func_960(PLAYER_ID()));
		Global_1675175.f_33 = func_992(func_959(PLAYER_ID()));
		Global_1675175.f_34 = func_992(func_958(PLAYER_ID()));
		Global_1675175.f_35 = func_992(func_957(PLAYER_ID()));
		Global_1675175.f_36 = func_956(PLAYER_ID());
		Global_1675175.f_37 = func_955(PLAYER_ID());
		Global_1675175.f_39 = func_954(PLAYER_ID());
		if (func_131(PLAYER_ID(), 1))
		{
			Global_1675175.f_41 = func_992(func_234(1));
		}
		if (Global_1675175.f_42 > 2)
		{
			Global_1675175.f_42 = 2;
		}
		func_1079(iVar0);
	}
	else if (func_139(iVar0))
	{
		Global_1675312.f_2 = func_953();
		Global_1675312.f_3 = func_952();
		Global_1675312.f_4 = func_995(func_181());
		Global_1675312.f_5 = func_994(func_181());
		if ((func_41(PLAYER_ID()) || func_39(PLAYER_ID())) || func_45(PLAYER_ID()))
		{
			Global_1675312.f_6 = 1;
		}
		else
		{
			Global_1675312.f_6 = 0;
		}
		Global_1675312.f_7 = func_984();
		Global_1675312.f_9 = 0xF12E6CD06C73D69E();
		Global_1675312.f_10 = func_992(bParam0);
		Global_1675312.f_11 = iParam1;
		if (func_248() != -1)
		{
			Global_1675312.f_17 = func_775(func_248());
		}
		Global_1675312.f_18 = (Global_1675312.f_9 - Global_1675312.f_8);
		Global_1675312.f_21 = 1;
		Global_1675312.f_22 = 1;
		Global_1675312.f_25 = func_1078(PLAYER_ID());
		Global_1675312.f_27 = func_992(func_951(PLAYER_ID()));
		Global_1675312.f_28 = func_949(21, -1);
		Global_1675312.f_29 = func_992(func_1077(PLAYER_ID()));
		func_1075(iVar0);
	}
	else if (func_138(iVar0))
	{
		Global_1675387.f_6 = func_995(func_181());
		Global_1675387.f_7 = func_994(func_181());
		if (func_131(PLAYER_ID(), 1))
		{
			Global_1675387.f_8 = func_992(func_234(1));
		}
		Global_1675387.f_10 = func_984();
		Global_1675387.f_11 = 1;
		Global_1675387.f_13 = (0xF12E6CD06C73D69E() - Global_1703065);
		Global_1675387.f_14 = iParam1;
		Global_1675387.f_19 = 1;
		Global_1675387.f_20 = 1;
		func_1073(iVar0);
	}
	else
	{
		Global_1674861.f_6 = 0xF12E6CD06C73D69E();
		if (bParam0)
		{
			Global_1674861.f_7 = 1;
		}
		else
		{
			Global_1674861.f_7 = 0;
		}
		Global_1674861.f_8 = iParam1;
		if (Global_1674861.f_4 == 0)
		{
			if ((func_41(PLAYER_ID()) || func_39(PLAYER_ID())) || func_45(PLAYER_ID()))
			{
				Global_1674861.f_4 = 1;
			}
		}
	}
}

void func_1073(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	0x1A0D4A6C336B7BC5(&Global_1675387);
	func_1074();
}

void func_1074()
{
	struct<36> Var0;
	
	Global_1675387 = { Var0 };
	Global_1675387.f_23 = 0;
	Global_1675387.f_22 = 0;
	Global_1675387.f_21 = 0;
}

void func_1075(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	0x2BCB3EBCFE5801C6(&Global_1675312);
	func_1076();
}

void func_1076()
{
	struct<31> Var0;
	
	Global_1675312 = { Var0 };
}

int func_1077(int iParam0)
{
	if (iParam0 != func_398())
	{
		return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_365.f_2, 6);
	}
	return 0;
}

int func_1078(int iParam0)
{
	if (func_145(iParam0) == 243)
	{
		return func_143(iParam0);
	}
	return -1;
}

void func_1079(int iParam0)
{
	0x2D7A9B577E72385E(&Global_1675175);
	func_1080();
}

void func_1080()
{
	struct<53> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1675175 = { Var0 };
}

void func_1081(int iParam0)
{
	0x830C3A44EB3F2CF9(&Global_1675228);
	func_1082();
}

void func_1082()
{
	struct<39> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Global_1675228 = { Var0 };
}

bool func_1083(int iParam0)
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_318.f_1, 0);
}

bool func_1084(int iParam0)
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_318.f_1, 19);
}

void func_1085(int iParam0)
{
	0xD8AFB345A9C5CCBB(&Global_1675094);
	func_1086();
}

void func_1086()
{
	struct<46> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Global_1675094 = { Var0 };
	Global_1675094.f_16 = 0;
}

void func_1087(int iParam0)
{
	0x320C35147D5B5DDD(&Global_1675040);
	func_1088();
}

void func_1088()
{
	struct<54> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1675040 = { Var0 };
	Global_1675040.f_23 = 0;
	Global_1675040.f_24 = 0;
	Global_1675040.f_16 = 0;
}

void func_1089()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_936(12));
		func_935(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1323611[iVar1 /*141*/].f_66 != 0 && func_1091(Global_1323611[iVar1 /*141*/].f_66, 1))
			{
				if (Global_2531497.f_896 != iVar1)
				{
					if (func_1090(Global_1323611[iVar1 /*141*/].f_66))
					{
						if (Global_1323611[iVar1 /*141*/].f_66 != 0)
						{
							iVar3 = Global_1323611[iVar1 /*141*/].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1675040.f_38 = iVar3;
								break;
							
							case 1:
								Global_1675040.f_39 = iVar3;
								break;
							
							case 2:
								Global_1675040.f_40 = iVar3;
								break;
							
							case 3:
								Global_1675040.f_41 = iVar3;
								break;
							
							case 4:
								Global_1675040.f_42 = iVar3;
								break;
							
							case 5:
								Global_1675040.f_43 = iVar3;
								break;
							
							case 6:
								Global_1675040.f_44 = iVar3;
								break;
							
							case 7:
								Global_1675040.f_45 = iVar3;
								break;
							
							case 8:
								Global_1675040.f_46 = iVar3;
								break;
							
							case 9:
								Global_1675040.f_47 = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_1090(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case -1984275979:
		case -42959138:
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case -749299473:
		case -975345305:
		case -1700874274:
		case -392675425:
		case -1763555241:
		case 1043222410:
		case joaat("lazer"):
		case -1386191424:
		case 1565978651:
		case 1036591958:
		case -1007528109:
		case -32878452:
		case -1523619738:
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case 1181327175:
		case 447548909:
		case -726768679:
			return 1;
		
		default:
	}
	if (iParam0 == 1692272545)
	{
		return 1;
	}
	return 0;
}

int func_1091(int iParam0, bool bParam1)
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
		if (!func_1098())
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
		if ((((!func_1097() && !func_1096()) && !func_1095()) && !func_1094()) && !func_1098())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((IS_DURANGO_VERSION() || IS_DURANGO_VERSION()) || IS_DURANGO_VERSION())
		{
		}
		else if (!func_1095())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_1093(iParam0))
		{
			return 0;
		}
	}
	if (!func_1092(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_1092(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_346())
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

int func_1093(int iParam0)
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

int func_1094()
{
	return 0;
}

int func_1095()
{
	return 1;
}

int func_1096()
{
	return 1;
}

int func_1097()
{
	if (IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_1098()
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

var func_1099()
{
	var uVar0;
	
	uVar0 = func_1100();
	if (!func_175())
	{
		if (func_181() != func_398())
		{
			uVar0 = func_1122(func_181()) + 1;
		}
	}
	return uVar0;
}

int func_1100()
{
	return func_1122(PLAYER_ID()) + 1;
}

int func_1101()
{
	return func_50(6113, -1, 0);
}

void func_1102(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	0x0EACDF8487D5155A(&Global_1674996);
	func_1103();
}

void func_1103()
{
	struct<44> Var0;
	
	Global_1674996 = { Var0 };
	Global_1674996.f_23 = 0;
	Global_1674996.f_24 = 0;
	Global_1674996.f_16 = 0;
}

bool func_1104(int iParam0)
{
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 12);
}

bool func_1105(int iParam0)
{
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 13);
}

int func_1106(int iParam0)
{
	if (iParam0 != func_398())
	{
		if ((IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 12) || IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 13)) || IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_1107(int iParam0)
{
	if (iParam0 != func_398())
	{
		if ((IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 0) || IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 1)) || IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_1108(int iParam0)
{
	if (iParam0 != func_398())
	{
		if (((((IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 3) || IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 4)) || IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 5)) || IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 0)) || IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 1)) || IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_1109(int iParam0)
{
	if (iParam0 != func_398())
	{
		if ((IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 6) || IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 7)) || IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_255, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_1110(int iParam0)
{
	if (iParam0 == func_398())
	{
		return 0;
	}
	return IS_BIT_SET(Global_1590446[iParam0 /*871*/].f_273.f_347, 9);
}

void func_1111(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	0x7D8BA05688AD64C7(&Global_1674933);
	func_1112();
}

void func_1112()
{
	struct<63> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Var0.f_62 = -1;
	Global_1674933 = { Var0 };
	Global_1674933.f_24 = 0;
	Global_1674933.f_25 = 0;
	Global_1674933.f_17 = 0;
}

void func_1113(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	0xBF371CD2B64212FD(&Global_1674879);
	func_1114();
}

void func_1114()
{
	struct<54> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1674879 = { Var0 };
	Global_1674879.f_29 = 0;
	Global_1674879.f_30 = 0;
	Global_1674879.f_17 = 0;
}

int func_1115(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_299(iParam0, iParam1, 2);
	bVar1 = func_299(iParam0, iParam1, 1);
	bVar2 = func_299(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_1116(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_161(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17687;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17686;
		}
		else
		{
			iVar0 = Global_262145.f_17668;
		}
		iVar1 = 19;
	}
	else if (func_991(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_155(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17667;
			iVar1 = 20;
		}
	}
	else if (func_152(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17687;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17686;
		}
		else
		{
			iVar0 = Global_262145.f_17668;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		0x501478855A6074CE(func_995(func_181()), func_994(func_181()), func_953(), func_952(), iVar1, iVar0);
	}
	func_1118(iVar0);
	func_1117(iVar0);
	return iVar0;
}

void func_1117(int iParam0)
{
	int iVar0;
	
	iVar0 = func_50(3968, -1, 0);
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
	func_159(3968, iVar0, -1, 1, 0);
}

void func_1118(int iParam0)
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

int func_1119(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_41(PLAYER_ID()) || func_45(PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_1120(int iParam0)
{
	0x316DB59CD14C1774(&Global_1675140);
	func_1121();
}

void func_1121()
{
	struct<35> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_1675140 = { Var0 };
}

int func_1122(int iParam0)
{
	if (func_119(iParam0) == func_398())
	{
		return 0;
	}
	return Global_1628955[iParam0 /*614*/].f_11.f_19;
}

int func_1123(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_528(PLAYER_ID());
	}
	else
	{
		iVar0 = func_145(PLAYER_ID());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_1126(PLAYER_ID());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_1125(PLAYER_ID());
			if (func_141(func_142(PLAYER_ID())))
			{
				iVar1 = 100;
			}
			else
			{
				iVar1 = 200;
			}
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 250:
			iVar2 = func_1125(PLAYER_ID());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_1124(PLAYER_ID());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_1124(PLAYER_ID());
			iVar1 = 500;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 239:
			iVar1 = 600;
			break;
		
		case 240:
			iVar1 = 700;
			break;
		
		case 241:
			iVar1 = 800;
			break;
		
		case 242:
			iVar1 = 900;
			break;
		
		case 244:
			iVar1 = 1100;
			break;
		
		case 248:
			iVar1 = 1200;
			break;
	}
	return iVar1;
}

int func_1124(int iParam0)
{
	if (func_145(PLAYER_ID()) == 238 || func_145(PLAYER_ID()) == 249)
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_498;
	}
	return -1;
}

int func_1125(int iParam0)
{
	if (func_145(PLAYER_ID()) == 237 || func_145(PLAYER_ID()) == 250)
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_497;
	}
	return -1;
}

int func_1126(int iParam0)
{
	if (func_528(iParam0) == 236)
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_496;
	}
	return -1;
}

int func_1127(bool bParam0)
{
	if (func_1130(1))
	{
		return 1;
	}
	if (Global_2531497.f_4898.f_39)
	{
		Global_2531497.f_4898.f_39 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_248() == func_398() || !func_1276(func_248(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_1041(PLAYER_ID()))
	{
		if (func_1129(PLAYER_ID()) && func_1128())
		{
			return 1;
		}
	}
	return 0;
}

int func_1128()
{
	switch (func_1040(func_1035(PLAYER_ID())))
	{
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_1129(int iParam0)
{
	if (iParam0 != func_398() && func_1276(iParam0, 1, 1))
	{
		return IS_BIT_SET(Global_2424073[iParam0 /*421*/].f_309, 4);
	}
	return 0;
}

int func_1130(bool bParam0)
{
	bool bVar0;
	
	if (!func_179(1))
	{
		bVar0 = false;
		if (Global_1628955[PLAYER_ID() /*614*/].f_11.f_57 != func_398())
		{
			if (func_1276(Global_1628955[PLAYER_ID() /*614*/].f_11.f_57, 0, 1))
			{
				if ((Global_1628955[PLAYER_ID() /*614*/].f_11.f_24 == 4 || Global_1628955[PLAYER_ID() /*614*/].f_11.f_24 == 8) || Global_1628955[PLAYER_ID() /*614*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_865(func_145(PLAYER_ID())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_241(31);
				if (func_152(func_145(PLAYER_ID())))
				{
					func_241(81);
				}
				if (Global_1628955[PLAYER_ID() /*614*/].f_11.f_57 != func_398() && PLAYER_ID(Global_1628955[PLAYER_ID() /*614*/].f_11.f_57))
				{
					Global_1627443 = func_86(Global_1628955[PLAYER_ID() /*614*/].f_11.f_57, -2, 0, 0, 0);
					if (!func_163(Global_1628955[PLAYER_ID() /*614*/].f_11.f_57))
					{
						func_241(88);
					}
				}
				else
				{
					Global_1627443 = 1;
				}
				Global_1627427 = { Global_1628955[PLAYER_ID() /*614*/].f_11.f_104 };
			}
			return 1;
		}
	}
	return 0;
}

void func_1131()
{
	if (IS_BIT_SET(Global_1574647.f_1, 6))
	{
		func_869();
		CLEAR_BIT(&(Global_1574647.f_1), 6);
	}
	if (!IS_BIT_SET(Global_1574647.f_1, 7))
	{
		if (IS_BIT_SET(Global_1574647.f_1, 4) || IS_BIT_SET(Global_1574647.f_1, 16))
		{
			if (((!IS_RADAR_HIDDEN() && !IS_RADAR_HIDDEN()) && !func_568()) && func_1276(IS_RADAR_HIDDEN(), 1, 1))
			{
				SET_BIT(&(Global_1574647.f_1), 7);
				func_630("FME_PASINT", 30000);
				func_629(1);
			}
		}
		else if (IS_BIT_SET(Global_1574647.f_1, 17))
		{
			if (func_44() && !func_373())
			{
				CLEAR_BIT(&(Global_1574647.f_1), 17);
				SET_BIT(&(Global_1574647.f_1), 16);
			}
		}
	}
	if (!IS_BIT_SET(Global_1574647.f_1, 23))
	{
		if (((((!IS_RADAR_HIDDEN() && !IS_RADAR_HIDDEN(Global_2531497.f_795, 2)) && func_1276(IS_RADAR_HIDDEN(), 1, 1)) && !Global_73784) && !Global_58652) && !IS_RADAR_HIDDEN())
		{
			if (func_1148())
			{
				func_630("AMEV_GA_RP", -1);
				if (func_145(PLAYER_ID()) != 200)
				{
					func_629(1);
				}
				SET_BIT(&(Global_1574647.f_1), 23);
			}
		}
	}
	if (IS_PAUSE_MENU_ACTIVE() && IS_PAUSE_MENU_ACTIVE() == 15)
	{
		if (func_42(PLAYER_ID()))
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
		if (((((!IS_RADAR_HIDDEN() && !IS_RADAR_HIDDEN()) && !func_568()) && func_1276(IS_RADAR_HIDDEN(), 1, 1)) && !func_372(IS_RADAR_HIDDEN(), 21)) && !func_372(IS_RADAR_HIDDEN(), 25))
		{
			CLEAR_BIT(&(Global_1574647.f_1), 9);
			func_1147(0);
			func_630("FME_TBL00", -1);
			func_629(1);
		}
	}
	if (func_47(PLAYER_ID()))
	{
		if (!IS_BIT_SET(Global_1574647.f_1, 18))
		{
			if ((func_372(PLAYER_ID(), 21) && PLAYER_ID(Global_1574647.f_1, 20)) && !PLAYER_ID(Global_1574647.f_1, 19))
			{
				SET_BIT(&(Global_1574647.f_1), 18);
			}
		}
		else if (IS_BIT_SET(Global_1574647.f_1, 18))
		{
			if (((((!IS_RADAR_HIDDEN() && !IS_RADAR_HIDDEN()) && !func_568()) && func_1276(IS_RADAR_HIDDEN(), 1, 1)) && IS_RADAR_HIDDEN()) && !Global_2531497.f_4831)
			{
				CLEAR_BIT(&(Global_1574647.f_1), 18);
				SET_BIT(&(Global_1574647.f_1), 19);
				func_630("AMTT_RPAS", -1);
				func_629(1);
			}
		}
	}
	if (((((func_47(PLAYER_ID()) && !func_46(PLAYER_ID())) && func_528(PLAYER_ID()) != 146) && !func_375(PLAYER_ID())) && !func_1146(PLAYER_ID())) && !func_1142())
	{
		if (func_854(func_528(PLAYER_ID())))
		{
			0xFAC75988A7D078D3(0xFAC75988A7D078D3());
		}
		if (!IS_BIT_SET(Global_1574647.f_1, 22))
		{
			SET_BIT(&(Global_1574647.f_1), 22);
		}
		if (func_43(PLAYER_ID()) || func_852())
		{
			if (!IS_BIT_SET(Global_1574647.f_1, 10))
			{
				if (func_1140(func_528(PLAYER_ID())))
				{
					if (func_49(0) && !Global_2391045)
					{
						SET_BIT(&(Global_1574647.f_1), 9);
					}
					if (!Global_2391045)
					{
						func_721(1);
						SET_BIT(&(Global_1574647.f_1), 14);
					}
				}
				SET_BIT(&(Global_1574647.f_1), 10);
			}
		}
		if (func_42(PLAYER_ID()))
		{
			if (!IS_BIT_SET(Global_1574647.f_1, 11))
			{
				if (!Global_98721.f_8)
				{
					SET_BIT(&(Global_1574647.f_1), 12);
					func_766(1);
				}
				if (!func_1139())
				{
					SET_BIT(&(Global_1574647.f_1), 13);
					func_853();
				}
				if (!Global_2391045)
				{
					SET_BIT(&(Global_1574647.f_1), 14);
					if (func_49(0) && !Global_2391045)
					{
						SET_BIT(&(Global_1574647.f_1), 9);
					}
					func_721(1);
				}
				SET_BIT(&(Global_1574647.f_1), 11);
			}
		}
		else
		{
			func_1137(0);
		}
	}
	else
	{
		func_1137(1);
	}
	func_1132();
	if (func_851(func_528(PLAYER_ID())) && !PLAYER_ID(Global_1574647.f_1, 21))
	{
		SET_BIT(&(Global_1574647.f_1), 21);
	}
	if (((func_44() && !func_373()) || func_372(PLAYER_ID(), 21)) || func_372(PLAYER_ID(), 25))
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

void func_1132()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_568())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_793(iVar2))
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
				func_1133(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!IS_BIT_SET(Global_1574647.f_1, 26))
	{
		func_22(&(Global_1574647.f_22));
		SET_BIT(&(Global_1574647.f_1), 26);
	}
}

void func_1133(int iParam0, int iParam1)
{
	if (!func_24(&(Global_1574647.f_22)))
	{
		func_397(&(Global_1574647.f_22), 0, 0);
	}
	else if (func_23(&(Global_1574647.f_22), iParam1, 0))
	{
		if (func_617() > 0)
		{
			func_1136(iParam0);
			if (func_501("AMEV_LBD_HELP"))
			{
				CLEAR_HELP(1);
			}
			func_22(&(Global_1574647.f_22));
		}
	}
	else
	{
		func_1135(0);
		func_1134();
	}
}

void func_1134()
{
	Global_2531497.f_4532 = 0;
}

void func_1135(int iParam0)
{
	Global_1373500.f_68 = iParam0;
}

void func_1136(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2437549.f_2708[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2437549.f_2708[iVar0 /*80*/].f_2 = 5;
			func_113(&(Global_2437549.f_2708[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_1137(int iParam0)
{
	if ((IS_BIT_SET(Global_1574647.f_1, 11) || (IS_BIT_SET(Global_1574647.f_1, 10) && iParam0)) || (IS_BIT_SET(Global_1574647.f_1, 22) && iParam0))
	{
		if (IS_BIT_SET(Global_1574647.f_1, 12))
		{
			CLEAR_BIT(&(Global_1574647.f_1), 12);
			func_766(0);
		}
		if (IS_BIT_SET(Global_1574647.f_1, 13))
		{
			CLEAR_BIT(&(Global_1574647.f_1), 13);
			func_1138();
		}
		if (IS_BIT_SET(Global_1574647.f_1, 14) && !func_144(IS_BIT_SET(), 0))
		{
			CLEAR_BIT(&(Global_1574647.f_1), 14);
			func_721(0);
		}
		CLEAR_BIT(&(Global_1574647.f_1), 11);
		CLEAR_BIT(&(Global_1574647.f_1), 10);
		CLEAR_BIT(&(Global_1574647.f_1), 22);
	}
}

void func_1138()
{
	CLEAR_BIT(&(Global_2531497.f_4736), 0);
}

bool func_1139()
{
	return IS_BIT_SET(Global_2531497.f_4736, 0);
}

int func_1140(int iParam0)
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
			return func_42(PLAYER_ID());
		
		case 133:
			return (func_852() || func_1141(func_587()));
		
		default:
	}
	return 0;
}

int func_1141(int iParam0)
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

int func_1142()
{
	if (((((((((func_688() || func_488()) || func_687()) || func_455()) || (func_684() && !NETWORK_IS_ACTIVITY_SESSION())) || (func_1145() && !func_1144())) || Global_2394733) || Global_2394733.f_1 != 0) || Global_2394807 != 0) || (func_1143() == 2 && !NETWORK_IS_ACTIVITY_SESSION()))
	{
		return 1;
	}
	return 0;
}

int func_1143()
{
	return Global_968397;
}

bool func_1144()
{
	return IS_BIT_SET(Global_2448961.f_2, 27);
}

int func_1145()
{
	if (func_680() || func_679())
	{
		return Global_1590446[PLAYER_ID() /*871*/].f_98 == 8;
	}
	return 0;
}

bool func_1146(int iParam0)
{
	if (iParam0 == PLAYER_ID())
	{
		if (((func_44() && !func_373()) || func_372(PLAYER_ID(), 21)) || func_372(PLAYER_ID(), 25))
		{
			return 1;
		}
		if (func_24(&(Global_1574647.f_13)))
		{
			if (!func_23(&(Global_1574647.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_22(&(Global_1574647.f_13));
		}
	}
	else if (IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 10))
	{
		return 1;
	}
	return IS_BIT_SET(Global_1628955[iParam0 /*614*/].f_1, 9);
}

void func_1147(int iParam0)
{
	int iVar0;
	
	iVar0 = func_50(2534, -1, 0);
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
	func_159(2534, iVar0, -1, 1, 0);
}

int func_1148()
{
	int iVar0;
	
	if (!func_24(&(Global_1574647.f_15)))
	{
		func_397(&(Global_1574647.f_15), 0, 0);
		Global_1574647.f_17 = 0;
	}
	else if (func_23(&(Global_1574647.f_15), 1000, 0))
	{
		if (NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK_IS_PARTICIPANT_ACTIVE(Global_1574647.f_17)))
		{
			iVar0 = NETWORK_GET_PLAYER_INDEX(NETWORK_GET_PLAYER_INDEX(Global_1574647.f_17));
			if (NETWORK_IS_PLAYER_ACTIVE(iVar0))
			{
				if (func_1276(iVar0, 1, 1) && func_1149(iVar0, 6))
				{
					if (vdist(func_219(PLAYER_ID()), func_219(iVar0)) < 80f)
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
			func_22(&(Global_1574647.f_15));
		}
	}
	return 0;
}

int func_1149(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312448 != 0)
	{
		return 0;
	}
	if (!func_210(iParam0))
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

bool func_1150()
{
	return Global_1574647.f_24;
}

bool func_1151(int iParam0)
{
	return !func_1152(iParam0);
}

int func_1152(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_6660)
			{
				return 0;
			}
			if (func_372(PLAYER_ID(), 7))
			{
				return 0;
			}
			if (IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_24, 0) || IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_24, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_6661)
			{
				return 0;
			}
			if (func_372(PLAYER_ID(), 7))
			{
				return 0;
			}
			if (IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_24, 0) || IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_24, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_6662)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_6663)
			{
				return 0;
			}
			if (func_372(PLAYER_ID(), 7))
			{
				return 0;
			}
			if (IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_24, 0) || IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_24, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_1153(4))
			{
				return 0;
			}
			if (func_372(PLAYER_ID(), 7))
			{
				return 0;
			}
			if (IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_24, 0) || IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_24, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_1153(4))
			{
				return 0;
			}
			if (func_372(PLAYER_ID(), 7))
			{
				return 0;
			}
			if (IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_24, 0) || IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_24, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_1153(4))
			{
				return 0;
			}
			if (func_372(PLAYER_ID(), 7))
			{
				return 0;
			}
			if (IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_24, 0) || IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_24, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_1153(4))
			{
				return 0;
			}
			if (func_372(PLAYER_ID(), 7))
			{
				return 0;
			}
			if (IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_24, 0) || IS_BIT_SET(Global_1590446[IS_BIT_SET() /*871*/].f_273.f_24, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_1153(4))
			{
				return 0;
			}
			if (func_372(PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_1153(4))
			{
				return 0;
			}
			if (func_372(PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_1153(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_1276(INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (IS_BIT_SET(Global_2424073[iVar0 /*421*/].f_208, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1154()
{
	var uVar0;
	
	func_1158(&uVar0);
	if (Global_1312850 == 0)
	{
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_1157())
	{
		return 1;
	}
	if (Global_2461241)
	{
		return 1;
	}
	if (func_1156())
	{
		return 1;
	}
	if (func_1155(159))
	{
		if (!func_688())
		{
			return 1;
		}
	}
	if (func_1155(157))
	{
		return 1;
	}
	if (!NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_725() != 0)
	{
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_725()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_1155(int iParam0)
{
	if (GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_1156()
{
	return Global_2458999;
}

bool func_1157()
{
	return Global_2448961.f_593;
}

void func_1158(var uParam0)
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
					func_1159(iVar0);
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

void func_1159(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_1276(vVar0.y, 1, 1))
		{
			iVar1 = GET_PLAYER_PED(vVar0.y);
			if (DOES_ENTITY_EXIST(iVar1))
			{
				if (IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && IS_VEHICLE_WINDOW_INTACT())
					{
						if (func_1160(iVar2, &bVar3))
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

int func_1160(int iParam0, var uParam1)
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

void func_1161()
{
	wait(0);
}

void func_1162()
{
	int iVar0;
	
	if (IS_BIT_SET(iLocal_116, 0))
	{
		SET_MAX_WANTED_LEVEL(5);
		CLEAR_BIT(&iLocal_116, 0);
	}
	if (IS_BIT_SET(Local_112.f_1, 5) || IS_BIT_SET(Local_112.f_1, 12))
	{
		if (NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_112.f_184.f_3))
		{
			if (!IS_PED_INJURED(IS_PED_INJURED(Local_112.f_184.f_3)))
			{
				if (NETWORK_HAS_CONTROL_OF_ENTITY(NETWORK_HAS_CONTROL_OF_ENTITY(Local_112.f_184.f_3)))
				{
					if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(Local_112.f_184.f_2), 0))
					{
						CLEAR_PED_TASKS(CLEAR_PED_TASKS(Local_112.f_184.f_3));
						if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST(Local_112.f_184.f_7)) && !DOES_ENTITY_EXIST(DOES_ENTITY_EXIST(Local_112.f_184.f_7), 0))
						{
							TASK_HELI_MISSION(TASK_HELI_MISSION(Local_112.f_184.f_3), TASK_HELI_MISSION(Local_112.f_184.f_2), 0, TASK_HELI_MISSION(Local_112.f_184.f_7), 0f, 0f, 0f, 8, 20f, 1000f, -1f, 60, 50, -1f, 0);
						}
						else
						{
							SET_PED_FLEE_ATTRIBUTES(SET_PED_FLEE_ATTRIBUTES(Local_112.f_184.f_3), 2048, true);
							TASK_SMART_FLEE_COORD(TASK_SMART_FLEE_COORD(Local_112.f_184.f_3), TASK_SMART_FLEE_COORD(TASK_SMART_FLEE_COORD(Local_112.f_184.f_3), true), 10000f, 999999, 0, 0);
						}
						SET_PED_KEEP_TASK(SET_PED_KEEP_TASK(Local_112.f_184.f_3), true);
					}
				}
			}
		}
	}
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 0) || IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 6))
		{
			if (func_743())
			{
				func_741();
			}
		}
	}
	if (IS_BIT_SET(iLocal_116, 3))
	{
		if (DOES_ENTITY_EXIST(iLocal_592))
		{
			if (IS_VEHICLE_DRIVEABLE(iLocal_592, 0))
			{
				SET_ENTITY_PROOFS(iLocal_592, false, false, false, false, false, false, 0, false);
				CLEAR_BIT(&iLocal_116, 3);
			}
		}
	}
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_493())
		{
			func_667(PLAYER_ID(), 1, 0, 0);
			func_494();
		}
	}
	func_776(24, 0);
	func_1222(0);
	if (!IS_BIT_SET(iLocal_115, 24))
	{
		if (Local_112.f_197 == 2)
		{
			func_1171(1, 0);
		}
		else if (NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_757(136, 0, IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 2));
		}
		else
		{
			func_757(136, 0, 0);
		}
	}
	else if (Local_112.f_197 == 2)
	{
		func_1171(1, 0);
	}
	if (GET_PED_RELATIONSHIP_GROUP_HASH(GET_PED_RELATIONSHIP_GROUP_HASH()) == iLocal_131)
	{
		SET_PED_RELATIONSHIP_GROUP_HASH(SET_PED_RELATIONSHIP_GROUP_HASH(), iLocal_133);
	}
	if (Local_112.f_197 == 2)
	{
		if (IS_BIT_SET(Global_1574647.f_1, 8))
		{
			func_869();
		}
	}
	if (PLAYER_ID() != -1)
	{
		if (Global_1590446[PLAYER_ID() /*871*/] == 136)
		{
			Global_1590446[PLAYER_ID() /*871*/] = -1;
		}
	}
	if (IS_BIT_SET(iLocal_114, 6))
	{
		ANIMPOSTFX_STOP("pennedIn");
		ANIMPOSTFX_PLAY("PennedInOut", 0, 0);
		CLEAR_BIT(&iLocal_114, 6);
	}
	if (IS_AUDIO_SCENE_ACTIVE("MP_Player_Inside_Bubble_Scene"))
	{
		STOP_AUDIO_SCENE("MP_Player_Inside_Bubble_Scene");
	}
	if (IS_AUDIO_SCENE_ACTIVE("MP_Player_Outside_Bubble_Scene"))
	{
		STOP_AUDIO_SCENE("MP_Player_Outside_Bubble_Scene");
	}
	func_818(&iLocal_1290);
	func_1170();
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_814();
	}
	func_825(0);
	func_623(0, 136);
	_0xCB0360EFEFB2580D(0);
	if (IS_BIT_SET(iLocal_115, 11))
	{
		if (!IS_BIT_SET(iLocal_115, 12))
		{
			SET_USER_RADIO_CONTROL_ENABLED(1);
			TRIGGER_MUSIC_EVENT("MP_MC_STOP");
		}
	}
	if (Local_112.f_197 != 2)
	{
		if (func_1154())
		{
			Local_1296.f_5 = 5;
		}
		else if (func_815(2, 0, 1, 0, 0))
		{
			Local_1296.f_5 = 6;
		}
		else if (func_133() == PLAYER_ID())
		{
			Local_1296.f_5 = 1;
		}
		else
		{
			Local_1296.f_5 = 2;
		}
		Local_1296 = Local_112.f_179;
		Local_1296.f_1 = Local_112.f_180;
		Local_1296.f_4 = Local_112.f_181;
		Local_1296.f_3 = Local_112.f_183;
		Local_1296.f_10 = (0xF12E6CD06C73D69E() - Local_1296.f_9);
		func_1168(Local_1296, -1, -1, -1, -1, -1, -1);
	}
	else
	{
		Global_1674879.f_25 = Local_112.f_181;
		Global_1674861.f_2 = Local_112.f_179;
		Global_1674861.f_3 = Local_112.f_180;
		func_1166(Global_1674861, -1, -1, -1, -1);
		if (!IS_BIT_SET(iLocal_115, 31))
		{
			if (PARTICIPANT_ID_TO_INT() > -1)
			{
				func_1072(0, 4, 0, !IS_BIT_SET(Local_113[IS_BIT_SET() /*8*/].f_1, 0), -1, -1, -1, -1, -1, 0);
			}
		}
	}
	if (!func_334())
	{
		if (Local_1296.f_6 > 0)
		{
			if (Local_1296.f_5 == 1)
			{
				if (Local_112.f_197 != 2)
				{
					func_1165();
				}
			}
		}
	}
	func_870();
	func_791(0);
	func_438(0);
	if (func_436(PLAYER_ID()))
	{
		func_879(0);
	}
	if (!IS_PED_INJURED(IS_PED_INJURED()) && !IS_PED_INJURED(IS_PED_INJURED()))
	{
		SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(), 0);
	}
	if (!IS_PED_INJURED(IS_PED_INJURED()))
	{
		if (IS_PED_SITTING_IN_ANY_VEHICLE(IS_PED_SITTING_IN_ANY_VEHICLE()))
		{
		}
		SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 398, false);
	}
	func_1164(0);
	CLEAR_BIT(&iLocal_114, 18);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (IS_BIT_SET(iLocal_121, iVar0))
		{
			if (NETWORK_IS_PLAYER_ACTIVE(NETWORK_IS_PLAYER_ACTIVE(iVar0)))
			{
				0x13F1FCB111B820B0(0x13F1FCB111B820B0(iVar0), 0);
			}
		}
		iVar0++;
	}
	func_872(1);
	SET_PED_CONFIG_FLAG(SET_PED_CONFIG_FLAG(), 422, false);
	if (IS_BIT_SET(iLocal_116, 2))
	{
		if (!IS_PED_INJURED(IS_PED_INJURED()))
		{
			SET_ENTITY_PROOFS(SET_ENTITY_PROOFS(), false, false, false, false, false, false, 0, false);
			CLEAR_BIT(&iLocal_116, 2);
		}
	}
	func_1163();
}

void func_1163()
{
	TERMINATE_THIS_THREAD();
}

void func_1164(bool bParam0)
{
	if (bParam0)
	{
		SET_BIT(&(Global_1628955[SET_BIT() /*614*/].f_1), 6);
	}
	else
	{
		CLEAR_BIT(&(Global_1628955[CLEAR_BIT() /*614*/].f_1), 6);
	}
}

void func_1165()
{
	SET_BIT(&(Global_2531497.f_1734), 18);
}

void func_1166(struct<14> Param0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	char* sVar0;
	struct<15> Var1;
	struct<19> Var2;
	struct<19> Var3;
	struct<16> Var4;
	struct<17> Var5;
	struct<15> Var6;
	struct<17> Var7;
	struct<17> Var8;
	
	sVar0 = GET_THIS_SCRIPT_NAME();
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (ARE_STRINGS_EQUAL(sVar0, "GB_CARJACKING"))
		{
			Var1 = { Param0 };
			Var1.f_14 = iParam1;
			0x7B18DA61F6BAE9D5(&Var1);
		}
		else if (ARE_STRINGS_EQUAL(sVar0, "GB_ROB_SHOP"))
		{
			Var2 = { Param0 };
			Var2.f_14 = Global_1674861.f_14;
			Var2.f_15 = iParam1;
			Var2.f_16 = iParam2;
			Var2.f_17 = iParam3;
			Var2.f_18 = iParam4;
			0x06EAF70AE066441E(&Var2);
		}
		else if (ARE_STRINGS_EQUAL(sVar0, "GB_COLLECT_MONEY"))
		{
			Var3 = { Param0 };
			Var3.f_14 = Global_1674861.f_14;
			Var3.f_15 = iParam1;
			Var3.f_16 = iParam2;
			Var3.f_17 = iParam3;
			Var3.f_18 = iParam4;
			0x14EDA9EE27BD1626(&Var3);
		}
		else if (ARE_STRINGS_EQUAL(sVar0, "GB_FIVESTAR"))
		{
			Var4 = { Param0 };
			Var4.f_14 = Global_1674861.f_14;
			Var4.f_15 = iParam1;
			0x930F504203F561C9(&Var4);
		}
		else if (ARE_STRINGS_EQUAL(sVar0, "GB_FINDERSKEEPERS"))
		{
			Var5 = { Param0 };
			Var5.f_14 = Global_1674861.f_14;
			Var5.f_15 = iParam1;
			Var5.f_16 = iParam2;
			0xE3261D791EB44ACB(&Var5);
		}
		else if (ARE_STRINGS_EQUAL(sVar0, "GB_POINT_TO_POINT"))
		{
			Var6 = { Param0 };
			Var6.f_14 = Global_1674861.f_14;
			0x73001E34F85137F8(&Var6);
		}
		else if (ARE_STRINGS_EQUAL(sVar0, "GB_CASHING_OUT"))
		{
			Var7 = { Param0 };
			Var7.f_14 = iParam1;
			Var7.f_15 = (to_float(iParam1) / to_float(iParam2));
			Var7.f_16 = iParam3;
			0x53CAE13E9B426993(&Var7);
		}
		else if (ARE_STRINGS_EQUAL(sVar0, "GB_SALVAGE"))
		{
			Var8 = { Param0 };
			Var8.f_14 = iParam1;
			Var8.f_15 = iParam2;
			Var8.f_16 = Global_1674861.f_14;
			0x7D36291161859389(&Var8);
		}
	}
	func_1167();
}

void func_1167()
{
	struct<18> Var0;
	
	Global_1674861 = { Var0 };
}

void func_1168(struct<12> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			Var1.f_12 = iParam1;
			0xBFAFDB5FAAA5C5AB(&Var1);
		}
		else if (ARE_STRINGS_EQUAL(sVar0, func_1169()))
		{
			Var2 = { Param0 };
			Var2.f_12 = iParam1;
			Var2.f_13 = iParam2;
			0xBAA2F0490E146BE8(&Var2);
		}
		else if (ARE_STRINGS_EQUAL(sVar0, "am_cp_collection"))
		{
			Var3 = { Param0 };
			Var3.f_12 = iParam1;
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
			Var4.f_12 = iParam1;
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
			Var5.f_12 = iParam1;
			0x419615486BBF1956(&Var5);
		}
		else if (ARE_STRINGS_EQUAL(sVar0, "am_hot_property"))
		{
			Var6 = { Param0 };
			Var6.f_12 = iParam1;
			Var6.f_13 = iParam2;
			0x84DFC579C2FC214C(&Var6);
		}
		else if (ARE_STRINGS_EQUAL(sVar0, "am_dead_drop"))
		{
			Var7 = { Param0 };
			Var7.f_12 = iParam1;
			Var7.f_13 = iParam2;
			0x0A9C7F36E5D7B683(&Var7);
		}
		else if (ARE_STRINGS_EQUAL(sVar0, "am_king_of_the_castle"))
		{
			Var8 = { Param0 };
			Var8.f_12 = iParam1;
			Var8.f_13 = iParam2;
			Var8.f_14 = iParam3;
			Var8.f_15 = iParam4;
			0x164C5FF663790845(&Var8);
		}
		else if (ARE_STRINGS_EQUAL(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var9 = { Param0 };
			Var9.f_12 = iParam1;
			0xEDBF6C9B0D2C65C8(&Var9);
		}
		else if (ARE_STRINGS_EQUAL(sVar0, "AM_KILL_LIST"))
		{
			if (iParam3 == 0)
			{
				Var10 = { Param0 };
				Var10.f_12 = iParam1;
				Var10.f_13 = iParam2;
				0x8C9D11605E59D955(&Var10);
			}
			else
			{
				Var11 = { Param0 };
				Var11.f_12 = iParam1;
				Var11.f_13 = iParam2;
				0x6551B1F7F6CD46EA(&Var11);
			}
		}
		else if (ARE_STRINGS_EQUAL(sVar0, "am_hunt_the_beast"))
		{
			Var12 = { Param0 };
			Var12.f_12 = iParam1;
			0x2CD90358F67D0AA8(&Var12);
		}
	}
}

char* func_1169()
{
	switch (Global_2461343)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

void func_1170()
{
	REMOVE_RELATIONSHIP_GROUP(iLocal_132);
	REMOVE_RELATIONSHIP_GROUP(iLocal_131);
}

void func_1171(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1363235.f_1.f_108 != 0)
	{
		Global_1363235.f_1.f_108 = 0;
	}
	Global_1363235.f_1.f_109 = -1;
	Global_1363235.f_1.f_110 = -1;
	if (Global_1628955[PLAYER_ID() /*614*/].f_11.f_33 == 167 || Global_1628955[PLAYER_ID() /*614*/].f_11.f_33 == 168)
	{
		func_1220();
		CLEAR_BIT(&(Global_1674852.f_3), 4);
	}
	if ((func_162() && iParam1 != 0) && Global_262145.f_16969)
	{
		if (Global_1628955[PLAYER_ID() /*614*/].f_11.f_33 == 190 || Global_1628955[PLAYER_ID() /*614*/].f_11.f_33 == 192)
		{
			func_1202(PLAYER_ID(), iParam1, 1, 0);
		}
	}
	if (((Global_1628955[PLAYER_ID() /*614*/].f_11.f_33 == 164 || Global_1628955[PLAYER_ID() /*614*/].f_11.f_33 == 208) || Global_1628955[PLAYER_ID() /*614*/].f_11.f_33 == 250) || Global_1628955[PLAYER_ID() /*614*/].f_11.f_33 == 237)
	{
		ENABLE_DISPATCH_SERVICE(3, true);
		ENABLE_DISPATCH_SERVICE(5, true);
	}
	if (Global_1628955[PLAYER_ID() /*614*/].f_11.f_33 != -1)
	{
		Global_1628955[PLAYER_ID() /*614*/].f_11.f_33 = -1;
		if (!IS_BIT_SET(Global_1574647.f_1, 14) && !func_47(IS_BIT_SET()))
		{
			func_721(0);
		}
	}
	else if (func_412(PLAYER_ID()) != -1)
	{
		func_900(-1);
	}
	func_1201(func_398());
	if (func_235(16))
	{
		func_697(16);
	}
	func_1198(0);
	func_895(-1);
	func_1197();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_1196(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_1194(iVar1);
		iVar1++;
	}
	if (IS_BIT_SET(Global_1674852.f_3, 0))
	{
		SET_WANTED_LEVEL_MULTIPLIER(1f);
		SET_MAX_WANTED_LEVEL(5);
		CLEAR_BIT(&(Global_1674852.f_3), 0);
	}
	if (IS_BIT_SET(Global_1674852.f_3, 5))
	{
		CLEAR_BIT(&(Global_1674852.f_3), 5);
	}
	iVar2 = func_1193();
	if ((func_560(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_1192(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_161(iVar2))
	{
		func_1189(-1, 1);
	}
	else if (((((func_1188(iVar2) || func_1187(iVar2)) || func_1186(iVar2)) || func_150(iVar2)) || func_149(iVar2)) || func_148(iVar2))
	{
	}
	else
	{
		func_1189(-1, 1);
	}
	func_371(19);
	func_371(20);
	func_371(21);
	func_371(22);
	func_371(27);
	func_697(3);
	func_697(4);
	func_697(7);
	func_1185();
	if (func_41(PLAYER_ID()))
	{
		func_859(0);
	}
	func_371(29);
	Global_1628955[PLAYER_ID() /*614*/].f_11.f_57 = func_398();
	if (Global_2531497.f_4898.f_39 != 0)
	{
		Global_2531497.f_4898.f_39 = 0;
	}
	if (bParam0)
	{
		func_698();
	}
	if (!func_47(PLAYER_ID()))
	{
		func_719();
		CLEAR_BIT(&(Global_1674852.f_3), 1);
	}
	if (IS_BIT_SET(Global_1674852.f_3, 6))
	{
		ENABLE_DISPATCH_SERVICE(3, true);
		ENABLE_DISPATCH_SERVICE(5, true);
		CLEAR_BIT(&(Global_1674852.f_3), 6);
	}
	if (IS_BIT_SET(Global_1674852.f_3, 7))
	{
		CLEAR_BIT(&(Global_1674852.f_3), 7);
	}
	if (IS_BIT_SET(Global_1674852.f_3, 8))
	{
		func_1184("IMPEXP_SELFDES", 0);
		func_1174("IMPEXP_SELFDES");
		CLEAR_BIT(&(Global_1674852.f_3), 8);
	}
	func_1172(iVar2, 0);
}

void func_1172(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!IS_BIT_SET(Global_1674852.f_3, 9))
		{
			START_AUDIO_SCENE(func_1173(iParam0));
			SET_BIT(&(Global_1674852.f_3), 9);
		}
	}
	else if (IS_BIT_SET(Global_1674852.f_3, 9))
	{
		STOP_AUDIO_SCENE(func_1173(iParam0));
		CLEAR_BIT(&(Global_1674852.f_3), 9);
	}
}

char* func_1173(int iParam0)
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		
		default:
	}
	return "";
}

void func_1174(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!IS_STRING_NULL(&(Global_111560.f_14136[iVar0 /*104*/])))
		{
			if (ARE_STRINGS_EQUAL(&(Global_111560.f_14136[iVar0 /*104*/]), sParam0))
			{
				if (Global_111560.f_14136[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_1176();
					Global_111560.f_14136[iVar0 /*104*/].f_99[Global_19486] = 0;
					if (func_1175(iVar0))
					{
					}
					else
					{
						Global_111560.f_14136[iVar0 /*104*/].f_24 = 0;
						Global_111560.f_14136[iVar0 /*104*/].f_28 = 0;
						Global_111560.f_14136[iVar0 /*104*/].f_29 = 0;
					}
					_REMOVE_NOTIFICATION(Global_111560.f_14136[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_1175(int iParam0)
{
	if ((Global_111560.f_14136[iParam0 /*104*/].f_99[0] == 1 || Global_111560.f_14136[iParam0 /*104*/].f_99[1] == 1) || Global_111560.f_14136[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_1176()
{
	if (func_1183(14))
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
		Global_19486 = func_1177();
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

var func_1177()
{
	func_1178();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_1178()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(DOES_ENTITY_EXIST()))
	{
		if (func_1181(Global_111560.f_2358.f_539.f_4321) != GET_ENTITY_MODEL(GET_ENTITY_MODEL()))
		{
			iVar0 = func_1180(PLAYER_PED_ID());
			if (func_1179(iVar0) && (!func_1183(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_1179(Global_111560.f_2358.f_539.f_4321))
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

bool func_1179(int iParam0)
{
	return iParam0 < 3;
}

int func_1180(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_1181(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_1181(int iParam0)
{
	if (func_1179(iParam0))
	{
		return func_1182(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_1182(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_1183(int iParam0)
{
	return Global_41396 == iParam0;
}

void func_1184(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!IS_STRING_NULL(&(Global_111560.f_14136[iVar0 /*104*/])))
		{
			if (ARE_STRINGS_EQUAL(&(Global_111560.f_14136[iVar0 /*104*/]), sParam0))
			{
				if (Global_111560.f_14136[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_111560.f_14136[iVar0 /*104*/].f_24 = 1;
				if (Global_111560.f_14136[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_111560.f_14136[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_111560.f_14046[0 /*20*/].f_17 = 0;
					}
					if (Global_111560.f_14136[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_111560.f_14046[1 /*20*/].f_17 = 0;
					}
					if (Global_111560.f_14136[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_111560.f_14046[2 /*20*/].f_17 = 0;
					}
					if (Global_111560.f_14136[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_111560.f_14046[3 /*20*/].f_17 = 0;
					}
					Global_111560.f_14136[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_111560.f_14136[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1185()
{
	if (func_737(PLAYER_ID()))
	{
		func_371(25);
	}
}

int func_1186(int iParam0)
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_1187(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

int func_1188(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

void func_1189(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_1193();
	}
	if (iParam0 > 0)
	{
		if (func_181() != func_398())
		{
			if (func_1029(PLAYER_ID()) == PLAYER_ID())
			{
				Global_2509053.f_93[func_1191(iParam0)] = 1;
			}
		}
		iVar0 = func_1191(159);
		if (func_1190(iVar0, Global_262145.f_12606, bParam1))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(157);
		if (func_1190(iVar0, Global_262145.f_12606, bParam1))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(148);
		if (func_1190(iVar0, Global_262145.f_12606, bParam1))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(164);
		if (func_1190(iVar0, Global_262145.f_12606, bParam1))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(142);
		if (func_1190(iVar0, Global_262145.f_12606, bParam1))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(152);
		if (func_1190(iVar0, Global_262145.f_12606, bParam1))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(166);
		if (func_1190(iVar0, Global_262145.f_12606, bParam1))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(170);
		if (func_1190(iVar0, Global_262145.f_12606, bParam1))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(173);
		if (func_1190(iVar0, Global_262145.f_12606, bParam1))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(179);
		if (func_1190(iVar0, Global_262145.f_12606, bParam1))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(200);
		if (func_1190(iVar0, Global_262145.f_12606, bParam1))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(201);
		if (func_1190(iVar0, Global_262145.f_12606, bParam1))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(182);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(183);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(185);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(186);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(180);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(195);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(197);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(198);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(207);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(208);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(209);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(214);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(215);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(216);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(217);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(218);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(219);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(220);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(221);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_1190(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_40(PLAYER_ID(), 19) && !func_40(PLAYER_ID(), 20)) && !func_40(PLAYER_ID(), 9))
		{
			return 0;
		}
	}
	if (Global_2509053.f_93[iParam0] == 1 && func_24(&(Global_2509053[iParam0 /*2*/])))
	{
		if (func_357(&(Global_2509053[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2509053.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_1191(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 11;
		
		case 157:
			return 12;
		
		case 148:
			return 13;
		
		case 164:
			return 14;
		
		case 142:
			return 15;
		
		case 152:
			return 16;
		
		case 163:
			return 17;
		
		case 155:
			return 18;
		
		case 160:
			return 19;
		
		case 153:
			return 20;
		
		case 162:
			return 21;
		
		case 154:
			return 22;
		
		case 166:
			return 8;
		
		case 170:
			return 9;
		
		case 173:
			return 10;
		
		case 171:
			return 23;
		
		case 172:
			return 24;
		
		case 179:
			return 25;
		
		case 189:
			return 26;
		
		case 193:
			return 27;
		
		case 194:
			return 28;
		
		case 199:
			return 29;
		
		case 201:
			return 30;
		
		case 200:
			return 31;
		
		case 205:
			return 32;
		
		case 210:
			return 33;
		
		case 182:
			return 34;
		
		case 183:
			return 35;
		
		case 185:
			return 36;
		
		case 186:
			return 37;
		
		case 180:
			return 38;
		
		case 195:
			return 39;
		
		case 197:
			return 40;
		
		case 198:
			return 41;
		
		case 207:
			return 42;
		
		case 208:
			return 43;
		
		case 209:
			return 44;
		
		case 211:
			return 45;
		
		case 214:
			return 0;
		
		case 215:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 3;
		
		case 218:
			return 4;
		
		case 219:
			return 5;
		
		case 220:
			return 6;
		
		case 221:
			return 7;
		
		default:
	}
	return -1;
}

void func_1192(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_1193();
	}
	if (iParam0 > 0)
	{
		if (func_181() != func_398())
		{
			Global_2509053.f_93[func_1191(iParam0)] = 1;
		}
		iVar0 = func_1191(155);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(163);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(160);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(153);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(162);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(154);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(171);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(172);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(199);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(194);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(193);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(210);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(205);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(189);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1191(211);
		if (func_1190(iVar0, Global_262145.f_12607, 0))
		{
			func_22(&(Global_2509053[iVar0 /*2*/]));
			func_397(&(Global_2509053[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_1193()
{
	char* sVar0;
	
	sVar0 = GET_THIS_SCRIPT_NAME();
	if (ARE_STRINGS_EQUAL(sVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_SELL"))
	{
		return 237;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_DEFEND"))
	{
		return 238;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_SECURITY_VAN"))
	{
		return 239;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_TARGET_PURSUIT"))
	{
		return 240;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_JEWEL_STORE_GRAB"))
	{
		return 241;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_BANK_JOB"))
	{
		return 242;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_DATA_HACK"))
	{
		return 244;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_INFILTRATION"))
	{
		return 248;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_PHONECALL"))
	{
		return 249;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_FMBB_CLUB_MANAGEMENT"))
	{
		return 250;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_GB_CASINO"))
	{
		return 243;
	}
	else if (ARE_STRINGS_EQUAL(sVar0, "FMMC_TYPE_GB_CASINO_HEIST"))
	{
		return 158;
	}
	return 0;
}

void func_1194(int iParam0)
{
	if (!func_31(Global_1628955[PLAYER_ID() /*614*/].f_11.f_337[iParam0 /*3*/], func_1195(), 0))
	{
		Global_1628955[PLAYER_ID() /*614*/].f_11.f_337[iParam0 /*3*/] = { func_1195() };
	}
	if (!func_31(Global_1628955[PLAYER_ID() /*614*/].f_11.f_324[iParam0 /*3*/], func_1195(), 0))
	{
		Global_1628955[PLAYER_ID() /*614*/].f_11.f_324[iParam0 /*3*/] = { func_1195() };
	}
}

Vector3 func_1195()
{
	vector3 vVar0;
	
	return vVar0;
}

void func_1196(int iParam0)
{
	if (!func_31(Global_1628955[PLAYER_ID() /*614*/].f_11.f_150[iParam0 /*3*/], func_1195(), 0))
	{
		Global_1628955[PLAYER_ID() /*614*/].f_11.f_150[iParam0 /*3*/] = { func_1195() };
	}
	if (!func_31(Global_1628955[PLAYER_ID() /*614*/].f_11.f_125[iParam0 /*3*/], func_1195(), 0))
	{
		Global_1628955[PLAYER_ID() /*614*/].f_11.f_125[iParam0 /*3*/] = { func_1195() };
	}
}

void func_1197()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573899 = { Var0 };
	Global_1573899.f_13 = func_398();
	if (IS_BIT_SET(Global_1573343, 3))
	{
		CLEAR_BIT(&Global_1573343, 3);
	}
}

void func_1198(bool bParam0)
{
	if (bParam0)
	{
		if (!func_1031(PLAYER_ID(), 14))
		{
			func_1200(14);
		}
	}
	else if (func_1031(PLAYER_ID(), 14))
	{
		func_1199(14);
	}
}

void func_1199(int iParam0)
{
	CLEAR_BIT(&(Global_1628955[CLEAR_BIT() /*614*/].f_11.f_5), iParam0);
}

void func_1200(int iParam0)
{
	SET_BIT(&(Global_1628955[SET_BIT() /*614*/].f_11.f_5), iParam0);
}

void func_1201(int iParam0)
{
	if (func_132(PLAYER_ID()))
	{
		if (PLAYER_ID() != iParam0)
		{
			if (Global_1628955[PLAYER_ID() /*614*/].f_11.f_484 != iParam0)
			{
				Global_1628955[PLAYER_ID() /*614*/].f_11.f_484 = iParam0;
				if (iParam0 != func_398())
				{
				}
			}
		}
	}
}

void func_1202(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_301(iParam0, iParam1) && func_1219(iParam0, iParam1))
	{
		iVar0 = func_300(iParam0, iParam1);
		func_1206(iVar0, bParam2, bParam3);
		func_1203(iVar0, 1);
	}
}

void func_1203(int iParam0, bool bParam1)
{
	if (!func_1205(iParam0))
	{
		return;
	}
	func_287(func_1204(iParam0), bParam1, -1, 1);
	Global_1590446[PLAYER_ID() /*871*/].f_273.f_179[iParam0 /*12*/].f_6 = bParam1;
}

int func_1204(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

bool func_1205(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_1206(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_914(PLAYER_ID(), iParam0);
	if (!bParam1)
	{
		func_1218(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2507929[iParam0];
		iVar0 = func_1217(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1676736 = -1;
		}
		func_1216(iParam0, 0, bParam2);
	}
	else if (func_1214(iParam0, bParam2))
	{
		iVar0 = func_1213(iVar2, 0);
		iVar3 = func_989(PLAYER_ID(), iVar2);
		iVar4 = func_1212(iVar2, bParam2);
		iVar5 = func_1213(iVar2, bParam2);
		fVar6 = (to_float(iVar5) / to_float(iVar4));
		iVar0 = (iVar0 - round((to_float(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_1211(iVar2) && func_1210(PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_1218(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_1209(PLAYER_ID(), iVar2) > 0)
		{
			func_1208(iParam0, (Global_1590446[PLAYER_ID() /*871*/].f_273.f_179[iParam0 /*12*/].f_2 - (func_1212(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_1213(iVar2, bParam2) / func_1209(PLAYER_ID(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_1211(iVar2) && func_1210(PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_1207(PLAYER_ID(), iVar2, iVar0, bParam2);
}

void func_1207(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_398())
	{
		return;
	}
	if (func_294(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1590446[iParam0 /*871*/].f_273.f_253 = iParam2;
				}
				else
				{
					Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_1208(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1590446[PLAYER_ID() /*871*/].f_273.f_179[iParam0 /*12*/].f_2)
	{
		Global_1590446[PLAYER_ID() /*871*/].f_273.f_179[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_1209(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_398())
	{
		return 0;
	}
	if (func_294(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1210(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_398())
	{
		return 0;
	}
	if (func_294(iParam1) && func_1211(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/] == iParam1)
			{
				return Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_1211(int iParam0)
{
	return func_176(iParam0) == 5;
}

int func_1212(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_176(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16938;
			if (func_299(PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16943;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_16937;
			if (func_299(PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16942;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_16936;
			if (func_299(PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16941;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_16934;
			if (func_299(PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16939;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_16935;
			if (func_299(PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16940;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_21062;
				if (func_299(PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21063;
				}
			}
			else
			{
				uVar0 = Global_262145.f_21046;
				if (func_299(PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21047;
				}
			}
			break;
	}
	return uVar0;
}

int func_1213(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_176(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16919;
			if (func_299(PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16928);
			}
			if (func_299(PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16933);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16920;
			if (func_299(PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16927);
			}
			if (func_299(PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16932);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16921;
			if (func_299(PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16926);
			}
			if (func_299(PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16931);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16922;
			if (func_299(PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16924);
			}
			if (func_299(PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16929);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16923;
			if (func_299(PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16925);
			}
			if (func_299(PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16930);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_21059;
			}
			else
			{
				iVar0 = Global_262145.f_21043;
			}
			if (func_299(PLAYER_ID(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21060);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21044);
				}
			}
			if (func_299(PLAYER_ID(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21061);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21045);
				}
			}
			if (func_1210(PLAYER_ID(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_1214(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_288(15384, -1, -1);
	}
	return func_288(func_1215(iParam0), -1, -1);
}

int func_1215(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		case 5:
			return 15372;
		
		default:
	}
	return 9416;
}

void func_1216(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		func_287(15384, bParam1, -1, 1);
		return;
	}
	func_287(func_1215(iParam0), bParam1, -1, 1);
}

int func_1217(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2507929[iParam0];
	iVar1 = func_914(PLAYER_ID(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2507936;
	}
	if (func_1211(iVar1))
	{
		if (func_1210(PLAYER_ID(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_1218(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2507936 = iParam1;
		return;
	}
	Global_2507929[iParam0] = iParam1;
}

int func_1219(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_301(iParam0, iParam1))
	{
		iVar0 = func_300(iParam0, iParam1);
		if (Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_4 > 0 && Global_1590446[iParam0 /*871*/].f_273.f_179[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_1220()
{
	CLEAR_BIT(&(Global_2531497.f_1737), 28);
	CLEAR_BIT(&(Global_2531497.f_1737), 29);
	func_1221(24);
}

void func_1221(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	CLEAR_BIT(&(Global_2531497.f_4898.f_7[iVar0]), iVar1);
}

void func_1222(bool bParam0)
{
	if (bParam0)
	{
		if (!IS_BIT_SET(Global_2531497.f_1734, 9))
		{
			SET_BIT(&(Global_2531497.f_1734), 9);
		}
	}
	else if (IS_BIT_SET(Global_2531497.f_1734, 9))
	{
		CLEAR_BIT(&(Global_2531497.f_1734), 9);
	}
}

void func_1223(struct<21> Param0)
{
	int iVar0;
	
	func_1275();
	func_1273(func_1274(Param0), Param0);
	RESERVE_NETWORK_MISSION_PEDS(1);
	func_1272(0, -1, 0);
	if (func_411())
	{
		func_1230(0, 0, 0);
	}
	else
	{
		func_1228(136);
	}
	NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_112, 199);
	NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_113, 257);
	if (!func_1227())
	{
		func_1162();
	}
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_112.f_3[iVar0] = func_398();
				iVar0++;
			}
			_0x6DEE77AFF8C21BD1(&(Local_112.f_179), &(Local_112.f_180));
		}
		Local_1296.f_2 = _0xCF61D4B4702EE9EB();
		Local_1296.f_8 = 0xF12E6CD06C73D69E();
		func_776(24, 1);
		func_1224();
		if (func_1010(1))
		{
		}
		Local_113[PARTICIPANT_ID_TO_INT() /*8*/] = 0;
	}
	else
	{
		func_1162();
	}
}

void func_1224()
{
	int iVar0;
	
	ADD_RELATIONSHIP_GROUP("relPennedInPlayer", &iLocal_131);
	ADD_RELATIONSHIP_GROUP("relUWAi", &iLocal_132);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574964[iVar0], iLocal_131);
		SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_131, Global_1574964[iVar0]);
		iVar0++;
	}
	SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_131, iLocal_132);
	SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_132, iLocal_131);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, iLocal_132);
	SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, iLocal_131);
	func_1226(1, &iLocal_132);
	func_1225(&iLocal_132);
	func_1225(&iLocal_131);
}

void func_1225(int iParam0)
{
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1865950624, *iParam0);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1865950624);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, 296331235, *iParam0);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 296331235);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1166638144, *iParam0);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 1166638144);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2037579709, *iParam0);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 2037579709);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, *iParam0);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 2017343592);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1821475077, *iParam0);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1821475077);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1782292358, *iParam0);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 1782292358);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1033021910, *iParam0);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1033021910);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1285976420, *iParam0);
	SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1285976420);
}

void func_1226(int iParam0, int iParam1)
{
	SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, -1533126372, *iParam1);
	SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *iParam1, -1533126372);
	SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, -472287501, *iParam1);
	SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *iParam1, -472287501);
	SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, -183807561, *iParam1);
	SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *iParam1, -183807561);
}

int func_1227()
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
		if (func_1157())
		{
			return 0;
		}
		if (func_1155(157))
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

void func_1228(int iParam0)
{
	func_770();
	func_1229();
	func_772();
	Global_1574647.f_4 = iParam0;
	Global_1574647.f_5 = iParam0;
	func_858(iParam0, -1);
	func_165(&(Global_1574647.f_18), 0, 0);
	Global_2531497.f_4588 = 0;
	Global_2460066[0] = func_398();
	Global_2460066[1] = func_398();
	Global_2460066[2] = func_398();
	Global_2460066[3] = func_398();
	Global_2460066[4] = func_398();
	func_768();
	if (!func_1027(func_1028()))
	{
		func_567();
	}
	if (func_44() && !func_373())
	{
		SET_BIT(&(Global_1574647.f_1), 16);
	}
	else
	{
		SET_BIT(&(Global_1574647.f_1), 17);
	}
}

void func_1229()
{
	var uVar0;
	
	Global_1574672 = uVar0;
}

void func_1230(int iParam0, int iParam1, bool bParam2)
{
	func_1271();
	if (func_1041(PLAYER_ID()))
	{
		func_1233(1);
	}
	if ((iParam0 != 0 && NETWORK_IS_PLAYER_ACTIVE(iParam1)) && func_1232(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				SET_BIT(&Global_1674847, 0);
				break;
			}
	}
	if (!func_175() && !func_131(PLAYER_ID(), 1))
	{
		if (func_374())
		{
			func_720(3);
		}
	}
	func_720(4);
	if (func_179(0))
	{
		Global_1628955[PLAYER_ID() /*614*/].f_11.f_57 = func_181();
	}
	if (func_152(iParam0))
	{
		func_1114();
		Global_1674879.f_18 = func_985(func_248());
	}
	else if (func_151(func_412(PLAYER_ID())))
	{
		func_1112();
		Global_1674933.f_18 = func_985(func_248());
	}
	if (bParam2)
	{
		if (!func_368())
		{
			func_721(1);
		}
	}
	func_1231();
}

void func_1231()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1363235.f_534[iVar0 /*42*/].f_1 = func_398();
		Global_1363235.f_534[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

int func_1232(int iParam0, bool bParam1)
{
	return func_246(PLAYER_ID(), iParam0, bParam1);
}

void func_1233(bool bParam0)
{
	int iVar0;
	
	func_1221(33);
	func_1221(34);
	func_1221(35);
	func_1221(36);
	func_1221(37);
	func_1221(38);
	func_1221(39);
	func_1221(40);
	func_1221(43);
	func_1221(41);
	func_1221(54);
	func_1221(42);
	func_1221(47);
	func_1270(23);
	func_1270(24);
	func_1221(92);
	CLEAR_BIT(&(Global_2531497.f_1737), 2);
	func_1269();
	func_1264();
	func_1259();
	func_1254();
	func_1243();
	func_1239();
	func_1235();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2531497.f_4898.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_1234(3))
	{
		func_1270(3);
	}
	else if (func_1234(4))
	{
		func_1270(4);
	}
	else if (func_1234(5))
	{
		func_1270(5);
	}
	else if (func_1234(6))
	{
		func_1270(6);
	}
	else if (func_1234(7))
	{
		func_1270(7);
	}
	else if (((((((((((((((((func_1234(0) || func_1234(1)) || func_1234(2)) || func_1234(8)) || func_1234(9)) || func_1234(10)) || func_1234(11)) || func_1234(12)) || func_1234(13)) || func_1234(14)) || func_1234(15)) || func_1234(16)) || func_1234(17)) || func_1234(18)) || func_1234(19)) || func_1234(20)) || func_1234(21)) || func_1234(22))
	{
		func_1270(8);
		func_1270(0);
		func_1270(1);
		func_1270(2);
		func_1270(9);
		func_1270(10);
		func_1270(11);
		func_1270(12);
		func_1270(13);
		func_1270(14);
		func_1270(15);
		func_1270(16);
		func_1270(17);
		func_1270(18);
		func_1270(19);
		func_1270(20);
		func_1270(21);
		func_1270(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2531497.f_4898.f_14[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_1234(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return IS_BIT_SET(Global_2531497.f_4898.f_14[iVar0], iVar1);
}

void func_1235()
{
	if (func_1237())
	{
		func_1236(0);
		func_1236(1);
		func_1236(2);
		func_1236(3);
	}
}

void func_1236(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	CLEAR_BIT(&(Global_2531497.f_4898.f_33[iVar0]), iVar1);
}

int func_1237()
{
	if (((func_1238(0) || func_1238(1)) || func_1238(2)) || func_1238(3))
	{
		return 1;
	}
	return 0;
}

bool func_1238(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return IS_BIT_SET(Global_2531497.f_4898.f_33[iVar0], iVar1);
}

void func_1239()
{
	if (func_1241())
	{
		func_1240(4);
		func_1240(5);
		func_1240(6);
		func_1240(7);
	}
}

void func_1240(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	CLEAR_BIT(&(Global_2531497.f_4898.f_31[iVar0]), iVar1);
}

int func_1241()
{
	if (((func_1242(4) || func_1242(5)) || func_1242(6)) || func_1242(7))
	{
		return 1;
	}
	return 0;
}

bool func_1242(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return IS_BIT_SET(Global_2531497.f_4898.f_31[iVar0], iVar1);
}

void func_1243()
{
	int iVar0;
	
	if (func_1253())
	{
		func_1252(8);
		func_1252(9);
		func_1252(10);
		func_1252(12);
		func_1252(13);
		func_1252(14);
		func_1252(19);
		func_1252(20);
		func_1252(21);
		func_1252(22);
		func_1252(23);
		func_1252(24);
		func_1252(25);
		func_1252(26);
		func_1252(15);
		func_1252(16);
		func_1252(17);
		func_1252(18);
		func_1252(35);
		func_1252(45);
		func_1252(46);
		if (func_1251(11))
		{
			func_1252(11);
			iVar0 = func_50(7226, -1, 0);
			SET_BIT(&iVar0, 2);
			func_159(7226, iVar0, -1, 1, 0);
		}
	}
	if (func_1251(48))
	{
		if (func_1249(151, 3))
		{
			func_1247(151, 3);
		}
		func_1252(48);
	}
	if (func_1251(49))
	{
		if (func_1249(152, 3))
		{
			func_1247(152, 3);
		}
		func_1252(49);
	}
	if (func_1251(50))
	{
		if (func_1249(153, 3))
		{
			func_1247(153, 3);
		}
		func_1252(50);
	}
	if (func_1251(51))
	{
		if (func_1249(func_1244(), 3))
		{
			func_1247(func_1244(), 3);
		}
		func_1252(51);
	}
}

int func_1244()
{
	if (func_1246())
	{
		func_1245(154, Global_19486, 1);
	}
	return 154;
}

void func_1245(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111560.f_28045[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

int func_1246()
{
	int iVar0;
	
	iVar0 = func_119(PLAYER_ID());
	if (((iVar0 != PLAYER_ID() && iVar0 != func_398()) && PLAYER_ID(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_1247(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_117[iParam0 /*10*/].f_8 != 150)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_1248(iParam0, iVar0, 0);
			func_1245(iParam0, iVar0, 0);
		}
	}
}

void func_1248(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111560.f_28045[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_1249(int iParam0, int iParam1)
{
	if (func_1250(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_1250(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_12[iParam1];
}

bool func_1251(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return IS_BIT_SET(Global_2531497.f_4898.f_26[iVar0], iVar1);
}

void func_1252(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	CLEAR_BIT(&(Global_2531497.f_4898.f_26[iVar0]), iVar1);
}

int func_1253()
{
	if (((((((((((((((((((((func_1251(8) || func_1251(9)) || func_1251(10)) || func_1251(12)) || func_1251(11)) || func_1251(13)) || func_1251(14)) || func_1251(19)) || func_1251(20)) || func_1251(21)) || func_1251(22)) || func_1251(23)) || func_1251(24)) || func_1251(25)) || func_1251(26)) || func_1251(15)) || func_1251(16)) || func_1251(17)) || func_1251(18)) || func_1251(35)) || func_1251(45)) || func_1251(46))
	{
		return 1;
	}
	return 0;
}

void func_1254()
{
	if (func_1258())
	{
		func_1257(0);
		func_1257(1);
		func_1257(2);
		func_1257(3);
		func_1257(4);
		func_1257(5);
		if (func_1256(32))
		{
			if (func_1249(func_1255(), 3))
			{
				func_1247(func_1255(), 3);
			}
			func_1257(32);
		}
	}
}

int func_1255()
{
	if (func_1246())
	{
		func_1245(12, Global_19486, 1);
	}
	return 12;
}

bool func_1256(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return IS_BIT_SET(Global_2531497.f_4898.f_23[iVar0], iVar1);
}

void func_1257(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	CLEAR_BIT(&(Global_2531497.f_4898.f_23[iVar0]), iVar1);
}

int func_1258()
{
	if ((((func_1256(1) || func_1256(0)) || func_1256(2)) || func_1256(4)) || func_1256(5))
	{
		return 1;
	}
	return 0;
}

void func_1259()
{
	if (func_1263())
	{
		func_1262(0);
		func_1262(1);
		func_1262(2);
		func_1262(3);
		func_1262(4);
		func_1262(5);
		func_1262(6);
		func_1262(7);
		if (func_1261(8))
		{
			func_1262(8);
		}
		if (func_1261(15))
		{
			if (func_1249(func_1260(), 3))
			{
				func_1247(func_1260(), 3);
			}
			func_1262(15);
		}
	}
}

int func_1260()
{
	if (func_1246())
	{
		func_1245(20, Global_19486, 1);
	}
	return 20;
}

bool func_1261(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return IS_BIT_SET(Global_2531497.f_4898.f_21[iVar0], iVar1);
}

void func_1262(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	CLEAR_BIT(&(Global_2531497.f_4898.f_21[iVar0]), iVar1);
}

int func_1263()
{
	if ((((((((func_1261(0) || func_1261(1)) || func_1261(2)) || func_1261(3)) || func_1261(4)) || func_1261(5)) || func_1261(6)) || func_1261(7)) || func_1261(8))
	{
		return 1;
	}
	return 0;
}

void func_1264()
{
	if (func_1268())
	{
		func_1267(0);
		func_1267(1);
		func_1267(2);
		func_1267(3);
		func_1267(4);
		func_1267(5);
		func_1267(6);
		func_1267(7);
		func_1267(8);
		func_1267(9);
		func_1267(10);
		func_1267(11);
		func_1267(12);
		if (func_1266(13))
		{
			if (func_1249(func_1265(), 3))
			{
				func_1247(func_1265(), 3);
			}
			func_1267(13);
		}
	}
}

int func_1265()
{
	if (func_1246())
	{
		func_1245(76, Global_19486, 1);
	}
	return 76;
}

bool func_1266(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return IS_BIT_SET(Global_2531497.f_4898.f_19[iVar0], iVar1);
}

void func_1267(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	CLEAR_BIT(&(Global_2531497.f_4898.f_19[iVar0]), iVar1);
}

int func_1268()
{
	if ((((((((((((func_1266(0) || func_1266(1)) || func_1266(2)) || func_1266(3)) || func_1266(4)) || func_1266(5)) || func_1266(6)) || func_1266(7)) || func_1266(8)) || func_1266(9)) || func_1266(10)) || func_1266(11)) || func_1266(12))
	{
		return 1;
	}
	return 0;
}

void func_1269()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2531497.f_4898.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_1270(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	CLEAR_BIT(&(Global_2531497.f_4898.f_14[iVar0]), iVar1);
}

void func_1271()
{
	struct<14> Var0;
	
	Global_1674861 = { Var0 };
	Global_1674861.f_14 = 0;
	Global_1674861.f_15 = 0;
}

int func_1272(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_1163();
			}
			else
			{
				return 0;
			}
		}
		if (!func_753())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_1163();
					}
					else
					{
						return 0;
					}
				}
				if (func_1157())
				{
					if (!bParam2)
					{
						func_1163();
					}
					else
					{
						return 0;
					}
				}
				if (func_1155(157))
				{
					if (!bParam2)
					{
						func_1163();
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
					func_1163();
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
				func_1163();
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
			func_1163();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_1273(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_1163();
	}
	NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_16);
}

int func_1274(int iParam0)
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

void func_1275()
{
	struct<42> Var0;
	int iVar1;
	
	Var0 = -1;
	Var0.f_22 = -1082130432;
	Var0.f_23 = 3;
	Var0.f_39 = -1;
	Var0.f_41 = -1;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		Global_1365114[iVar1 /*42*/] = { Var0 };
		iVar1++;
	}
}

int func_1276(int iParam0, bool bParam1, bool bParam2)
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

__________________________
Native Named by Reliency
1577160341
__________________________
